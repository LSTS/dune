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

#include "ElevationRaster.hpp"


ElevationRaster::ElevationRaster(std::string path)
{
  GDALAllRegister();

  /* Once the drivers are registered, the application should call the free standing GDALOpen() function to open a
   * dataset, passing the name of the dataset and the access desired (GA_ReadOnly or GA_Update).*/
  GDALDataset* gDataSet = static_cast<GDALDataset*>(GDALOpen(path.c_str(), GA_ReadOnly));

  //check if data is present
  if (!gDataSet)
  {
    throw std::invalid_argument("Unable to open " + path);
  }

  nCols = gDataSet->GetRasterXSize();
  nRows = gDataSet->GetRasterYSize();
  projectionref = std::string(gDataSet->GetProjectionRef());

  // Get geotransform
  if (gDataSet->GetGeoTransform(gTransform) == CE_None)
  {
    //position of the top left x
    originX = gTransform[0];
    //position of top left y
    originY = gTransform[3];
    //the pixel width //west-east pixel resolution
    pWidth = gTransform[1];
    //the pixel height//north-south pixel resolution (negative value)
    pHeight = gTransform[5];
  } else
  {
    GDALClose(gDataSet);
    throw std::runtime_error("DEM error : no transform can be fetched");
  }

  // Read first band data
  GDALRasterBand* poBand;
  poBand = gDataSet->GetRasterBand(1);
  no_data = poBand->GetNoDataValue();
  double* Buffer;
  int nXSize = poBand->GetXSize();
  //buffer to read row:creates a free space in the memory with the size we order
  //read row data and store in vector
  for (int i = 0; i < nRows; i++)
  {
    Buffer = (double*) CPLMalloc(sizeof(double) * nXSize);

    // read a row
    if (poBand->RasterIO(GF_Read, 0, i, nXSize, 1, Buffer, nXSize, 1, GDT_Float64, 0, 0) == CPLErr::CE_None)
    {
      for (int j = 0; j < nCols; ++j)
      {
        min_elevation = std::min(min_elevation, Buffer[j]);
        max_elevation = std::max(max_elevation, Buffer[j]);
        RasterData.push_back(Buffer[j]);
      }
    }
    CPLFree(Buffer);
  }
  GDALClose(gDataSet);
}

Point2D ElevationRaster::get_world_coords(float col, float row) const
{
  Point2D point{0.0, 0.0};

  point.x = originX + col * gTransform[1];//+ row*gTransform[2];
  point.y = originY /* + col*gTransform[4]*/ + row * gTransform[5];

  return point;
}

Pixel ElevationRaster::get_pixel(double x, double y) const
{
/* X = originX + col*geoTransform[1] + row*geoTransform[2];
   Y = originY + col*geoTransform[4] + row*geoTransform[5];

   we consider that we won't have any rotation, so the equations become :
   X = originX + col*geoTransform[1] ;
   Y = originY + row*geoTransform[5];
*/

  Pixel pix{0, 0};
  pix.col = (uint64_t) ((x - originX) / gTransform[1]);
  pix.row = (uint64_t) ((y - originY) / gTransform[5]);

  return pix;
}

double ElevationRaster::get_pixel_width() const
{
  return pWidth;
}

double ElevationRaster::get_max_east() const
{
  return originX + nCols * gTransform[1];
}

double ElevationRaster::get_max_west() const
{
  return originX;
}

double ElevationRaster::get_max_north() const
{
  return originY;
}

double ElevationRaster::get_max_south() const
{
  return originY + nRows * gTransform[5];
}

double ElevationRaster::get_noData() const
{
  return no_data;
}

double ElevationRaster::get_min_elevation() const
{
  return 0;
}

double ElevationRaster::get_max_elevation() const
{
  return 0;
}

std::string ElevationRaster::get_projection_ref() const
{
  return projectionref;
}

double ElevationRaster::value_at(Pixel pixel) const
{
  return value_at(pixel.col, pixel.row);
}

double ElevationRaster::value_at(uint64_t col, uint64_t row) const
{
/* RasterData=[ (# # # # ... # # # nCols values)first row /  (# # # # ... # # # nCols values )
 * second row / ..............(# # # # ... # # # nCols values)last row which is the row number nRows]
 * so to get to the row number y we multiply it with number of cols, and then we add the position of the column
 * x we need to be exactly at the position (x,y) of the matrix
*/
  uint64_t cpt = 0;
  cpt = nCols * row + col;
  return RasterData.at(cpt);
}

void ElevationRaster::write_to_file(const cv::Mat& FP, std::string gdal_result_path) const
{
  GDALDriver* poDriver;
  std::string pszFormat = "GTiff";
  poDriver = GetGDALDriverManager()->GetDriverByName(pszFormat.c_str());

  GDALDataset* poDstDS;
  char** papszOptions = NULL;
  poDstDS = poDriver->Create(gdal_result_path.c_str(), nCols, nRows, 1, GDT_Float64, papszOptions);

  double gt[6] = {gTransform[0], gTransform[1], gTransform[2], gTransform[3], gTransform[4], gTransform[5]};
  poDstDS->SetGeoTransform(gt);
  poDstDS->SetProjection(projectionref.c_str());

  GDALRasterBand* pBand;
  pBand = poDstDS->GetRasterBand(1);
  //poDstDS->GetRasterBand(1)->SetNoDataValue(0); // with this option only the perimeter of the fire is shown

  double* Buffer;
  Buffer = (double*) CPLMalloc(sizeof(double) * nCols);

  for (int i = 0; i < nRows; i++)
  {
    for (int j = 0; j < nCols; ++j)
    {
      Buffer[j] = value_at(i, j);
    }

    pBand->RasterIO(GF_Write, 0, i, nCols, 1, Buffer, nCols, 1, GDT_Float64, 0, 0);
  }

  GDALClose(poDstDS);
  CPLFree(Buffer);
}


