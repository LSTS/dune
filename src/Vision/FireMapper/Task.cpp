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
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <string>
#include <sstream>
#include <opencv2/opencv.hpp>
#include <Vision/FireMapper/Mapping.h>
#include <Vision/FireMapper/Raster_Reader.h>
#include <Vision/FireMapper/Raster_Tile.h>
#include <Vision/FireMapper/Image.h>


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

	 Intrinsic =cv::Mat(cv::Size(3, 3),CV_64FC1);
         Translation =cv::Mat(cv::Size(3, 1),CV_64FC1);
         Rotation =cv::Mat(cv::Size(3, 3),CV_64FC1);


        Intrinsic.cv::Mat::at<double>(0, 0) = 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(0, 1) = 0;
        Intrinsic.cv::Mat::at<double>(0, 2) = 2342.3086717022011;
        Intrinsic.cv::Mat::at<double>(1, 0) = 0;
        Intrinsic.cv::Mat::at<double>(1, 1) = 3272.1733924963492;
        Intrinsic.cv::Mat::at<double>(1, 2) = 1770.4377498787001;
        Intrinsic.cv::Mat::at<double>(2, 0) = 0;
        Intrinsic.cv::Mat::at<double>(2, 1) = 0;
        Intrinsic.cv::Mat::at<double>(2, 2) = 1;

        // Setup processing of IMC messages
        bind<EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }


////////////////////////////////////////////////////////////////////////

      cv::Mat get_Image( int i)
      {

         std::string path0 = "/home/welarfao/fire-mapping/new_mapping/images/Black and White/";


 	 std::stringstream ss;

         ss << "IMG_0" << 547+i << ".JPG";

	 std::string Name=  ss.str();
	 std::string path = std::string(    path0.append(  std::string(Name) )     );
         cv::Mat A = cv::imread(path,CV_LOAD_IMAGE_GRAYSCALE);


         return A;
      }

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

	Translation.at<double>(0) = e_state->lat;
        Translation.at<double>(1) = e_state->lon;
        Translation.at<double>(2) = e_state->height;

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

	Rotation = Rotationz*Rotationy*Rotationx;

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
	int i=7 ;

        while (!stopping())
        {

          waitForMessages(3.0);

	 cv::Mat IMat = get_Image( i );

	if( IMat.data != NULL){

	 Image IMG =Image(  IMat , Translation , Rotation , Intrinsic );
	 Mp.Map(IMG);
          vector<cv::Mat> Maps = Mp.get_IMapped();
           std::stringstream ss;

         ss << "Map" << i << ".JPG";

          imwrite(ss.str(),Maps[0]);

	}else { cout<<"no IMage found \n"<<endl;
	}


         i = i +1 ;




        }
      }
    };
  }
}

DUNE_TASK
