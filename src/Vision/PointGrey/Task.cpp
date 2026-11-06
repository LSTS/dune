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

// Local headers.
#include "Task.hpp"

namespace Vision
{
  namespace PointGrey
  {
    Task::Task(const std::string& name, Tasks::Context& ctx):
      Tasks::Task(name, ctx),
      m_log_dir(ctx.dir_log)
    {
      m_isCapturing = m_is_to_capture = false;
      m_is_strobe = m_is_on = m_strobe_fallback = false;
      m_read_path = true;
      m_storage_low = false;
      m_resources_ready = false;
      m_gpio_drive_power = NULL;
      m_gpio_strobe = NULL;
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      for (int i = 0; i < c_number_max_thread; ++i)
        m_save[i] = NULL;
#endif
      paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_USER);

      param("Power Channel - Strobe", m_args.channel_strobe)
        .description("Power Channel of Strobe.");

      param("System Name", m_args.system_name)
        .description("Main system name.");

      param("Led Mode", m_args.led_type)
        .values("Strobe, On, Off")
        .description("Led type mode.");

      param("Copyright", m_args.copyright)
        .description("Copyright of Image.");

      param("Lens Model", m_args.lens_model)
        .description("Lens Model of camera.");

      param("Lens Make", m_args.lens_maker)
        .description("Lens builder/maker.");

      param("Saved Images Dir", m_args.save_image_dir)
        .defaultValue("Photos")
        .description("Saved Images Dir.");

      param("Number Frames/s", m_args.number_fs)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("4")
        .minimumValue("1")
        .maximumValue("60")
        .description("Number Frames/s.");

      param("Split Photos", m_args.split_photos)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("true")
        .description("Split photos by folder.");

      param("Number of photos to divide", m_args.number_photos)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("1000")
        .minimumValue("500")
        .maximumValue("3000")
        .description("Split photos by folder.");

      param("GPIO Driver Power", m_args.gpio_drive_power)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("17")
        .minimumValue("0")
        .description("GPIO of RPI2 for driver power.");

      param("GPIO Strobe", m_args.gpio_strobe)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("27")
        .minimumValue("0")
        .description("GPIO of RPI2 for strobe.");

      param("Strobe Delay (us)", m_args.delay_capture)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("1000")
        .minimumValue("0")
        .maximumValue("1000000")
        .description("Strobe Delay in us.");

      param("Shutter Value (ms)", m_args.shutter_value)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("8")
        .minimumValue("1")
        .maximumValue("300")
        .description("Shutter Value time in ms.");

      param("No Disk Statistics", m_args.disk_statistics)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("false")
        .description("Set dispatch of Disk Statistics use.");

      param("JPEG Quality", m_args.jpeg_quality)
        .defaultValue("65")
        .minimumValue("1")
        .maximumValue("100")
        .description("JPEG quality. Lower values reduce CPU and storage use.");

      param("Save Workers", m_args.save_workers)
        .defaultValue("2")
        .minimumValue("1")
        .maximumValue("8")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Independent JPEG writers; applied at task initialization.");

      param("Image Queue Size", m_args.queue_images)
        .defaultValue("25")
        .minimumValue("1")
        .maximumValue("1000")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Maximum admitted images, including writes in progress.");

      param("Image Queue Memory (MiB)", m_args.queue_memory)
        .defaultValue("128")
        .minimumValue("8")
        .maximumValue("1024")
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Maximum RGB and EXIF payload memory; SDK and JPEG buffers are additional.");

      param("Capture Timeout (ms)", m_args.capture_timeout)
        .defaultValue("2000")
        .minimumValue("100")
        .maximumValue("10000")
        .description("Timeout for trigger readiness and camera retrieval; applied at activation.");

      param("Minimum Free Space (MiB)", m_args.minimum_free_space)
        .defaultValue("256")
        .minimumValue("0")
        .description("Pause acquisition below this free-space threshold; zero disables check.");

      param("Durable Writes", m_args.durable_writes)
        .defaultValue("false")
        .description("Synchronize each JPEG to storage. Improves durability at a throughput cost.");

      bind<IMC::EstimatedState>(this);
      bind<IMC::LoggingControl>(this);
    }

    Task::~Task(void)
    { }

    void
    Task::onUpdateParameters(void)
    {
      if (paramChanged(m_args.number_fs))
        m_cnt_fps.setTop(1.0 / m_args.number_fs);

      if (paramChanged(m_args.shutter_value) && m_is_to_capture
          && !set_shutter_value(m_args.shutter_value))
        throw RestartNeeded("Cannot update camera shutter", 10);

      if (m_is_to_capture
          && (paramChanged(m_args.delay_capture) || paramChanged(m_args.shutter_value)
              || paramChanged(m_args.number_fs)))
        checkCaptureTiming();
    }

    void
    Task::checkCaptureTiming(void)
    {
      const bool strobe_requested = m_args.led_type == "Strobe" || m_args.led_type == "STROBE";
      if (!strobe_requested)
        return;

      const double frame_time = m_args.shutter_value / 1000.0 + m_args.delay_capture / 1000000.0;
      const bool must_fallback = frame_time * m_args.number_fs >= 1.0;
      if (must_fallback && !m_strobe_fallback)
      {
        if (!setGpio(m_gpio_strobe, GPIO_HIGH, "strobe"))
          throw std::runtime_error("Cannot enable continuous camera lighting");

        m_is_strobe = false;
        m_is_on = true;
        m_strobe_fallback = true;
        war("Requested %d FPS needs %.1f ms/frame; strobe delay is disabled and LED is kept on "
            "continuously",
            m_args.number_fs, frame_time * 1000);
      }
      else if (!must_fallback && m_strobe_fallback)
      {
        if (!setGpio(m_gpio_strobe, GPIO_LOW, "strobe"))
          throw std::runtime_error("Cannot restore strobe output");

        m_is_strobe = true;
        m_is_on = false;
        m_strobe_fallback = false;
        inf("Strobe timing now fits %d FPS; restored pulsed LED mode", m_args.number_fs);
      }
    }

    void
    Task::onResourceAcquisition(void)
    {
      try
      {
        m_gpio_drive_power = new Hardware::GPIO(m_args.gpio_drive_power);
        m_gpio_drive_power->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio_drive_power->setValue(true);

        m_gpio_strobe = new Hardware::GPIO(m_args.gpio_strobe);
        m_gpio_strobe->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio_strobe->setValue(false);
        m_resources_ready = true;
      }
      catch (...)
      {
        delete m_gpio_strobe;
        m_gpio_strobe = NULL;
        delete m_gpio_drive_power;
        m_gpio_drive_power = NULL;
        throw;
      }
    }

    void
    Task::onResourceInitialization(void)
    {
      m_read_path = true;
      m_isCapturing = false;
      m_cnt_fps.setTop(1.0 / m_args.number_fs);
      m_storage_timer.setTop(1.0);
      m_log_request_timer.setTop(2.0);
      if (m_args.number_photos < 500 && m_args.split_photos)
      {
        war("Number of photos by folder is to small (mim: 500)");
        war("Setting Number of photos by folder to default (1000)");
        m_args.number_photos = 1000;
      }
      else if (m_args.number_photos > 3000 && m_args.split_photos)
      {
        war("Number of photos by folder is to high (max: 3000)");
        war("Setting Number of photos by folder to default (1000)");
        m_args.number_photos = 1000;
      }

      m_frame_cnt = 0;
      m_frame_lost_cnt = 0;
      m_cnt_photos_by_folder = 0;
      m_folder_number = 0;
      m_is_to_capture = false;
      m_latitude = 0;
      m_longitude = 0;
      m_position_time = 0;
      m_sequence = 0;
      m_backpressure = 0;
      m_last_saved = 0;
      m_last_report_time = Clock::get();
      m_last_image_bytes = 1;
      m_storage_low = false;
      m_queue_memory_bytes = 0;
      m_capture_timeout = 2000;

#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      // DUNE can retry initialization after an exception.
      releaseWriters();
      m_queue_memory_bytes = size_t(m_args.queue_memory) * 1024 * 1024;
      m_image_queue.configure(m_args.queue_images, m_queue_memory_bytes);
      try
      {
        for (unsigned i = 0; i < m_args.save_workers; ++i)
        {
          m_save[i] = new SaveImage(this, m_image_queue);
          m_save[i]->start();
        }
      }
      catch (...)
      {
        releaseWriters();
        throw;
      }
#endif

      m_update_cnt_frames.setTop(c_time_to_update_cnt_info);

      if (m_args.disk_statistics)
        setEntityState(IMC::EntityState::ESTA_BOOT, "idle | " + getStorageUsageLogs());
      else
        setEntityState(IMC::EntityState::ESTA_BOOT, "idle");
    }

#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
    void
    Task::releaseWriters(void)
    {
      m_image_queue.close();
      for (int i = 0; i < c_number_max_thread; ++i)
      {
        if (m_save[i])
        {
          if (m_save[i]->isCreated())
            m_save[i]->join();
          delete m_save[i];
          m_save[i] = NULL;
        }
      }
    }
#endif

    void
    Task::onResourceRelease(void)
    {
      m_is_to_capture = m_isCapturing = false;
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      if (m_camera.IsConnected())
      {
        m_camera.StopCapture();
        m_camera.Disconnect();
      }
      releaseWriters();
#endif
      if (m_resources_ready)
      {
        setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
        setGpio(m_gpio_drive_power, GPIO_LOW, "camera power");
      }
      delete m_gpio_strobe;
      m_gpio_strobe = NULL;
      delete m_gpio_drive_power;
      m_gpio_drive_power = NULL;
      m_resources_ready = false;
    }

    //! Log names can contain date directories, but never shell/path traversal.
    bool
    Task::validLogName(const std::string& name)
    {
      if (name.empty() || name[0] == '/')
        return false;
      std::vector<std::string> parts;
      String::split(name, "/", parts);
      for (size_t i = 0; i < parts.size(); ++i)
      {
        if (parts[i].empty() || parts[i] == "." || parts[i] == "..")
          return false;
      }

      return name.find_first_not_of(
               "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-/ .")
             == std::string::npos;
    }

    void
    Task::consume(const IMC::LoggingControl* msg)
    {
      const std::string source = resolveSystemId(msg->getSource());
      if (source != m_args.system_name && source != getSystemName())
        return;

      if (source == m_args.system_name && msg->op == IMC::LoggingControl::COP_STOPPED)
      {
        m_isCapturing = false;
        m_read_path = false;
        setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
        return;
      }

      if (msg->op != IMC::LoggingControl::COP_STARTED
          && msg->op != IMC::LoggingControl::COP_CURRENT_NAME)
        return;

      if (!validLogName(msg->name))
      {
        war("Ignoring invalid log name");
        return;
      }

      if (source == getSystemName())
        m_back_path_log = (m_ctx.dir_log / msg->name).str();

      if (source != m_args.system_name || !isActive())
        return;

      // COP_CURRENT_NAME is only the answer to our request. Once a path is
      // selected, a delayed reply from the previous log must not move the
      // camera back to it. COP_STARTED remains valid for log rollover.
      if (msg->op == IMC::LoggingControl::COP_CURRENT_NAME && m_read_path)
        return;

      if (msg->op == IMC::LoggingControl::COP_STARTED && m_read_path && msg->name == m_log_name)
        return;

      m_isCapturing = false;
      m_read_path = false;
      m_cnt_photos_by_folder = 0;
      m_folder_number = 0;
      m_log_name = msg->name;
      // Use the configured log root, also when the master is remote.
      Path base = m_ctx.dir_log;
      if (source != getSystemName())
        base = base.dirname() / m_args.system_name;

      m_back_path_main_log = (base / msg->name).str();
      m_log_dir = Path(m_back_path_main_log) / m_args.save_image_dir;
      if (m_args.split_photos)
        m_log_dir = m_log_dir / String::str("%06u", m_folder_number);

      m_log_dir.create();
      m_back_path_image = m_log_dir.str();
      m_read_path = true;
      m_isCapturing = m_is_to_capture;
      if (m_isCapturing && m_is_on && !setGpio(m_gpio_strobe, GPIO_HIGH, "strobe"))
        throw RestartNeeded("Cannot enable camera lighting", 10);

      m_cnt_fps.reset();
      m_storage_timer.setTop(0);
      inf("Camera photos stored: %s", m_back_path_image.c_str());
    }

    void
    Task::consume(const IMC::EstimatedState* msg)
    {
      std::string sysName = resolveSystemId(msg->getSource());
      if (sysName != m_args.system_name)
        return;

      if (!std::isfinite(msg->lat) || !std::isfinite(msg->lon) || !std::isfinite(msg->x)
          || !std::isfinite(msg->y) || std::fabs(msg->lat) > Math::c_pi / 2
          || std::fabs(msg->lon) > Math::c_pi)
        return;

      m_latitude = msg->lat;
      m_longitude = msg->lon;
      Coordinates::WGS84::displace(msg->x, msg->y, &m_latitude, &m_longitude);
      m_position_time = Clock::get();
      m_note_comment =
        "Depth: " + to_string(msg->depth) + " m # Altitude: " + to_string(msg->alt) + " m";

      IMC::GpsFix pos;
      pos.lat = m_latitude;
      pos.lon = m_longitude;
      dispatch(pos);
    }

    void
    Task::onRequestActivation(void)
    {
      inf("received activation request");
      activate();
    }

    void
    Task::onRequestDeactivation(void)
    {
      inf("received deactivation request");
      deactivate();
    }

    void
    Task::onActivation(void)
    {
      inf("on Activation");
      m_read_path = false;
      m_isCapturing = false;
      try
      {
        m_capture_timeout = m_args.capture_timeout;
        updateStrobe();
        checkCaptureTiming();
        if (!setUpCamera())
          throw RestartNeeded("Cannot detect camera", 10);

        setEntityState(IMC::EntityState::ESTA_NORMAL,
                       "Led Mode: " + m_args.led_type + " # Fps: " + to_string(m_args.number_fs));
      }
      catch (const std::exception& e)
      {
        setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
        err("Camera activation failed: %s", e.what());
        throw RestartNeeded("Error Flycapture API", 10);
      }
      m_is_to_capture = true;
      m_last_report_time = Clock::get();
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      m_last_saved = m_image_queue.statistics().saved;
#endif
      IMC::LoggingControl logcontrol;
      logcontrol.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
      dispatch(logcontrol);
      m_log_request_timer.reset();
      inf("Camera ready; waiting for master log name.");
    }

    void
    Task::onDeactivation(void)
    {
      m_read_path = true;
      inf("on Deactivation");
      m_is_to_capture = false;
      m_isCapturing = false;
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      if (m_camera.IsConnected())
      {
        m_error = m_camera.StopCapture();
        if (m_error != FlyCapture2::PGRERROR_OK)
          war("Error stopping camera capture: %s", m_error.GetDescription());
      }

      setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
#endif

#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      m_image_queue.drain();
      if (m_camera.IsConnected())
        m_camera.Disconnect();

      reportCapture();
#endif
      moveLogFiles();
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      if (m_image_queue.statistics().failed)
        return;

#endif
      if (m_args.disk_statistics)
        setEntityState(IMC::EntityState::ESTA_NORMAL, "idle | " + getStorageUsageLogs());
      else
        setEntityState(IMC::EntityState::ESTA_NORMAL, "idle");
    }

    int
    Task::moveLogFiles(void)
    {
      if (m_back_path_log.empty() || m_back_path_main_log.empty())
        return 0;
      try
      {
        Path destination = Path(m_back_path_main_log) / c_camera_log_folder;
        destination.create();
        const char* names[] = { "Output.txt", "Config.ini", "Data.lsf.gz", "IMC.xml.gz" };
        // These can still be open in Transports.Logging. Copy snapshots; never
        // move files out from under the local logger.
        for (unsigned i = 0; i < 4; ++i)
        {
          Path source = Path(m_back_path_log) / names[i];
          if (source.isFile())
            copyLogSnapshot(source, destination / (std::string("camera_") + names[i]));
        }
        return 0;
      }
      catch (const std::exception& e)
      {
        war("Cannot copy camera log snapshot: %s", e.what());
        return -1;
      }
    }

    void
    Task::copyLogSnapshot(const Path& source, const Path& destination)
    {
      // Limit the copy to the initial size: the local logger may keep appending.
      int64_t remaining = source.size();
      if (remaining < 0)
        throw std::runtime_error("Cannot size camera log");

      std::ifstream input(source.c_str(), std::ios::binary);
      const std::string temporary = destination.str() + ".part";
      std::ofstream output(temporary.c_str(), std::ios::binary | std::ios::trunc);
      try
      {
        if (!input || !output)
          throw std::runtime_error("Cannot open camera log snapshot");

        char buffer[65536];
        while (remaining)
        {
          const std::streamsize count = std::min<int64_t>(remaining, sizeof(buffer));
          if (!input.read(buffer, count) || !output.write(buffer, count))
            throw std::runtime_error("Camera log snapshot read/write failed");

          remaining -= count;
        }
        output.close();
        if (!output)
          throw std::runtime_error("Camera log snapshot flush failed");

        if (std::rename(temporary.c_str(), destination.c_str()) != 0)
          throw std::runtime_error(std::strerror(errno));
      }
      catch (...)
      {
        output.close();
        std::remove(temporary.c_str());
        throw;
      }
    }

    std::string
    Task::getStorageUsageLogs(void)
    {
      try
      {
        return String::str("%.1f MiB free", Path::storageAvailable(m_ctx.dir_log) / 1048576.0);
      }
      catch (const std::exception& e)
      {
        war("Cannot read storage usage: %s", e.what());
        return "storage unavailable";
      }
    }

    bool
    Task::setGpio(Hardware::GPIO* gpio, CommandType mode, const char* name)
    {
      if (!gpio)
      {
        err("GPIO '%s' is unavailable", name);
        return false;
      }
      try
      {
        gpio->setValue(mode == GPIO_HIGH);
        return true;
      }
      catch (const std::exception& e)
      {
        err("Cannot set GPIO '%s': %s", name, e.what());
        return false;
      }
    }

    void
    Task::updateStrobe(void)
    {
      m_is_strobe = false;
      m_is_on = false;
      m_strobe_fallback = false;
      if (m_args.led_type == "Strobe" || m_args.led_type == "STROBE")
      {
        war("enabling strobe output");
        m_is_strobe = true;
      }
      else if (m_args.led_type == "On" || m_args.led_type == "ON")
      {
        if (!setGpio(m_gpio_strobe, GPIO_HIGH, "strobe"))
          throw std::runtime_error("Cannot enable camera lighting");

        m_is_on = true;
        war("leds always on");
      }
      else
      {
        war("leds always off");
      }
    }

    bool
    Task::getImage(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      if (!pollForTriggerReady())
        return false;

      struct StrobeGuard
      {
        Task* task;
        bool enabled;
        ~StrobeGuard()
        {
          if (enabled)
            task->setGpio(task->m_gpio_strobe, GPIO_LOW, "strobe");
        }
      } guard = { this, m_is_strobe };

      if (m_is_strobe)
      {
        if (!setGpio(m_gpio_strobe, GPIO_HIGH, "strobe"))
          return false;

        Delay::waitUsec(m_args.delay_capture);
      }

      const double timestamp = Clock::getSinceEpoch();
      if (!fireSoftwareTrigger())
        return false;

      m_error = m_camera.RetrieveBuffer(&m_rawImage);
      if (m_is_strobe)
      {
        bool off = setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
        guard.enabled = !off;
        if (!off)
          return false;
      }
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        war("Capture failed: %s", m_error.GetDescription());
        return false;
      }
      saveInfoExif(timestamp);
      m_error = m_rawImage.Convert(FlyCapture2::PIXEL_FORMAT_RGB, &m_rgbImage);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        war("RGB conversion failed: %s", m_error.GetDescription());
        return false;
      }
      const unsigned width = m_rgbImage.GetCols();
      const unsigned height = m_rgbImage.GetRows();
      const size_t stride = m_rgbImage.GetStride();
      if (!width || !height || width > c_jpeg_max_dimension || height > c_jpeg_max_dimension
          || stride < size_t(width) * 3 || !m_rgbImage.GetData()
          || uint64_t(stride) * (height - 1) + uint64_t(width) * 3 > m_rgbImage.GetDataSize())
        throw std::runtime_error("Invalid RGB frame dimensions or buffer");

      const uint64_t payload = uint64_t(width) * height * 3 + m_frame_exif.size();
      if (payload > m_queue_memory_bytes)
      {
        ++m_frame_lost_cnt;
        // Do not retry a frame that cannot fit the configured memory budget.
        m_isCapturing = false;
        setEntityState(IMC::EntityState::ESTA_ERROR,
                       "Image exceeds queue memory; increase Image Queue Memory (MiB)");
        return true;
      }
      m_last_image_bytes = size_t(payload);
      if (!m_image_queue.hasCapacity(m_last_image_bytes))
      {
        ++m_frame_lost_cnt;
        war("Image queue memory limit reached; frame dropped");
        return true;
      }
      std::unique_ptr<ImageJob> job(new ImageJob());
      job->width = width;
      job->height = height;
      job->quality = m_args.jpeg_quality;
      job->durable = m_args.durable_writes;
      job->path = (Path(m_back_path_image) / (m_back_epoch + ".jpg")).str();
      job->exif.assign(m_frame_exif.begin(), m_frame_exif.end());
      job->pixels.resize(size_t(width) * height * 3);
      for (unsigned row = 0; row < height; ++row)
      {
        std::memcpy(&job->pixels[size_t(row) * width * 3],
                    m_rgbImage.GetData() + size_t(row) * stride, size_t(width) * 3);
      }
      if (!m_image_queue.push(job))
      {
        ++m_frame_lost_cnt;
        war("Image queue full; frame dropped");
        return true;
      }
      ++m_frame_cnt;
      if (m_args.split_photos && ++m_cnt_photos_by_folder >= m_args.number_photos)
      {
        m_cnt_photos_by_folder = 0;
        ++m_folder_number;
        m_log_dir =
          Path(m_back_path_main_log) / m_args.save_image_dir / String::str("%06u", m_folder_number);
        m_log_dir.create();
        m_back_path_image = m_log_dir.str();
      }
      // Retain SDK conversion buffers for reuse; queued pixels are independent.
      return true;
#else
      return false;
#endif
    }

    void
    Task::triggerFrame(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      bool success = false;
      try
      {
        success = getImage();
      }
      catch (const std::exception& e)
      {
        war("Capture failed: %s", e.what());
      }
      catch (...)
      {
        war("Capture failed: unknown error");
      }
      if (!success && m_is_to_capture && !stopping())
      {
        ++m_frame_lost_cnt;
        setGpio(m_gpio_strobe, GPIO_LOW, "strobe");
        if (!setUpCamera())
          throw RestartNeeded("Cannot recover camera", 10);

        if (m_is_on)
          setGpio(m_gpio_strobe, GPIO_HIGH, "strobe");
      }
#endif
    }

    void
    Task::reportCapture(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      ImageQueue::Statistics stats = m_image_queue.statistics();
      const double now = Clock::get();
      const double saved_fps = now > m_last_report_time ? (stats.saved - m_last_saved) / (now - m_last_report_time) : 0;
      m_last_saved = stats.saved;
      m_last_report_time = now;
      const std::string led_mode =
        m_strobe_fallback ? "continuous (strobe fallback)" : m_args.led_type;
      std::string state =
        "Led: " + led_mode + " | target FPS: " + to_string(m_args.number_fs)
        + String::str(" | saved FPS: %.1f", saved_fps) + " | saved: " + to_string(stats.saved)
        + " | pending: " + to_string(stats.pending) + " | failed: " + to_string(stats.failed)
        + " | lost: " + to_string(m_frame_lost_cnt) + " | throttled: " + to_string(m_backpressure);
      if (m_storage_low)
        state = "low disk space | " + state;

      setEntityState(m_storage_low || stats.failed ? IMC::EntityState::ESTA_ERROR
                                                   : IMC::EntityState::ESTA_NORMAL,
                     state);
#endif
    }

    void
    Task::onMain(void)
    {
      while (!stopping())
      {
        consumeMessages();
        if (!isActive() || !m_isCapturing)
        {
          if (isActive() && !m_read_path && m_log_request_timer.overflow())
          {
            IMC::LoggingControl request;
            request.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
            dispatch(request);
            m_log_request_timer.reset();
          }
          waitForMessages(0.1);
          continue;
        }
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
        if (m_storage_timer.overflow())
        {
          m_storage_timer.setTop(1.0);
          try
          {
            m_storage_low = m_args.minimum_free_space
                            && Path::storageAvailable(m_log_dir)
                                 < uint64_t(m_args.minimum_free_space) * 1024 * 1024;
          }
          catch (const std::exception& e)
          {
            m_storage_low = true;
            war("Cannot check photo storage: %s", e.what());
          }
        }
        if (m_update_cnt_frames.overflow())
        {
          m_update_cnt_frames.reset();
          reportCapture();
        }
        if (m_cnt_fps.overflow())
        {
          m_cnt_fps.reset();
          if (m_storage_low || !m_image_queue.hasCapacity(m_last_image_bytes))
            ++m_backpressure;
          else
            triggerFrame();
        }
#endif
        // Sleep until the next frame, but keep control messages responsive.
        waitForMessages(std::min(0.05, double(m_cnt_fps.getRemaining())));
      }
    }
  }
}

DUNE_TASK
