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
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// European Union Public Licence, Version 1.1 only (the "Licence"),          *
// appearing in the file LICENCE.md included in the packaging of this file. *
// You may not use this work except in compliance with the Licence.          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the Licence is distributed on an "AS IS" basis,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the Licence for the specific language governing permissions and      *
// limitations at http://ec.europa.eu/idabc/eupl.html.                      *
//***************************************************************************

#include <cmath>

#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Math/Angles.hpp>

#include "Test.hpp"

using DUNE::Coordinates::WGS84;
using DUNE::Coordinates::c_radius;
using DUNE::Math::Angles;

static bool
closeTo(double value, double expected, double tolerance)
{
  return std::fabs(value - expected) <= tolerance;
}

int
main(void)
{
  Test test("DUNE::Coordinates::WGS84 great-circle calculations");

  const double start_lat = Angles::radians(60.0);
  const double start_lon = Angles::radians(-5.0);
  const double initial_bearing = Angles::radians(90.0);
  const double path_length = 100000.0;

  double end_lat;
  double end_lon;
  WGS84::displaceGreatCircle(start_lat, start_lon, initial_bearing,
                             path_length, &end_lat, &end_lon);

  double bearing;
  double range;
  WGS84::getGreatCircleBearingAndRange(start_lat, start_lon,
                                       end_lat, end_lon,
                                       &bearing, &range);

  test.boolean("inverse range matches direct range",
               closeTo(range, path_length, 1e-6));
  test.boolean("inverse bearing matches direct bearing",
               closeTo(bearing, initial_bearing, 1e-10));

  double current_lat;
  double current_lon;
  WGS84::displaceGreatCircle(start_lat, start_lon, initial_bearing,
                             path_length * 0.5,
                             &current_lat, &current_lon);

  double along;
  double cross;
  WGS84::getGreatCircleTrackPosition(current_lat, current_lon,
                                     start_lat, start_lon,
                                     end_lat, end_lon,
                                     &bearing, &along, &cross);

  test.boolean("on-track along distance",
               closeTo(along, path_length * 0.5, 1e-6));
  test.boolean("on-track cross distance",
               closeTo(cross, 0.0, 1e-6));
  test.boolean("local tangent changes along great circle",
               Angles::degrees(bearing) > 90.5);

  double right_lat;
  double right_lon;
  WGS84::displaceGreatCircle(current_lat, current_lon,
                             bearing + DUNE::Math::c_half_pi, 1000.0,
                             &right_lat, &right_lon);
  WGS84::getGreatCircleTrackPosition(right_lat, right_lon,
                                     start_lat, start_lon,
                                     end_lat, end_lon,
                                     &bearing, &along, &cross);

  test.boolean("right-of-track cross distance is positive",
               closeTo(cross, 1000.0, 0.1));

  return test.getReturnValue();
}
