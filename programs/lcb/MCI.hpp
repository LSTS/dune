#ifndef MCI_HPP_INCLUDED_
#define MCI_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Filters/Table.hpp"
#include "SlaveUART.hpp"

namespace LCB
{
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
    MCI(SerialPort& uart, Parsers::Config& config):
      m_uart(uart),
      m_ctl(&uart),
      m_config(config),
      m_table(config)
    {
      std::memset(m_power_channels, 0, c_power_channel_count);

      tryForever("entering idle state", &MCI::leaveStreamState);
      tryForever("test connectivity", &MCI::getFirmwareInfo);
      tryForever("load power config", &MCI::getPowerConfig);

      loadPowerLines();

      tryForever("entering config state", &MCI::enterConfigState);
      tryForever("configuring power", &MCI::configPower);
      tryForever("configuring slave", &MCI::configSlave);
      tryForever("entering idle state", &MCI::enterIdleState);
      tryForever("entering stream state", &MCI::enterStreamState);
    }

    void
    run(void)
    {
      DUNE_MSG("LCB", "main loop");

      uint8_t bfr[1024] = {0};

      m_table.start();

      while (true)
      {
        if (!Poll::poll(m_uart, 1.0))
          continue;

        size_t rv = m_uart.read(bfr, sizeof(bfr));
        //DUNE_MSG("LCB", "read " << rv);
        for (size_t i = 0; i < rv; ++i)
        {
          m_table.push(bfr[i]);
        }
      }
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

    SerialPort& m_uart;
    Parsers::Config& m_config;
    Filters::Table m_table;
    UCTK::Interface m_ctl;
    uint8_t m_power_channels[c_power_channel_count];

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
          DUNE_ERR("LCB", e.what() << ": failed: " << e.what());
          Delay::wait(1.0);
        }
      }
    }

    void
    getFirmwareInfo(void)
    {
      UCTK::FirmwareInfo info = m_ctl.getFirmwareInfo();
      DUNE_MSG("LCB", info.name.c_str()
               << " v" << (unsigned)info.major
               << "." << (unsigned)info.minor
               << "." << (unsigned)info.patch);
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

      std::fprintf(stderr, "LCB: loaded power channels %02X, %02X, %02X\n", frame.getPayload()[0], frame.getPayload()[1], frame.getPayload()[2]);
      std::memcpy(m_power_channels, frame.getPayload(), frame.getPayloadSize());
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
      DUNE_MSG("LCB", "starting streaming\r\n");
      changeState(ST_STREAM);
    }

    void
    leaveStreamState(void)
    {
      m_ctl.flush();
      DUNE_MSG("LCB", "leaving stream state\r\n");
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

      DUNE_MSG("LCB", "changing state to " << state << " expecting " << expected);

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
      DUNE_MSG("LCB", "state is " << (unsigned)cstate << ", expecting " << state);
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

        std::string baud_str;
        m_config.get("LCB", String::str("Channel %u - Baud Rate", channel), "", baud_str);
        std::string frame_str;
        m_config.get("LCB", String::str("Channel %u - Frame Format", channel), "", frame_str);

        if (!baud_str.empty() && !frame_str.empty())
        {
          uint8_t baud = SlaveUART::getBaud(baud_str);
          uint8_t frame = SlaveUART::getFrame(frame_str);

          if (configSlaveUART(uart, baud, frame))
          {
            if (waitConfigNotPending())
              DUNE_MSG("LCB", "UART#" << uart << ": configured");
          }
          else
          {
            DUNE_ERR("LCB", "UART#" << uart << ": configuration failed");
          }
        }

        ++uart;
      }
    }

    void
    configPower(void)
    {
      DUNE_MSG("LCB", "PCTL: configuring");

      UCTK::Frame cmd;
      cmd.setId(PKT_ID_CONFIG_PCTL_SET);
      cmd.setPayloadSize(c_power_channel_count);
      for (unsigned i = 0; i < c_power_channel_count; ++i)
        cmd.set(m_power_channels[i], i);

      if (!m_ctl.sendFrame(cmd))
        throw std::runtime_error("sending CONFIG_PCTL_SET");

      if (getConfigPending())
        throw std::runtime_error("configuration pending");

      DUNE_MSG("LCB", "PCTL: configured");
    }

    void
    loadPowerLines(void)
    {
      for (unsigned i = 0; i < c_channel_count; ++i)
        loadPowerLine(i);
    }

    void
    loadPowerLine(unsigned number)
    {
      std::vector<unsigned> power_line;
      m_config.get("LCB", String::str("Channel %u - Power Line", number), "255", power_line);

      for (size_t i = 0; i < power_line.size(); ++i)
      {
        uint8_t channel = power_line[i] / 8;
        if (channel < c_power_channel_count)
        {
          m_power_channels[channel] |= 1 << power_line[i] % 8;
          std::fprintf(stderr, "%d: %02X\n", channel, m_power_channels[channel]);
        }
      }
    }

    bool
    configSlaveUART(uint8_t number, uint8_t baud, uint8_t frame)
    {
      if (number > c_slave_uart_count)
        return false;

      DUNE_MSG("LCB", "UART#" << (unsigned)number << ": configuring");

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

#endif
