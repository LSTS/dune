//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MANEUVERS_TRAJECTORYFOLLOWING_HPP_INCLUDED_
#define DUNE_MANEUVERS_TRAJECTORYFOLLOWING_HPP_INCLUDED_

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
      virtual
      void
      onInit(const IMC::FollowTrajectory* msg) = 0;

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
      //! @param msg path control state message
      void
      consume(const IMC::PathControlState* msg);

      //! Abstract method called upon path completion.
      //! This will not be called in approach stage (see isApproaching()).
      virtual void
      onPathCompletion(void) = 0;

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
      inline int
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
