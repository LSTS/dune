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

#ifndef BRIDGES_SENSORS_DEVICES_ICLISTEN_HPP
#define BRIDGES_SENSORS_DEVICES_ICLISTEN_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"

class DevIcListen: public Sensor
{
public:
  DevIcListen(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud)
  { }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    flush();

    //DUNE::Time::Delay::wait(30);
    uint8_t bfr[128];

    for (int i = 0; i < 10; ++i)
    {
      std::string raw("\x2A\x42\x00\x00\xa8\x0c", 6);
      sendCommand(raw);
      DUNE::Time::Delay::wait(1.0);

      size_t rv = m_sib->readFromSensor(bfr, sizeof(bfr));
      std::fprintf(stderr, "rv: %u\n", rv);
    }

    return true;
  }

  bool
  parse(uint8_t* bfr, size_t bfr_size)
  {
    std::string raw((const char*)bfr, bfr_size);

    std::cerr << "IC: " << DUNE::Streams::sanitize(raw) << std::endl;
    return true;
  }
};

#endif
