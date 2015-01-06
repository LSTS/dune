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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MANEUVERS_VEHICLE_FORMATION_HPP_INCLUDED_
#define DUNE_MANEUVERS_VEHICLE_FORMATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <map>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM VehicleFormation;

    //! Abstract base class for vehicle formation maneuver tasks.
    class VehicleFormation: public Maneuver
    {
    public:
      //! Constructor.
      //! @param name name.
      //! @param ctx context.
      VehicleFormation(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~VehicleFormation(void);

      virtual void
      onUpdateParameters(void);

      //! Consumer for IMC::VehicleFormation message.
      //! @param msg vehicle formation message
      void
      consume(const IMC::VehicleFormation* msg);

      //! Method invoked on maneuver startup.
      //! By default the base class implementation does nothing.
      //! @param msg vehicle formation message
      virtual void
      onInit(const IMC::VehicleFormation* msg)
      {
        (void)msg;
      }

      //! Consumer for IMC::RemoteState message.
      //! @param msg message
      void
      consume(const IMC::RemoteState* msg);

      //! Abstract method invoked upon a remote state update.
      //! @param index formation index of remote vehicle
      //! @param rstate state of remote vehicle
      virtual void
      onUpdate(int index, const IMC::RemoteState& rstate) = 0;

      //! Consumer for IMC::EstimatedState message.
      //! @param msg message
      void
      consume(const IMC::EstimatedState* msg);

      //! Inherited from Maneuver class.
      //! @param pcs path control state message
      void
      onPathControlState(const IMC::PathControlState* pcs);

      //! Abstract method called upon path completion.
      //! This will not be called in approach stage (see isApproaching()).
      virtual void
      onPathCompletion(void) = 0;

      //! Abstract method invoked for trajectory control.
      //! This will be invoked periodically according to the
      //! control step period (see controlPeriod()) after
      //! the initial approach stage has concluded (see isApproaching()).
      virtual void
      step(const IMC::EstimatedState& state) = 0;

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
        double x; //!< X coordinate offset (North).
        double y; //!< Y coordinate offset (East).
        double z; //!< Z coordinate offset (Down).
        double t; //!< time coordinate offset.
      };

      //! Get a point in the trajectory.
      //! @param t_index index of point
      //! @param f_index formation index (vehicle)
      //! @return corresponding traj. point, optionally displaced by formation index offsets
      TPoint
      point(int t_index, int f_index = -1) const;

      //! Get number of points in the trajetory.
      inline size_t
      trajectory_points(void) const
      {
        return m_traj.size();
      }

      //! Participant data (per vehicle in the formation).
      struct Participant
      {
        int vid; //!< IMC id
        double x; //!< Along-track offset.
        double y; //!< Cross-track offset.
        double z; //!< Depth offset.
      };

      //! Get number of participants in formation.
      //! @return number of participants in formation
      inline size_t
      participants() const
      {
        return m_participants.size();
      }

      //! Get configuration of a vehicle in formation.
      //! @param index formation index
      //! @return participant data for specified formation index
      inline const Participant&
      participant(int index) const
      {
        return m_participants[index];
      }

      //! Get configuration of local vehicle in formation.
      //! @return participant data for local vehicle
      inline const Participant&
      self(void)
      {
        return m_participants[m_fidx];
      }

      //! Get index of local vehicle in formation.
      //! @return formation index.
      inline int
      formation_index(void) const
      {
        return m_fidx;
      }

      //! Get index of given IMC address in formation.
      //! @return formation index.
      inline int
      formation_index(int addr) const
      {
        std::map<int, int>::const_iterator itr = m_addr2idx.find(addr);

        if (itr == m_addr2idx.end())
          return 0xFFFF;

        return itr->second;
      }

      //! Get control step period.
      //! @return control step period.
      inline double
      controlPeriod(void) const
      {
        return m_cstep_period;
      }

      //! Check if maneuver is still in approach stage (i.e. moving to the initial point).
      //! @return true if maneuver is in approach state, false otherwise.
      inline bool
      isApproaching(void) const
      {
        return m_approach;
      }

      void
      desiredPath(const TPoint& start, const TPoint& end, double radius = -1);

      void
      desiredSpeed(double value, uint8_t speed_units);

      void
      toLocalCoordinates(double lat, double lon, double* x, double* y);

    private:
      std::vector<TPoint> m_traj; //!< Trajectory points.
      std::vector<Participant> m_participants; //!< Trajectory points.
      std::map<int, int> m_addr2idx;
      bool m_approach; //!< Approach stage flag.
      int m_fidx; //!< Formation index.
      double m_rlat; // Reference latitude set.
      double m_rlon; // Reference longitude set.
      double m_cstep_period; //! control step period
      double m_cstep_time; //! time of last control step
      IMC::DesiredPath m_path;
      IMC::DesiredZ m_depth;

      bool
      initParticipants(const IMC::VehicleFormation*);

      bool
      initTrajectory(const IMC::VehicleFormation*);
    };
  }
}

#endif
