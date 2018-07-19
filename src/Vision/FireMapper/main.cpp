
#include "Mapping.h"
#include "Raster_Tile.h"



#include <fstream>
using namespace std;



/*
vector<Raster_Tile*> get_allMaps(string folder){


    vector<Raster_Tile*> Carte;
    int i=0 ;

    ifstream fichier( folder.c_str(), ios::in);  // we open the file containing

    if(fichier)  // si l'ouverture a fonctionné
    {
                    string path;


                    while(getline(fichier, path))  // tant que l'on peut mettre la ligne dans "contenu"
                    {

                            Carte.push_back((Raster_Tile*)new Raster_Tile( path));


                            i+=1;;

                    };


                    fichier.close();

    }
    else{
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    };

    return Carte ;
};

*/




/*

                        main() du test de raster_tile




double H;
size_t x,y ;
vector<Raster_Tile*> Carte;

Carte = get_allMaps("DEM.txt");//We have in return a vector with adresses of



while (1){

        cout<<"\n Enter X value" <<endl;cin>>x;

        cout<<"Enter Y value" <<endl;cin>>y;

                for(int j =0 ; j< (int)Carte.size() ;j++){


                            if ( Carte[j]->Test_point(x,y) ){
                                H = Carte[j]->get_elevation(x , y);
                                cout<< " \n Height in the position ("<<x<<","<<y<<") is "<<H<<endl;

                            };

                };
};
*/


/*      test getline




string line;
string path_Data = "/net/cetus/data1/robots/maya/2014-05-27-volEsperce/postflightFiles/esperce3/params/esperce3_metriccal.txt";
ifstream file( path_Data.c_str() , ios::in);
  if (file.is_open()){

    getline (file,line,' ');

        cout << line << '\n';

    getline (file,line,' ');

        cout << line << '\n';
    getline (file,line);

    cout << line << '\n';


   getline (file,line,' ');

        cout << line << '\n';

    getline (file,line,' ');

        cout << line << '\n';

    getline (file,line,' ');

        cout << line << '\n';

    getline (file,line,' ');

        cout << line << '\n';

    getline (file,line);

      cout << line << '\n';

    file.close();
  }

  else cout << "Unable to open file \n";

*/

/*
Esperce_Reader Esp = Esperce_Reader();
Esp.get_Dataset();

const vector<Image>& IM = Esp.get_ListeImage();
cout<<IM.size()<<endl;

Image IM1 =IM[0] ;
cout<<IM1.get_name()<<endl;
cout<< IM1.get_CameraMatrix()<<endl;
PixelImage Pix;
Pix.row =400;
Pix.col =400;

Point3D Pt=Raytracer(Pix,IM1,Carte[0]);

cout<< "x:"<<Pt.x<<"\n y:"<< Pt.y<<"\n z :"<<Pt.z<<endl;

cv::Mat P= (cv::Mat_<double>(4,1)<<370747.84931199555,4797168.8641240774,507.77970651053715,1.0);

cv::Mat PI = IM1.get_CameraMatrix()*P;
cout<< PI <<endl;
double col =(int) (   PI .at<double>(0) / (PI .at<double>(2))  ); // divide by Z-cordinate
double row =(int) (PI .at<double>(1) / (PI .at<double>(2))); // divide by Z-cordinate
  cout<< "col"<<col<<endl;
  cout<< "row "<<row <<endl;


*/




int main()
{

Mapping Mp =Mapping();
cout<<"1"<<endl;

Mp.Map();
cout<<"2"<<endl;

vector<cv::Mat> Maps = Mp.get_IMapped();

imwrite("Map1.jpg",Maps[0]);

//cv::imshow("free",Maps[0]);

cout << "Hello world!" << endl;

    return 0;
};



//cv::Mat C = IM1.get_UndistortedImage();
//cout<<C<<endl;


/*
cv::Mat test1 = cv::imread(fichier,CV_LOAD_IMAGE_GRAYSCALE);

imwrite("grey.jpg", test1);

cv::imshow("free",test1);//used to show pictures
*/
