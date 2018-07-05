//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

#include <DUNE/DUNE.hpp>

// Local headers.
#include "pmc/gliderAPI.hpp"
#include "sensors/factory.hpp"
#include "sensors/manager.hpp"

static const float c_log_timestep = 1.0;
static const float c_subsamp_timestep = 10.0;

//! Desired runtime.
static const float c_runtime = 60 * 5;

int
main(int argc, char** argv)
{
  /** fetch from config file **/
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " <CONFIG_FILE>" << std::endl;
    return 1;
  }

  // configuration file.
  DUNE::Parsers::Config cfg(argv[1]);
  std::string devices_str = cfg.get("PMC_BUS", "Lanes");
  std::vector<std::string> devices;
  DUNE::Utils::String::split(devices_str, ", ", devices);

  std::cerr << "/***************************************************" << std::endl;
  std::cerr << "/* Turn on glider simulator to get vehicle" << std::endl;
  std::cerr << "/* status and to *bootstrap* PMC/SIBs" << std::endl;
  std::cerr << "/*\r\n/*\tlist of sensors:" << std::endl;
  for (size_t i = 0; i < devices.size(); ++i)
    std::cerr << "/*\t\t #" << i << ": " << devices[i] << std::endl;
  std::cerr << "/***************************************************" << std::endl;

  // RS-485 bus with SIB.
  SibBus bus("/dev/ttyS3");
  // Command Bus with glider.
  GliderAPI glider("/dev/ttyS5", &cfg);
  // Sensor manager.
  Manager man(&bus, &cfg, "/root/", c_log_timestep, c_subsamp_timestep);

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  // add sensors to sensor manager.
  for (size_t i = 0; i < devices.size(); ++i)
  {
    SensorFactoryString x = SensorFactory::fromString(devices[i]);
    if (x != SFS_NONE)
      man.add(i, x);
  }

  /** MAIN LOOP **/
  DUNE::Time::Counter<double> timer(60.0); // print time each x seconds.
  DUNE::Time::Counter<double> timer_run(c_runtime); // runtime.
  while (!timer_run.overflow())
  {
    // listen to sensors.
    man.listen();

    // get data from glider.
    if (glider.read())
      man.setState(glider.getVehicle(), glider.getMission(), glider.getCycle(),
                   glider.getLatitude(), glider.getLongitude(), glider.getDepth(),
                   glider.getAltitude(), glider.getUpDown());

    // configuration has changed.
    if (glider.checkConfig())
    {
      // reload settings.
      std::cerr << "reloading settings" << std::endl;
      man.reload();
      glider.resetConfigChanged();
    }

    if (timer.overflow())
    {
      std::fprintf(stderr, "\t\t\t\t\t\tcurrent runtime: %.1f | Depth: %.2f\n", timer_run.getElapsed(), glider.getDepth());
      timer.reset();
    }
  }
  /** END OF MAIN LOOP **/

  // Disable triggers and power off.
  std::cerr << "power off sensors, disable triggers and power off" << std::endl;
  man.powerOffSensors();
  bus.enableTriggers(false);
  bus.sendPowerOff();
  return 0;
}
