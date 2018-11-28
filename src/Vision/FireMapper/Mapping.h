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


using namespace std;

#include <Vision/FireMapper/Raster_Tile.h>
#include <Vision/FireMapper/Image.h>
#include <Vision/FireMapper/sensor_model.h>
#include <string>


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

  vector<cv::Mat> Images_Mapped;
  vector<Raster_Tile> Carte;
  vector<Raster_ALL> Liste;
  double threshold;
  bool Segmentation, using_vector;
  sensor_model sen_mode;

  bool Map_direct(Image IM);

  bool Map_with_vector(Image IM);


public:

  Mapping();

  Mapping(const std::string& path_DEM, bool use_pixelvector = false, bool Image_segmentation = false,
          double threshold = 200);

  Pixel_Test Pixel_Mapping(Pixel_Data PD, int noDATA, Image IM);

  double IMask(cv::Mat UndistortedImage, std::vector<PixelImage> Corners);

  bool Map(Image IM);

  vector<cv::Mat> get_IMapped();

  void Save_Show_FireM(string path_result);

  void DEM_infos();

  void set_threshold(double th);

  double get_threshold() const;

  void set_sensor_model(sensor_model sensor_mod);

  Point3D Raytracer(PixelImage Pix, Image I, Raster_Tile Rs);

  Corner_Test get_Imagecorners(Image IM, Raster_Tile RS);

  virtual ~Mapping();


};


#endif // MAPPING_H
