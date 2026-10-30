// Camera-independent regression tests for PointGrey's production queue/writer.
#include <DUNE/Config.hpp>
#if defined(DUNE_OS_LINUX)
#include "../../src/Vision/PointGrey/SaveImage.hpp"
#include <DUNE/Tasks/Context.hpp>
#include <chrono>
#include <csignal>
#include <iostream>
#include <thread>
#include <sys/resource.h>
#if defined(DUNE_SYS_HAS_EXIV2)
#include <exiv2/exiv2.hpp>
#endif

using namespace Vision::PointGrey;

static void require(bool condition, const char* message)
{
  if (!condition) throw std::runtime_error(message);
}

static ImageJob sample(const std::string& path, unsigned width = 48, unsigned height = 32)
{
  ImageJob job;
  job.path = path;
  job.width = width;
  job.height = height;
  job.quality = 90;
  job.pixels.resize(size_t(width) * height * 3);
  // Uniform red exposes accidental BGR/RGB swapping.
  for (size_t i = 0; i < job.pixels.size(); i += 3) job.pixels[i] = 240;
  const unsigned char exif[] = {'E', 'x', 'i', 'f', 0, 0, 'I', 'I', 42, 0,
                               8, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  job.exif.assign(exif, exif + sizeof(exif));
#if defined(DUNE_SYS_HAS_EXIV2)
  Exiv2::ExifData metadata;
  metadata["Exif.Photo.DateTimeOriginal"] = "2026:09:07 12:34:56";
  metadata["Exif.Photo.SubSecTimeOriginal"] = "123456";
  metadata["Exif.Photo.UserComment"] = "Depth: 12 m # Altitude: 3 m";
  metadata["Exif.GPSInfo.GPSLatitude"] = "0/1 30/1 0/1";
  metadata["Exif.GPSInfo.GPSLatitudeRef"] = "S";
  Exiv2::Blob tiff;
  Exiv2::ExifParser::encode(tiff, Exiv2::littleEndian, metadata);
  job.exif.resize(6);
  job.exif.insert(job.exif.end(), tiff.begin(), tiff.end());
#endif
  return job;
}

static void checkJPEG(const ImageJob& job)
{
  FILE* file = std::fopen(job.path.c_str(), "rb");
  require(file != NULL, "JPEG missing");
  jpeg_decompress_struct info = {};
  jpeg_error_mgr error = {};
  info.err = jpeg_std_error(&error);
  jpeg_create_decompress(&info);
  jpeg_stdio_src(&info, file);
  jpeg_save_markers(&info, JPEG_APP0 + 1, 65535);
  jpeg_read_header(&info, TRUE);
  require(info.image_width == job.width && info.image_height == job.height, "wrong dimensions");
  require(info.marker_list && info.marker_list->data_length == job.exif.size() &&
          !std::memcmp(info.marker_list->data, &job.exif[0], job.exif.size()), "EXIF changed");
  info.out_color_space = JCS_RGB;
  jpeg_start_decompress(&info);
  std::vector<unsigned char> row(info.output_width * 3);
  while (info.output_scanline < info.output_height)
  {
    JSAMPROW data = &row[0];
    jpeg_read_scanlines(&info, &data, 1);
    require(row[0] > 220 && row[1] < 15 && row[2] < 15, "wrong RGB channels");
  }
  jpeg_finish_decompress(&info);
  jpeg_destroy_decompress(&info);
  std::fclose(file);
#if defined(DUNE_SYS_HAS_EXIV2)
  auto image = Exiv2::ImageFactory::open(job.path);
  require(image.get() != NULL, "Exiv2 could not open JPEG");
  image->readMetadata();
  auto& metadata = image->exifData();
  require(metadata["Exif.Photo.DateTimeOriginal"].toString() == "2026:09:07 12:34:56",
          "EXIF date round trip failed");
  require(metadata["Exif.Photo.SubSecTimeOriginal"].toString() == "123456",
          "EXIF subseconds round trip failed");
  require(metadata["Exif.GPSInfo.GPSLatitudeRef"].toString() == "S",
          "EXIF hemisphere round trip failed");
  require(metadata["Exif.Photo.UserComment"].toString().find("Depth: 12 m") != std::string::npos,
          "EXIF comment round trip failed");
#endif
}

static bool fails(const ImageJob& job)
{
  try { SaveImage::write(job); }
  catch (const std::exception&) { return true; }
  return false;
}

struct TestTask: DUNE::Tasks::Task
{
  using DUNE::Tasks::Task::onEntityReservation;
  TestTask(DUNE::Tasks::Context& context): DUNE::Tasks::Task("PointGreyWriterTest", context) {}
  void onMain(void) {}
};

static void benchmark(TestTask& task, const std::string& root)
{
  ImageJob base = sample("", 1296, 964);
  base.quality = 65;
  uint32_t random = 1;
  for (auto& pixel: base.pixels)
  {
    random = random * 1664525U + 1013904223U;
    pixel = static_cast<unsigned char>(random >> 24);
  }
  for (unsigned count: {1U, 2U, 4U})
  {
    ImageQueue queue;
    queue.configure(25, 128 * 1024 * 1024);
    std::vector<std::unique_ptr<SaveImage> > workers;
    for (unsigned i = 0; i < count; ++i)
    {
      workers.emplace_back(new SaveImage(&task, queue));
      workers.back()->start();
    }
    const auto start = std::chrono::steady_clock::now();
    for (unsigned i = 0; i < 64; ++i)
    {
      while (!queue.hasCapacity(base.bytes()))
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
      std::unique_ptr<ImageJob> job(new ImageJob(base));
      job->path = root + "/bench-" + std::to_string(i) + ".jpg";
      require(queue.push(job), "benchmark admission failed");
    }
    queue.close();
    queue.drain();
    for (auto& worker: workers) worker->join();
    double seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
    require(queue.statistics().saved == 64 && queue.statistics().failed == 0, "benchmark writes failed");
    std::cout << count << " workers: " << 64 / seconds
              << " JPEG/s (synthetic 1296x964 noise, Q65, fsync off; excludes camera)\n";
    for (unsigned i = 0; i < 64; ++i)
      ::unlink((root + "/bench-" + std::to_string(i) + ".jpg").c_str());
  }
}

int main(int argc, char** argv)
{
  char directory[] = "/tmp/dune-pointgrey-test-XXXXXX";
  try
  {
    require(::mkdtemp(directory) != NULL, "mkdtemp failed");
    const std::string root(directory);
    ImageJob job = sample(root + "/red.jpg");
    job.durable = true;
    SaveImage::write(job);
    checkJPEG(job);
    require(::access((job.path + ".part").c_str(), F_OK) != 0, "staging file leaked");
    require(fails(job), "existing image was overwritten");
    checkJPEG(job);
    ImageJob invalid = job;
    invalid.path = root + "/invalid.jpg";
    invalid.pixels.clear();
    require(fails(invalid), "invalid pixels accepted");
    invalid = job;
    invalid.path = root + "/invalid.jpg";
    invalid.exif.resize(65534);
    require(fails(invalid), "oversize EXIF accepted");

    // Exercise the libjpeg fatal error callback, not just fopen failure.
    struct rlimit previous;
    require(::getrlimit(RLIMIT_FSIZE, &previous) == 0, "getrlimit failed");
    struct rlimit limited = previous;
    limited.rlim_cur = 128;
    auto old_signal = std::signal(SIGXFSZ, SIG_IGN);
    require(::setrlimit(RLIMIT_FSIZE, &limited) == 0, "setrlimit failed");
    ImageJob too_large = sample(root + "/full.jpg", 1920, 1080);
    bool rejected = fails(too_large);
    require(::setrlimit(RLIMIT_FSIZE, &previous) == 0, "restore rlimit failed");
    std::signal(SIGXFSZ, old_signal);
    require(rejected, "short write reported success");
    require(::access(too_large.path.c_str(), F_OK) != 0, "partial JPEG published");
    require(::access((too_large.path + ".part").c_str(), F_OK) != 0, "failed staging file leaked");
    SaveImage::write(too_large);
    checkJPEG(too_large);

    ImageQueue queue;
    queue.configure(1, job.bytes());
    std::unique_ptr<ImageJob> first(new ImageJob(job));
    require(queue.push(first) && !first, "ownership not transferred");
    first.reset(new ImageJob(job));
    require(!queue.push(first) && first, "full queue accepted image");
    auto pending = queue.pop();
    require(!queue.hasCapacity(), "active worker escaped queue limit");
    queue.complete(pending->bytes(), true);
    pending.reset();
    queue.close();
    require(!queue.push(first), "closed queue accepted work");
    require(!queue.pop(), "closed empty queue failed to terminate");
    queue.configure(5, job.bytes() - 1);
    require(!queue.push(first), "memory bound ignored");
    queue.close();

    // Production workers must drain on close and survive a failed image.
    DUNE::Tasks::Context context;
    TestTask task(context);
    task.onEntityReservation();
    queue.configure(128, 16 * 1024 * 1024);
    std::vector<std::unique_ptr<SaveImage> > workers;
    for (unsigned i = 0; i < 4; ++i)
    {
      workers.emplace_back(new SaveImage(&task, queue));
      workers.back()->start();
    }
    for (unsigned i = 0; i < 100; ++i)
    {
      std::unique_ptr<ImageJob> item(new ImageJob(sample(root + "/" + std::to_string(i) + ".jpg")));
      // Unique metadata catches cross-frame association errors.
      item->exif.push_back(static_cast<unsigned char>(i));
      require(queue.push(item), "unexpected queue rejection");
    }
    first.reset(new ImageJob(sample(root + "/missing/error.jpg")));
    require(queue.push(first), "error test job rejected");
    first.reset(new ImageJob(sample(root + "/after-error.jpg")));
    require(queue.push(first), "recovery test job rejected");
    queue.close();
    queue.drain();
    for (auto& worker: workers) worker->join();
    const auto stats = queue.statistics();
    require(stats.saved == 101 && stats.failed == 1 && stats.pending == 0 && stats.bytes == 0,
            "drain/statistics mismatch");
    for (unsigned i = 0; i < 100; ++i)
    {
      ImageJob written = sample(root + "/" + std::to_string(i) + ".jpg");
      written.exif.push_back(static_cast<unsigned char>(i));
      checkJPEG(written);
      ::unlink(written.path.c_str());
    }
    checkJPEG(sample(root + "/after-error.jpg"));
    ::unlink((root + "/after-error.jpg").c_str());
    ::unlink(job.path.c_str());
    ::unlink(too_large.path.c_str());
    if (argc > 1 && std::string(argv[1]) == "--benchmark")
      benchmark(task, root);
    require(::rmdir(directory) == 0, "unexpected test artifacts");
    std::cout << "PointGrey: JPEG/RGB/EXIF, durability, collision, short write, queue bounds, "
                 "parallel drain and error recovery passed\n";
    return 0;
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << " (artifacts: " << directory << ")\n";
    return 1;
  }
}
#else
int main(void) { return 0; }
#endif
