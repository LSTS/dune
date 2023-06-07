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

// OpenCV headers
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

// Local Headers
#include "FilterLine.hpp"
#include "FilterTemplateMatch.hpp"
#include "FilterDotsColor.hpp"
#include "InterfaceCVUi.hpp"
#include "IconLSTSData.hpp"

namespace Vision
{
  namespace Pioneer
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex_cap;
    static const std::string c_real_stream_window = "Main Stream";

    class ProcessImage : public Concurrency::Thread
    {
      public:
        //! Url of video capture
        std::string m_url;

        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] imshow display
        //! @param[in] cap of pioneer video device.
        ProcessImage(DUNE::Tasks::Task* task, std::string imshow, CaptureImage* cap, std::string method, int fps) :
          m_task(task)
        {
          m_cap = cap;
          m_imshow = imshow;
          m_method = method;
          m_fps = fps;
          cv::setNumThreads(4);
          m_filter_line = new FilterLine(task, imshow);
          m_filter_template = new FilterTemplateMatch(task, imshow);
          m_gui = new InterfaceCVUi(task);
          m_filter_dots = new FilterDotsColor(task, imshow, m_gui);
          if(m_method.compare("Dots") == 0)
          {
            m_gui->initGUI(m_fps);
            m_gui->start();
          }
          m_distancia_real_calc = -1;
          m_depth = 0;
          m_heading = 0;
          m_temperature = 0;
          m_icon_lsts = loadLSTSIcon();
        }

        //! Destructor.
        ~ProcessImage(void)
        {
          if(m_method.compare("Dots") == 0)
          {
            m_gui->stopAndJoin();
            delete m_gui;
          }
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Proc") == 0)
            cv::destroyAllWindows();
        }

        void
        setHSVIntervals(std::vector<int> hue, std::vector<int> saturation, std::vector<int> value)
        {
          m_filter_dots->setHSVIntervals(hue, saturation, value);
        }

        void
        setHeading(float rad_value)
        {
          m_heading = DUNE::Math::Angles::degrees(rad_value);
        }

        void
        setDepth(float value)
        {
          m_depth = value;
        }

        void
        setTemperature(float value)
        {
          m_temperature = value;
        }

        int
        getDistance(void)
        {
          return m_distancia_real_calc;
        }

        void
        printInfoToImage(void)
        {
          m_distance = m_filter_dots->getDistanceInPixeis();
          m_task->debug("%d | %.1f", m_real_pixel, m_real_cm);
          m_distancia_real_calc = (m_real_cm * m_real_pixel) / m_distance;
          m_task->debug("Dots Pixel Distance: %d", (int)m_distance);
          m_task->debug("Real Distance to object, in cm: %.1f", m_distancia_real_calc);
          int x = 6, y = 6;
          cv::Mat roi = m_image_resized(cv::Rect(x, y, 220, 90));
          cv::Mat color(roi.size(), CV_8UC3, cv::Scalar(125, 125, 125));
          double alpha = 0.15;
          cv::addWeighted(color, alpha, roi, 1.0 - alpha, 0.0, roi);
          std::string text_image;
          if(m_distance > 0)
          {
            text_image = "DISTANCE       " + std::to_string(m_distance) + " cm";
            cvui::text(m_image_resized, x + 4, y + 4, text_image.c_str(), 0.5, 0x000000);
          }
          else
          {
            cvui::text(m_image_resized, x + 4, y + 4, "DISTANCE       NAN", 0.5, 0x000000);
          }
          text_image = "HEADING        " + std::to_string(m_heading) + " deg";
          cvui::text(m_image_resized, x + 4, y + 4 + 20, text_image.c_str(), 0.5, 0x000000);
          text_image = "DEPTH          " + toStringWithPrecision(m_depth, 2) + " m";
          cvui::text(m_image_resized, x + 4, y + 4 + 40, text_image.c_str(), 0.5, 0x000000);
          text_image = "TEMPERATURE   " + toStringWithPrecision(m_temperature, 1) + " C";
          cvui::text(m_image_resized, x + 4, y + 4 + 60, text_image.c_str(), 0.5, 0x000000);
          // Icon LSTS
          cv::Mat icon_color_cv;
          cv::cvtColor(m_icon_lsts, icon_color_cv, cv::COLOR_GRAY2BGR);
          cv::Rect roi_icon(m_image_resized.cols - 80, m_image_resized.rows - 80, m_icon_lsts.cols, m_icon_lsts.rows);
          icon_color_cv.copyTo(m_image_resized(roi_icon));
        }

        std::string toStringWithPrecision(const float value, const int precision)
        {
          std::ostringstream oss;
          oss << std::fixed << std::setprecision(precision) << value;
          return oss.str();
        }

        void
        setValuesOfConversionDistance(float baseline, int real_p, float real_cm)
        {
          m_baseline_lasers = baseline;
          m_real_pixel = real_p;
          m_real_cm = real_cm;
        }

        bool
        isToRunPlan(void)
        {
          return m_gui->isToRunPlan();
        }

        void
        run(void)
        {
          Delay::wait(4);
          if(m_imshow.compare("All") == 0 || m_imshow.compare("Cap") == 0)
          {
            cv::namedWindow(c_real_stream_window.c_str(), cv::WINDOW_NORMAL);
            cv::waitKey(1);
          }

          if(m_method.compare("Template") == 0)
            m_filter_template->initCallBack();

          while(!isStopping())
          {
            if(m_cap->isCapturing())
            {
              m_raw_frame = m_cap->getFrame();
              //if(!m_raw_frame.empty() && m_raw_frame.rows == 1080 && m_raw_frame.cols == 1920)
              if(!m_raw_frame.empty())
              {
                m_task->debug("Frame size: %d x s%d", m_raw_frame.rows, m_raw_frame.cols);
                resize(m_raw_frame, m_image_resized, cv::Size(m_raw_frame.cols/2, m_raw_frame.rows/2), cv::INTER_LINEAR);
                m_task->debug("Frame resized size: %d x %d", m_image_resized.rows, m_image_resized.cols);
                if(m_method.compare("Lines") == 0)
                  m_filter_line->getLinesInImage(m_image_resized);
                else if(m_method.compare("Template") == 0)
                  m_filter_template->templateMatch(m_image_resized);
                else if(m_method.compare("Dots") == 0)
                  m_filter_dots->colorPoints(m_image_resized);
                else
                  m_task->war("No valide detection method selected.(config problem\?\?\?)");

                if(m_imshow.compare("All") == 0 || m_imshow.compare("Cap") == 0)
                {
                  printInfoToImage();
                  cv::imshow(c_real_stream_window.c_str(), m_image_resized);
                  if(m_method.compare("Dots") == 0)
                  {
                    m_gui->updateTplOriginal(m_image_resized, true);
                    m_gui->updateOriginalImage(m_image_resized);
                    m_gui->updateGUI();
                  }
                  char key = cv::waitKey(1000/m_fps);
                  switch (key)
                  {
                    case 't':
                      if (m_method.compare("Template") == 0)
                        m_filter_template->requestNewTpl();
                      break;

                    default:
                      break;
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
        //! Interface CVUi
        InterfaceCVUi* m_gui;
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
        //! Filter Line class
        FilterLine* m_filter_line;
        //! Filter Template Match class
        FilterTemplateMatch* m_filter_template;
        //! Filter Dots Color class
        FilterDotsColor* m_filter_dots;
        //! Fps
        int m_fps;
        //! Baseline Lasers
        float m_baseline_lasers;
        //! Distance to object
        float m_distancia_real_calc;
        //! Real distance in pixel
        int m_real_pixel;
        //! Real distance in cm
        float m_real_cm;
        //! LSTS Icon
        cv::Mat m_icon_lsts;
        //! Heading value
        int m_heading;
        //! Temperature value
        float m_temperature;
        //! Depth
        float m_depth;
        //! Distance
        int m_distance;
    };
  }
}

#endif

