//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#include <cmath>
#include "DUNE/Math/Constants.hpp"
#include "DUNE/Math/Angles.hpp"
#include "SinusoidalStreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      SinusoidalStreamGenerator::SinusoidalStreamGenerator(double amplitude,
                                                           double period,
                                                           double phase,
                                                           double slope) :
        StreamGenerator(0.0, 0.0, 0.0),
        m_amplitude(amplitude),
        m_omega(DUNE::Math::c_two_pi / period),
        m_phase(DUNE::Math::Angles::radians(phase)),
        m_slope(DUNE::Math::Angles::radians(slope))
      {}

      std::array<double, 3>
      SinusoidalStreamGenerator::getVelocity(double, double, double, double time) const
      {
        const double angle = m_omega * time + m_phase;
        const double amplitude = m_amplitude * std::sin(angle);
        return {amplitude * std::cos(m_slope), amplitude * std::sin(m_slope), 0.0};
      }
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators
