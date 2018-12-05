/* Copyright (c) 2017-2018, CNRS-LAAS
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

// ISO C++ 98 headers.
#include <string>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Coordinates/WGS84.hpp>

// OpenCV headers
#include <opencv2/opencv.hpp>
#include <Vision/FireMapper/Mapping.h>
#include <Vision/FireMapper/Raster_Reader.h>
#include <Vision/FireMapper/Raster_Tile.h>
#include <Vision/FireMapper/Image.h>
#include <Vision/FireMapper/MorseImageGrabber.h>
#include <Vision/FireMapper/Mapping_thread.hpp>
#include <Vision/FireMapper/sensor_model.h>
#include <gdal/ogr_spatialref.h>


namespace Vision
{
  namespace FireMapper
  {
    using DUNE_NAMESPACES;


    //! Task Arguments
    struct Arguments
    {
      //! Main System ID
      std::string system_id;

    };
    struct Lambert93Position
    {
      double x;
      double y;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments
      cv::Mat Intrinsic;
      cv::Mat Translation;
      cv::Mat Rotation;
      double position_x, position_y, position_z;
      double phi, theta, psi;

      cv::Mat Image_Matrix;

      vector<double> Radial_distortion;
      vector<double> Tangential_distortion;

      Mapping_thread* Map_thrd;
      MorseImageGrabber* morse_grabber;

      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx)
      {

        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Main System ID", m_args.system_id)
          .defaultValue("x8-06")
          .description("Main CPU IMC address.");

        Intrinsic = cv::Mat(3, 3, CV_64FC1);
        Translation = cv::Mat(3, 1, CV_64FC1);
        Rotation = cv::Mat(3, 3, CV_64FC1);


        Map_thrd = new Mapping_thread(this, "thrd_Mapper");
        Map_thrd->start();

        Radial_distortion.push_back(-0.04646865617107581);
        Radial_distortion.push_back(0.051288490946210602);
        Radial_distortion.push_back(-0.025988438162638149);
        Tangential_distortion.push_back(0.0032416606187316522);
        Tangential_distortion.push_back(0.0033995207337653736);

        // Setup processing of IMC messages
        bind < EstimatedState > (this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      void
      set_Rot_Trans_Matrix(float xx, float yy, float zz, float _phi, float _theta, float _psi)
      {

        cv::Mat Rotationx = cv::Mat(cv::Size(3, 3), CV_64FC1);
        cv::Mat Rotationy = cv::Mat(cv::Size(3, 3), CV_64FC1);
        cv::Mat Rotationz = cv::Mat(cv::Size(3, 3), CV_64FC1);

        //! TRanslation

        Translation.at<double>(0) = xx;
        Translation.at<double>(1) = yy;
        Translation.at<double>(2) = zz;

        //! Rotation over x axis phi.

        Rotationx.cv::Mat::at<double>(0, 0) = 1;
        Rotationx.cv::Mat::at<double>(0, 1) = 0;
        Rotationx.cv::Mat::at<double>(0, 2) = 0;
        Rotationx.cv::Mat::at<double>(1, 0) = 0;
        Rotationx.cv::Mat::at<double>(1, 1) = cos(_phi);
        Rotationx.cv::Mat::at<double>(1, 2) = -sin(_phi);
        Rotationx.cv::Mat::at<double>(2, 0) = 0;
        Rotationx.cv::Mat::at<double>(2, 1) = sin(_phi);
        Rotationx.cv::Mat::at<double>(2, 2) = cos(_phi);

        //! Rotation over y axis theta.

        Rotationy.cv::Mat::at<double>(0, 0) = cos(_theta);
        Rotationy.cv::Mat::at<double>(0, 1) = 0;
        Rotationy.cv::Mat::at<double>(0, 2) = sin(_theta);
        Rotationy.cv::Mat::at<double>(1, 0) = 0;
        Rotationy.cv::Mat::at<double>(1, 1) = 1;
        Rotationy.cv::Mat::at<double>(1, 2) = 0;
        Rotationy.cv::Mat::at<double>(2, 0) = -sin(_theta);
        Rotationy.cv::Mat::at<double>(2, 1) = 0;
        Rotationy.cv::Mat::at<double>(2, 2) = cos(_theta);

        //! Rotation over z axis psi.

        Rotationz.cv::Mat::at<double>(0, 0) = cos(_psi);
        Rotationz.cv::Mat::at<double>(0, 1) = -sin(_psi);
        Rotationz.cv::Mat::at<double>(0, 2) = 0;
        Rotationz.cv::Mat::at<double>(1, 2) = sin(_psi);
        Rotationz.cv::Mat::at<double>(1, 1) = cos(_psi);
        Rotationz.cv::Mat::at<double>(1, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 1;


        Rotation = Rotationz * Rotationy * Rotationx;


      }

      /*Convert Lambert93 (EPSG:2154) points to WGS84 (lat, lon) coordinates*/

      Lambert93Position
      wgs84_to_lambert93(double lat, double lon)
      {

        OGRSpatialReference wgs84_gcs;
        OGRSpatialReference lambert93_pcs;

        wgs84_gcs.importFromEPSG(4171); // RGF93 (EPSG:4171) is in practice equal to WGS84 (EPSG:4326)
        lambert93_pcs.importFromEPSG(2154);

        auto poCT = OGRCreateCoordinateTransformation(&wgs84_gcs, &lambert93_pcs);
        //ASSERT(poCT); // If the conversion cannot take place, poCT is null


        Lambert93Position lambert93_ps;

        auto xx = 180 / M_PI * lon;
        auto yy = 180 / M_PI * lat;


        poCT->Transform(1, &xx, &yy); // Again Transform must succed

        lambert93_ps.x = xx;
        lambert93_ps.y = yy;


        OGRCoordinateTransformation::DestroyCT(poCT);
        return lambert93_ps;
      }

      // Test - Receive EstimatedState message from main CPU (if FireMapper active)
      void
      consume(const IMC::EstimatedState* e_state)
      {
        double m_lat = e_state->lat;
        double m_lon = e_state->lon;
        double m_height = e_state->height;

        WGS84::displace(e_state->x, e_state->y, &m_lat, &m_lon);

        Lambert93Position lambert93_ps = wgs84_to_lambert93(m_lat, m_lon);

        position_x = lambert93_ps.x;
        position_y = lambert93_ps.y;
        position_z = m_height;

        phi = e_state->phi;
        theta = e_state->theta;
        psi = e_state->psi;
      }


      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        morse_grabber = new MorseImageGrabber(this, Address::Loopback, 4000);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        delete morse_grabber;
        //delete Map_thrd ;
      }

      template<typename T>
      void serialize(const T& obj, std::vector<char>& buffer)
      {
        char const* obj_begin = reinterpret_cast<char const*>(&obj);
        std::copy(obj_begin, obj_begin + sizeof(T), std::back_inserter(buffer));
      }

      void dispatch_firemap()
      {
        IMC::DevDataBinary msg = IMC::DevDataBinary();
        msg.setTimeStamp();
        msg.setSource(static_cast<uint16_t>(getSystemId()));
        msg.setSourceEntity(static_cast<uint8_t>(getEntityId()));

        // Magic number
        msg.value.emplace_back(0xF1);
        msg.value.emplace_back(0x3E);
        // x size
        uint64_t x_size = 1;
        serialize<uint64_t>(x_size, msg.value);

        // y size
        uint64_t y_size = 0x1;
        serialize<uint64_t>(y_size, msg.value);

        // x offset
        double x_offset = 2.;
        serialize<double>(x_offset, msg.value);

        // y offset
        double y_offset = 2.;
        serialize<double>(y_offset, msg.value);

        // cell width
        double cell_width = 3.;
        serialize<double>(cell_width, msg.value);

        // raster data
        double data = 123456789.;
        serialize<double>(data, msg.value);

        this->dispatch(&msg);
      }

      //! Main loop.
      void
      onMain(void)
      {
//        std::string path_DEM = "/home/rbailonr/mapping_folder/dems.txt";//we chose to give a file that holds the paths of all the DEM knowing that in the real case we will need more than one DEM
//        std::string m_path_results = "/home/rbailonr/mapping_folder/";
//
//        Mapping Mp = Mapping(path_DEM);
//        Mp.set_threshold(200);
//
//        bool need_mapping = false;
//        bool Image_ready = false;
//        bool need_Image = true;
//        bool start_mapping = false;
//
//        float Rotation_limit = 0.15;

//        morse_grabber->start();

        //double x = 537254;
        //double y = 6212351;

        while (!stopping())
        {
          waitForMessages(1.0);
          dispatch_firemap();
        }


//        while (!stopping())
//        {
//          ////////////////////////////////////////////////////////////////////////////
//
//          waitForMessages(10.0);
//          if (morse_grabber->is_idle() && !morse_grabber->is_image_available())
//          {
//
//            morse_grabber->capture(position_x, position_y, 2500, /*phi*/ 0, /*theta*/ 0,/*psi*/ 0);
//            // x += 300;
//            //y += 300;
//          }
//          TaggedImage t;
//
//          if (morse_grabber->is_image_available())
//          {
//            t = morse_grabber->get_image();
//            Image_ready = true;
//          }
//
//
//          //////////////////////////////////////////////////////////////////////////////
//
//          if (Image_ready && need_Image)
//          {
//
//            Image_Matrix = (t.image).clone();
//
//            if (Image_Matrix.data != NULL)
//            {
//
//              if (t.psi <= Rotation_limit && t.psi > -Rotation_limit)
//              {
//
//                Intrinsic = (t.intrinsic_matrix).clone();
//
//                cv::transpose(Image_Matrix, Image_Matrix);//this transpose is added only for Morse_grabber images
//                // because the images were tansposed so as to be sent and we have to transpose them back
//
//                set_Rot_Trans_Matrix(t.x, t.y, t.z, t.phi, t.theta, t.psi);
//
//                need_mapping = true;
//                Image_ready = false;
//                need_Image = false;
//              } else
//              {
//                war("Received Image  doesn't respect the vision limits : Vison out of land");
//                Image_ready = false;
//                need_Image = true;
//
//              }
//            } else
//            {
//              war("no IMage found ");
//              Image_ready = false;
//              need_Image = true;
//
//            }
//
//          }
//          /////////////////////////////////////////////////////////////////
//
//          if (need_mapping)
//          {
//            start_mapping = Map_thrd->Map_Image(Image_Matrix, Translation, Rotation, Intrinsic,
//                                                Radial_distortion, Tangential_distortion, Mp);
//
//            need_mapping = false;
//
//          }
//          ////////////////////////////////////////////////////////////////////
//
//          if (Map_thrd->Mapping_finished() && start_mapping)
//          {
//            Map_thrd->save_results(m_path_results);
//            start_mapping = false;
//            need_Image = true;
//          }
//
//        }
      }

    };
  }
}

DUNE_TASK
