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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLANS_SPEED_MODEL_HPP_INCLUDED_
#define DUNE_PLANS_SPEED_MODEL_HPP_INCLUDED_

//! ISO C++ headers.
#include <vector>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Math/General.hpp>
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Plans
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SpeedModel;

    //! Utility class to compute offline speed conversions.
    //! Consider ONLY positive speed.
    //! Negative values means failure to convert
    class SpeedModel
    {
    public:
      //! Constructor
      //! @param[in] config pointer to config parser
      SpeedModel(Parsers::Config* config);

      //! Constructor
      //! @param[in] act values for the actuation
      //! @param[in] rpm values for the rpms
      //! @param[in] mps values for the meters per second
      //! @param[in] time_factor time of arrival factor
      SpeedModel(const std::vector<float>& act,
                 const std::vector<float>& rpm,
                 const std::vector<float>& mps,
                 float time_factor = 5.0);

      //! Convert to meters per second
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to meters per second, negative if failed
      float
      toMPS(float value, uint8_t units) const;

      //! Convert to RPMs
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to RPMs, negative if failed
      float
      toRPM(float value, uint8_t units) const;

      //! Convert to Actuation
      //! @param[in] value speed value from which to convert
      //! @param[in] units speed units of the given value
      //! @return converted value to actuation, negative if failed
      float
      toAct(float value, uint8_t units) const;

      //! Validate the speed model
      void
      validate(void) const;

      //! Get time of arrival factor
      //! @return time of arrival in seconds
      float
      getTimeFactor(void) const
      {
        return m_time_factor;
      }

    private:
      //! Convert from any unit to any other unit
      //! @param[in] value speed value from which to convert
      //! @param[in] from speed units of the given value
      //! @param[in] to speed units which to convert
      float
      convert(float value, uint8_t from, uint8_t to) const;

      //! Vector of values for each axis
      std::vector<float> m_models[3];
      //! Time of arrival factor
      float m_time_factor;
    };
  }
}

#endif
