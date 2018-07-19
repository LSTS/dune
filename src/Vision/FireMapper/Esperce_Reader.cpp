#include "Esperce_Reader.h"


Esperce_Reader::Esperce_Reader()
{

  path_Image = "/home/welarfao/fire-mapping/new_mapping/images/Black and White/";
  path_Data = "/home/welarfao/fire-mapping/new_mapping/esperce3_metriccal.txt";

};


Esperce_Reader::Esperce_Reader(string path_Data, string path_Image)
{

  path_Data = path_Data;
  path_Image = path_Image;

};

/*camera matrix K [3x3]
radial distortion [3x1]
tangential distortion [2x1]
camera position T [3x1]
camera rotation R [3x3]
camera model m = K [R|-Rt] X
*/


void Esperce_Reader::get_Dataset()
{


  cout << "getting to file" << endl;
  ifstream file(path_Data.c_str(), ios::in);  // we open the file containing

  if (file.is_open())
  {  // si l'ouverture a fonctionné

    cout << "in file" << endl;
    string line;
    string Name;
    cv::Mat Translation = cv::Mat(3, 1, CV_64FC1);/*InMeters*/
    cv::Mat Rotation = cv::Mat(3, 3, CV_64FC1);
    cv::Mat IntrinsicMatrix = cv::Mat(3, 3, CV_64FC1);
    vector<double> Radial_distortion(3);
    vector<double> Tangential_distortion(2);
    //const char delim[1] = " ";

    while (getline(file, line))  // tant que l'on peut mettre la ligne dans "line"
    {

      if (line.substr(0, 3) == "IMG")
      {


        Name = line.substr(0, line.find_first_of(' '));

        string path0 = path_Image;

        std::string path = std::string(path0.append(std::string(Name)));
        //cout<< path<<endl;

        cv::Mat A = cv::imread(path, CV_LOAD_IMAGE_GRAYSCALE);
        if (A.data != NULL)
        {//If the Image exists in the given path

          Translation = cv::Mat(3, 1, CV_64FC1);
          Rotation = cv::Mat(3, 3, CV_64FC1);
          IntrinsicMatrix = cv::Mat(3, 3, CV_64FC1);


          for (int row = 0; row < 3; row++)
          {

            std::getline(file, line, ' ');
            IntrinsicMatrix.cv::Mat::at<double>(row, 0) = std::strtod(line.c_str(), NULL);


            std::getline(file, line, ' ');
            IntrinsicMatrix.cv::Mat::at<double>(row, 1) = std::strtod(line.c_str(), NULL);

            std::getline(file, line);
            IntrinsicMatrix.cv::Mat::at<double>(row, 2) = std::strtod(line.c_str(), NULL);

          }

          //get radial distortion [3x1]

          std::getline(file, line, ' ');
          Radial_distortion[0] = std::strtod(line.c_str(), NULL);

          std::getline(file, line, ' ');
          Radial_distortion[1] = std::strtod(line.c_str(), NULL);

          std::getline(file, line);
          Radial_distortion[2] = std::strtod(line.c_str(), NULL);

          //get tangential distortion [2x1]

          std::getline(file, line, ' ');
          Tangential_distortion[0] = std::strtod(line.c_str(), NULL);

          std::getline(file, line);
          Tangential_distortion[1] = std::strtod(line.c_str(), NULL);



          //get camera position T [3x1]

          std::getline(file, line, ' ');
          Translation.at<double>(0) = std::strtod(line.c_str(), NULL);

          std::getline(file, line, ' ');
          Translation.at<double>(1) = std::strtod(line.c_str(), NULL);

          std::getline(file, line);
          Translation.at<double>(2) = std::strtod(line.c_str(), NULL);



          //get camera rotation R [3x3]
          for (int row = 0; row < 3; row++)
          {

            std::getline(file, line, ' ');
            Rotation.at<double>(row, 0) = std::strtod(line.c_str(), NULL);

            std::getline(file, line, ' ');
            Rotation.at<double>(row, 1) = std::strtod(line.c_str(), NULL);

            std::getline(file, line);
            Rotation.at<double>(row, 2) = std::strtod(line.c_str(), NULL);
          };


          Liste_Images.push_back(Image(Name, A, Translation, Rotation, IntrinsicMatrix, Radial_distortion,
                                       Tangential_distortion));

        };

      };
    };

    file.close();

  } else cerr << "Impossible d'ouvrir le fichier DATA!" << endl;


};


/*
void Esperce_Reader::get_ImageM(){

              //cout<<(int)Liste_Images.size()<<endl;
        for (int i=0; i<(int)Liste_Images.size();i++){

                string path0 = path_Image;


                std::string path = std::string(    path0.append(  std::string(Liste_Images[i].get_name()) )     );
                //cout<< path<<endl;

                cv::Mat A = cv::imread(path,CV_LOAD_IMAGE_GRAYSCALE);

               //if ( A.data != NULL){

                //      cv::namedWindow("FREE",CV_WINDOW_FREERATIO);
                ///    cv::resizeWindow("FREE",A.cols/4,A.rows/4);

                 //     cv::imshow("FREE",A);

                    // cv::waitKey();

               // };

                //cout<< A <<endl;

                Liste_Images[i].set_IMatrix( A );



        };

};

*/
const vector<Image>& Esperce_Reader::get_ListeImage()
{

  return Liste_Images;

}

/*

Esperce_Reader::~Esperce_Reader()
{
    //dtor
}
*/
