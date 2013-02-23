//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
