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

#ifndef DUNE_MANEUVERS_ELEVATE_HPP_INCLUDED_
#define DUNE_MANEUVERS_ELEVATE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Elevate;

    //! Class to control elevator behavior
    class Elevate
    {
    public:
      //! Default constructor.
      //! @param[in] maneuver pointer to rows maneuver
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] min_radius minimum radius to consider in maneuver
      Elevate(const IMC::Elevator* maneuver, Maneuvers::Maneuver* task,
              float min_radius);

      //! Update object with EstimatedState message
      //! @param[in] msg pointer to EstimatedState message
      void
      update(const IMC::EstimatedState* msg);

      //! Update object with PathControlState message
      //! @param[in] msg pointer to PathControlState message
      void
      updatePathControl(const IMC::PathControlState* msg);

      //! Check if elevator has finished
      //! @return true if finished
      inline bool
      isDone(void) const
      {
        return (m_els == ST_DONE);
      }

      //! Get the elevator's direction
      //! @return positive if going up, negative going down, zero for undefined
      inline int
      getElevatorDirection(void) const
      {
        return m_dir;
      }

      //! Compute vertical error
      //! @param[in] depth current vehicle's depth
      //! @param[in] altitude current vehicle's altitude
      //! @return difference between current z value being used and the reference
      float
      getVerticalError(float depth, float altitude)
      {
        if (m_elevator.end_z_units == IMC::Z_ALTITUDE)
          return std::fabs(altitude - m_elevator.end_z);
        else
          return std::fabs(depth - m_elevator.end_z);
      }

      //! Compute vertical error
      //! @param[in] msg pointer to EstimatedState message
      //! @return difference between current z value being used and the reference
      float
      getVerticalError(const IMC::EstimatedState* msg)
      {
        return getVerticalError(msg->depth, msg->alt);
      }

    private:
      enum ElevateState
      {
        //! Initial state
        ST_INITIAL,
        //! Going to location
        ST_GO_TO,
        //! Started loitering
        ST_LOITER,
        //! Loitering up or down
        ST_HELICOID,
        //! Done
        ST_DONE
      };

      //! Compute the elevator direction
      //! @param[in] msg pointer to EstimatedState message
      void
      computeElevatorDirection(const IMC::EstimatedState* msg);

      //! Start helicoid motion
      //! @param[in] msg pointer to EstimatedState message
      void
      startHelicoid(const IMC::EstimatedState* msg);

      //! Check if current position should be used
      //! @return true if current position should be used, false otherwise
      inline bool
      useCurr(void) const
      {
        return (m_elevator.flags & IMC::Elevator::FLG_CURR_POS);
      }

      //! Compute loiter direction for going up or down
      //! @param[in] msg pointer to EstimatedState message
      //! @return IMC::DesiredPath::FL_CCLOCKW for counter-clockwise or zero otherwise
      unsigned
      getLoiterDirection(const IMC::EstimatedState* msg) const
      {
        // If we are going down then loiter counter-clockwise
        if (m_elevator.end_z_units == IMC::Z_DEPTH)
        {
          if (msg->depth < m_elevator.end_z)
            return IMC::DesiredPath::FL_CCLOCKW;
        }
        else if (msg->alt > m_elevator.end_z)
        {
          return IMC::DesiredPath::FL_CCLOCKW;
        }

        return 0;
      }

      //! Pointer to task
      Maneuvers::Maneuver* m_task;
      //! DesiredPath message
      IMC::DesiredPath m_path;
      //! Elevator maneuver
      IMC::Elevator m_elevator;
      //! Current state of the state machine
      ElevateState m_els;
      //! Direction of the elevator
      int m_dir;
      //! Depth tolerance when elevating towards a new depth
      float m_depth_tolerance;
    };
  }
}

#endif
