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
// Author:                                                                  *
//***************************************************************************


#ifndef SRC_VISION_FIREMAPPER_GETIMAGE_HPP_
#define SRC_VISION_FIREMAPPER_GETIMAGE_HPP_


 // DUNE headers.
 #include <DUNE/DUNE.hpp>

 // Import namespaces.
 using DUNE_NAMESPACES;

 //OpenCV headers
 #include <opencv2/opencv.hpp>

 namespace Vision
 {
   namespace FireMapper
   {
     //! Mutex lock/unlock
     static Concurrency::Mutex m_reading_mutex;

     class GetImage : public Concurrency::Thread
     {
     public:
       //! Name of thread
       std::string m_name_thread;

       GetImage(DUNE::Tasks::Task* task, std::string name) :
         m_task(task)
       {
         m_name_thread = name;
         isReady = false;
         m_is_free = true;
         ImageRead = false ;
         m_cpt = 0 ;
	
       }

       //! Destructor.
       ~GetImage(void)
       {
       }

       template <class T>
       inline std::string to_string (const T& t)
       {
         std::stringstream ss;
         ss << t;
         return ss.str();
       }


       bool
      Get_image(void)
       {
         if(!m_is_free)
           return false;

	      m_is_free = false;
		
	      m_path_file_name=  "/home/welarfao/images/IMG_0" + to_string(547+  m_cpt) +".JPG";
	      m_cpt =m_cpt +1;

	      isReady = true;
	      ImageRead = false ;
         return true;
       }

       void
       run(void)
       {
         while(!isStopping())
         {
           if(isReady)
           {
             if(!m_path_file_name.empty())
             {
                read_image();
               ImageRead=true;
               if ( m_Image_Matrix.data == NULL) {
                 m_cpt = 0 ;
               }


             }
             else
             {
               m_task->inf("%s: error Reading image", m_name_thread.c_str());
             }

             isReady = false;
             m_is_free = true;
           }
           else
           {
             Delay::waitMsec(20);
           }

         }
       }

        cv::Mat 
       Image_Matrix(){

        ImageRead = false;
        
	      return m_Image_Matrix;

       }
        bool
       Image_Read()
       {
         return ImageRead; 
       }
       

      
 
     private:
       //! Parent task.
       DUNE::Tasks::Task* m_task;

       //! Flag to control capture of frames
       bool isReady;
       //! Opencv Buffer for Image Matrix
       cv::Mat m_Image_Matrix;
	     //Compteur d image 
	     int m_cpt ;
	     //flag to control if the image is read
        bool ImageRead ;	
       //! Path to read the image
       std::string m_path_file_name;
       //! flag to control state of thread
       bool m_is_free;

       bool
       read_image(void)
       {
         try
         {
           m_reading_mutex.lock();
           m_Image_Matrix = cv::imread(m_path_file_name,CV_LOAD_IMAGE_GRAYSCALE);
           m_reading_mutex.unlock();
           return true;
         }
         catch (std::runtime_error& ex)
         {
           m_reading_mutex.unlock();
           m_task->war("%s, Exception getting image: %s\n", m_name_thread.c_str(), ex.what());
           return false;
         }
       }
     };
   }
 }


#endif /* SRC_VISION_FIREMAPPER_GETIMAGE_HPP_ */
