//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Utility program for WGS-84 conversion functions.                         *
//***************************************************************************

// ISO C++ headers
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

// DUNE headers
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Coordinates/WMM.hpp>
#include <DUNE/FileSystem/Path.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;
using namespace DUNE::FileSystem;

static bool deg = true;
static WMM* wmm = 0; // create only if necessary

void
helpC(std::istream& is)
{
  std::cout << "Commands:" << std::endl
            << " ne <lat1> <lon1> <lat2> <lon2> -- compute NE offset and range between WGS-84 coordinates" << std::endl
            << " disp <lat> <lon> <n> <e>       -- compute WGS-84 coordinate displaced by given N-E offsets" << std::endl
            << " geoid <x> <y> <z>              -- convert ECEF to WGS84 coordinates " << std::endl
            << " wmm <lat> <lon>                -- calculate geoid height and declination"
            << " deg                            -- assume lat/lon values in degrees (set initially)"
            << " rad                            -- assume lat/lon values are given in radians"
            << " help                           -- print this message" << std::endl
            << " quit                           -- quit" << std::endl;
}

void
degC(std::istream& is)
{
  deg = true;
}

void
radC(std::istream& is)
{
  deg = false;
}

void
dispC(std::istream& is)
{
  double lat, lon, n, e, hae;
  is >> lat >> lon >> n >> e;

  if (deg)
  {
    lat = Angles::radians(lat);
    lon = Angles::radians(lon);
  }

  hae = 0.00;

  WGS84::displace(n, e, 0.00, &lat, &lon, &hae);

  if (deg)
  {
    lat = Angles::degrees(lat);
    lon = Angles::degrees(lon);
  }

  std::cout << lat << ' ' << lon << std::endl;
}

void
neC(std::istream& is)
{
  double lat1, lon1, lat2, lon2, n, e;

  is >> lat1 >> lon1 >> lat2 >> lon2;

  if (deg)
  {
    lat1 = Angles::radians(lat1); lon1 = Angles::radians(lon1);
    lat2 = Angles::radians(lat2); lon2 = Angles::radians(lon2);
  }

  WGS84::displacement(lat1, lon1, 0, lat2, lon2, 0, &n, &e);

  if (deg)
  {
    lat1 = Angles::degrees(lat1); lon1 = Angles::degrees(lon1);
    lat2 = Angles::degrees(lat2); lon2 = Angles::degrees(lon2);
  }

  std::cout << n << ' ' << e << ' ' << std::sqrt(n * n + e * e) << std::endl;
}

void
wmmC(std::istream& is)
{
  if (!wmm)
    wmm = new WMM;

  double lat, lon;

  is >> lat >> lon;

  if (deg)
  {
    lat = Angles::radians(lat);
    lon = Angles::radians(lon);
  }

  double h = wmm->height(lat, lon);
  double d = wmm->declination(lat, lon);

  std::cout << h << ' ' << (deg ? Angles::degrees(d) : d) << std::endl;
}

int
main(int argc, char** argv)
{
  typedef void cfunc (std::istream &);
  typedef std::map<std::string, cfunc*> CmdMap;
  CmdMap commands;

  std::cout << std::fixed;

  commands["ne"] = &neC;
  commands["disp"] = &dispC;
  commands["wmm"] = &wmmC;
  commands["help"] = &helpC;
  commands["deg"] = &degC;
  commands["rad"] = &radC;

  --argc; ++argv;

  std::stringstream ss;
  std::istream* is;

  if (!argc)
  {
    is = &std::cin;
  }
  else
  {
    for (int i = 0; i < argc; i++)
      ss << ' ' << argv[i];
    is = &ss;
  }

  while (!is->eof())
  {
    std::string cmd;
    *is >> cmd;

    if (cmd.empty() || cmd == "q" || cmd == "quit")
      break;

    CmdMap::iterator itr = commands.find(cmd);

    if (itr == commands.end())
    {
      std::cout << "invalid command '" << cmd << "'" << std::endl;
      return 1;
    }

    itr->second(*is);
  }

  if (wmm)
    delete wmm;
  return 0;
}
