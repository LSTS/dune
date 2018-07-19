#include "Mapping.h"

Mapping::Mapping()
{
  Carte = Raster_Tile::get_allMaps("DEM.txt");//We have in return a vector with Rasters read and zith all their params
  vector<Raster_ALL> Liste;

  for (int j = 0; j < (int) Carte.size(); j++)
  {///Carte est une liste des RasterTile ,chaque raster Tile est Un DEM

    Carte[j].ListePoints_Data();
    //here we get a vector of the structure Ratser all that holds all the info about a pixel in the DEM  the position of it s 			corners and its col and row.
    //in this vector we gather the vectors that represent a DEM ,so every column of this vector is a vecotor full of the points of 			a DEM
    Liste.push_back(Carte[j].get_ListePoints());

  };
  cout << "nbr raster : " << (int) Liste.size() << endl;
};


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

  for (int j = 0; j < 4; j++)
  {

    PointsImage[0][j] = cv::Point(Corners[j].col, Corners[j].row);
    //we take this values to precise the area where the equivalent pixels in the IMage exist,this way we won t be in need to run the whole mask looking for them.
    maxcol = max(Corners[j].col, maxcol);
    maxrow = max(Corners[j].row, maxrow);
    mincol = min(Corners[j].col, mincol);
    minrow = min(Corners[j].row, minrow);
  }

  const cv::Point* ppt[1] = {PointsImage[0]};
  int npt[] = {4};

  cv::fillPoly(mask, ppt, npt, 1, cv::Scalar(255));

  int cpt = 0;
  double somme = 0;

  for (int i = minrow; i <= maxrow; i++)
  {
    for (int j = mincol; j <= maxcol; j++)
    {

      if (mask.at<uchar>(i, j) == 255)
      {

        somme = (UndistortedImage.at<uchar>(i, j)) + somme;
        cpt = cpt + 1;
      };
    };
  };

  return somme / cpt;

};


///////////////////////////////////////////////////////////////////////////////////////


Pixel_Test Mapping::Pixel_Mapping(Pixel_Data PD, int noDATA, Image IM)
{

  vector<PixelImage> Corners(
    4);//the 4 corners in the image that are related to the 4 coners of the pixel in the world

  Pixel_Test pt;
  pt.Test = false;
  pt.Value = 0;

  if ((PD.z_upleft != noDATA) && (PD.z_downleft != noDATA) && (PD.z_upright != noDATA) &&
      (PD.z_downright != noDATA))
  {//we check if any of the corners has no height in the dem


    Corners[0] = (IM.get_PixelImage(PD.x_upleft, PD.y_upleft, PD.z_upleft));
    Corners[1] = (IM.get_PixelImage(PD.x_downleft, PD.y_downleft, PD.z_downleft));
    Corners[2] = (IM.get_PixelImage(PD.x_upright, PD.y_upright, PD.z_upright));
    Corners[3] = (IM.get_PixelImage(PD.x_downright, PD.y_downright, PD.z_downright));

    //if the 4 corners are inside the IMage .
    if ((IM.Test_Image(Corners[0])) && (IM.Test_Image(Corners[1])) && (IM.Test_Image(Corners[2])) &&
        (IM.Test_Image(Corners[3])))
    {
      cv::Mat IUndistort = IM.get_IMatrix() /*IM.get_UndistortedImage()*/;

      pt.Value = IMask(IUndistort, Corners);
      pt.Test = true;

    }

  }

  return pt;
};


//////////////////////////////////////////////////////////////////////////////////////
/*


This function is the same as the function Map() ,but it doesn't use the ray tracing ,
it uses an approximation of the region of interst knowing the position of the camera using the function get_corner



void Mapping::Map(){

        int cpt=0;
       vector < Raster_ALL > Liste;


        for(int j =0 ; j < (int)Carte.size() ;j++){///Carte est une liste des RasterTile ,chaque raster Tile est Un DEM

               Carte[j].ListePoints_Data();

               Liste.push_back(Carte[j].get_ListePoints());//Liste  des Rasterall oui il ya le vecteur de pixel data de tout les pixel du DEM et son nmbr de cols et de rows.

        };
        cout<<"nbr raster : "<<(int)Liste.size()<<endl;


        for(int l =0 ; l < (int)Liste.size() ;l++){

                //Raster_ALL = Liste[l];

                cv::Mat fMap=cv::Mat::zeros(Liste[l].nrows-1,Liste[l].ncols-1,CV_8UC1);
                cv::Mat Mtest=cv::Mat::zeros(Liste[l].nrows-1,Liste[l].ncols-1,CV_8UC1);

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

                            for(int r = pxr.row_up; r <= (int)pxr.row_down ;r++){// On parcoure tout les pixels du Raster

                                    linestart = ( (Liste[l].ncols-1)*r  ) + pxr.col_left ;
                                    lineend =  ( (Liste[l].ncols-1)*r  ) +   pxr.col_right ;
                                   // for(int t =pxr.col_left; t <  (int)pxr.col_right;t++){

                                                       //  Mtest.at<uchar>(r,t)= 255;

                                               // };

                                    for(int c =linestart; c <= lineend ;c++){// On parcoure tout les pixels du Raster

                                                Pixel_Test px = Pixel_Mapping((Liste[l].ListeP)[c],Liste[l].noData,IM);

                                                if (px.Test){ //Si on a trouve une image qui correspond a ce ce pixel

                                                        fMap.at<uchar>((Liste[l].ListeP)[c].row,(Liste[l].ListeP)[c].col)= px.Value;
                                                        cpt=cpt+1;

                                                };


                                    cout<<c<<endl;

                                    };
                            };

             };
             cout<<"nbr de pts:"<<cpt<<endl;
             Images_Mapped.push_back(fMap);///chaque Matrice est de la taille d un dem  avec des images mappe`s dedans
             //imwrite("Mtest.jpg",Mtest);
     };
};
*/

///////////////////////////////////////////

Point3D Mapping::Raytracer(PixelImage Pix, Image I, Raster_Tile Rs)
{

  double right_Z;
  double test_Z = Rs.get_maxheight();
  Point3D Pt;

  while (test_Z >= Rs.get_minheight())
  {

    Pt = I.get_RayPosition(Pix.col, Pix.row, test_Z);

    if (Rs.Test_point(Pt.x, Pt.y))
    {

      right_Z = Rs.get_elevation(Pt.x, Pt.y);

      if (right_Z >= test_Z)
      {

        Pt.z = right_Z;
        return Pt;

      };
    };

    test_Z = test_Z - 0.5;

  };

  return Pt;

};


/////////////////////////////////////////////////////////////////////////////////////////

///This function is used in the raytracing ,it takes the 4 corners of the Image and raytraces them, it runs some tests to see if the IMage is in the DEM (Raster Tile)
///and then gives back the borders of the image in the DEM .


Corner_Test Mapping::get_Imagecorners(Image IM, Raster_Tile RS)
{

  Corner_Test CT;
  CT.Test = TRUE;

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
      (y_down > RS.get_max_north()))
  {

    /// The image is not in the raster
    CT.Test = FALSE;
    return CT;

  };

  ///if a corner of the the image is out of the raster

  if (x_left < RS.get_max_west())
  { x_left = RS.get_max_west(); }

  if (x_right > RS.get_max_east())
  { x_right = RS.get_max_east(); }

  if (y_up > RS.get_max_north())
  { y_up = RS.get_max_north(); }

  if (y_down < RS.get_max_south())
  { y_down = RS.get_max_south(); }


  /// Since the corners of the picture in world exist in the DEM we don t have to run a test to see if they do .
  CT.PR = RS.get_Rastercorners(x_left, x_right, y_up, y_down);

  return CT;


};


//////////////////////////////////////////////////////////////////////////////////////
/*
void Mapping::Map(){

        int cpt=0;
       vector < Raster_ALL > Liste;


        for(int j =0 ; j < (int)Carte.size() ;j++){///Carte est une liste des RasterTile ,chaque raster Tile est Un DEM

               Carte[j].ListePoints_Data();
               //here we get a vector of the structure Ratser all that holds all the info about a pixel in the DEM  the position of it s corners and its col and row.
               //in this vector we gather the vectors that represent a DEM ,so every column of this vector is a vecotor full of the points of a DEM
               Liste.push_back(Carte[j].get_ListePoints());

        };
        cout<<"nbr raster : "<<(int)Liste.size()<<endl;


        for(int l =0 ; l < (int)Liste.size() ;l++){ //LISTE DES RASTER

                //Raster_ALL = Liste[l];

                cv::Mat fMap=cv::Mat::zeros(Liste[l].nrows-1,Liste[l].ncols-1,CV_8UC1);
                //cv::Mat Mtest=cv::Mat::zeros(Liste[l].nrows-1,Liste[l].ncols-1,CV_8UC1);

                for(size_t i = 0; i < Images_to_Map.size(); i++){

                            Image IM =Images_to_Map[i] ;
                            Corner_Test Cot ;

                            Cot=get_Imagecorners(IM,Carte[0]);

                            if (Cot.Test){


                                            int linestart=0;
                                            int lineend = 0;

                                            for(int r = Cot.PR.row_up; r < (int)Cot.PR.row_down-1 ;r++){// On parcoure tout les pixels of the ROI

                                                    linestart = ( (Liste[l].ncols-1)*r  ) + Cot.PR.col_left ;
                                                    lineend =  ( (Liste[l].ncols-1)*r  ) +  Cot.PR.col_right-1 ;

                                                     //for(int t =Cot.PR.col_left; t <  (int)Cot.PR.col_right ;t++){

                                                        // Mtest.at<uchar>(r,t)= 255;

                                                     //};

                                                    for(int c =linestart; c <= lineend ;c++){// On parcoure tout les pixels du Raster


                                                                Pixel_Test px = Pixel_Mapping((Liste[l].ListeP)[c],Liste[l].noData,IM);

                                                                if (px.Test){ //Si on a trouve une image qui correspond a ce ce pixel

                                                                        fMap.at<uchar>((Liste[l].ListeP)[c].row,(Liste[l].ListeP)[c].col)= px.Value;

                                                                        cpt=cpt+1;
                                                                };
                                                     //cout<<c<<endl;

                                                    };
                                            };
                            };

             };
             cout<<"nbr de pts:"<<cpt<<endl;
             Images_Mapped.push_back(fMap);///chaque Matrice est de la taille d un dem  avec des images mappe`s dedans
             //imwrite("Mtest.jpg",Mtest);
     };
};
*/


////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////


/*
THis function  takes a picture and and looks up in the dem is it s inside then maps it in it,so  for every picture it looks in the dems.
In the other side ,the other version of this function runs for every dem all the pictures to see if they match
*/


void Mapping::Map(Image IM)
{

  int cpt = 0;
  for (int l = 0; l < (int) Carte.size(); l++)
  {

    Corner_Test Cot;

    vector<Raster_ALL> Liste;
    Cot = get_Imagecorners(IM, Carte[l]);

    if (Cot.Test)
    {

      int linestart = 0;
      int lineend = 0;

      for (int r = Cot.PR.row_up; r < (int) Cot.PR.row_down - 1; r++)
      {// On parcoure tous les pixels of the ROI

        linestart = ((Liste[l].ncols - 1) * r) + Cot.PR.col_left;
        lineend = ((Liste[l].ncols - 1) * r) + Cot.PR.col_right - 1;


        for (int c = linestart; c <= lineend; c++)
        {// On parcoure tous les pixels du Raster


          Pixel_Test px = Pixel_Mapping((Liste[l].ListeP)[c], Liste[l].noData, IM);

          if (px.Test)
          { //Si on a trouve une image qui correspond a ce ce pixel

            Carte[l].Raster_Tile::set_fireMap((Liste[l].ListeP)[c].row, (Liste[l].ListeP)[c].col, px.Value);

            cpt = cpt + 1;
          };
          cout << c << endl;

        };
      };
    };

  };


};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vector<cv::Mat> Mapping::get_IMapped()
{

  for (int j = 0; j < (int) Carte.size(); j++)
  {

    Images_Mapped.push_back(
      Carte[j].get_fireMap());///chaque Matrice est de la taille d un dem  avec des images mappe`s dedans
    //imwrite("Mtest.jpg",Mtest);
  };


  return Images_Mapped;

};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

































Mapping::~Mapping()
{
  //dtor
}
