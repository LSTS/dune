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
#include <DUNE/Coordinates/UTM.hpp>

// OpenCV headers
#include <opencv2/opencv.hpp>
#include <Vision/FireMapper/Mapping.h>
#include <Vision/FireMapper/Raster_Reader.h>
#include <Vision/FireMapper/Raster_Tile.h>
#include <Vision/FireMapper/Image.h>
#include <Vision/FireMapper/ImageGrabber.hpp>
#include <Vision/FireMapper/MorseImageGrabber.h>
#include <Vision/FireMapper/GetImage.hpp>
#include <Vision/FireMapper/Mapping_thread.hpp>


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

    struct Task : public DUNE::Tasks::Task
    {
      //! Task Arguments
      cv::Mat Intrinsic;
      cv::Mat Translation;
      cv::Mat Rotation;
      double phi;
      cv::Mat Image_Matrix;
      vector<double> Radial_distortion;
      vector<double> Tangential_distortion;

      GetImage *ImageReader;
      Mapping_thread *Map_thrd;

      MorseImageGrabber* morse_grabber;

      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) :
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

        ImageReader = new GetImage(this, "thrd_Reader");
        ImageReader->start();

        Map_thrd = new Mapping_thread(this, "thrd_Mapper");
        Map_thrd->start();


        Intrinsic.cv::Mat::at<double>(0, 0) = 0.25 * 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(0, 1) = 0.25 * 0;
        Intrinsic.cv::Mat::at<double>(0, 2) = 0.25 * 2342.3086717022011;
        Intrinsic.cv::Mat::at<double>(1, 0) = 0.25 * 0;
        Intrinsic.cv::Mat::at<double>(1, 1) = 0.25 * 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(1, 2) = 0.25 * 1770.4377498787001;
        Intrinsic.cv::Mat::at<double>(2, 0) = 0;
        Intrinsic.cv::Mat::at<double>(2, 1) = 0;
        Intrinsic.cv::Mat::at<double>(2, 2) = 1;

        Rotation.cv::Mat::at<double>(0, 0) = -0.94660184153532601;
        Rotation.cv::Mat::at<double>(0, 1) = -0.28953614234150654;
        Rotation.cv::Mat::at<double>(0, 2) = 0.14182304424855829;
        Rotation.cv::Mat::at<double>(1, 0) = -0.31502259516218351;
        Rotation.cv::Mat::at<double>(1, 1) = 0.92422734932632489;
        Rotation.cv::Mat::at<double>(1, 2) = -0.21578825569182047;
        Rotation.cv::Mat::at<double>(2, 0) = -0.068598237143622773;
        Rotation.cv::Mat::at<double>(2, 1) = -0.24894302367255508;
        Rotation.cv::Mat::at<double>(2, 2) = -0.96608573782328089;

        Translation.cv::Mat::at<double>(0) = 370747.84931199555;
        Translation.cv::Mat::at<double>(1) = 4797168.8641240774;
        Translation.cv::Mat::at<double>(2) = 507.77970651053715;

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


///////////////////////////////////////////////////////////////////////

      // Test - Receive EstimatedState message from main CPU (if FireMapper active)
      void
      consume(const IMC::EstimatedState *e_state)
      {
        cv::Mat Rotationx = cv::Mat(cv::Size(3, 3), CV_64FC1);
        cv::Mat Rotationy = cv::Mat(cv::Size(3, 3), CV_64FC1);
        cv::Mat Rotationz = cv::Mat(cv::Size(3, 3), CV_64FC1);

        //! TRanslation
        double north;
        double east;
        int zone;
        bool in_north_hem;
        UTM utm;
        //! Converts WGS84 to UTM
        //! @param[in] lat latitude
        //! @param[in] lon longitude
        //! @param[out] north pointer to variable to store the northing of the UTM coordinate
        //! @param[out] east pointer to variable to store the easting of the UTM coordinate
        //! @param[out] zone pointer to variable to store the zone of the UTM coordinate
        //! @param[out] in_north_hem pointer to variable to store the hemisphere
        //! true if UTM coordinate is in the north hemisphere, false otherwise

        utm.fromWGS84(e_state->lat, e_state->lon, &north, &east, &zone, &in_north_hem);

        Translation.at<double>(0) = east + e_state->x;
        Translation.at<double>(1) = north + e_state->y;
        Translation.at<double>(2) = e_state->z;


        //! Rotation over x axis phi.

        //cout << e_state->phi << endl;
        phi = e_state->phi;

        Rotationx.cv::Mat::at<double>(0, 0) = 1;
        Rotationx.cv::Mat::at<double>(0, 1) = 0;
        Rotationx.cv::Mat::at<double>(0, 2) = 0;
        Rotationx.cv::Mat::at<double>(1, 0) = 0;
        Rotationx.cv::Mat::at<double>(1, 1) = cos(e_state->phi);
        Rotationx.cv::Mat::at<double>(1, 2) = -sin(e_state->phi);
        Rotationx.cv::Mat::at<double>(2, 0) = 0;
        Rotationx.cv::Mat::at<double>(2, 1) = sin(e_state->phi);
        Rotationx.cv::Mat::at<double>(2, 2) = cos(e_state->phi);

        //! Rotation over y axis theta.

        Rotationy.cv::Mat::at<double>(0, 0) = cos(e_state->theta);
        Rotationy.cv::Mat::at<double>(0, 1) = 0;
        Rotationy.cv::Mat::at<double>(0, 2) = sin(e_state->theta);
        Rotationy.cv::Mat::at<double>(1, 0) = 0;
        Rotationy.cv::Mat::at<double>(1, 1) = 1;
        Rotationy.cv::Mat::at<double>(1, 2) = 0;
        Rotationy.cv::Mat::at<double>(2, 0) = -sin(e_state->theta);
        Rotationy.cv::Mat::at<double>(2, 1) = 0;
        Rotationy.cv::Mat::at<double>(2, 2) = cos(e_state->theta);

        //! Rotation over z axis psi.

        Rotationz.cv::Mat::at<double>(0, 0) = cos(e_state->psi);
        Rotationz.cv::Mat::at<double>(0, 1) = -sin(e_state->psi);
        Rotationz.cv::Mat::at<double>(0, 2) = 0;
        Rotationz.cv::Mat::at<double>(1, 2) = sin(e_state->psi);
        Rotationz.cv::Mat::at<double>(1, 1) = cos(e_state->psi);
        Rotationz.cv::Mat::at<double>(1, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 0;
        Rotationz.cv::Mat::at<double>(2, 2) = 1;

        // Rotation R=RX*RY*RZ
        Rotation = Rotationz * Rotationy * Rotationx;
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
      }

      //! Main loop.
      void
      onMain(void)
      {
        morse_grabber->start();

        double x=0;
        double y=0;
        while (!stopping())
        {
          waitForMessages(10.0);
          if (morse_grabber->is_idle() && !morse_grabber->is_image_available())
          { morse_grabber->capture(x, 0, 1100, +M_PI_2, +M_PI, +M_PI/4);

            x+=100;
            y+=100;
          }
          TaggedImage t;
          if (morse_grabber->is_image_available())
          {
            t = morse_grabber->get_image();
          }

          sleep(1);

//        std::string path_DEM = "/home/welarfao/mapping/Mapping/DEM.txt";//we chose to give a file that holds the paths of all the DEM knowing that in the real case we will need more than one DEM
//        std::string m_path_results = "/home/welarfao/results/";
//
//        cv::Mat Image_Translation = cv::Mat(3, 1, CV_64FC1);
//        cv::Mat Image_Rotation = cv::Mat(3, 3, CV_64FC1);
//
//        Mapping Mp = Mapping(path_DEM);
//        bool need_mapping = false;
//        bool need_Image = true;
//        bool start_mapping = false;
//
//        while (!stopping()) {
//
//          waitForMessages(1.0);
//
//          if (need_Image) {
//            ImageReader->Get_image();
//            //Here we  fix the rotation and translation matrix to the the values appropriate with the image we just took
//            need_Image = false;
//          }
//
//          if (ImageReader->Image_Read()) {
//
//            Image_Translation = Translation;
//            Image_Rotation = Rotation;
//            Image_Matrix = ImageReader->Image_Matrix();
//            if (Image_Matrix.data != NULL) {
//              need_mapping = true;
//            } else {
//              cout<<"no IMage found "<<endl;
//              need_Image = true;
//            }
//
//          }
//
//          if (need_mapping) {
//
//            if (phi < 0.1 && phi > -0.1) {
//              start_mapping = Map_thrd->Map_Image(Image_Matrix, Image_Translation, Image_Rotation, Intrinsic,
//                                                  Radial_distortion, Tangential_distortion, Mp);
//              need_mapping = false;
//            } else {
//              need_Image = true;
//              need_mapping = false;
//            }
//          }
//
//          if (Map_thrd->Mapping_finished() && start_mapping) {
//            Map_thrd->save_results(m_path_results);
//            need_Image = true;
//            start_mapping = false;
//          }

        }
      }

    };
  }
}

DUNE_TASK
