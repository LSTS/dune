//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Paulo Dias                                                       *
//***************************************************************************
//                                                                          *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Control/CoarseAltitude.hpp>

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
//  if (argc <= 1)
//  {
//    std::cerr << "Usage: " << argv[0] << " <path_to_log/Data.lsf[.gz]>"
//              << std::endl;
//    return 1;
//  }

  fp64_t lat = Angles::radians(41);
  fp64_t lon = Angles::radians(-8);
  fp64_t latP = lat;
  fp64_t lonP = lon;
  fp64_t bearing = Angles::radians(0);
  fp64_t cross_angle = Angles::radians(0);
  fp32_t width = 200;
  fp32_t length = 100;
  fp32_t hstep = 30;
  uint8_t coff = 15;
  uint8_t alternation = 100;
  uint8_t flags = !IMC::Rows::FLG_SQUARE_CURVE  | IMC::Rows::FLG_CURVE_RIGHT;
  Maneuvers::RowsStages* rows_stages = new Maneuvers::RowsStages(lat, lon, bearing, cross_angle,
      width, length, hstep, coff, alternation, flags, NULL);

  int c = 0;
  bool ret = rows_stages->getFirstPoint(&latP, &lonP);
  std::cout<< "Lat: " << Angles::degrees(lat);
  std::cout << "\tLon: " << Angles::degrees(lon) << "\n";
  double n = 0;
  double e = 0;
  Coordinates::WGS84::displacement(lat, lon, 0, latP, lonP, 0, &n, &e);
  std::cout << "#" << c++ << "\t";
  std::cout << "deltas n: " << roundf(n * 10) / 10;
  std::cout << "\te: " << roundf(e * 10) / 10;
  std::cout<< "\t\tLat: " << Angles::degrees(latP);
  std::cout << "\tLon: " << Angles::degrees(lonP) << "\n";
  int i = 1;
  while(!ret)
  {
    lat = latP;
    lon = lonP;
    i++;
    // ret = rows_stages->getNextPoint(&latP, &lonP, 10 * i >= 80 ? 0 : 10 * i);
    ret = rows_stages->getNextPoint(&latP, &lonP, 2 * i >= 80 ? 0 : 2 * i);
    // ret = rows_stages->getNextPoint(&latP, &lonP, 30);
    Coordinates::WGS84::displacement(lat, lon, 0, latP, lonP, 0, &n, &e);
    std::cout << "#" << c++ << "\t";
    std::cout << "deltas n: " << roundf(n * 10) / 10;
    std::cout << "\te: " << roundf(e * 10) / 10;
    std::cout<< "\t\tLat: " << Angles::degrees(latP);
    std::cout << "\tLon: " << Angles::degrees(lonP) << "\n";
  }

  return 0;
}
