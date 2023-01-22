//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
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
// Author: Kristoffer Gryte                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"


int
main(void)
{
  Test test("Factorial");

  {
    test.boolean("factorial(0)", Math::factorial(0) == 1);
    test.boolean("factorial(1)", Math::factorial(1) == 1);
    test.boolean("factorial(2)", Math::factorial(2) == 2);
    test.boolean("factorial(5)", Math::factorial(5) == 120);
    test.boolean("factorial(170)", Math::factorial(170) == 7.257415615307994E+306);
    test.boolean("factorial(90)/factorial(89)", std::fabs(Math::factorial(90)/Math::factorial(89) - 90) < 1e-9);
    test.boolean("factorial(170)/factorial(169)", std::fabs(Math::factorial(170)/Math::factorial(169) - 170) < 1e-9);
    try
    {
      Math::factorial(-1) == 1;
      test.failed("factorial out of bounds, low");
    }
    catch (std::exception& e)
    {
      test.passed(DUNE::Utils::String::str("factorial out of bounds, low: %s", e.what()).c_str());
    }
    try
    {
      Math::factorial(171) == 1;
      test.failed("factorial out of bounds, high");
    }
    catch (std::exception& e)
    {
      test.passed(DUNE::Utils::String::str("factorial out of bounds, high: %s", e.what()).c_str());
    }
  }

  return 0;
}
