//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: test_BodyFixedFrame.cpp 12667 2013-01-22 02:44:42Z rasm          $:*
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
