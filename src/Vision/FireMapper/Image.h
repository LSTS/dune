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

#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct PixelImage
{
  int col;
  int row;
};

struct Point3D
{
  double x;
  double y;
  double z;
};

class Image
{
private:
  string Nom_Image;
  cv::Mat IMatrix;
  cv::Mat undistortedImg;

  cv::Mat Translation;/*InMeters*/
  cv::Mat Rotation;
  cv::Mat IntrinsicPixelMatrix;
  cv::Mat IntrinsicMatrix;
  vector<double> Radial_distortion;
  vector<double> Tangential_distortion;

  cv::Mat CameraMatrix;
  cv::Mat DistMatrix;

public:
  int ncols;
  int nrows;

  Image(string InputImage, cv::Mat& Imat, cv::Mat Trans, cv::Mat Rot, cv::Mat Intr, vector<double> R_Dis,
        vector<double> T_Dis);

  Image(cv::Mat& Imat, cv::Mat Trans, cv::Mat Rot, cv::Mat Intr);

  string get_name();

  cv::Mat get_rot();

  cv::Mat get_trans();

  cv::Mat get_IntrinsicMatrix();

  cv::Mat get_CameraMatrix();

  cv::Mat
  get_UndistortedImage();//function to undistort the distorted images due to camera Radial and Tangential distortion
  cv::Mat get_IMatrix();


  PixelImage get_PixelImage(double x, double y, double z);

  bool Test_Image(PixelImage pxi);

  Point3D get_RayPosition(int u, int v, double Z);

  //virtual ~Image();
	
	
  static cv::Mat get_Image( int i)
      {

         std::string path0 = "/home/welarfao/images/";


 	 std::stringstream ss;

         ss << "IMG_0" << 547+i << ".JPG";

	 std::string Name=  ss.str();

	 std::string path = std::string(    path0.append(  std::string(Name) )     );

	 cout<<path<<endl;
         cv::Mat A = cv::imread(path,CV_LOAD_IMAGE_GRAYSCALE);


         return A;
      }



};


#endif // IMAGE_H
