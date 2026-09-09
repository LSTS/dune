//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef VISION_POINTGREY_SAVEIMAGE_HPP_INCLUDED_
#define VISION_POINTGREY_SAVEIMAGE_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <fstream>
#include <memory>
#include <queue>
#include <unistd.h>
#include <vector>
#if defined(__linux__)
#include <linux/fs.h>
#include <sys/syscall.h>
#endif
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
#include <flycapture/FlyCapture2.h>
#else
#include <setjmp.h>
#if defined(DUNE_SYS_HAS_JPEG)
#include <jpeglib.h>
#else
#include <jpeg/jpeglib.h>
#endif
#endif

namespace Vision
{
  namespace PointGrey
  {
    //! Largest baseline JPEG dimension supported by the image writers.
    static const unsigned c_jpeg_max_dimension = 65500;

    //! An immutable snapshot owned by the queue, including RGB pixels and EXIF.
    struct ImageJob
    {
      std::vector<unsigned char> pixels;
      std::vector<unsigned char> exif;
      std::string path;
      unsigned width = 0;
      unsigned height = 0;
      unsigned quality = 65;
      bool durable = false;

      size_t
      bytes(void) const
      {
        return pixels.size() + exif.size();
      }
    };

    //! Bounds include work currently being written, not just waiting images.
    class ImageQueue
    {
    public:
      struct Statistics
      {
        uint64_t saved = 0;
        uint64_t failed = 0;
        unsigned pending = 0;
        size_t bytes = 0;
      };

      void
      configure(unsigned count, size_t bytes)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        if (m_stats.pending)
          throw std::runtime_error("cannot reconfigure a nonempty image queue");
        m_limit_count = count;
        m_limit_bytes = bytes;
        m_closed = false;
        m_stats = Statistics();
      }

      //! Single producer. Caller retains ownership if admission fails.
      bool
      push(std::unique_ptr<ImageJob>& job)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        if (m_closed || m_stats.pending >= m_limit_count
            || job->bytes() > m_limit_bytes - m_stats.bytes)
          return false;
        const size_t bytes = job->bytes();
        m_jobs.push(std::move(job));
        ++m_stats.pending;
        m_stats.bytes += bytes;
        m_condition.signal();
        return true;
      }

      bool
      hasCapacity(size_t bytes = 1)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        return !m_closed && m_stats.pending < m_limit_count && bytes <= m_limit_bytes - m_stats.bytes;
      }

      std::unique_ptr<ImageJob>
      pop(void)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        while (m_jobs.empty() && !m_closed)
          m_condition.wait();
        if (m_jobs.empty())
          return std::unique_ptr<ImageJob>();
        std::unique_ptr<ImageJob> job = std::move(m_jobs.front());
        m_jobs.pop();
        return job;
      }

      void
      complete(size_t bytes, bool success)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        --m_stats.pending;
        m_stats.bytes -= bytes;
        if (success)
          ++m_stats.saved;
        else
          ++m_stats.failed;
        m_condition.broadcast();
      }

      Statistics
      statistics(void)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        return m_stats;
      }

      void
      drain(void)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        while (m_stats.pending)
          m_condition.wait();
      }

      //! Workers finish every admitted image before leaving.
      void
      close(void)
      {
        DUNE::Concurrency::ScopedCondition lock(m_condition);
        m_closed = true;
        m_condition.broadcast();
      }

    private:
      DUNE::Concurrency::Condition m_condition;
      std::queue<std::unique_ptr<ImageJob>> m_jobs;
      Statistics m_stats;
      unsigned m_limit_count = 0;
      size_t m_limit_bytes = 0;
      bool m_closed = true;
    };

    //! Direct RGB -> JPEG with APP1 EXIF; no OpenCV or second file rewrite.
    class SaveImage: public DUNE::Concurrency::Thread
    {
    public:
      SaveImage(DUNE::Tasks::Task* task, ImageQueue& queue):
        m_task(task),
        m_queue(queue)
      { }

      void
      run(void)
      {
        for (;;)
        {
          std::unique_ptr<ImageJob> job = m_queue.pop();
          if (!job)
            return;
          bool success = false;
          try
          {
            write(*job);
            success = true;
          }
          catch (const std::exception& e)
          {
            m_task->err("image write failed (%s): %s", job->path.c_str(), e.what());
          }
          catch (...)
          {
            m_task->err("image write failed (%s): unknown error", job->path.c_str());
          }
          const size_t bytes = job->bytes();
          job.reset();
          m_queue.complete(bytes, success);
        }
      }

      //! Public to allow testing the actual writer without a camera.
      static void
      write(const ImageJob& job)
      {
        if (!job.width || !job.height || job.width > c_jpeg_max_dimension
            || job.height > c_jpeg_max_dimension
            || uint64_t(job.pixels.size()) != uint64_t(job.width) * job.height * 3
            || job.exif.size() > 65533 || job.quality < 1 || job.quality > 100)
          throw std::runtime_error("invalid JPEG input");

#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
        writeWithFlyCapture(job);
#else
        // Exclusive staging file. A failed write never looks like a complete JPEG.
        std::string temporary = job.path + ".part";
        int fd = ::open(temporary.c_str(), O_WRONLY | O_CREAT | O_EXCL, 0644);
        if (fd < 0)
          throw std::runtime_error(std::strerror(errno));
        FILE* file = ::fdopen(fd, "wb");
        if (!file)
        {
          int error = errno;
          ::close(fd);
          ::unlink(temporary.c_str());
          throw std::runtime_error(std::strerror(error));
        }
        try
        {
          char error[JMSG_LENGTH_MAX] = { 0 };
          if (!encode(file, job, error))
            throw std::runtime_error(error);
          if (std::fflush(file) != 0 || (job.durable && ::fsync(fd) != 0))
            throw std::runtime_error(std::strerror(errno));
          int result = std::fclose(file);
          file = NULL;
          if (result != 0)
            throw std::runtime_error(std::strerror(errno));
          publish(temporary, job.path);
        }
        catch (...)
        {
          if (file)
            std::fclose(file);
          ::unlink(temporary.c_str());
          throw;
        }
        ::unlink(temporary.c_str());
        if (job.durable)
        {
          const std::string directory = DUNE::FileSystem::Path(job.path).dirname().str();
          int directory_fd = ::open(directory.c_str(), O_RDONLY | O_DIRECTORY);
          if (directory_fd < 0)
            throw std::runtime_error(std::strerror(errno));
          int result = ::fsync(directory_fd);
          int error = errno;
          ::close(directory_fd);
          if (result != 0)
            throw std::runtime_error(std::strerror(error));
        }
#endif
      }

    private:
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      static void
      appendExif(const std::string& source, const std::vector<unsigned char>& exif)
      {
        if (exif.empty())
          return;

        const std::string destination = source + ".exif";
        std::ifstream input(source.c_str(), std::ios::binary);
        std::ofstream output(destination.c_str(), std::ios::binary | std::ios::trunc);
        try
        {
          unsigned char soi[2] = { 0, 0 };
          if (!input.read(reinterpret_cast<char*>(soi), sizeof(soi)) || soi[0] != 0xff
              || soi[1] != 0xd8)
            throw std::runtime_error("FlyCapture did not produce a JPEG");

          const unsigned length = unsigned(exif.size()) + 2;
          const unsigned char app1[] = { 0xff, 0xe1, static_cast<unsigned char>(length >> 8),
                                         static_cast<unsigned char>(length & 0xff) };
          output.write(reinterpret_cast<const char*>(soi), sizeof(soi));
          output.write(reinterpret_cast<const char*>(app1), sizeof(app1));
          output.write(reinterpret_cast<const char*>(&exif[0]), exif.size());

          char buffer[65536];
          while (input)
          {
            input.read(buffer, sizeof(buffer));
            const std::streamsize count = input.gcount();
            if (count > 0)
              output.write(buffer, count);
          }
          output.close();
          if (!output)
            throw std::runtime_error("cannot write JPEG EXIF payload");
          if (::rename(destination.c_str(), source.c_str()) != 0)
            throw std::runtime_error(std::strerror(errno));
        }
        catch (...)
        {
          output.close();
          ::unlink(destination.c_str());
          throw;
        }
      }

      static void
      writeWithFlyCapture(const ImageJob& job)
      {
        const std::string temporary = job.path + ".part";
        int fd = ::open(temporary.c_str(), O_WRONLY | O_CREAT | O_EXCL, 0644);
        if (fd < 0)
          throw std::runtime_error(std::strerror(errno));
        ::close(fd);

        try
        {
          FlyCapture2::Image image;
          FlyCapture2::Error error = image.SetDimensions(
            job.height, job.width, job.width * 3, FlyCapture2::PIXEL_FORMAT_RGB, FlyCapture2::NONE);
          if (error != FlyCapture2::PGRERROR_OK)
            throw std::runtime_error(error.GetDescription());
          error = image.SetData(&job.pixels[0], job.pixels.size());
          if (error != FlyCapture2::PGRERROR_OK)
            throw std::runtime_error(error.GetDescription());

          FlyCapture2::JPEGOption options;
          options.quality = job.quality;
          error = image.Save(temporary.c_str(), &options);
          if (error != FlyCapture2::PGRERROR_OK)
            throw std::runtime_error(error.GetDescription());

          appendExif(temporary, job.exif);
          if (job.durable)
          {
            fd = ::open(temporary.c_str(), O_RDONLY);
            if (fd < 0 || ::fsync(fd) != 0)
            {
              const int saved_errno = errno;
              if (fd >= 0)
                ::close(fd);
              throw std::runtime_error(std::strerror(saved_errno));
            }
            ::close(fd);
          }
          publish(temporary, job.path);
        }
        catch (...)
        {
          ::unlink(temporary.c_str());
          ::unlink((temporary + ".exif").c_str());
          throw;
        }
        ::unlink(temporary.c_str());
      }
#endif

      static void
      publish(const std::string& temporary, const std::string& destination)
      {
#if defined(SYS_renameat2) && defined(RENAME_NOREPLACE)
        // Linux no-replace rename also supports filesystems without hard links.
        if (::syscall(SYS_renameat2, AT_FDCWD, temporary.c_str(), AT_FDCWD, destination.c_str(),
                      RENAME_NOREPLACE)
            == 0)
          return;
        if (errno != ENOSYS && errno != EINVAL && errno != EOPNOTSUPP)
          throw std::runtime_error(std::strerror(errno));
#endif
        // Older kernels/filesystems: link also publishes atomically without replacement.
        if (::link(temporary.c_str(), destination.c_str()) != 0)
          throw std::runtime_error(std::strerror(errno));
      }

#if !defined(DUNE_CPU_ARMV7) && !defined(DUNE_CPU_ARMV8)
      struct JPEGError
      {
        jpeg_error_mgr manager;
        jmp_buf jump;
        char message[JMSG_LENGTH_MAX];
      };

      static void
      onJPEGError(j_common_ptr info)
      {
        JPEGError* error = reinterpret_cast<JPEGError*>(info->err);
        (*info->err->format_message)(info, error->message);
        longjmp(error->jump, 1);
      }

      static bool
      encode(FILE* file, const ImageJob& job, char* message)
      {
        // libjpeg reports fatal errors with longjmp. Keep only trivial C
        // structures live across it: jumping over a C++ destructor is undefined.
        jpeg_compress_struct info = {};
        JPEGError error = {};
        info.err = jpeg_std_error(&error.manager);
        error.manager.error_exit = onJPEGError;
        if (setjmp(error.jump))
        {
          std::strncpy(message, error.message, JMSG_LENGTH_MAX - 1);
          message[JMSG_LENGTH_MAX - 1] = '\0';
          jpeg_destroy_compress(&info);
          return false;
        }
        jpeg_create_compress(&info);
        jpeg_stdio_dest(&info, file);
        info.image_width = job.width;
        info.image_height = job.height;
        info.input_components = 3;
        info.in_color_space = JCS_RGB;
        jpeg_set_defaults(&info);
        jpeg_set_quality(&info, job.quality, TRUE);
        info.optimize_coding = FALSE;
        jpeg_start_compress(&info, TRUE);
        if (!job.exif.empty())
          jpeg_write_marker(&info, JPEG_APP0 + 1, &job.exif[0], job.exif.size());
        while (info.next_scanline < info.image_height)
        {
          JSAMPROW row =
            const_cast<unsigned char*>(&job.pixels[size_t(info.next_scanline) * job.width * 3]);
          jpeg_write_scanlines(&info, &row, 1);
        }
        jpeg_finish_compress(&info);
        jpeg_destroy_compress(&info);
        return true;
      }
#endif

      DUNE::Tasks::Task* m_task;
      ImageQueue& m_queue;
    };
  }
}
#endif
