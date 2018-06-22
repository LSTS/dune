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
#include "../sensors/factory.hpp"

void
listen(SibBus& bus, DevFluidion& obj, float timeout = 200.0)
{
  /* Get some data */
  DUNE::Time::Counter<double> timer_run(timeout);
  while (!timer_run.overflow())
  {
    DUNE::Time::Counter<double> timer(0.5);
    while (!timer.overflow())
    {
      uint8_t rbfr[128];
      size_t rv = bus.readFromSensor(rbfr, sizeof(rbfr));

      if (rv)
      {
        std::fprintf(stderr, "Read from sensor: %u\n", rv);
        for (size_t j = 0; j < rv; ++j)
          obj.parse(rbfr[j]);
      }

      DUNE::Time::Delay::wait(timer.getRemaining());
    }
  }
}

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cout << "Usage: " << argv[0] << " <lane>" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  /* Configure sensors */
  SensorFactoryString type = SFS_FLUIDION;

  unsigned lane = std::atoi(argv[1]);
  DevFluidion* obj = static_cast<DevFluidion*>(SensorFactory::produce(type, lane, bus));
  bus.selectLane(lane);
  bus.openLane();
  bus.sendSensorBaud(SensorFactory::getBaudRate(type));

  std::cout << "\tping" << std::endl;
  obj->ping();
  listen(bus, *obj, 2.0);

  std::cout << "\ttake sample" << std::endl;
  obj->sample();
  listen(bus, *obj);

  std::cout << "\tping" << std::endl;
  obj->ping();
  listen(bus, *obj, 2.0);

  bus.deselectLane(std::atoi(argv[1]));
  bus.sendPowerOff();

  // Disable triggers.
  bus.enableTriggers(false);

  delete obj;
  return 0;
}
