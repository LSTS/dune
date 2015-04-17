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
