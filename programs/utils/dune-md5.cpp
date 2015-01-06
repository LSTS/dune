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

// ISO C++ headers
#include <cstdio>
#include <iomanip>
#include <iostream>

// DUNE headers
#include <DUNE/Algorithms/MD5.hpp>

using namespace DUNE::Algorithms;

int
main(int argc, char** argv)
{
  --argc;
  ++argv;

  if (!argc)
  {
    std::cerr << "Usage: md5 file1 ... filen" << std::endl;
    return 1;
  }

  do
  {
    uint8_t digest[16];

    MD5::compute(*argv, digest);

    for (int i = 0; i < 16; ++i)
      std::cout << std::hex << std::setw(2) << std::setfill('0') << ((unsigned)digest[i]);
    std::cout << ' ' << *argv << std::endl;
  }
  while (*(++argv));

  return 0;
}
