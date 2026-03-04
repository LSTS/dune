//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ASV
  {
    namespace Conventional
    {
      namespace Heading
      {
        using DUNE_NAMESPACES;

        struct Arguments
        {
          //! Maximum rudder actuation.
          float max_rudder;
          //! PID gains for yaw controller.
          std::vector<float> yaw_pid_gains;
          //! Log the size of each PID parcel
          bool log_parcels;
        };

        struct Task: public Tasks::Task
        {
          //! Task arguments.
          Arguments m_args;
          //! Yaw PID controller.
          DiscretePID m_yaw_pid;
          //! Control Parcels for yaw controller.
          IMC::ControlParcel m_yaw_cp;
          //! Desired rudder position/actuation.
          IMC::SetServoPosition m_rudder;
          //! Desired heading.
          float m_desired_heading;
          //! Time of last estimated state message.
          Delta m_delta;
          //! Control loops last reference.
          uint32_t m_scope_ref;
          //! Maximum rudder actuation.
          float m_max_rudder;

          Task(const std::string& name, Tasks::Context& ctx):
            Tasks::Task(name, ctx),
            m_desired_heading(0.0f),
            m_scope_ref(0)
          {
            param("Maximum Rudder Actuation", m_args.max_rudder)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("180.0")
            .units(Units::Degree)
            .description("Maximum rudder actuation.");

            param("Yaw PID Gains", m_args.yaw_pid_gains)
            .size(3)
            .description("PID gains for Yaw Controller");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("false")
            .description("Log the size of each PID parcel");

            m_rudder.id = 0;
            m_rudder.value = 0.0f;

            bind<IMC::EstimatedState>(this);
            bind<IMC::DesiredHeading>(this);
            bind<IMC::ControlLoops>(this);
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.max_rudder))
              m_max_rudder = Angles::radians(m_args.max_rudder);

            if (paramChanged(m_args.yaw_pid_gains))
            {
              setup(m_args.yaw_pid_gains);

              if (isActive())
                m_yaw_pid.reset();
            }

            if (paramChanged(m_args.log_parcels))
            {
              if (m_args.log_parcels)
                m_yaw_pid.enableParcels(this, &m_yaw_cp);
              else
                m_yaw_pid.disableParcels();
            }
          }

          void
          onEntityReservation(void)
          {
            std::string yaw_cp_elabel = getEntityLabel();
            yaw_cp_elabel += " - Yaw Parcel";
            m_yaw_cp.setSourceEntity(reserveEntity(yaw_cp_elabel));
          }

          void
          reset(void)
          {
            m_yaw_pid.reset();
            m_desired_heading = 0.0f;
            m_rudder.value = 0.0;
            dispatch(m_rudder);
          }

          void
          setup(const std::vector<float>& gains)
          {
            m_yaw_pid.setGains(gains);
            m_yaw_pid.setOutputLimits(-m_max_rudder, m_max_rudder);
            m_yaw_pid.setIntegralLimits(m_max_rudder);
          }

          void
          onResourceInitialization(void)
          {
            stop();
          }

          void
          consume(const IMC::EstimatedState* msg)
          {
            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            float tstep = m_delta.getDelta();

            if (tstep < 0.0)
              return;

            float heading_diff = Angles::normalizeRadian(m_desired_heading - msg->psi);
            float rudder_cmd = -m_yaw_pid.step(tstep, heading_diff, 0);
            m_rudder.value = trimValue(rudder_cmd, -m_max_rudder, m_max_rudder);
            dispatch(m_rudder);
          }

          void
          consume(const IMC::DesiredHeading* msg)
          {
            if (!isActive())
              return;

            m_desired_heading = msg->value;
          }

          void
          consume(const IMC::ControlLoops* msg)
          {
            if (!(msg->mask & IMC::CL_YAW))
              return;

            if (msg->scope_ref < m_scope_ref)
              return;

            m_scope_ref = msg->scope_ref;
            switch (msg->enable)
            {
            case ControlLoops::CL_ENABLE:
              if (!isActive())
                start();

              break;

            case ControlLoops::CL_DISABLE:
              if (isActive())
                stop();

              break;

            default:
              return;
            }
          }

          void
          start(void)
          {
            reset();
            requestActivation();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          void
          stop(void)
          {
            reset();
            requestDeactivation();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          void
          onMain(void)
          {
            while (!stopping())
            {
              waitForMessages(1.0);
            }
          }
        };
      }
    }
  }
}

DUNE_TASK
