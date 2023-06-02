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

#ifndef VISION_PIONNER_FILTER_LINE_HPP_INCLUDED_
#define VISION_PIONNER_FILTER_LINE_HPP_INCLUDED_

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

      class FilterLine
      {
        public:

          FilterLine(DUNE::Tasks::Task* task, std::string imshow):
            m_task(task)
          {
            cv::setNumThreads(4);
            m_imshow = imshow;
          }

          ~FilterLine(void){}

          void
          getLinesInImage(cv::Mat image_input)
          {
            // Convert to gray-scale
            cv::Mat gray;
            cvtColor(image_input, gray, cv::COLOR_BGR2GRAY);
            // Store the edges
            cv::Mat edges;
            // Find the edges in the image using canny detector
            Canny(gray, edges, 10, 250);
            cv::Mat gray_check;
            gray_check = cv::Scalar::all(0);
            gray.copyTo(gray_check, edges);
            cv::imshow("Canny Image", gray_check);
            // Create a vector to store lines of the image
            std::vector<cv::Vec4i> lines;
            // Apply Hough Transform
            HoughLinesP(edges, lines, 1, CV_PI/180, 50, 50, 10);
            // Draw lines on the image
            for (size_t i=0; i<lines.size(); i++) {
                cv::Vec4i l = lines[i];
                line(image_input, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), cv::Scalar(255, 0, 0), 3, cv::LINE_AA);
            }
            if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            {
              // Show result image
              cv::imshow("Result Image", image_input);
              cv::waitKey(1);
            }
          }

        private:

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Flag to control imshow
          std::string m_imshow;
      };
    }
}

#endif /* VISION_PIONNER_FILTER_LINE_HPP_INCLUDED_ */
