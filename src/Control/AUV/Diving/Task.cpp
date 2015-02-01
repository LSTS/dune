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

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    //! %Diving supervisor for AUVs.
    //! %Diving is responsible to make sure the vehicle is capable
    //! of submerging by demanding an increase in motor speed.
    //!
    //! @author Pedro Calado
    namespace Diving
    {
      //! State machine states.
      enum MachineStates
      {
        //! Idle doing nothing.
        SM_IDLE,
        //! Checking if vehicle can submerge.
        SM_CHECKING,
        //! Vehicle is submerged.
        SM_SUBMERGED,
        //! Forcing vehicle to submerge using speed.
        SM_FORCING
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Depth threshold to consider submerged.
        float depth_threshold;
        //! Speed tolerance to consider possibility of submergence.
        float speed_tol;
        //! Time after which diving controller kicks in to help submerge.
        double time_solo;
        //! Time step between each increase in speed by diving controller.
        double time_step;
        //! Speed step when helping to submerge.
        double speed_step;
        //! Maximum speed increase in percentage
        unsigned max_increase;
      };

      //! %Motor simulator task
      struct Task: public Tasks::Periodic
      {
        //! Active loops.
        uint32_t m_aloops;
        //! State machine state.
        MachineStates m_mstate;
        //! Forced desired speed.
        IMC::DesiredSpeed m_forced_speed;
        //! Last received desired speed.
        IMC::DesiredSpeed m_dspeed;
        //! Last received desired z.
        IMC::DesiredZ m_z_ref;
        //! Number of speed increases
        unsigned m_incs;
        //! Speed amount to increase
        float m_speed_inc;
        //! Timer counter for solo attempt
        Time::Counter<float>* m_counter_solo;
        //! Timer counter for each speed increase step
        Time::Counter<float>* m_counter_step;
        //! Motor's rpms.
        float m_rpm;
        //! Vehicle's depth
        float m_depth;
        //! Vehicle's altitude (if any)
        float m_alt;
        //! Got necessary data to proceed
        bool m_got_data;
        //! On last attempt
        bool m_last_try;
        //! Braking flag
        bool m_braking;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_aloops(0),
          m_counter_solo(NULL),
          m_counter_step(NULL),
          m_braking(false),
          m_scope_ref(0)
        {
          m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);
          // Make it double just to be safe for hysteresis purposes
          m_args.depth_threshold *= 2.0;

          param("Speed Tolerance", m_args.speed_tol)
          .defaultValue("200.0")
          .units(Units::RPM)
          .description("Speed tolerance to consider possibility of submergence");

          param("Failure Time", m_args.time_solo)
          .defaultValue("8.0")
          .units(Units::Second)
          .description("Time after which diving controller kicks in to help submerge");

          param("Time Step", m_args.time_step)
          .defaultValue("2.0")
          .units(Units::Second)
          .description("Time step between each increase in speed by diving controller");

          param("Speed Step", m_args.speed_step)
          .defaultValue("0.1")
          .units(Units::Percentage)
          .description("Speed step when helping to submerge");

          param("Maximum Increase", m_args.max_increase)
          .defaultValue("50")
          .description("Maximum speed increase in percentage");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register consumers.
          bind<IMC::Brake>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::ControlLoops>(this);
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          Memory::clear(m_counter_solo);
          Memory::clear(m_counter_step);
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          m_counter_solo = new Time::Counter<float>(m_args.time_solo);
          m_counter_step = new Time::Counter<float>(m_args.time_step);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          requestDeactivation();
          reset();
        }

        //! On activation
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! On deactivation
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! Reset all variables
        void
        reset(void)
        {
          m_mstate = SM_IDLE;
          m_rpm = -1.0;
          m_dspeed.clear();
          m_alt = -1.0;
          m_depth = -1.0;
          m_z_ref.clear();

          m_last_try = false;
          m_got_data = false;
          m_incs = 0;
          m_speed_inc = 0.0;

          m_counter_solo->reset();
          m_counter_step->reset();
        }

        void
        consume(const IMC::Brake* msg)
        {
          if (!isActive())
            return;

          // if we are braking reset desired speed to original value
          if (msg->op == IMC::Brake::OP_START)
          {
            m_braking = true;

            if (m_mstate == SM_FORCING)
              dispatch(m_dspeed);

            //partial reset
            m_last_try = false;

            m_counter_solo->reset();
            m_counter_step->reset();

            m_mstate = SM_IDLE;
          }
          else
          {
            m_braking = false;
          }
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if (!isActive())
            return;

          m_rpm = msg->value;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (!isActive())
            return;

          if (msg->getSource() != getSystemId())
            return;

          m_depth = msg->depth;
          m_alt = msg->alt;
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!isActive())
            return;

          m_dspeed = *msg;
          m_dspeed.setSourceEntity(getEntityId());
        }

        void
        consume(const IMC::DesiredZ* msg)
        {
          if (!isActive())
            return;

          m_z_ref = *msg;
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          uint32_t loops = msg->mask & (IMC::CL_DEPTH | IMC::CL_ALTITUDE | IMC::CL_SPEED);

          if (!loops)
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          bool was_active = isActive();

          if (msg->enable)
          {
            if (!isActive())
            {
              requestActivation();
              m_aloops = 0;
            }
            m_aloops |= loops;
          }
          else
          {
            m_aloops &= ~loops;

            if (!m_aloops)
              requestDeactivation();
          }

          if (was_active != isActive())
          {
            debug("%s", isActive() ? "enabling" : "disabling");
            if (msg->enable)
              requestActivation();
            else
              requestDeactivation();

            reset();
          }
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          if (!m_got_data)
          {
            // Check if we have depth or altitude commands/measurements.
            if (m_z_ref.z_units == IMC::Z_DEPTH)
            {
              if ((m_depth < 0.0) || (m_z_ref.value < 0.0))
                return;
            }
            else if (m_z_ref.z_units == IMC::Z_ALTITUDE)
            {
              if ((m_alt < 0.0) || (m_z_ref.value < 0.0))
                return;
            }
            else
            {
              return;
            }

            // Check if we have speed reference and measurement
            if ((m_dspeed.value < 0.0) || (m_rpm < 0.0))
              return;

            m_got_data = true;
          }

          // if we've given up on trying to submerge
          if ((getEntityState() == IMC::EntityState::ESTA_ERROR) || m_braking)
            return;

          // Run state machine
          switch (m_mstate)
          {
            case SM_IDLE:
              onIdle();
              break;
            case SM_CHECKING:
              onChecking();
              break;
            case SM_SUBMERGED:
              onSubmerged();
              break;
            case SM_FORCING:
              onForcing();
              break;
            default:
              break;
          }
        }

        //! Idle state machine routine
        void
        onIdle(void)
        {
          if ((m_depth < m_args.depth_threshold) && (m_z_ref.value > m_args.depth_threshold)
              && (m_dspeed.value > 0.0) && (m_rpm > m_args.speed_tol))
          {
            m_mstate = SM_CHECKING;
            m_counter_solo->reset();
            debug("checking diving attempt");
          }
        }

        //! Checking state machine routine
        void
        onChecking(void)
        {
          if (!hasZReference() || (m_dspeed.value == 0.0))
          {
            m_counter_solo->reset();
            m_mstate = SM_IDLE;
            debug("no longer attempting to submerge");
          }

          if (m_depth > m_args.depth_threshold)
          {
            m_mstate = SM_SUBMERGED;
            debug("vehicle submerged");
          }

          if (m_counter_solo->overflow())
          {
            m_counter_step->reset();
            m_mstate = SM_FORCING;
            increaseSpeed();
          }
        }

        //! Submerged state machine routine
        void
        onSubmerged(void)
        {
          if (!hasZReference())
          {
            m_mstate = SM_IDLE;
            debug("no longer attempting to submerge");
          }

          // divide by two as an hysteresis mechanism
          if (m_depth < m_args.depth_threshold / 2.0)
          {
            m_counter_solo->reset();
            m_mstate = SM_CHECKING;
            debug("no longer submerged, still attempting");
          }
        }

        //! Forcing state machine routine
        void
        onForcing(void)
        {
          if (!hasZReference() || (m_dspeed.value == 0.0))
          {
            m_mstate = SM_IDLE;

            m_incs = 0;
            m_last_try = false;
            debug("no longer attempting to submerge");
            return;
          }

          if (m_depth > m_args.depth_threshold)
          {
            m_mstate = SM_SUBMERGED;

            m_incs = 0;
            m_last_try = false;
            dispatch(m_dspeed);
            debug("vehicle submerged, speed set to original value");
            return;
          }

          if (m_counter_step->overflow() && !increaseSpeed())
          {
            if (!m_last_try)
            {
              // give it a few more seconds before giving up
              m_counter_solo->reset();
              m_last_try = true;
            }
            else if (m_counter_solo->overflow())
            {
              std::string desc = DTR("failed to submerge");
              setEntityState(IMC::EntityState::ESTA_ERROR, desc);
              err("%s", desc.c_str());

              // reset to original speed reference
              dispatch(m_dspeed);

              reset();
              return;
            }
          }
        }

        //! Increase desired speed
        //! @return true if was able to increase speed, false otherwise
        bool
        increaseSpeed(void)
        {
          if (m_incs == 0)
          {
            // use the values only once since they might change
            m_forced_speed.value = m_dspeed.value;
            m_forced_speed.speed_units = m_dspeed.speed_units;
            m_speed_inc = m_dspeed.value * m_args.speed_step;
          }

          ++m_incs;

          if (m_incs * 10  > m_args.max_increase)
            return false;

          m_forced_speed.value += m_speed_inc;

          dispatch(m_forced_speed);

          debug("unable to submerge, increasing speed to %d%%",
                (unsigned)(100.0 + (float)m_incs * 10.0));

          m_counter_step->reset();

          return true;
        }

        //! Check if we have depth/altitude reference
        //! @return true if we do, false otherwise
        bool
        hasZReference(void)
        {
          if (m_z_ref.z_units == IMC::Z_DEPTH)
          {
            return (m_z_ref.value > m_args.depth_threshold);
          }
          else if (m_z_ref.z_units == IMC::Z_ALTITUDE)
          {
            if (m_depth > m_args.depth_threshold) // making sure dvl data is sane
              return (m_z_ref.value < m_alt - m_args.depth_threshold);
            else
              return true; // if dvl may not be sane yet, let it dive
          }
          else
          {
            return false;
          }
        }
      };
    }
  }
}
DUNE_TASK
