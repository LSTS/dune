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

struct ImagePixel
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
public:
  int ncols;
  int nrows;

  Image(cv::Mat Imat, cv::Mat Trans, cv::Mat Rot_cam_to_world, cv::Mat Intr, std::vector<double> R_Dis,
        std::vector<double> T_Dis);

  cv::Mat get_Rotation() const;

  cv::Mat get_Translation() const;

  cv::Mat get_IntrinsicMatrix() const;

  cv::Mat get_CameraMatrix() const;

  //function to undistort the distorted images due to camera Radial and Tangential distortion
  cv::Mat get_UndistortedImage() const;

  cv::Mat get_ImageMatrix() const;

  void Segment(double thresholdValue);

  ImagePixel get_ImagePixel_of(double x, double y, double z) const;

  bool Test_Image(ImagePixel pxi) const;

  Point3D get_RayPosition(int u, int v, double Z) const;


private:
  cv::Mat ImageMatrix;
  cv::Mat undistortedImg;

  cv::Mat Translation; /* In Meters */
  cv::Mat Rotation_cam_to_world;
  cv::Mat IntrinsicPixelMatrix;
  cv::Mat IntrinsicMatrix;
  std::vector<double> Radial_distortion;
  std::vector<double> Tangential_distortion;

  cv::Mat camera_matrix;
  cv::Mat DistMatrix;


};

class TestImage
{
public:
  static void test_camera_matrix(const Image& im, double delta_x=0., double delta_y=0.)
  {
    double ppp[4] = {im.get_Translation().at<double>(0)+delta_x, im.get_Translation().at<double>(1)+delta_y, 0, 1.};
    cv::Mat point = cv::Mat(4, 1, CV_64FC1, &ppp);
    std::cout << "Target position in world " << point << std::endl;
    cv::Mat p_image = im.get_CameraMatrix() * point;
    p_image.at<double>(0) = p_image.at<double>(0) / p_image.at<double>(2);
    p_image.at<double>(1) = p_image.at<double>(1) / p_image.at<double>(2);
    p_image.at<double>(2) = p_image.at<double>(2) / p_image.at<double>(2);
    std::cout << "Target position in picture " << p_image << std::endl;
  };

};


#endif // IMAGE_H
