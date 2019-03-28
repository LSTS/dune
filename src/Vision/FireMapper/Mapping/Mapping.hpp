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

#ifndef MAPPING_H
#define MAPPING_H

#include <string>
#include "FireRaster.hpp"
#include "Image.hpp"
#include "SensorModel.hpp"


struct Pixel_Test
{
  uchar Value;
  bool Test;
};


struct Corner_Test
{
  Pixel_Range PR;
  bool Test;
};


class Mapping
{
private:
  FireRaster* firemap;
//  std::vector<Raster_ALL> Liste;
  double threshold;
  bool use_segmentation;

  bool Map_direct(Image& IM, double time);

  Pixel_Test Pixel_Mapping(Pixel_Data PD, int noDATA, Image IM) const;

  double IMask(cv::Mat UndistortedImage, std::vector<ImagePixel> Corners) const;

  Point3D Raytracer(ImagePixel Pix, const Image& I, const FireRaster& Rs) const;

  Corner_Test get_Imagecorners(const Image& IM, const FireRaster& RS) const;

public:
  explicit Mapping(FireRaster* fireraster, double threshold = 200, bool Image_segmentation = false);

  FireRaster& fire_map();

  bool map(Image& IM, double time = std::numeric_limits<double>::infinity());

//  std::vector<cv::Mat>& get_images_mapped();

  void save_firemap(std::string folder_result);

  void set_threshold(double th);

  double get_threshold() const;

  virtual ~Mapping() = default;

  static cv::Mat rotation_matrix(double _phi, double _theta, double _psi)
  {
    cv::Mat Rotationx = cv::Mat::zeros(cv::Size(3, 3), CV_64FC1);
    cv::Mat Rotationy = cv::Mat::zeros(cv::Size(3, 3), CV_64FC1);
    cv::Mat Rotationz = cv::Mat::zeros(cv::Size(3, 3), CV_64FC1);

    // Rotation over x axis phi.
    Rotationx.cv::Mat::at<double>(0, 0) = 1.;
    Rotationx.cv::Mat::at<double>(0, 1) = 0.;
    Rotationx.cv::Mat::at<double>(0, 2) = 0.;
    Rotationx.cv::Mat::at<double>(1, 0) = 0.;
    Rotationx.cv::Mat::at<double>(1, 1) = cos(_phi);
    Rotationx.cv::Mat::at<double>(1, 2) = -sin(_phi);
    Rotationx.cv::Mat::at<double>(2, 0) = 0.;
    Rotationx.cv::Mat::at<double>(2, 1) = sin(_phi);
    Rotationx.cv::Mat::at<double>(2, 2) = cos(_phi);

    // Rotation over y axis theta.
    Rotationy.cv::Mat::at<double>(0, 0) = cos(_theta);
    Rotationy.cv::Mat::at<double>(0, 1) = 0;
    Rotationy.cv::Mat::at<double>(0, 2) = sin(_theta);
    Rotationy.cv::Mat::at<double>(1, 0) = 0.;
    Rotationy.cv::Mat::at<double>(1, 1) = 1.;
    Rotationy.cv::Mat::at<double>(1, 2) = 0.;
    Rotationy.cv::Mat::at<double>(2, 0) = -sin(_theta);
    Rotationy.cv::Mat::at<double>(2, 1) = 0.;
    Rotationy.cv::Mat::at<double>(2, 2) = cos(_theta);

    // Rotation over z axis psi.
    Rotationz.cv::Mat::at<double>(0, 0) = cos(_psi);
    Rotationz.cv::Mat::at<double>(0, 1) = -sin(_psi);
    Rotationz.cv::Mat::at<double>(0, 2) = 0.;
    Rotationz.cv::Mat::at<double>(1, 2) = sin(_psi);
    Rotationz.cv::Mat::at<double>(1, 1) = cos(_psi);
    Rotationz.cv::Mat::at<double>(1, 2) = 0.;
    Rotationz.cv::Mat::at<double>(2, 2) = 0.;
    Rotationz.cv::Mat::at<double>(2, 2) = 0.;
    Rotationz.cv::Mat::at<double>(2, 2) = 1.;

    return (Rotationz * Rotationy * Rotationx);
  }

};
#endif // MAPPING_H
