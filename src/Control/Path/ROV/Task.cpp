//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luis Venancio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "DistanceTracking.hpp"

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace ROV
    {
      enum Limits
      {
        LM_MIN_X,
        LM_MAX_X,
        LM_MIN_Y,
        LM_MAX_Y
      };
      
      struct Arguments
      {
        //! Heading ROV should maintain
        double fixed_heading;
        //! Heading test mode
        bool direct_heading;
        //! Vehicle max speed in x, y directions.
        //! Specified as: x_min_mps x_max_mps y_min_mps y_max_mps
        std::vector<double> speed_limits;
        //! Wall traking active
        bool wallt_active;
        //! Label for multibeam distance 
        std::string mb_dist_label;
        //! Label for multibeam angle 
        std::string mb_angle_label;
        //! Maximum wall distance threshold;
        double max_wall_dist;
        //! Moving average window size for distance to wall
        unsigned wdist_mav_size;
        //! Moving average window size for angle to wall
        unsigned wangle_mav_size;
        //! Distance tracking algorithm arguments
        DTArguments dt;
        //! Desired wall distance
        double wall_dist;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Angle to quadrant corner
        double m_quadrant_limits[4];
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Outgoing desired velocity message.
        IMC::DesiredVelocity m_velocity;
        //! Incoming desired speed message.
        IMC::DesiredSpeed m_speed;
        //! Task arguments.
        Arguments m_args;
        //! Wall distance entity
        unsigned m_wdist_ent;
        //! Wall angle entity
        unsigned m_wangle_ent;
        //! Moving average for the distance to wall
        MovingAverage<float>* m_wdist_mav;
        //! Moving average for the angle to wall
        MovingAverage<float>* m_wangle_mav;
        //! Filtered distance to wall
        float m_filt_wdist;
        //! Filtered angle to wall
        float m_filt_wangle;
        //! In wall range
        bool m_in_range;
        //! Distance tracking algorithm
        DistanceTracking* m_dt;
        //! Distance command output (desired velocity)
        float m_wt_cmd;
        //! Filtered distance to wall
        IMC::Distance m_filt_dist_msg;
        //! Estimated state
        IMC::EstimatedState m_estate;
        float m_desired_wall_angle;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          m_filt_wdist(0),
          m_filt_wangle(0),
          m_in_range(true)
        {
          param("Fixed Heading", m_args.fixed_heading)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .minimumValue("0.0")
          .maximumValue("360.0")
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Fixed angle ROV should look at.");

          param("Direct Heading", m_args.direct_heading)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("false")
          .description("Heading is aligned with course. Ignores fixed heading.");

          param("Speed Limits", m_args.speed_limits)
          .units(Units::MeterPerSecond)
          .size(4)
          .defaultValue("")
          .description("Limit velocity vector inside 2D range."
                       "Defined as: x_min, x_max, y_min, y_max."
                       "Default is empty (no trimming).");

          param("Wall Tracking -- Active", m_args.wallt_active)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("false")
          .description("Wall tracking active");

          param("Entity Label - Multibeam Distance", m_args.mb_dist_label)
          .defaultValue("Oculus Distance")
          .description("Entity label of \'Distance\' messages triggered by "
                      "the multibeam");
          
          param("Entity Label - Multibeam Angle", m_args.mb_angle_label)
          .defaultValue("Oculus Angle")
          .description("Entity label of \'Angle\' messages triggered by "
                      "the multibeam");

          param("Wall Tracking -- Wall Distance Threshold", m_args.max_wall_dist)
          .defaultValue("5")
          .description("Wall distance threshold");

          param("Wall Tracking -- Average Distance Window", m_args.wdist_mav_size)
          .defaultValue("3")
          .description("Wall distance moving average window size");

          param("Wall Tracking -- Average Angle Window", m_args.wangle_mav_size)
          .defaultValue("5")
          .description("Wall angle moving average window size");

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

          param("Wall Tracking -- Desired Wall Distance", m_args.wall_dist)
          .defaultValue("2.0")
          .units(Units::Meter)
          .description("Desired distance to wall during maneuver");

          
          // Bind IMC messages
          bind<IMC::Distance>(this);
          bind<IMC::EulerAngles>(this);
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.fixed_heading))
            m_args.fixed_heading = Angles::normalizeRadian(Angles::radians(m_args.fixed_heading));

          if (paramChanged(m_args.speed_limits))
          {
            m_quadrant_limits[0] = atan2(m_args.speed_limits[LM_MAX_Y], m_args.speed_limits[LM_MAX_X]);
            m_quadrant_limits[1] = atan2(m_args.speed_limits[LM_MAX_Y], m_args.speed_limits[LM_MIN_X]);
            m_quadrant_limits[2] = atan2(m_args.speed_limits[LM_MIN_Y], m_args.speed_limits[LM_MIN_X]);
            m_quadrant_limits[3] = atan2(m_args.speed_limits[LM_MIN_Y], m_args.speed_limits[LM_MAX_X]);
          }

          // Wall Tracking
          if (paramChanged(m_args.wallt_active))
          {
            if (m_args.wallt_active)
              activateWallTracking();
            else
              deactivateWallTracking();
          }

          if (paramChanged(m_args.wall_dist) && m_dt)
            m_dt->setDesiredDistance(m_args.wall_dist);
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();

          m_filt_dist_msg.setSourceEntity(reserveEntity(String::str("%s - Filtered Wall Distance", getEntityLabel())));
        }

        void
        onEntityResolution(void)
        {
          m_wdist_ent = resolveEntity(m_args.mb_dist_label);
          m_wangle_ent = resolveEntity(m_args.mb_angle_label);
        }

        void
        onResourceAcquisition(void)
        {
          m_wdist_mav = new MovingAverage<float>(m_args.wdist_mav_size);
          m_wangle_mav = new MovingAverage<float>(m_args.wangle_mav_size);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_wdist_mav);
          Memory::clear(m_wangle_mav);
          Memory::clear(m_dt);
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          PathController::consume(msg);

          m_speed = *msg;
        }

        void
        consume(const IMC::Distance* msg)
        {
          if (msg->getSourceEntity() != m_wdist_ent)
            return;

          if (msg->value > m_args.max_wall_dist)
          {
            m_in_range = false;
            return;
          }

          m_in_range = true;
          m_filt_wdist = m_wdist_mav->update(msg->value);

          // Debug
          m_filt_dist_msg.value = m_filt_wdist;
          dispatch(m_filt_dist_msg);

          if (m_args.wallt_active && m_dt)
            m_wt_cmd = m_dt->update(m_filt_wdist);
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          if (msg->getSourceEntity() != m_wangle_ent)
            return;

          if (!m_in_range)
            return;

          m_filt_wangle = m_wangle_mav->update(msg->psi);
          m_desired_wall_angle = Angles::normalizeRadian(m_estate.psi - m_filt_wangle);
        }

        void
        activateWallTracking()
        {
          Memory::clear(m_dt);
          m_dt = new DistanceTracking(&m_args.dt);
          m_dt->setDesiredDistance(m_args.wall_dist);
        }

        void
        deactivateWallTracking()
        {
          Memory::clear(m_dt);
        }

        void
        onPathActivation(void)
        {
          // Activate heading cotroller.
          enableControlLoops(IMC::CL_YAW);
          // Activate velocity cotroller.
          enableControlLoops(IMC::CL_VELOCITY);
        }

        //! Flagging method indicating if controller wishes to handle
        //! speed/velocity control. If not (the default) speed
        //! reference will be fired at the start of a path.
        //! @return false (at the base class level)
        bool
        hasSpecificSpeedControl(void) const
        {
          return false;
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Save estimated state
          m_estate = state;

          // Heading
          if (m_args.wallt_active)
            m_heading.value = m_desired_wall_angle;
          else if (m_args.direct_heading) // Direct heading aligns with end point 
            m_heading.value = Angles::normalizeRadian(ts.los_angle);
          else                            // Fixed heading reference
            m_heading.value = m_args.fixed_heading;
          
          // Velocity controller
          m_velocity = getVelocity(state.psi, ts.los_angle);
          
          if (m_args.wallt_active)
            m_velocity.u = m_wt_cmd;

          // Dispatch references
          dispatch(m_heading);
          dispatch(m_velocity);
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          (void)state;
          (void)ts;
          
          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(m_args.fixed_heading);
          dispatch(m_heading);
        }

        IMC::DesiredVelocity
        getVelocity(const double heading, const double los_angle)
        {
          // Initialized desired velocity with no flags
          IMC::DesiredVelocity dvel;

          // Check for valid speed reference
          if (m_speed.value > 0)
          {
            // Unit convertion to mps
            double mps_speed = 0;
            switch (m_speed.speed_units)
            {
              case IMC::SUNITS_PERCENTAGE:
                mps_speed = (m_speed.value / 100.0);
                break;
              case IMC::SUNITS_METERS_PS:
                mps_speed = m_speed.value;
                break;
              // case IMC::SUNITS_RPM:
              //   thrust_com = rpmToThrust(rpm, m_desired_speed, tstep);
              //   m_previous_rpm = m_desired_speed;
              default:
                break;
            }

            // Get velocity components in earth fixed frame
            TrackingState::Coord vel = {0, 0, 0};
            displace(vel, los_angle, mps_speed);

            // Convertion to body fixed frame
            Angles::rotate(heading, true, vel.x, vel.y);

            // Trim for max thruster speed
            trim2D(vel.x, vel.y);

            dvel.flags = IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY;
            dvel.u = vel.x;
            dvel.v = vel.y;

            return dvel;
          }

          return dvel;
        }

        double
        getEta(const TrackingState& ts) override
        {
          double h_eta = PathController::getEta(ts);

          const float errz = std::abs(ts.track_pos.z);
          double v_eta = errz / ts.vertical_speed;
          v_eta = std::min(65535.0, v_eta - getTimeFactor());

          return std::max(h_eta, v_eta);
        }

        //! Trims a vector inside a 2D box defined by x,y limits.
        //! Think of a 2D vector trapped inside a box defined by your limits.
        //! If the vector exceeds the limits its components are trimmed to
        //! fit the box while keeping the same direction.
        void
        trim2D(double &x, double &y)
        {
          if (m_args.speed_limits.empty())
            return;

          double course = atan2(y, x);
          if (m_quadrant_limits[0] <= course && course < m_quadrant_limits[1])
          {
            if (y <= m_args.speed_limits[LM_MAX_Y])
              return;

            y = m_args.speed_limits[LM_MAX_Y];
            x = y / tan(course);
          }
          else if (m_quadrant_limits[1] <= course && course < m_quadrant_limits[2])
          {
            if (x >= m_args.speed_limits[LM_MIN_X])
              return;
              
            x = m_args.speed_limits[LM_MIN_X];
            y = x * tan(course);
          }
          else if (m_quadrant_limits[2] <= course && course < m_quadrant_limits[3])
          {
            if (y >= m_args.speed_limits[LM_MIN_Y])
              return;
              
            y = m_args.speed_limits[LM_MIN_Y];
            x = y / tan(course);
          }
          else
          {
            if (x <= m_args.speed_limits[LM_MAX_X])
              return;
              
            x = m_args.speed_limits[LM_MAX_X];
            y = x * tan(course);
          }
        }
      };
    }
  }
}

DUNE_TASK
