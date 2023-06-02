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

#ifndef VISION_PIONNER_FILTER_TEMPLATE_MATCH_HPP_INCLUDED_
#define VISION_PIONNER_FILTER_TEMPLATE_MATCH_HPP_INCLUDED_

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

namespace Vision
{
  namespace Pioneer
    {
      using DUNE_NAMESPACES;

      static int c_tpl_size = 100;
      static int c_match_method = cv::TM_SQDIFF;

      class FilterTemplateMatch
      {
        public:

          struct MouseEvent
          {
            int x;
            int y;
            bool new_tpl_coords;
          };

          FilterTemplateMatch(DUNE::Tasks::Task* task, std::string imshow):
            m_task(task)
          {
            cv::setNumThreads(4);
            m_imshow = imshow;
            m_have_tpl = false;
          }

          ~FilterTemplateMatch(void){}

          void
          initCallBack(void)
          {
            cv::setMouseCallback("Process Image Thread", callBackFunc, &m_mouse);
          }

          void
          requestNewTpl(void)
          {
            m_mouse.new_tpl_coords = false;
            m_have_tpl = false;
          }

          void
          templateMatch(cv::Mat input_image)
          {
            if(m_have_tpl)
            {
              matchingFilter(input_image);
            }
            if (m_mouse.new_tpl_coords)
            {
              std::string text_mouse = "Left button of the mouse is clicked - position (" + std::to_string(m_mouse.x) +
                                       ", " + std::to_string(m_mouse.y) + ")";
              m_task->inf("%s", text_mouse.c_str());
              m_mouse.new_tpl_coords = false;
              if (m_mouse.x - (c_tpl_size / 2) > 0 && m_mouse.x + (c_tpl_size / 2) <= input_image.cols)
                if (m_mouse.y - (c_tpl_size / 2) > 0 && m_mouse.y + (c_tpl_size / 2) <= input_image.rows)
                  getTplImg(input_image, m_mouse.x - (c_tpl_size / 2), m_mouse.y - (c_tpl_size / 2));
            }
          }

          MouseEvent m_mouse;

        private:

          //! Parent task.
          DUNE::Tasks::Task *m_task;
          //! Flag to control imshow
          std::string m_imshow;
          //! control state of tpl image
          bool m_have_tpl;
          //! Tpl image
          cv::Mat m_tpl;
          //! Storage result of tpl detection
          cv::Mat m_result_tpl_track;

          void
          getTplImg(cv::Mat input_image, int cols, int rows)
          {
            input_image(cv::Rect(cols, rows, c_tpl_size, c_tpl_size)).copyTo(m_tpl);
            if (m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            {
              cv::imshow("TPL", m_tpl);
              cv::waitKey(1);
            }
            m_have_tpl = true;
          }

          void static
          callBackFunc(int event, int x, int y, int flags, void *userdata)
          {
            (void)flags;
            if (event == cv::EVENT_LBUTTONDOWN)
            {
              MouseEvent *p = (MouseEvent *)userdata;
              p->x = x;
              p->y = y;
              p->new_tpl_coords = true;
            }
          }

          void
          matchingFilter(cv::Mat input_image)
          {
            int result_cols = input_image.cols - m_tpl.cols + 1;
            int result_rows = input_image.rows - m_tpl.rows + 1;
            m_result_tpl_track.create(result_rows, result_cols, CV_32FC1);
            cv::matchTemplate(input_image, m_tpl, m_result_tpl_track, c_match_method);
            // Default 0, 1
            cv::normalize(m_result_tpl_track, m_result_tpl_track, 50, 200, cv::NORM_MINMAX, -1, cv::Mat());
            double minVal;
            double maxVal;
            cv::Point minLoc;
            cv::Point maxLoc;
            cv::Point matchLoc;
            cv::minMaxLoc(m_result_tpl_track, &minVal, &maxVal, &minLoc, &maxLoc, cv::Mat());
            if (c_match_method == cv::TM_SQDIFF || c_match_method == cv::TM_SQDIFF_NORMED)
            {
              matchLoc = minLoc;
            }
            else
            {
              matchLoc = maxLoc;
            }
            if (m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            {
              /*cv::rectangle(m_result_tpl_track, matchLoc, cv::Point(matchLoc.x + m_tpl.cols, matchLoc.y + m_tpl.rows), cv::Scalar::all(0), 2, 8, 0);
              cv::imshow("image_window", img_display);
              cv::imshow("result_window", m_result_tpl_track);
              cv::waitKey(1);*/
              cv::rectangle(input_image, matchLoc, cv::Point(matchLoc.x + m_tpl.cols, matchLoc.y + m_tpl.rows), cv::Scalar(0, 255, 0), 2, 8, 0);
            }
          }
      };
    }
}

#endif /* VISION_PIONNER_FILTER_TEMPLATE_MATCH_HPP_INCLUDED_ */
