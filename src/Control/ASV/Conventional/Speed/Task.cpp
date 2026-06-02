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
// Author: Bernardo Gabriel (based on Control.AUV.Speed)                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace ASV
  {
    namespace Conventional
    {
      namespace Speed
      {
        //! Tolerance for very low meters per second speed
        static const float c_mps_tol = 0.1;

        struct Arguments
        {
          //! Maximum thrust limit.
          float max_thrust;
          //! Minimum thrust limit.
          float min_thrust;
          //! RPM controller feedforward gain
          float rpm_ffgain;
          //! Hardware control of the motor's rpms
          bool hardrpms;
          //! End of scale value for RPM's at 100% of thurst.
          float rpms_eos;
          //! Minimum value admissible for desired RPMs.
          int16_t min_rpm;
          //! Maximum value admissible for desired RPMs for the MPS controller.
          int16_t max_rpm;
          //! Maximum acceleration step to smooth speed ramp in mps control.
          int16_t max_accel;
          //! MPS controller feedforward gain.
          float mps_ffgain;
          //! PID gains for RPM controller
          std::vector<float> rpm_gains;
          //! PID gains for MPS controller.
          std::vector<float> mps_gains;
          //! Limit for the integral term.
          float max_int_mps;
          //! Ramp actuation limit when the value is rising in actuation per second.
          float ramp_act;
          //! Log the size of each PID parcel.
          bool log_parcels;
        };

        struct Task: public DUNE::Tasks::Task
        {
          //! Desired speed.
          float m_desired_speed;
          //! Desired speed units.
          uint8_t m_speed_units;
          //! Time of last RPM message.
          Delta m_last_rpm;
          //! Time of last MPS message.
          Delta m_last_mps;
          //! RPM PID controller
          DiscretePID m_rpm_pid;
          //! MPS PID controller.
          DiscretePID m_mps_pid;
          //! Thruster actuaction.
          IMC::SetThrusterActuation m_act;
          //! Last thruster actuaction.
          float m_last_act;
          //! Desired Rpms from ground velocity controller.
          float m_desired_rpm;
          //! Previous value of the desired rpm speed.
          float m_previous_rpm;
          //! True if braking.
          bool m_braking;
          //! Control Parcels for rpm controller.
          IMC::ControlParcel m_parcel_rpm;
          //! Control Parcels for meters per second controller.
          IMC::ControlParcel m_parcel_mps;
          //! Control loops last reference.
          uint32_t m_scope_ref;
          //! Task arguments.
          Arguments m_args;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Tasks::Task(name, ctx),
            m_previous_rpm(0.0),
            m_scope_ref(0)
          {
            param("Hardware RPMs Control", m_args.hardrpms)
            .defaultValue("true")
            .description("Hardware control of the motor's rpms");

            param("RPMs at Maximum Thrust", m_args.rpms_eos)
            .minimumValue("0")
            .units(Units::RPM)
            .description("End of scale value for RPM's at 100% of thurst");

            param("RPMs Feedforward Gain", m_args.rpm_ffgain)
            .defaultValue("0.5")
            .description("RPM controller feedforward gain");

            param("RPMs PID Gains", m_args.rpm_gains)
            .defaultValue("")
            .size(3)
            .description("PID gains for RPM controller");

            param("MPS Feedforward Gain", m_args.mps_ffgain)
            .defaultValue("0.0")
            .description("MPS controller feedforward gain");

            param("MPS PID Gains", m_args.mps_gains)
            .defaultValue("")
            .size(3)
            .description("PID gains for MPS controller");

            param("MPS Integral Limit", m_args.max_int_mps)
            .defaultValue("-1.0")
            .description("Limit for the integral term");

            param("Maximum Thrust Limit", m_args.max_thrust)
            .defaultValue("1.0")
            .minimumValue("-1.0")
            .maximumValue("1.0")
            .description("Maximum thrust limit");

            param("Minimum Thrust Limit", m_args.min_thrust)
            .defaultValue("-1.0")
            .minimumValue("-1.0")
            .maximumValue("1.0")
            .description("Minimum thrust limit");

            param("Minimum RPM Limit", m_args.min_rpm)
            .defaultValue("200")
            .units(Units::RPM)
            .description("Minimum value admissible for desired RPMs");

            param("Maximum RPM Limit", m_args.max_rpm)
            .defaultValue("1700")
            .units(Units::RPM)
            .description("Maximum value admissible for desired RPMs");

            param("Maximum RPM Acceleration", m_args.max_accel)
            .defaultValue("70")
            .units(Units::RPM)
            .description("Maximum acceleration step to smooth speed ramp in mps control");

            param("Ramp Actuation Limit", m_args.ramp_act)
            .defaultValue("0.0")
            .description("Ramp actuation limit when the value is rising in actuation per second");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("false")
            .description("Log the size of each PID parcel");

            m_act.id = 0;

            bind<IMC::Brake>(this);
            bind<IMC::Rpm>(this);
            bind<IMC::DesiredSpeed>(this);
            bind<IMC::ControlLoops>(this);
            bind<IMC::EstimatedState>(this);
          }

          void
          onActivation(void)
          {
            reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          void
          onDeactivation(void)
          {
            reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          void
          onResourceInitialization(void)
          {
            requestDeactivation();
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.rpm_gains) ||
                paramChanged(m_args.mps_gains) ||
                paramChanged(m_args.max_int_mps) ||
                paramChanged(m_args.max_thrust) ||
                paramChanged(m_args.min_thrust))
            {
              if (m_args.min_thrust > m_args.max_thrust)
              {
                inf("Adjusting minimum thrust limit according to maximum thrust limit.");
                applyEntityParameter(&m_args.min_thrust, m_args.max_thrust);
              }

              if (m_args.max_thrust < m_args.min_thrust)
              {
                inf("Adjusting maximum thrust limit according to minimum thrust limit.");
                applyEntityParameter(&m_args.max_thrust, m_args.min_thrust);
              }

              initializePIDs();
            }

            if (paramChanged(m_args.log_parcels))
            {
              if (m_args.log_parcels)
              {
                m_rpm_pid.enableParcels(this, &m_parcel_rpm);
                m_mps_pid.enableParcels(this, &m_parcel_mps);
              }
              else
              {
                m_rpm_pid.disableParcels();
                m_mps_pid.disableParcels();
              }
            }
          }

          //! Initialize PID related variables
          void
          initializePIDs(void)
          {
            m_rpm_pid.setGains(m_args.rpm_gains);
            m_rpm_pid.setOutputLimits(m_args.min_thrust, m_args.max_thrust);
            m_mps_pid.setGains(m_args.mps_gains);
            m_mps_pid.setIntegralLimits(m_args.max_int_mps);
          }

          void
          reset(void)
          {
            m_desired_speed = 0;
            m_rpm_pid.reset();
            m_mps_pid.reset();
            m_previous_rpm = 0;
            m_braking = false;
            m_act.value = 0.0;
            m_last_act = 0.0;
            dispatch(m_act);
          }

          void
          consume(const IMC::Brake* msg)
          {
            if (msg->op == IMC::Brake::OP_START)
              m_braking = true;
            else
              m_braking = false;
          }

          void
          consume(const IMC::DesiredSpeed* msg)
          {
            if (!isActive())
              return;

            m_desired_speed = msg->value;
            m_speed_units = msg->speed_units;
          }

          void
          consume(const IMC::EstimatedState* msg)
          {
            if (!isActive())
              return;

            if (m_speed_units != IMC::SUNITS_METERS_PS)
              return;

            if (msg->getSource() != getSystemId())
              return;

            double timestep = m_last_mps.getDelta();

            if (timestep < 0.0)
              return;

            mpsToRpm(std::sqrt(msg->vx * msg->vx + msg->vy * msg->vy), timestep);
          }

          void
          consume(const IMC::ControlLoops* msg)
          {
            if (!(msg->mask & IMC::CL_SPEED))
              return;

            if (msg->scope_ref < m_scope_ref)
              return;

            m_scope_ref = msg->scope_ref;

            if (isActive() == msg->enable)
              return;

            if (!msg->enable)
              requestDeactivation();
            else
              requestActivation();
          }

          void
          consume(const IMC::Rpm* msg)
          {
            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            double timestep = m_last_rpm.getDelta();

            if (timestep < 0.0)
              return;

            switch (m_speed_units)
            {
              case IMC::SUNITS_METERS_PS:
                rpmToThrust(msg->value, m_desired_rpm, timestep);
                break;

              case IMC::SUNITS_PERCENTAGE:
                dispatchThrust(m_desired_speed / 100.0, timestep);
                break;

              case IMC::SUNITS_RPM:
                rpmToThrust(msg->value, m_desired_speed, timestep);
                m_previous_rpm = m_desired_speed;
                break;
              
              default:
                break;
            }
          }

          //! Convert rpm value to thrust actuation
          //! @param[in] rpmvalue value of rpms currently in the motor
          //! @param[in] desired_rpm desired rpms for the motor
          //! @param[in] timestep amount of time since last control step
          void
          rpmToThrust(float rpmvalue, float desired_rpm, double timestep)
          {
            float value = 0.0;
            if (m_args.hardrpms)
            {
              value = desired_rpm / m_args.rpms_eos;
            }
            else if (timestep != 0.0)
            {
              value = m_rpm_pid.step(timestep, desired_rpm - rpmvalue);
              m_parcel_rpm.a = desired_rpm * m_args.rpm_ffgain;
              value += m_parcel_rpm.a;
            }

            dispatchThrust(value, timestep);
          }

          //! Convert meters per second to a desired rpm value
          //! @param[in] abs_gvel absolute ground velocity
          //! @param[in] timestep amount of time since last control step
          void
          mpsToRpm(float abs_gvel, double timestep)
          {
            if (m_speed_units != IMC::SUNITS_METERS_PS)
              return;

            if (m_desired_speed < c_mps_tol)
            {
              m_desired_rpm = 0.0;
              m_previous_rpm = m_desired_rpm;
              return;
            }

            if (timestep == 0.0)
              return;

            m_desired_rpm = m_mps_pid.step(timestep, m_desired_speed - abs_gvel);
            m_parcel_mps.a = m_desired_speed * m_args.mps_ffgain;
            m_desired_rpm += m_parcel_mps.a;

            m_desired_rpm = Math::trimValue(m_desired_rpm,
                                            m_previous_rpm - m_args.max_accel * timestep,
                                            m_previous_rpm + m_args.max_accel * timestep);

            m_desired_rpm = Math::trimValue(m_desired_rpm, m_args.min_rpm, m_args.max_rpm);
            m_previous_rpm = m_desired_rpm;
          }

          //! Dispatch to bus SetThrusterActuation message
          //! @param[in] value set thrust actuation value
          //! @param[in] timestep amount of time since last control step
          void
          dispatchThrust(float value, double timestep)
          {
            if (!m_braking)
            {
              if ((value > m_last_act) && (m_args.ramp_act > 0.0))
              {
                value = m_last_act + trimValue((value - m_last_act) / timestep,
                                               0.0, m_args.ramp_act * timestep);
              }

              m_act.value = trimValue(value, m_args.min_thrust, m_args.max_thrust);
            }
            else
              m_act.value = 0.0;

            dispatch(m_act);
            m_last_act = m_act.value;
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
