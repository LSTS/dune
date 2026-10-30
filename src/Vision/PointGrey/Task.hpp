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

#ifndef VISION_POINTGREY_TASK_HPP_INCLUDED_
#define VISION_POINTGREY_TASK_HPP_INCLUDED_

#include <cstddef>
#include <cstdint>
#include <sstream>
#include <string>

#include <DUNE/DUNE.hpp>

#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
#include "SaveImage.hpp"
#include <exiv2/exiv2.hpp>
#include <flycapture/FlyCapture2.h>
#endif

namespace Vision
{
  namespace PointGrey
  {
    using DUNE_NAMESPACES;

    //! Command types.
    enum CommandType
    {
      //! Set GPIO HIGH (on).
      GPIO_HIGH = 1,
      //! Set GPIO LOW (off).
      GPIO_LOW = 0
    };

    static const int c_number_max_thread = 8;
    static const int c_max_number_attempts_bus = 5;
    static const float c_time_to_update_cnt_info = 10.0;
    static const std::string c_camera_log_folder = "CameraLog/";

    //! %Task arguments.
    struct Arguments
    {
      //! Master Name.
      std::string system_name;
      //! Power channel of strobe.
      std::string channel_strobe;
      //! LED scheme.
      std::string led_type;
      //! Copyright Image.
      std::string copyright;
      //! Lens Model.
      std::string lens_model;
      //! Lens Maker.
      std::string lens_maker;
      //! Saved Image Dir.
      std::string save_image_dir;
      //! Number of frames/s.
      int number_fs;
      //! Split photos by folder.
      bool split_photos;
      //! Number of photos to folder.
      unsigned int number_photos;
      //! GPIO number for driver power.
      int gpio_drive_power;
      //! GPIO number for strobe.
      int gpio_strobe;
      //! Delay before capture image.
      int delay_capture;
      //! Shutter value for image.
      float shutter_value;
      //! Flag to control statistics of disk use.
      bool disk_statistics;
      //! JPEG quality for image.
      unsigned jpeg_quality;
      //! Number of independent JPEG writers.
      unsigned save_workers;
      //! Maximum number of images in the queue.
      unsigned queue_images;
      //! Maximum memory for the queue (MiB).
      unsigned queue_memory;
      //! Timeout for trigger readiness and camera retrieval (ms).
      unsigned capture_timeout;
      //! Minimum free space (MiB) to continue acquisition.
      unsigned minimum_free_space;
      //! Flag to control durable writes.
      bool durable_writes;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters.
      Arguments m_args;
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      //! Camera object.
      FlyCapture2::Camera m_camera;
      //! Structure of Camera object.
      FlyCapture2::CameraInfo m_camInfo;
      //! The error returned by the camera API.
      FlyCapture2::Error m_error;
      //! Buffer with the raw image from the camera.
      FlyCapture2::Image m_rawImage;
      //! Buffer with the RGB image.
      FlyCapture2::Image m_rgbImage;
      //! Identifier of camera.
      FlyCapture2::PGRGuid m_guid;
      //! Queue of images to save.
      ImageQueue m_image_queue;
      //! Buffer for EXIF data.
      Exiv2::Blob m_frame_exif;
      //! JPEG writer threads.
      SaveImage* m_save[c_number_max_thread];
#endif
      //! Latitude of the system.
      double m_latitude;
      //! Longitude of the system.
      double m_longitude;
      //! Time of the latest valid position.
      double m_position_time;
      //! Sequence number of the image.
      uint64_t m_sequence;
      //! Number of frames throttled by queue backpressure.
      uint64_t m_backpressure;
      //! Last number of images saved.
      uint64_t m_last_saved;
      //! Time of last report.
      double m_last_report_time;
      //! Last number of bytes of image saved.
      size_t m_last_image_bytes;
      //! Memory used by the queue.
      size_t m_queue_memory_bytes;
      //! Timeout for image capture.
      unsigned m_capture_timeout;
      //! Flag indicating low storage.
      bool m_storage_low;
      //! Flag indicating acquired resources are ready.
      bool m_resources_ready;
      //! Camera power output.
      Hardware::GPIO* m_gpio_drive_power;
      //! Strobe/illumination output.
      Hardware::GPIO* m_gpio_strobe;
      //! Timer to control storage checks.
      Time::Counter<double> m_storage_timer;
      //! Timer to control requests for log name.
      Time::Counter<double> m_log_request_timer;
      //! Backup path to local log.
      std::string m_back_path_log;
      //! Backup path to main system log.
      std::string m_back_path_main_log;
      //! Image epoch/name component.
      std::string m_back_epoch;
      //! Backup path to save image.
      std::string m_back_path_image;
      //! Path to save image.
      Path m_log_dir;
      //! Timer to control FPS.
      Time::Counter<double> m_cnt_fps;
      //! Timer to refresh captured-frame information.
      Time::Counter<float> m_update_cnt_frames;
      //! Number of frames captured.
      long unsigned int m_frame_cnt;
      //! Number of frames lost.
      long unsigned int m_frame_lost_cnt;
      //! Note comment for image metadata.
      std::string m_note_comment;
      //! Number of photos in current folder.
      unsigned int m_cnt_photos_by_folder;
      //! Current folder number.
      unsigned m_folder_number;
      //! Current log name.
      std::string m_log_name;
      //! Flag controlling image capture.
      bool m_is_to_capture;
      //! Flag controlling strobe mode.
      bool m_is_strobe;
      //! Flag controlling continuously-on light.
      bool m_is_on;
      //! True when strobe was replaced by continuous light to meet FPS.
      bool m_strobe_fallback;
      //! Flag controlling active image capture.
      bool m_isCapturing;
      //! Flag controlling log-path reading.
      bool m_read_path;

      Task(const std::string& name, Tasks::Context& ctx);
      ~Task(void) override;
      void
      onUpdateParameters(void);
      void
      onResourceAcquisition(void);
      void
      onResourceInitialization(void);
      void
      onResourceRelease(void);
      void
      onRequestActivation(void);
      void
      onRequestDeactivation(void);
      void
      onActivation(void);
      void
      onDeactivation(void);
      void
      onMain(void);
      void
      consume(const IMC::LoggingControl* msg);
      void
      consume(const IMC::EstimatedState* msg);
      int
      moveLogFiles(void);
      std::string
      getStorageUsageLogs(void);
      bool
      setGpio(Hardware::GPIO* gpio, CommandType mode, const char* name);
      void
      updateStrobe(void);
      void
      checkCaptureTiming(void);
      void
      getInfoCamera(void);
      bool
      setUpCamera(void);
      bool
      pollForTriggerReady(void);
      bool
      set_shutter_value(float value);
      bool
      fireSoftwareTrigger(void);
      bool
      getImage(void);
      void
      saveInfoExif(double timestamp);
      void
      triggerFrame(void);
      void
      reportCapture(void);
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      void
      releaseWriters(void);
#endif
      static bool
      validLogName(const std::string& name);
      static void
      copyLogSnapshot(const Path& source, const Path& destination);
      static std::string
      exifCoordinate(double radians);

      template <class T>
      static std::string
      to_string(const T& value)
      {
        std::stringstream stream;
        stream << value;
        return stream.str();
      }
    };
  }
}

#endif
