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
#include <DUNE/System.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::System;

int
main(int argc, char** argv)
{
  Test test("System::Environment");

  {
    std::string value;

    Environment::set("DUNE_ENV_VAR", "123");
    Environment::get("DUNE_ENV_VAR", value);
    test.boolean("Set/Get", value == "123");

    Environment::unset("DUNE_ENV_VAR");
    test.boolean("Unset/Get", !Environment::get("DUNE_ENV_VAR", value));
  }

  {
    int value = 0;
    Environment::set("DUNE_ENV_VAR_INT", 123);
    bool rv = Environment::get("DUNE_ENV_VAR_INT", value);
    test.boolean("Get (template)", (rv && (value == 123)));
  }

  return 0;
}
