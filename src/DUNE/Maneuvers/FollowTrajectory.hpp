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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MANEUVERS_FOLLOW_TRAJECTORY_HPP_INCLUDED_
#define DUNE_MANEUVERS_FOLLOW_TRAJECTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM FollowTrajectory;

    //! Base abstract class for trajectory following (IMC::FollowTrajectory maneuver).
    class FollowTrajectory: public Maneuver
    {
    public:
      //! Constructor.
      //! @param name name.
      //! @param ctx context.
      FollowTrajectory(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~FollowTrajectory(void);

      virtual void
      onUpdateParameters(void);

      //! Consumer for IMC::FollowTrajectory message.
      //! @param msg maneuver message
      void
      consume(const IMC::FollowTrajectory* msg);

      //! Method invoked on maneuver startup.
      //! By default the base class implementation does nothing.
      //! @param msg maneuver message
      //! @return true if we can proceed with the maneuver, false otherwise
      virtual
      bool
      canInit(const IMC::FollowTrajectory* msg) = 0;

      //! Consumer for IMC::EstimatedState message.
      //! @param msg message
      void
      consume(const IMC::EstimatedState* msg);

      //! Abstract method invoked for trajectory control.
      //! This will be invoked periodically according to the
      //! control step period (see controlPeriod()) after
      //! the initial approach stage has concluded (see isApproaching()).
      virtual void
      step(const IMC::EstimatedState& state) = 0;

      //! Consumer for IMC::PathControlState message.
      //! @param pcs path control state message
      void
      consume(const IMC::PathControlState* pcs);

      //! Abstract method called upon path completion.
      //! This will not be called in approach stage (see isApproaching()).
      virtual void
      onPathCompletion(void) = 0;

      //! Inherited from Maneuver class.
      //! @param pcs path control state message
      void
      onPathControlState(const IMC::PathControlState* pcs);

      //! Method called upon maneuver deactivation.
      void
      onManeuverDeactivation(void);

      //! Method invoked on maneuver reset.
      //! By default the base class implementation does nothing.
      virtual void
      onReset(void)
      { }

      //! Trajectory point.
      struct TPoint
      {
        //! X coordinate offset (North).
        double x;
        //! Y coordinate offset (East).
        double y;
        //! Z coordinate offset (Down).
        double z;
        //! Z units for the Z offset (Down).
        uint8_t z_units;
        //! time coordinate offset.
        double t;
      };

      //! Get a point in the trajectory.
      //! @param t_index index of point
      //! @return corresponding traj. point
      inline const TPoint&
      point(int t_index) const
      {
        return m_traj[t_index];
      }

      //! Get number of points in the trajetory.
      inline size_t
      trajectory_points(void) const
      {
        return m_traj.size();
      }

      //! Get control step period.
      //! @return control step period.
      inline double
      controlPeriod(void) const
      {
        return m_cstep_period;
      }

      //! Check if maneuver is still in approach stage (i.e. moving to the initial point).
      //! @return control step period.
      inline bool
      isApproaching(void) const
      {
        return m_approach;
      }

      //! Set the desired path
      void
      desiredPath(const TPoint& start, const TPoint& end);

      //! Set the desired speed
      void
      desiredSpeed(double value, uint8_t units);

    private:
      //! Trajectory points.
      std::vector<TPoint> m_traj;
      //! Approach stage flag.
      bool m_approach;
      //! Reference latitude set.
      double m_rlat;
      //! Reference longitude set.
      double m_rlon;
      //! control step period
      double m_cstep_period;
      //! time of last control step
      double m_cstep_time;
      //! Desired path message to be sent
      IMC::DesiredPath m_path;

      //! Routine to initiate trajectory by displacing tpoints
      bool
      initTrajectory(const IMC::FollowTrajectory*);
    };
  }
}

#endif
