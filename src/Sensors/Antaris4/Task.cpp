//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Antaris4
  {
    using DUNE_NAMESPACES;

    // States of the internal SM.
    enum SMStates
    {
      SM_STATE_NONE,
      SM_STATE_SYNC0,
      SM_STATE_SYNC1,
      SM_STATE_CLASS,
      SM_STATE_ID,
      SM_STATE_LENGTH0,
      SM_STATE_LENGTH1,
      SM_STATE_PAYLOAD,
      SM_STATE_CKA,
      SM_STATE_CKB
    };

    enum Header
    {
      HDR_SYNC0 = 0xB5,
      HDR_SYNC1 = 0x62
    };

    enum MessageClass
    {
      // Navigation Results.
      MC_NAV = 0x01,
      // Receiver Manager.
      MC_RXM = 0x02,
      // Informative.
      MC_INF = 0x04,
      // Ack/Nack Replies to CFG Inputs.
      MC_ACK = 0x05,
      // Configuration (Input).
      MC_CFG = 0x06,
      // Firmware Update.
      MC_UPD = 0x09,
      // Monitor.
      MC_MON = 0x0A,
      // Navigation Aiding.
      MC_AID = 0x0B,
      // Timing.
      MC_TIM = 0x0D
    };

    enum MessageId
    {
      // Receiver Manager - Raw Measurement Data.
      MI_RXM_RAW = 0x10,
      // Ack/Nack Replies to CFG Inputs - Message Acknowledged.
      MI_ACK_ACK = 0x01,
      // Ack/Nack Replies to CFG Inputs - Message Not-Acknowledged.
      MI_ACK_NAK = 0x02,
      // Get/Set Port Configuration for one or more I/O Port(s).
      MI_CFG_PRT = 0x00,
      // Set Message Rate(s).
      MI_CFG_MSG = 0x01,
      // Reset Receiver.
      MI_CFG_RST = 0x04,
      // Timepulse Configuration.
      MI_CFG_TP = 0x07,
      // Timepulse Timedata.
      MI_TIM_TP = 0x01,
      // Geodetic position in the currently selected ellipsoid.
      MI_NAV_POS_LLH = 0x02,
      // Velocity solution in NED.
      MI_NAV_VEL_NED = 0x12,
      // GPS Time solution.
      MI_NAV_TIME_UTC = 0x21
    };

    struct Packet
    {
      uint8_t mclass;
      uint8_t mid;
      uint16_t length;
      uint8_t payload[1024];
      uint8_t cksum_a;
      uint8_t cksum_b;
    };

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // Internal device port.
      int iport;
      // Pulse Tolerance - Calibration.
      double pulse_tol_cal;
      // Pulse Tolerance - Runtime.
      double pulse_tol_run;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Number of iterations to calibrate PPS.
      static const unsigned c_pps_cal_itr = 4;
      // Serial port handle.
      SerialPort* m_uart;
      // Internal serial port number to use.
      int m_iport;
      // Current SM state.
      SMStates m_fsm_state;
      // Count of parsed bytes from current message.
      int m_done;
      // Byte A of the checksum.
      uint8_t m_cka;
      // Byte B of the checksum.
      uint8_t m_ckb;
      // Packet beeing parsed.
      Packet m_packet;
      // GPS Navigation Data.
      IMC::GpsNavData m_navdata;
      // Task arguments.
      Arguments m_args;
      unsigned m_pps_cal_itr;
      // Last received pulse.
      IMC::Pulse m_pulse;
      // Time of next PPS.
      double m_next_pps;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_fsm_state(SM_STATE_NONE),
        m_pps_cal_itr(0),
        m_next_pps(-1.0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        param("Internal Port", m_args.iport)
        .defaultValue("3");

        param("Pulse Tolerance - Calibration", m_args.pulse_tol_cal)
        .units(Units::Second)
        .defaultValue("0.001");

        param("Pulse Tolerance - Runtime", m_args.pulse_tol_run)
        .units(Units::Second)
        .defaultValue("0.002");

        // Register listeners.
        bind<IMC::Pulse>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onResourceInitialization(void)
      {
        // Configure port.
        uint8_t prtcfg[20] = {0};

        // Port ID.
        prtcfg[0] = (uint8_t)m_args.iport;

        // 8 bit characters, no parity, 1 bit stop, LSB first bit order, 8x
        // oversampling.
        prtcfg[4] = 0xD0;
        prtcfg[5] = 0x08;
        prtcfg[6] = 0x08;
        prtcfg[7] = 0x00;

        // 57600 baud rate.
        prtcfg[8] = 0x00;
        prtcfg[9] = 0xE1;
        prtcfg[10] = 0x00;
        prtcfg[11] = 0x00;

        // Enable UBX input only.
        prtcfg[12] = 0x01;
        prtcfg[13] = 0x00;

        // Enable UBX output only.
        prtcfg[14] = 0x01;
        prtcfg[15] = 0x00;

        // Enable autobauding.
        prtcfg[16] = 0x01;
        prtcfg[17] = 0x00;

        if (!sendMessageWithRetry(MC_CFG, MI_CFG_PRT, prtcfg, sizeof(prtcfg), 10))
          throw std::runtime_error(String::str("unable to configure internal port '%d'", m_args.iport));

        // Configure output messages.
        configMessageOutput(MC_NAV, MI_NAV_POS_LLH);
        configMessageOutput(MC_NAV, MI_NAV_VEL_NED);

        // Stop time pulse and wait for it to actually stop.
        configTimePulse(0, 0);
        Delay::wait(4.0);

        // Set time pulse to 1Hz / 10% duty cycle.
        configTimePulse(1000, 100);

        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
      }

      void
      consume(const IMC::Pulse* msg)
      {
        if (m_next_pps < 0)
        {
          m_next_pps = msg->getTimeStamp() + 1.0;
          return;
        }

        double diff = std::fabs(msg->getTimeStamp() - m_next_pps);

        if (m_pps_cal_itr < c_pps_cal_itr)
        {
          if (diff > m_args.pulse_tol_cal)
          {
            m_next_pps = -1.0;
            return;
          }

          m_next_pps = msg->getTimeStamp() + 1.0;
          ++m_pps_cal_itr;
          return;
        }

        if (m_pps_cal_itr == c_pps_cal_itr)
        {
          inf("%s", DTR(Status::getString(Status::CODE_CALIBRATED)));
          configTimePulse(10, 1);
          m_next_pps = msg->getTimeStamp() + 1.0;
          ++m_pps_cal_itr;
          return;
        }

        if (diff <= m_args.pulse_tol_run)
        {
          m_next_pps = msg->getTimeStamp() + 1.0;
          m_pulse = *msg;
        }
      }

      bool
      sendMessage(MessageClass mcl, MessageId mid, const uint8_t* payload, uint16_t size, double timeout = 2.0)
      {
        uint8_t bfr[256] = {HDR_SYNC0, HDR_SYNC1};
        uint16_t total = size + 6 + 2;

        bfr[2] = (uint8_t)mcl;
        bfr[3] = (uint8_t)mid;

        ByteCopy::toLE(size, bfr + 4);
        std::memcpy(bfr + 6, payload, size);

        FletcherChecksum::compute(bfr + 2, size + 4, bfr[size + 6], bfr[size + 6 + 1]);

        // Send command to device.
        int rv = m_uart->write(bfr, total);
        if (rv != total)
        {
          err(DTR("unable to write full packet to device"));
          return false;
        }

        // Parse response, expecting an ACK.
        // Note: bfr and rv will be reused.
        fp64_t time_start = Clock::get();
        fp64_t time_remaining = timeout;

        while (time_remaining > 0.0)
        {
          IOMultiplexing::Result res = m_uart->hasNewData(time_remaining);

          // Timeout
          if (res == IOMultiplexing::PRES_NONE)
            break;

          // Error.
          if (res == IOMultiplexing::PRES_ERROR)
          {
            err("%s", DTR(Status::getString(Status::CODE_IO_ERROR)));
            return false;
          }

          rv = m_uart->read(bfr, 256);

          for (int i = 0; i < rv; ++i)
          {
            if (!parse(bfr[i]))
              continue;

            if (m_packet.mclass == MC_ACK)
            {
              if (mcl == m_packet.payload[0] && mid == m_packet.payload[1])
              {
                if (m_packet.mid != MI_ACK_ACK)
                  err("%s %02x / %02x", DTR("message not acknowledged"), mcl, mid);
                return (m_packet.mid == MI_ACK_ACK);
              }
            }
          }

          time_remaining = timeout - (Clock::get() - time_start);
        }

        return false;
      }

      bool
      sendMessageWithRetry(MessageClass mcl, MessageId mid, const uint8_t* payload, uint16_t size, double timeout = 2.0)
      {
        uint64_t deadline = (uint64_t)(Clock::getMsec() + timeout * 1000.0);

        while (Clock::getMsec() < deadline)
        {
          if (sendMessage(mcl, mid, payload, size, 1.0))
            return true;
        }

        return false;
      }

      bool
      isClass(uint8_t byte)
      {
        switch (byte)
        {
          case MC_NAV:
          case MC_RXM:
          case MC_INF:
          case MC_ACK:
          case MC_CFG:
          case MC_UPD:
          case MC_MON:
          case MC_AID:
          case MC_TIM:
            return true;
        }

        return false;
      }

      bool
      parse(uint8_t byte)
      {
        bool call_interpret = false;

        switch (m_fsm_state)
        {
          // Test for synchronization #0
          case SM_STATE_NONE:
            m_done = m_cka = m_ckb = 0;
            if (byte == 0xB5)
              m_fsm_state = SM_STATE_SYNC1;
            break;

            // Test for synchronization #1
          case SM_STATE_SYNC1:
            if (byte == 0x62)
              m_fsm_state = SM_STATE_CLASS;
            break;

            // Test for class.
          case SM_STATE_CLASS:
            if (isClass(byte))
            {
              FletcherChecksum::compute(&byte, 1, m_cka, m_ckb);
              m_packet.mclass = byte;
              m_fsm_state = SM_STATE_ID;
            }
            else
            {
              m_fsm_state = SM_STATE_NONE;
            }
            break;

            // Test for ID.
          case SM_STATE_ID:
            FletcherChecksum::compute(&byte, 1, m_cka, m_ckb);
            m_packet.mid = byte;
            m_fsm_state = SM_STATE_LENGTH0;
            break;

            // Parse message length #0.
          case SM_STATE_LENGTH0:
            FletcherChecksum::compute(&byte, 1, m_cka, m_ckb);
            m_packet.length = byte;
            m_fsm_state = SM_STATE_LENGTH1;
            break;

            // Parse message length #1.
          case SM_STATE_LENGTH1:
            FletcherChecksum::compute(&byte, 1, m_cka, m_ckb);
            m_packet.length |= (byte << 8);
            m_done = 0;
            m_fsm_state = SM_STATE_PAYLOAD;
            break;

          case SM_STATE_PAYLOAD:
            FletcherChecksum::compute(&byte, 1, m_cka, m_ckb);
            m_packet.payload[m_done] = byte;
            ++m_done;

            if (m_done == m_packet.length)
              m_fsm_state = SM_STATE_CKA;
            break;

            // Checksum byte A.
          case SM_STATE_CKA:
            if (m_cka == byte)
            {
              m_packet.cksum_a = byte;
              m_fsm_state = SM_STATE_CKB;
            }
            else
            {
              err("%s: %d / %d", DTR("checksum mismatch"), (int)m_cka, (int)byte);
              m_fsm_state = SM_STATE_NONE;
            }
            break;

            // Checksum byte B.
          case SM_STATE_CKB:
            m_fsm_state = SM_STATE_NONE;
            if (m_ckb == byte)
            {
              m_packet.cksum_b = byte;
              call_interpret = true;
            }
            else
              err("%s: %d / %d", DTR("checksum mismatch"), (int)m_cka, (int)byte);
            break;

            // Should never get here.
          default:
            err("%s: %02x", DTR("unexpected byte"), (int)byte);
            break;
        }

        return call_interpret;
      }

      void
      configTimePulse(uint32_t period, unsigned length)
      {
        // Convert arguments to microseconds.
        period *= 1000;
        length *= 1000;

        uint8_t cmd[] =
        {
          0x40, 0x42, 0x0f, 0x00, // Pulse period.
          0xa0, 0x86, 0x01, 0x00, // Pulse length.
          (uint8_t)(period ? 1 : 0),   // Enable/Disable.
          0x00,                   // UTC time.
          0x00, 0x00,             // Reserved.
          0x32, 0x00,             // Cable delay (ns).
          0x34, 0x03,             // Receiver RF group delay (ns).
          0x00, 0x00, 0x00, 0x00  // User delay (ns).
        };

        if (period != 0)
        {
          std::memcpy(cmd + 0, (void*)&period, 4);
          std::memcpy(cmd + 4, (void*)&length, 4);
        }

        if (!sendMessageWithRetry(MC_CFG, MI_CFG_TP, cmd, sizeof(cmd)))
          throw std::runtime_error("time pulse configuration");

        IMC::PulseDetectionControl pdc;
        pdc.op = period ? IMC::PulseDetectionControl::POP_ON : IMC::PulseDetectionControl::POP_OFF;
        dispatch(pdc);
      }

      void
      configMessageOutput(MessageClass mcl, MessageId mid, bool on_off = true)
      {
        uint8_t cmd[6] = {0};
        uint8_t target = 2 + m_args.iport;

        cmd[0] = mcl;
        cmd[1] = mid;
        cmd[target] = on_off ? 0x01 : 0x00;

        if (!sendMessageWithRetry(MC_CFG, MI_CFG_MSG, cmd, sizeof(cmd)))
          throw std::runtime_error("message output");
      }

      void
      interpret(void)
      {
        if (m_packet.mclass == MC_NAV)
        {
          if (m_packet.mid == MI_NAV_POS_LLH)
            interpretPOSLLH();
          else if (m_packet.mid == MI_NAV_VEL_NED)
            interpretVELNED();
        }
      }

      void
      interpretPOSLLH(void)
      {
        uint32_t utmp = 0;
        int32_t stmp = 0;

        ByteCopy::fromLE(m_navdata.itow, m_packet.payload);
        ByteCopy::fromLE(stmp, m_packet.payload + 4);
        m_navdata.lon = Angles::radians(stmp * 1e-7);
        ByteCopy::fromLE(stmp, m_packet.payload + 8);
        m_navdata.lat = Angles::radians(stmp * 1e-7);
        ByteCopy::fromLE(stmp, m_packet.payload + 12);
        m_navdata.height_ell = stmp / 1000.0;
        ByteCopy::fromLE(stmp, m_packet.payload + 16);
        m_navdata.height_sea = stmp / 1000.0;
        ByteCopy::fromLE(utmp, m_packet.payload + 20);
        m_navdata.hacc = utmp / 1000.0;
        ByteCopy::fromLE(utmp, m_packet.payload + 24);
        m_navdata.vacc = utmp / 1000.0;
      }

      void
      interpretVELNED(void)
      {
        uint32_t utmp = 0;
        int32_t stmp = 0;

        ByteCopy::fromLE(stmp, m_packet.payload + 4);
        m_navdata.vel_n = stmp / 100.0;
        ByteCopy::fromLE(stmp, m_packet.payload + 8);
        m_navdata.vel_e = stmp / 100.0;
        ByteCopy::fromLE(stmp, m_packet.payload + 12);
        m_navdata.vel_d = stmp / 100.0;
        ByteCopy::fromLE(utmp, m_packet.payload + 16);
        m_navdata.speed = utmp / 100.0;
        ByteCopy::fromLE(utmp, m_packet.payload + 20);
        m_navdata.gspeed = utmp / 100.0;
        ByteCopy::fromLE(stmp, m_packet.payload + 24);
        m_navdata.heading = Angles::radians(stmp * 1e-5);
        ByteCopy::fromLE(utmp, m_packet.payload + 28);
        m_navdata.sacc = utmp / 100.0;
        ByteCopy::fromLE(utmp, m_packet.payload + 32);
        m_navdata.cacc = Angles::radians(utmp * 1e-5);

        if (m_pps_cal_itr > c_pps_cal_itr && m_pulse.getTimeStamp() > 0)
        {
          m_navdata.setTimeStamp(m_pulse.getTimeStamp());
          dispatch(m_navdata, DF_KEEP_TIME);
        }
      }

      void
      onMain(void)
      {
        char bfr[512];

        while (!stopping())
        {
          consumeMessages();

          if (m_uart->hasNewData(0.01) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->read(bfr, sizeof(bfr));

          for (int i = 0; i < rv; ++i)
          {
            if (parse(bfr[i]))
              interpret();
          }
        }
      }
    };
  }
}

DUNE_TASK
