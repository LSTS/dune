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

#ifndef VISION_PIONNER_PROCESSIMAGE_HPP_INCLUDED_
#define VISION_PIONNER_PROCESSIMAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//OpenCV headers
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

namespace Vision
{
  namespace Pioneer
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex_cap;

    class ProcessImage : public Concurrency::Thread
    {
      public:
        //! Url of video capture
        std::string m_url;

        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] imshow display
        //! @param[in] cap of pioneer video device.
        ProcessImage(DUNE::Tasks::Task* task, std::string imshow, CaptureImage* cap, std::string method) :
          m_task(task)
        {
          m_cap = cap;
          m_imshow = imshow;
          m_method = method;
          m_mouse.new_tpl_coords = false;
          cv::setNumThreads(4);
        }

        //! Destructor.
        ~ProcessImage(void)
        {
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            cv::destroyAllWindows();
        }

        void
        run(void)
        {
          Delay::wait(4);
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
          {
            cv::namedWindow("Process Image Thread", cv::WINDOW_NORMAL);
            cv::waitKey(1);
          }
          if(!m_have_tpl || m_method.compare("Color") == 0)
          {
            //set the callback function for any mouse event
            cv::setMouseCallback("Process Image Thread", CallBackFunc, &m_mouse);
          }
          while(!isStopping())
          {
            if(m_cap->isCapturing())
            {
              m_raw_frame = m_cap->getFrame();
              //if(!m_raw_frame.empty() && m_raw_frame.rows == 1080 && m_raw_frame.cols == 1920)
              if(!m_raw_frame.empty())
              {
                m_task->debug("Frame size: %d x %d", m_raw_frame.rows, m_raw_frame.cols);
                resize(m_raw_frame, m_image_resized, cv::Size(m_raw_frame.cols/2, m_raw_frame.rows/2), cv::INTER_LINEAR);
                m_task->debug("Frame resized size: %d x %d", m_image_resized.rows, m_image_resized.cols);
                if(m_method.compare("Lines") == 0)
                  getLinesInImage();
                else if(m_method.compare("Template") == 0)
                  templateMatch();
                else if(m_method.compare("Color") == 0)
                  colorPoints();
                else
                  m_task->war("No valide detection method selected.(config problem\?\?\?)");

                if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
                {
                  cv::imshow("Process Image Thread", m_image_resized);
                  if(cv::waitKey(1000/24) == 't')
                  {
                    m_mouse.new_tpl_coords = false;
                    m_have_tpl = false;
                  }
                }
              }
              else
              {
                m_task->war("No frame captured");
              }
            }
          }
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Flag to control imshow
        std::string m_imshow;
        //! Detection method
        std::string m_method;
        //! Object from VideoCapture Pioneer;
        CaptureImage* m_cap;
        //! Raw frame captured
        cv::Mat m_raw_frame;
        //! Resize Image
        cv::Mat m_image_resized;

        void
        getLinesInImage(void)
        {
          // Convert to gray-scale
          cv::Mat gray;
          cvtColor(m_image_resized, gray, cv::COLOR_BGR2GRAY);
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
              line(m_image_resized, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), cv::Scalar(255, 0, 0), 3, cv::LINE_AA);
          }
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
          {
            // Show result image
            cv::imshow("Result Image", m_image_resized);
            cv::waitKey(1);
          }
        }

        bool m_have_tpl = false;
        cv::Mat m_tpl;
        int m_tpl_size = 100;
        int match_method = cv::TM_SQDIFF;
        cv::Mat result;

        struct MouseEvent
        {
          int x;
          int y;
          bool new_tpl_coords;
        };

        MouseEvent m_mouse;

        void
        templateMatch(void)
        {
          if(m_have_tpl)
          {
            MatchingMethod();
          }
          if (m_mouse.new_tpl_coords)
          {
            m_mouse.new_tpl_coords = false;
            if (m_mouse.x - (m_tpl_size / 2) > 0 && m_mouse.x + (m_tpl_size / 2) <= m_image_resized.cols)
              if (m_mouse.y - (m_tpl_size / 2) > 0 && m_mouse.y + (m_tpl_size / 2) <= m_image_resized.rows)
                getTplImg(m_mouse.x - (m_tpl_size / 2), m_mouse.y - (m_tpl_size / 2));
          }
        }

        void
        getTplImg(int cols, int rows)
        {
          m_image_resized(cv::Rect(cols, rows, m_tpl_size, m_tpl_size)).copyTo(m_tpl);
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
          {
            cv::imshow("TPL", m_tpl);
            cv::waitKey(1);
          }
          m_have_tpl = true;
        }

        void static CallBackFunc(int event, int x, int y, int flags, void *userdata)
        {
          (void)flags;
          if (event == cv::EVENT_LBUTTONDOWN)
          {
            std::cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
            MouseEvent* p = (MouseEvent*)userdata;
            p->x = x;
            p->y = y;
            p->new_tpl_coords = true;
          }
          /*else if (event == cv::EVENT_RBUTTONDOWN)
          {
            std::cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
          }
          else if (event == cv::EVENT_MBUTTONDOWN)
          {
            std::cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
          }
          else if (event == cv::EVENT_MOUSEMOVE)
          {
            std::cout << "Mouse move over the window - position (" << x << ", " << y << ")" << std::endl;
          }*/
        }

        void MatchingMethod(void)
        {
          int result_cols = m_image_resized.cols - m_tpl.cols + 1;
          int result_rows = m_image_resized.rows - m_tpl.rows + 1;
          result.create(result_rows, result_cols, CV_32FC1);
          cv::matchTemplate(m_image_resized, m_tpl, result, match_method);
          // Default 0, 1
          cv::normalize(result, result, 50, 200, cv::NORM_MINMAX, -1, cv::Mat());
          double minVal;
          double maxVal;
          cv::Point minLoc;
          cv::Point maxLoc;
          cv::Point matchLoc;
          cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, cv::Mat());
          if (match_method == cv::TM_SQDIFF || match_method == cv::TM_SQDIFF_NORMED)
          {
            matchLoc = minLoc;
          }
          else
          {
            matchLoc = maxLoc;
          }
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
          {
            /*cv::rectangle(result, matchLoc, cv::Point(matchLoc.x + m_tpl.cols, matchLoc.y + m_tpl.rows), cv::Scalar::all(0), 2, 8, 0);
            cv::imshow("image_window", img_display);
            cv::imshow("result_window", result);
            cv::waitKey(1);*/
            cv::rectangle(m_image_resized, matchLoc, cv::Point(matchLoc.x + m_tpl.cols, matchLoc.y + m_tpl.rows), cv::Scalar(0, 255, 0), 2, 8, 0);
          }
        }

        bool isValueInsideInterval(int value, int lowerBound, int upperBound)
        {
          return (value >= lowerBound) && (value <= upperBound);
        }

        //#########################
        int m_hue = 85;
        int m_saturation = 115;
        int m_value = 240;
        int m_hsv_interval = 40;
        bool m_have_color_hsv = false;
        int y_mouse;

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

        //Extract HSV values of Point in image.
        void
        extractHSVValues(cv::Mat image, int x, int y, int* result_hsv_extract)
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
            y_mouse = y;
            std::cout << "Cor HSV do pixel: Hue=" << result_hsv_extract[HSV_CHANNEL_HUE] <<
                        ", Saturation=" << result_hsv_extract[HSV_CHANNEL_SATURATION] <<
                        ", Value=" << result_hsv_extract[HSV_CHANNEL_VALUE] << std::endl;
          }
        }

        /// @brief Update values hsv of color to detect
        /// @param m_hsv_color
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
          filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] = m_hue - m_hsv_interval;
          filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] = m_hue + m_hsv_interval;
          if (filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] < 0)
            filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_LOWER] = 0;
          if (filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] > 255)
            filter_hsv_interval[HSV_CHANNEL_HUE][HSV_VALUE_UPPER] = 255;

          filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] = m_saturation - m_hsv_interval;
          filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] = m_saturation + m_hsv_interval;
          if (filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] < 0)
            filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_LOWER] = 0;
          if (filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] > 255)
            filter_hsv_interval[HSV_CHANNEL_SATURATION][HSV_VALUE_UPPER] = 255;

          filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] = m_value - m_hsv_interval;
          filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] = m_value + m_hsv_interval;
          if (filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] < 0)
            filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_LOWER] = 0;
          if (filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] > 255)
            filter_hsv_interval[HSV_CHANNEL_VALUE][HSV_VALUE_UPPER] = 255;
        }

        // Threshold the image to extract the color selected
        void
        extractColorSelected(cv::Mat input_image, int values_hsv[3][2], cv::Mat* output_image)
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
        thresholdImageToBinary(cv::Mat image_input, int min_value, int max_value, cv::Mat* output_image)
        {
          cv::Mat gray_image;
          cv::cvtColor(image_input, gray_image, cv::COLOR_BGR2GRAY);
          cv::threshold(gray_image, output_image[0], min_value, max_value, cv::THRESH_BINARY);
        }

        void
        findBlobs(cv::Mat input_image, cv::Mat* image_to_plot_result)
        {
          std::vector<std::vector<cv::Point>> contours;
          std::vector<cv::Vec4i> hierarchy;
          cv::findContours(input_image, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

          // Draw contours of blobs
          int id = 0;
          m_task->war("%ld", contours.size());
          if (contours.size() >= 1 && contours.size() <= 4)
          {
            for (const auto &contour : contours)
            {
              double area = cv::contourArea(contour);
              if (area >= 1 && area <= 60 && isValueInsideInterval(contour[0].y, contour[0].y - 15, contour[0].y + 15))
              {
                cv::circle(image_to_plot_result[0], contour[0], 6, cv::Scalar(0, 0, 255), 2);
                std::cout << "Ponto laser " << id << " : (" << contour[0].x << ", " << contour[0].y << ")" << std::endl;
                id++;
              }
            }
          }
        }

        void
        colorPoints(void)
        {
          if (m_mouse.new_tpl_coords)
          {
            m_mouse.new_tpl_coords = false;
            int result_hsv_extract[3] = {0, 0, 0};
            extractHSVValues(m_image_resized, m_mouse.x, m_mouse.y, result_hsv_extract);
            setHSVValues(result_hsv_extract);
          }

          if(m_have_color_hsv)
          {
            cv::Mat hsvImage;
            cv::cvtColor(m_image_resized, hsvImage, cv::COLOR_BGR2HSV);

            int values_hsv[3][2];
            filterHSVInterval(values_hsv);

            cv::Mat color_selected;
            extractColorSelected(hsvImage, values_hsv, &color_selected);
            cv::imshow("Extract Color", color_selected);
            cv::waitKey(1);

            cv::Mat binary_image;
            thresholdImageToBinary(color_selected, 0, 255, &binary_image);
            cv::imshow("Binary Image", binary_image);
            cv::waitKey(1);

            findBlobs(binary_image, &m_image_resized);
          }
        }
    };
  }
}

#endif

