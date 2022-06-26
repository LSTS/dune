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
        bool heading_test;
        //! Vehicle max speed in x, y directions.
        //! Specified as: x_min_mps x_max_mps y_min_mps y_max_mps
        std::vector<double> speed_limits;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Angle to quadrant corner
        double m_quadrant_limits[4];
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Outgoing desired velocity message.
        IMC::DesiredVelocity m_velocity;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Fixed Heading", m_args.fixed_heading)
          .minimumValue("0.0")
          .maximumValue("360.0")
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Fixed angle ROV should look at.");

          param("Heading Test", m_args.heading_test)
          .defaultValue("false")
          .description("Lock surge and sway to 0.0.");

          param("Speed Limits", m_args.speed_limits)
          .units(Units::MeterPerSecond)
          .size(4)
          .defaultValue("")
          .description("Limit velocity vector inside 2D range."
                       "Defined as: x_min, x_max, y_min, y_max."
                       "Default is empty (no trimming).");
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.fixed_heading))
            m_args.fixed_heading = Angles::radians(m_args.fixed_heading);

          if (paramChanged(m_args.speed_limits))
          {
            m_quadrant_limits[0] = atan2(m_args.speed_limits[LM_MAX_Y], m_args.speed_limits[LM_MAX_X]);
            m_quadrant_limits[1] = atan2(m_args.speed_limits[LM_MAX_Y], m_args.speed_limits[LM_MIN_X]);
            m_quadrant_limits[2] = atan2(m_args.speed_limits[LM_MIN_Y], m_args.speed_limits[LM_MIN_X]);
            m_quadrant_limits[3] = atan2(m_args.speed_limits[LM_MIN_Y], m_args.speed_limits[LM_MAX_X]);
          }
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
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
          return true;
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Velocity controller.
          m_velocity = getVelocity(state.psi, ts.los_angle, ts.los_elevation);

          if (m_args.heading_test)
          {
            m_velocity.u = 0.0;
            m_velocity.v = 0.0;
          }

          // Dispatch velocity reference
          dispatch(m_velocity);

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(m_args.fixed_heading);
          dispatch(m_heading);
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(m_args.fixed_heading);
          dispatch(m_heading);
        }

        IMC::DesiredVelocity
        getVelocity(const double heading, const double los_angle, 
                       const double los_elevation)
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
            Matrix vel_xy = sphericalToCartesian(mps_speed, los_angle, los_elevation);

            // Convertion to body fixed frame 
            Angles::rotate(heading, true, vel_xy(0), vel_xy(1));

            // Trim for max thruster speed
            trim2D(vel_xy(0), vel_xy(1));

            dvel.flags = IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY;
            dvel.u = vel_xy(0);
            dvel.v = vel_xy(1);

            return dvel;
          }

          return dvel;
        }

        //! Trims a vector inside a 2D box defined by x,y limits.
        //! Think of a 2D vector trapped inside a box defined by your limits.
        //! If the vector exceeds the limits its components are trimmed to
        //! fit the box but also keep the same direction.
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
