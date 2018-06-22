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

bool
test(SibBus& bus, unsigned lane, float delay)
{
  std::fprintf(stderr, "Testing Lane %u\n", lane);
  bus.enableTriggers(true);

  bus.selectLane(lane);
  if (!bus.openLane())
    return false;

  bus.sendSensorBaud(115200);

  std::fprintf(stderr, "Lane %u: sending string\n", lane);
  std::string bfr = DUNE::Utils::String::str("### testing lane #%d: comms OK", lane);
  bus.sendToSensor((const uint8_t*)bfr.c_str(), bfr.size());

  DUNE::Time::Delay::wait(delay / 2);

  std::vector<uint8_t> data;
  try
  {
    while (true)
    {
      uint8_t rbfr[128];
      size_t rv = bus.readFromSensor(rbfr, sizeof(rbfr));
      if (rv == 0)
        break;
      for (size_t i = 0; i < rv; ++i)
        data.push_back(rbfr[i]);
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "Lane " << lane << ": read error: " << e.what() << std::endl;
  }

  bool success = false;
  if (data.size() > 0)
  {
    std::string raw((char*)&data[0], data.size());
    std::fprintf(stderr, "Lane %u: read from sensor: %u: %s\n", lane, data.size(), DUNE::Streams::sanitize(raw).c_str());
    success = true;
  }

  DUNE::Time::Delay::wait(delay / 2);
  bus.sendSensorPowerOff();
  bus.sendPowerOff();
  bus.deselectLane(lane);
  bus.enableTriggers(false);
  return success;
}

void
print(bool condition, unsigned lane)
{
  if (condition)
    std::fprintf(stderr, "Lane %u: OK\n", lane);
  else
    std::fprintf(stderr, "Lane %u: NOT OK\n", lane);
}

int
main(int argc, char** argv)
{
  if (argc != 2 && argc != 3)
  {
    std::cout << "Usage: " << argv[0] << " <lane> <*delay*>" << std::endl;
    std::cout << "\n  * All lanes -- " << argv[0] << " 99 <*delay*>\n" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");
  unsigned lane = std::atoi(argv[1]);

  float delay = 2;
  if (argc == 3)
    delay = std::atof(argv[2]);

  if (lane == 99)
  {
    bool ret[8];
    for (unsigned i = 0; i < 8; ++i)
      ret[i] = test(bus, i, delay);

    std::fprintf(stderr, "\nResults:\n");
    for (unsigned i = 0; i < 8; ++i)
      print(ret[i], i);
  }
  else
  {
    print(test(bus, lane, delay), lane);
  }

  return 0;
}
