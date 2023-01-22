/*
 * SavImage.hpp
 *
 *  Created on: May 8, 2017
 *      Author: Pedro Gonçalves
 */

#ifndef VISION_POINTGREY_SAVEIMAGE_HPP_INCLUDED_
#define VISION_POINTGREY_SAVEIMAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

//FlyCapture headers
#include <flycapture/FlyCapture2.h>

//Exiv headers
#include <exiv2/exiv2.hpp>

//OpenCV headers
#include <opencv2/opencv.hpp>

namespace Vision
{
  namespace PointGrey
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex;

    class SaveImage : public Concurrency::Thread
    {
      struct exifData
      {
        //!
        int lat_deg;
        //!
        int lat_min;
        //!
        double lat_sec;
        //!
        int lon_deg;
        //!
        int lon_min;
        //!
        double lon_sec;
        //!
        std::string date_time_original;
        //!
        std::string date_time_digitized;
        //!
        std::string make;
        //!
        std::string model;
        //!
        std::string lens_make;
        //!
        std::string lens_model;
        //!
        std::string copyright;
        //!
        std::string artist;
        //!
        std::string notes;
      };

      public:
        //! Name of camera
        std::string m_name_thread;
        //! Constructor.
        //! @param[in] task parent task.
        //! @param[in] url of ipcam.
        //! @param[in] name od ipcam.
        SaveImage(DUNE::Tasks::Task* task, std::string name) :
          m_task(task)
        {
          m_name_thread = name;
          m_new_image = false;
          m_jpeg_params.push_back(CV_IMWRITE_JPEG_QUALITY);
          m_jpeg_params.push_back(65);
          m_row_bytes = 0;
          cv::setNumThreads(1);
          m_is_free = true;
        }

        //! Destructor.
        ~SaveImage(void)
        {
        }

        //! check state of connection to ipcam
        //! @return true if connected to ipcam.
        bool
        saveNewImage(FlyCapture2::Image rgbImage, std::string fileName)
        {
          if(rgbImage.GetData() == NULL)
            return false;

          if(!m_is_free)
            return false;

          m_is_free = false;

          m_path_file_name = fileName;
          m_image = rgbImage;
          rgbImage.ReleaseBuffer();
          m_new_image = true;

          return true;
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
            m_task->war("error writing exif data to %s", image.c_str());
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
          m_exifData["Exif.Image.Make"] = m_exif_data.make.c_str();
          m_exifData["Exif.Image.Model"] = m_exif_data.model.c_str();
          m_exifData["Exif.Photo.LensMake"] = m_exif_data.lens_make.c_str();
          m_exifData["Exif.Photo.LensModel"] = m_exif_data.lens_model.c_str();
          m_exifData["Exif.Image.Copyright"] = m_exif_data.copyright.c_str();
          m_exifData["Exif.Image.Artist"] = m_exif_data.artist.c_str();

          m_imageTag->setExifData(m_exifData);
          m_imageTag->writeMetadata();
          m_imageTag.release();
          m_exifData.clear();

          return true;
        }

        std::string
        getNameError(FlyCapture2::Error error)
        {
          if(error == FlyCapture2::PGRERROR_UNDEFINED)
            return "PGRERROR_UNDEFINED";
          else if(error == FlyCapture2::PGRERROR_OK)
            return "PGRERROR_OK";
          else if(error == FlyCapture2::PGRERROR_FAILED)
            return "PGRERROR_FAILED";
          else if(error == FlyCapture2::PGRERROR_NOT_IMPLEMENTED)
            return "PGRERROR_NOT_IMPLEMENTED";
          else if(error == FlyCapture2::PGRERROR_FAILED_BUS_MASTER_CONNECTION)
            return "PGRERROR_FAILED_BUS_MASTER_CONNECTION";
          else if(error == FlyCapture2::PGRERROR_NOT_CONNECTED)
            return "PGRERROR_NOT_CONNECTED";
          else if(error == FlyCapture2::PGRERROR_INIT_FAILED)
            return "PGRERROR_INIT_FAILED";
          else if(error == FlyCapture2::PGRERROR_NOT_INTITIALIZED)
            return "PGRERROR_NOT_INTITIALIZED";
          else if(error == FlyCapture2::PGRERROR_INVALID_PARAMETER)
            return "PGRERROR_INVALID_PARAMETER";
          else if(error == FlyCapture2::PGRERROR_INVALID_SETTINGS)
            return "PGRERROR_INVALID_SETTINGS";
          else if(error == FlyCapture2::PGRERROR_INVALID_BUS_MANAGER)
            return "PGRERROR_INVALID_BUS_MANAGER";
          else if(error == FlyCapture2::PGRERROR_MEMORY_ALLOCATION_FAILED)
            return "PGRERROR_MEMORY_ALLOCATION_FAILED";
          else if(error == FlyCapture2::PGRERROR_LOW_LEVEL_FAILURE)
            return "PGRERROR_LOW_LEVEL_FAILURE";
          else if(error == FlyCapture2::PGRERROR_NOT_FOUND)
            return "PGRERROR_NOT_FOUND";
          else if(error == FlyCapture2::PGRERROR_FAILED_GUID)
            return "PGRERROR_FAILED_GUID";
          else if(error == FlyCapture2::PGRERROR_INVALID_PACKET_SIZE)
            return "PGRERROR_INVALID_PACKET_SIZE";
          else if(error == FlyCapture2::PGRERROR_INVALID_MODE)
            return "PGRERROR_INVALID_MODE";
          else if(error == FlyCapture2::PGRERROR_NOT_IN_FORMAT7)
            return "PGRERROR_NOT_IN_FORMAT7";
          else if(error == FlyCapture2::PGRERROR_NOT_SUPPORTED)
            return "PGRERROR_NOT_SUPPORTED";
          else if(error == FlyCapture2::PGRERROR_TIMEOUT)
            return "PGRERROR_TIMEOUT";
          else if(error == FlyCapture2::PGRERROR_BUS_MASTER_FAILED)
            return "PGRERROR_BUS_MASTER_FAILED";
          else if(error == FlyCapture2::PGRERROR_INVALID_GENERATION)
            return "PGRERROR_INVALID_GENERATION";
          else if(error == FlyCapture2::PGRERROR_LUT_FAILED)
            return "PGRERROR_LUT_FAILED";
          else if(error == FlyCapture2::PGRERROR_IIDC_FAILED)
            return "PGRERROR_IIDC_FAILED";
          else if(error == FlyCapture2::PGRERROR_STROBE_FAILED)
            return "PGRERROR_STROBE_FAILED";
          else if(error == FlyCapture2::PGRERROR_TRIGGER_FAILED)
            return "PGRERROR_TRIGGER_FAILED";
          else if(error == FlyCapture2::PGRERROR_PROPERTY_FAILED)
            return "PGRERROR_PROPERTY_FAILED";
          else if(error == FlyCapture2::PGRERROR_PROPERTY_NOT_PRESENT)
            return "PGRERROR_PROPERTY_NOT_PRESENT";
          else if(error == FlyCapture2::PGRERROR_REGISTER_FAILED)
            return "PGRERROR_REGISTER_FAILED";
          else if(error == FlyCapture2::PGRERROR_READ_REGISTER_FAILED)
            return "PGRERROR_READ_REGISTER_FAILED";
          else if(error == FlyCapture2::PGRERROR_WRITE_REGISTER_FAILED)
            return "PGRERROR_WRITE_REGISTER_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_FAILED)
            return "PGRERROR_ISOCH_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_ALREADY_STARTED)
            return "PGRERROR_ISOCH_ALREADY_STARTED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_NOT_STARTED)
            return "PGRERROR_ISOCH_NOT_STARTED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_START_FAILED)
            return "PGRERROR_ISOCH_START_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_RETRIEVE_BUFFER_FAILED)
            return "PGRERROR_ISOCH_RETRIEVE_BUFFER_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_STOP_FAILED)
            return "PGRERROR_ISOCH_STOP_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_SYNC_FAILED)
            return "PGRERROR_ISOCH_SYNC_FAILED";
          else if(error == FlyCapture2::PGRERROR_ISOCH_BANDWIDTH_EXCEEDED)
            return "PGRERROR_ISOCH_BANDWIDTH_EXCEEDED";
          else if(error == FlyCapture2::PGRERROR_IMAGE_CONVERSION_FAILED)
            return "PGRERROR_IMAGE_CONVERSION_FAILED";
          else if(error == FlyCapture2::PGRERROR_IMAGE_LIBRARY_FAILURE)
            return "PGRERROR_IMAGE_LIBRARY_FAILURE";
          else if(error == FlyCapture2::PGRERROR_BUFFER_TOO_SMALL)
            return "PGRERROR_BUFFER_TOO_SMALL";
          else if(error == FlyCapture2::PGRERROR_IMAGE_CONSISTENCY_ERROR)
            return "PGRERROR_IMAGE_CONSISTENCY_ERROR";
          else if(error == FlyCapture2::PGRERROR_INCOMPATIBLE_DRIVER)
            return "PGRERROR_INCOMPATIBLE_DRIVER";
          else if(error == FlyCapture2::PGRERROR_FORCE_32BITS)
            return "PGRERROR_FORCE_32BITS";

          return "OTHER";
        }

        void
        run(void)
        {
          while(!isStopping())
          {
            if(m_new_image)
            {
              m_new_image = false;
              m_task->debug("Save thread: %s", m_name_thread.c_str());
              try
              {
                m_row_bytes = (double)m_image.GetReceivedDataSize()/(double)m_image.GetRows();
                m_mat_image = cv::Mat(m_image.GetRows(), m_image.GetCols(), CV_8UC3, m_image.GetData(),m_row_bytes);
                if(save_image())
                {
                  try
                  {
                    writeExifData(m_path_file_name);
                  }
                  catch(...)
                  {
                    m_task->war("error write exif data - thr: %s", m_name_thread.c_str());
                  }
                }
                m_image.ReleaseBuffer();
                m_mat_image.~Mat();
              }
              catch(...)
              {
                m_task->war("save error - thr: %s", m_name_thread.c_str());
              }

              m_is_free = true;
            }
            else
            {
              Delay::waitMsec(10);
            }
          }
        }

        exifData m_exif_data;

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! The Image class is used to retrieve images from a camera
        FlyCapture2::Image m_image;
        //! The Error object of error that is returned
        FlyCapture2::Error m_error;
        //! Received new image to save
        bool m_new_image;
        //! Path to save the image
        std::string m_path_file_name;
        //! Options for saving JPEG image
        std::vector<int> m_jpeg_params;
        //! Save metadata to image
        Exiv2::Image::AutoPtr m_imageTag;
        //! Buffer for metadata
        char m_text_exif[32];
        //! A container for Exif data
        Exiv2::ExifData m_exifData;
        //! Number of row bytes of image
        unsigned int m_row_bytes;
        //! Buffer to opencv mat image
        cv::Mat m_mat_image;
        //! Flag to control state of thread
        bool m_is_free;

        bool
        save_image(void)
        {
          try
          {
            m_mutex.lock();
            imwrite( m_path_file_name.c_str(), m_mat_image, m_jpeg_params );
            m_mutex.unlock();
            return true;
          }
          catch (std::runtime_error& ex)
          {
            m_mutex.unlock();
            m_task->war("Exception saving image: %s\n", ex.what());
            return false;
          }
        }
    };
  }
}

#endif


