//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <string>
#include <stdlib.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#define TOMPS_COEFA 0.4449
#define TOMPS_COEFB -1.1723
#define TOMPS_COEFC 1.9588
#define TOMPS_COEFD 0.000

#define TORPM_COEFA -0.3024
#define TORPM_COEFB 0.9409
#define TORPM_COEFC 0.1120
#define TORPM_COEFD 0.0000

// #define MAX_MPS 5.0
// #define MIN_RPM 500.0

inline double
polynom3(double a, double b, double c, double d, double x)
{
  return a * x * x * x + b * x * x + c * x + d;
}

// returns RPM/1000
double
toRPM(double value)
{
  return polynom3(TORPM_COEFA, TORPM_COEFB, TORPM_COEFC, TORPM_COEFD, value);
}

double
toMPS(double value)
{
  return polynom3(TOMPS_COEFA, TOMPS_COEFB, TOMPS_COEFC, TOMPS_COEFD, value);
}

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable("yoyocalc")
  .version("1.0.0")
  .program("YoYo Calc")
  .copyright(DUNE_COPYRIGHT)
  .arch(DUNE_SYSTEM_NAME)
  .email("Pedro Calado <pdcalado@gmail.com>")
  .date(DUNE_BUILD_TIME)
  .add("-r", "--rateofdescent",
       "Vehicle's desired descent rate in meters per minute", "RATED")
  .add("-p", "--pitch",
       "Vehicle's maximum pitch in degrees", "PITCH");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // There have to be 2 options, therefore a total of 4 arguments
  if (argc != 5)
    std::cerr << "E: " << "You must provide both rate of descent and pitch. Type ./yoyocalc" << std::endl;

  // convert descent to meters per second
  double drate_mps = castLexical<double>(options.value("--rateofdescent")) / 60.0;

  // convert pitch to radians
  double pitch = Angles::radians(castLexical<double>(options.value("--pitch")));

  // compute the required speed to achieve that rate at the desired pitch
  double speed_mps = drate_mps / std::sin(pitch);

  // convert that speed to rpms using the polynom
  double speed_rpm = 1000.0 * toRPM(speed_mps);

  // distance travelled in the horizontal plane per descent
  double horizontal_distance = speed_mps * 60.0 * std::cos(pitch);

  std::cout << "Speed required is:" << std::endl
            << speed_mps << " meters per second." << std::endl
            << speed_rpm << " RPMs for seacon 1 or 2 (approx)." << std::endl
            << horizontal_distance << " meters travelled in the horizontal plane per descent (at least)." << std::endl;

  return 0;
}
