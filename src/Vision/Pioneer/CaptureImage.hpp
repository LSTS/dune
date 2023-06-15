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

#ifndef VISION_PIONNER_CAPTUREIMAGE_HPP_INCLUDED_
#define VISION_PIONNER_CAPTUREIMAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//OpenCV headers
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

namespace Vision
{
  namespace Pioneer
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex_proc;

    class CaptureImage : public Concurrency::Thread
    {
      public:
        //! Url of video capture
        std::string m_url;

        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] url of ipcam.
        //! @param[in] imshow display
        CaptureImage(DUNE::Tasks::Task* task, std::string url, std::string imshow, bool save_original_input) :
          m_task(task),
          m_is_capturing(false)
        {
          m_save_original_input = save_original_input;
          m_imshow = imshow;
          m_url = url;
          cv::setNumThreads(4);
          m_capture = initCapture(m_url);
          m_wdog_cap_erro.setTop(1.0);
          m_counter_erro_frame = 0;
          m_first_frame = true;
        }

        //! Destructor.
        ~CaptureImage(void)
        {
          m_capture.release();
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Cap") == 0)
            cv::destroyAllWindows();

          m_task->inf("Stop Saving Original Input");
          m_video.release();
        }

        cv::VideoCapture
        initCapture(std::string url)
        {
          if (url.find("video") != std::string::npos)
          {
            cv::VideoCapture capture(0);
            if (!capture.isOpened())
            {
              m_task->err("erro open cam device %s", url.c_str());
              cv::VideoCapture capture_null(0, 0);
              return capture_null;
            }
            return capture;
          }
          else
          {
            setenv("OPENCV_FFMPEG_CAPTURE_OPTIONS", "rtsp_transport;udp", 1);
            cv::VideoCapture capture(url, cv::CAP_FFMPEG);
            if (!capture.isOpened())
            {
              m_task->err("erro open cam url %s", url.c_str());
              cv::VideoCapture capture_null(0, 0);
              return capture_null;
            }
            return capture;
          }
        }

        void
        run(void)
        {
          if (!m_capture.isOpened())
          {
            m_task->err("erro capture video device");
            m_is_capturing = false;
          }
          else
          {
            m_is_capturing = true;
            if(m_imshow.compare("All") == 0)
              cv::namedWindow("RTSP stream thread", cv::WINDOW_NORMAL);
            cv::Mat frame_temp;
            while(!isStopping())
            {
              if (!m_capture.read(frame_temp))
              {
                if(m_wdog_cap_erro.overflow())
                {
                  m_wdog_cap_erro.reset();
                  m_counter_erro_frame++;
                  m_task->war("fail getting frame");
                  if(m_counter_erro_frame >= 5)
                  {
                    m_counter_erro_frame = 0;
                    try
                    {
                      m_capture.release();
                    }
                    catch(const std::exception& e)
                    {}
                    m_capture = initCapture(m_url);
                    m_task->war("resetting camara.");
                  }
                }
              }
              else
              {
                m_counter_erro_frame = 0;
                m_frame = frame_temp.clone();
                if(m_first_frame)
                {
                  m_first_frame = false;
                  createObjectVideo(frame_temp);
                }
                else
                {
                  addToVideo(frame_temp);
                }
                if(m_imshow.compare("All") == 0 || m_imshow.compare("Input") == 0)
                {
                  cv::imshow("RTSP stream thread", frame_temp);
                  cv::waitKey(1);
                }
              }
            }
          }
        }

        bool
        isCapturing(void)
        {
          return m_is_capturing;
        }

        cv::Mat
        getFrame(void)
        {
          return m_frame;
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! OpenCv Video Capture
        cv::VideoCapture m_capture;
        //! Flag to control state of capture
        bool m_is_capturing;
        //! Flag to control imshow
        std::string m_imshow;
        //! Buffer for image captured
        cv::Mat m_frame;
        //! Watchdog for erro capture info
        Counter<double> m_wdog_cap_erro;
        //! Counter of frames fail
        int m_counter_erro_frame;
        //! Save original input
        bool m_save_original_input;
        //! Object to save video
        cv::VideoWriter m_video;
        //! String path for pionner root folder
        std::string pioneer_path;
        //! String path for date folder
        std::string date_path;
        //! Flag to control state of video
        bool m_save_original_ok;
        //! Flag to control state of log folders
        bool m_log_folder_ok;
        //! Flag to control first frame
        bool m_first_frame;

        void
        createObjectVideo(cv::Mat input_frame)
        {
          m_save_original_ok = true;
          if(m_save_original_input)
          {
            createFoldersLogs();
            if(m_log_folder_ok)
            {
              // Get the size of the image
              int width = input_frame.cols;
              int height = input_frame.rows;

              // Convert to cv::Size
              cv::Size imageSize(width, height);
              std::string name_file = date_path + "/" + getCurrentTime() + ".mp4";
              m_video.open(name_file.c_str(), cv::VideoWriter::fourcc('M', 'P', '4', 'V'), 12, imageSize);
              if (!m_video.isOpened())
              {
                m_task->err("Erro creating video object for original input");
                m_save_original_ok = false;
              }
              else
              {
                m_task->inf("Saving Original Input.");
              }
            }
          }
        }

        std::string
        getCurrentTime()
        {
          time_t now = time(0);
          struct tm tstruct;
          char buffer[32];
          tstruct = *localtime(&now);
          strftime(buffer, sizeof(buffer), "%H%M%S", &tstruct);
          return buffer;
        }

        std::string
        getCurrentDate()
        {
          time_t now = time(0);
          struct tm tstruct;
          char buffer[32];
          tstruct = *localtime(&now);
          strftime(buffer, sizeof(buffer), "%Y%m%d", &tstruct);
          return buffer;
        }

        bool
        directoryExists(const std::string &path)
        {
          struct stat info;
          return stat(path.c_str(), &info) == 0 && S_ISDIR(info.st_mode);
        }

        void
        createFoldersLogs(void)
        {
          m_log_folder_ok = true;
          std::string desktop_path = getenv("HOME");
          desktop_path += "/Desktop/";
          pioneer_path = desktop_path + "pioneer";
          date_path = pioneer_path + "/" + getCurrentDate();

          if (!directoryExists(pioneer_path))
          {
            if (mkdir(pioneer_path.c_str(), 0777) == -1)
            {
              std::cout << "Fail creating folder 'pioneer'." << std::endl;
              m_log_folder_ok = false;
            }
          }

          if (!directoryExists(date_path))
          {
            if (mkdir(date_path.c_str(), 0777) == -1)
            {
              std::cout << "Fail creating folder data." << std::endl;
              m_log_folder_ok = false;
            }
          }
        }

        void
        addToVideo(cv::Mat image_input)
        {
          if (m_save_original_ok)
          {
            m_video.write(image_input);
          }
        }
    };
  }
}

#endif

