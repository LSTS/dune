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

// OpenCV headers
#include <opencv2/opencv.hpp>

// Local headers
#include <Vision/FireMapper/Mapping.h>
#include <Vision/FireMapper/Raster_Reader.h>
#include <Vision/FireMapper/Raster_Tile.h>
#include <Vision/FireMapper/Image.h>

#include <Vision/FireMapper/ImageGrabber.hpp>


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

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments
      cv::Mat Intrinsic ;
      cv::Mat Translation ;
      cv::Mat Rotation ;


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

	 Intrinsic =cv::Mat(3, 3,CV_64FC1);
         Translation =cv::Mat(3, 1,CV_64FC1);
         Rotation =cv::Mat(3, 3,CV_64FC1);


        Intrinsic.cv::Mat::at<double>(0, 0) = 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(0, 1) = 0;
        Intrinsic.cv::Mat::at<double>(0, 2) = 2342.3086717022011;
        Intrinsic.cv::Mat::at<double>(1, 0) = 0;
        Intrinsic.cv::Mat::at<double>(1, 1) = 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(1, 2) = 1770.4377498787001;
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
        // Setup processing of IMC messages
        bind<EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }


////////////////////////////////////////////////////////////////////////

/*      cv::Mat get_Image( int i)
      {

         std::string path0 = "/home/welarfao/fire-mapping/new_mapping/images/Black and White/";


 	 std::stringstream ss;

         ss << "IMG_0" << 547+i << ".JPG";

	 std::string Name=  ss.str();

	 std::string path = std::string(    path0.append(  std::string(Name) )     );

	 cout<<path<<endl;
         cv::Mat A = cv::imread(path,CV_LOAD_IMAGE_GRAYSCALE);


         return A;
   }*/

//////////////////////////////////////////////////////////////////


      // Test - Receive EstimatedState message from main CPU (if FireMapper active)
      void
      consume(const IMC::EstimatedState* e_state)
      {
        debug("Hello World");
   	cv::Mat Rotationx =cv::Mat(cv::Size(3, 3),CV_64FC1);
     	cv::Mat Rotationy =cv::Mat(cv::Size(3, 3),CV_64FC1);
	cv::Mat Rotationz =cv::Mat(cv::Size(3, 3),CV_64FC1);

	//! TRanslation

	//Translation.at<double>(0) = e_state->lat;
        //Translation.at<double>(1) = e_state->lon;
        //Translation.at<double>(2) = e_state->height;

 	//! Rotation over x axis phi.
	Rotationx.cv::Mat::at<double>(0,0) = 1;
	Rotationx.cv::Mat::at<double>(0,1)  = 0;
	Rotationx.cv::Mat::at<double>(0,2)  = 0;
	Rotationx.cv::Mat::at<double>(1,0)  = 0;
	Rotationx.cv::Mat::at<double>(1,1)  = cos(e_state->phi) ;
	Rotationx.cv::Mat::at<double>(1,2)  = -sin(e_state->phi);
	Rotationx.cv::Mat::at<double>(2,0)  = 0;
	Rotationx.cv::Mat::at<double>(2,1)  = sin(e_state->phi) ;
	Rotationx.cv::Mat::at<double>(2,2)  = cos(e_state->phi) ;

	//! Rotation over y axis theta.

	Rotationy.cv::Mat::at<double>(0,0) = cos(e_state->theta) ;
	Rotationy.cv::Mat::at<double>(0,1) = 0 ;
	Rotationy.cv::Mat::at<double>(0,2) = sin(e_state->theta) ;
	Rotationy.cv::Mat::at<double>(1,0) = 0;
	Rotationy.cv::Mat::at<double>(1,1) = 1 ;
	Rotationy.cv::Mat::at<double>(1,2) = 0 ;
	Rotationy.cv::Mat::at<double>(2,0) = -sin(e_state->theta);
	Rotationy.cv::Mat::at<double>(2,1) = 0 ;
	Rotationy.cv::Mat::at<double>(2,2) = cos(e_state->theta) ;

	//! Rotation over z axis psi.

       Rotationz.cv::Mat::at<double>(0,0)= cos(e_state->psi) ;
	Rotationz.cv::Mat::at<double>(0,1) = -sin(e_state->psi);
	Rotationz.cv::Mat::at<double>(0,2) = 0;
	Rotationz.cv::Mat::at<double>(1,2) = sin(e_state->psi) ;
	Rotationz.cv::Mat::at<double>(1,1) = cos(e_state->psi) ;
	Rotationz.cv::Mat::at<double>(1,2) = 0;
	Rotationz.cv::Mat::at<double>(2,2) = 0;
	Rotationz.cv::Mat::at<double>(2,2) = 0 ;
	Rotationz.cv::Mat::at<double>(2,2) = 1 ;

	//! Rotation R=RX*RY*RZ

	//Rotation = Rotationz*Rotationy*Rotationx;

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
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {

	Mapping Mp =Mapping();
	int i=0 ;
	

        while (!stopping())
        {

          waitForMessages(10.0);

	 cv::Mat IMat = Image::get_Image( i );

	if( IMat.data != NULL){



	 Image IMG =Image(  IMat , Translation , Rotation , Intrinsic );
	 Mp.Map(IMG);
	 vector<cv::Mat> Maps = Mp.get_IMapped();

	 std::string path0 = "/home/welarfao/results/";
	 std::stringstream ss;

	 ss << "Map" << i << ".JPG";
	 std::string path = std::string(  path0.append(  std::string(ss.str()) ) );

	 cv::imwrite(path,Maps[0]);

	}else { cout<<"no Image found \n"<<endl;
	}


         i = i +1 ;




        }
      }
    };
  }
}

DUNE_TASK
