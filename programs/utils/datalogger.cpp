//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " <device>" << std::endl;
    return 1;
  }

  DUNE::Hardware::SerialPort* port = new DUNE::Hardware::SerialPort(argv[1], 500000);
  std::ofstream outf;
  uint8_t bfr[1024];
  double time;
  std::string label;
  std::string dir;

  label = "datalog_";
  time = DUNE::Time::Clock::getSinceEpoch();
  label = label + DUNE::Time::Format::getDateSafe(time) + DUNE::Time::Format::getTimeSafe(time);
  label = label + ".bin";
  dir = "/opt/lsts/dune/log/";
  dir = dir + label;

  std::cerr << dir << std::endl;

  outf.open(dir.c_str(), std::ios::out | std::ios::binary);

  if (outf.fail())
  {
    std::cerr << "Unable to open/write log file" << std::endl;
    return 0;
  }

  while (1)
  {
    if (port->hasNewData(1.0) != DUNE::System::IOMultiplexing::PRES_OK)
      continue;

    int rv = port->read(bfr, sizeof(bfr));
    for (int i = 0; i < rv; ++i)
    {
      outf << bfr[i];
    }
  }

  outf.close();
  return 0;
}
