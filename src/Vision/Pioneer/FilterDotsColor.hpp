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

#ifndef VISION_PIONNER_FILTER_DOTS_COLOR_HPP_INCLUDED_
#define VISION_PIONNER_FILTER_DOTS_COLOR_HPP_INCLUDED_

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

// Local Headers
#include "InterfaceCVUi.hpp"

namespace Vision
{
  namespace Pioneer
    {
      using DUNE_NAMESPACES;

      class FilterDotsColor
      {
        public:

          struct MouseEvent
          {
            int x;
            int y;
            bool new_tpl_coords;
          };

          enum HSVChannel
          {
            HSV_CHANNEL_HUE = 0,
            HSV_CHANNEL_SATURATION = 1,
            HSV_CHANNEL_VALUE = 2
          };

          enum HSVCaseValue
          {
            HSV_VALUE_LOWER = 0,
            HSV_VALUE_UPPER = 1
          };

          FilterDotsColor(DUNE::Tasks::Task* task, std::string imshow, InterfaceCVUi* gui):
            m_task(task)
          {
            cv::setNumThreads(4);
            m_imshow = imshow;
            m_have_color_hsv = false;
            m_mouse.new_tpl_coords = false;
            m_gui = gui;
            m_area_interval[0] = 10;
            m_area_interval[1] = 60;
            m_pixel_distance = -1;
          }

          ~FilterDotsColor(void)
          {}

          void
          setHSVIntervals(std::vector<int> hue, std::vector<int> saturation, std::vector<int> value)
          {
            m_hsv_hue_interval = hue;
            m_hsv_saturation_interval = saturation;
            m_hsv_value_interval = value;
            m_task->debug("New HSV Low values: %d | %d | %d", hue[HSV_VALUE_LOWER], saturation[HSV_VALUE_LOWER], value[HSV_VALUE_LOWER]);
            m_task->debug("New HSV High values: %d | %d | %d", hue[HSV_VALUE_UPPER], saturation[HSV_VALUE_UPPER], value[HSV_VALUE_UPPER]);
          }

          void
          colorPoints(cv::Mat input_image)
          {

            checkFilterParameters();
            cv::Mat hsvImage;
            cv::cvtColor(input_image, hsvImage, cv::COLOR_BGR2HSV);
            cv::Scalar lowerGreen = cv::Scalar(m_hsv_hue_interval[HSV_VALUE_LOWER],
                                    m_hsv_saturation_interval[HSV_VALUE_LOWER],
                                    m_hsv_value_interval[HSV_VALUE_LOWER]);  // Valores mínimos de HSV para verde
            cv::Scalar upperGreen = cv::Scalar(m_hsv_hue_interval[HSV_VALUE_UPPER],
                                    m_hsv_saturation_interval[HSV_VALUE_UPPER],
                                    m_hsv_value_interval[HSV_VALUE_UPPER]);  // Valores máximos de HSV para verde

            cv::Mat green_mask;
            cv::inRange(hsvImage, lowerGreen, upperGreen, green_mask);
            cv::Mat only_green;
            cv::bitwise_and(input_image, input_image, only_green, green_mask);
            cv::Mat binary_image;
            thresholdImageToBinary(only_green, 200, 255, &binary_image);
            cv::Mat dots_found_result;
            mergePixelArea(binary_image, 2 , 2, &dots_found_result);
            m_gui->updateTplBinary(dots_found_result, true);
            findBlobs(dots_found_result, &input_image);
            m_gui->updateOriginalImage(input_image);
            m_gui->updateTplFilterGreen(only_green, true);
            if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            {
              cv::imshow("Only green", only_green);
              cv::imshow("Binary Image", binary_image);
              cv::imshow("Dots found", dots_found_result);
            }
          }

          void
          checkFilterParameters(void)
          {
            int h[2];
            int s[2];
            int v[2];
            int a[2];
            m_gui->getFilterParameters(h, s, v, a);
            std::vector<int> vec_h(h, h + 2);
            std::vector<int> vec_s(s, s + 2);
            std::vector<int> vec_v(v, v + 2);
            setHSVIntervals(vec_h, vec_s, vec_v);
            m_area_interval[0] = a[0];
            m_area_interval[1] = a[1];
          }

          int
          getDistanceInPixeis(void)
          {
            return m_pixel_distance;
          }

          MouseEvent m_mouse;

        private:

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Flag to control imshow
          std::string m_imshow;
          //! Interface object
          InterfaceCVUi* m_gui;
          //! Flag to control selection of color to detect
          bool m_have_color_hsv;
          //! Save pixel.y of color selected
          int m_pixel_y;
          //! Hue HSV values
          std::vector<int> m_hsv_hue_interval;
          //! Saturation HSV values
          std::vector<int> m_hsv_saturation_interval;
          //! Value HSV values
          std::vector<int> m_hsv_value_interval;
          //! Area interval for dots size
          int m_area_interval[2];
          //! Distance from dots
          double m_pixel_distance;

          void
          mergePixelArea(cv::Mat image_input, int area_pixel_size, int minimum_pixel, cv::Mat *output_image)
          {
            output_image[0] = image_input.clone();
            // Go over image
            for (int y = area_pixel_size; y < image_input.rows - area_pixel_size; y++)
            {
              for (int x = area_pixel_size; x < image_input.cols - area_pixel_size; x++)
              {
                // check if pixel is white
                if (image_input.at<uchar>(y, x) == 255)
                {
                  int count = 0;
                  // Loops the area_pixel_size x area_pixel_size radius area around the current pixel
                  for (int j = -area_pixel_size; j <= area_pixel_size; j++)
                  {
                    for (int i = -area_pixel_size; i <= area_pixel_size; i++)
                    {
                      // check if neighboring pixel is white
                      if (image_input.at<uchar>(y + j, x + i) == 255)
                      {
                        count++;
                      }
                    }
                  }

                  // Checks if there are at least minimum_pixel white pixels in the area
                  if (count >= minimum_pixel)
                  {
                    // draw results
                    for (int j = -area_pixel_size; j <= area_pixel_size; j++)
                    {
                      for (int i = -area_pixel_size; i <= area_pixel_size; i++)
                      {
                        output_image[0].at<uchar>(y + j, x + i) = 255;
                      }
                    }
                  }
                }
              }
            }
          }

          void
          thresholdImageToBinary(cv::Mat image_input, int min_value, int max_value, cv::Mat *output_image)
          {
            cv::Mat gray_image;
            cv::cvtColor(image_input, gray_image, cv::COLOR_BGR2GRAY);
            cv::threshold(gray_image, output_image[0], min_value, max_value, cv::THRESH_BINARY);
          }

          bool
          isValueInsideInterval(int value, int lower_bound, int upper_bound)
          {
            return (value >= lower_bound) && (value <= upper_bound);
          }

          void
          findBlobs(cv::Mat input_image, cv::Mat *image_to_plot_result)
          {
            std::vector<std::vector<cv::Point>> contours;
            std::vector<cv::Vec4i> hierarchy;
            cv::findContours(input_image, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

            // Draw contours of blobs
            int id = 0;
            m_task->debug("Dots Found: %d", (int)contours.size());
            int point_id = 0;
            cv::Point2f dots[2];
            if (contours.size() >= 1 && contours.size() <= 4)
            {
              for (const auto &contour : contours)
              {
                double area = cv::contourArea(contour);
                m_task->debug("Size dot area: %f", area);
                if (area >= m_area_interval[0] && m_area_interval[1] <= 80)
                {
                  if(point_id >= 0 && point_id <=1)
                  {
                    dots[point_id].x = contour[0].x;
                    dots[point_id].y = contour[0].y;
                  }
                  cv::circle(image_to_plot_result[0], contour[0], 10, cv::Scalar(0, 0, 255), 2);
                  std::string text_tpl = "Dot " + std::to_string(id+1) + " ("+ std::to_string(contours.size()) +") : (" +
                                          std::to_string(contour[0].x) + ", " +
                                          std::to_string(contour[0].y) + ")";
                  m_task->debug("%s", text_tpl.c_str());
                  point_id++;
                  if(point_id == 2)
                  {
                    m_pixel_distance = cv::norm(dots[0] - dots[1]);
                    m_task->debug("Pixel Distance: %d", (int)m_pixel_distance);
                  }
                }
                id++;
              }
            }
          }
      };
    }
}

#endif /* VISION_PIONNER_FILTER_DOTS_COLOR_HPP_INCLUDED_ */
