#include <iostream>
#include <unistd.h>
#include <vector>
#include <string>
#include <map>

#include <opencv2/opencv.hpp>

#include "csvstream.h"

#include "../ElevationRaster.hpp"
#include "../FireRaster.hpp"
#include "../Image.hpp"
#include "../Mapping.hpp"
#include "../SensorModel.hpp"

struct PositionProjected
{
  double x;
  double y;
};

PositionProjected
transform_coordinates(double lat, double lon, int from_epsg, int to_epsg)
{
  OGRSpatialReference wgs84_gcs;
  OGRSpatialReference pcs;

  wgs84_gcs.importFromEPSG(from_epsg); // RGF93 (EPSG:4171) is in practice equal to WGS84 (EPSG:4326)
  pcs.importFromEPSG(to_epsg);

  auto poCT = OGRCreateCoordinateTransformation(&wgs84_gcs, &pcs);

  if (poCT == nullptr)
  {
    throw std::invalid_argument("");
  } else
  {
    PositionProjected proj_coords;

    auto xx = 180 / M_PI * lon;
    auto yy = 180 / M_PI * lat;

    poCT->Transform(1, &xx, &yy); // Again Transform must succeed

    proj_coords.x = xx;
    proj_coords.y = yy;

    OGRCoordinateTransformation::DestroyCT(poCT);
    return proj_coords;
  }
}

/* Run with:
 ./standalone_mapping \
 -e /home/rbailonr/firers_data_porto/dem/porto_dem.tif \
 -p /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/poses.csv \
 -o /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/map.tif \
 /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/photos/*.jpg

 OR

 ./standalone_mapping \
 -e /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/dem.tif \
 -p /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/poses.csv \
 -o /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/map.tif \
 /home/rbailonr/Documents/FireRS/ir_image_dataset_porto_2019/mapping/photos/*.jpg

*/
int main(int argc, char* argv[])
{
  std::string wait;
//  std::cin >> wait;

  std::string pose_file;
  std::string elevation_file;
  std::string out_folder;
  std::vector<std::string> photos;

  int c;
  while ((c = getopt(argc, argv, ":o:p:e:")) != -1)
  {
    // Option argument
    switch (c)
    {
      case 'e':
      {
        std::cout << "Elevation file: ";
        elevation_file = std::string(optarg);
        std::cout << elevation_file << std::endl;
        break;
      }
      case 'p':
      {
        std::cout << "UAV poses file: ";
        pose_file = std::string(optarg);
        std::cout << pose_file << std::endl;
        break;
      }
      case 'o':
      {
        std::cout << "Output file: ";
        out_folder = std::string(optarg);
        std::cout << out_folder << std::endl;
        break;
      }
      case '?':
      {
        if (optopt == 'o')
          fprintf(stderr, "Option -%c requires an argument.\n", optopt);
        else if (isprint(optopt))
          fprintf(stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf(stderr,
                  "Unknown option character `\\x%x'.\n",
                  optopt);
        return 1;
      }
    }
  }

  for (int index = optind; index < argc; index++)
  {
    std::string f = std::string(argv[index]);
    photos.emplace_back(f);
  }

  //Camera params
  double pixel_width = 17.0e-06; // m per pixel
  //double sensor_width = 4.48e-3; // 7um/pixel * 640 pixel to meters
  //double sensor_height = 3.36e-3; // 7um/pixel * 480 pixel to meters
  double im_width = 640.0;
  double im_height = 480.0;
  // http://answers.opencv.org/question/139166/focal-length-from-calibration-parameters
  // https://ksimek.github.io/2013/08/13/intrinsic/
  double intr[] = {4.7407656455715507e+04*0.05, 0.0, 3.1950000000000000e+02,
                   0.0, 4.7407656455715507e+04*0.05, 2.3950000000000000e+02,
                   0.0, 0.0, 1.0};
  //intiric matrix is in pixel units
  cv::Mat intrinsic = cv::Mat(3, 3, CV_64FC1, &intr);
//  std::vector<double> rdis = std::vector<double>({2.9830057000147639e+02, -2.5804732883380708e+04, 0.0});
//  std::vector<double> tdis = std::vector<double>({0.0, -6.3081985166963577e+01});
  std::vector<double> rdis = std::vector<double>({0.0, 0.0, 0.0});
  std::vector<double> tdis = std::vector<double>({0.0, 0.0});

  // Init mapping
  ElevationRaster elevation = ElevationRaster(elevation_file);
  FireRaster firemap = FireRaster(&elevation);
  Mapping mapper = Mapping(&firemap, 200, false);

  // Read pose files
  csvstream csvin(pose_file);
  std::map<std::string, std::string> row;
  // Each row is a photo tag (assuming same order as the photo path vector)
  auto photo_path_it = photos.begin();
  while (csvin >> row && (photo_path_it != photos.end()))
  {
    std::cout << "T: ";
    std::cout << row["timestamp"] << std::endl;
    std::cout << "Photo: " << (*photo_path_it) << std::endl;

    double timestamp = std::stod(row["timestamp"]);
    double lat = std::stod(row["lat (rad)"]);
    double lon = std::stod(row["lon (rad)"]);
    double height = std::stod(row["height (m)"]);
    double phi = std::stod(row["phi (rad)"]);
    double theta = std::stod(row["theta (rad)"]);
    double psi = std::stod(row["psi (rad)"]);

    cv::Mat image_mat = cv::imread((*photo_path_it), cv::ImreadModes::IMREAD_GRAYSCALE);
    PositionProjected p = transform_coordinates(lat, lon, 4258, 3035);
    double pp[] = {p.x, p.y, height};
    cv::Mat translation = cv::Mat(3, 1, CV_64FC1, &pp);
    cv::Mat world_to_uav = Mapping::rotation_matrix(phi, theta, -psi+M_PI_2);
    cv::Mat uav_to_camera = cv::Mat::zeros(cv::Size(3, 3), CV_64FC1);
    uav_to_camera.at<double>(0, 0) = 1.;
    uav_to_camera.at<double>(1, 1) = -1.;
    uav_to_camera.at<double>(2, 2) = -1.;
    cv::Mat camera_to_world = uav_to_camera * world_to_uav;
    std::cout << camera_to_world << std::endl;

    cv::Mat Rotation = cv::Mat::zeros(cv::Size(3, 3), CV_64FC1);

    // cv::Mat Imat, cv::Mat Trans, cv::Mat Rot, cv::Mat Intr, std::vector<double> R_Dis, std::vector<double> T_Dis
    Image im = Image(image_mat, translation, camera_to_world, intrinsic, rdis, tdis);
//    TestImage::test_camera_matrix(im, 0, 0);
//    TestImage::test_camera_matrix(im, 100, 100);
//    TestImage::test_camera_matrix(im, -100, 100);
//    TestImage::test_camera_matrix(im, -100, -100);
//    TestImage::test_camera_matrix(im, 100, -100);

    bool Image_with_DEM_match = mapper.map(im, timestamp);
    if (Image_with_DEM_match)
    {
      std::cout << "OK" << std::endl;
    } else
    {
      std::cout << "Not OK" << std::endl;
    }
    mapper.save_firemap(out_folder);

    photo_path_it++;

  }

  return 0;
}