//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: test_Network.cpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Network.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::Network;

int
main(void)
{
  Test test("Network::Address");

  {
    Address a = Address::Any;
    test.boolean("Static address (Any)", a.str() == "0.0.0.0");
  }

  {
    Address a = Address::Loopback;
    test.boolean("Static address (Loopback)", a.str() == "127.0.0.1");
  }

  {
    Address a = Address::Broadcast;
    test.boolean("Static address (Broadcast)", a.str() == "255.255.255.255");
  }

  {
    Address a = "140.130.23.1";
    Address b = a;
    test.boolean("Assignment operator (Address)", a == b);
  }

  {
    Address a = "140.130.23.1";
    Address b = a.toIntegerNative();
    test.boolean("Assignment operator (uint32_t)", a == b);
  }

  {
    Address a = "whale.fe.up.pt";
    a.resolve();
    test.boolean("Hostname resolution (valid)", a.str() == "193.136.28.163" || a.str() == "192.168.106.32");
  }

  {
    Address a = "xxxwwwxxxx.com";
    test.boolean("Hostname resolution (invalid)", !a.resolve());
  }

  {
    Address a = "192.168.106.1";
    test.boolean("IP address resolution", a.resolve());
  }

  return 0;
}
