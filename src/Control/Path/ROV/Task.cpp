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
      struct Arguments
      {
        double fixed_heading;
      };

      struct Task: public DUNE::Control::PathController
      {
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
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.fixed_heading))
            m_args.fixed_heading = Angles::radians(m_args.fixed_heading);
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
          // enableControlLoops(IMC::CL_VELOCITY);
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Velocity controller.
          // LOS pathing is used here
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

            // Fixed frame to body fixed velocity convertion
            TrackingState::Coord ff_vel;
            TrackingState::Coord origin = {0, 0, 0};
            Matrix bf_vel = sphericalToCartesian(mps_speed, ts.los_angle, ts.los_elevation);

            m_velocity.flags = IMC::DesiredVelocity::FL_SURGE | IMC::DesiredVelocity::FL_SWAY;
            m_velocity.u = bf_vel(0);
            m_velocity.v = bf_vel(1);
            // m_velocity.u = ff_vel.x * std::cos(state.psi) + ff_vel.y * std::sin(state.psi);
            // m_velocity.v = -ff_vel.x * std::sin(state.psi) + ff_vel.y * std::cos(state.psi);
          }
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
      };
    }
  }
}

DUNE_TASK
