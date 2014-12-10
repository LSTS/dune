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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_EDGETECH_2205_COMMAND_LINK_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_COMMAND_LINK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    class CommandLink
    {
    public:
      CommandLink(Tasks::Task* parent, const Address& addr, unsigned port):
        m_parent(parent),
        m_time_delta(0)
      {
        m_sock.setNoDelay(true);
        setSocketTimeout(1.0);
        m_sock.connect(addr, port);
        m_bfr.resize(c_max_size);
      }

      ~CommandLink(void)
      {
      }

      void
      setSocketTimeout(double value)
      {
        m_sock.setSendTimeout(value);
        m_sock.setReceiveTimeout(value);
      }

      void
      setPingAutoselectMode(SubsystemId subsys, uint32_t mode)
      {
        m_pkt.setMessageType(MSG_ID_PING_AUTOSEL_MODE);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setValue(mode);
        sendPacket(m_pkt);
      }

      void
      setDataActive(SubsystemId subsys, unsigned channel, uint32_t mode)
      {
        m_pkt.setMessageType(MSG_ID_DATA_ACTIVE);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(channel);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setValue(mode);
        sendPacket(m_pkt);
      }

      void
      setPingRange(SubsystemId subsys, uint32_t range)
      {
        // Convert to millimeter.
        range *= 1000;

        m_pkt.setMessageType(MSG_ID_PING_RANGE);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setValue(range);
        sendPacket(m_pkt);

        uint32_t reply_range = getPingRange(subsys);
        if (reply_range != range)
        {
          throw std::runtime_error(DTR("failed to set range"));
        }
      }

      void
      setAGC(SubsystemId subsys, uint32_t value)
      {
        m_pkt.setMessageType(MSG_ID_ADC_AGC);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setValue(value);
        sendPacket(m_pkt);
      }

      unsigned
      getPingRange(SubsystemId subsys)
      {
        m_pkt.setMessageType(MSG_ID_PING_RANGE);
        m_pkt.setCommandType(COMMAND_TYPE_GET);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setMessageSize(0);
        sendPacket(m_pkt);

        const Packet* reply = read(MSG_ID_PING_RANGE, COMMAND_TYPE_REPLY, subsys, 0, 1.0);

        if (reply == NULL)
          throw std::runtime_error(DTR("failed to get range"));

        return reply->getValue();
      }

      void
      setPingTrigger(SubsystemId subsys, TriggerMode mode)
      {
        m_pkt.setMessageType(MSG_ID_PING_TRIGGER);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setValue(mode);
        sendPacket(m_pkt);
      }

      //! Set ping coupling parameters of slave systems.
      //! @param[in] subsys subsystem identifier.
      //! @param[in] tsrc id number of the master subsystem.
      //! @param[in] tdiv an integer divisor specifying that the slave
      //! subsystem will respond to every tdiv input from the master.
      //! @param[in] tdel trigger delay in microsecond.
      void
      setPingCoupling(SubsystemId subsys, SubsystemId tsrc, uint32_t tdiv, uint32_t tdel)
      {
        m_pkt.setMessageType(MSG_ID_PING_COUPLING_PARAMS);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.set<uint32_t>(tsrc, 0);
        m_pkt.set(tdiv, 4);
        m_pkt.set(tdel, 8);
        m_pkt.setMessageSize(12);
        sendPacket(m_pkt);
      }

      void
      setPing(SubsystemId subsys, uint32_t value)
      {
        m_pkt.setMessageType(MSG_ID_PING);
        m_pkt.setSubsystemNumber(subsys);
        m_pkt.setChannel(0);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setValue(value);
        sendPacket(m_pkt);
      }

      void
      dispatchDebugData(const std::string& text)
      {
        if (m_parent->getDebugLevel() < DEBUG_LEVEL_DEBUG)
          return;

        IMC::DevDataText msg;
        msg.value = text;
        m_parent->dispatch(msg);
      }

      //! Estimate time difference between local CPU and sidescan CPU.
      //! @return time difference from previous estimate.
      int64_t
      estimateTimeDelta(unsigned max_latency)
      {
        int64_t local_time = 0;

        // Request sidescan time.
        m_pkt.setMessageType(MSG_ID_SYSTEM_TIME);
        m_pkt.setSubsystemNumber(0);
        m_pkt.setChannel(0);
        m_pkt.setCommandType(COMMAND_TYPE_GET);
        local_time = Clock::getSinceEpochMsec();
        sendPacket(m_pkt);

        // Wait for reply.
        const Packet* reply = read(MSG_ID_SYSTEM_TIME, COMMAND_TYPE_REPLY, 0, 0, 1.0);
        if (reply == NULL)
        {
          m_parent->debug("no reply to system time request");
          return std::numeric_limits<long int>::max();
        }

        // Convert to milliseconds since epoch.
        uint32_t secs = 0;
        reply->get<uint32_t>(secs, 0);
        uint32_t msecs = 0;
        reply->get<uint32_t>(msecs, 4);

        int64_t ss_time = secs;
        ss_time *= 1000;
        ss_time += msecs % 1000;

        // Compute network latency.
        int64_t latency = (reply->getTimeStamp() - local_time) / 2;
        if (latency > max_latency)
        {
          dispatchDebugData(String::str("latency = %lld, exceeds %u",
                                        latency,
                                        max_latency));
          return std::numeric_limits<long int>::max();
        }

        int64_t time_delta = local_time - ss_time - latency;
        if (m_time_delta == 0)
        {
          m_time_delta = time_delta;

          dispatchDebugData(String::str("latency = %lld, initial delta = %lld",
                                        latency,
                                        m_time_delta));
          return std::numeric_limits<long int>::max();
        }

        int64_t delta_diff = m_time_delta - time_delta;
        if (delta_diff < 0)
          delta_diff *= -1;

        m_time_delta += time_delta;
        m_time_delta /= 2;

        dispatchDebugData(String::str("latency = %lld, delta = %lld : %lld",
                                      latency,
                                      delta_diff,
                                      m_time_delta));

        return delta_diff;
      }

      int64_t
      getEstimatedTimeDelta(void)
      {
        return m_time_delta;
      }

      void
      shutdown(void)
      {
        m_pkt.setMessageType(MSG_ID_SYSTEM_SHUTDOWN);
        m_pkt.setSubsystemNumber(0);
        m_pkt.setChannel(0);
        m_pkt.setCommandType(COMMAND_TYPE_SET);
        m_pkt.setValue(1);
        sendPacket(m_pkt);
      }

    private:
      //! Maximum packet size.
      static const unsigned c_max_size = 4096;
      //! Time difference estimation: samples per average.
      static const unsigned c_time_diff_sample_count = 10;
      //! Parent task.
      Tasks::Task* m_parent;
      //! TCP socket.
      TCPSocket m_sock;
      //! I/O multiplexer.
      Poll m_poll;
      //! Parser.
      Parser m_parser;
      //! Packet.
      Packet m_pkt;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Time delta.
      int64_t m_time_delta;

      void
      sendPacket(const Packet& pkt)
      {
        m_sock.write((const char*)pkt.getData(), pkt.getSize());
      }

      const Packet*
      read(uint16_t msg_id, uint8_t cmd_type, uint8_t subsys, uint8_t channel, double timeout = 1.0)
      {
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (Poll::poll(m_sock, timer.getRemaining()))
          {
            size_t rv = m_sock.read(&m_bfr[0], m_bfr.size());
            for (size_t i = 0; i < rv; ++i)
            {
              if (!m_parser.parse(m_bfr[i]))
                continue;

              const Packet* pkt = m_parser.getPacket();

              if ((pkt->getMessageType() == msg_id)
                  && (pkt->getCommandType() == cmd_type)
                  && (pkt->getSubsystemNumber() == subsys)
                  && (pkt->getChannel() == channel))
              {
                return pkt;
              }
            }
          }
        }

        return NULL;
      }
    };
  }
}

#endif
