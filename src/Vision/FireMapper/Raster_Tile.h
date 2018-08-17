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


#include <fstream>
#include <opencv2/opencv.hpp>
#include <Vision/FireMapper/Raster_Reader.h>
#include <cmath>

using namespace std;

/*
struct Pixel_Data {

    double x_upleft;
    double y_upleft;

    double x_upright;
    double y_upright;

    double x_downleft;
    double y_downleft;

    double x_downright;
    double y_downright;

    double z;

    int col;
    int row;
};*/

struct Pixel_Data {

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



struct Pixel_Range {

    size_t col_left;
    size_t col_right;

    size_t row_up;
    size_t row_down;

};

struct Raster_ALL {
    int ncols;
    int nrows;
    int noData;
    vector<Pixel_Data> ListeP;


};



class Raster_Tile
{

private:

Raster_Reader *Map;
vector<Pixel_Data> Liste_Points;
cv::Mat fireMap;
bool FireMap_modified;



public:


	double no_data;
	//Raster_Tile() = default;

	Raster_Tile(string path);

	bool Test_point(size_t x,size_t y);
	double get_elevation(size_t x,size_t y);

	double get_maxheight();
	double get_minheight();
	double get_max_east();
	double get_max_west();
	double get_max_north();
	double get_max_south();

	void  set_fireMap(int row,int col,uchar value);
	cv::Mat  get_fireMap();
	bool  Test_fireMap_Modified();
	void get_DEM_info();


	void ListePoints_Data();
	Raster_ALL  get_ListePoints();

	Pixel_Range get_corners(double x,double y);///Calculates four corners of the pixel that will be used to compute with in the raster, given the position of the camera centre.
	Pixel_Range get_Rastercorners(double x_left,double x_right,double y_up, double y_down);///Gets the equivalent pixel position for the coordinates of the corners .

	Pixel_Data All_data(int r,int c);
	void Put_firemap_inGdal(string gdal_result_path );




	static vector<Raster_Tile> get_allMaps(string folder){

		    vector<Raster_Tile> Carte;

		    ifstream fichier( folder.c_str(), ios::in);  // we open the file containing

		    if(fichier)  // si l'ouverture a fonctionné
		    {
			            string path;
			            while(getline(fichier, path))  // tant que l'on peut mettre la ligne dans "contenu"
			            {
			                    Raster_Tile RAST =Raster_Tile( path);
			                    Carte.push_back(RAST);
			            };
			            fichier.close();
		    }
		    else{
			cerr << "Impossible d'ouvrir le fichier des DEM !" << endl;
		    };

		    return Carte ;

	};

	//vector<Raster_Tile*> get_allMaps(string folder);
	//virtual ~Raster_Tile();

};




#endif // RASTER_TILE_H
