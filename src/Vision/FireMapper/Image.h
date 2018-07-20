#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct PixelImage
{
  int col;
  int row;
};

struct Point3D
{
  double x;
  double y;
  double z;
};

class Image
{
private:
  string Nom_Image;
  cv::Mat IMatrix;
  cv::Mat undistortedImg;

  cv::Mat Translation;/*InMeters*/
  cv::Mat Rotation;
  cv::Mat IntrinsicPixelMatrix;
  cv::Mat IntrinsicMatrix;
  vector<double> Radial_distortion;
  vector<double> Tangential_distortion;

  cv::Mat CameraMatrix;
  cv::Mat DistMatrix;

public:
  int ncols;
  int nrows;

  Image(string InputImage, cv::Mat& Imat, cv::Mat Trans, cv::Mat Rot, cv::Mat Intr, vector<double> R_Dis,
        vector<double> T_Dis);

  Image(cv::Mat& Imat, cv::Mat Trans, cv::Mat Rot, cv::Mat Intr);

  string get_name();

  cv::Mat get_rot();

  cv::Mat get_trans();

  cv::Mat get_IntrinsicMatrix();

  cv::Mat get_CameraMatrix();

  cv::Mat
  get_UndistortedImage();//function to undistort the distorted images due to camera Radial and Tangential distortion
  cv::Mat get_IMatrix();


  PixelImage get_PixelImage(double x, double y, double z);

  bool Test_Image(PixelImage pxi);

  Point3D get_RayPosition(int u, int v, double Z);

  //virtual ~Image();
	
	
  static cv::Mat get_Image( int i)
      {

         std::string path0 = "/home/welarfao/images/";


 	 std::stringstream ss;

         ss << "IMG_0" << 547+i << ".JPG";

	 std::string Name=  ss.str();

	 std::string path = std::string(    path0.append(  std::string(Name) )     );

	 cout<<path<<endl;
         cv::Mat A = cv::imread(path,CV_LOAD_IMAGE_GRAYSCALE);


         return A;
      }



};


#endif // IMAGE_H
