//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLANS_SPEEDCONVERSION_HPP_INCLUDED_
#define DUNE_PLANS_SPEEDCONVERSION_HPP_INCLUDED_

//! ISO C++ headers.
#include <vector>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Math/General.hpp>

namespace DUNE
{
  namespace Plans
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SpeedConversion;

    struct SpeedModel
    {
      //! Vector of values for each axis
      std::vector<float> values[3];
    };

    //! Utility class to compute offline speed conversions.
    //! Consider ONLY positive speed.
    //! Negative values means failure to convert
    class SpeedConversion
    {
    public:
      //! Convert to meters per second
      //! @param[in] sm struct with vector of values used for conversion
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to meters per second, negative if failed
      static float
      toMPS(const SpeedModel& sm, float value, uint8_t units);

      //! Convert to RPMs
      //! @param[in] sm struct with vector of values used for conversion
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to RPMs, negative if failed
      static float
      toRPM(const SpeedModel& sm, float value, uint8_t units);

      //! Convert to Actuation
      //! @param[in] sm struct with vector of values used for conversion
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to actuation, negative if failed
      static float
      toAct(const SpeedModel& sm, float value, uint8_t units);

    private:
      //! Convert from any unit to any other unit
      //! @param[in] sm struct with vector of values used for conversion
      //! @param[in] value speed value from which to convert
      //! @param[in] from speed units of the given value
      //! @param[in] to speed units which to convert
      static float
      convert(const SpeedModel& sm, float value,
              uint8_t from, uint8_t to);
    };
  }
}

#endif
