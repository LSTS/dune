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
#include "../pmc/gliderAPI.hpp"

int
main(int argc, char** argv)
{
  // Command Bus with glider.
  DUNE::Hardware::SerialPort* m_uart = new DUNE::Hardware::SerialPort("/dev/ttyS5", 115200);

  DUNE::Time::Counter<double> timer_run(60.0);
  while (!timer_run.overflow())
  {
    uint8_t bfr[255];
    if (DUNE::IO::Poll::poll(*m_uart, 1.0))
    {
      size_t rv = m_uart->read(bfr, sizeof(bfr));
      for (size_t i = 0; i < rv; ++i)
        std::fprintf(stderr, "%02X\n", bfr[i]);
    }
  }

  DUNE::Memory::clear(m_uart);

  return 0;
}
