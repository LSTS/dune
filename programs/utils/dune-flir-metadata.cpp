//#***************************************************************************
//# Copyright (C) 2018 Laboratório de Sistemas e Tecnologia Subaquática      *
//# Departamento de Engenharia Electrotécnica e de Computadores              *
//# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//#***************************************************************************
//# Author: Pedro Gonçalves                                                  *
//#***************************************************************************

#include <iostream>
#include <string>
#include <math.h>
#include <cstring>
#include <inttypes.h>
#include <map>
#include <algorithm>

#include "../../vendor/libraries/exiftool/ExifTool.h"

using namespace std;

// information used to calculate image temperature
string readInfo[] =
    {"ReflectedApparentTemperature", "AtmosphericTemperature", "ObjectDistance",
     "RelativeHumidity", "Emissivity", "PlanckR1", "PlanckR2", "PlanckB",
     "PlanckO", "PlanckF", "AtmosphericTransAlpha1", "AtmosphericTransAlpha2",
     "AtmosphericTransBeta1", "AtmosphericTransBeta2", "AtmosphericTransX",
     "RawValueMedian", "RawValueRange",
     "RawThermalImageWidth", "RawThermalImageHeight"};

// output information to save on CSV
string csvInfo[] = {
    "DateTimeOriginal", "MAVRoll", "MAVPitch", "MAVYaw",
    "GPSAltitude", "GPSLatitude", "GPSLongitude"};

map<string, float> readInfoValues;
string lineInfo[256][2];
int cntMetaData = 0;
int numberInfoToRead = 0;
char *fileName;
bool hasErrors = false;

void saveData(void);
void calcTemp(void);
void getRawThermalImage(char *path);
void printCSVLine(char separator);
int toUnixTime(string date_time);
float toDecimalDegrees(string dms);

ExifTool *et;

map<string, string> csvInfoValues;

float averageTemp = 0;

float tau;
float raw_atm;
float emmissivity;
float raw_refl;
float b;
float o;
float r1;
float r2;
float f;

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    cout << "Please specify input fil e name" << endl;
    return 1;
  }
  // create our ExifTool object
  et = new ExifTool();
  // read metadata from the image
  TagInfo *info = et->ImageInfo(argv[1]);
  fileName = argv[1];

  if (info)
  {
    for (TagInfo *i = info; i; i = i->next)
    {
      lineInfo[cntMetaData][0] = i->name;
      lineInfo[cntMetaData++][1] = i->value;
      // cout << "#    " << i->name << " = " << i->value << endl;
    }
    delete info;
  }
  else if (et->LastComplete() <= 0)
  {
    cerr << "Error executing exiftool!" << endl;
  }

  saveData();
  calcTemp();
  getRawThermalImage(argv[1]);

  printCSVLine(',');

  // print exiftool stderr messages
  char *err = et->GetError();
  if (err)
  {
    cerr << err;
    hasErrors = true;
  }

  delete et; // delete our ExifTool object
  return 0;
}

void saveData(void)
{
  numberInfoToRead = sizeof(readInfo) / sizeof(readInfo[0]);

  bool haveInfo = false;

  string *currLine = nullptr;

  for (int t = 0; t < cntMetaData; t++)
  {
    if ((currLine = find(readInfo, readInfo + numberInfoToRead, lineInfo[t][0])) != readInfo + numberInfoToRead)
    {
      haveInfo = true;
      try
      {
        readInfoValues.insert(pair<string, float>(*currLine, stof(lineInfo[t][1])));
        // cout << "#    " << *currLine << " = " << lineInfo[t][1] << endl;
      }
      catch (...)
      {
        //cout << "#    " << lineInfo[t][0] << " = error getting value, is binary data ?!?" << endl;
        //cout << lineInfo[t][1] << endl;
      }
    }
    //cout << "Line Info: " << lineInfo[t][0] << " Find Result: " << find(csvInfo, csvInfo + sizeof(csvInfo), lineInfo[t][0]) << " CSVINFO: " << csvInfo << " CSVINFO + size off: " << csvInfo + sizeof(csvInfo) << endl;
    if (find(csvInfo, csvInfo + 7, lineInfo[t][0]) != csvInfo + 7)
    {
      csvInfoValues[lineInfo[t][0]] = lineInfo[t][1];
      //cout << "Inserted: " << lineInfo[t][0] << " with value: " << lineInfo[t][1] << endl;
    }
    if ((t == cntMetaData - 1) && !haveInfo)
    {
      //cout << *currLine << " = Not found " << endl;
    }
  }
}

void calcTemp(void)
{
  //# get parameters from meta data
  /*
     ReflectedApparentTemperature = 0    |    AtmosphericTemperature = 1
     ObjectDistance = 2                  |    RelativeHumidity = 3
     Emissivity = 4                      |    PlanckR1 = 5
     PlanckR2 = 6                        |    PlanckB = 7
     PlanckO = 8                         |    PlanckF = 9
     AtmosphericTransAlpha1 = 10         |    AtmosphericTransAlpha2 = 11
     AtmosphericTransBeta1 = 12          |    AtmosphericTransBeta2 = 13
     AtmosphericTransX = 14              |    RawValueMedian = 15
     RawValueRange = 16                  |    RawThermalImage = 17
     */

  float temp_ref = readInfoValues["ReflectedApparentTemperature"];
  float temp_atm = readInfoValues["AtmosphericTemperature"];
  float distance = readInfoValues["ObjectDistance"];
  float humidity = readInfoValues["RelativeHumidity"] / 100.0;
  emmissivity = readInfoValues["Emissivity"];
  r1 = readInfoValues["PlanckR1"];
  r2 = readInfoValues["PlanckR2"];
  b = readInfoValues["PlanckB"];
  o = readInfoValues["PlanckO"];
  f = readInfoValues["PlanckF"];
  float a1 = readInfoValues["AtmosphericTransAlpha1"];
  float a2 = readInfoValues["AtmosphericTransAlpha2"];
  float b1 = readInfoValues["AtmosphericTransBeta1"];
  float b2 = readInfoValues["AtmosphericTransBeta2"];
  float x = readInfoValues["AtmosphericTransX"];

  // Raw temperature range from FLIR
  float raw_max = readInfoValues["RawValueMedian"] + (readInfoValues["RawValueRange"] / 2);
  float raw_min = raw_max - readInfoValues["RawValueRange"];

  // Calculate atmospheric transmission
  float h2o = (humidity / 100) * exp(
                                     1.5587 + 6.939e-2 * temp_atm - 2.7816e-4 * pow(temp_atm, 2) + 6.8455e-7 * pow(temp_atm, 3));
  tau = x * exp(-sqrt(distance) * (a1 + b1 * sqrt(h2o))) + (1 - x) * exp(-sqrt(distance) * (a2 + b2 * sqrt(h2o)));

  // Radiance from atmosphere
  // The camera is reporting the ambient temp as -273.15 deg celsius
  try
  {
    raw_atm = (r1 / (r2 * (exp(b / (temp_atm + 273.15)) - f))) - o;
  }
  catch (...)
  {
    cerr << "ZeroDivisionError" << endl;
    raw_atm = -o;
  }

  // Radiance from reflected objects
  raw_refl = r1 / (r2 * (exp(b / (temp_ref + 273.15)) - f)) - o;

  // get displayed object temp max/min
  float raw_max_obj = (raw_max - (1 - tau) * raw_atm - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;
  float raw_min_obj = (raw_min - (1 - tau) * raw_atm - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;

  float temp_min = b / log(r1 / (r2 * (raw_min_obj + o)) + f) - 273.15;
  float temp_max = b / log(r1 / (r2 * (raw_max_obj + o)) + f) - 273.15;
}

void getRawThermalImage(char *path)
{
  //Raw thermal image
  TagInfo *infoEP = et->ImageInfo(path, "\n-RawThermalImage\n-b\n");
  const int imageHeight = readInfoValues["RawThermalImageHeight"];
  const int imageWidth = readInfoValues["RawThermalImageWidth"];
  // cout << "Image Height = " << imageHeight << endl;
  // cout << "Image Width = " << imageWidth << endl;
  int cnt = 0;
  for (TagInfo *i = infoEP; i; i = i->next)
  {
    if (cnt == 1)
    {
      int **bufferMat = new int *[imageHeight];
      float **bufferMatFloat = new float *[imageHeight];
      for (int i = 0; i < imageHeight; ++i)
      {
        bufferMat[i] = new int[imageWidth];
        bufferMatFloat[i] = new float[imageWidth];
      }
      char *buff;
      buff = i->value;
      double sizeBuf = i->valueLen;
      int start = sizeBuf - (imageHeight * (2 * imageWidth));
      int r = 0;
      int c = 0;
      for (int t = start; t < sizeBuf; t = t + 2)
      {
        bufferMat[r][c] = (buff[t + 1] << 8) | (buff[t] & 0xff);
        c++;
        if (c > imageWidth-1)
        {
          c = 0;
          r++;
        }
      }

      for (int i = 0; i < imageHeight; i++)
        for (int t = 0; t < imageWidth; t++)
          bufferMatFloat[i][t] = (bufferMat[i][t] - (1 - tau) * raw_atm - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;

      for (int i = 0; i < imageHeight; i++)
        for (int t = 0; t < imageWidth; t++)
          bufferMatFloat[i][t] = (b / log(r1 / (r2 * (bufferMatFloat[i][t] + o)) + f) - 273.15);

      double med = 0;

      for (int i = 0; i < imageHeight; i++)
        for (int t = 0; t < imageWidth; t++)
          med = med + bufferMatFloat[i][t];

      averageTemp = med / (imageHeight * imageWidth);

      delete bufferMat;
      delete bufferMatFloat;
    }
    cnt++;
  }
}

void printCSVLine(char separtor)
{
  string altitudeStr = csvInfoValues["GPSAltitude"];
  float altitude = stof(altitudeStr.substr(0, altitudeStr.find(' ')));
  cout.precision(8);
  cout << endl
       << fixed
       //<< csvInfoValues["DateTimeOriginal"] << separtor
       << toUnixTime(csvInfoValues["DateTimeOriginal"]) << separtor
       << toDecimalDegrees(csvInfoValues["GPSLatitude"]) << separtor
       << toDecimalDegrees(csvInfoValues["GPSLongitude"]) << separtor;
  cout.unsetf(std::ios::fixed);
  cout.precision(6);
  cout << altitude << separtor
       << csvInfoValues["MAVRoll"] << separtor
       << csvInfoValues["MAVPitch"] << separtor
       << csvInfoValues["MAVYaw"] << separtor
       << averageTemp;
}

int toUnixTime(string date_time)
{
  time_t rawtime;
  struct tm *timeinfo;

  int year = stoi(date_time.substr(0, 4)),
      month = stoi(date_time.substr(5, 7)),
      day = stoi(date_time.substr(8, 10)),
      hour = stoi(date_time.substr(11, 13)),
      min = stoi(date_time.substr(14, 16)),
      sec = stoi(date_time.substr(17, 19)),
      UTCOffset = stoi(date_time.substr(23, 26));

  /* get current timeinfo: */
  time(&rawtime); //or: rawtime = time(0);
  /* convert to struct: */
  timeinfo = localtime(&rawtime);

  /* now modify the timeinfo to the given date: */
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1; //months since January - [0,11]
  timeinfo->tm_mday = day;      //day of the month - [1,31]
  timeinfo->tm_hour = hour;     //hours since midnight - [0,23]
  timeinfo->tm_min = min;       //minutes after the hour - [0,59]
  timeinfo->tm_sec = sec;       //seconds after the minute - [0,59]

  rawtime = timegm(timeinfo);

  //account GTM offset hours to be true GMT 1 hour = 3600 sec
  rawtime -= UTCOffset * 3600;

  /* call gmtime: create unix time stamp from timeinfo struct in gmt time*/
  //int date = gmtime(rawtime);
  return rawtime;
}

float toDecimalDegrees(string dms)
{
  //0 deg 0' 0.00" N

  int degreeDelimiter = dms.find(' ');
  int minutesPos = degreeDelimiter + 5;
  int minuteDelimiter = dms.find('\'');
  int secondsPos = minuteDelimiter + 2;
  int secondsDelimiter = dms.find('"');

  float result = stoi(dms.substr(0, minutesPos - 1));
  //cout << dms.substr(minutesPos, minuteDelimiter - minutesPos) << endl;
  result += stoi(dms.substr(minutesPos, minuteDelimiter - minutesPos)) / 60.0;
  //cout << dms.substr(secondsPos, secondsDelimiter - secondsPos) << endl;
  result += stof(dms.substr(secondsPos, secondsDelimiter - secondsPos)) / 3600.0;

  if (dms.find('W') != string::npos || dms.find('S') != string::npos)
  {
    return -result;
  }
  else
  {
    return result;
  }
}