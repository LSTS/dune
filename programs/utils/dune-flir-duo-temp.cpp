//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
//# Author: Pedro Gonçalves                                                 *
//#**************************************************************************
// Calculate image temperature (FlirDuoRTemp).                              *
//***************************************************************************

#include <iostream>
#include <string>
#include <math.h>
#include <cstring>
#include <inttypes.h>

#include "../../vendor/libraries/exiftool/ExifTool.h"
#include "../../vendor/libraries/exiftool/ConsoleColor.hpp"

using namespace std;

string readInfo[] =
  { "ReflectedApparentTemperature", "AtmosphericTemperature", "ObjectDistance",
      "RelativeHumidity", "Emissivity", "PlanckR1", "PlanckR2", "PlanckB",
      "PlanckO", "PlanckF", "AtmosphericTransAlpha1", "AtmosphericTransAlpha2",
      "AtmosphericTransBeta1", "AtmosphericTransBeta2", "AtmosphericTransX",
      "RawValueMedian", "RawValueRange", "RawThermalImage" };

float readInfoValues[32];
string lineInfo[256][2];
int cntMetaData = 0;
int numberInfoToRead = 0;
char * fileName;

void
printData(void);
void
calcTemp(void);
void
getRawThermalImage(char * path);

ExifTool *et;

float tau;
float raw_atm;
float emmissivity;
float raw_refl;
float b;
float o;
float r1;
float r2;
float f;

Color::Modifier green(Color::FG_GREEN);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier red(Color::FG_RED);
Color::Modifier def(Color::FG_DEFAULT);

int
main(int argc, char **argv)
{
  if (argc < 2)
  {
    cout << "Please specify input file name" << endl;
    return 1;
  }
  // create our ExifTool object
  et = new ExifTool();
  // read metadata from the image
  TagInfo *info = et->ImageInfo(argv[1]);
  fileName = argv[1];

  cout << green;
  if (info)
  {
    for (TagInfo *i = info; i; i = i->next)
    {
      lineInfo[cntMetaData][0] = i->name;
      lineInfo[cntMetaData++][1] = i->value;
      cout << "#    " << i->name << " = " << i->value << endl;
    }
    delete info;
  }
  else if (et->LastComplete() <= 0)
  {
    cerr << "Error executing exiftool!" << endl;
  }

  cout << def << endl << endl;

  printData();
  calcTemp();
  getRawThermalImage(argv[1]);

  // print exiftool stderr messages
  char *err = et->GetError();
  if (err)
    cout << err;

  delete et;      // delete our ExifTool object
  return 0;
}

void
printData(void)
{
  numberInfoToRead = sizeof(readInfo) / sizeof(readInfo[0]);
  bool haveInfo = false;

  for (int i = 0; i < numberInfoToRead; i++)
  {
    haveInfo = false;
    for (int t = 0; t < cntMetaData; t++)
    {
      if (lineInfo[t][0].compare(readInfo[i]) == 0)
      {
        haveInfo = true;
        try
        {
          readInfoValues[i] = stof(lineInfo[t][1]);
          cout << "#    " << readInfo[i] << " = " << lineInfo[t][1] << endl;
        }
        catch (...)
        {

          cout << "#    " << lineInfo[t][0] << " = error getting value, is binary data ?!?" << endl;
          cout << "#    " << lineInfo[t][1] << endl;
        }
      }
      if ((t == cntMetaData - 1) && !haveInfo)
      {
        cout << readInfo[i] << " = Not found " << endl;
      }
    }
  }
}

void
calcTemp(void)
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

  float temp_ref = readInfoValues[0];
  float temp_atm = readInfoValues[1];
  float distance = readInfoValues[2];
  float humidity = readInfoValues[3] / 100.0;
  emmissivity = readInfoValues[4];
  r1 = readInfoValues[5];
  r2 = readInfoValues[6];
  b = readInfoValues[7];
  o = readInfoValues[8];
  f = readInfoValues[9];
  float a1 = readInfoValues[10];
  float a2 = readInfoValues[11];
  float b1 = readInfoValues[12];
  float b2 = readInfoValues[13];
  float x = readInfoValues[14];

  // Raw temperature range from FLIR
  float raw_max = readInfoValues[15] + (readInfoValues[16] / 2);
  float raw_min = raw_max - readInfoValues[16];

  // Calculate atmospheric transmission
  float h2o = (humidity / 100)
      * exp(
          1.5587 + 6.939e-2 * temp_atm - 2.7816e-4 * pow(temp_atm, 2)
              + 6.8455e-7 * pow(temp_atm, 3));
  tau = x * exp(-sqrt(distance) * (a1 + b1 * sqrt(h2o)))
      + (1 - x) * exp(-sqrt(distance) * (a2 + b2 * sqrt(h2o)));

  // Radiance from atmosphere
  // The camera is reporting the ambient temp as -273.15 deg celsius
  try
  {
    raw_atm = (r1 / (r2 * (exp(b / (temp_atm + 273.15)) - f))) - o;
  }
  catch (...)
  {
    cout << "ZeroDivisionError" << endl;
    raw_atm = -o;
  }

  // Radiance from reflected objects
  raw_refl = r1 / (r2 * (exp(b / (temp_ref + 273.15)) - f)) - o;

  // get displayed object temp max/min
  float raw_max_obj = (raw_max - (1 - tau) * raw_atm
      - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;
  float raw_min_obj = (raw_min - (1 - tau) * raw_atm
      - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;

  float temp_min = b / log(r1 / (r2 * (raw_min_obj + o)) + f) - 273.15;
  float temp_max = b / log(r1 / (r2 * (raw_max_obj + o)) + f) - 273.15;
}

void
getRawThermalImage(char * path)
{
  //Raw thermal image
  TagInfo *infoEP = et->ImageInfo(path, "\n-RawThermalImage\n-b\n");
  int cnt = 0;
  for (TagInfo *i = infoEP; i; i = i->next)
  {
    if (cnt == 1)
    {
      int bufferMat[120][160];
      float bufferMatFloat[120][160];
      char *buff;
      buff = i->value;
      double sizeBuf = i->valueLen;
      int start = sizeBuf - (120 * (2 * 160));
      int r = 0;
      int c = 0;
      for (int t = start; t < sizeBuf; t = t + 2)
      {
        bufferMat[r][c] = (buff[t + 1] << 8) | (buff[t] & 0xff);
        c++;
        if (c > 159)
        {
          c = 0;
          r++;
        }
      }

      for (int i = 0; i < 120; i++)
        for (int t = 0; t < 160; t++)
          bufferMatFloat[i][t] = (bufferMat[i][t] - (1 - tau) * raw_atm
              - (1 - emmissivity) * tau * raw_refl) / emmissivity / tau;

      for (int i = 0; i < 120; i++)
        for (int t = 0; t < 160; t++)
          bufferMatFloat[i][t] = (b
              / log(r1 / (r2 * (bufferMatFloat[i][t] + o)) + f) - 273.15);

      double med = 0;

      for (int i = 0; i < 120; i++)
        for (int t = 0; t < 160; t++)
          med = med + bufferMatFloat[i][t];

      std::cout.precision(8);
      cout << endl << blue <<  "# " << green << fileName << blue << " # Pos calc > Temperature med of picture: " << red << med / (120 * 160) << " ºC" << def << endl << endl;

    }
    cnt++;
  }
}

