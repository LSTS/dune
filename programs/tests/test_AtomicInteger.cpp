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

// DUNE headers.
#include <DUNE/Concurrency.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::Concurrency;

int
main(void)
{
  Test test("Concurrency::AtomicInteger");

  //  AtomicInteger aint(10);

  AtomicInteger aint2 = 0;

  for (int i = 0; i < 10; ++i)
  {
    std::cerr << aint2.increment() << std::endl;
  }

  // {
  //   Address a = Address::Any;
  //   test.boolean("Static address (Any)", a.str() == "0.0.0.0");
  // }

  // {
  //   Address a = Address::Loopback;
  //   test.boolean("Static address (Loopback)", a.str() == "127.0.0.1");
  // }

  // {
  //   Address a = Address::Broadcast;
  //   test.boolean("Static address (Broadcast)", a.str() == "255.255.255.255");
  // }

  // {
  //   Address a = "140.130.23.1";
  //   Address b = a;
  //   test.boolean("Assignment operator (Address)", a == b);
  // }

  // {
  //   Address a = "140.130.23.1";
  //   Address b = a.toNativeInteger();
  //   test.boolean("Assignment operator (uint32_t)", a == b);
  // }

  // {
  //   Address a = "whale.fe.up.pt";
  //   a.resolve();
  //   test.boolean("Hostname resolution (valid)", a.str() == "193.136.28.163");
  // }

  // {
  //   Address a = "xxxwwwxxxx.com";
  //   test.boolean("Hostname resolution (invalid)", !a.resolve());
  // }

  // {
  //   Address a = "192.168.106.1";
  //   test.boolean("IP address resolution", a.resolve());
  // }

  return 0;
}
