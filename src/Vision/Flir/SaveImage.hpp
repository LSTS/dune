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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************


#ifndef SRC_VISION_FLIR_SAVEIMAGE_HPP_
#define SRC_VISION_FLIR_SAVEIMAGE_HPP_


 // DUNE headers.
 #include <DUNE/DUNE.hpp>

 // Import namespaces.
 using DUNE_NAMESPACES;


 //Exiv headers
 #include <exiv2/exiv2.hpp>

 //OpenCV headers
 #include <opencv2/opencv.hpp>

 namespace Vision
 {
   namespace Flir
   {
     //! Mutex lock/unlock
     static Concurrency::Mutex m_mutex;

     class SaveImage : public Concurrency::Thread
     {
     public:

       struct exifData
       {
         int lat_deg;
         int lat_min;
         double lat_sec;
         int lon_deg;
         int lon_min;
         double lon_sec;
         std::string date_time_original;
         std::string date_time_digitized;
         std::string lens_model;
         std::string copyright;
         std::string artist;
         std::string notes;
       };

       //! Name of thread
       std::string m_name_thread;

       SaveImage(DUNE::Tasks::Task* task, std::string name) :
         m_task(task)
       {
         m_name_thread = name;
         isToSave = false;
         m_is_free = true;
       }

       //! Destructor.
       ~SaveImage(void)
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
       writeExifData(std::string image)
       {
         if(image.empty())
           return false;

         try
         {
           m_imageTag = Exiv2::ImageFactory::open(image);
         }
         catch(...)
         {
           m_task->war("erro writing exif data to %s", image.c_str());
           m_imageTag.release();
           return false;
         }

         m_imageTag->readMetadata();
         m_exifData = m_imageTag->exifData();

         m_exifData["Exif.Photo.UserComment"] = m_exif_data.notes.c_str();

         std::memset(&m_text_exif, '\0', sizeof(m_text_exif));
         std::sprintf(m_text_exif, "%d/1 %d/1 %d/1000000", std::abs(m_exif_data.lat_deg), m_exif_data.lat_min, (int)(m_exif_data.lat_sec * 1E6));
         m_exifData["Exif.GPSInfo.GPSLatitude"] = m_text_exif;
         if(m_exif_data.lat_deg >= 0)
           m_exifData["Exif.GPSInfo.GPSLatitudeRef"] = "N";
         else
           m_exifData["Exif.GPSInfo.GPSLatitudeRef"] = "S";

         std::memset(&m_text_exif, '\0', sizeof(m_text_exif));
         std::sprintf(m_text_exif, "%d/1 %d/1 %d/1000000", std::abs(m_exif_data.lon_deg), m_exif_data.lon_min, (int)(m_exif_data.lon_sec * 1E6));
         m_exifData["Exif.GPSInfo.GPSLongitude"] = m_text_exif;
         if(m_exif_data.lon_deg >= 0)
           m_exifData["Exif.GPSInfo.GPSLongitudeRef"] = "E";
         else
           m_exifData["Exif.GPSInfo.GPSLongitudeRef"] = "W";

         m_exifData["Exif.Photo.DateTimeOriginal"] = m_exif_data.date_time_original.c_str();
         m_exifData["Exif.Photo.DateTimeDigitized"] = m_exif_data.date_time_digitized.c_str();
         m_exifData["Exif.Photo.LensModel"] = m_exif_data.lens_model.c_str();
         m_exifData["Exif.Image.Copyright"] = m_exif_data.copyright.c_str();
         m_exifData["Exif.Image.Artist"] = m_exif_data.artist.c_str();

         m_imageTag->setExifData(m_exifData);
         m_imageTag->writeMetadata();
         m_imageTag.release();
         m_exifData.clear();

         return true;
       }

       bool
       save_image(cv::Mat frame, std::string path)
       {
         if(!m_is_free)
           return false;

         m_is_free = false;
         frame.copyTo(m_frame_capture);
         m_path_file_name = path;
         isToSave = true;
         return true;
       }

       void
       run(void)
       {
         while(!isStopping())
         {
           if(isToSave)
           {
             if(!m_frame_capture.empty())
             {
               save_image();
               writeExifData(m_path_file_name);
             }
             else
             {
               m_task->inf("%s: error saving image", m_name_thread.c_str());
             }

             isToSave = false;
             m_is_free = true;
           }
           else
           {
             Delay::waitMsec(20);
           }

         }
       }

       exifData m_exif_data;

     private:
       //! Parent task.
       DUNE::Tasks::Task* m_task;
       //! Flag to control capture of frames
       bool isToSave;
       //! Opencv Buffer for frame capture
       cv::Mat m_frame_capture;
       //! A container for Exif data
       Exiv2::ExifData m_exifData;
       //! Save metadata to image
       Exiv2::Image::AutoPtr m_imageTag;
       //! Buffer for metadata
       char m_text_exif[32];
       //! Path to save the image
       std::string m_path_file_name;
       //! flag to control state of thread
       bool m_is_free;

       bool
       save_image(void)
       {
         try
         {
           m_mutex.lock();
           cv::imwrite(m_path_file_name, m_frame_capture);
           m_mutex.unlock();
           return true;
         }
         catch (std::runtime_error& ex)
         {
           m_mutex.unlock();
           m_task->war("%s, Exception saving image: %s\n", m_name_thread.c_str(), ex.what());
           return false;
         }
       }
     };
   }
 }


#endif /* SRC_VISION_FLIR_SAVEIMAGE_HPP_ */
