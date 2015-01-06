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
// Author: Renato Caldas                                                    *
// Author: Pedro Calado (control in meters per second)                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    namespace Speed
    {
      //! Tolerance for very low meters per second speed
      static const float c_mps_tol = 0.1;

      struct Arguments
      {
        //! Maximum thrust limit
        float max_thrust;
        //! Minimum thrust limit
        float min_thrust;
        //! RPM controller feedforward gain
        float rpm_ffgain;
        //! Hardware control of the motor's rpms
        bool hardrpms;
        //! End of scale value for RPM's at 100% of thurst
        float rpms_eos;
        //! Minimum value admissible for desired RPMs
        int16_t min_rpm;
        //! Maximum value admissible for desired RPMs for the MPS controller
        int16_t max_rpm;
        //! Maximum acceleration step to smooth speed ramp in mps control
        int16_t max_accel;
        //! MPS controller feedforward gain
        float mps_ffgain;
        //! PID gains for RPM controller
        std::vector<float> rpm_gains;
        //! PID gains for MPS controller
        std::vector<float> mps_gains;
        //! Limit for the integral term
        float max_int_mps;
        //! Ramp actuation limit when the value is rising in actuation per second
        float ramp_act;
        //! Log the size of each PID parcel
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
        //! MPS PID controller
        DiscretePID m_mps_pid;
        //! Thruster actuaction.
        IMC::SetThrusterActuation m_act;
        //! Last thruster actuaction.
        IMC::SetThrusterActuation m_last_act;
        //! Desired Rpms from ground velocity controller
        float m_desired_rpm;
        //! Last desired ground velocity
        float m_desired_gvel;
        //! Boolean to enable or disable the speed controller using estimated state
        bool m_u_active;
        //! previous value of the desired rpm speed
        float m_previous_rpm;
        //! True if braking.
        bool m_braking;
        //! Control Parcels for meters per second controller
        IMC::ControlParcel m_parcel_mps;
        //! Control Parcels for rpm controller
        IMC::ControlParcel m_parcel_rpm;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Task arguments
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_u_active(false),
          m_previous_rpm(0.0),
          m_scope_ref(0)
        {
          param("Hardware RPMs Control", m_args.hardrpms)
          .defaultValue("true")
          .description("Hardware control of the motor's rpms");

          param("RPMs at Maximum Thrust", m_args.rpms_eos)
          .defaultValue("2500")
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

          param("Positive Thrust Limit", m_args.max_thrust)
          .defaultValue("1.0")
          .description("Maximum thrust limit");

          param("Negative Thrust Limit", m_args.min_thrust)
          .defaultValue("-1.0")
          .description("Minimum thrust limit");

          param("Minimum RPM Limit", m_args.min_rpm)
          .defaultValue("200")
          .units(Units::RPM)
          .description("Minimum value admissible for desired RPMs");

          m_ctx.config.get("General", "Maximum Underwater RPMs", "1700.0", m_args.max_rpm);

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

          // Initialize main entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::Brake>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onResourceInitialization(void)
        {
          requestDeactivation();

          reset();

          m_act.id = 0;
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.rpm_gains) ||
              paramChanged(m_args.mps_gains) ||
              paramChanged(m_args.rpm_ffgain) ||
              paramChanged(m_args.mps_ffgain) ||
              paramChanged(m_args.max_int_mps) ||
              paramChanged(m_args.max_thrust) ||
              paramChanged(m_args.min_thrust) ||
              paramChanged(m_args.log_parcels))
          {
            reset();

            initializePIDs();
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
          // Do not set MPS pid output limits since we use a feedforward gain

          // Log parcels
          if (m_args.log_parcels)
          {
            m_rpm_pid.enableParcels(this, &m_parcel_rpm);
            m_mps_pid.enableParcels(this, &m_parcel_mps);
          }
        }

        void
        reset(void)
        {
          m_desired_speed = 0;
          m_rpm_pid.reset();
          m_mps_pid.reset();

          m_u_active = false;
          m_speed_units = IMC::SUNITS_PERCENTAGE;

          m_previous_rpm = 0;

          m_braking = false;

          // Stop thruster.
          m_act.value = 0.0;
          m_last_act.value = 0.0;
          dispatch(m_act);
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          // This works as redundancy, in case everything else fails
          reset();
          debug("disabling");
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

          if (msg->getSource() != getSystemId())
            return;

          // Compute time delta.
          double timestep = m_last_mps.getDelta();

          // Check if we have a valid time delta.
          if (timestep < 0.0)
            return;

          // If we're asked for m/s or if u controller is active
          if (m_speed_units == IMC::SUNITS_METERS_PS || m_u_active)
          {
            float abs_gvel = msg->u;

            mpsToRpm(abs_gvel, timestep);

            // Enable u controller
            m_u_active = true;
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

          if (isActive() == msg->enable)
            return;

          if (!msg->enable)
            requestDeactivation();
          else
            requestActivation();

          reset();
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if (!isActive())
            return;

          // Compute time delta.
          double timestep = m_last_rpm.getDelta();

          // Check if we have a valid time delta.
          if (timestep < 0.0)
            return;

          switch (m_speed_units)
          {
            case IMC::SUNITS_PERCENTAGE:
              dispatchThrust(m_desired_speed / 100.0, timestep);
              // disable the meters per second controller
              m_u_active = false;
              break;
            case IMC::SUNITS_RPM:
              rpmToThrust(msg->value, m_desired_speed, timestep);
              m_previous_rpm = m_desired_speed;
              // disable the meters per second controller
              m_u_active = false;
              break;
            default:
              break;
          }

          if (m_u_active)
            rpmToThrust(msg->value, m_desired_rpm, timestep);
        }

        //! Convert rpm value to thrust actuation
        //! @param[in] rpmvalue value of rpms currently in the motor
        //! @param[in] desired_rpm desired rpms for the motor
        //! @param[in] timestep amount of time since last control step
        void
        rpmToThrust(float rpmvalue, float desired_rpm, double timestep)
        {
          if (m_args.hardrpms)
          {
            dispatchThrust(desired_rpm / m_args.rpms_eos, timestep);
          }
          else if (timestep != 0.0) // cannot let the timestep be zero
          {
            double value;

            value = m_rpm_pid.step(timestep, desired_rpm - rpmvalue);
            m_parcel_rpm.a = desired_rpm * m_args.rpm_ffgain;
            value += m_parcel_rpm.a;

            dispatchThrust(value, timestep);
          }
        }

        //! Convert meters per second to a desired rpm value
        //! @param[in] abs_gvel absolute ground velocity
        //! @param[in] timestep amount of time since last control step
        void
        mpsToRpm(float abs_gvel, double timestep)
        {
          if (m_speed_units == IMC::SUNITS_METERS_PS)
            m_desired_gvel = m_desired_speed;

          // if desired speed is too low just turn off motor
          if (m_desired_gvel < c_mps_tol)
          {
            m_desired_rpm = 0.0;
            m_previous_rpm = m_desired_rpm;
            return;
          }

          // cannot let the timestep be zero
          if (timestep == 0.0)
            return;

          m_desired_rpm = m_mps_pid.step(timestep,
                                         m_desired_gvel - abs_gvel);
          m_parcel_mps.a = m_desired_gvel * m_args.mps_ffgain;
          m_desired_rpm += m_parcel_mps.a;

          // trim acceleration in rpms
          m_desired_rpm = Math::trimValue(m_desired_rpm,
                                          m_previous_rpm - m_args.max_accel * timestep,
                                          m_previous_rpm + m_args.max_accel * timestep);

          // trim rpm value
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
            if ((value > m_last_act.value) && (m_args.ramp_act > 0.0))
            {
              value = m_last_act.value + trimValue((value - m_last_act.value) / timestep,
                                                   0.0, m_args.ramp_act * timestep);
            }

            m_act.value = trimValue(value, -1, 1);

            dispatch(m_act);
          }
          else
          {
            m_act.value = 0.0;
            dispatch(m_act);
          }

          m_last_act.value = m_act.value;
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

DUNE_TASK
