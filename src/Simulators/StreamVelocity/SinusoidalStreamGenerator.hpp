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

#ifndef SIMULATORS_STREAM_VELOCITY_SINUSOIDAL_STREAM_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_STREAM_VELOCITY_SINUSOIDAL_STREAM_GENERATOR_HPP_INCLUDED_

#include <string>
#include <vector>

#include "StreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      //! Sinusoidal current generator.
      //! Generates a sinusoidal stream velocity pattern projected onto a slope,
      //! according to:
      //!
      //! vx = A sin(wt + phi) cos(slope)
      //! vy = A sin(wt + phi) sin(slope)
      class SinusoidalStreamGenerator : public StreamGenerator
      {
      public:
        //! Constructor.
        //! @param[in] amplitude structure containing the configuration parameters
        //! for reading the data from the file.
        //! @param[in] wx default stream speed in the North direction (m/s).
        //! @param[in] wy default stream speed in the East direction (m/s).
        //! @param[in] wz default stream speed in the Down direction (m/s).
        SinusoidalStreamGenerator(double amplitude,
                                  double period,
                                  double phase = 0.0,
                                  double slope = 0.0);

        ~SinusoidalStreamGenerator() = default;

        virtual std::array<double, 3>
        getVelocity(double lat,
                    double lon,
                    double depth,
                    double time = 0.0) const override;

      private:
        double m_amplitude;
        double m_omega;
        double m_phase;
        double m_slope;
      };
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators

#endif
