#ifndef ESPERCE_READER_H
#define ESPERCE_READER_H


#include <fstream>

using namespace std;


#include "Image.h"


class Esperce_Reader
{
private:

  string path_Data;
  string path_Image;
  vector<Image> Liste_Images;


public:

  Esperce_Reader();

  Esperce_Reader(string path_Data, string path_Image);

  void get_Dataset();
  //void get_ImageM();

  const vector<Image>& get_ListeImage();

  //virtual ~Esperce_Reader();

};

#endif // ESPERCE_READER_H
