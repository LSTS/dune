#ifndef MCI_HPP_INCLUDED_
#define MCI_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "SlaveUART.hpp"

namespace Transports
{
  namespace Leviathan
  {
    using DUNE_NAMESPACES;

    //! Number of power channels.
    static const unsigned c_power_channel_count = 3;
    //! Number of slave UARTs.
    static const unsigned c_slave_uart_count = 6;
    //! Channel number of first slave UART.
    static const unsigned c_slave_uart_offs = 4;
    //! LCB channels.
    static const unsigned c_channel_count = 10;

    class MCI
    {
    public:
      MCI(Tasks::Task* task,
          SerialPort& uart,
          const std::vector<uint8_t>& power_config,
          const std::vector<std::string>& baud_config,
          const std::vector<std::string>& frame_config):
        m_task(task),
        m_uart(uart),
        m_ctl(&uart),
        m_baud_config(baud_config),
        m_frame_config(frame_config)
      {
        std::memcpy(m_power_channels, &power_config[0], c_power_channel_count);

        tryForever("entering idle state", &MCI::leaveStreamState);
        tryForever("test connectivity", &MCI::getFirmwareInfo);
        tryForever("load power config", &MCI::getPowerConfig);
        tryForever("entering config state", &MCI::enterConfigState);
        tryForever("configuring power", &MCI::configPower);
        tryForever("configuring slave", &MCI::configSlave);
        tryForever("entering idle state", &MCI::enterIdleState);
        tryForever("entering stream state", &MCI::enterStreamState);
      }

    private:
      //! Packet identifiers.
      enum PacketId
      {
        //! Stream.
        PKT_ID_STREAM            = 1,
        //! Configuration.
        PKT_ID_CONFIG_PCTL_SET   = 2,
        //! Configuration.
        PKT_ID_CONFIG_PCTL_GET   = 3,
        //! Configuration.
        PKT_ID_CONFIG_SLAVE_UART = 4,
        //! Configuration pending.
        PKT_ID_CONFIG_PENDING    = 5,
        //! Change FSM state.
        PKT_ID_FSM_STATE_SET     = 6,
        //! Change FSM state.
        PKT_ID_FSM_STATE_GET     = 7
      };

      enum FSMState
      {
        //! Initializing.
        ST_BEGIN,
        //! Initialize PCTL.
        ST_PCTL,
        //! Initialize MSI.
        ST_MSI,
        //! Initialize date.
        ST_DATE,
        //! Initialize CPU.
        ST_CPU,
        //! Cfg state.
        ST_CFG,
        //! Idle.
        ST_IDLE,
        ST_STREAM,
        //! Last and invalid state.
        ST_LAST
      };

      Tasks::Task* m_task;
      SerialPort& m_uart;
      UCTK::Interface m_ctl;
      uint8_t m_power_channels[c_power_channel_count];
      const std::vector<std::string>& m_baud_config;
      const std::vector<std::string>& m_frame_config;

      void
      tryForever(const std::string& what, void (MCI::*method)(void))
      {
        while (true)
        {
          try
          {
            ((*this).*(method))();
            break;
          }
          catch (std::runtime_error& e)
          {
            m_task->err("%s: failed: %s", what.c_str(), e.what());
            Delay::wait(1.0);
          }
        }
      }

      void
      getFirmwareInfo(void)
      {
        UCTK::FirmwareInfo info = m_ctl.getFirmwareInfo();
        m_task->inf("%s v%u.%u.%u", info.name.c_str(),
                    info.major, info.minor, info.patch);
      }

      void
      getPowerConfig(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_CONFIG_PCTL_GET);
        frame.setPayloadSize(0);

        if (!m_ctl.sendFrame(frame))
          throw std::runtime_error("sending PCTL_GET");

        if (frame.getPayloadSize() != sizeof(m_power_channels))
          throw std::runtime_error("invalid payload size");

        // std::fprintf(stderr, "LCB: loaded power channels %02X, %02X, %02X\n",
        //              frame.getPayload()[0], frame.getPayload()[1], frame.getPayload()[2]);

        for (unsigned i = 0; i < c_power_channel_count; ++i)
          m_power_channels[i] |= frame.getPayload()[i];
      }

      void
      enterConfigState(void)
      {
        changeState(ST_CFG);
      }

      void
      enterIdleState(void)
      {
        changeState(ST_IDLE);
      }

      void
      enterStreamState(void)
      {
        m_task->inf("stream start");
        changeState(ST_STREAM);
      }

      void
      leaveStreamState(void)
      {
        m_ctl.flush();
        m_task->inf("stream stop");
        changeState(ST_IDLE);
      }

      bool
      getConfigPending(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_CONFIG_PENDING);
        frame.setPayloadSize(0);

        if (!m_ctl.sendFrame(frame))
          throw std::runtime_error("get config pending");

        uint8_t mode = 0;
        frame.get(mode, 0);
        return mode != 0;
      }

      void
      changeState(FSMState state, FSMState expected = ST_LAST)
      {
        if (expected == ST_LAST)
          expected = state;

        UCTK::Frame frame;
        frame.setId(PKT_ID_FSM_STATE_SET);
        frame.setPayloadSize(1);
        frame.set<uint8_t>(state, 0);

        m_task->inf("changing state to %u, expecting %u", state, expected);

        if (!m_ctl.sendFrame(frame))
          throw std::runtime_error("sending FSM_STATE_GET");

        if (!checkState(expected))
          throw std::runtime_error("unexpected state");
      }

      bool
      checkState(FSMState state)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_FSM_STATE_GET);
        frame.setPayloadSize(0);

        if (!m_ctl.sendFrame(frame))
          std::runtime_error("requesting state");

        uint8_t cstate = 0;
        frame.get(cstate, 0);
        return cstate == state;
      }

      bool
      waitConfigNotPending(double timeout = 5.0)
      {
        Time::Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (!getConfigPending())
            return true;
        }

        return false;
      }

      void
      configSlave(void)
      {
        unsigned uart = 0;
        while (uart < c_slave_uart_count)
        {
          unsigned channel = uart + c_slave_uart_offs;

          if (!m_baud_config[channel].empty() && !m_frame_config[channel].empty())
          {
            uint8_t baud = SlaveUART::getBaud(m_baud_config[channel]);
            uint8_t frame = SlaveUART::getFrame(m_frame_config[channel]);

            if (configSlaveUART(uart, baud, frame))
            {
              if (waitConfigNotPending())
                m_task->inf("configured UART#%u", uart);
            }
            else
            {
              m_task->err("failed to configure UART#%u", uart);
            }
          }

          ++uart;
        }
      }

      void
      configPower(void)
      {
        m_task->inf("configuring power");

        UCTK::Frame cmd;
        cmd.setId(PKT_ID_CONFIG_PCTL_SET);
        cmd.setPayloadSize(c_power_channel_count);
        for (unsigned i = 0; i < c_power_channel_count; ++i)
          cmd.set(m_power_channels[i], i);

        if (!m_ctl.sendFrame(cmd))
          throw std::runtime_error("sending CONFIG_PCTL_SET");

        if (getConfigPending())
          throw std::runtime_error("configuration pending");

        m_task->inf("power configured");
      }

      bool
      configSlaveUART(uint8_t number, uint8_t baud, uint8_t frame)
      {
        if (number > c_slave_uart_count)
          return false;

        m_task->inf("configuring UART#%u", number);

        UCTK::Frame cmd;
        cmd.setId(PKT_ID_CONFIG_SLAVE_UART);
        cmd.setPayloadSize(3);
        cmd.set(number, 0);
        cmd.set(baud, 1);
        cmd.set(frame, 2);

        return m_ctl.sendFrame(cmd);
      }
    };
  }
}

#endif
