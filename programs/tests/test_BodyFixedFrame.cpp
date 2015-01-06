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
// Utility program to test body fixed frame conversion functions.           *
//***************************************************************************

#include <iostream>
#include <sstream>
#include <string>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Coordinates/BodyFixedFrame.hpp>
#include "Test.hpp"

using namespace DUNE::Math;
using namespace DUNE::Coordinates;

int
main(void)
{
  Test test("DUNE::Utils::BodyFixedFrame");

  double phi, theta, psi,
         u, v, w,
         u_in, v_in, w_in,
         u_in2, v_in2, w_in2, d;

  bool success = true;
  double astep = c_pi * 0.25;
  for (phi = 0; phi <= c_two_pi && success; phi += astep)
    for (theta = 0; theta <= c_two_pi && success; theta += astep)
      for (psi = 0; psi <= c_two_pi && success; psi += astep)
        for (u_in = -1; u_in <= 1 && success; u_in += 0.5)
          for (v_in = -1; v_in <= 1 && success; v_in += 0.5)
            for (w_in = -1; w_in <= 1 && success; w_in += 0.5)
            {
              BodyFixedFrame::toBodyFrame(phi, theta, psi, u_in, v_in, w_in, &u, &v, &w);
              BodyFixedFrame::toInertialFrame(phi, theta, psi, u, v, w, &u_in2, &v_in2, &w_in2);
              d = u_in - u_in2 + v_in - v_in2 + w_in - w_in2;

              if (d > 1e-04)
                success = false;

              //std::cout << std::fixed << "ERR "<<Angles::degrees(phi) << ' ' << Angles::degrees(theta) << ' ' << Angles::degrees(psi) << " | "
              //     << u_in << ' ' << v_in << ' ' << w_in << " | "
              //     << u << ' ' << v << ' ' << w << " | " << d << '\n';
            }
  test.boolean("BFF", success);
  return 0;
}
