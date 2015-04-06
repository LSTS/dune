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

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace SMC
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        bool mps_control;
        double kf;
        double kt;
        bool debug;
        double max_speed_mps;
        double min_speed_mps;
        double max_actuation;
        double min_actuation;
        double act_step;
        std::vector<double> bounds;
        std::vector<double> errf_bounds;
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
          VehicleFormation(name, ctx),
          m_delta(2, 1),
          m_queue(c_queue_size),
          m_errf(2, 1)
        {
          param("Formation Gain (kf)", m_args.kf)
          .defaultValue("0.1")
          .description("");

          param("Trajectory Gain (kt)", m_args.kt)
          .defaultValue("0.6")
          .description("");

          param("Debug", m_args.debug)
          .defaultValue("false")
          .description("Enable or disable debug");

          param("MPS Control", m_args.mps_control)
          .defaultValue("false")
          .description("Enable or disable meter per second control");

          param("Max Speed MPS", m_args.max_speed_mps)
          .defaultValue("2.0")
          .units(Units::MeterPerSecond)
          .description("Maximum speed in meters per second");

          param("Min Speed MPS", m_args.min_speed_mps)
          .defaultValue("1.0")
          .units(Units::MeterPerSecond)
          .description("Minimum speed in meters per second");

          param("Max Actuation", m_args.max_actuation)
          .defaultValue("100")
          .description("Maximum actuation");

          param("Min Actuation", m_args.min_actuation)
          .defaultValue("50")
          .description("Minimum actuation");

          param("Max Step Actuation", m_args.act_step)
          .defaultValue("5")
          .description("Maximum step in actuation per command");

          param("Delta Bounds", m_args.bounds)
          .defaultValue("")
          .description("Bounds on the trajectory tracking");

          param("Formation Error Bounds", m_args.errf_bounds)
          .defaultValue("")
          .description("");
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
          if (m_args.debug)
          {
            m_dbg << std::endl << "Full Queue: " << std::endl;
            for (unsigned int i = 0; i < m_queue.getSize(); i++)
              m_dbg << m_queue(i).x << " " << m_queue(i).y << " " << m_queue(i).getTimeStamp() - m_debug_time << std::endl;

            m_dbg_owa << "];" << std::endl;
            m_dbg_owb << "];" << std::endl;
            m_dbg_pw << "];" << std::endl;
            m_dbg_pa_ts << "];" << std::endl;
            m_dbg_pb_ts << "];" << std::endl;
            m_dbg_deltas << "];" << std::endl;
            m_dbg_ferror << "];" << std::endl;
            m_dbg_pa << "];" << std::endl;
            m_dbg_owa.close();
            m_dbg_owb.close();
            m_dbg_pw.close();
            m_dbg_pa_ts.close();
            m_dbg_pb_ts.close();
            m_dbg_deltas.close();
            m_dbg_ferror.close();
            m_dbg_pa.close();
          }
        }

        void
        onInit(const IMC::VehicleFormation* maneuver)
        {
          (void)maneuver;

          size_t n = trajectory_points();

          if (m_args.debug)
          {
            // Creates file names with formation index
            m_dbg.open(String::str("fsmc%d.txt", formation_index()).c_str());
            m_dbg_owa.open(String::str("OWA_log%d.m", formation_index()).c_str());
            m_dbg_owb.open(String::str("OWB_log%d.m", formation_index()).c_str());
            m_dbg_pw.open(String::str("PW_log%d.m", formation_index()).c_str());
            m_dbg_pa_ts.open(String::str("PA_ts_log%d.m", formation_index()).c_str());
            m_dbg_pb_ts.open(String::str("PB_ts_log%d.m", formation_index()).c_str());
            m_dbg_deltas.open(String::str("Deltas_log%d.m", formation_index()).c_str());
            m_dbg_ferror.open(String::str("Ferror_log%d.m", formation_index()).c_str());
            m_dbg_pa.open(String::str("PA_log%d.m", formation_index()).c_str());

            m_dbg << "Delta Bounds: " << std::endl << m_args.bounds[0] << " " << m_args.bounds[1] << std::endl;
            m_dbg << "Formation Error Bounds: " << std::endl << m_args.errf_bounds[0] << " " << m_args.errf_bounds[1] << std::endl;
            m_dbg << "kf = " << m_args.kf << std::endl;
            m_dbg << "kt = " << m_args.kt << std::endl;
            m_dbg_owa << "OWA = [" << std::endl;
            m_dbg_owb << "OWB = [" << std::endl;
            m_dbg_pw << "PW = [" << std::endl;
            m_dbg_pa_ts << "PA_ts = [" << std::endl;
            m_dbg_pb_ts << "PB_ts = [" << std::endl;
            m_dbg_deltas << "Deltas = [" << std::endl;
            m_dbg_ferror << "Ferror = [" << std::endl;
            m_dbg_pa << "PA = [" << std::endl;
          }

          // Log present and neighbor vehicle trajectories

          for (size_t i = 0; i < n; i++)
          {
            if (m_args.debug)
            {
              m_debug_time = Clock::get();
              m_dbg << "Point " << i << " : " << point(i, formation_index()).x << " " << point(i, formation_index()).y << std::endl;
              m_dbg_owa << point(i, formation_index()).x << " " << point(i, formation_index()).y << " " << point(i, formation_index()).z << " " << point(i, formation_index()).t << ";" << std::endl;
              m_dbg_owb << point(i, std::abs(formation_index() - 1)).x << " " << point(i, std::abs(formation_index() - 1)).y << " " << point(i, std::abs(formation_index() - 1)).z << " " << point(i, std::abs(formation_index() - 1)).t << ";" << std::endl;
            }
          }

          m_delta(0) = 0; // Initiate Delta as zero (otherwise seg fault!)
          m_delta(1) = 0;
          m_errf(0) = 0;
          m_errf(1) = 0;

          m_prev = point(0, formation_index()); //Initiate m_prev as first waypoint

          m_last_actuation = 0;

          // Initiate waypoint counter at zero
          m_curr = 0;
        }

        void
        onUpdate(int f_index, const IMC::RemoteState& rstate)
        {
          // does not make sense to use f_index since this maneuver assumes that
          // only two vehicles are involved
          (void)f_index;

          // these matrices will hold the x,y positions of both vehicles at rtimestamp
          Matrix Mpa_ts(2, 1);
          Matrix Mpb_ts(2, 1);

          double rtimestamp = rstate.getTimeStamp();
          double now = Clock::getSinceEpoch();

          toLocalCoordinates(rstate.lat, rstate.lon, &Mpb_ts(0), &Mpb_ts(1));

          if (m_args.debug)
          {
            m_dbg_pb_ts << Mpb_ts(0) << " " << Mpb_ts(1) << " " << rtimestamp - m_debug_time << ";" << std::endl;
          }

          unsigned int diff_s = (unsigned int)std::abs(DUNE::Math::round(now - rtimestamp));
          int index = m_queue.getSize() - 1;

          if (diff_s > m_queue.getSize() || now - rtimestamp < 0) // if timestamp of received message is too old, or larger than current time in this vehicle, then generate leg with original trajectory
          {
            m_delta = Matrix(2, 1, 0.0);
            return;
          }
          else // if the timestamp is within the range covered by m_queue, then find closest index
          {
            double mingap = m_queue(m_queue.getSize() - 1).getTimeStamp() - rtimestamp;
            if (mingap < 0) // then it's between now and latest tstamp in queue
              index = -1;
            else
            {
              // cycle through the saved estimated states to find the minimum gap in time to
              // interpolate later
              for (int i = m_queue.getSize() - 2; i >= 0; i--)
              {
                // if we're comparing with values older than rtimestamp, stop cycling
                if (m_queue(i).getTimeStamp() - rtimestamp < 0)
                  break;
                // if shorter than the value we saved in previous loop, then update mingap
                if (m_queue(i).getTimeStamp() - rtimestamp < mingap)
                {
                  mingap = m_queue(i).getTimeStamp() - rtimestamp;
                  index = i;
                }
              }
            } // end mingap < 0

            // if saved index is the final queue's position
            if (!index)
            {
              double pa_ts[2] = {m_queue(index).x, m_queue(index).y};
              Mpa_ts = Matrix(pa_ts, 2, 1);
            }
            else if (index == -1) // then interpolate between current and latest position saved in queue
            {
              Mpa_ts = findXY(m_queue(m_queue.getSize() - 1), m_estate, rtimestamp);         // Finds x and y for t = rtimestamp
            }
            else // interpolate between index and index-1
            {
              if (m_args.debug)
              {
                m_dbg << "Mingap is " << mingap << " in index " << index << std::endl;
                m_dbg << "Interpolating in x between " << m_queue(index - 1).x << " and " << m_queue(index).x << std::endl;
                m_dbg << "Interpolating in y between " << m_queue(index - 1).y << " and " << m_queue(index).y << std::endl;
                m_dbg << "Interpolating in time between " << m_queue(index - 1).getTimeStamp() - m_debug_time << " and " << m_queue(index).getTimeStamp() - m_debug_time << std::endl;
              }

              // Finds x and y for t = rtimestamp
              Mpa_ts = findXY(m_queue(index - 1), m_queue(index), rtimestamp);
            }

            // Search trajectory vector for the closest visited waypoint
            // this enables us to compute the formation error later on
            double dist = Math::norm((point(m_curr, formation_index()).x - Mpa_ts(0)), (point(m_curr, formation_index()).y - Mpa_ts(1)));
            index = m_curr;
            for (int it = m_curr - 1; it >= 0; it--) // start in current waypoint and move down
            {
              double curr_dist = Math::norm((point(it, formation_index()).x - Mpa_ts(0)), (point(it, formation_index()).y - Mpa_ts(1)));
              if (dist > curr_dist)
              {
                dist = curr_dist;
                index = it;
              }
            }

            if (m_args.debug)
            {
              m_dbg << "At t=" << rtimestamp - m_debug_time << " AUV was at " << Mpa_ts(0) << " " << Mpa_ts(1) << std::endl;
              m_dbg_pa_ts << Mpa_ts(0) << " " << Mpa_ts(1) << ";" << std::endl;
            }

            double errorf[2] =
            {
              point(index, formation_index()).x - Mpa_ts(0) + Mpb_ts(0) - point(index, std::abs(formation_index() - 1)).x,
              point(index, formation_index()).y - Mpa_ts(1) + Mpb_ts(1) - point(index, std::abs(formation_index() - 1)).y
            };
            m_errf = Matrix(errorf, 2, 1);

            // Saturate Formation Error to avoid extremely large Deltas
            for (int id = 0; id < m_errf.rows(); id++)
              m_errf(id) = trimValue(m_errf(id), -m_args.errf_bounds[id], m_args.errf_bounds[id]);

            // finally update delta to be used on the function onPathCompletion()
            // m_delta += m_args.kf * (m_errf) - m_args.kt * m_delta;
            double traj_angle = std::atan2(point(trajectory_points() - 1, formation_index()).y - point(trajectory_points() - 2, formation_index()).y, point(trajectory_points() - 1, formation_index()).x - point(trajectory_points() - 2, formation_index()).x);
            if ((size_t)index + 1 < trajectory_points())
              traj_angle = std::atan2(point(index + 1, formation_index()).y - point(index, formation_index()).y, point(index + 1, formation_index()).x - point(index, formation_index()).x);

            m_delta(0) = m_errf(0) * std::cos(traj_angle) + m_errf(1) * std::sin(traj_angle);
            m_delta(1) = 0;

            // Saturate deltas to avoid insane deviation from original trajectory
            for (int id = 0; id < m_delta.rows(); id++)
              m_delta(id) = trimValue(m_delta(id), -m_args.bounds[id], m_args.bounds[id]);

            return;
          }
        }

        void
        step(const IMC::EstimatedState& estate)
        {
          // save Estimated States into queue everytime formation_control runs
          // ... queue is assumed to be a collection of Estimated States of the present vehicle with 1.0 sec step between timestamps

          if (!m_queue.getSize()) // also means that it is the first time this function was called
          {
            m_queue.add(estate);
          }
          // this statement compares the received estimated_state with the last one saved in the queue
          else if (estate.getTimeStamp() - m_queue(m_queue.getSize() - 1).getTimeStamp() >= 1.0)
          {
            m_queue.add(estate);
          }

          m_estate = estate;
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
            if (m_args.mps_control)
              desiredSpeed(0.0, IMC::SUNITS_METERS_PS);
            else
              desiredSpeed(0.0, IMC::SUNITS_PERCENTAGE);

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
          next.t = point(m_curr, formation_index()).t - m_args.kf* m_delta(0);
          m_delta(0) = m_args.kt * m_delta(0);

          if (m_args.debug)
          {
            m_dbg_pa << m_estate.x << " " << m_estate.y << std::endl;
            m_dbg_pw << next.x << " " << next.y << " " << next.z << " " << next.t << ";" << std::endl;
            m_dbg << std::endl << "Waypoint number " << m_curr << std::endl;
            m_dbg << "FSMC gave the waypoint: " << next.x << " " << next.y << " " << next.z << " " << next.t << std::endl;
            m_dbg << "Original waypoint: " << point(m_curr, formation_index()).x << " " << point(m_curr, formation_index()).y << " " << point(m_curr, formation_index()).z << " " << point(m_curr, formation_index()).t << std::endl;
            m_dbg << "Current position: " << m_estate.x << " " << m_estate.y << " " << m_estate.z << std::endl;
            m_dbg_deltas << m_delta(0) << " " << m_delta(1) << ";" << std::endl;
            m_dbg_ferror << m_errf(0) << " " << m_errf(1) << ";" << std::endl;
          }

          // note that the desired speed chosen considers the distance between the
          // prev and next waypoints, and not the one between the
          // present position and the next waypoint
          double value = Math::norm((m_prev.x - next.x), (m_prev.y - next.y)) / (next.t - (Clock::get() - m_zero_time));

          // saturate speed value according to the delay
          if (value >= m_args.max_speed_mps)
            value = m_args.max_speed_mps;
          else if (value <= m_args.min_speed_mps && value >= 0.0)
            value = m_args.min_speed_mps;
          else if (value < 0.0) // then the vehicle should already be past the 'next' waypoint! Order maximum speed!
            value = m_args.max_speed_mps;

          if (m_args.mps_control)
          {

            if (m_args.debug)
            {
              m_dbg << "Delay is " << (Clock::get() - m_zero_time) - m_prev.t << " seconds!" << std::endl;
              m_dbg << "The chosen desired speed is " << value << " meters per second!" << std::endl;
            }

            desiredSpeed(value, IMC::SUNITS_METERS_PS);
          }
          else // IF THERE IS NO METERS PER SECOND CONTROL ...
          {
            // The behavior of this function will be different if this is the first waypoint
            double actuation = linearInterpolation(LinIntParam<double>(m_args.min_actuation,
                                                                       m_args.max_actuation,
                                                                       m_args.min_speed_mps,
                                                                       m_args.max_speed_mps,
                                                                       value));

            // do not let the change in the actuation value exceed a certain step
            // unless it is teh very first waypoint, because the vehicle will be stopped
            if (m_curr != 0)
              actuation = trimValue(actuation, m_last_actuation - m_args.act_step, m_last_actuation + m_args.act_step);

            if (m_args.debug)
            {
              m_dbg << "Delay is " << (Clock::get() - m_zero_time) - m_prev.t << " seconds!" << std::endl;
              m_dbg << "The chosen desired actuation is " << actuation << " % !" << std::endl;
            }

            desiredSpeed(actuation, IMC::SUNITS_PERCENTAGE);
            m_last_actuation = actuation;
          }

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
}

DUNE_TASK
