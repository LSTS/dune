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

#ifndef DUNE_MANEUVERS_STATION_KEEP_HPP_INCLUDED_
#define DUNE_MANEUVERS_STATION_KEEP_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/Coordinates.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM StationKeep;

    //! Class to control station keeping behavior
    class StationKeep
    {
    public:
      //! Default constructor.
      //! @param[in] maneuver pointer to rows maneuver
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] min_radius minimum radius to consider in maneuver
      StationKeep(const IMC::StationKeeping* maneuver, Maneuvers::Maneuver* task,
                  float min_radius);

      //! Default constructor.
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] lat latitude of maneuver
      //! @param[in] lon longitude of maneuver
      //! @param[in] radius station keeping radius
      //! @param[in] z zed reference for this maneuver
      //! @param[in] z_units units of the zed reference
      //! @param[in] speed speed reference for maneuver
      //! @param[in] speed_units speed units of the reference
      StationKeep(Maneuvers::Maneuver* task, double lat, double lon,
                  float radius, float z, uint8_t z_units,
                  float speed, uint8_t speed_units);

      //! Update behavior
      //! @param[in] state pointer to EstimatedState message
      void
      update(const IMC::EstimatedState* state);

      //! Update behavior with path control state
      //! @param[in] pcs pointer to PathControlState message
      void
      updatePathControl(const IMC::PathControlState* pcs);

      //! Check if vehicle is inside boundary
      //! @return true if inside
      bool
      isInside(void) const;

      //! Check if vehicle is moving
      //! @return true if moving
      bool
      isMoving(void) const;

    private:
      //! Compute the range to the point
      //! @param[in] state
      //! @return range to maneuver point
      double
      getRange(const IMC::EstimatedState* state) const;

      //! Start moving to the maneuver's point
      //! @param[in] range distance to the point
      //! @param[in] at_surface true for traveling at the surface
      void
      startMoving(double range, bool at_surface);

      //! Stop moving
      //! @param[in] range distance to the point
      void
      stopMoving(double range);

      enum StationState
      {
        //! Initial state
        ST_INITIAL,
        //! On station state
        ST_ON_STATION,
        //! Off station state
        ST_OFF_STATION
      };

      //! Pointer to task
      Maneuvers::Maneuver* m_task;
      //! DesiredPath message
      IMC::DesiredPath m_path;
      //! Maneuver's latitude
      double m_lat;
      //! Maneuver's longitude
      double m_lon;
      //! Maneuver's radius
      double m_radius;
      //! Current state of the state machine
      StationState m_sks;
    };
  }
}

#endif
