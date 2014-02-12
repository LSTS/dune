//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Kristian Klausen                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace UserInterfaces
{
  namespace RCViaArdupilot
  {
    using DUNE_NAMESPACES;

    static const unsigned int NUMBER_OF_CHANNELS = 8;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    // This task connects to an APM, and gets its raw RC input value.
    struct Task : public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments.
      Arguments m_args;
      //! Ardupilot system id.
      int m_sysid;
      //! Mavlink transmission buffer.
      uint8_t m_buf[512];
      //! Parser Variables.
      mavlink_message_t m_msg;
      //! Got first RC input.
      bool m_got_first_rc_input;
      //! Time of previous packet.
      double m_time_of_previous_packet;
      //! Holds current sent PWM values.
      IMC::PWM m_pwm[NUMBER_OF_CHANNELS];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_got_first_rc_input(false)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        m_time_of_previous_packet = Clock::get();

        initializePWMContainer();

        setEntityState(IMC::EntityState::ESTA_ERROR, "Not yet gotten first RC input.");
      }

      // Resets private PWM container and sets correct IDs.
      void
      initializePWMContainer()
      {
        for (unsigned int i = 0; i < NUMBER_OF_CHANNELS; ++i)
        {
          m_pwm[i].id = i + 1; // 1-indexed id.
          m_pwm[i].period = 20000;
          m_pwm[i].duty_cycle = 1500;
        }
      }

      void
      setupRate(uint8_t rate)
      {
        debug(DTR("Enabling rates."));

        uint8_t buf[512];
        mavlink_message_t* msg = new mavlink_message_t;

        mavlink_msg_request_data_stream_pack(255, 0, msg,
                                             m_sysid,
                                             0,
                                             MAV_DATA_STREAM_ALL,
                                             0,
                                             0);

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);
        spew(DTR("Disabled all streams."));

        mavlink_msg_request_data_stream_pack(255, 0, msg,
                                             m_sysid,
                                             0,
                                             MAV_DATA_STREAM_RC_CHANNELS,
                                             rate,
                                             1);

        n = mavlink_msg_to_send_buffer(buf, msg);
        sendData(buf, n);

        spew(DTR("Enabled RC output."));
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        openConnection();
        setupRate(10);
      }

      void
      openConnection(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (Exception& ex)
        {
          err(DTR("Error opening serial device: %s"), ex.what());
        }
        catch (...)
        {
          err(DTR("Error opening serial device. "));
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          Memory::clear(m_uart);
        }
      }

      bool
      poll(double timeout)
      {
        if (m_uart != NULL)
          return Poll::poll(*m_uart, timeout);

        return false;
      }

      int
      sendData(uint8_t* bfr, uint8_t size)
      {
        if (m_uart)
        {
          trace(DTR("Sending something"));
          return m_uart->write((char*)bfr, size);
        }
        return 0;
      }

      int
      receiveData(uint8_t* buf, size_t blen)
      {
        if (m_uart)
        {
          try
          {
            return m_uart->read(buf, blen);
          }
          catch (std::runtime_error& e)
          {
            err(DTR("%s"), e.what());
            war(DTR("Connection lost, retrying..."));
            Memory::clear(m_uart);

            openConnection();

            return 0;
          }
        }
        return 0;
      }

      void
      handleArdupilotData(void)
      {
        mavlink_status_t status;
        while (poll(0.01))
        {
          int n = receiveData(m_buf, sizeof(m_buf));

          if (n < 0)
          {
            debug(DTR("Receive error"));
            break;
          }

          for (int i = 0; i < n; i++)
          {
            int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_msg, &status);
            if (status.packet_rx_drop_count)
            {
              switch (status.parse_state)
              {
                case MAVLINK_PARSE_STATE_IDLE:
                  spew(DTR("failed at state IDLE, count: %d"), status.packet_rx_drop_count);
                  break;
                case MAVLINK_PARSE_STATE_GOT_STX:
                  spew(DTR("failed at state GOT_STX"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_LENGTH:
                  spew(DTR("failed at state GOT_LENGTH"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_SYSID:
                  spew(DTR("failed at state GOT_SYSID"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_COMPID:
                  spew(DTR("failed at state GOT_COMPID"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_MSGID:
                  spew(DTR("failed at state GOT_MSGID"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                  spew(DTR("failed at state GOT_PAYLOAD"));
                  break;
                case MAVLINK_PARSE_STATE_GOT_CRC1:
                  spew(DTR("failed at state GOT_CRC1"));
                  break;
                default:
                  spew(DTR("failed OTHER"));
                  break;
              }
            }

            if (rv)
            {
              switch ((int)m_msg.msgid)
              {
                default:
                  spew(DTR("UNDEF: %u"), m_msg.msgid);
                  break;
                case MAVLINK_MSG_ID_HEARTBEAT:
                  trace(DTR("HEARTBEAT"));
                  break;
                case MAVLINK_MSG_ID_STATUSTEXT:
                  trace(DTR("STATUSTEXT"));
                  handleStatusTextPacket(&m_msg);
                  break;
                case MAVLINK_MSG_ID_RC_CHANNELS_RAW:
                  trace(DTR("RC_CHANNELS_RAW"));
                  handleRCChannelsRawPacket(&m_msg);
                  break;
              }

              m_sysid = m_msg.sysid;
            }
          }
        }
      }

      void
      handleStatusTextPacket(const mavlink_message_t* msg)
      {
        mavlink_statustext_t stat_tex;
        mavlink_msg_statustext_decode(msg, &stat_tex);
        debug(DTR("Status: %s"), stat_tex.text);
      }

      void
      handleRCChannelsRawPacket(const mavlink_message_t* msg)
      {

        m_time_of_previous_packet = Clock::get();

        mavlink_rc_channels_raw_t rc_raw;
        mavlink_msg_rc_channels_raw_decode(msg, &rc_raw);

        debug(DTR("RC raw %d %d %d %d %d %d: "),
              rc_raw.chan1_raw,
              rc_raw.chan2_raw,
              rc_raw.chan3_raw,
              rc_raw.chan4_raw,
              rc_raw.chan5_raw,
              rc_raw.chan6_raw);

        m_pwm[0].duty_cycle = rc_raw.chan1_raw;
        m_pwm[1].duty_cycle = rc_raw.chan2_raw;
        m_pwm[2].duty_cycle = rc_raw.chan3_raw;
        m_pwm[3].duty_cycle = rc_raw.chan4_raw;
        m_pwm[4].duty_cycle = rc_raw.chan5_raw;
        m_pwm[5].duty_cycle = rc_raw.chan6_raw;
        m_pwm[6].duty_cycle = rc_raw.chan7_raw;
        m_pwm[7].duty_cycle = rc_raw.chan8_raw;

        for (unsigned int i = 0; i < NUMBER_OF_CHANNELS; ++i)
        {
          dispatch(m_pwm[i]);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        double prev_try = Clock::get();
        while (!stopping())
        {

          if (m_uart)
          {
            handleArdupilotData();
          }
          double now = Clock::get();

          // Timeout of last packet of 1 second. and we think all is ok.
          if ((m_time_of_previous_packet + 1) < now)
          {
            if (getEntityState() == IMC::EntityState::ESTA_NORMAL)
            {
              war(DTR("Timeout of prev. packet received!"));
              setEntityState(IMC::EntityState::ESTA_ERROR, "Timeout of packet.");
            }
          }
          // Not timeout and we were in an error state
          else if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
          {
            inf(DTR("Got packet, all is ok. "));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          // If error, 1 second timeout on new try.
          if (getEntityState() != IMC::EntityState::ESTA_NORMAL && (prev_try + 1) < now)
          {
            prev_try = Clock::get();
            war(DTR("Still not got any RC packets, retrying rate setup.."));
            setupRate(10);
          }
          // Handle IMC messages from bus
          consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK
