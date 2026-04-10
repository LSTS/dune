//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Utility program to test body fixed frame conversion functions.           *
//***************************************************************************

#include <iostream>
#include <sstream>
#include <string>
#include <DUNE/Math/CircularMean.hpp>
#include <DUNE/Math/Angles.hpp>
#include "Test.hpp"

using namespace DUNE::Math;

int
main(void)
{
  Test test("DUNE::Math::CirularMean");
  bool success = false;

  CircularMean<double> cm;
  cm.update(Angles::normalizeRadian(Angles::radians(355.0)));
  cm.update(Angles::normalizeRadian(Angles::radians(5.0)));
  cm.update(Angles::normalizeRadian(Angles::radians(15.0)));
  
  // std::cout << "Mean: " << Angles::degrees(cm.mean()) << std::endl;
  // std::cout << "Radius: " << cm.radius() << std::endl;

  double margin = Angles::radians(0.1);
  if (cm.mean() < Angles::normalizeRadian(Angles::radians(5.0 + margin)) &&
      cm.mean() > Angles::normalizeRadian(Angles::radians(5.0 - margin)))
    success = true;
  test.boolean("CirularMean", success);
  return test.getReturnValue();
}
