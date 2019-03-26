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

  bool Map_direct(Image IM, double time);

  Pixel_Test Pixel_Mapping(Pixel_Data PD, int noDATA, Image IM) const;

  double IMask(cv::Mat UndistortedImage, std::vector<ImagePixel> Corners) const;

  Point3D Raytracer(ImagePixel Pix, const Image& I, const FireRaster& Rs) const;

  Corner_Test get_Imagecorners(const Image& IM, const FireRaster& RS) const;

public:
  explicit Mapping(FireRaster* fireraster, double threshold = 200, bool Image_segmentation = false);

  FireRaster& fire_map();

  bool map(Image IM, double time = std::numeric_limits<double>::infinity());

  std::vector<cv::Mat>& get_images_mapped();

  void save_firemap(std::string folder_result);

  void set_threshold(double th);

  double get_threshold() const;

  virtual ~Mapping() = default;
};
#endif // MAPPING_H
