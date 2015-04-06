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
//***************************************************************************

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <algorithm>
#include <cerrno>
#include <cstdlib>
#include <vector>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Command.hpp"

namespace UserInterfaces
{
  namespace MantaPanel
  {
    using DUNE_NAMESPACES;

    // Timeout for an acoustic operation order.
    static const double c_acop_tout = 10.0;

    enum Mode
    {
      MODE_NONE,
      MODE_SYS_SELECT,
      MODE_SYS_PING,
      MODE_SYS_ABORT
    };

    struct Arguments
    {
      //! Boot Banner.
      std::string banner;
      //! Length of LCD row (in characters).
      unsigned lcd_row_len;
      //! Button for system selection.
      unsigned btn_sys;
      //! Button for system pinging.
      unsigned btn_ping;
      //! Button for system abort.
      unsigned btn_abort;
      //! Command to execute on power down.
      std::string cmd_pwr_down;
      //! Command to execute on power down abort.
      std::string cmd_pwr_down_abort;
      //! CPU power channel.
      std::string pwr_chn_cpu;
      //! Name of supported systems.
      std::vector<std::string> systems;
      //! List of sections with system names.
      std::vector<std::string> sys_addr_sections;
      //! Set of excluded systems.
      std::vector<std::string> sys_exclude;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! LCD Control Message.
      IMC::LcdControl m_lcd;
      //! Supported system names.
      std::set<std::string> m_sys;
      //! System names iterator.
      std::set<std::string>::const_iterator m_sys_itr;
      //! Message with list of supported systems.
      IMC::AcousticSystems m_acoustic_systems;
      //! Current mode.
      Mode m_mode;
      //! True if powering down.
      bool m_power_down;
      //! True if powering down immediately.
      bool m_power_down_now;
      //! Command.
      Command* m_cmd;
      //! Time of last acoustic operation dispatch.
      double m_last_acop;
      //! Progress bar.
      unsigned m_prog_bar;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_mode(MODE_NONE),
        m_power_down(false),
        m_power_down_now(false),
        m_cmd(0),
        m_last_acop(-1.0),
        m_prog_bar(0)
      {
        // Define configuration parameters.
        param("Banner", m_args.banner)
        .defaultValue("")
        .description("Banner");

        param("LCD Row Length", m_args.lcd_row_len)
        .defaultValue("16")
        .description("LCD row length");

        param("Button - System", m_args.btn_sys)
        .defaultValue("0")
        .description("System selection button");

        param("Button - Ping", m_args.btn_ping)
        .defaultValue("1")
        .description("Ping button");

        param("Button - Abort", m_args.btn_abort)
        .defaultValue("2")
        .description("Ping button");

        param("Command - On Power Down", m_args.cmd_pwr_down)
        .defaultValue("")
        .description("Command to execute before powering down");

        param("Command - On Power Down Abort", m_args.cmd_pwr_down_abort)
        .defaultValue("")
        .description("Command to execute when powering down sequence is aborted");

        param("Power Channel - CPU", m_args.pwr_chn_cpu)
        .defaultValue("")
        .description("CPU power channel");

        param("Sections of System Addresses", m_args.sys_addr_sections)
        .defaultValue("")
        .description("List of table names");

        param("System Names", m_args.systems)
        .defaultValue("")
        .description("Array of supported system names");

        param("Exclude System Names", m_args.sys_exclude)
        .defaultValue("broadcast")
        .description("List of excluded systems");

        // Register listeners.
        bind<IMC::ButtonEvent>(this);
        bind<IMC::AcousticOperation>(this);
        bind<IMC::AcousticSystemsQuery>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::Abort>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.systems))
        {
          if (m_args.systems.empty())
          {
            for (unsigned i = 0; i < m_args.sys_addr_sections.size(); ++i)
            {
              std::vector<std::string> addrs = m_ctx.config.options(m_args.sys_addr_sections[i]);
              m_sys.insert(addrs.begin(), addrs.end());
            }
          }
          else
          {
            m_sys.insert(m_args.systems.begin(), m_args.systems.end());
          }

          // Remove our name from the list.
          m_sys.erase(getSystemName());
          for (size_t i = 0; i < m_args.sys_exclude.size(); ++i)
            m_sys.erase(m_args.sys_exclude[i]);

          m_sys_itr = m_sys.begin();
          m_acoustic_systems.list = String::join(m_sys.begin(), m_sys.end(), ",");
        }
      }

      void
      onResourceInitialization(void)
      {
        if (!m_args.banner.empty())
        {
          m_lcd.op = IMC::LcdControl::OP_WRITE0;
          m_lcd.text = center(String::str("> %s <", m_args.banner.c_str()));
          dispatch(m_lcd);

          m_lcd.op = IMC::LcdControl::OP_WRITE1;
          m_lcd.text = DUNE_SHORT_NAME " v" DUNE_VERSION_STR;
          dispatch(m_lcd);

          Delay::wait(2.0);
        }

        selectSystem(false);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      reset(void)
      {
        m_mode = MODE_NONE;
        m_last_acop = -1.0;
      }

      std::string
      center(const std::string& var)
      {
        unsigned pad = (m_args.lcd_row_len - var.size()) / 2;
        std::string str;
        str.assign(pad, ' ');
        str.insert(pad, var);
        str.resize(m_args.lcd_row_len, ' ');
        return str;
      }

      std::string
      fill(const std::string& var)
      {
        std::string str;
        str.assign(var);
        str.resize(m_args.lcd_row_len, ' ');
        return str;
      }

      void
      requestAbort(const std::string& sys)
      {
        IMC::AcousticOperation acop;
        acop.setDestination(getSystemId());
        acop.system = sys;
        acop.op = IMC::AcousticOperation::AOP_ABORT;
        dispatch(&acop, DF_LOOP_BACK);
      }

      void
      requestPing(const std::string& sys)
      {
        IMC::AcousticOperation acop;
        acop.setDestination(getSystemId());
        acop.system = sys;
        acop.op = IMC::AcousticOperation::AOP_RANGE;
        dispatch(&acop, DF_LOOP_BACK);
      }

      void
      consume(const IMC::Abort* msg)
      {
        requestAbort(resolveSystemId(msg->getDestination()));
      }

      void
      consume(const IMC::AcousticSystemsQuery* msg)
      {
        dispatchReply(*msg, m_acoustic_systems);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
        {
          if (!m_power_down)
          {
            m_power_down = true;
            m_lcd.op = IMC::LcdControl::OP_WRITE0;
            m_lcd.text = center("> Power Down <");
            dispatch(m_lcd);
          }

          if (!m_power_down_now)
          {
            m_lcd.op = IMC::LcdControl::OP_WRITE1;
            m_lcd.text = center(String::str("%d", (int)msg->time_remain));
            dispatch(m_lcd);
          }
        }
        else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
        {
          if (!m_power_down)
            return;

          m_power_down = false;
          m_power_down_now = false;

          m_lcd.op = IMC::LcdControl::OP_WRITE1;
          m_lcd.text = center("- Resuming -");
          dispatch(m_lcd);
          if (std::system(m_args.cmd_pwr_down_abort.c_str()) == -1)
            err(DTR("failed to execute power down command"));

          selectSystem(false);
        }
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        m_lcd.op = IMC::LcdControl::OP_WRITE1;

        switch (msg->op)
        {
          case IMC::AcousticOperation::AOP_RANGE_TIMEOUT:
            m_lcd.text = fill("Timeout");
            reset();
            break;

          case IMC::AcousticOperation::AOP_RANGE_RECVED:
            m_lcd.text = fill(String::str("Range %0.1fm", msg->range));
            reset();
            break;

          case IMC::AcousticOperation::AOP_ABORT_TIMEOUT:
            m_lcd.text = fill("Timeout");
            reset();
            break;

          case IMC::AcousticOperation::AOP_ABORT_ACKED:
            m_lcd.text = fill("Aborted!");
            reset();
            break;

          case IMC::AcousticOperation::AOP_UNSUPPORTED:
            m_lcd.text = fill("Not Supported");
            reset();
            break;

          case IMC::AcousticOperation::AOP_NO_TXD:
            m_lcd.text = fill("No Transducer");
            reset();
            break;

          case IMC::AcousticOperation::AOP_ABORT:
            abortSystem(msg->system);
            break;

          case IMC::AcousticOperation::AOP_RANGE:
            pingSystem(msg->system);
            break;

          default:
            return;
        }

        dispatch(m_lcd);
      }

      void
      consume(const IMC::ButtonEvent* msg)
      {
        if (m_sys.empty())
          return;

        if (m_mode == MODE_NONE || m_mode == MODE_SYS_SELECT)
        {
          if (msg->button == m_args.btn_sys && msg->value == 0)
          {
            selectSystem();
          }
          else if (msg->button == m_args.btn_ping && msg->value == 0)
          {
            requestPing(*m_sys_itr);
          }
          else if (msg->button == m_args.btn_abort && msg->value == 0)
          {
            requestAbort(*m_sys_itr);
          }
        }
      }

      void
      selectSystem(bool increment = true)
      {
        if (m_sys.empty())
          return;

        if (increment)
        {
          if (m_mode == MODE_SYS_SELECT)
          {
            ++m_sys_itr;
            if (m_sys_itr == m_sys.end())
              m_sys_itr = m_sys.begin();
          }
        }

        m_lcd.op = IMC::LcdControl::OP_WRITE0;
        m_lcd.text = center("* System *");
        dispatch(m_lcd);

        m_lcd.op = IMC::LcdControl::OP_WRITE1;
        m_lcd.text = fill(*m_sys_itr);
        dispatch(m_lcd);

        m_mode = MODE_SYS_SELECT;
      }

      void
      pingSystem(const std::string& sys)
      {
        m_lcd.op = IMC::LcdControl::OP_WRITE0;
        m_lcd.text = fill(sys);
        dispatch(m_lcd);

        m_lcd.op = IMC::LcdControl::OP_WRITE1;
        m_lcd.text = fill("Pinging...");
        dispatch(m_lcd);

        m_mode = MODE_SYS_PING;
        m_last_acop = Clock::get();
      }

      void
      abortSystem(const std::string& sys)
      {
        m_lcd.op = IMC::LcdControl::OP_WRITE0;
        m_lcd.text = fill(sys);
        dispatch(m_lcd);

        m_lcd.op = IMC::LcdControl::OP_WRITE1;
        m_lcd.text = fill("Aborting...");
        dispatch(m_lcd);

        m_mode = MODE_SYS_ABORT;
        m_last_acop = Clock::get();
      }

      void
      executeOnPowerDown(void)
      {
        if (!m_power_down)
          return;

        if (m_power_down_now)
          return;

        if (m_cmd == 0)
        {
          m_cmd = new Command(m_args.cmd_pwr_down);
          m_cmd->start();
          return;
        }

        if (m_cmd->isDone())
        {
          war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
          m_cmd->stopAndJoin();
          delete m_cmd;
          m_cmd = 0;

          m_lcd.op = IMC::LcdControl::OP_WRITE1;
          m_lcd.text = center("- Now -");
          dispatch(m_lcd);
          Delay::wait(1.0);
          m_power_down_now = true;

          IMC::PowerChannelControl pcc;
          pcc.name = m_args.pwr_chn_cpu;
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
          dispatch(pcc);
        }
      }

      void
      checkTimeout(void)
      {
        if (m_last_acop < 0)
          return;

        if (Clock::get() > (m_last_acop + c_acop_tout))
        {
          m_lcd.op = IMC::LcdControl::OP_WRITE0;
          m_lcd.text = center("> Failure <");
          dispatch(m_lcd);
          m_lcd.op = IMC::LcdControl::OP_WRITE1;
          m_lcd.text = center("Modem Timeout");
          dispatch(m_lcd);
          m_mode = MODE_NONE;
          m_last_acop = -1.0;
        }
      }

      void
      updateProgressBar(void)
      {
        if (m_mode == MODE_NONE || m_mode == MODE_SYS_SELECT)
          return;

        unsigned count = (unsigned)(Clock::get() - m_last_acop) % m_args.lcd_row_len;

        if (count > 0)
        {
          m_lcd.op = IMC::LcdControl::OP_WRITE1;
          m_lcd.text = fill(std::string(count, -1));
          dispatch(m_lcd);
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          executeOnPowerDown();
          updateProgressBar();
          checkTimeout();
        }
      }
    };
  }
}

DUNE_TASK
