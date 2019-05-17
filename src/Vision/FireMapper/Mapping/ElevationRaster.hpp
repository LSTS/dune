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

#ifndef RASTER_READER_H
#define RASTER_READER_H


#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <memory>
#include <opencv2/opencv.hpp>

#include <gdal/gdal_priv.h>
#include <gdal/cpl_conv.h> // for CPLMalloc()

struct Point2D
{
  double x;
  double y;
};

struct Pixel
{
  uint64_t col;
  uint64_t row;
};


class ElevationRaster
{
private:
  GDALDataset* gDataSet;
  int nBands;
  double gTransform[6];
  double originX, originY, pWidth, pHeight;
  vector<double> RasterData;


public:

  int nCols, nRows;
  double maxheight;
  double minheight;

  explicit ElevationRaster(std::string path);

  Point2D get_world_coords(float col, float row) const;

  Pixel get_pixel(double X, double Y) const;

  double get_pixel_width() const;

  double get_max_east() const;

  double get_max_west() const;

  double get_max_north() const;

  double get_max_south() const;

  double get_noData() const;

  double get_min_elevation() const;

  double get_max_elevation() const;

  std::string get_projection_ref() const;

  double value_at(Pixel pixel) const;

  double value_at(uint64_t col, uint64_t row) const;

  void write_to_file(const cv::Mat& FP, std::string gdal_result_path)const;

private:
  double gTransform[6];
  double originX, originY, pWidth, pHeight;
  std::vector<double> RasterData;
  std::string projectionref;
  double no_data;
  double max_elevation = std::numeric_limits<double>::min();
  double min_elevation = std::numeric_limits<double>::max();


};

#endif // RASTER_READER_H
