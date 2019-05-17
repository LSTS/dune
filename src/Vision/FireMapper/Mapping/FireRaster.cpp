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

#include "FireRaster.hpp"


FireRaster::FireRaster(ElevationRaster* elevation)
  : elevation_raster(elevation), s_model(std::unique_ptr<AbstractSensorModel>(new DefaultSensorModel()))
{
  no_data = elevation_raster->get_noData();

  // Firemap in binary form: indicate the presence of fire
  firemap_bin = cv::Mat::zeros(elevation_raster->nRows, elevation_raster->nCols, CV_8UC1);
  // Firemap in ignition time form: Indicate the ignition time
  firemap_time =
    cv::Mat::ones(elevation_raster->nRows, elevation_raster->nCols, CV_64FC1) * std::numeric_limits<double>::infinity();
  firemap_bayes = cv::Mat::zeros(elevation_raster->nRows, elevation_raster->nCols, CV_8UC1);
  occupancy_map = cv::Mat::zeros(elevation_raster->nRows, elevation_raster->nCols, CV_64FC1);
  //this matrix has been created to store the probabilities we had about a pixel because once using
  //the occupancy grid algo to fill the firemap we take in consideration the past acquisition.

  mapped_area = Pixel_Range();

  firemap_modified = false;

  Pixel_Data pt;
  for (int r = 0; r < elevation_raster->nRows - 1; r++)
  {
    for (int c = 0; c < elevation_raster->nCols - 1; c++)
    {
      pt = All_data(r, c);
      Liste_Points.push_back(pt);
    }
  }
}

void FireRaster::set_firemap_cell(uint64_t row, uint64_t col, uchar value, bool use_occupancygrid)
{

  firemap_modified = true;
  firemap_bin.cv::Mat::at<uchar>(row, col) = static_cast<uchar>(value);

  if (use_occupancygrid)
  {

    // this link explains the logic used in here https://www.youtube.com/watch?v=kh35PqEFQxE&t=240s
    double instant_fire_probablity = value / 255.0;
    double logOdd = log(s_model->having_fire(instant_fire_probablity) /
                        s_model->not_having_fire(instant_fire_probablity));
    occupancy_map.cv::Mat::at<double>(row, col) += logOdd;
    double new_fireprobability = (1 - 1 / (exp(occupancy_map.cv::Mat::at<double>(row, col)) + 1));


    if (new_fireprobability < 0)
    {
      firemap_bayes.cv::Mat::at<uchar>(row, col) = (uchar) 255 * 0;
    } else if (new_fireprobability > 1)
    {
      firemap_bayes.cv::Mat::at<uchar>(row, col) = static_cast<uchar>(255 * 1);
    } else
    {
      firemap_bayes.cv::Mat::at<uchar>(row, col) = static_cast<uchar>(255 * new_fireprobability);

    }
  }

  mapped_area.col_left = std::min(col, mapped_area.col_left);
  mapped_area.col_right = std::max(col, mapped_area.col_right);
  mapped_area.row_up = std::min(col, mapped_area.row_up);
  mapped_area.row_down = std::max(col, mapped_area.row_down);
}

void FireRaster::set_firemap_cell(uint64_t row, uint64_t col, double time)
{
  firemap_modified = true;
  firemap_time.cv::Mat::at<double>(row, col) = time;
//  firemap_bin.cv::Mat::at<uchar>(row, col) = 255;

  mapped_area.col_left = std::min(col, mapped_area.col_left);
  mapped_area.col_right = std::max(col, mapped_area.col_right);
  mapped_area.row_up = std::min(col, mapped_area.row_up);
  mapped_area.row_down = std::max(col, mapped_area.row_down);
}

void FireRaster::set_sensor_model(std::unique_ptr<AbstractSensorModel>&& sen_mod)
{
  s_model = std::move(sen_mod);
}

cv::Mat FireRaster::get_firemap_bin() const
{
  return firemap_bin.clone();

}

cv::Mat FireRaster::get_firemap_bayes() const
{
  return firemap_bayes.clone();
}


double FireRaster::get_max_west() const
{
  return elevation_raster->get_max_west();
}

double FireRaster::get_max_east() const
{
  return elevation_raster->get_max_east();
}

double FireRaster::get_max_north() const
{
  return elevation_raster->get_max_north();
}

double FireRaster::get_max_south() const
{
  return elevation_raster->get_max_south();
}

void FireRaster::print_dem_info() const
{
  if (!elevation_raster->get_projection_ref().empty())
  {
    std::string line;
    std::stringstream ss;
    ss.str(elevation_raster->get_projection_ref());
    while (std::getline(ss, line, ','))
    {
      std::cout << line << std::endl;
    }
  }
}

////////////////////////////////////////////////////
void FireRaster::Put_firemap_inGdal(std::string gdal_result_path) const
{
  elevation_raster->write_to_file(firemap_bin, gdal_result_path);
}

//////////////////////////////////////////////////////
bool FireRaster::test_within_bounds(double x, double y) const
{//checking if the position demanded exists in the map we have as an entry
  bool testing = false;

  if (x >= elevation_raster->get_max_west() && x < elevation_raster->get_max_east())
  {

    if (y > elevation_raster->get_max_south() && y <= elevation_raster->get_max_north())
    {

      testing = true;
    }
  }

  return testing;

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double FireRaster::get_elevation_at(double x, double y) const
{
  // x and y are the coordinates of a position in the world coord.
  return elevation_raster->value_at(elevation_raster->get_pixel(x, y));
}

////////////////////////////////////////////////////
double FireRaster::get_max_elevation() const
{
  return elevation_raster->get_max_elevation();
}

double FireRaster::get_min_elevation() const
{
  return elevation_raster->get_min_elevation();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//THis function just gives back the equivalent pixels for the 4 corners given in wolrd coordinates
Pixel_Range FireRaster::get_pixelrange_of_coordinates(double x_left, double x_right, double y_up, double y_down) const
{
  Pixel_Range PR;

  Pixel pex = elevation_raster->get_pixel(x_left, y_up);
  PR.col_left = pex.col;
  PR.row_up = pex.row;

  pex = elevation_raster->get_pixel(x_right, y_down);

  PR.col_right = pex.col;
  PR.row_down = pex.row;

  return PR;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
THis function is used with the versiom of the function Map() that doesn t use  raytracing,
it uses the position of the camera once the picture is taken to approximate the ROI

*/
Pixel_Range FireRaster::get_corners(double x, double y) const
{
  Pixel_Range pr;
  int ncol = elevation_raster->nCols - 1;
  //Taking the centre of every pixel in the raster decreases the size of our matrix by one column and row.
  int nrow = elevation_raster->nRows - 1;
  int f = 3;//it s the factor that defines how much away we ll be from the position of th image

  Pixel px = elevation_raster->get_pixel(x, y);

  if ((int) (px.col - ncol / f) < 0)
  {
    pr.col_left = 0;
    pr.col_right = (int) (px.col + ncol / f);
  } else if ((int) (px.col + ncol / f) > ncol - 1)
  {
    pr.col_left = (int) (px.col - ncol / f);
    pr.col_right = ncol - 1;
  } else
  {
    pr.col_right = (int) (px.col + ncol / f);
    pr.col_left = (int) (px.col - ncol / f);
  }

  if ((int) (px.row - nrow / f) < 0)
  {
    pr.row_up = 0;
    pr.row_down = (int) (px.row + nrow / f);
  } else if ((int) (px.row + nrow / f) > nrow)
  {
    pr.row_up = (int) (px.row - nrow / f);
    pr.row_down = nrow - 1;
  } else
  {
    pr.row_up = (int) (px.row - nrow / f);
    pr.row_down = (int) (px.row + nrow / f);
  }

  return pr;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*      For each pixel the position in  the world we have with the geotrnsform in GDAL is the position of the upper left corner ,
but the height we have is for the centerof the pixel so for the Mapping we will use the centre of 4 pixels to creat a pixel
that we know the height of its corners

                                         -----------------------------
                                        | Pixel Raster||Pixel Raster |
                     pt_upright --------|----->       ||     <-------|--------pt_upright
                                        |             ||             |
                                        |             ||             |
                                        ------------- ----------------
                                        | Pixel Raster||Pixel Raster |
                    pt_downleft --------|----->       ||     <-------|--------downright
                                        |             ||             |
                                        |             ||             |
                                        ------------------------------


*/

Pixel_Data FireRaster::All_data(size_t r, size_t c) const
{
  Pixel_Data pt;

  Point2D pt_upleft = elevation_raster->get_world_coords(c + 1 / 2, r + 1 / 2);
  Point2D pt_upright = elevation_raster->get_world_coords(c + 1 + 1 / 2, r + 1 / 2);
  Point2D pt_downleft = elevation_raster->get_world_coords(c + 1 / 2, r + 1 + 1 / 2);
  Point2D pt_downright = elevation_raster->get_world_coords(c + 1 + 1 / 2, r + 1 + 1 / 2);

  pt.x_upleft = pt_upleft.x;
  pt.y_upleft = pt_upleft.y;
  pt.z_upleft = elevation_raster->value_at(c, r);


  pt.x_upright = pt_upright.x;
  pt.y_upright = pt_upright.y;
  pt.z_upright = elevation_raster->value_at(c + 1, r);

  pt.x_downleft = pt_downleft.x;
  pt.y_downleft = pt_downleft.y;
  pt.z_downleft = elevation_raster->value_at(c, r + 1);

  pt.x_downright = pt_downright.x;
  pt.y_downright = pt_downright.y;
  pt.z_downright = elevation_raster->value_at(c + 1, r + 1);

  pt.col = c;
  pt.row = r;

  return pt;
}

Raster_ALL FireRaster::get_ListePoints() const
{
  Raster_ALL all;
  all.ncols = elevation_raster->nCols;
  all.nrows = elevation_raster->nRows;
  all.noData = static_cast<int>(elevation_raster->get_noData());
  all.ListeP = Liste_Points;

  return all;
}

bool FireRaster::is_modified() const
{
  return firemap_modified;
}

cv::Mat FireRaster::get_firemap_time() const
{
  return firemap_time;
}

double FireRaster::get_pixel_width() const
{
  return elevation_raster->get_pixel_width();
}

double FireRaster::get_no_data() const
{
  return no_data;
}
