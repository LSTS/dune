//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: PGonçalves                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Exiv headers
#include <exiv2/exiv2.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>

//Local headers
#include <Vision/Flir/Capture.hpp>
#include <Vision/Flir/SaveImage.hpp>

namespace Vision
{
  namespace Flir
  {
    using DUNE_NAMESPACES;

    static const int c_number_max_fps = 5;
    static const float c_timeout_capture = 4;
    static const int c_number_max_thread = 25;
    static const float c_time_to_update_cnt_info = 5.0;
    static const float c_time_to_release_cached_ram = 6000.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Camera Ip
      std::string camera_url;
      //! Number of fps of framegrabber
      int number_fps_framegrabber;
      //! Copyright Image
      std::string copyright;
      //! Lens Model
      std::string lens_model;
      //! Saved Image Dir
      std::string save_image_dir;
      //! Number of frames/s
      int number_fs;
      //! Split photos by folder
      bool split_photos;
      //! Number of photos to folder
      unsigned int number_photos;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters
      Arguments m_args;
      //! thread to capture image
      CreateCapture *m_capture;
      //! thread to save image
      SaveImage *m_save_image[c_number_max_thread];
      //! Timer to control the refresh of captured frames
      Time::Counter<float> m_update_cnt_frames;
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
      //! Buffer for the note comment of user
      std::string m_note_comment;
      //! Number of photos in folder
      unsigned int m_cnt_photos_by_folder;
      //! Number of folder
      unsigned m_folder_number;
      //! Bufer for name log
      std::string m_log_name;
      //! Timer to control fps
      Time::Counter<float> m_cnt_fps;
      //! Timer to control timeout capture
      Time::Counter<float> m_timeout_cap;
      //! Timer to control the cached ram
      Time::Counter<float> m_clean_cached_ram;
      //! Id thread
      int m_thread_cnt;
      //! Number of frames captured/saved
      long unsigned int m_frame_cnt;
      //! Number of frames lost
      long unsigned int m_frame_lost_cnt;
      //! Flag to control capture of image
      bool m_is_to_capture;
      //! Flag to control check of resources
      bool m_is_start_resources;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_log_dir(ctx.dir_log)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Camera Url", m_args.camera_url)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("http://10.0.20.113/mjpg/video.mjpg")
        .description("Camera Url.");

        param("FrameGrabber Fps", m_args.number_fps_framegrabber)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("25")
        .minimumValue("1")
        .maximumValue("25")
        .description("Number frames/s of FrameGrabber.");

        param("Copyright", m_args.copyright)
        .description("Copyright of Image.");

        param("Lens Model", m_args.lens_model)
        .description("Lens Model of camera.");

        param("Saved Images Dir", m_args.save_image_dir)
        .defaultValue("Photos")
        .description("Saved Images Dir.");

        param("Number Frames/s", m_args.number_fs)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
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

        bind<IMC::EstimatedState>(this);
        bind<IMC::LoggingControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.number_fs))
        {
          if(m_args.number_fs > 0 && m_args.number_fs <= c_number_max_fps)
            m_cnt_fps.setTop((1.0/m_args.number_fs));
          else
            m_cnt_fps.setTop(0.25);

          inf("new value of fps: %d", m_args.number_fs);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_is_start_resources = false;

        if(m_args.number_fs > 0 && m_args.number_fs <= c_number_max_fps)
          m_cnt_fps.setTop((1.0/m_args.number_fs));
        else
          m_cnt_fps.setTop(0.25);

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

        m_cnt_photos_by_folder = 0;
        m_folder_number = 0;
        m_thread_cnt = 0;
        m_frame_cnt = 0;
        m_frame_lost_cnt = 0;
        m_is_to_capture = false;

        m_update_cnt_frames.setTop(c_time_to_update_cnt_info);
        m_timeout_cap.setTop(c_timeout_capture);
        m_clean_cached_ram.setTop(c_time_to_release_cached_ram);

        m_capture = new CreateCapture(this, m_args.camera_url, m_args.number_fps_framegrabber);
        if(!m_capture->initSetupCamera())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded("Cannot connect to camera", 10);
        }
        else
        {
          m_is_start_resources = true;
          char text[8];
          for(int i = 0; i < c_number_max_thread; i++)
          {
            sprintf(text, "thr%d", i);
            m_save_image[i] = new SaveImage(this, text);
            m_save_image[i]->start();
          }

          m_capture->start();
          inf("Camera Ready");
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if(m_is_start_resources)
        {
          for(int i = 0; i < c_number_max_thread; i++)
          {
            if (m_save_image[i] != NULL)
            {
              m_save_image[i]->stopAndJoin();
              delete m_save_image[i];
              m_save_image[i] = NULL;
            }
          }
          if (m_capture != NULL)
          {
            m_capture->stopAndJoin();
            delete m_capture;
            m_capture = NULL;
          }
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {;
          m_cnt_photos_by_folder = 0;
          if(m_args.split_photos)
            m_log_dir = m_ctx.dir_log / msg->name / m_args.save_image_dir / String::str("%06u", m_folder_number);
          else
            m_log_dir = m_ctx.dir_log / msg->name / m_args.save_image_dir;

          m_back_path_image = m_log_dir.c_str();
          m_log_dir.create();
          m_log_name = msg->name;
        }
      }

      //! Consume message IMC::GpsFix
      void
      consume(const IMC::EstimatedState* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        Angles::convertDecimalToDMS(Angles::degrees(msg->lat), m_lat_deg, m_lat_min, m_lat_sec);
        Angles::convertDecimalToDMS(Angles::degrees(msg->lon), m_lon_deg, m_lon_min, m_lon_sec);
        m_note_comment = "Depth: "+m_save_image[m_thread_cnt]->to_string(msg->depth)+" m # Altitude: "+m_save_image[m_thread_cnt]->to_string(msg->alt)+" m";
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
        releaseRamCached();
        m_frame_cnt = 0;
        m_frame_lost_cnt = 0;
        m_cnt_photos_by_folder = 0;
        m_folder_number = 0;
        try
        {
          if(!m_capture->startCapture())
          {
            onRequestDeactivation();
            throw RestartNeeded("Cannot connect to camera", 10);
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
          m_thread_cnt = 0;
          m_cnt_fps.reset();
        }
        catch(...)
        {
          onRequestDeactivation();
          throw RestartNeeded("Erro config camera", 10);
        }
        m_is_to_capture = true;
        inf("Starting Capture.");
      }

      void
      onDeactivation(void)
      {
        inf("on Deactivation");
        m_is_to_capture = false;
        m_capture->stopCapture();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      capture_image(void)
      {
        m_timeout_cap.reset();
        std::memset(&m_text_exif_timestamp, '\0', sizeof(m_text_exif_timestamp));
        std::sprintf(m_text_exif_timestamp, "%0.4f", Clock::getSinceEpoch());
        m_back_epoch = m_text_exif_timestamp;

        m_path_image = m_back_path_image.c_str();
        m_path_image.append("/");
        m_path_image.append(m_back_epoch);
        m_path_image.append(".jpg");
        m_capture->trigger_camera(m_path_image);

        m_save_image[m_thread_cnt]->m_exif_data.lat_deg = m_lat_deg;
        m_save_image[m_thread_cnt]->m_exif_data.lat_min = m_lat_min;
        m_save_image[m_thread_cnt]->m_exif_data.lat_sec = m_lat_sec;
        m_save_image[m_thread_cnt]->m_exif_data.lon_deg = m_lon_deg;
        m_save_image[m_thread_cnt]->m_exif_data.lon_min = m_lon_min;
        m_save_image[m_thread_cnt]->m_exif_data.lon_sec = m_lon_sec;
        m_save_image[m_thread_cnt]->m_exif_data.date_time_original = Time::Format::getTimeDate().c_str();
        m_save_image[m_thread_cnt]->m_exif_data.date_time_digitized = m_back_epoch.c_str();
        m_save_image[m_thread_cnt]->m_exif_data.lens_model = m_args.lens_model.c_str();
        m_save_image[m_thread_cnt]->m_exif_data.copyright = m_args.copyright.c_str();
        m_save_image[m_thread_cnt]->m_exif_data.artist = getSystemName();
        m_save_image[m_thread_cnt]->m_exif_data.notes = m_note_comment.c_str();

        while(!m_capture->is_capture_image() && !stopping() && m_is_to_capture && !m_timeout_cap.overflow());
        {
          Delay::waitMsec(10);
        }

        if(m_timeout_cap.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          err("Error: connection to camera");
          m_frame_lost_cnt = m_frame_lost_cnt + (c_timeout_capture * m_args.number_fs);
        }
        else
        {
          debug("THR: %d", m_thread_cnt);
          debug("Path: %s", m_path_image.c_str());

          m_thread_cnt = send_image_thread(m_thread_cnt);

          if(m_thread_cnt >= c_number_max_thread)
            m_thread_cnt = 0;
        }
      }

      int
      send_image_thread(int cnt_thread)
      {
        int pointer_cnt_thread = cnt_thread;
        bool jump_over = false;
        bool result_thread;
        while(!jump_over && !stopping())
        {
          try
          {
            debug("sending to thread");
            result_thread = m_save_image[pointer_cnt_thread]->save_image(m_capture->get_image_captured(), m_path_image);
            debug("sending to thread done");
          }
          catch(...)
          {
            war("erro thread");
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
              inf("Erro saving image, all thread working");
              m_frame_lost_cnt++;
              jump_over = true;
              return pointer_cnt_thread;
            }
          }
        }

        return pointer_cnt_thread;
      }

      int
      releaseRamCached(void)
      {
        debug("Releasing cache ram.");
        int result = std::system("sync");
        result = std::system("echo 1 > /proc/sys/vm/drop_caches");
        return result;
      }

      //! Main loop.
      void
      onMain(void)
      {
        m_cnt_fps.reset();
        while (!stopping())
        {
          if(m_cnt_fps.overflow() && m_is_to_capture)
          {
            m_cnt_fps.reset();
            consumeMessages();
            capture_image();
          }
          else if(m_update_cnt_frames.overflow() && m_is_to_capture)
          {
            m_update_cnt_frames.reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, "active (Fps: "+m_save_image[0]->to_string(m_args.number_fs)+" # "+m_save_image[0]->to_string(m_frame_cnt)+" - "+m_save_image[0]->to_string(m_frame_lost_cnt)+")");
          }
          else if(!m_is_to_capture)
          {
            waitForMessages(1.0);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            m_cnt_fps.reset();
          }
          else if(m_clean_cached_ram.overflow())
          {
            m_clean_cached_ram.reset();
            releaseRamCached();
          }
          else
          {
            Delay::waitMsec(1);
          }
        }
      }
    };
  }
}

DUNE_TASK
