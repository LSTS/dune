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

          FilterDotsColor(DUNE::Tasks::Task* task, std::string imshow):
            m_task(task)
          {
            cv::setNumThreads(4);
            m_imshow = imshow;
            m_have_color_hsv = false;
            m_mouse.new_tpl_coords = false;
          }

          ~FilterDotsColor(void){}

          void
          setHSVIntervals(int hue, int saturation, int value)
          {
            m_hsv_hue_interval = hue;
            m_hsv_hue_interval = saturation;
            m_hsv_hue_interval = value;
          }

          void
          initCallBack(void)
          {
            cv::setMouseCallback("Process Image Thread", callBackFunc, &m_mouse);
          }

          void
          colorPoints(cv::Mat input_image)
          {
            if (m_mouse.new_tpl_coords)
            {
              m_mouse.new_tpl_coords = false;
              int result_hsv_extract[3] = {0, 0, 0};
              extractHSVValues(input_image, m_mouse.x, m_mouse.y, result_hsv_extract);
              setHSVValues(result_hsv_extract);
            }

            if (m_have_color_hsv)
            {
              cv::Mat hsvImage;
              cv::cvtColor(input_image, hsvImage, cv::COLOR_BGR2HSV);

              int values_hsv[3][2];
              filterHSVInterval(values_hsv);

              cv::Mat color_selected;
              extractColorSelected(hsvImage, values_hsv, &color_selected);

              cv::Mat binary_image;
              thresholdImageToBinary(color_selected, 0, 255, &binary_image);

              findBlobs(binary_image, &input_image);

              if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
              {
                cv::imshow("Extract Color", color_selected);
                cv::waitKey(1);
                cv::imshow("Binary Image", binary_image);
                cv::waitKey(1);
              }
            }
          }

          MouseEvent m_mouse;

        private:

          //! Parent task.
          DUNE::Tasks::Task* m_task;
          //! Flag to control imshow
          std::string m_imshow;
          //! Flag to control selection of color to detect
          bool m_have_color_hsv;
          //! Save pixel.y of color selected
          int m_pixel_y;
          int m_hue;
          int m_saturation;
          int m_value;
          int m_hsv_hue_interval;
          int m_hsv_saturation_interval;
          int m_hsv_value_interval;

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

          bool
          isValueInsideInterval(int value, int lowerBound, int upperBound)
          {
            return (value >= lowerBound) && (value <= upperBound);
          }

          //Extract HSV values of Point in image.
          void
          extractHSVValues(cv::Mat image, int x, int y, int *result_hsv_extract)
          {
            // Checking if coordinates are within image bounds
            if (x >= 0 && x < image.cols && y >= 0 && y < image.rows)
            {
              cv::Vec3b pixel = image.at<cv::Vec3b>(cv::Point(x, y));
              // Converting pixel from BGR to HSV
              cv::Mat3b bgr(pixel);
              cv::Mat3b hsv;
              cv::cvtColor(bgr, hsv, cv::COLOR_BGR2HSV);
              // Getting the pixel's HSV values
              result_hsv_extract[HSV_CHANNEL_HUE] = hsv(cv::Point(0, 0))[HSV_CHANNEL_HUE];
              result_hsv_extract[HSV_CHANNEL_SATURATION] = hsv(cv::Point(0, 0))[HSV_CHANNEL_SATURATION];
              result_hsv_extract[HSV_CHANNEL_VALUE] = hsv(cv::Point(0, 0))[HSV_CHANNEL_VALUE];
              m_have_color_hsv = true;
              m_pixel_y = y;
              std::string text_hsv_extract = "Cor HSV do pixel: Hue=" + std::to_string(result_hsv_extract[HSV_CHANNEL_HUE]) +
                        ", Saturation=" + std::to_string(result_hsv_extract[HSV_CHANNEL_SATURATION]) +
                        ", Value=" + std::to_string(result_hsv_extract[HSV_CHANNEL_VALUE]);
              m_task->inf("%s", text_hsv_extract.c_str());
            }
          }

          void
          setHSVValues(int *m_hsv_color)
          {
            m_hue = m_hsv_color[HSV_CHANNEL_HUE];
            m_saturation = m_hsv_color[HSV_CHANNEL_SATURATION];
            m_value = m_hsv_color[HSV_CHANNEL_VALUE];
          }

          void
          filterHSVInterval(int filter_hsv_interval[3][2])
          {
            // Define the lower and upper threshold values for the selected color
            filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] = m_hue - m_hsv_hue_interval;
            filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] = m_hue + m_hsv_hue_interval;
            if (filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] < 0)
              filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] = 0;
            if (filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] > 255)
              filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] = 255;

            filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] = m_saturation - m_hsv_saturation_interval;
            filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] = m_saturation + m_hsv_saturation_interval;
            if (filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] < 0)
              filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] = 0;
            if (filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] > 255)
              filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] = 255;

            filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] = m_value - m_hsv_value_interval;
            filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] = m_value + m_hsv_value_interval;
            if (filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] < 0)
              filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] = 0;
            if (filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] > 255)
              filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] = 255;
          }

          // Threshold the image to extract the color selected
          void
          extractColorSelected(cv::Mat input_image, int values_hsv[3][2], cv::Mat *output_image)
          {
            cv::Scalar lower_color(values_hsv[HSV_CHANNEL_HUE][HSV_VALUE_LOWER],
                                   values_hsv[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER],
                                   values_hsv[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER]);
            cv::Scalar upper_color(values_hsv[HSV_CHANNEL_HUE][HSV_VALUE_UPPER],
                                   values_hsv[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER],
                                   values_hsv[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER]);
            cv::Mat color_mask;
            cv::inRange(input_image, lower_color, upper_color, color_mask);
            // Bitwise AND the original image with the color mask
            cv::bitwise_and(input_image, input_image, output_image[0], color_mask);
          }

          void
          thresholdImageToBinary(cv::Mat image_input, int min_value, int max_value, cv::Mat *output_image)
          {
            cv::Mat gray_image;
            cv::cvtColor(image_input, gray_image, cv::COLOR_BGR2GRAY);
            cv::threshold(gray_image, output_image[0], min_value, max_value, cv::THRESH_BINARY);
          }

          void
          findBlobs(cv::Mat input_image, cv::Mat *image_to_plot_result)
          {
            std::vector<std::vector<cv::Point>> contours;
            std::vector<cv::Vec4i> hierarchy;
            cv::findContours(input_image, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

            // Draw contours of blobs
            int id = 0;
            m_task->debug("Dots Found: %ld", contours.size());
            if (contours.size() >= 1 && contours.size() <= 4)
            {
              for (const auto &contour : contours)
              {
                double area = cv::contourArea(contour);
                if (area >= 1 && area <= 60 && isValueInsideInterval(m_pixel_y, contour[0].y - 15, contour[0].y + 15))
                {
                  cv::circle(image_to_plot_result[0], contour[0], 6, cv::Scalar(0, 0, 255), 2);
                  std::string text_tpl = "Dot " + std::to_string(id+1) + " ("+ std::to_string(contours.size()) +") : (" +
                                          std::to_string(contour[0].x) + ", " +
                                          std::to_string(contour[0].y) + ")";
                  m_task->inf("%s", text_tpl.c_str());
                }
                id++;
              }
            }
            m_task->war("             ");
          }
      };
    }
}

#endif /* VISION_PIONNER_FILTER_DOTS_COLOR_HPP_INCLUDED_ */
