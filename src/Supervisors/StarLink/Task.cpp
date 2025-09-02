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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace StarLink
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //Time to stay on
      double time_to_stay_on;
      //Time to stay off
      double time_to_stay_off;
      // Power channel name of the starlink radio
      std::string power_channel;
    };

    enum ModemState
    {
      MODEM_OFF = 0,
      MODEM_ON = 1,
      MODEM_ALWAYS_ON = 2
    };

    enum TimerState
    {
      TIMER_OFF = 0,
      TIMER_ON = 1
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Watchdog to request loiter on service.
      Counter<double> m_wdog[2];
      //! Task arguments.
      Arguments m_args;
      //! State of modem
      uint8_t m_modem_state;
      //! Working mode of the modem
      bool m_is_working_mode;
      //! 

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Time to stay On", m_args.time_to_stay_on)
          .defaultValue("31200")
          .minimumValue("300")
          .description("Time in seconds to stay on the StarLink radio when powered on. Set to 0 to stay on indefinitely.");

        param("Time to stay Off", m_args.time_to_stay_off)
          .defaultValue("300")
          .minimumValue("120")
          .description("Time in seconds to stay off the StarLink radio when powered off.");

        param("Power Channel", m_args.power_channel)
          .defaultValue("STARLINK_C")
          .description("Name of the power channel that controls the StarLink radio.");

      }

      void
      onUpdateParameters(void)
      { 
        trace("onUpdateParameters");

        if (paramChanged(m_args.time_to_stay_on))
        {
          inf("Time to stay On parameter changed to: %.0f seconds", m_args.time_to_stay_on);
          m_wdog[TIMER_ON].setTop(m_args.time_to_stay_on);
          if(isActive())
            setOnSetup();
        }

        if (paramChanged(m_args.time_to_stay_off))
        {
          inf("Time to stay Off parameter changed to: %.0f seconds", m_args.time_to_stay_off);
          m_wdog[TIMER_OFF].setTop(m_args.time_to_stay_off);
          if(isActive())
            setOffSetup();
        }

        if (paramChanged(m_args.power_channel))
        {
          inf("Power Channel parameter changed to: %s", m_args.power_channel.c_str());
        }
      }

      void
      onResourceAcquisition(void)
      { 
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if(isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        inf("Time to stay On: %.0f seconds, Time to stay Off: %.0f seconds, Power Channel: %s",
            m_args.time_to_stay_on,
            m_args.time_to_stay_off,
            m_args.power_channel.c_str());

        m_is_working_mode = false;
      }

      void
      onResourceRelease(void)
      { }

      void
      onActivation(void) override
      {
        setOnSetup();
      }

      void
      onDeactivation(void) override
      {
        setOffSetup();
      }

      void
      setOnSetup(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        setPowerChannelState(true);
        m_is_working_mode = true;
        if (m_args.time_to_stay_on > 0)
        {
          m_modem_state = MODEM_ON;
          m_wdog[TIMER_ON].setTop(m_args.time_to_stay_on);
          m_wdog[TIMER_ON].reset();
          m_wdog[TIMER_OFF].setTop(m_args.time_to_stay_off);
          m_wdog[TIMER_OFF].reset();
          inf("StarLink Supervisor started with timed operation. Time to stay On: %.0f seconds, "
              "Time to stay Off: %.0f seconds",
              m_args.time_to_stay_on, m_args.time_to_stay_off);
        }
        else
        {
          m_modem_state = MODEM_ALWAYS_ON;
          inf("StarLink Supervisor started with always on operation.");
        }
      }

      void
      setOffSetup(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        setPowerChannelState(false);
        m_is_working_mode = false;
        m_modem_state = MODEM_OFF;
        inf("StarLink Supervisor started inactive.");
      }

      void
      setPowerChannelState(bool turn_on)
      {
        inf("Setting Power Channel %s to %s", m_args.power_channel.c_str(), turn_on ? "ON" : "OFF");
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.power_channel;
        if(turn_on)
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        else
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;

        dispatch(pcc, DF_LOOP_BACK);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.5);

          if (!isActive())
            continue;

          if (m_is_working_mode)
          {
            switch (m_modem_state)
            {
              case MODEM_OFF:
                if (m_wdog[TIMER_OFF].overflow())
                {
                  // Power on the StarLink radio
                  inf("StarLink radio powered ON");
                  setPowerChannelState(true);
                  m_modem_state = MODEM_ON;
                  m_wdog[TIMER_ON].reset();
                }
                break;

              case MODEM_ON:
                if (m_wdog[TIMER_ON].overflow())
                {
                  // Power off the StarLink radio
                  inf("StarLink radio powered OFF");
                  setPowerChannelState(false);
                  m_modem_state = MODEM_OFF;
                  m_wdog[TIMER_OFF].reset();
                }
                break;

              case MODEM_ALWAYS_ON:
                break;

              default:
                m_modem_state = MODEM_ON;
                m_wdog[TIMER_ON].reset();
                break;
            }
          }
        }
      }

    };
  }
}

DUNE_TASK
