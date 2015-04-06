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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Parser.hpp"

int
main(int argc, char** argv)
{
  if (argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << " <device> <folder>" << std::endl;
    return 1;
  }

  Path folder(argv[2]);
  if (!folder.exists())
    folder.create();

  Path bin_name;
  unsigned nr = 0;

  while (true)
  {
    bin_name = folder / String::str("%08u.bin", nr);
    if (!bin_name.exists())
      break;
    ++nr;
  }

  std::FILE* bin = std::fopen(bin_name.c_str(), "wb");
  if (bin == NULL)
  {
    std::cerr << "ERROR: failed to open file '" << bin_name << "'" << std::endl;
    return 1;
  }
  std::cerr << "Opened " << bin_name << std::endl;

  SerialPort port(argv[1], 921600);
  uint8_t bfr[1024] = {0};

  while (true)
  {
    if (!Poll::poll(port, 1.0))
      continue;

    size_t rv = port.read(bfr, sizeof(bfr));
    std::fwrite(bfr, 1, rv, bin);
  }

  std::fclose(bin);

  return 0;
}
