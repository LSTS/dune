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
// Author:                                               *
//***************************************************************************


#ifndef SRC_VISION_FIREMAPPER_MAPPING_THREAD_HPP_
#define SRC_VISION_FIREMAPPER_MAPPING_THREAD_HPP_


// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//OpenCV headers
#include <opencv2/opencv.hpp>
#include <Vision/FireMapper/Mapping.h>
#include <Vision/FireMapper/Image.h>


namespace Vision
{
  namespace FireMapper
  {

    class Mapping_thread: public Concurrency::Thread
    {
    public:

      //! Name of thread
      std::string m_name_thread;

      Mapping_thread(DUNE::Tasks::Task* task, std::string m_name) : m_task(task)
      {
        m_name_thread = m_name;
        m_error = false;
        m_is_idle = true;
        m_start_mapping_flag = false;
      }

      bool
      Map_Image(cv::Mat Image_matrix, cv::Mat Translation, cv::Mat Rototation, cv::Mat Intrinsic,
                vector<double> R_Distortion, vector<double> T_Distortion, Mapping& Mp)
      {
        if (!m_is_idle)
          return false;

        m_is_idle = false;

        m_Img_to_map = new Image(Image_matrix, Translation, Rototation, Intrinsic, R_Distortion, T_Distortion);
        m_Image_Matrix = Image_matrix;
        m_Map = Mp;

        m_error = false;
        m_start_mapping_flag = true;

        return true;
      }

      bool error()
      {
        return m_error;
      }

      bool is_idle()
      {
        return m_is_idle;
      }

      //! True if an mapping procedure has just finished
      bool mapping_finished() {
        bool result = m_end_mapping_flag;
        if (m_end_mapping_flag) {
          m_end_mapping_flag = false;
        }
        return result;
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          if (m_start_mapping_flag)
          {
            m_start_mapping_flag = false;
            m_end_mapping_flag = false;
            m_is_idle = false;

            if (m_Image_Matrix.data != NULL)
            {
              bool mapping_result = Map_Image();

              if (!mapping_result)
              {
                m_task->war("%s: Image out of DEM bounds.", m_name_thread.c_str());
                m_error = true;

              }

            } else
            {
              m_task->err("%s: Empty image", m_name_thread.c_str());
              m_error = true;
            }

            m_is_idle = true;
            m_end_mapping_flag = true;
          } else
          {
            Delay::waitMsec(20);
          }

        }
      }


    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //Mapping
      Mapping m_Map;
      //! Flag to start mapping
      bool m_start_mapping_flag;
      bool m_end_mapping_flag;
      //! Error flag
      bool m_error;
      //! Opencv Buffer for Image Matrix
      cv::Mat m_Image_Matrix;
      ////Image to MAP
      Image* m_Img_to_map;
      //! flag to control state of thread
      bool m_is_idle;
      // resulted maps
      vector<cv::Mat> Maps;

      bool
      Map_Image(void)
      {
        try
        {
          return m_Map.Map(*m_Img_to_map);
        }
        catch (std::runtime_error& ex)
        {
          m_task->war("%s: Exception Mapping image: %s\n", m_name_thread.c_str(), ex.what());
          return false;
        }
      }
    };
  }
}


#endif /* SRC_VISION_FIREMAPPER_MAPPING_THREAD_HPP_ */
