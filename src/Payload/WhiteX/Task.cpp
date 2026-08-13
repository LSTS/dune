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

#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Payload
{
  namespace WhiteX
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Valve 1 power channel label.
      std::string valve1_pwr_ch_label;
      //! Valve 2 power channel label.
      std::string valve2_pwr_ch_label;
      //! Valve 3 power channel label.
      std::string valve3_pwr_ch_label;
      //! Valve 4 power channel label.
      std::string valve4_pwr_ch_label;
      //! Valve 5 power channel label.
      std::string valve5_pwr_ch_label;
      //! Valve 6 power channel label.
      std::string valve6_pwr_ch_label;
      //! Valve 7 power channel label.
      std::string valve7_pwr_ch_label;
      //! Valve 8 power channel label.
      std::string valve8_pwr_ch_label;
      //! Valve 9 power channel label.
      std::string valve9_pwr_ch_label;
      //! Valve 10 power channel label.
      std::string valve10_pwr_ch_label;
      //! Water flow source entity label.
      std::string wf_elabel;
      //! Maximum water level GPIO label.
      std::string max_wl_gpio;
      //! Minimum water level GPIO label.
      std::string min_wl_gpio;
    };

    //! Task to control WhiteX payload. 
    //!
    //! @author Bernardo Gabriel
    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Water flow source entity id.
      unsigned m_wf_eid;
      //! Map of GPIO states.
      std::unordered_map<std::string, bool> m_gpio_states;
      //! Map of Power Channel states.
      std::map<std::string, bool> m_pwr_ch_states;
      //! PowerChannelControl message.
      IMC::PowerChannelControl m_pcc;
      //! QueryPowerChannelState message.
      IMC::QueryPowerChannelState m_qpcs;
      //! GpioStateGet message.
      IMC::GpioStateGet m_gsg;
      //! WaterFlow value.
      fp32_t m_wf;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_wf_eid(UINT_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Valve 1 - Power Channel Name", m_args.valve1_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 1.");

        param("Valve 2 - Power Channel Name", m_args.valve2_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 2.");

        param("Valve 3 - Power Channel Name", m_args.valve3_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 3.");

        param("Valve 4 - Power Channel Name", m_args.valve4_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 4.");

        param("Valve 5 - Power Channel Name", m_args.valve5_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 5.");

        param("Valve 6 - Power Channel Name", m_args.valve6_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 6.");

        param("Valve 7 - Power Channel Name", m_args.valve7_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 7.");

        param("Valve 8 - Power Channel Name", m_args.valve8_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 8.");

        param("Valve 9 - Power Channel Name", m_args.valve9_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 9.");

        param("Valve 10 - Power Channel Name", m_args.valve10_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls valve 10.");

        param("Water Flow - Entity Label", m_args.wf_elabel)
        .editable(false)
        .description("Entity label of the source of the water flow.");

        param("Maximum Water Level - GPIO Label", m_args.max_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the maximum water level.");

        param("Minimum Water Level - GPIO Label", m_args.min_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the minimum water level.");

        bind<IMC::WaterFlow>(this);
        bind<IMC::GpioState>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onActivation(void) override
      {
        queryPowerChannels();
        queryGpios();
      }

      void
      onDeactivation(void) override
      {
      }

      void
      tryResolveEntity(unsigned& eid, const std::string& elabel)
      {
        try
        {
          eid = resolveEntity(elabel);
        }
        catch (const std::exception& e)
        {
          err("Failed to resolve entity: %s", e.what());
          eid = UINT_MAX;
        }
      }

      void
      onEntityResolution(void)
      {
        tryResolveEntity(m_wf_eid, m_args.wf_elabel);
      }

      void
      onResourceInitialization(void) override
      {
        m_gpio_states.clear();
        m_gpio_states[m_args.min_wl_gpio] = false;
        m_gpio_states[m_args.max_wl_gpio] = false;

        m_pwr_ch_states.clear();
        m_pwr_ch_states[m_args.valve1_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve2_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve3_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve4_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve5_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve6_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve7_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve8_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve9_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.valve10_pwr_ch_label] = false;
      }

      void
      setPowerChannel(const std::string& label, bool on)
      {
        m_pcc.name = label;
        m_pcc.op = on ? IMC::PowerChannelControl::PCC_OP_TURN_ON :
                        IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_pcc);
      }

      void
      queryPowerChannels(void)
      {
        dispatch(m_qpcs);
      }

      void
      queryGpios(void)
      {
        for (const auto& gpio : m_gpio_states)
        {
          m_gsg.name = gpio.first;
          dispatch(m_gsg);
        }
      }

      void
      consume(const IMC::GpioState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto it = m_gpio_states.find(msg->name);
        if (it == m_gpio_states.end())
          return;

        it->second = (msg->value != 0);
        spew("GPIO %s state: %s", msg->name.c_str(), it->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto it = m_pwr_ch_states.find(msg->name);
        if (it == m_pwr_ch_states.end())
          return;

        it->second = (msg->state != 0);
        spew("power channel %s state: %s", msg->name.c_str(), it->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::WaterFlow* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_wf_eid)
          return;

        m_wf = msg->value;
        spew("water flow: %f m*m*m/s", m_wf);
      }

      void
      updateMachineState(void)
      { }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (isActive())
            updateMachineState();
        }
      }
    };
  }
}

DUNE_TASK
