//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author:                                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FormationCP
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {

    };

    struct Task: public DUNE::Maneuvers::VehicleFormation
    {
      //! last state update
      IMC::EstimatedState m_estate;
      //! Circular Buffer fixed size
      static const int c_queue_size = 20;
      //! Starting time reference
      double m_zero_time;
      //! Number of current waypoint number
      int m_curr;
      //! Last actuation value sent to bus
      double m_last_actuation;
      //! Trajectory's bias computed by the controller
      Matrix m_delta;
      //! Previously assigned waypoint
      TPoint m_prev;
      //! Circular buffer used to save last few estimated states every second
      Utils::CircularBuffer<IMC::EstimatedState> m_queue;
      //! Formation error
      Matrix m_errf;
      //! Debug variables and text files
      //! generic debug output file
      std::ofstream m_dbg;
      //! original waypoints in trajectory for vehicle A (present vehicle)
      std::ofstream m_dbg_owa;
      //! original waypoints in trajectory for vehicle B (neighbor vehicle)
      std::ofstream m_dbg_owb;
      //! produced waypoints (and sent to vehicle) using delta gaps
      std::ofstream m_dbg_pw;
      //! position of the present vehicle at remote timestamp
      std::ofstream m_dbg_pa_ts;
      //! position of the neighbor vehicle at remote timestamp
      std::ofstream m_dbg_pb_ts;
      //! deltas produced using remote states
      std::ofstream m_dbg_deltas;
      //! formation errors yielded using interpolation
      std::ofstream m_dbg_ferror;
      //! present vehicle's position at onPathCompletion time
      std::ofstream m_dbg_pa;
      //! Time at which the debug data was saved
      double m_debug_time;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, DUNE::Tasks::Context& ctx):
        VehicleFormation(name, ctx)
      {
      }

      void
      onUpdateParameters(void)
      {
        VehicleFormation::onUpdateParameters();
      }

      //! Close matlab logged vectors
      void
      onReset(void)
      {
      }

      void
      onInit(const IMC::VehicleFormation* maneuver)
      {
        (void)maneuver;
      }

      void
      onUpdate(int f_index, const IMC::RemoteState& rstate)
      {
        (void)f_index;
      }

      void
      step(const IMC::EstimatedState& estate)
      {
        m_estate = estate;
        // PROCESS OWN STATE
      }

      void
      onRemoteState(const IMC::EstimatedState* msg)
      {
        (void) msg;
        // PROCESS REMOTE STATE
      }

      void
      onPathControlState(const IMC::PathControlState* msg)
      {
        VehicleFormation::onPathControlState(msg);

        // PROCESS pc STATE
      }


      void
      onPathCompletion(void)
      {
        TPoint next;

        // If it is the first time the function on Path Completion is being called
        if (m_curr == 0)
        {
          m_prev.x = m_estate.x;
          m_prev.y = m_estate.y;
          m_prev.z = m_estate.depth;
          m_prev.t = 0.0;
          m_zero_time = Clock::get();
        }

        // if the current waypoint is the last, then all is done
        if ((size_t)m_curr == trajectory_points())
        {
          signalCompletion(); // All done
          return; // All done
        }

        // the trajectory given to the present vehicle will always be the original one
        // offset by a certain amount m_delta, updated when a new message is received
        // next.x = point(m_curr,formation_index()).x + m_delta(0);
        // next.y = point(m_curr,formation_index()).y + m_delta(1);
        next.x = point(m_curr, formation_index()).x;
        next.y = point(m_curr, formation_index()).y;
        next.z = point(m_curr, formation_index()).z;

        // note that the desired speed chosen considers the distance between the
        // prev and next waypoints, and not the one between the
        // present position and the next waypoint
        double value = Math::norm((m_prev.x - next.x), (m_prev.y - next.y)) / (next.t - (Clock::get() - m_zero_time));


        // throw a leg of TPoints to be followed by the vehicle
        desiredPath(m_prev, next);

        ++m_curr;
        m_prev = next;
      } // End of function onPathCompletion

      //! Function for finding values of x and y through linear interpolation
      Matrix
      findXY(IMC::EstimatedState a, IMC::EstimatedState b, double t)
      {
        double xa_ts = linearInterpolation(LinIntParam<double>(a.x,
                                                               b.x,
                                                               a.getTimeStamp(),
                                                               b.getTimeStamp(),
                                                               t));
        double ya_ts = linearInterpolation(LinIntParam<double>(a.y,
                                                               b.y,
                                                               a.getTimeStamp(),
                                                               b.getTimeStamp(),
                                                               t));
        double pa_ts[2] = {xa_ts, ya_ts};

        return Matrix(pa_ts, 2, 1);
      }

      //! Function to convert meters per second to actuation using a linearized relation
      //! between the two
      double
      toActuation(double desired_mps, double max_mps, double max_act, double min_mps, double min_act)
      {
        return (desired_mps - min_mps) * (max_act - min_act) / (max_mps - min_mps) + min_act;
      }
    };

  }
}

DUNE_TASK
