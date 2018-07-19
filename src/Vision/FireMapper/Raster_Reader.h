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
