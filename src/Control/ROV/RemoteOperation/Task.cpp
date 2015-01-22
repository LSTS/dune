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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "DistanceTracking.hpp"

namespace Control
{
  namespace ROV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      //! Default desired distance to wall
      static const float c_wall_dist = 1.0f;
      //! Wall tracking enabled debounce time
      static const float c_wt_debounce = 0.8f;

      struct Arguments
      {
        Matrix actuat;
        double max_speed;
        bool dh_control;
        bool heading_control;
        float depth_rate;
        int depth_deadzone;
        float heading_rate;
        float depth_inc;
        //! Distance tracking algorithm arguments
        DTArguments dt;
        //! Moving average window size for distance to wall
        unsigned wdist_mav_size;
        //! Desired distance to wall increments.
        float wdist_inc;
        //! Desired distance to wall bounds (lower and upper respectively)
        std::vector<float> wdist_bounds;
        //! Entity label of distance to wall
        std::string wdist_label;
        //! Entity label of desired distance to wall
        std::string wdist_des_label;
        //! Entity label of filtered distance to wall
        std::string filt_wdist_label;
        //! Maximum distance threshold;
        double max_dist;
      };

      struct Task: public DUNE::Control::BasicRemoteOperation
      {
        //! Thruster actuation vector.
        Matrix m_thruster;
        //! Vector of forces to apply.
        Matrix m_forces;
        //! Desired Velocity message.
        IMC::DesiredVelocity m_dvel;
        //! Starting depth
        float m_start_depth;
        //! Starting heading
        float m_start_heading;
        //! Current vehicle depth.
        float m_depth;
        //! Current heading or heading rate reference
        float m_h_ref;
        //! Flag is true if we have depth and heading data
        bool m_dh_data;
        //! Distance tracking algorithm
        DistanceTracking* m_dt;
        //! Desired distance to wall
        float m_wdist_desired;
        //! Wall tracking enabled
        bool m_wt_enabled;
        //! Wall tracking enabled counter
        Time::Counter<float> m_wt_counter;
        //! Moving average for the distance to wall
        MovingAverage<float>* m_wdist_mav;
        //! Distance to wall source entity
        unsigned m_wdist_ent;
        //! Filtered distance to wall source entity
        unsigned m_filt_wdist_ent;
        //! Desired distance to wall source entity
        unsigned m_wdist_des_ent;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicRemoteOperation(name, ctx),
          m_thruster(5, 1, 0.0),
          m_forces(6, 1, 0.0),
          m_dh_data(false),
          m_dt(NULL),
          m_wdist_desired(c_wall_dist),
          m_wdist_mav(NULL)
        {
          param("Actuation Inverse Matrix", m_args.actuat)
          .defaultValue("")
          .size(30)
          .description("Actuation Inverse Matrix");

          param("Maximum Speed Allowed", m_args.max_speed)
          .defaultValue("1.5")
          .units(Units::MeterPerSecond)
          .description("Maximum speed allowed for remote operation");

          param("Depth and Heading Control", m_args.dh_control)
          .defaultValue("false")
          .description("Turn on actively control of depth and heading");

          param("Heading Tracking", m_args.heading_control)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("false")
          .description("Control the heading angle instead of heading rate.");

          param("Depth Rate", m_args.depth_rate)
          .defaultValue("0.1")
          .units(Units::MeterPerSecond)
          .description("Rate of increase or decrease of depth with control enabled.");

          param("Depth Action Dead Zone", m_args.depth_deadzone)
          .defaultValue("20")
          .description("Remote action deadzone for the depth rate.");

          param("Heading Rate", m_args.heading_rate)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("1.0")
          .units(Units::DegreePerSecond)
          .description("Rate of increase or decrease of heading with control enabled.");

          param("Depth Increment", m_args.depth_inc)
          .defaultValue("0.2")
          .units(Units::Meter)
          .description("Increment in meters when using button for depth reference.");

          param("Wall Tracking -- Average Window", m_args.wdist_mav_size)
          .defaultValue("5")
          .description("Distance moving average window size");

          param("Wall Tracking -- Gains", m_args.dt.gains)
          .defaultValue("")
          .size(3)
          .description("Distance PID controller gains");

          param("Wall Tracking -- Maximum Speed", m_args.dt.max_speed)
          .defaultValue("0.5")
          .units(Units::MeterPerSecond)
          .description("Maximum speed output from PID");

          param("Wall Tracking -- Integral Limit", m_args.dt.int_limit)
          .defaultValue("0.2")
          .units(Units::MeterPerSecond)
          .description("PID Integral limit");

          param("Wall Tracking -- Absolute Maximum Error", m_args.dt.abs_max_dist)
          .defaultValue("1.0")
          .units(Units::Meter)
          .description("Absolute value of maximum error in distance");

          param("Wall Tracking -- Distance Increments", m_args.wdist_inc)
          .defaultValue("0.02")
          .units(Units::Meter)
          .description("Desired distance to wall increments.");

          param("Wall Tracking -- Distance Bounds", m_args.wdist_bounds)
          .defaultValue("0.0, 3.0")
          .size(2)
          .units(Units::Meter)
          .description("Desired distance to wall lower and upper bounds.");

          param("Entity Label - Wall Distance", m_args.wdist_label)
          .defaultValue("")
          .description("Entity label of distance to wall");

          param("Entity Label - Desired Wall Distance", m_args.wdist_des_label)
          .defaultValue("")
          .description("Entity label of desired distance to wall");

          param("Entity Label - Filtered Wall Distance", m_args.filt_wdist_label)
          .defaultValue("")
          .description("Entity label of the filtered distance to wall");

          param("Wall Tracking -- Distance Threshold", m_args.max_dist)
          .defaultValue("5")
          .description("Distance threshold");

          // Add remote actions.
          addActionAxis("Forward");
          addActionAxis("Starboard");
          addActionAxis("Up");
          addActionAxis("Rotate");
          addActionButton("Stop");
          addActionButton("Z+");
          addActionButton("Z-");
          addActionButton("WallTracker");

          bind<IMC::EstimatedState>(this);
          bind<IMC::Distance>(this);
        }

        void
        onEntityResolution(void)
        {
          m_wdist_ent = resolveEntity(m_args.wdist_label);
        }

        void
        onEntityReservation(void)
        {
          m_wdist_des_ent = reserveEntity(m_args.wdist_des_label);
          m_filt_wdist_ent = reserveEntity(m_args.filt_wdist_label);
        }

        void
        onResourceInitialization(void)
        {
          BasicRemoteOperation::onResourceInitialization();

          m_wt_counter.setTop(c_wt_debounce);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_wdist_mav);
          Memory::clear(m_dt);
        }

        void
        onResourceAcquisition(void)
        {
          m_wdist_mav = new MovingAverage<float>(m_args.wdist_mav_size);
        }

        void
        onActivation(void)
        {
          m_thruster.fill(0);

          if (m_args.dh_control)
          {
            enableControlLoops(IMC::CL_SPEED | IMC::CL_DEPTH | IMC::CL_YAW);
            m_depth = m_start_depth;

            if (m_args.heading_control)
              m_h_ref = m_start_heading;
          }
          else
          {
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW);
          }

          actuate();
        }

        void
        onDeactivation(void)
        {
          if (m_args.dh_control)
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW | IMC::CL_SPEED);

          m_thruster.fill(0);

          actuate();
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.heading_rate))
            m_args.heading_rate = Math::Angles::radians(m_args.heading_rate);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          m_dh_data = true;
          m_start_depth = msg->depth;
          m_start_heading = msg->psi;
        }

        void
        consume(const IMC::Distance* msg)
        {
          if (msg->getSourceEntity() != m_wdist_ent)
            return;

          if (msg->value > m_args.max_dist)
            return;

          IMC::Distance filt_msg = *msg;
          filt_msg.setSourceEntity(m_filt_wdist_ent);

          filt_msg.value = m_wdist_mav->update(msg->value);

          if (m_wt_enabled)
            m_forces(0, 0) = m_dt->update(filt_msg.value) / m_args.max_speed;
          else
            m_wdist_desired = filt_msg.value;

          dispatch(filt_msg);
        }

        void
        toggleWallTracker(void)
        {
          if (!m_wt_counter.overflow())
            return;

          m_wt_enabled = !m_wt_enabled;
          m_wt_counter.reset();

          if (m_wt_enabled)
          {
            Memory::clear(m_dt);
            m_dt = new DistanceTracking(&m_args.dt);
            m_dt->setDesiredDistance(m_wdist_desired);

            inf("wall tracker is on");
          }
          else
          {
            inf("wall tracker is off");
          }
        }

        void
        forwardControl(int value)
        {
          if (m_wt_enabled)
          {
            // forward button will mean decreasing distance to wall
            m_wdist_desired -= (float)(value / 127.0) * m_args.wdist_inc;

            m_wdist_desired = trimValue(m_wdist_desired, m_args.wdist_bounds[0], m_args.wdist_bounds[1]);

            IMC::Distance dist;
            dist.setSourceEntity(m_wdist_des_ent);
            dist.value = m_wdist_desired;
            dispatch(dist);

            m_dt->setDesiredDistance(m_wdist_desired);
          }
          else
          {
            m_forces(0, 0) = value / 127.0;   // X
          }
        }

        void
        rotateControl(int value)
        {
          if (m_args.heading_control)
          {
            m_h_ref += value / 127.0 * m_args.heading_rate;
            m_h_ref = Math::Angles::normalizeRadian(m_h_ref);
          }
          else
          {
            m_h_ref = value / 127.0 * m_args.heading_rate;
          }
        }

        void
        onRemoteActions(const IMC::RemoteActions* msg)
        {
          TupleList tuples(msg->actions);

          if (m_args.dh_control)
          {
            if (tuples.get("WallTracker", 0))
              toggleWallTracker();

            forwardControl(tuples.get("Forward", 0));

            m_forces(1, 0) = tuples.get("Starboard", 0) / 127.0; // Y

            int up = tuples.get("Up", 0);

            if (up > m_args.depth_deadzone || up < -m_args.depth_deadzone)
            {
              m_depth += up / 127.0 * m_args.depth_rate;
              m_depth = std::max(0.0f, m_depth);
            }

            int zed = tuples.get("Z+", 0) - 1 * tuples.get("Z-", 0);

            if (zed != 0)
            {
              m_depth += (float)zed * m_args.depth_inc;
              m_depth = std::max(0.0f, m_depth);
            }

            rotateControl(tuples.get("Rotate", 0));

            if (tuples.get("Stop", 0))
            {
              m_depth = m_start_depth;

              if (m_args.heading_control)
                m_h_ref = m_start_heading;
              else
                m_h_ref = 0.0;
            }
          }
          else
          {
            m_forces(0, 0) = tuples.get("Forward", 0) / 127.0;   // X
            m_forces(1, 0) = tuples.get("Starboard", 0) / 127.0; // Y
            m_forces(3, 0) = 0.0;                                // K
            m_forces(4, 0) = 0.0;                                // M
            m_forces(2, 0) = tuples.get("Up", 0) / 127.0;      // Z
            m_forces(5, 0) = tuples.get("Rotate", 0) / 127.0;    // N
          }
        }

        void
        onConnectionTimeout(void)
        {
          m_thruster.fill(0);

          if (m_args.dh_control)
          {
            disableControlLoops(IMC::CL_DEPTH | IMC::CL_YAW);
            m_depth = m_start_depth;

            if (m_args.heading_control)
              m_h_ref = m_start_heading;
            else
              m_h_ref = 0.0;
          }

          actuate();
        }

        void
        actuateThruster(unsigned i)
        {
          IMC::SetThrusterActuation sta;
          sta.id = i;
          sta.value = trimValue(m_thruster(i, 0), -1.0, 1.0);
          dispatch(sta);
        }

        void
        actuate(void)
        {
          if (m_args.dh_control && m_dh_data)
          {
            IMC::DesiredVelocity dvel;
            dvel.flags = IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY;
            dvel.u = m_args.max_speed * m_forces(0, 0);
            dvel.v = m_args.max_speed * m_forces(1, 0);
            dispatch(dvel);

            if (m_args.heading_control)
            {
              IMC::DesiredHeading d_heading;
              d_heading.value = m_h_ref;
              dispatch(d_heading);
            }
            else
            {
              IMC::DesiredHeadingRate d_hrate;
              d_hrate.value = m_h_ref;
              dispatch(d_hrate);
            }

            IMC::DesiredZ d_z;
            d_z.z_units = IMC::Z_DEPTH;
            d_z.value = m_depth;
            dispatch(d_z);
          }
          else
          {
            m_thruster = m_args.actuat * m_forces;

            for (int i = 0; i < 5; i++)
              actuateThruster(i);
          }
        }
      };
    }
  }
}

DUNE_TASK
