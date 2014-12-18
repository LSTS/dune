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

#ifndef DUNE_MANEUVERS_CIRCULAR_HPP_INCLUDED_
#define DUNE_MANEUVERS_CIRCULAR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/Maneuvers/AbstractLoiter.hpp>
#include <DUNE/Coordinates.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Circular;

    //! Class to control circular behavior
    class Circular: public Maneuvers::AbstractLoiter
    {
    public:
      //! Default constructor.
      //! @param[in] maneuver pointer to loiter maneuver
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] min_radius minimum radius to consider in maneuver
      Circular(const IMC::Loiter* maneuver, Maneuvers::Maneuver* task,
               float min_radius);

      //! Default constructor.
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] lat latitude of maneuver
      //! @param[in] lon longitude of maneuver
      //! @param[in] radius circular radius
      //! @param[in] z zed reference for this maneuver
      //! @param[in] z_units units of the zed reference
      //! @param[in] speed speed reference for maneuver
      //! @param[in] speed_units speed units of the reference
      //! @param[in] direction loiter direction according to IMC::Loiter
      Circular(Maneuvers::Maneuver* task, double lat, double lon,
               float radius, float z, uint8_t z_units,
               float speed, uint8_t speed_units, uint8_t direction);

      //! Update behavior with path control state
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs);

      //! Check if loitering
      //! @return true if loitering, false otherwise
      bool
      isLoitering(void) const;

    private:
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] lat latitude of maneuver
      //! @param[in] lon longitude of maneuver
      //! @param[in] radius circular radius
      //! @param[in] z zed reference for this maneuver
      //! @param[in] z_units units of the zed reference
      //! @param[in] speed speed reference for maneuver
      //! @param[in] speed_units speed units of the reference
      //! @param[in] direction loiter direction according to IMC::Loiter
      void 
      init(Maneuvers::Maneuver* task, double lat, double lon,
           float radius, float z, uint8_t z_units,
           float speed, uint8_t speed_units, uint8_t direction);

      //! Loitering state flag
      bool m_loitering;
    };
  }
}

#endif
