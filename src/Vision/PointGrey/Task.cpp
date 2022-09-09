//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <queue>
#include <cstring>
#include <string>
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#if defined(DUNE_CPU_ARMV7)
//FlyCapture headers
#include <flycapture/FlyCapture2.h>
//Exiv2 headers
#include <exiv2/exiv2.hpp>
//Local header
#include "SaveImage.hpp"
#endif

namespace Vision
{
  namespace PointGrey
  {
    //! Command types.
    enum CommandType
    {
      //! Set GPIO LOW (on).
      GPIO_HIGH = 1,
      //! Set GPIO HIGH (off).
      GPIO_LOW = 0
    };

    using DUNE_NAMESPACES;

    static const int c_number_max_thread = 25;
    static const int c_number_max_fps = 5;
    static const int c_max_number_attempts_bus = 5;
    static const float c_time_to_release_cached_ram = 300.0;
    static const float c_time_to_release_camera = 3.0;
    static const float c_time_to_update_cnt_info = 10.0;
    static const std::string c_log_path = "/opt/lsts/dune/log/";
    static const std::string c_camera_log_folder = "CameraLog/";
    static const float c_timeout_reading = 15.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Master Name.
      std::string system_name;
      //! Power channel of strobe
      std::string channel_strobe;
      //! LED scheme.
      std::string led_type;
      //! Copyright Image
      std::string copyright;
      //! Lens Model
      std::string lens_model;
      //! Lens Maker
      std::string lens_maker;
      //! Saved Image Dir
      std::string save_image_dir;
      //! Number of frames/s
      int number_fs;
      //! Split photos by folder
      bool split_photos;
      //! Number of photos to folder
      unsigned int number_photos;
      //! Gpio Number for driver power
      int gpio_drive_power;
      //! Gpio Number for strobe
      int gpio_strobe;
      //! Delay before capture image
      int delay_capture;
      //! shutter value for image
      float shutter_value;
      //! flag o control statistics of disk use
      bool disk_statistics;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters
      Arguments m_args;
      #if defined(DUNE_CPU_ARMV7)
      //! Camera object
      FlyCapture2::Camera m_camera;
      //! Structure of Camera object
      FlyCapture2::CameraInfo m_camInfo;
      //! The Error object of error that is returned
      FlyCapture2::Error m_error;
      //! Buffer raw image from a camera
      FlyCapture2::Image m_rawImage;
      //! Buffer for rgb image;
      FlyCapture2::Image m_rgbImage;
      //! Identifier of camera
      FlyCapture2::PGRGuid m_guid;
      #endif
      //! Latitude deg
      int m_lat_deg;
      //! Latitude min
      int m_lat_min;
      //! Latitude sec
      double m_lat_sec;
      //! Longitude deg
      int m_lon_deg;
      //! Longitude min
      int m_lon_min;
      //! Longitude sec
      double m_lon_sec;
      //! Buffer for exif timestamp
      char m_text_exif_timestamp[16];
      //! Buffer to backup path log
      std::string m_back_path_log;
      //! Buffer to backup path to main system log
      std::string m_back_path_main_log;
      //! Buffer to backup epoch
      std::string m_back_epoch;
      //! Buffer to backup time
      std::string m_back_time;
      //! Buffer for path to save image
      std::string m_path_image;
      //! Buffer for backup of path to save image
      std::string m_back_path_image;
      //! Path to save image
      Path m_log_dir;
      //! Timer to control fps
      Time::Counter<float> m_cnt_fps;
      //! Timer to control the cached ram
      Time::Counter<float> m_clean_cached_ram;
      //! Timer to control the refresh of captured frames
      Time::Counter<float> m_update_cnt_frames;
      //! Id thread
      int m_thread_cnt;
      //! Number of frames captured
      long unsigned int m_frame_cnt;
      //! Number of frames lost
      long unsigned int m_frame_lost_cnt;
      #if defined(DUNE_CPU_ARMV7)
      //! Clase/thread to save image/exif data
      SaveImage *m_save[c_number_max_thread];
      #endif
      //! Buffer for the note comment of user
      std::string m_note_comment;
      //! Number of photos in folder
      unsigned int m_cnt_photos_by_folder;
      //! Number of folder
      unsigned m_folder_number;
      //! Bufer for name log
      std::string m_log_name;
      //! Flag to control capture of image
      bool m_is_to_capture;
      //! flag to control led - strobe
      bool m_is_strobe;
      //! flag to control led - on
      bool m_is_on;
      //! Strobe delay
      float m_strobe_delay;
      //! Flag to control init state
      bool m_isStartTask;
      //! Control state of capture
      bool m_isCapturing;
      //! buffer for path to get storage usage of logs
      char m_buffer[64];
      //! Storage usage value
      std::string m_storage;
      //! Timer to control reading of storage
      Time::Counter<float> m_timeout_reading;
      //! string for result output
      std::string m_result;
      //! Flag to control reading of used storage
      bool m_read_storage;
      //! Flag to control read of path from LoggingControl
      bool m_read_path;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_log_dir(ctx.dir_log)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

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
        .maximumValue("5")
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
        .description("GPIO of RPI2 for driver power.");

        param("GPIO Strobe", m_args.gpio_strobe)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("27")
        .description("GPIO of RPI2 for strobe.");

        param("Strobe Delay (us)", m_args.delay_capture)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("1000")
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

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.shutter_value) && m_isStartTask)
          inf("shutter: %f", m_args.shutter_value);

        if (paramChanged(m_args.delay_capture) && m_isStartTask)
          inf("strobe delay: %d", m_args.delay_capture);

        if (paramChanged(m_args.number_fs) && !m_isCapturing)
        {
          inf("Fps: %d", m_args.number_fs);
          m_cnt_fps.setTop((1.0/m_args.number_fs));
        }
        else if (paramChanged(m_args.number_fs) && m_isCapturing)
        {
          inf("Cannot change frames in capturing mode");
        }
      }

      void
      onResourceInitialization(void)
      {
        m_read_path = true;
        m_read_storage = true;
        m_isStartTask = false;
        m_isCapturing = false;
        set_cpu_governor();
        init_gpio_driver();
        init_gpio_strobe();

        if(m_args.number_fs > 0 && m_args.number_fs <= c_number_max_fps)
        {
          m_cnt_fps.setTop((1.0/m_args.number_fs));
        }
        else
        {
          war("Number of frames are wrong (1 <> 5)");
          war("Setting number of frames to default (4)");
          m_cnt_fps.setTop(0.25);
        }

        if(m_args.number_photos < 500 && m_args.split_photos)
        {
          war("Number of photos by folder is to small (mim: 500)");
          war("Setting Number of photos by folder to default (1000)");
          m_args.number_photos = 1000;
        }
        else if(m_args.number_photos > 3000 && m_args.split_photos)
        {
          war("Number of photos by folder is to high (max: 3000)");
          war("Setting Number of photos by folder to default (1000)");
          m_args.number_photos = 1000;
        }

        m_thread_cnt = 0;
        m_frame_cnt = 0;
        m_frame_lost_cnt = 0;
        m_cnt_photos_by_folder = 0;
        m_folder_number = 0;
        m_is_to_capture = false;
        m_strobe_delay = m_args.delay_capture;

        char text[8];
        for(int i = 0; i < c_number_max_thread; i++)
        {
          sprintf(text, "thr%d", i);
          #if defined(DUNE_CPU_ARMV7)
          m_save[i] = new SaveImage(this, text);
          m_save[i]->start();
          #endif
        }

        m_clean_cached_ram.setTop(c_time_to_release_cached_ram);
        m_update_cnt_frames.setTop(c_time_to_update_cnt_info);

        if(m_args.disk_statistics)
          setEntityState(IMC::EntityState::ESTA_BOOT, "idle | " + getStorageUsageLogs());
        else
          setEntityState(IMC::EntityState::ESTA_BOOT, "idle");

        m_isStartTask = true;
      }

      #if defined(DUNE_CPU_ARMV7)
      void
      onResourceRelease(void)
      {
        m_is_to_capture = false;
        if(m_isStartTask)
        {
          Delay::wait(c_time_to_release_camera);
          setGpio(GPIO_LOW, m_args.gpio_strobe);
          setGpio(GPIO_LOW, m_args.gpio_drive_power);

          for(int i = 0; i < c_number_max_thread; i++)
          {
            if (m_save[i] != NULL)
            {
              m_save[i]->stopAndJoin();
              delete m_save[i];
              m_save[i] = NULL;
            }
          }

          if(m_camera.IsConnected())
          {
            m_error = m_camera.StopCapture();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              inf("Error stopping camera capture: %s , already stop?", m_save[m_thread_cnt]->getNameError(m_error).c_str());

            m_error = m_camera.Disconnect();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              inf("Error disconnecting camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          }
        }
      }
      #endif

      void
      consume(const IMC::LoggingControl* msg)
      {
        std::string sysNameMsg = resolveSystemId(msg->getSource());
        std::string sysLocalName = getSystemName();

        if(sysNameMsg != m_args.system_name && sysNameMsg != sysLocalName)
          return;

        if(sysNameMsg != sysLocalName && !m_read_path)
        {
          if (msg->op == IMC::LoggingControl::COP_STARTED || msg->op == IMC::LoggingControl::COP_CURRENT_NAME)
          {
            m_read_path = true;
            m_frame_cnt = 0;
            m_frame_lost_cnt = 0;
            m_cnt_photos_by_folder = 0;
            m_folder_number = 0;
            debug("LoggingControl: reset count m_frame_cnt: %d", msg->op);
            std::string m_path = c_log_path + m_args.system_name;
            m_back_path_main_log = m_path + "/" + msg->name;

            if(m_args.split_photos)
              m_log_dir = m_path / msg->name / m_args.save_image_dir / String::str("%06u", m_folder_number);
            else
              m_log_dir = m_path / msg->name / m_args.save_image_dir;

            inf("Camera photos stored: %s", m_back_path_main_log.c_str());
            m_back_path_image = m_log_dir.c_str();
            m_log_dir.create();
            m_log_name = msg->name;
            m_thread_cnt = 0;
            m_cnt_fps.reset();
            m_isCapturing = true;
          }
        }

        std::string m_base_path = m_ctx.dir_log.c_str();
        m_back_path_log = m_base_path + "/" + msg->name;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        std::string sysName = resolveSystemId(msg->getSource());
        if(sysName != m_args.system_name)
          return;

        Angles::convertDecimalToDMS(Angles::degrees(msg->lat), m_lat_deg, m_lat_min, m_lat_sec);
        Angles::convertDecimalToDMS(Angles::degrees(msg->lon), m_lon_deg, m_lon_min, m_lon_sec);
        m_note_comment = "Depth: "+to_string(msg->depth)+" m # Altitude: "+to_string(msg->alt)+" m";

        IMC::GpsFix pos;
        pos.lat = msg->lat;
        pos.lon = msg->lon;
        dispatch(pos);
      }

      void
      onRequestActivation(void)
      {
        inf("received activation request");
        activate();
      }

      void
      onRequestDeactivation(void)
      {
        inf("received deactivation request");
        deactivate();
      }

      void
      onActivation(void)
      {
        inf("on Activation");
        m_read_path = false;
        releaseRamCached();
        updateStrobe();

        IMC::LoggingControl logcontrol;
        logcontrol.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(logcontrol);
        Delay::wait(0.2);

        try
        {
          if(!setUpCamera())
            throw RestartNeeded("Cannot detect camera", 10);

          setEntityState(IMC::EntityState::ESTA_NORMAL, "Led Mode: "+m_args.led_type+" # Fps: "+to_string(m_args.number_fs));
          set_shutter_value(m_args.shutter_value);
        }
        catch(...)
        {
          throw RestartNeeded("Error Flycapture API", 10);
        }
        m_is_to_capture = true;
        inf("Starting Capture.");
      }

      void
      onDeactivation(void)
      {
        m_read_path = true;
        inf("on Deactivation");
        m_is_to_capture = false;
        m_isCapturing = false;
        #if defined(DUNE_CPU_ARMV7)
        m_error = m_camera.StopCapture();
        if ( m_error != FlyCapture2::PGRERROR_OK )
          war("Error stopping camera capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

        setGpio(GPIO_LOW, m_args.gpio_strobe);
        #endif

        moveLogFiles();
        if(m_args.disk_statistics)
          setEntityState(IMC::EntityState::ESTA_NORMAL, "idle | " + getStorageUsageLogs());
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, "idle");
      }

      int
      moveLogFiles(void)
      {
        std::string path_log_dune_cam = m_back_path_main_log + "/" + c_camera_log_folder;
        std::string system_command = "mkdir " + path_log_dune_cam;
        inf("Camera dune log stored: %s", m_back_path_main_log.c_str());
        int result = std::system(system_command.c_str());
        debug("Path of dune log running in camara: %s", m_back_path_log.c_str());

        std::string file_name_old = m_back_path_log + "/Output.txt ";
        std::string file_name_new = path_log_dune_cam + "/camera_Output.txt";
        system_command = "mv " + file_name_old + file_name_new;
        result = std::system(system_command.c_str());

        file_name_old = m_back_path_log + "/Config.ini ";
        file_name_new = path_log_dune_cam + "/camera_Config.ini";
        system_command = "mv " + file_name_old + file_name_new;
        result = std::system(system_command.c_str());

        file_name_old = m_back_path_log + "/Data.lsf.gz ";
        file_name_new = path_log_dune_cam + "/camera_Data.lsf.gz";
        system_command = "mv " + file_name_old + file_name_new;
        result = std::system(system_command.c_str());

        file_name_old = m_back_path_log + "/IMC.xml.gz ";
        file_name_new = path_log_dune_cam + "/camera_IMC.xml.gz";
        system_command = "mv " + file_name_old + file_name_new;
        result = std::system(system_command.c_str());

        return result;
      }

      std::string
      getStorageUsageLogs(void)
      {
        m_timeout_reading.setTop(c_timeout_reading);
        std::memset(&m_buffer, '\0', sizeof(m_buffer));
        std::sprintf(m_buffer, "du -hs /opt/lsts/dune/log");
        FILE* pipe = std::fopen(m_buffer, "r");
        if (!pipe)
        {
          war("timeout - error reading storage usage");
          m_read_storage = true;
          m_storage = "0";
        }
        else
        {
          std::memset(&m_buffer, '\0', sizeof(m_buffer));
          m_timeout_reading.reset();
          try
          {
            while (!std::feof(pipe) && !m_timeout_reading.overflow())
            {
              #if defined(DUNE_CPU_ARMV7)
              (void)std::fgets(m_buffer, sizeof(m_buffer), pipe);
              #endif
            }

            if(m_timeout_reading.overflow())
            {
              std::fclose(pipe);
              war("timeout - error reading storage usage");
              m_read_storage = true;
              return "0";
            }
          }
          catch (...)
          {
            std::fclose(pipe);
            m_read_storage = true;
            return "0";
          }
          std::fclose(pipe);
          try
          {
            std::vector<std::string> parts;
            Utils::String::split(m_buffer, "/", parts);
            if(parts.size() > 1)
              m_storage = parts[0] + " used space";
            else
              m_storage = "Fail get size info";
          }
          catch (...)
          {
            m_read_storage = true;
            return "0";
          }
        }
        return m_storage;
      }

      int
      set_cpu_governor(void)
      {
        char buffer[16];
        char governor[16];
        std::string result = "";
        FILE* pipe;
        if ((pipe = popen("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", "r")) == NULL)
        {
          war("popen() failed - set_cpu_governor!");
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
        else
        {
          std::memset(&buffer, '\0', sizeof(buffer));
          try
          {
            while (!std::feof(pipe))
            {
              if (std::fgets(buffer, sizeof(buffer), pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            std::fclose(pipe);
            throw;
          }
          std::fclose(pipe);
          std::sscanf(buffer, "%s", governor);
          if( std::strcmp(governor, "ondemand") == 0)
          {
            inf("CPU governor is already ondemand");
          }
          else
          {
            war("CPU governor is not in ondemand, setting to ondemand");
            return std::system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
          }
        }

        return -1;
      }

      bool
      init_gpio_strobe(void)
      {
        FILE* pipe;
        if ((pipe = fopen("/sys/class/gpio/export", "ab")) == NULL)
        {
          err("Unable to export GPIO pin (%d)", m_args.gpio_strobe);
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          return false;
        }
        else
        {
          std::fwrite(to_string(m_args.gpio_strobe).c_str(), sizeof(char), 2, pipe);
          std::fclose(pipe);
          setGpioDirection(m_args.gpio_strobe, true);
          return setGpio(GPIO_LOW, m_args.gpio_strobe);
        }
        return false;
      }

      bool
      init_gpio_driver(void)
      {
        FILE* pipe;
        if ((pipe = fopen("/sys/class/gpio/export", "ab")) == NULL)
        {
          err("Unable to export GPIO pin (%d)", m_args.gpio_drive_power);
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          return false;
        }
        else
        {
          std::fwrite(to_string(m_args.gpio_drive_power).c_str(), sizeof(char), 2, pipe);
          std::fclose(pipe);
          setGpioDirection(m_args.gpio_drive_power, true);
          return setGpio(GPIO_HIGH, m_args.gpio_drive_power);
        }
        return false;
      }

      bool
      setGpioDirection(int gpio, bool isOut)
      {
        char buffer[64];
        FILE* pipe;
        std::sprintf(buffer, "/sys/class/gpio/gpio%d/direction", gpio);
        if ((pipe = fopen(buffer, "rb+")) == NULL)
        {
          err("Unable to open direction handle (%d)", gpio);
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          return false;
        }
        else
        {
          if(isOut)
            std::fwrite("out", sizeof(char), 3, pipe);
          else
            std::fwrite("in", sizeof(char), 3, pipe);
          std::fclose(pipe);
          Delay::wait(1);
          return true;
        }
      }

      bool
      setGpio(CommandType mode, int gpio)
      {
        char buffer[64];
        std::sprintf(buffer, "/sys/class/gpio/gpio%d/value", gpio);
        FILE* pipe;
        if ((pipe = std::fopen(buffer, "rb+")) == NULL)
        {
          err("Unable to open value handle (%d)", gpio);
          return false;
        }
        else
        {
          switch (mode)
          {
            case GPIO_LOW:
              std::fwrite("0", sizeof(char), 1, pipe);
              std::fclose(pipe);
              break;

            case GPIO_HIGH:
              std::fwrite("1", sizeof(char), 1, pipe);
              std::fclose(pipe);
              break;

            default:
              std::fclose(pipe);
              break;
          }
        }

        return true;
      }

      void
      updateStrobe(void)
      {
        m_is_strobe = false;
        m_is_on = false;
        init_gpio_strobe();
        if (m_args.led_type == "Strobe" || m_args.led_type == "STROBE")
        {
          war("enabling strobe output");
          m_is_strobe = true;
        }
        else if (m_args.led_type == "On" || m_args.led_type == "ON")
        {
          setGpio(GPIO_HIGH, m_args.gpio_strobe);
          m_is_on = true;
          war("leds always on");
        }
        else
        {
          war("leds always off");
        }
      }

      void
      getInfoCamera(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        debug("Vendor Name: %s", m_camInfo.vendorName);
        debug("Model Name: %s", m_camInfo.modelName);
        debug("Serial Number: %d", m_camInfo.serialNumber);
        debug("Sensor Info: %s", m_camInfo.sensorInfo);
        debug("Sensor Resolution: %s", m_camInfo.sensorResolution);
        debug("Firmware Version: %s", m_camInfo.firmwareVersion);
        debug("copyright: %s", m_args.copyright.c_str());
        debug("Lens Model: %s", m_args.lens_model.c_str());
        debug("Lens Maker: %s", m_args.lens_maker.c_str());
        #endif
      }

      bool
      setUpCamera(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        unsigned int nb_cameras;
        int bus_attempts = 1;
        while (bus_attempts <= c_max_number_attempts_bus)
        {
          FlyCapture2::BusManager m_busMgr;
          m_error = m_busMgr.GetNumOfCameras(&nb_cameras);
          if (m_error != FlyCapture2::PGRERROR_OK)
          {
            err("Failed to create bus manager (attempt: %d): %s",bus_attempts, m_save[m_thread_cnt]->getNameError(m_error).c_str());
          }
          else
          {
            if (nb_cameras < 1 && nb_cameras > 2)
            {
              err("No cameras found at bus manager attempt %d (%d)", bus_attempts, nb_cameras);
            }
            else
            {
              inf("Number of cameras found in bus manager attempt %d is %d", bus_attempts, nb_cameras);
              inf("Initialization of Camera");
              // Get Flea2 camera
              m_error = m_busMgr.GetCameraFromIndex( 0, &m_guid );
              if ( m_error != FlyCapture2::PGRERROR_OK )
              {
                err("Failed to get camera index at bus manager attempt %d: %s", bus_attempts, m_save[m_thread_cnt]->getNameError(m_error).c_str());
              }
              else
              {
                break;
              }
            }
          }
          bus_attempts++;
          Delay::wait(2);
        }

        if (bus_attempts > c_max_number_attempts_bus)
        {
          err("No cameras found in attempt %d", bus_attempts);
          return false;
        }

        // Connect the camera
        m_error = m_camera.Connect( &m_guid );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to connect to camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }
        // Get the camera info and print it out
        m_error = m_camera.GetCameraInfo( &m_camInfo );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to get camera info from camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }
        // Get the camera info and print it out
        m_error = m_camera.RestoreFromMemoryChannel( 1 );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to restore config %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        set_shutter_value(m_args.shutter_value);

        m_error = m_camera.StartCapture();
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to start image capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        getInfoCamera();
        inf("Camera ready.");
        #endif
        return true;
      }

      // Start polling for trigger ready
      bool
      pollForTriggerReady(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        unsigned int k_softwareTrigger = 0x62C;
        unsigned int regVal = 0;

        do
        {
          m_error = m_camera.ReadRegister( k_softwareTrigger, &regVal );
          if ( m_error != FlyCapture2::PGRERROR_OK )
          {
            err("Failed of PollForTriggerReady: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
            return false;
          }
        } while ( (regVal >> 31) != 0  && !stopping());
        #endif
        return true;
      }

      bool
      set_shutter_value(float value)
      {
        #if defined(DUNE_CPU_ARMV7)
        //Declare a Property struct.
        FlyCapture2::Property prop;
        //Define the property to adjust.
        prop.type = FlyCapture2::SHUTTER;
        //Ensure the property is on.
        prop.onOff = true;
        //Ensure auto-adjust mode is off.
        prop.autoManualMode = false;
        //Ensure the property is set up to use absolute value control.
        prop.absControl = true;
        //Set the absolute value of shutter to x ms.
        prop.absValue = value;
        //Set the property.
        m_error = m_camera.SetProperty( &prop );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to set shutter value: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          m_error.PrintErrorTrace();
          return false;
        }
        #else
        (void)value;
        #endif
        return true;
      }

      // Launch the software trigger event
      bool
      fireSoftwareTrigger(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        const unsigned int k_softwareTrigger = 0x62C;
        const unsigned int k_fireVal = 0x80000000;
        m_error = m_camera.WriteRegister( k_softwareTrigger, k_fireVal );
        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          err("Failed to FireSoftwareTrigger: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }
        #endif
        return true;
      }

      bool
      getImage(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        bool result = false;
        saveInfoExif();
        if(m_is_strobe)
        {
          setGpio(GPIO_HIGH, m_args.gpio_strobe);
          Delay::waitUsec(m_args.delay_capture);
        }
        else if(m_is_on)
        {
          setGpio(GPIO_HIGH, m_args.gpio_strobe);
        }

        // Check that the trigger is ready
        pollForTriggerReady();
        // Fire software trigger
        fireSoftwareTrigger();

        try
        {
          m_error = m_camera.RetrieveBuffer( &m_rawImage );
        }
        catch (...)
        {
          war("error RetrieveBuffer");
          return false;
        }

        if ( m_error != FlyCapture2::PGRERROR_OK)
        {
          if(m_is_to_capture)
            war("capture error: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

          return false;
        }

        if(m_is_strobe)
          setGpio(GPIO_LOW, m_args.gpio_strobe);
        else if(m_is_on)
          setGpio(GPIO_HIGH, m_args.gpio_strobe);

        // convert to rgb
        try
        {
          m_error = m_rawImage.Convert( FlyCapture2::PIXEL_FORMAT_BGR, &m_rgbImage );
        }
        catch(...)
        {
          war("error Convert");
          return false;
        }

        if ( m_error != FlyCapture2::PGRERROR_OK )
        {
          war("convert error: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          return false;
        }

        m_path_image = m_back_path_image.c_str();
        m_path_image.append("/");
        m_path_image.append(m_back_epoch);
        m_path_image.append(".jpg");

        debug("Size Image Capture: %u x %u", m_rgbImage.GetCols(), m_rgbImage.GetRows());
        debug("Path: %s", m_path_image.c_str());

        m_thread_cnt = sendImageThread(m_thread_cnt);
        result = true;

        if(m_thread_cnt >= c_number_max_thread)
          m_thread_cnt = 0;

        m_rgbImage.ReleaseBuffer();
        m_rawImage.ReleaseBuffer();

        return result;
        #else
        return false;
        #endif
      }

      int
      sendImageThread(int cnt_thread)
      {
        #if defined(DUNE_CPU_ARMV7)
        int pointer_cnt_thread = cnt_thread;
        bool jump_over = false;
        bool result_thread;
        while(!jump_over && !stopping())
        {
          try
          {
            result_thread = m_save[pointer_cnt_thread]->saveNewImage(m_rgbImage, m_path_image);
          }
          catch(...)
          {
            war("error thread");
          }

          if(result_thread)
          {
            pointer_cnt_thread++;
            jump_over = true;
            m_frame_cnt++;
            return pointer_cnt_thread;
          }
          else
          {
            debug("thread %d is working, jump to other", pointer_cnt_thread);
            pointer_cnt_thread++;
            if(pointer_cnt_thread >= c_number_max_thread)
              pointer_cnt_thread = 0;

            if(cnt_thread == pointer_cnt_thread)
            {
              pointer_cnt_thread++;
              inf("Error saving image, all thread working");
              m_frame_lost_cnt++;
              jump_over = true;
              return pointer_cnt_thread;
            }
          }
        }

        return pointer_cnt_thread;
        #else
        (void)cnt_thread;
        return -1;
        #endif
      }

      void
      releaseRamCached(void)
      {
        debug("Releasing cache ram.");
        #if defined(DUNE_CPU_ARMV7)
        (void)std::system("sync");
        (void)std::system("echo 1 > /proc/sys/vm/drop_caches");
        (void)std::system("sync");
        #endif
      }

      void
      saveInfoExif(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        std::memset(&m_text_exif_timestamp, '\0', sizeof(m_text_exif_timestamp));
        std::sprintf(m_text_exif_timestamp, "%0.4f", Clock::getSinceEpoch());
        m_back_epoch = m_text_exif_timestamp;

        m_save[m_thread_cnt]->m_exif_data.lat_deg = m_lat_deg;
        m_save[m_thread_cnt]->m_exif_data.lat_min = m_lat_min;
        m_save[m_thread_cnt]->m_exif_data.lat_sec = m_lat_sec;
        m_save[m_thread_cnt]->m_exif_data.lon_deg = m_lon_deg;
        m_save[m_thread_cnt]->m_exif_data.lon_min = m_lon_min;
        m_save[m_thread_cnt]->m_exif_data.lon_sec = m_lon_sec;
        m_save[m_thread_cnt]->m_exif_data.date_time_original = Time::Format::getTimeDate().c_str();
        m_save[m_thread_cnt]->m_exif_data.date_time_digitized = m_back_epoch.c_str();
        m_save[m_thread_cnt]->m_exif_data.make = m_camInfo.vendorName;
        m_save[m_thread_cnt]->m_exif_data.model = m_camInfo.modelName;
        m_save[m_thread_cnt]->m_exif_data.lens_make = m_args.lens_maker.c_str();
        m_save[m_thread_cnt]->m_exif_data.lens_model = m_args.lens_model.c_str();
        m_save[m_thread_cnt]->m_exif_data.copyright = m_args.copyright.c_str();
        m_save[m_thread_cnt]->m_exif_data.artist = getSystemName();
        m_save[m_thread_cnt]->m_exif_data.notes = m_note_comment.c_str();
        #endif
      }

      template <class T>
      inline std::string to_string (const T& t)
      {
          std::stringstream ss;
          ss << t;
          return ss.str();
      }

      void
      triggerFrame(void)
      {
        #if defined(DUNE_CPU_ARMV7)
        if(!getImage() && m_is_to_capture)
        {
          war("Restarting camera...");
          if(m_camera.IsConnected())
          {
            m_error = m_camera.StopCapture();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              war("Error stopping camera capture: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());

            m_error = m_camera.Disconnect();
            if ( m_error != FlyCapture2::PGRERROR_OK )
              war("Error disconnecting camera: %s", m_save[m_thread_cnt]->getNameError(m_error).c_str());
          }
          if (isActive())
            setUpCamera();
        }
        else
        {
          if(m_args.split_photos)
          {
            m_cnt_photos_by_folder++;
            if(m_cnt_photos_by_folder >= m_args.number_photos)
            {
              std::string m_path = c_log_path + m_args.system_name;
              m_cnt_photos_by_folder = 0;
              m_folder_number++;
              m_log_dir = m_path / m_log_name / m_args.save_image_dir / String::str("%06u", m_folder_number);
              m_back_path_image = m_log_dir.c_str();
              m_log_dir.create();
            }
          }
        }

        debug("Capture: thr %d", m_thread_cnt);
        #endif
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            consumeMessages();
            if(m_isCapturing)
            {
              if(m_cnt_fps.overflow())
              {
                m_cnt_fps.reset();
                triggerFrame();
              }
              else if(m_clean_cached_ram.overflow())
              {
                m_clean_cached_ram.reset();
                releaseRamCached();
              }
              else if(m_update_cnt_frames.overflow())
              {
                debug("Count Frames: %ld", m_frame_cnt);
                m_update_cnt_frames.reset();
                setEntityState(IMC::EntityState::ESTA_NORMAL, "Led Mode: "+m_args.led_type+" # Fps: "+to_string(m_args.number_fs)+" # "+to_string(m_frame_cnt)+" - "+to_string(m_frame_lost_cnt));
              }
            }
          }
          else
          {
            waitForMessages(1.0);
            setGpio(GPIO_LOW, m_args.gpio_strobe);
            if(m_args.disk_statistics)
            {
              if(m_read_storage)
              {
                m_read_storage = false;
                setEntityState(IMC::EntityState::ESTA_NORMAL, "idle | " + getStorageUsageLogs());
              }
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
