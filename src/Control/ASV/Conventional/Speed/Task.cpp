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
      namespace Speed
      {
        using DUNE_NAMESPACES;

        struct Arguments
        {
          //! Maximum thruster actuation.
          float max_thruster;
          //! PID gains for MPS controller.
          std::vector<float> mps_pid_gains;
          //! PID gains for RPM controller.
          std::vector<float> rpm_pid_gains;
          //! Log the size of each PID parcel
          bool log_parcels;
        };

        struct Task: public Tasks::Task
        {
          //! Task arguments.
          Arguments m_args;
          //! Desired thruster actuation.
          IMC::SetThrusterActuation m_thruster;
          //! Desired speed.
          fp64_t m_desired_speed;
          //! Desired speed units.
          uint8_t m_speed_units;
          //! Control loops last reference.
          uint32_t m_scope_ref;
          //! Time of last reference for MPS controller.
          Delta m_mps_delta;
          //! MPS PID controller.
          DiscretePID m_mps_pid;
          //! Control Parcels for mps controller.
          IMC::ControlParcel m_mps_cp;
          //! Time of last reference for RPM controller.
          Delta m_rpm_delta;
          //! RPM PID controller.
          DiscretePID m_rpm_pid;
          //! Control Parcels for rpm controller.
          IMC::ControlParcel m_rpm_cp;

          Task(const std::string& name, Tasks::Context& ctx):
            Tasks::Task(name, ctx),
            m_desired_speed(0.0),
            m_speed_units(IMC::SpeedUnits::SUNITS_METERS_PS),
            m_scope_ref(0)
          {
            param("Maximum Thruster Actuation", m_args.max_thruster)
            .minimumValue("0.0")
            .maximumValue("1.0")
            .defaultValue("1.0")
            .description("Maximum thruster actuation.");

            param("MPS PID Gains", m_args.mps_pid_gains)
            .size(3)
            .description("PID gains for MPS Controller");

            param("RPM PID Gains", m_args.rpm_pid_gains)
            .size(3)
            .description("PID gains for RPM Controller");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("false")
            .description("Log the size of each PID parcel");

            m_thruster.id = 0;
            m_thruster.value = 0.0f;

            bind<IMC::ControlLoops>(this);
            bind<IMC::DesiredSpeed>(this);
            bind<IMC::EstimatedState>(this);
            bind<IMC::Rpm>(this);
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.mps_pid_gains))
            {
              setup(m_mps_pid, m_args.mps_pid_gains);

              if (isActive())
                m_mps_pid.reset();
            }

            if (paramChanged(m_args.rpm_pid_gains))
            {
              setup(m_rpm_pid, m_args.rpm_pid_gains);

              if (isActive())
                m_rpm_pid.reset();
            }

            if (paramChanged(m_args.log_parcels))
            {
              if (m_args.log_parcels)
              {
                m_mps_pid.enableParcels(this, &m_mps_cp);
                m_rpm_pid.enableParcels(this, &m_rpm_cp);
              }
              else
              {
                m_mps_pid.disableParcels();
                m_rpm_pid.disableParcels();
              }
            }
          }

          void
          onEntityReservation(void)
          {
            std::string elabel = getEntityLabel();
            m_mps_cp.setSourceEntity(reserveEntity(elabel + " - MPS Parcel"));
            m_rpm_cp.setSourceEntity(reserveEntity(elabel + " - RPM Parcel"));
          }

          void
          reset(void)
          {
            m_desired_speed = 0.0;
            m_speed_units = IMC::SpeedUnits::SUNITS_METERS_PS;
            m_thruster.value = 0.0;
            dispatch(m_thruster);
          }

          void
          setup(DiscretePID& pid, const std::vector<float>& gains)
          {
            pid.setGains(gains);
            pid.setOutputLimits(-m_args.max_thruster, m_args.max_thruster);
            pid.setIntegralLimits(m_args.max_thruster);
          }

          void
          dispatchThruster(fp32_t value)
          {
            m_thruster.value = trimValue(value, -m_args.max_thruster, m_args.max_thruster);
            dispatch(m_thruster);
          }

          void
          onResourceInitialization(void)
          {
            stop();
          }

          void
          consume(const IMC::Rpm* msg)
          {
            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            if (m_speed_units != IMC::SpeedUnits::SUNITS_RPM)
              return;

            float tstep = m_rpm_delta.getDelta();

            if (tstep < 0.0)
              return;

            fp32_t value = m_rpm_pid.step(tstep, m_desired_speed - msg->value, 0);
            dispatchThruster(value);
          }

          void
          consume(const IMC::EstimatedState* msg)
          {
            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            float tstep = m_mps_delta.getDelta();

            if (tstep < 0.0)
              return;

            if (m_speed_units != IMC::SpeedUnits::SUNITS_METERS_PS)
              return;

            fp32_t sog = std::sqrt(msg->vx * msg->vx + msg->vy * msg->vy);
            fp32_t value = m_mps_pid.step(tstep, m_desired_speed - sog, 0);
            dispatchThruster(value);
          }

          void consume(const IMC::DesiredSpeed* msg)
          {
            if (!isActive())
              return;

            const auto new_units = msg->speed_units;

            if (new_units != m_speed_units)
            {
              if (new_units == IMC::SpeedUnits::SUNITS_METERS_PS)
                m_mps_pid.reset();
              else if (new_units == IMC::SpeedUnits::SUNITS_RPM)
                m_rpm_pid.reset();
            }

            m_desired_speed = msg->value;
            m_speed_units = new_units;

            if (new_units == IMC::SpeedUnits::SUNITS_PERCENTAGE)
            {
              const double thruster_cmd = (m_desired_speed * 0.01) * m_args.max_thruster;
              dispatchThruster(thruster_cmd);
            }
          }

          void
          consume(const IMC::ControlLoops* msg)
          {
            if (!(msg->mask & IMC::CL_SPEED))
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
