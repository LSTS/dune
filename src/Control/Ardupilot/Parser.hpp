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

static const uint64_t s_since_boot = Clock::getNsec();

template <typename Task> class MavParser
{
public:
  typedef std::function<void(const mavlink_message_t&)> MavlinkHandler;

  //! Constructor.
  //! @param[in] tsk task owner.
  //! @param[in] addr address to connect to.
  //! @param[in] port port to connect to.
  //! @throw NetworkError if connection fails.
  MavParser(Task& tsk, const std::string& handle):
    m_tsk(tsk),
    m_sock(createHandle(handle))
  {
    m_tsk.inf("Connected to %s", handle.c_str());

    setIDs(255, 0);
    setTargetIDs(1, 0);

    bind(MAVLINK_MSG_ID_SYS_STATUS, &MavParser::handleSysStatus);
    bind(MAVLINK_MSG_ID_RAW_IMU, &MavParser::handleRawIMU);
    bind(MAVLINK_MSG_ID_ATTITUDE, &MavParser::handleAttitude);
    bind(MAVLINK_MSG_ID_COMMAND_ACK, &MavParser::handleAck);
    bind(MAVLINK_MSG_ID_TIMESYNC, &MavParser::handleTimeSync);
    bind(MAVLINK_MSG_ID_STATUSTEXT, &MavParser::handleStatusText);
    bind(MAVLINK_MSG_ID_PARAM_VALUE, &MavParser::onParamValue);
  }

  void
  onParamValue(const mavlink_message_t& msg)
  {
    mavlink_param_value_t param;
    mavlink_msg_param_value_decode(&msg, &param);

    std::string name(param.param_id);
    m_tsk.spew("param_id: %s", name.c_str());

    //? Store parameters

    m_param_count = param.param_count;
    m_param_index = param.param_index > m_param_index ? param.param_index : m_param_index;
  }

  bool
  allParamsReceived(void)
  {
    return m_param_index == m_param_count;
  }

  ~MavParser(void)
  {
    Memory::clear(m_sock);
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
    std::map<uint8_t, std::string> stream_map = {
      { MAV_DATA_STREAM_ALL, "All" },
      { MAV_DATA_STREAM_RAW_SENSORS, "Raw Sensors" },
      { MAV_DATA_STREAM_EXTENDED_STATUS, "Extended Status" },
      { MAV_DATA_STREAM_RC_CHANNELS, "RC Channels" },
      { MAV_DATA_STREAM_RAW_CONTROLLER, "Raw Controller" },
      { MAV_DATA_STREAM_POSITION, "Position" },
      { MAV_DATA_STREAM_EXTRA1, "Extra1" },
      { MAV_DATA_STREAM_EXTRA2, "Extra2" },
      { MAV_DATA_STREAM_EXTRA3, "Extra3" },
    };

    m_tsk.war("Setting stream %s to %s at %d Hz", stream_map[stream_id].c_str(),
              enable ? "enabled" : "disabled", hz);

    mavlink_msg_request_data_stream_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, 1,
                                         stream_id, hz, enable);

    sendMessage(m_msg);
  }

  void
  requestParams(void)
  {
    mavlink_msg_param_request_list_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, m_tgt_comp_id);

    sendMessage(m_msg);
  }

  void
  sendHeartBeat(void)
  {
    mavlink_msg_heartbeat_pack(m_sys_id, m_comp_id, &m_msg, MAV_TYPE_GCS, MAV_AUTOPILOT_INVALID, 0,
                               0, 0);

    sendMessage(m_msg);
  }

  void
  sendCommand(uint16_t cmd, float p1 = 0, float p2 = 0, float p3 = 0, float p4 = 0, float p5 = 0,
              float p6 = 0, float p7 = 0)
  {
    mavlink_msg_command_long_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, m_tgt_comp_id, cmd, 0,
                                  p1, p2, p3, p4, p5, p6, p7);

    sendMessage(m_msg);
  }

  //! Set target position.
  //! @param[in] mask Position mask.
  //! @param[in] fx Target x acceleration/force.
  //! @param[in] fy Target y acceleration/force.
  //! @param[in] fz Target z acceleration/force.
  void
  setTargetPosition(uint16_t mask, float fx, float fy, float fz)
  {
    mavlink_msg_set_position_target_local_ned_pack(m_sys_id, m_comp_id, &m_msg, Clock::getMsec(),
                                                   m_tgt_sys_id, m_tgt_comp_id, MAV_FRAME_LOCAL_NED,
                                                   mask, 0, 0, 0, 0, 0, 0, fx, fy, fz, 0, 0);

    sendMessage(m_msg);
  }

  //! Set message interval.
  //! @param[in] msg_id Message id.
  //! @param[in] us Interval in microseconds.
  void
  setMessageInterval(uint8_t msg_id, int32_t us)
  {
    mavlink_msg_message_interval_pack(m_sys_id, m_comp_id, &m_msg, msg_id, us);

    sendMessage(m_msg);
  }

  //! Clear current mission.
  void
  clearMission(uint8_t type)
  {
    mavlink_msg_mission_clear_all_pack(m_sys_id, m_comp_id, &m_msg, m_tgt_sys_id, m_tgt_comp_id,
                                       type);

    sendMessage(m_msg);
  }

  bool
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

  //! Get last message timestamp.
  double
  getMessageTs(void)
  {
    return m_msg_ts;
  }

  bool
  waitHeartbeat(double seconds = 1.0)
  {
    Counter<double> timer(seconds);
    while (!timer.overflow())
    {
      if (!Poll::poll(*m_sock, timer.getRemaining()))
        return false;

      size_t rv = m_sock->read(m_buf, sizeof(m_buf));
      m_msg_ts = Clock::getSinceEpoch();

      mavlink_message_t new_msg;
      if (parse(m_buf, rv, new_msg))
        handleMsg(new_msg);

      if (new_msg.msgid == MAVLINK_MSG_ID_HEARTBEAT)
        return true;
    }

    return false;
  }

protected:
  //! Handle message SYS_STATUS (1)
  void
  handleSysStatus(const mavlink_message_t& msg)
  {
    mavlink_sys_status_t status;
    mavlink_msg_sys_status_decode(&msg, &status);

    // Valid voltage values
    if (status.voltage_battery != UINT16_MAX)
    {
      IMC::Voltage voltage;
      voltage.setTimeStamp(m_msg_ts);
      voltage.value = 0.001 * (float)status.voltage_battery;
      m_tsk.dispatch(voltage, DF_KEEP_TIME);
    }

    // Valid current values
    if (status.current_battery != -1)
    {
      IMC::Current current;
      current.setTimeStamp(m_msg_ts);
      current.value = 0.01 * (float)status.current_battery;
      m_tsk.dispatch(current, DF_KEEP_TIME);
    }

    // Valid reaming fuel values
    if (status.battery_remaining != -1)
    {
      IMC::FuelLevel fuel;
      fuel.setTimeStamp(m_msg_ts);
      fuel.value = status.battery_remaining;
      m_tsk.dispatch(fuel, DF_KEEP_TIME);
    }

    // TODO: Additional information can be provided
    // errors_comm -> Communication errors (UART, I2C, SPI, CAN)
    // load -> Load in percent (0-100)
  }

  //! Handle message RAW_IMU (27)
  void
  handleRawIMU(const mavlink_message_t& msg)
  {
    mavlink_raw_imu_t imu;
    mavlink_msg_raw_imu_decode(&msg, &imu);

    IMC::Acceleration acc;
    acc.setTimeStamp(m_msg_ts);
    acc.x = imu.xacc;
    acc.y = imu.yacc;
    acc.z = imu.zacc;
    m_tsk.dispatch(acc, DF_KEEP_TIME);

    IMC::AngularVelocity gyro;
    gyro.setTimeStamp(m_msg_ts);
    gyro.x = imu.xgyro;
    gyro.y = imu.ygyro;
    gyro.z = imu.zgyro;
    m_tsk.dispatch(gyro, DF_KEEP_TIME);

    IMC::MagneticField mag;
    mag.setTimeStamp(m_msg_ts);
    mag.x = imu.xmag;
    mag.y = imu.ymag;
    mag.z = imu.zmag;
    m_tsk.dispatch(mag, DF_KEEP_TIME);
  }

  //! Handle message ATTITUDE (30)
  void
  handleAttitude(const mavlink_message_t& msg)
  {
    mavlink_attitude_t att;
    mavlink_msg_attitude_decode(&msg, &att);

    IMC::EulerAngles euler;
    euler.setTimeStamp(m_msg_ts);
    euler.time = att.time_boot_ms;
    euler.phi = att.roll;
    euler.theta = att.pitch;
    euler.psi = att.yaw;
    m_tsk.dispatch(euler, DF_KEEP_TIME);

    IMC::AngularVelocity av;
    av.setTimeStamp(m_msg_ts);
    av.time = att.time_boot_ms;
    av.x = att.rollspeed;
    av.y = att.pitchspeed;
    av.z = att.yawspeed;
    m_tsk.dispatch(av, DF_KEEP_TIME);
  }

  //! Handle message COMMAND_ACK (77)
  void
  handleAck(const mavlink_message_t& msg)
  {
    mavlink_command_ack_t ack;
    mavlink_msg_command_ack_decode(&msg, &ack);

    m_tsk.inf("Received ack message");
    m_tsk.inf("command: %d", ack.command);
    m_tsk.inf("result: %d", ack.result);
  }

  //! Handle message TIMESYNC (111)
  void
  handleTimeSync(const mavlink_message_t& msg)
  {
    mavlink_timesync_t ts;
    mavlink_msg_timesync_decode(&msg, &ts);

    // Reply
    if (ts.tc1 != 0)
      return;

    // Time sync request
    ts.tc1 = Clock::getNsec() - s_since_boot;
    ts.target_system = m_tgt_sys_id;
    ts.target_component = m_tgt_comp_id;

    // Time sync response
    mavlink_msg_timesync_encode(m_sys_id, m_comp_id, &m_msg, &ts);
    sendMessage(m_msg);
  }

  //! Handle message STATUSTEXT (253)
  void
  handleStatusText(const mavlink_message_t& msg)
  {
    mavlink_statustext_t text;
    mavlink_msg_statustext_decode(&msg, &text);

    m_tsk.war("Status (%d): %s", text.severity, text.text);
  }

private:
  //! Parse connection handle.
  //! @param[in] handle connection handle.
  //! @return tuple with socket, address and port.
  std::tuple<std::string, std::string, int>
  parseHandle(const std::string& handle)
  {
    size_t pos1 = handle.find("://");
    if (pos1 == std::string::npos)
      throw std::invalid_argument("Invalid handle format: " + handle);

    size_t pos2 = handle.find(":", pos1 + 3);
    if (pos2 == std::string::npos)
      throw std::invalid_argument("Invalid handle format: " + handle);

    std::string socket = handle.substr(0, pos1);
    std::string addr = handle.substr(pos1 + 3, pos2 - (pos1 + 3));
    int port = std::stoi(handle.substr(pos2 + 1));

    return { socket, addr, port };
  }

  //! Create connection handle.
  //! @param[in] handle connection handle.
  //! @return connection handle.
  IO::Handle*
  createHandle(const std::string& handle)
  {
    auto [sock, addr, port] = parseHandle(handle);

    if (sock == "tcp")
    {
      TCPSocket* tcp = new TCPSocket;
      tcp->connect(addr.c_str(), port);
      tcp->setNoDelay(true);
      return tcp;
    }

    else if (sock != "udp")
      throw std::invalid_argument("Invalid socket type: " + sock);

    UDPSocket* udp = new UDPSocket;
    udp->bind(port);
    udp->connect(addr.c_str(), port);
    return udp;
  }

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
        // m_tgt_sys_id = msg.sysid;
        // m_tgt_comp_id = msg.compid;
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
  //! Number of parameters.
  uint16_t m_param_count;
  //! Current parameter index.
  uint16_t m_param_index;
  //! Mavlink message.
  mavlink_message_t m_msg;
  //! Message Timestamp.
  double m_msg_ts;
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