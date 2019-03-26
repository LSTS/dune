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

#ifndef RASTER_TILE_H
#define RASTER_TILE_H

#include <cmath>
#include <fstream>
#include <limits>

#include <opencv2/opencv.hpp>

#include "ElevationRaster.hpp"
#include "SensorModel.hpp"

struct Pixel_Data
{
  double x_upleft;
  double y_upleft;
  double z_upleft;

  double x_upright;
  double y_upright;
  double z_upright;

  double x_downleft;
  double y_downleft;
  double z_downleft;

  double x_downright;
  double y_downright;
  double z_downright;

  int col;
  int row;
};


struct Pixel_Range
{
  uint64_t col_left;
  uint64_t col_right;

  uint64_t row_up;
  uint64_t row_down;

  Pixel_Range()
  {
    // This is an invalid range
    col_left = std::numeric_limits<uint64_t>::max();
    col_right = 0;
    row_up = std::numeric_limits<uint64_t>::max();
    row_down = 0;
  }
};

struct Raster_ALL
{
  int ncols;
  int nrows;
  int noData;
  std::vector<Pixel_Data> ListeP;
};


class FireRaster
{
private:
  ElevationRaster* elevation_raster;
  std::unique_ptr<AbstractSensorModel> s_model;
  std::vector<Pixel_Data> Liste_Points;
  cv::Mat firemap_bin;
  cv::Mat firemap_bayes;
  cv::Mat occupancy_map;
  cv::Mat firemap_time;
  bool firemap_modified;
  // Area of the raster where fire has been mapped into
  Pixel_Range mapped_area;
  double no_data;

public:
  explicit FireRaster(ElevationRaster* elevation);

  bool test_within_bounds(double x, double y) const;

  double get_elevation_at(double x, double y) const;

  double get_max_elevation() const;

  double get_min_elevation() const;

  double get_max_east() const;

  double get_max_west() const;

  double get_max_north() const;

  double get_max_south() const;

  double get_pixel_width() const;

  double get_no_data() const;

  void set_firemap_cell(uint64_t row, uint64_t col, uchar value, bool use_occupancygrid);

  void set_firemap_cell(uint64_t row, uint64_t col, double time);

  void set_sensor_model(std::unique_ptr<AbstractSensorModel>&& sen_mod);

  cv::Mat get_firemap_bin() const;

  cv::Mat get_firemap_bayes() const;

  cv::Mat get_firemap_time() const;

  bool is_modified() const;

  void print_dem_info() const;

  Raster_ALL get_ListePoints() const;

  Pixel_Range get_corners(double x,
                          double y) const;///Calculates four corners of the pixel that will be used to compute with in the raster, given the position of the camera centre.
  Pixel_Range get_pixelrage_of_coordinates(double x_left, double x_right, double y_up,
                                           double y_down) const;///Gets the equivalent pixel position for the coordinates of the corners .

  Pixel_Data All_data(size_t r, size_t c) const;

  void Put_firemap_inGdal(string gdal_result_path) const;

};

#endif // RASTER_TILE_H
