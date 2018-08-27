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
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mapping_mutex;

    class Mapping_thread : public Concurrency::Thread
    {
    public:

      //! Name of thread
      std::string m_name_thread;

      Mapping_thread(DUNE::Tasks::Task *task, std::string m_name) : m_task(task)
      {
        m_name_thread = m_name;
        isReady = false;
        m_is_free = true;
        Mappingfinished = true;

      }

      //! Destructor.
      ~Mapping_thread(void)
      {
      }


      bool
      Map_Image(cv::Mat Image_matrix, cv::Mat Translation, cv::Mat Rototation, cv::Mat Intrinsic,
                vector<double> R_Distortion, vector<double> T_Distortion, Mapping &Mp)
      {
        if (!m_is_free)
          return false;

        m_is_free = false;

        m_Img_to_map = new Image(Image_matrix, Translation, Rototation, Intrinsic, R_Distortion, T_Distortion);
        m_Image_Matrix = Image_matrix;
        m_Map = Mp;
        Mappingfinished = false;
        IMage_with_DEM_match = false;

        isReady = true;
        return true;
      }


      bool
      Mapping_finished()
      {
        return Mappingfinished;
      }


      void
      save_results(std::string m_path_file)
      {
        m_Map.Save_Show_FireM(m_path_file);
      }


      void
      run(void)
      {
        while (!isStopping()) {
          if (isReady) {
            if (m_Image_Matrix.data != NULL) {
              Map_Image();
              if(!IMage_with_DEM_match){
                m_task->war("%s, NO Dem has matched this IMage\n", m_name_thread.c_str());

              }

              Mappingfinished = true;
            } else {
              m_task->inf("%s: error no Image found", m_name_thread.c_str());
            }

            isReady = false;
            m_is_free = true;
          } else {
            Delay::waitMsec(20);
          }

        }
      }


    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //Mapping
      Mapping m_Map;
      //! Flag to control capture of frames
      bool isReady;
      //! Opencv Buffer for Image Matrix
      cv::Mat m_Image_Matrix;
      ////Image to MAP
      Image *m_Img_to_map;
      //! flag to control state of thread
      bool m_is_free;
      // resulted maps
      vector<cv::Mat> Maps;
      //flag Mapping_finished
      bool Mappingfinished;
      bool IMage_with_DEM_match;


      bool
      Map_Image(void)
      {
        try {
          m_mapping_mutex.lock();
          IMage_with_DEM_match = m_Map.Map(*m_Img_to_map);
          m_mapping_mutex.unlock();
          return true;
        }
        catch (std::runtime_error &ex) {
          m_mapping_mutex.unlock();
          m_task->war("%s, Exception Mapping image: %s\n", m_name_thread.c_str(), ex.what());
          return false;
        }
      }
    };
  }
}


#endif /* SRC_VISION_FIREMAPPER_MAPPING_THREAD_HPP_ */
