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
#include "../pmc/sibBus.hpp"

void
control_lane(SibBus& bus, unsigned lane, bool value)
{
  bus.enableTriggers(true);
  bus.selectLane(lane);

  if (value)
  {
    bus.openLane();
  }
  else
  {
    bus.sendSensorPowerOff();
    bus.sendPowerOff();
    bus.deselectLane(lane);
    bus.enableTriggers(false);
  }
}

int
main(int argc, char** argv)
{
  if (argc != 3)
  {
    std::cout << "Usage: " << argv[0] << " <lane> <1 or 0>" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");
  unsigned lane = std::atoi(argv[1]);
  bool value = std::atoi(argv[2]) != 0;

  if (lane == 99)
  {
    for (unsigned i = 0; i < 8; ++i)
      control_lane(bus, i, value);
  }
  else
  {
    control_lane(bus, lane, value);
  }

  return 0;
}
