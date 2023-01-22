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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#ifndef SIMULATORS_STREAM_VELOCITY_STREAM_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_STREAM_VELOCITY_STREAM_GENERATOR_HPP_INCLUDED_

#include <array>

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      // A simple interface for any sort of source of velocity values.
      // This base class just provides a constant value.
      class StreamGenerator
      {
      public:
        //! Constructor.
        //! @param[in] wx default stream speed in the North direction (m/s).
        //! @param[in] wy default stream speed in the East direction (m/s).
        //! @param[in] wz default stream speed in the Down direction (m/s).
        StreamGenerator(double wx, double wy, double wz = 0.0);

        ~StreamGenerator() = default;

        //! Get a stream velocity value.
        //! @param[in] lat WGS84 latitude in degrees.
        //! @param[in] lon WGS84 longitude in degrees.
        //! @param[in] depth depth in meters.
        //! @param[in] time time elapsed since the simulation started.
        //! @return 3-dimensional array containing the stream velocity in the
        //! North, East and Down directions in meters per second.
        virtual std::array<double, 3>
        getVelocity(double lat,
                    double lon,
                    double depth,
                    double time = 0.0) const;

        //! Get the default stream velocity.
        //! @return 3-dimensional array containing the default stream velocity
        //! value in the North, East and Down directions in meters per second.
        std::array<double, 3>
        getDefaultVelocity() const;

        //! Set the default stream velocity.
        //! @param[in] wx default stream speed in the North direction (m/s).
        //! @param[in] wy default stream speed in the East direction (m/s).
        //! @param[in] wz default stream speed in the Down direction (m/s).
        void
        setVelocity(double wx, double wy, double wz = 0.0);

      private:
        //! Default speed North.
        double m_wx;
        //! Default speed East.
        double m_wy;
        //! Default speed Down.
        double m_wz;
      };
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators

#endif
