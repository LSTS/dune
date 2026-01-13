//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Task to Simulate a Power Board to control power channels and monitor voltage and current.
  namespace Power
  {
    using DUNE_NAMESPACES;

    // Maximum number of power channels.
    static const int c_max_power_channel = 12;

    //! Power Channel data structure.
    struct PowerChannel
    {
      IMC::PowerChannelState pcs_msg;
      unsigned id = 0;
      double sched_time_in_seconds;
      bool is_sched_off;
      bool is_sched_on;
      bool is_scheduled_active;
      Counter<double> sched_timer;
    };

    //! %Task arguments.
    struct Arguments
    {
      // Channel names to simulate.
      std::vector<std::string> power_channel_names;
      // Medium Voltage for each channel.
      std::vector<float> medium_voltage;
      // Medium Current for each channel.
      std::vector<float> medium_current;
      // Period to update power channels states.
      double update_period;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Delay timer.
      Counter<double> m_delay_timer;
      //! Flag to control no power channel to simulate.
      bool m_no_power_channel;
      //! IMC Power Channel messages.
      PowerChannel m_power_channels[c_max_power_channel];
      //! IMC Voltage messages.
      IMC::Voltage m_voltage_msgs[c_max_power_channel];
      //! IMC Current messages.
      IMC::Current m_current_msgs[c_max_power_channel];
      //! Fuel Level message.
      IMC::FuelLevel m_fuel_level;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Power Channel Names", m_args.power_channel_names)
          .defaultValue("")
          .description("Names of the power channels to simulate.");

        param("Medium Voltage", m_args.medium_voltage)
          .defaultValue("12.0")
          .description("Medium voltage (V) for each power channel.");

        param("Medium Current", m_args.medium_current)
          .defaultValue("1.0")
          .description("Medium current (A) for each power channel.");

        param("Update Period", m_args.update_period)
          .defaultValue("1")
          .minimumValue("0.1")
          .description("Period, in seconds, to update power channels states.");

        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      unsigned int
      getEid(const std::string& label)
      {
        unsigned int eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }
        return eid;
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        if (m_args.power_channel_names.empty())
        {
          m_no_power_channel = true;
          inf("No power channel to simulate.");
          return;
        }
        else
        {
          inf("Reserving power channel entities %ld.", m_args.power_channel_names.size());
          m_no_power_channel = false;
          for (int i = 0; i < (int)m_args.power_channel_names.size(); ++i)
          {
            unsigned int eid = getEid(m_args.power_channel_names[i]);
            m_power_channels[i].pcs_msg.setSourceEntity(eid);
            m_power_channels[i].pcs_msg.name = m_args.power_channel_names[i];
            m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_ON;
            inf("Power channel entity '%s' reserved with id %u.", m_power_channels[i].pcs_msg.name.c_str(),
                eid);
            // Voltage message
            m_voltage_msgs[i].setSourceEntity(eid);
            m_voltage_msgs[i].value = m_args.medium_voltage[i];
            // Current message
            m_current_msgs[i].setSourceEntity(eid);
            m_current_msgs[i].value = m_args.medium_current[i];

            m_fuel_level.setSourceEntity(getEid("Batteries"));
          }
        }
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_delay_timer.setTop(m_args.update_period);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;
        for (int i = 0; i < (int)m_args.power_channel_names.size(); ++i)
        {
          dispatch(m_power_channels[i].pcs_msg);
        }
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        for (int i = 0; i < (int)m_args.power_channel_names.size(); ++i)
        {
          if (msg->name == m_power_channels[i].pcs_msg.name)
          {
            switch (msg->op)
            {
              case IMC::PowerChannelControl::PCC_OP_TURN_OFF:
                m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_OFF;
                inf("Power channel '%s' turned OFF.", m_power_channels[i].pcs_msg.name.c_str());
                break;

              case IMC::PowerChannelControl::PCC_OP_TURN_ON:
                m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_ON;
                inf("Power channel '%s' turned ON.", m_power_channels[i].pcs_msg.name.c_str());
                break;

              case IMC::PowerChannelControl::PCC_OP_TOGGLE:
                if (m_power_channels[i].pcs_msg.state == IMC::PowerChannelState::PCS_ON)
                {
                  m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_OFF;
                  inf("Power channel '%s' toggled to OFF.", m_power_channels[i].pcs_msg.name.c_str());
                }
                else
                {
                  m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_ON;
                  inf("Power channel '%s' toggled to ON.", m_power_channels[i].pcs_msg.name.c_str());
                }
                break;

              case IMC::PowerChannelControl::PCC_OP_SCHED_OFF:
                m_power_channels[i].is_scheduled_active = true;
                m_power_channels[i].is_sched_off = true;
                m_power_channels[i].is_sched_on = false;
                m_power_channels[i].sched_time_in_seconds = msg->sched_time;
                m_power_channels[i].sched_timer.setTop(m_power_channels[i].sched_time_in_seconds);
                m_power_channels[i].sched_timer.reset();
                war("Power channel '%s' scheduled turn OFF in %.0f seconds.",
                    m_power_channels[i].pcs_msg.name.c_str(), m_power_channels[i].sched_time_in_seconds);
                break;

              case IMC::PowerChannelControl::PCC_OP_SCHED_ON:
                m_power_channels[i].is_scheduled_active = true;
                m_power_channels[i].is_sched_on = true;
                m_power_channels[i].is_sched_off = false;
                m_power_channels[i].sched_time_in_seconds = msg->sched_time;
                m_power_channels[i].sched_timer.setTop(m_power_channels[i].sched_time_in_seconds);
                m_power_channels[i].sched_timer.reset();
                war("Power channel '%s' scheduled turn ON in %.0f seconds.",
                    m_power_channels[i].pcs_msg.name.c_str(), m_power_channels[i].sched_time_in_seconds);
                break;

              case IMC::PowerChannelControl::PCC_OP_SCHED_RESET:
                m_power_channels[i].is_scheduled_active = false;
                m_power_channels[i].is_sched_off = false;
                m_power_channels[i].is_sched_on = false;
                war("Power channel '%s' scheduled operations RESET.", m_power_channels[i].pcs_msg.name.c_str());
                break;

              default:
                war("Power channel control operation %u not implemented.", msg->op);
                break;
            }
            dispatch(m_power_channels[i].pcs_msg);
            return;
          }
        }
        war("Power channel control received for unknown channel '%s'.", msg->name.c_str());
      }

      // Add or remove a value between 0.05 and 0.3
      double
      randomFluctuation(double base_value)
      {
        double fluctuation = ((rand() % 26) + 5) / 100.0;  // Random value between 0.05 and 0.3
        if (rand() % 2 == 0)
          return base_value + fluctuation;
        else
          return base_value - fluctuation;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_delay_timer.overflow())
          {
            m_delay_timer.reset();
            if (!m_no_power_channel)
            {
              for (int i = 0; i < (int)m_args.power_channel_names.size(); ++i)
              {
                // Dispatch voltage message
                //check if channel is ON
                if (m_power_channels[i].pcs_msg.state == IMC::PowerChannelState::PCS_OFF)
                {
                  m_voltage_msgs[i].value = 0.0;
                  m_current_msgs[i].value = 0.0;
                  dispatch(m_voltage_msgs[i]);
                  dispatch(m_current_msgs[i]);
                }
                else
                {
                  m_voltage_msgs[i].value = randomFluctuation(m_args.medium_voltage[i]);
                  dispatch(m_voltage_msgs[i]);
                  // Dispatch current message
                  m_current_msgs[i].value = randomFluctuation(m_args.medium_current[i]);
                  dispatch(m_current_msgs[i]);
                }
                m_fuel_level.value = 25.0 + (rand() % 74);  // Random fuel level between 75% and 100%
                m_fuel_level.confidence = 0.9f;
                m_fuel_level.opmodes = "SIMULATED";
                dispatch(m_fuel_level);

                // check if scheduled operations are active
                if(m_power_channels[i].is_scheduled_active)
                {
                  if(m_power_channels[i].sched_timer.overflow())
                  {
                    if(m_power_channels[i].is_sched_off)
                    {
                      m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_OFF;
                      war("Power channel '%s' scheduled turn OFF executed.", m_power_channels[i].pcs_msg.name.c_str());
                    }
                    else if(m_power_channels[i].is_sched_on)
                    {
                      m_power_channels[i].pcs_msg.state = IMC::PowerChannelState::PCS_ON;
                      war("Power channel '%s' scheduled turn ON executed.", m_power_channels[i].pcs_msg.name.c_str());
                    }
                    // reset scheduling flags
                    m_power_channels[i].is_scheduled_active = false;
                    m_power_channels[i].is_sched_off = false;
                    m_power_channels[i].is_sched_on = false;
                    // dispatch updated state
                    dispatch(m_power_channels[i].pcs_msg);
                  }
                }

                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              }
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INTERNAL_ERROR);
            }
          }
          waitForMessages(0.2);
        }
      }
    };
  }
}

DUNE_TASK
