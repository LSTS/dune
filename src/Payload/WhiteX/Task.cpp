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

    enum ModeEnum
    {
      MODE_INVALID = 0,
      MODE_AUTOMATIC = 1,
      MODE_MANUAL = 2
    };

    const std::unordered_map<std::string, ModeEnum> c_mode_map = {{ "Invalid", MODE_INVALID },
                                                                  { "Automatic", MODE_AUTOMATIC },
                                                                  { "Manual", MODE_MANUAL }};

    const std::unordered_map<ModeEnum, std::string> c_mode_str_map = {{ MODE_INVALID, "Invalid" },
                                                                      { MODE_AUTOMATIC, "Automatic" },
                                                                      { MODE_MANUAL, "Manual" }};

    //! Task arguments.
    struct Arguments
    {
      //! Operation mode.
      std::string mode;
      //! Pumps power channel labels.
      std::vector<std::string> pumps_pwr_ch_labels;
      //! Water flow source entity label.
      std::string wf_elabel;
      //! Maximum water level GPIO label.
      std::string max_wl_gpio;
      //! Minimum water level GPIO label.
      std::string min_wl_gpio;
      //! Manual control of pumps.
      bool manual_pumps;
    };

    //! Task to control WhiteX payload. 
    //!
    //! @author Bernardo Gabriel
    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Operation mode.
      ModeEnum m_mode;
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
      //! WaterFlow average.
      Math::MovingAverage<double> m_wf_avg;
      //! WaterFlow timer.
      Counter<double> m_wf_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_mode(MODE_INVALID),
        m_wf_eid(UINT_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Mode", m_args.mode)
        .defaultValue("Automatic")
        .values("Automatic, Manual")
        .description("Operation mode.");

        param("Pumps - Power Channel Names", m_args.pumps_pwr_ch_labels)
        .editable(false)
        .description("Names of the power channels that control the pumps.");

        param("Water Flow - Entity Label", m_args.wf_elabel)
        .editable(false)
        .description("Entity label of the source of the water flow.");

        param("Maximum Water Level - GPIO Label", m_args.max_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the maximum water level.");

        param("Minimum Water Level - GPIO Label", m_args.min_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the minimum water level.");

        param("Manual - Pumps", m_args.manual_pumps)
        .defaultValue("false")
        .description("Manual control for the pumps.");

        bind<IMC::WaterFlow>(this);
        bind<IMC::GpioState>(this);
        bind<IMC::PowerChannelState>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.mode))
        {
          auto it = c_mode_map.find(m_args.mode);
          if (it != c_mode_map.end())
          {
            m_mode = it->second;
            inf("Operation mode set to: %s", c_mode_str_map.at(m_mode).c_str());
          }
          else
          {
            err("Invalid operation mode: %s", m_args.mode.c_str());
            m_mode = MODE_INVALID;
          }
        }

        if (m_mode == MODE_MANUAL)
        {
          if (paramChanged(m_args.manual_pumps))
            setPumps(m_args.manual_pumps);
        }
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
        for (const auto& label : m_args.pumps_pwr_ch_labels)
          m_pwr_ch_states[label] = false;
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
      setPumps(bool state)
      {
        for (const auto& label : m_args.pumps_pwr_ch_labels)
          setPowerChannel(label, state);

        if (state)
        {
          m_wf_avg.clear();
          m_wf_timer.reset();
        }
        else
        {
          double mean = m_wf_avg.mean() * 1e6;
          double duration = m_wf_timer.getElapsed();
          debug("mean: %.2f mL/s | duration: %.2f s | volume: %.2f mL", mean, duration, mean * duration);
        }
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

        if (m_args.manual_pumps)
          m_wf_avg.update(msg->value);

        m_wf = msg->value;
        spew("water flow: %f m*m*m/s", m_wf);
      }

      void
      changeMode(ModeEnum mode)
      {
        if (mode == m_mode)
          return;

        auto it = c_mode_str_map.find(mode);
        if (it != c_mode_str_map.end())
        {
          m_mode = mode;
          inf("operation mode changed to: %s", it->second.c_str());
        }
        else
        {
          err("invalid operation mode: %d", static_cast<int>(mode));
        }
      }

      void
      updateMachineState(void)
      {
        if (!isActive())
          return;

        if (m_mode != MODE_AUTOMATIC)
          return;
      }

      void
      updateEntityState(void)
      {
        std::ostringstream ss;
        ss << (isActive() ? "active" : "idle");
        ss << " | m: " << c_mode_str_map.at(m_mode).front();

        ss << " | wl: " << static_cast<int>(m_gpio_states[m_args.min_wl_gpio])
                        << static_cast<int>(m_gpio_states[m_args.max_wl_gpio]);

        ss << " | wf: " << m_wf;

        ss << " | p: ";
        for (const auto& pwr_ch : m_pwr_ch_states)
          ss << static_cast<int>(pwr_ch.second);

        setEntityState(EntityState::ESTA_NORMAL, ss.str());
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateMachineState();
          updateEntityState();
        }
      }
    };
  }
}

DUNE_TASK
