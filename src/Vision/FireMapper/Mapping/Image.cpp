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

#include "Image.hpp"

Image::Image(cv::Mat Imat, cv::Mat Trans, cv::Mat Rot_cam_to_world, cv::Mat Intr, std::vector<double> R_Dis,
             std::vector<double> T_Dis)
{
  camera_matrix = cv::Mat::zeros(3, 4, CV_64FC1);

  ImageMatrix = Imat;
  ncols = ImageMatrix.cols;
  nrows = ImageMatrix.rows;
  Translation = Trans;
  Rotation_cam_to_world = Rot_cam_to_world;
  IntrinsicPixelMatrix = Intr;
  Radial_distortion = R_Dis;
  Tangential_distortion = T_Dis;
  DistMatrix = (cv::Mat_<double>(1, 5) << Radial_distortion[0],
    Radial_distortion[1],
    Tangential_distortion[0],
    Tangential_distortion[1],
    Radial_distortion[2]
  );

  /* Resizing the image so as it will take less time in being Mapped because we will reduce the number of pixels it
   * holds doing so implies that we multiply the intrinsic matrix too by the same coef, the infra-red pictures we will
   * use might not be in need for this option because they will already be in a small size.*/
  //if ((ImageMatrix.rows > 1500) || (ImageMatrix.cols > 1500)){
  //               cv::resize(ImageMatrix, ImageMatrix, cv::Size(), 0.25, 0.25); // resize image
  // }

  // Remove distortion
  cv::undistort(ImageMatrix, undistortedImg, IntrinsicPixelMatrix, DistMatrix);

  /* Given that our positions are in meters,we need to have all our Matrix in meters, so we multiply with 0.001 to get
   * to m. (This transformation can, not be done since we devide u and v by z to get the homogeneous coordinates)*/
  IntrinsicMatrix =/*0.001*/Intr;// intrinsic in meters

  /* This Matrix is given in a scale related to pixels ,so as to convert it to meters we will multiply it with the ratio
   * between mm and pixel; wich is  0.001339453 m2  we have
        #Focal Length (mm) asuming a sensor width of 6.1722000000000001x4.6291500000000001mm
        #Image size 4608x3456 pixel

        6.1722000000000001 / 4608 = 0.001339453
   */
  //IntrinsicMatrix = 0.001339453*IntrinsicMatrix; //intrinsic in mm

  // Compute camera matix

  //http://ksimek.github.io/2012/08/22/extrinsic/
  //P = K [R|-Rt]
  // [R|-Rt] extrinsics

  cv::Mat Transform_world_to_cam = cv::Mat::zeros(4, 4, CV_64FC1);
  cv::Mat Rotation_world_to_cam;
  cv::transpose(Rotation_cam_to_world, Rotation_world_to_cam);
//  std::cout << "Rotation C -> W matrix: " << std::endl << Rotation_cam_to_world << std::endl << std::endl;

  cv::hconcat(Rotation_world_to_cam, -1 * Rotation_world_to_cam * Translation, Transform_world_to_cam);
  cv::Mat affineRow = (cv::Mat_<double>(1, 4) << 0.0, 0.0, 0.0, 1.0);
  cv::vconcat(Transform_world_to_cam, affineRow, Transform_world_to_cam);
  //K Intrinsics

  cv::Mat zeroCol = (cv::Mat_<double>(3, 1) << 0.0, 0.0, 0.0);
  cv::hconcat(IntrinsicMatrix, zeroCol, IntrinsicMatrix);

  camera_matrix = IntrinsicMatrix * Transform_world_to_cam;
//  std::cout << "Intrinsic matrix: " << std::endl << IntrinsicMatrix << std::endl << std::endl;
//  std::cout << "Extrinsic matrix: " << std::endl << Transform_world_to_cam << std::endl << std::endl;
//  std::cout << "Camera    matrix: " << std::endl << camera_matrix << std::endl << std::endl;

}

//////////////////////////////////////////////////////////////////////////////////////////////////

cv::Mat Image::get_CameraMatrix() const
{
  return camera_matrix;
}

cv::Mat Image::get_IntrinsicMatrix() const
{
  return IntrinsicPixelMatrix;
}

cv::Mat Image::get_Rotation() const
{
  return Rotation_cam_to_world;
}

cv::Mat Image::get_Translation() const
{
  return Translation;
}

cv::Mat Image::get_UndistortedImage() const
{
  return undistortedImg;
}

cv::Mat Image::get_ImageMatrix() const
{
  return ImageMatrix;
}

void Image::Segment(double thresholdValue)
{
  ///Segmentation
  cv::threshold(undistortedImg, undistortedImg, thresholdValue, 255, cv::THRESH_BINARY);
}

////////////////////////////////////////////////////////////////////////////////////////////
/* This function Maps a point in the world in the image */

ImagePixel Image::get_ImagePixel_of(double x, double y, double z) const
{
  ImagePixel PI;

  double ppp[4] = {x, y, z, 1.};
  cv::Mat Pointworld = cv::Mat(4, 1, CV_64FC1, &ppp);

  cv::Mat PointImage = camera_matrix * Pointworld;

  PI.col = static_cast<int>(round(PointImage.at<double>(0) / (PointImage.at<double>(2)))); // divide by Z-cordinate
  PI.row = static_cast<int>(round(PointImage.at<double>(1) / (PointImage.at<double>(2)))); // divide by Z-cordinate

  return PI;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

Point3D Image::get_RayPosition(int u, int v, double Z) const
{
  /* we know that :

     | u |     | x |             | a1  b1  c1  d1 |                               u  = a1x + b1y + c1z + d1
     | v | = C | y |  with  C =  | a2  b2  c2  d2 |  so we get these equations :  v  = a2x + b2y + c2z + d2
     | z'|     | z |             | a3  b3  c3  d3 |                               z' = a3x + b3y + c3z + d3
               | 1 |


     u0 = u/z' and v0 = v/z'
     u0 = a1x + b1y + c1z + d1 / a3x + b3y + c3z + d3
     v0 = a2x + b2y + c2z + d2 / a3x + b3y + c3z + d3

  */
  Point3D PW;

  double a1 = camera_matrix.at<double>(0, 0);
  double b1 = camera_matrix.at<double>(0, 1);
  double c1 = camera_matrix.at<double>(0, 2);
  double d1 = camera_matrix.at<double>(0, 3);
  double a2 = camera_matrix.at<double>(1, 0);
  double b2 = camera_matrix.at<double>(1, 1);
  double c2 = camera_matrix.at<double>(1, 2);
  double d2 = camera_matrix.at<double>(1, 3);
  double a3 = camera_matrix.at<double>(2, 0);
  double b3 = camera_matrix.at<double>(2, 1);
  double c3 = camera_matrix.at<double>(2, 2);
  double d3 = camera_matrix.at<double>(2, 3);

  PW.x = ((((b1 - u * b3) / (b2 - v * b3)) * (v * c3 - c2) + (c1 - u * c3)) * Z +
          ((b1 - u * b3) / (b2 - v * b3)) * (v * d3 - d2) + (d1 - u * d3)) /
         ((u * a3 - a1) * (1 - ((v * a3 - a2) * (b1 - u * b3) / ((b2 - v * b3) * (u * a3 - a1)))));

  PW.y = ((v * a3 - a2) * PW.x + (v * c3 - c2) * Z + (v * d3 - d2)) / (b2 - v * b3);

  //PW.x =((u*c3-c1)*Z+u*d3-d1)/a1 ;

  //PW.y =((v*c3-c2)*Z+v*d3-d2)/b2 ;

  PW.z = Z;

  return PW;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

/* THis function tests if the pixel given exists in the IMage considering the number of rows and cols that the Image has*/

bool Image::Test_Image(ImagePixel pxi) const
{
  bool test = false;
  if (pxi.col >= 0 && pxi.col <= ImageMatrix.cols)
  {

    if (pxi.row >= 0 && pxi.row <= ImageMatrix.rows)
    {

      test = true;
    }
  }
  return test;
}

















/*
Image::~Image()
{
    //dtor
}
*/
