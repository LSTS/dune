//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// OpenCv
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/core.hpp>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Test.hpp"

using namespace std;
using namespace cv;

#define SPEW_RESULT_TESTS_OPENCV  (false)

int
main(int argc, char** argv)
{
  Test test("OpenCV tests");

  try
  {
    if(SPEW_RESULT_TESTS_OPENCV)
      cout << cv::getBuildInformation() << endl;
    test.boolean("OpenCV Get Build Information", true);
  }
  catch(const std::exception& e)
  {
    cout << e.what() << endl;
    test.boolean("OpenCV Get Build Information", false);
  }

  try
  {
    if(SPEW_RESULT_TESTS_OPENCV)
    {
      cout << "OpenCV version : " << CV_VERSION << endl;
      cout << "Major version : " << CV_MAJOR_VERSION << endl;
      cout << "Minor version : " << CV_MINOR_VERSION << endl;
      cout << "Subminor version : " << CV_SUBMINOR_VERSION << endl;
    }

    if(CV_MAJOR_VERSION == 2)
      test.boolean("OpenCV Get Version -> v2.x", true);
    else if(CV_MAJOR_VERSION == 3)
      test.boolean("OpenCV Get Version -> v3.x", true);
    else if(CV_MAJOR_VERSION == 4)
      test.boolean("OpenCV Get Version -> v4.x", true);
    else
      test.boolean("OpenCV Get Version", false);
  }
  catch(const std::exception& e)
  {
    cout << e.what() << endl;
    test.boolean("OpenCV Get Version", false);
  }

  try
  {
    if(SPEW_RESULT_TESTS_OPENCV)
    {
      Mat I = Mat::eye(4, 4, CV_64F);
      I.at<double>(1,1) = CV_PI;
      cout << "I = \n" << I << ";" << endl << endl;
      Mat r = Mat(10, 3, CV_8UC3);
      randu(r, Scalar::all(0), Scalar::all(255));
      cout << "r (default) = \n" << r << ";" << endl << endl;
      cout << "r (matlab) = \n" << format(r, Formatter::FMT_MATLAB) << ";" << endl << endl;
      cout << "r (python) = \n" << format(r, Formatter::FMT_PYTHON) << ";" << endl << endl;
      cout << "r (numpy) = \n" << format(r, Formatter::FMT_NUMPY) << ";" << endl << endl;
      cout << "r (csv) = \n" << format(r, Formatter::FMT_CSV) << ";" << endl << endl;
      cout << "r (c) = \n" << format(r, Formatter::FMT_C) << ";" << endl << endl;
      Point2f p(5, 1);
      cout << "p = " << p << ";" << endl;
      Point3f p3f(2, 6, 7);
      cout << "p3f = " << p3f << ";" << endl;
      vector<float> v;
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);
      cout << "shortvec = " << Mat(v) << endl;
      vector<Point2f> points(20);
      for (size_t i = 0; i < points.size(); ++i)
        points[i] = Point2f((float)(i * 5), (float)(i % 7));
      cout << "points = " << points << ";" << endl;
    }
    test.boolean("OpenCV cv::Mat Manipulations", true);
  }
  catch(const std::exception& e)
  {
    cout << e.what() << endl;
    test.boolean("OpenCV cv::Mat Manipulations", false);
  }

  try
  {
    Mat img(500, 500, CV_8UC3);
    KalmanFilter KF(2, 1, 0);
    Mat state(2, 1, CV_32F); /* (phi, delta_phi) */
    Mat processNoise(2, 1, CV_32F);
    Mat measurement = Mat::zeros(1, 1, CV_32F);
    randn( state, Scalar::all(0), Scalar::all(0.1) );
    KF.transitionMatrix = (Mat_<float>(2, 2) << 1, 1, 0, 1);
    setIdentity(KF.measurementMatrix);
    setIdentity(KF.processNoiseCov, Scalar::all(1e-5));
    setIdentity(KF.measurementNoiseCov, Scalar::all(1e-1));
    setIdentity(KF.errorCovPost, Scalar::all(1));
    randn(KF.statePost, Scalar::all(0), Scalar::all(0.1));
    Point2f center(img.cols*0.5f, img.rows*0.5f);
    float R = img.cols/3.f;
    double stateAngle = state.at<float>(0);
    Point statePt = center + Point2f((float)cos(stateAngle), (float)-sin(stateAngle))*(float)R;
    Mat prediction = KF.predict();
    double predictAngle = prediction.at<float>(0);
    Point predictPt = center + Point2f((float)cos(predictAngle), (float)-sin(predictAngle))*(float)R;
    randn( measurement, Scalar::all(0), Scalar::all(KF.measurementNoiseCov.at<float>(0)));
    // generate measurement
    measurement += KF.measurementMatrix*state;
    double measAngle = measurement.at<float>(0);
    Point measPt = center + Point2f((float)cos(measAngle), (float)-sin(measAngle))*(float)R;
    img = Scalar::all(0);
    line( img, statePt, measPt, Scalar(0,0,255), 3, LINE_AA, 0 );
    line( img, statePt, predictPt, Scalar(0,255,255), 3, LINE_AA, 0 );
    if(theRNG().uniform(0,4) != 0)
      KF.correct(measurement);
    randn( processNoise, Scalar(0), Scalar::all(sqrt(KF.processNoiseCov.at<float>(0, 0))));
    state = KF.transitionMatrix*state + processNoise;
    test.boolean("OpenCV Convex hull", true);
  }
  catch(const std::exception& e)
  {
    cout << e.what() << endl;
    test.boolean("OpenCV Convex hull", false);
  }

  return 0;
}