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

#include "Mapping.h"

Mapping::Mapping()
{
  Carte = vector<Raster_Tile>();
  Segmentation = false;
  using_vector = false;


}

Mapping::Mapping(const std::string &path_DEM, bool use_pixelvector, bool Image_segmentation, double thd)
{

  Carte = Raster_Tile::get_allMaps(path_DEM);//We have in return a vector with Rasters read and with all their params
  Segmentation = Image_segmentation;
  using_vector = use_pixelvector;
  threshold = thd;




  ///  This part creates a vector of points for each DEM so as to make the Mapping  easy for the Mapping function and so to take less time if the DEM will be used more than once,
  ///  nevertheless it might take a considerable amount of time if the DEMs are very precise but in all cases it will be needed only once

  if (use_pixelvector) {

    for (int j = 0; j < (int) Carte.size(); j++) {///Carte est une liste des RasterTile ,chaque raster Tile est Un DEM

      Carte[j].ListePoints_Data();
      //here we get a vector of the structure Ratser all that holds all the info about a pixel in the DEM  the position of it s corners and its col and row.
      //in this vector we gather the vectors that represent a DEM ,so every column of this vector is a vecotor full of the points of a DEM
      Liste.push_back(Carte[j].get_ListePoints());

    }
  }


}


void Mapping::set_threshold(double thd)
{

  threshold = thd;

}

double Mapping::get_threshold() const
{

  return threshold;

}
void Mapping::set_sensor_model(sensor_model sensor_mod){

  sen_mode = sensor_mod ;

}


double Mapping::IMask(cv::Mat UndistortedImage, vector<PixelImage> Corners)
{


/* *******************************************************

 To draw a filled polygon we use the function fillPoly.

  fillPoly( img,
            ppt,
            npt,
            1,
            Scalar( 255, 255, 255 ),
            lineType );

 We note that:

    The polygon will be drawn on img
    The vertices of the polygon are the set of points in ppt
    The total number of vertices to be drawn are npt
    The number of polygons to be drawn is only 1
    The color of the polygon is defined by Scalar( 255, 255, 255), which is the BGR value for white

https://docs.opencv.org/2.4.13.4/doc/tutorials/core/basic_geometric_drawing/basic_geometric_drawing.html
 ************************************************************************************ */

//create a poly mask with this 2D points to get the instensity values in that mask of original image
  int maxcol = 0;
  int mincol = 99999;
  int maxrow = 0;
  int minrow = 99999;

  cv::Mat mask = cv::Mat::zeros(UndistortedImage.rows, UndistortedImage.cols, CV_8UC1);

  cv::Point PointsImage[1][4];//we used this way of declaring corners  so as it will be easy to use with fillPoly()

  for (int j = 0; j < 4; j++) {

    PointsImage[0][j] = cv::Point(Corners[j].col, Corners[j].row);
    //we take this values to precise the area where the equivalent pixels in the IMage exist,this way we won t be in need to run the whole mask looking for them.
    maxcol = max(Corners[j].col, maxcol);
    maxrow = max(Corners[j].row, maxrow);
    mincol = min(Corners[j].col, mincol);
    minrow = min(Corners[j].row, minrow);
  }

  const cv::Point *ppt[1] = {PointsImage[0]};
  int npt[] = {4};

  cv::fillPoly(mask, ppt, npt, 1, cv::Scalar(255));

  int cpt = 0;
  double somme = 0;

  for (int i = minrow; i < maxrow; i++) {
    for (int j = mincol; j < maxcol; j++) {

      if (mask.at<uchar>(i, j) == 255) {

        somme = (UndistortedImage.at<uchar>(i, j)) + somme;
        cpt = cpt + 1;
      }
    }
  }
  return somme / cpt;

}


///////////////////////////////////////////////////////////////////////////////////////


Pixel_Test Mapping::Pixel_Mapping(Pixel_Data PD, int noDATA, Image IM)
{

  vector<PixelImage> Corners(
          4);//this vector will store the 4 corners in the image that are related to the 4 coners of the pixel in the world

  Pixel_Test pt;
  pt.Test = false;
  pt.Value = 0;

  if ((PD.z_upleft != noDATA) && (PD.z_downleft != noDATA) && (PD.z_upright != noDATA) &&
      (PD.z_downright != noDATA)) {//we check if any of the corners has no height in the dem

    Corners[0] = (IM.get_PixelImage(PD.x_upleft, PD.y_upleft, PD.z_upleft));
    Corners[1] = (IM.get_PixelImage(PD.x_downleft, PD.y_downleft, PD.z_downleft));
    Corners[2] = (IM.get_PixelImage(PD.x_upright, PD.y_upright, PD.z_upright));
    Corners[3] = (IM.get_PixelImage(PD.x_downright, PD.y_downright, PD.z_downright));

    //if the 4 corners are inside the IMage .
    if ((IM.Test_Image(Corners[0])) && (IM.Test_Image(Corners[1])) && (IM.Test_Image(Corners[2])) &&
        (IM.Test_Image(Corners[3]))) {
      pt.Value = IMask(IM.get_UndistortedImage(), Corners);
      pt.Test = true;

    }

  }

  return pt;
}


//////////////////////////////////////////////////////////////////////////////////////
/*
Map : 1

This function is the same as the function Map() ,but it doesn't use the ray tracing ,
it uses an approximation of the region of interst knowing the position of the camera using the function get_corner


void Mapping::Map(){

   for(int l =0 ; l < (int)Liste.size() ;l++){

     // Liste[l] is a liste that contains Raster_ALL which is a structure that gives aal the info we need about a pixel

     for(size_t i = 0; i < Images_to_Map.size(); i++){

        Image IM =Images_to_Map[i] ;
        Point3D Center ;
        Pixel_Range   pxr ;

        int linestart=0;
        int lineend = 0;

        cv::Mat T = IM.get_trans();

        Center.x =T.at<double>(0);
        Center.y =T.at<double>(1);
        Center.z =T.at<double>(2);

        pxr = Carte[l].get_corners(Center.x,Center.y);

        for(int r = pxr.row_up; r <= (int)pxr.row_down ;r++){

                linestart = ( (Liste[l].ncols-1)*r  ) + pxr.col_left ;
                lineend =  ( (Liste[l].ncols-1)*r  ) +   pxr.col_right ;

                for(int c =linestart; c <= lineend ;c++){// On parcoure tout les pixels du Raster

                            Pixel_Test px = Pixel_Mapping((Liste[l].ListeP)[c],Liste[l].noData,IM);

                            if (px.Test){

                                    Carte[l].set_fireMap((Liste[l].ListeP)[c].row,(Liste[l].ListeP)[c].col,px.Value);
                            }
                }
         }
     }

  }
}
*/

///////////////////////////////////////////

Point3D Mapping::Raytracer(PixelImage Pix, Image I, Raster_Tile Rs)
{

  double right_Z = 0;
  double test_Z = Rs.get_maxheight();
  Point3D Pt;

  while (test_Z >= Rs.get_minheight()) {

    Pt = I.get_RayPosition(Pix.col, Pix.row, test_Z);

    if (Rs.Test_point(Pt.x, Pt.y)) {

      right_Z = Rs.get_elevation(Pt.x, Pt.y);

      if (right_Z >= test_Z) {

        Pt.z = right_Z;
        return Pt;

      }
    }

    test_Z = test_Z - 0.5;

  }

  return Pt;

}


/////////////////////////////////////////////////////////////////////////////////////////

///This function is used in the raytracing ,it takes the 4 corners of the Image and raytraces them, it runs some tests to see if the IMage is in the DEM (Raster Tile)
///and then gives back the borders of the image in the DEM .


Corner_Test Mapping::get_Imagecorners(Image IM, Raster_Tile RS)
{

  Corner_Test CT;
  CT.Test = true;

  PixelImage Pix;
  Pix.col = 0;
  Pix.row = 0;
  Point3D upleft = Raytracer(Pix, IM, RS);

  Pix.col = IM.ncols;
  Pix.row = 0;
  Point3D upright = Raytracer(Pix, IM, RS);

  Pix.col = 0;
  Pix.row = IM.nrows;
  Point3D downleft = Raytracer(Pix, IM, RS);

  Pix.col = IM.ncols;
  Pix.row = IM.nrows;
  Point3D downright = Raytracer(Pix, IM, RS);


  int x_left = min(upleft.x, min(upright.x, min(downleft.x, downright.x)));
  int x_right = max(upleft.x, max(upright.x, max(downleft.x, downright.x)));
  int y_down = min(upleft.y, min(upright.y, min(downleft.y, downright.y)));
  int y_up = max(upleft.y, max(upright.y, max(downleft.y, downright.y)));

  if ((x_left > RS.get_max_east()) || (x_right < RS.get_max_west()) || (y_up < RS.get_max_south()) ||
      (y_down > RS.get_max_north())) {

    /// The image is not in the raster
    CT.Test = false;
    return CT;

  }

  ///if a corner of the the image is out of the raster

  if (x_left < RS.get_max_west()) { x_left = RS.get_max_west(); }

  if (x_right > RS.get_max_east()) { x_right = RS.get_max_east(); }

  if (y_up > RS.get_max_north()) { y_up = RS.get_max_north(); }

  if (y_down < RS.get_max_south()) { y_down = RS.get_max_south(); }


  /// Since the corners of the picture in world exist in the DEM we don t have to run a test to see if they do .
  CT.PR = RS.get_Rastercorners(x_left, x_right, y_up, y_down);


  return CT;


}


//////////////////////////////////////////////////////////////////////////////////////


/*

Map : 2

THis function  takes a picture and and looks up in the dem is it s inside then maps it in it.
It uses a list of vectors of points to run the DEMs ,for every Dem it runs its vector that should be already fulled

*/


bool Mapping::Map_with_vector(Image IM)
{
  bool no_DEM_match= true;//turns to false if there s a  DEm that matchs the Image we re Mapping

  for (int l = 0; l < (int) Carte.size(); l++) {

    Corner_Test Cot;

    Cot = get_Imagecorners(IM, Carte[l]);

    if (Cot.Test) {
      no_DEM_match= false;

      if (Segmentation) {
        IM.Segment(threshold);
        Carte[l].set_sensor_model(sen_mode);

      }
      int linestart = 0;
      int lineend = 0;

      for (int r = Cot.PR.row_up; r < (int) Cot.PR.row_down - 1; r++) {// we Run all the pixels of the ROI

        linestart = ((Liste[l].ncols - 1) * r) + Cot.PR.col_left;
        lineend = ((Liste[l].ncols - 1) * r) + Cot.PR.col_right - 1;

        for (int c = linestart; c <= lineend; c++) {// we Run all the  pixels of the Raster

          Pixel_Test px = Pixel_Mapping((Liste[l].ListeP)[c], Liste[l].noData, IM);

          if (px.Test) { //Si on a trouve une image qui correspond a ce ce pixel

            Carte[l].set_fireMap((Liste[l].ListeP)[c].row, (Liste[l].ListeP)[c].col, px.Value,Segmentation);
          }
        }
      }
    }

  }

  if(no_DEM_match){
    return false;

  }
  return true;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Map : 3

This function uses the DEM Raster Directly to get the data it needs about every pixel of the DEM.It can be faster if the DEM are big and need a lot of time and memory to be put then in a vector.

*/
bool Mapping::Map_direct(Image IM)
{
  bool no_DEM_match= true;//turns to false if there s a  DEm that matchs the Image we re Mapping

  for (int l = 0; l < (int) Carte.size(); l++) {// we run all the Dems we have

    Corner_Test Cot;


    Cot = get_Imagecorners(IM, Carte[l]);
    //cout<<"just raytraced"<<endl;
    //cout<<"row_up"<<Cot.PR.row_up<<"row_down"<<Cot.PR.row_down<<"col_left"<<Cot.PR.col_left<<"col_right"<<Cot.PR.col_right<<endl;


    if (Cot.Test) {
      no_DEM_match= false;

      if (Segmentation) {
        IM.Segment(threshold);
        Carte[l].set_sensor_model(sen_mode);

      }


      Pixel_Data pt;

      for (int r = Cot.PR.row_up; r < (int) Cot.PR.row_down - 1; r++) {// we Run all the pixels of the ROI( why the -1:since we took the centre of 4 pixels of the DEM we get to have 1 row and 1 col less)

        for (int c = Cot.PR.col_left; c < (int) Cot.PR.col_right - 1; c++) {// we Run all the  pixels of the Raster

          pt = Carte[l].All_data(r, c);

          Pixel_Test px = Pixel_Mapping(pt, Carte[l].no_data, IM);

          if (px.Test) { //if that pixel matches with the IMage

            Carte[l].set_fireMap(r,c,px.Value,Segmentation);

          }
        }
      }
    }
  }

  if(no_DEM_match){
    return false;

  }
  return true;
}

///////////////////////////////////////////////////////////////

bool Mapping::Map(Image IM)
{

  if (using_vector == true) {

    return  Map_with_vector(IM);
  } else {

    return Map_direct(IM);

  }
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
THis function saves all the fireMaps in a Vector so as they can be easly used
*/

vector<cv::Mat> Mapping::get_IMapped()
{

  for (int j = 0; j < (int) Carte.size(); j++) {

    Images_Mapped.push_back(
            Carte[j].get_fireMap());///Every DEM has a Matrix with its same size that maps in it the images
  }

  return Images_Mapped;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
This function can be used to show the update we had on the fireMap without being in need to check all the fireMaps

*/
void Mapping::Save_Show_FireM(string path_result)
{

  for (int j = 0; j < (int) Carte.size(); j++) {

    if (Carte[j].Test_fireMap_Modified()) {///if the FIREMAP related to this dem is  modified we show  it

      stringstream ss;
      ss << j;
      cv::imwrite(path_result + "Map" + ss.str() + ".JPG", Carte[j].get_fireMap());
      Carte[j].Put_firemap_inGdal(path_result + "Map" + ss.str() + ".tif");

      if(Segmentation){

        cv::imwrite(path_result+ "Mapbayes" + ss.str() + ".jpg",Carte[j].get_fireMapbayes());
        //cout<<Carte[j].get_fireMapbayes()<<endl;
      }
      //cv::imshow(path_result +"Map"+ ss.str() +".jpg",Carte[j].get_fireMap()); needs perimission
    }
  }


}

void Mapping::DEM_infos()
{
  for (int j = 0; j < (int) Carte.size(); j++) {
    stringstream ss;
    ss << j;
    cout << "Map number  "+ ss.str() << endl;
    Carte[j].get_DEM_info();

  }
}


Mapping::~Mapping()
{
  //dtor
}
