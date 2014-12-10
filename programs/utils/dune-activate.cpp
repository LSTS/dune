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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 9 headers.
#include <cstdlib>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using namespace std;
using DUNE_NAMESPACES;

int
main(int argc, char** argv)
{
  if (argc < 4)
  {
    fprintf(stderr, "Usage: %s <destination host> <destination port> <entity> <true|false>\n", argv[0]);
    return 1;
  }

  Address dest(argv[1]);

  // Parse port.
  unsigned port = 0;
  if (!castLexical(argv[2], port))
  {
    fprintf(stderr, "ERROR: invalid port '%s'\n", argv[2]);
    return 1;
  }

  if (port > 65535)
  {
    fprintf(stderr, "ERROR: invalid port '%s'\n", argv[2]);
    return 1;
  }

  IMC::EntityParameter p;
  p.name = "Active";
  p.value = argv[4];

  IMC::SetEntityParameters msg;
  msg.name = argv[3];
  msg.params.push_back(p);
  msg.setTimeStamp();

  uint8_t bfr[1024] = {0};
  uint16_t rv = IMC::Packet::serialize(&msg, bfr, sizeof(bfr));

  UDPSocket sock;
  try
  {
    sock.write(bfr, rv, dest, port);

    fprintf(stderr, "Raw:");
    for (int i = 0; i < rv; ++i)
      fprintf(stderr, " %02X", bfr[i]);
    fprintf(stderr, "\n");

    msg.toText(std::cerr);
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}
