//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef CONTROL_ARDUPILOTV2_PARSER_HPP_INCLUDED_
#define CONTROL_ARDUPILOTV2_PARSER_HPP_INCLUDED_

#include <functional>
#include <unordered_map>

#include <DUNE/DUNE.hpp>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waddress-of-packed-member"
#pragma GCC diagnostic ignored "-Wpedantic"

#include <mavlink_v2/ardupilotmega/mavlink.h>

#pragma GCC diagnostic pop

using DUNE_NAMESPACES;


IO::Handle*
createHandle(Address addr, uint16_t port)
{
  if (port == 14550 || port == 14551)
  {
    UDPSocket* udp = new UDPSocket;
    udp->bind(port);
    udp->connect(addr, port);
    return udp;
  }

  TCPSocket* tcp = new TCPSocket;
  tcp->connect(addr, port);
  tcp->setNoDelay(true);

  return tcp;
}

template <typename Task> class MavParser
{
public:
  typedef std::function<void(const mavlink_message_t&)> MavlinkHandler;

  //! Constructor.
  //! @param[in] tsk task owner.
  //! @param[in] addr address to connect to.
  //! @param[in] port port to connect to.
  //! @throw NetworkError if connection fails.
  MavParser(Task& tsk, Address addr, uint16_t port):
    m_tsk(tsk),
    m_sock(createHandle(addr, port))
  {
    m_tsk.inf("Connected to %s:%u", addr.c_str(), port);

    setIDs(255, 0);
    setTargetIDs(1, 1);
  }

  //! Setup system and component id.
  //! @param[in] sys_id System id.
  //! @param[in] comp_id Component id.
  void
  setIDs(uint8_t sys_id, uint8_t comp_id)
  {
    m_sys_id = sys_id;
    m_comp_id = comp_id;
  }

  //! Setup target system and component id.
  //! @param[in] sys_id Target system id.
  //! @param[in] comp_id Target component id.
  void
  setTargetIDs(uint8_t sys_id, uint8_t comp_id)
  {
    m_tgt_sys_id = sys_id;
    m_tgt_comp_id = comp_id;
  }

  //! Setup data stream.
  //! @param[in] stream_id Data stream id (enum MAV_DATA_STREAM).
  //! @param[in] hz Frequency of the stream.
  //! @param[in] enable Enable or disable the stream.
  void
  setStreamData(uint8_t stream_id, uint16_t hz, bool enable)
  {
    mavlink_msg_request_data_stream_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, m_tgt_comp_id,
                                         stream_id, hz, enable);

    sendMessage(m_msg);
  }

  //! Set message interval.
  //! @param[in] msg_id Message id.
  //! @param[in] us Interval in microseconds.
  void
  setMessageInterval(uint8_t msg_id, float us)
  {
    // param 3-7 are unused
    mavlink_msg_command_long_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, m_tgt_comp_id,
                                  MAV_CMD_SET_MESSAGE_INTERVAL, 0, msg_id, us, 0, 0, 0, 0, 0);

    sendMessage(m_msg);
  }

  void
  poll(double secs)
  {
    if (!Poll::poll(*m_sock, secs))
      return false;

    size_t rv = m_sock->read(m_buf, sizeof(m_buf));
    m_msg_ts = Clock::getSinceEpoch();

    mavlink_message_t new_msg;

    if (parse(m_buf, rv, new_msg))
      handleMsg(new_msg);

    return true;
  }

  //! Register message handler.
  //! @param[in] msg_id Message id.
  //! @param[in] handler Handler function.
  void
  bind(uint8_t msg_id, MavlinkHandler handler)
  {
    m_handlers[msg_id] = handler;
  }

  //! Register message handler.
  //! @param[in] msg_id Message id.
  //! @param[in] fp Task member function pointer.
  void
  bind(uint8_t msg_id, void (Task::*fp)(const mavlink_message_t&))
  {
    m_tsk.spew("Add consumer for mav id %d", msg_id);
    m_handlers[msg_id] = std::bind(fp, &m_tsk, std::placeholders::_1);
  }

  //! Register message handler.
  //! @param[in] msg_id Message id.
  //! @param[in] fp Parser member function pointer.
  void
  bind(uint8_t msg_id, void (MavParser<Task>::*fp)(const mavlink_message_t&))
  {
    m_handlers[msg_id] = std::bind(fp, this, std::placeholders::_1);
  }

  //! Send message.
  //! @param[in] msg mavlink message.
  //! @return number of bytes sent.
  size_t
  sendMessage(mavlink_message_t& msg)
  {
    uint16_t len = mavlink_msg_to_send_buffer(m_buf, &msg);
    return m_sock->write(m_buf, len);
  }
  }

private:
  //! Process incoming packet.
  //! @param[in] data buffer with the packet.
  //! @param[in] data_len length of the packet.
  //! @param[out] msg mavlink message.
  bool
  parse(const uint8_t* data, unsigned data_len, mavlink_message_t& msg)
  {
    mavlink_status_t status;

    for (unsigned i = 0; i < data_len; ++i)
    {
      if (mavlink_parse_char(MAVLINK_COMM_0, data[i], &msg, &status))
      {
        m_tgt_sys_id = msg.sysid;
        return true;
      }

      if (status.packet_rx_drop_count)
        return false;
    }

    return false;
  }

  //! Handle incoming message.
  //! @param[in] msg mavlink message.
  void
  handleMsg(mavlink_message_t& msg)
  {
    m_tsk.spew("Received message with id: %d", msg.msgid);
    auto it = m_handlers.find(msg.msgid);
    if (it != m_handlers.end())
      it->second(msg);
  }

  //! System id.
  uint8_t m_sys_id;
  //! Component id.
  uint8_t m_comp_id;
  //! Target system id.
  uint8_t m_tgt_sys_id;
  //! Target component id.
  uint8_t m_tgt_comp_id;
  //! Mavlink message.
  mavlink_message_t m_msg;
  //! Buffer for incoming messages.
  uint8_t m_buf[MAVLINK_MAX_PACKET_LEN];
  //! Task owner.
  Task& m_tsk;
  //! Connection socket.
  IO::Handle* m_sock;
  //! Message handlers.
  std::unordered_map<uint8_t, MavlinkHandler> m_handlers;
};

#endif  // CONTROL_ARDUPILOTV2_PARSER_HPP_INCLUDED_