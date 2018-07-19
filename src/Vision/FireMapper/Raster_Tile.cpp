#include "Raster_Tile.h"


Raster_Tile::Raster_Tile(string path)
{

  Map = new Raster_Reader(path);
  Map->geoTransform();
  Map->Mat_height();
  fireMap = cv::Mat::zeros(Map->nRows - 1, Map->nCols - 1, CV_8UC1);


  cout << "This map's range is : \n \t West" << Map->get_max_west() << "  \t  East " << Map->get_max_east() << endl;

  printf(" \n \t North %.6f  South %.6f ", Map->get_max_north(), Map->get_max_south());

  cout << "\n no data value :" << Map->get_noData() << endl;


};

void Raster_Tile::set_fireMap(int row, int col, uchar value)
{

  fireMap.cv::Mat::at<uchar>(row, col) = (uchar) value;

};

cv::Mat Raster_Tile::get_fireMap()
{

  return fireMap;

}


double Raster_Tile::get_max_west()
{

  return Map->get_max_west();

};

double Raster_Tile::get_max_east()
{

  return Map->get_max_east();

};

double Raster_Tile::get_max_north()
{

  return Map->get_max_north();

};

double Raster_Tile::get_max_south()
{

  return Map->get_max_south();

};

bool
Raster_Tile::Test_point(size_t x, size_t y)
{//checking if the position demanded exists in the map we have as an entry

  bool testing = false;

  if (x >= Map->get_max_west() && x < Map->get_max_east())
  {

    if (y > Map->get_max_south() && y <= Map->get_max_north())
    {

      //cout<<"Position Valide"<<endl;
      testing = true;
    };
  };

  return testing;

};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double Raster_Tile::get_elevation(size_t x, size_t y)
{


  Pixel elevation;
  double height;

  elevation = Map->get_pixel(x, y);
  //cout<<"Pixel valid"<<"col"<< elevation.col<<"\t row"<<elevation.row<<endl;

  height = Map->get_height(elevation.col, elevation.row);

  return height;


};

////////////////////////////////////////////////////
double Raster_Tile::get_maxheight()
{

  return Map->maxheight;
};

double Raster_Tile::get_minheight()
{

  return Map->minheight;

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//THis function just gives back the equivalent pixels for the 4 corners given in wolrd coordinates
Pixel_Range Raster_Tile::get_Rastercorners(double x_left, double x_right, double y_up, double y_down)
{

  Pixel_Range PR;

  Pixel pex = Map->get_pixel(x_left, y_up);
  PR.col_left = pex.col;
  PR.row_up = pex.row;

  pex = Map->get_pixel(x_right, y_down);

  PR.col_right = pex.col;
  PR.row_down = pex.row;

  return PR;


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//THis function is used with the versio of the function projection that doesn t use  raytracing,
//it uses the position of the camera once the picture is taken to approximate the ROI
Pixel_Range Raster_Tile::get_corners(double x, double y)
{


  Pixel_Range pr;
  int ncol = Map->nCols -
             1;//Taking the centre of every pixel in the raster decreases the size of our matrix by one column and row.
  int nrow = Map->nRows - 1;
  int f = 3;//it s the factor that defines how much away we ll be from the position of th image


  Pixel px = Map->get_pixel(x, y);

  if ((px.col - ncol / f) < 0)
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



void Raster_Tile::ListePoints_Data()
{

  Pixel_Data pt;


  for (int r = 0; r < Map->nRows - 1; r++)
  {

    for (int c = 0; c < Map->nCols - 1; c++)
    {

      /*      For each pixel the position in  the world we have with the geotrnsform is the position of the upper left corner ,
      so to get the position in the world of each corner of the pixel ,we take the upper corner of of the neighbour pixels.


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
/*
                        Point2D pt_upleft = Map->get_World_coord( c,r );
                        Point2D pt_upright = Map->get_World_coord( c+1,r);
                        Point2D pt_downleft = Map->get_World_coord( c,r+1 );
                        Point2D pt_downright = Map->get_World_coord( c+1,r+1);
                        pt.x_upleft = pt_upleft.x;
                        pt.y_upleft= pt_upleft.y;

                        pt. x_upright= pt_upright.x;
                        pt. y_upright= pt_upright.y;

                        pt.x_downleft= pt_downleft.x;
                        pt.y_downleft= pt_downleft.y;

                        pt.x_downright= pt_downright.x;
                        pt.y_downright= pt_downright.y;


                        pt.z = Map->get_height(c,r) ;
                       */
      Point2D pt_upleft = Map->get_World_coord(c + 1 / 2, r + 1 / 2);
      Point2D pt_upright = Map->get_World_coord(c + 1 + 1 / 2, r + 1 / 2);
      Point2D pt_downleft = Map->get_World_coord(c + 1 / 2, r + 1 + 1 / 2);
      Point2D pt_downright = Map->get_World_coord(c + 1 + 1 / 2, r + 1 + 1 / 2);

      pt.x_upleft = pt_upleft.x;
      pt.y_upleft = pt_upleft.y;
      pt.z_upleft = Map->get_height(c, r);


      pt.x_upright = pt_upright.x;
      pt.y_upright = pt_upright.y;
      pt.z_upright = Map->get_height(c + 1, r);


      pt.x_downleft = pt_downleft.x;
      pt.y_downleft = pt_downleft.y;
      pt.z_downleft = Map->get_height(c, r + 1);

      pt.x_downright = pt_downright.x;
      pt.y_downright = pt_downright.y;
      pt.z_downright = Map->get_height(c + 1, r + 1);


      pt.col = c;
      pt.row = r;

      Liste_Points.push_back(pt);
    };
  };


};


Raster_ALL Raster_Tile::get_ListePoints()
{

  Raster_ALL all;
  all.ncols = Map->nCols;
  all.nrows = Map->nRows;
  all.noData = Map->get_noData();
  all.ListeP = Liste_Points;


  return all;

}





/*

Raster_Tile::~Raster_Tile()
{//dtor

 };
*/
