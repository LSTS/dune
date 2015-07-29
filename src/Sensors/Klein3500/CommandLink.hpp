//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef SENSORS_KLEIN3500_COMMAND_LINK_HPP_INCLUDED_
#define SENSORS_KLEIN3500_COMMAND_LINK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"
#include "Packet.hpp"

namespace Sensors
{
  namespace Klein3500
  {
    using DUNE_NAMESPACES;

    class CommandLink
    {
    public:
      //! Create a command link to the sidescan.
      //! @param[in] parent parent task.
      //! @param[in] addr sidescan IPv4 address.
      //! @param[in] port sidescan TCP port.
      CommandLink(Tasks::Task* parent, const Address& addr, unsigned port):
        m_parent(parent)
      {
        m_sock.setNoDelay(true);
        setSocketTimeout(1.0);
        m_sock.connect(addr, port);
        m_bfr.resize(c_max_size);

        startSlave();
        openSonar();
        setTime();
      }

      //! Destroy command link to the sidescan.
      ~CommandLink(void)
      {
        try
        {
          closeSonar();
          endSlave();
        }
        catch (...)
        { }
      }

      //! Set standby state of the device.
      //! @param[in] value 0 to enter run mode, any other value to enter
      //! paused mode.
      bool
      setStandBy(uint32_t value)
      {
        if (value > 1)
          value = 1;

        sendCommand(CMD_SET_STAND_BY, value);
        const Packet* reply = readPacket(CMD_SET_STAND_BY, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set standby"));

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        return *status == 1;
      }

      //! Set range.
      //! @param[in] range range in meter.
      void
      setRange(uint32_t value)
      {
        sendCommand(CMD_SET_RANGE, value);
        const Packet* reply = readPacket(CMD_SET_RANGE, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set range"));
      }

      //! Set framing mode.
      void
      setFramingMode(uint32_t value)
      {
        sendCommand(CMD_SET_FRAME_MODE, value);
        const Packet* reply = readPacket(CMD_SET_FRAME_MODE, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set framing mode"));
      }

      //! Set sonar time.
      void
      setTime(void)
      {
        uint8_t data[36] = {0};
        uint8_t* ptr = data;
        time_t t = std::time(NULL);
        const std::tm* tm = std::gmtime(&t);

        ptr += ByteCopy::toBE((uint32_t)tm->tm_sec, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_min, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_hour, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_mday, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_mon, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_year, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_wday, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_yday, ptr);
        ptr += ByteCopy::toBE((uint32_t)tm->tm_isdst, ptr);

        sendCommand(CMD_SET_TIME, data, sizeof(data));
        const Packet* reply = readPacket(CMD_SET_TIME, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set time"));

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        if (*status != 1)
          throw std::runtime_error(DTR("failed to set time"));
      }

      void
      setPulseLength(void)
      { }

      void
      setReceiverGain(void)
      { }

      void
      sendNavigationData(const IMC::EstimatedState& estate)
      {
        // Time/Date.
        time_t seconds = static_cast<time_t>(estate.getTimeStamp());
        unsigned fsec = (estate.getTimeStamp() - seconds) * 100;
        Time::BrokenDown bdt(seconds);

        // Position.
        double lat = estate.lat;
        double lon = estate.lon;
        Coordinates::toWGS84(estate, lat, lon);

        // Convert latitude.
        int lat_deg = 0;
        double lat_min_fp = 0;
        Angles::convertDecimalToDM(Angles::degrees(lat), lat_deg, lat_min_fp);
        int lat_min = (int)lat_min_fp;
        int lat_min_frac = (lat_min_fp - lat_min) * 100000;

        // Convert longitude.
        int lon_deg = 0;
        double lon_min_fp = 0;
        Angles::convertDecimalToDM(Angles::degrees(lon), lon_deg, lon_min_fp);
        int lon_min = (int)lon_min_fp;
        int lon_min_frac = (lon_min_fp - lon_min) * 100000;

        // Velocity.
        double vel = Math::norm(estate.vx, estate.vy);

        double heading = Angles::degrees(estate.psi);
        if (heading < 0)
          heading += 360.0;

        // Build sentence.
        std::string stn = String::str("$PAUV"
                                      ",%02u%02u%02u.%02u,A"
                                      ",%02d%02d.%05d"
                                      ",%c"
                                      ",%03d%02d.%05d"
                                      ",%c"
                                      ",%0.2f"
                                      ",%0.2f"
                                      ",%0.2f"
                                      ",%0.2f"
                                      ",%0.2f"
                                      ",%0.2f"
                                      ",%02u%02u%02u",
                                      bdt.hour, bdt.minutes, bdt.seconds, fsec,
                                      std::abs(lat_deg), lat_min, lat_min_frac,
                                      (lat_deg >= 0) ? 'N' : 'S',
                                      std::abs(lon_deg), lon_min, lon_min_frac,
                                      (lon_deg >= 0) ? 'E' : 'W',
                                      vel * DUNE::Units::c_ms_to_knot,
                                      heading,
                                      Angles::degrees(estate.theta),
                                      Angles::degrees(estate.phi),
                                      estate.depth,
                                      estate.alt,
                                      bdt.day, bdt.month, bdt.year);

        uint8_t checksum = XORChecksum::compute((uint8_t*)&stn[1], stn.size() - 1);
        stn += String::str("*%02X\r\n", checksum);
        sendFishCommand(stn);
      }

      void
      getDataPage(PingType ping_type, uint32_t ping_number)
      {
        uint8_t data[12] = {0};
        uint8_t* ptr = data;
        ptr += ByteCopy::toBE((uint32_t)ping_type, ptr);
        ptr += ByteCopy::toBE(ping_number, ptr);
        ptr += ByteCopy::toBE((uint32_t)0, ptr);

        sendCommand(CMD_GET_DATA_PAGE2, data, sizeof(data));
      }

      void
      setFileFormat(uint32_t format)
      {
        sendCommand(CMD_SET_FILE_FORMAT, format);
        const Packet* reply = readPacket(CMD_SET_FILE_FORMAT, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set recording file format"));
      }

      void
      setPingsPerFile(uint32_t ping_count)
      {
        sendCommand(CMD_SET_PINGS_PER_FILE, ping_count);
        const Packet* reply = readPacket(CMD_SET_PINGS_PER_FILE, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set recording file ping count"));
      }

      bool
      setRecordingMode(bool mode)
      {
        uint32_t value = mode ? 1 : 0;

        sendCommand(CMD_SET_RECORDING_MODE, value);
        const Packet* reply = readPacket(CMD_SET_RECORDING_MODE, 1.0);
        if (reply == NULL)
          return false;

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        return *status == 1;
      }

      bool
      setRecordingFilePath(const std::string& path)
      {
        if (path.size() >= 128)
          throw std::runtime_error("path exceeds maximum size");

        uint32_t path_size = path.size() + 1;
        uint32_t action = 1;
        uint8_t data[259] = {0};
        uint8_t* ptr = data;

        ptr += ByteCopy::toBE(path_size, ptr);
        ptr += ByteCopy::toBE(action, ptr);
        std::memcpy(ptr, path.c_str(), path_size);

        sendCommand(CMD_SET_FILE_PATH, data, path_size + 8);
        const Packet* reply = readPacket(CMD_SET_FILE_PATH, 1.0);
        if (reply == NULL)
          return false;

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        return (*status == 1);
      }

      void
      setFilePrefix(const std::string& prefix)
      {
        if (prefix.size() >= 32)
          throw std::runtime_error("prefix exceeds maximum size");

        uint8_t data[259] = {0};
        uint8_t* ptr = data;

        uint32_t prefix_size = prefix.size() + 1;
        ptr += ByteCopy::toBE(prefix_size, ptr);

        std::memcpy(ptr, prefix.c_str(), prefix_size);

        sendCommand(CMD_SET_FILE_PREFIX, data, prefix_size + 4);
        const Packet* reply = readPacket(CMD_SET_FILE_PREFIX, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to set recording file prefix"));

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        (void)status;
      }

      bool
      unmountNFS(const std::string& mount_point)
      {
        uint32_t mount_point_size = mount_point.size() + 1;
        uint8_t data[259] = {0};
        uint8_t* ptr = data;
        ptr += ByteCopy::toBE(mount_point_size, ptr);
        std::memcpy(ptr, mount_point.c_str(), mount_point_size);

        sendCommand(CMD_UNMOUNT_NFS, data, mount_point_size + 4);
        const Packet* reply = readPacket(CMD_UNMOUNT_NFS, 1.0);
        if (reply == NULL)
          return false;

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        return (*status == 1);
      }

      bool
      setRecordingNewFile(void)
      {
        uint32_t value = 1;

        sendCommand(CMD_SET_NEW_FILE, value);
        const Packet* reply = readPacket(CMD_SET_NEW_FILE, 1.0);
        if (reply == NULL)
          return false;

        const uint32_t* status = reinterpret_cast<const uint32_t*>(reply->getData() + 8);
        return (*status == 1);
      }

      //! FIXME: keep backlog.
      bool
      readDataPage(Packet* packet, double timeout = 1.0)
      {
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (!Poll::poll(m_sock, timer.getRemaining()))
            continue;

          size_t rv = m_sock.read(&m_bfr[0], m_bfr.size());
          for (size_t i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(m_bfr[i], packet))
              continue;

            return true;
          }
        }

        return false;
      }

    private:
      //! Maximum packet size.
      static const unsigned c_max_size = 256 * 1024;
      //! Time difference estimation: samples per average.
      static const unsigned c_time_diff_sample_count = 10;
      //! Parent task.
      Tasks::Task* m_parent;
      //! TCP socket.
      TCPSocket m_sock;
      //! Parser.
      Parser m_parser;
      //! Handle.
      std::vector<uint8_t> m_handle;
      //! Internal buffer.
      std::vector<uint8_t> m_bfr;

      //! Set TCP socket timeouts.
      //! @param[in] value timeout in seconds.
      void
      setSocketTimeout(double value)
      {
        m_sock.setSendTimeout(value);
        m_sock.setReceiveTimeout(value);
      }

      //! Start slave connection.
      void
      startSlave(void)
      {
        sendCommand(CMD_START_SLAVE);
        const Packet* reply = readPacket(CMD_START_SLAVE, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to start slave"));
      }

      //! End slave connection.
      void
      endSlave(void)
      {
        sendCommand(CMD_END_SLAVE);
        const Packet* reply = readPacket(CMD_END_SLAVE, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to end slave"));
      }

      void
      openSonar(void)
      {
        sendCommand(CMD_OPEN_SONAR, CFG_MASTER | CFG_CHAN1 | CFG_CHAN2 | CFG_CHAN3 | CFG_CHAN4);
        const Packet* reply = readPacket(CMD_OPEN_SONAR, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to open sonar"));

        // Save handle.
        m_handle.clear();
        m_handle.resize(4);
        uint32_t handle = 0;
        ByteCopy::fromLE(handle, reply->getData() + 8);
        ByteCopy::toBE(handle, &m_handle[0]);
      }

      void
      closeSonar(void)
      {
        sendCommand(CMD_CLOSE_SONAR);
        const Packet* reply = readPacket(CMD_CLOSE_SONAR, 1.0);
        if (reply == NULL)
          throw std::runtime_error(DTR("failed to close sonar"));
        m_handle.clear();
      }

      void
      sendFishCommand(const std::string& str)
      {
        if (str.size() >= 255)
          throw std::runtime_error("fish command exceeds maximum size");

        uint32_t str_size = str.size() + 1;
        uint8_t data[259] = {0};
        uint8_t* ptr = data;

        ptr += ByteCopy::toBE(str_size, ptr);
        std::memcpy(ptr, str.c_str(), str_size);

        sendCommand(CMD_SEND_FISH_CMD, data, str_size + 4);
        const Packet* reply = readPacket(CMD_SEND_FISH_CMD, 1.0);
        if (reply == NULL)
          m_parent->trace("failed to send fish command");
      }

      //! Send command without payload to TPU.
      //! @param[in] command command id.
      void
      sendCommand(uint32_t command)
      {
        sendCommand(command, NULL, 0);
      }

      //! Send command with a single word of payload to TPU.
      //! @param[in] command command id.
      //! @param[in] value command payload.
      void
      sendCommand(uint32_t command, uint32_t value)
      {
        uint8_t data[4];
        ByteCopy::toBE(value, data);
        sendCommand(command, data, sizeof(data));
      }

      //! Send command with a arbitrary payload to TPU.
      //! @param[in] command command id.
      //! @param[in] data payload data.
      //! @param[in] data_size payload data size.
      void
      sendCommand(uint32_t command, uint8_t* data, uint32_t data_size)
      {
        uint8_t header[8] = {0};
        ByteCopy::toBE(command, header);

        uint32_t payload_size = data_size + m_handle.size();
        ByteCopy::toBE(payload_size, header + 4);

        m_sock.write((char*)header, sizeof(header));

        if (m_handle.size() == 4)
          m_sock.write((char*)&m_handle[0], m_handle.size());

        m_sock.write((char*)data, data_size);
      }

      const Packet*
      readPacket(uint32_t command, double timeout = 1.0)
      {
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (Poll::poll(m_sock, timer.getRemaining()))
          {
            size_t rv = m_sock.read(&m_bfr[0], m_bfr.size());
            for (size_t i = 0; i < rv; ++i)
            {
              if (!m_parser.parse(m_bfr[i], m_parser.getPacket()))
                continue;

              Packet* pkt = m_parser.getPacket();

              if (pkt->getCommand() == command)
                return pkt;
            }
          }
        }

        return NULL;
      }
    };
  }
}

#endif
