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


using namespace std;

#include <gdal/gdal_priv.h>
#include <gdal/cpl_conv.h> // for CPLMalloc()


struct Point2D
{
  double x;
  double y;
};

struct Pixel
{
  size_t col;
  size_t row;
};


class Raster_Reader
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

  //Raster_Reader() = default;
  Raster_Reader(std::string path);

  void geoTransform();

  void Mat_height();

  Point2D get_World_coord(float col, float row);

  Pixel get_pixel(double X, double Y);

  double get_max_east();

  double get_max_west();

  double get_max_north();

  double get_max_south();

  double get_noData();

  double get_height(size_t col, size_t row);


  virtual ~Raster_Reader();


protected:


};

#endif // RASTER_READER_H
