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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef VISION_PIONNER_INTERFACE_CVUI_HPP_INCLUDED_
#define VISION_PIONNER_INTERFACE_CVUI_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// OpenCV headers
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

// CVUI Headers
#define CVUI_IMPLEMENTATION
#define CVUI_DISABLE_COMPILATION_NOTICES
#include "cvui.h"

namespace Vision
{
  namespace Pioneer
    {
      using DUNE_NAMESPACES;
      //! Mutex lock/unlock
      static Concurrency::Mutex m_mutex_proc_gui;
      static const std::string c_gui_name = "Settings Control";
      static const int c_max_tpl_y = 320;
      static const int c_max_tpl_x = 640;
      static const int c_max_window_cols = 1340;
      static const int c_max_window_rows = 840;
      static const int c_dist_buttons = 320;

      class InterfaceCVUi : public Concurrency::Thread
      {
        public:

          InterfaceCVUi(DUNE::Tasks::Task* task):
            m_task(task)
          {
            cv::setNumThreads(4);
            m_wdog_ping.setTop(0.5);
          }

          ~InterfaceCVUi(void)
          {
            if(m_video_on)
            {
              m_video_on = false;
              m_task->inf("Stop Video");
              m_video.release();
            }
          }

          void
          initGUI(int fps)
          {
            ping_state[0] = 0;
            ping_state[1] = 0;
            ping_state[2] = 0;
            cv::Mat img_temp(c_max_tpl_y, c_max_tpl_x, CV_8UC3, cv::Scalar(255,255,255));
            createImage(c_max_tpl_y, c_max_tpl_x, img_temp);
            updateTplOriginal(img_temp, false);
            updateTplFilterGreen(img_temp, false);
            updateTplBinary(img_temp, false);
            cvui::init(c_gui_name.c_str());
            m_gui_background = cv::Mat(320, 640, CV_8UC3, cv::Scalar(70, 70, 70));
            m_plan_on = false;
            m_video_on = false;
            m_log_folder_ok = false;
            m_fps = fps;
          }

          void
          updateGUI(void)
          {
            //Clean board
            m_gui_background = cv::Mat(c_max_window_rows, c_max_window_cols, CV_8UC3, cv::Scalar(70, 70, 70));
            //Check ip
            checkPing("192.168.1.101");
            //Show settings
            drawSettings(m_gui_background, 5, 5);
            cvui::update();
            cvui::imshow(c_gui_name.c_str(), m_gui_background);
            if(m_video_on)
              addToVideo(m_original_frame, m_gui_background, false);
          }

          void
          updateTplOriginal(cv::Mat input, bool resize_input)
          {
            cv::Mat img_tm;
            input.copyTo(img_tm);
            if(resize_input)
              resize(img_tm, m_tpl_original, cv::Size(c_max_tpl_x, c_max_tpl_y), cv::INTER_LINEAR);
            else
              input.copyTo(m_tpl_original);
          }

          void
          updateTplFilterGreen(cv::Mat input, bool resize_input)
          {
            cv::Mat img_tm;
            input.copyTo(img_tm);
            if(resize_input)
              resize(img_tm, m_tpl_green_filter, cv::Size(c_max_tpl_x, c_max_tpl_y), cv::INTER_LINEAR);
            else
              input.copyTo(m_tpl_green_filter);
          }

          void
          updateTplBinary(cv::Mat input, bool resize_input)
          {
            cv::Mat img_tm;
            input.copyTo(img_tm);
            if(resize_input)
              resize(img_tm, m_tpl_binary, cv::Size(c_max_tpl_x, c_max_tpl_y), cv::INTER_LINEAR);
            else
              input.copyTo(m_tpl_binary);
          }

          void
          updateOriginalImage(cv::Mat input)
          {
            input.copyTo(m_original_frame);
          }

          void
          getFilterParameters(int* h, int* s, int* v, int* a)
          {
            for(uint8_t i = 0; i < 2; i++)
            {
              h[i] = hsv_h[i];
              s[i] = hsv_s[i];
              v[i] = hsv_v[i];
              a[i] = area_size[i];
            }
          }

          bool
          isToRunPlan(void)
          {
            return m_plan_on;
          }

          void
          run(void)
          {
            updateGUI();
            cv::waitKey(1);
          }

        private:
          //! Parent task.
          DUNE::Tasks::Task *m_task;
          //! Background image for GUI
          cv::Mat m_gui_background;
          //! Watchdog for ip ping
          Counter<double> m_wdog_ping;
          //! Flag to control dim of ping
          bool dim_circle_ping = false;
          //! Save hue intervals
          int hsv_h[2] = {35, 85};
          //! Save storage intervals
          int hsv_s[2] = {50, 255};
          //! Save value intervals
          int hsv_v[2] = {50, 255};
          //! Save area size intervals
          int area_size[2] = {10, 80};
          //! Template - original image
          cv::Mat m_tpl_original;
          //! Template - green filter
          cv::Mat m_tpl_green_filter;
          //! Template binary result
          cv::Mat m_tpl_binary;
          //! State of ping (color)
          cv::Scalar ping_state;
          //! Flag to control plan state
          bool m_plan_on;
          //! Flag to control video state
          bool m_video_on;
          //! Flag to control state of log folders
          bool m_log_folder_ok;
          //! Original frame
          cv::Mat m_original_frame;
          //! String path for pionner root folder
          std::string pioneer_path;
          //! String path for date folder
          std::string date_path;
          //! Object to save video
          cv::VideoWriter m_video;
          //! Number of fps
          int m_fps;

          void
          drawSettings(cv::Mat main_image, int x, int y)
          {
            int max_s_x = 640;
            int max_s_y = 366;
            // Windows settings
            cvui::window(main_image, x, y, max_s_x, max_s_y, "Filter Settings");
            // ######## HSV
            cvui::rect(main_image, x + 4, y + 24, 600, 236, 0x080808);
            if (cvui::button(main_image, x + 235, y + 28, "Defaults HSV Values"))
            {
              hsv_h[0] = 35;
              hsv_h[1] = 85;
              hsv_s[0] = 50;
              hsv_s[1] = 255;
              hsv_v[0] = 50;
              hsv_v[1] = 255;
            }
            int interval_ob_hsv = 70;
            int init_pos_ob_hsv[10] = {10, 40, 10, 75, 40, 60, 310, 75, 340, 60};
            const char *theLabelFormat = "%.0Lf";
            // HSV_H
            cvui::text(main_image, x + init_pos_ob_hsv[0], y + init_pos_ob_hsv[1], "HSV [H]");
            cvui::text(main_image, x + init_pos_ob_hsv[2], y + init_pos_ob_hsv[3], "LOW");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[4], y + init_pos_ob_hsv[5], 255, &hsv_h[0], 0, 255, 1, theLabelFormat);
            cvui::text(main_image, x + init_pos_ob_hsv[6], y + init_pos_ob_hsv[7], "HIGH");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[8], y + init_pos_ob_hsv[9], 255, &hsv_h[1], 0, 255, 1, theLabelFormat);
            if (hsv_h[0] >= hsv_h[1])
              hsv_h[0] = hsv_h[1] - 1;
            if (hsv_h[1] <= hsv_h[0])
              hsv_h[1] = hsv_h[0] + 1;

            // HSV_S
            cvui::text(main_image, x + init_pos_ob_hsv[0], y + init_pos_ob_hsv[1] + interval_ob_hsv, "HSV [S]");
            cvui::text(main_image, x + init_pos_ob_hsv[2], y + init_pos_ob_hsv[3] + interval_ob_hsv, "LOW");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[4], y + init_pos_ob_hsv[5] + interval_ob_hsv, 255, &hsv_s[0], 0, 255, 1, theLabelFormat);
            cvui::text(main_image, x + init_pos_ob_hsv[6], y + init_pos_ob_hsv[7] + interval_ob_hsv, "HIGH");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[8], y + init_pos_ob_hsv[9] + interval_ob_hsv, 255, &hsv_s[1], 0, 255, 1, theLabelFormat);
            if (hsv_s[0] >= hsv_s[1])
              hsv_s[0] = hsv_s[1] - 1;
            if (hsv_s[1] <= hsv_s[0])
              hsv_s[1] = hsv_s[0] + 1;

            // HSV_V
            cvui::text(main_image, x + init_pos_ob_hsv[0], y + init_pos_ob_hsv[1] + (interval_ob_hsv * 2), "HSV [V]");
            cvui::text(main_image, x + init_pos_ob_hsv[2], y + init_pos_ob_hsv[3] + (interval_ob_hsv * 2), "LOW");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[4], y + init_pos_ob_hsv[5] + (interval_ob_hsv * 2), 255, &hsv_v[0], 0, 255, 1, theLabelFormat);
            cvui::text(main_image, x + init_pos_ob_hsv[6], y + init_pos_ob_hsv[7] + (interval_ob_hsv * 2), "HIGH");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[8], y + init_pos_ob_hsv[9] + (interval_ob_hsv * 2), 255, &hsv_v[1], 0, 255, 1, theLabelFormat);
            if (hsv_v[0] >= hsv_v[1])
              hsv_v[0] = hsv_v[1] - 1;
            if (hsv_v[1] <= hsv_v[0])
              hsv_v[1] = hsv_v[0] + 1;

            // ######## AREA
            int thresh_y_pos = 40;
            if (cvui::button(main_image, x + 235, (interval_ob_hsv * 3 + thresh_y_pos) + 30, "Default AREA size"))
            {
              area_size[0] = 10;
              area_size[1] = 80;
            }
            cvui::rect(main_image, x + 4, y + init_pos_ob_hsv[1] + (interval_ob_hsv * 3 + thresh_y_pos) - 20, 600, 90, 0x080808);
            cvui::text(main_image, x + init_pos_ob_hsv[0], y + init_pos_ob_hsv[1] + (interval_ob_hsv * 3 + thresh_y_pos + 2), "AREA");
            cvui::text(main_image, x + init_pos_ob_hsv[2], y + init_pos_ob_hsv[3] + (interval_ob_hsv * 3 + thresh_y_pos), "LOW");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[4], y + init_pos_ob_hsv[5] + (interval_ob_hsv * 3 + thresh_y_pos), 255, &area_size[0], 0, 255, 1, theLabelFormat);
            cvui::text(main_image, x + init_pos_ob_hsv[6], y + init_pos_ob_hsv[7] + (interval_ob_hsv * 3 + thresh_y_pos), "HIGH");
            cvui::trackbar(main_image, x + init_pos_ob_hsv[8], y + init_pos_ob_hsv[9] + (interval_ob_hsv * 3 + thresh_y_pos), 255, &area_size[1], 0, 350, 1, theLabelFormat);
            if (area_size[0] >= area_size[1])
              area_size[0] = area_size[1] - 1;
            if (area_size[1] <= area_size[0])
              area_size[1] = area_size[0] + 1;

            // Draw result of detection
            cvui::text(main_image, max_s_x + (c_max_tpl_x/2), y + init_pos_ob_hsv[1] - 20, "Original Stream");
            drawImage(main_image, max_s_x + 15 + 40, 50, m_tpl_original, true);

            // Draw binary of detection
            cvui::text(main_image, max_s_x + (c_max_tpl_x/2), y + c_max_tpl_y + 70, "Binary Result");
            drawImage(main_image, max_s_x + 15 + 40, c_max_tpl_y + 100, m_tpl_binary, true);

            // Draw filter green
            cvui::text(main_image, (c_max_tpl_x/2) - 20, y + c_max_tpl_y + 70, "Green Filter");
            drawImage(main_image, x, c_max_tpl_y + 100, m_tpl_green_filter, true);

            addButtonsOptions(main_image, x, c_max_tpl_y * 2 + 100);
          }

          void
          drawImage(cv::Mat main_image, int x, int y, cv::Mat image, bool is_color_image)
          {
            cv::Mat image_cv_color;
            if (!is_color_image || image.channels() == 1)
              cv::cvtColor(image, image_cv_color, cv::COLOR_GRAY2BGR);
            else
              image.copyTo(image_cv_color);
            cvui::image(main_image, x, y, image_cv_color);
          }

          void
          createImage(int x, int y, cv::Mat output)
          {
            cv::Mat image_tmp(x, y, CV_8UC3, cv::Scalar(0,0,0));
            cv::circle(image_tmp, cv::Point(y/2, x/2), 20, cv::Scalar(125,125,125), 1);
            image_tmp.copyTo(output);
          }

          void addButtonsOptions(cv::Mat main_image, int x, int y)
          {
            if (m_plan_on)
            {
              if (cvui::button(main_image, x + 235, y + 28, "Stop Plan", 0.5, 0xff0f0f))
              {
                m_plan_on = false;
                m_task->debug("Stop Plan");
              }
            }
            else
            {
              if (cvui::button(main_image, x + 235, y + 28, "Start Plan", 0.5, 0x0fff0f))
              {
                m_plan_on = true;
                m_task->debug("Start Plan");
              }
            }

            if (m_video_on)
            {
              if (cvui::button(main_image, x + 235 + c_dist_buttons, y + 28, "Stop Video", 0.5, 0xFF5900))
              {
                createFoldersLogs();
                if (m_log_folder_ok)
                {
                  m_video_on = false;
                  m_task->inf("Stop Video");
                  m_video.release();
                }
              }
            }
            else
            {
              if (cvui::button(main_image, x + 235 + c_dist_buttons, y + 28, "Start Video", 0.5, 0x00DAFF))
              {
                createFoldersLogs();
                if (m_log_folder_ok)
                {
                  m_video_on = true;
                  m_task->inf("Start Video");
                  addToVideo(m_original_frame, m_gui_background, true);
                }
              }
            }
            if (cvui::button(main_image, x + 235 + c_dist_buttons * 2, y + 28, "Take snapshot", 0.5, 0xB39F5C))
            {
              createFoldersLogs();
              if(m_log_folder_ok)
              {
                m_task->inf("Take snapshot");
                saveSnapshot(m_original_frame, m_gui_background);
              }
            }
          }

          void
          addToVideo(cv::Mat image1, cv::Mat image2, bool init_video_object)
          {
            cv::resize(image2, image2, image1.size());
            if(init_video_object)
            {
              std::string name_file = date_path + "/" + getCurrentTime() + ".mp4";
              m_video.open(name_file.c_str(), cv::VideoWriter::fourcc('M', 'P', '4', 'V'), m_fps, cv::Size(image1.cols + image2.cols, image1.rows));
              if (!m_video.isOpened())
              {
                m_task->err("Erro creating video object");
                m_video_on = false;
              }
            }
            if(m_video_on)
            {
              cv::Mat result(image1.rows, image1.cols + image2.cols, image1.type());
              cv::Mat left_roi(result, cv::Rect(0, 0, image1.cols, image1.rows));
              image1.copyTo(left_roi);
              cv::Mat right_roi(result, cv::Rect(image1.cols, 0, image2.cols, image2.rows));
              image2.copyTo(right_roi);
              m_video.write(result);
            }
          }

          void
          saveSnapshot(cv::Mat image1, cv::Mat image2)
          {
            cv::resize(image2, image2, image1.size());
            cv::Mat result(image1.rows, image1.cols + image2.cols, image1.type());
            cv::Mat left_roi(result, cv::Rect(0, 0, image1.cols, image1.rows));
            image1.copyTo(left_roi);
            cv::Mat right_roi(result, cv::Rect(image1.cols, 0, image2.cols, image2.rows));
            image2.copyTo(right_roi);
            std::string name_file = date_path + "/" + getCurrentTime() + ".jpg";
            cv::imwrite(name_file.c_str(), result);
          }

          void
          checkPing(const char *ipAddress)
          {
            int radius = 8;
            cv::Point center(c_max_window_cols - 25, 15);
            if(m_wdog_ping.overflow())
            {
              m_wdog_ping.reset();
              double timeout = 0.1;
              std::string command = "timeout " + std::to_string(timeout) + " ping -c 1 " + ipAddress + " >/dev/null 2>&1";
              int returnCode = system(command.c_str());
              ping_state[0] = 0;
              ping_state[1] = 0;
              ping_state[2] = 0;
              if (dim_circle_ping)
              {
                dim_circle_ping = false;
                if (returnCode == 0)
                  ping_state[1] = 50;
                else
                  ping_state[2] = 50;
              }
              else
              {
                dim_circle_ping = true;
                if (returnCode == 0)
                  ping_state[1] = 255;
                else
                  ping_state[2] = 255;
              }
              cv::circle(m_gui_background, center, radius, ping_state, -1);
            }
            else
            {
              cv::circle(m_gui_background, center, radius, ping_state, -1);
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
      };
    }
}

#endif /* VISION_PIONNER_INTERFACE_CVUI_HPP_INCLUDED_ */
