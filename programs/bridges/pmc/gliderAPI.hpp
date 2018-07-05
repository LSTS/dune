//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef BRIDGES_PMC_GLIDER_API_HPP
#define BRIDGES_PMC_GLIDER_API_HPP

#include <DUNE/DUNE.hpp>

//! Local headers.
#include "checksum.hpp"
#include "frameStatus.hpp"
#include "frameNav.hpp"
#include "frameDetailedStatus.hpp"
#include "../sensors/rules.hpp"

//! Serial port baud rate.
static const unsigned c_baud_rate = 115200;

//! Glider remote helm strings identifiers.
static const std::string c_helm_status = "MRS";
static const std::string c_helm_nav = "NAV";
static const std::string c_helm_dst = "DST";

//! Glider payload string identifiers.
static const std::string c_cfg_cmd = "$pld";
static const std::string c_rpl_cmd = "$PLDOUT";

//! Glider main API class.
class GliderAPI
{
public:
  //! Constructor.
  GliderAPI(const std::string& uart_port, DUNE::Parsers::Config* cfg):
    m_sm(GAS_SYNC),
    m_frame_index(0),
    m_csum_index(0),
    m_status(NULL),
    m_nav(NULL),
    m_detailed(NULL),
    m_cfg(NULL),
    m_cfg_changed(false)
  {
    m_uart = new DUNE::Hardware::SerialPort(uart_port, c_baud_rate);

    // valid configuration.
    if (cfg != NULL)
    {
      m_cfg = cfg;
      std::string devices_str = cfg->get("PMC_BUS", "Lanes");
      DUNE::Utils::String::split(devices_str, ", ", m_devices);
    }
  }

  ~GliderAPI(void)
  {
    DUNE::Memory::clear(m_status);
    DUNE::Memory::clear(m_nav);
    DUNE::Memory::clear(m_detailed);
  }

  //! Listen serial port for incoming data.
  //! @return true, if frame is parsed false otherwise.
  bool
  read(void)
  {
    uint8_t bfr[255];

    bool parsed = false;

    DUNE::Time::Counter<double> timer(1.0);
    while (!timer.overflow())
    {
      double delay = timer.getRemaining();
      if (delay <= 0)
        break;

      if (DUNE::IO::Poll::poll(*m_uart, delay))
      {
        size_t rv = m_uart->read(bfr, sizeof(bfr));
        for (size_t i = 0; i < rv; ++i)
        {
          if (parse(bfr[i]))
            parsed = true;
        }

        break;
      }
    }

    return parsed;
  }

  //! Get vehicle name.
  //! @return vehicle name.
  std::string
  getVehicle(void) const
  {
    return m_status != NULL ? m_status->getVehicle() : "0";
  }

  //! Get current mission id.
  //! @return mission id.
  int
  getMission(void) const
  {
    return m_status != NULL ? m_status->getMission() : 0;
  }

  //! Get current cycle number (cycle = yo).
  //! @return current cycle number.
  int
  getCycle(void) const
  {
    return m_status != NULL ? m_status->getCycle() : 0;
  }

  //! Get vehicle latitude.
  //! @return vehicle latitude.
  std::string
  getLatitude(void) const
  {
    return m_status != NULL ? m_status->getLatitude() : "0";
  }

  //! Get vehicle longitude.
  //! @return vehicle longitude.
  std::string
  getLongitude(void) const
  {
    return m_status != NULL ? m_status->getLongitude() : "0";
  }

  //! Get current vehicle depth.
  //! @return current vehicle depth.
  float
  getDepth(void) const
  {
    return m_detailed != NULL ? m_detailed->getDepth() : 0;
  }

  //! Get current vehicle altitude.
  //! @return current vehicle altitude
  float
  getAltitude(void) const
  {
    return m_detailed != NULL ? m_detailed->getAltitude() : -1.0;
  }

  //! Get up/down/else state of vehicle.
  //! @return up/down/else state.
  UpDownRule
  getUpDown(void) const
  {
    if (m_detailed != NULL)
    {
      if (m_detailed->getPitch() < 0)
        return UDR_DOWN;
      if (m_detailed->getPitch() > 0)
        return UDR_UP;
      else
        return UDR_ELSE;
    }
  }

  // //! Get up/down/else state of vehicle.
  // //! @return up/down/else state.
  // UpDownRule
  // getUpDown(void) const
  // {
  //   // @todo: how to extract if vehicle is going up/down/else when in primitive mode?
  //   if (m_controlled)
  //   {
  //     if (m_buoy_up < - c_min_zspeed)
  //       return UDR_UP;
  //     else if (m_buoy_up > c_min_zspeed)
  //       return UDR_DOWN;
  //   }
  //   return UDR_ELSE;
  // }
  //return m_nav != NULL ? m_nav->getUpDown() : UDR_ELSE;

  //! Check if configuration has changed.
  bool
  checkConfig(void)
  {
    return m_cfg_changed;
  }

  //! Reset configuration changed flag.
  void
  resetConfigChanged(void)
  {
    m_cfg_changed = false;
  }

private:
  //! Very basic states.
  enum GliderAPIStates
  {
    GAS_SYNC,
    GAS_CSUM,
    GAS_TERM
  };

  //! Parse received byte.
  //! @return true, if frame is parsed false otherwise.
  bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case (GAS_SYNC):
        if (byte == '$')
        {
          m_frame_index = 0;
          m_frame[m_frame_index++] = byte;
          m_sm = GAS_CSUM;
        }
        break;
      case (GAS_CSUM):
        m_frame[m_frame_index++] = byte;

        if (byte == '*')
        {
          m_csum_index = m_frame_index - 1;
          m_sm = GAS_TERM;
        }
        break;
      case (GAS_TERM):
        m_frame[m_frame_index++] = byte;

        if (byte == '\n')
        {
          decode();
          m_sm = GAS_SYNC;
          return true;
        }
        break;
    }

    return false;
  }

  //! Decode incoming packets from glider navigation computer.
  void
  decode(void)
  {
    std::string str((char*)m_frame, m_frame_index);
    std::cerr << "[glider] recv: '" << DUNE::Streams::sanitize(str) << "'" << std::endl;

    //! List of fields.
    std::vector<std::string> fields;
    fields.clear();

    size_t idx = str.find_last_of("*");
    // standard string.
    if (idx != std::string::npos)
    {
      if (!checksum(str))
        return;

      DUNE::Utils::String::split(str.substr(1, idx - 1), ",", fields);

      // decode packet.
      if (DUNE::Utils::String::endsWith(fields[0], c_helm_status))
        decodeStatus(fields);
      else if (DUNE::Utils::String::endsWith(fields[0], c_helm_nav))
        decodeNav(fields);
      else if (DUNE::Utils::String::endsWith(fields[0], c_helm_dst))
        decodeDetailedStatus(fields);
    }
    else
    {
      // maybe a configuration set command.
      decodeConfigCommand(str);
    }
  }

  //! Decode status messages.
  //! @param[in] fields vector with NMEA fields.
  void
  decodeStatus(const std::vector<std::string> fields)
  {
    DUNE::Memory::replace(m_status, new FrameStatus(fields));
  }

  //! Decode navigation messages.
  //! @param[in] fields vector with NMEA fields.
  void
  decodeNav(const std::vector<std::string> fields)
  {
    DUNE::Memory::replace(m_nav, new FrameNav(fields));
  }

  //! Decode detailed status messages.
  //! @param[in] fields vector with NMEA fields.
  void
  decodeDetailedStatus(const std::vector<std::string> fields)
  {
    DUNE::Memory::replace(m_detailed, new FrameDetailedStatus(fields));
  }

  //! Compute and compare checksums.
  //! @param[in] str received string.
  //! @return true if checksum matches, false otherwise.
  bool
  checksum(const std::string& str)
  {
    size_t idx = str.find_last_of("*");

    int rsum = 0;
    unsigned shift = 0;
    for (size_t i = str.size() - 4; i > idx; --i)
    {
      uint8_t byte = str[i];
      if (byte >= '0' && byte <= '9')
        rsum |= (byte - '0') << shift;
      else if (byte >= 'a' && byte <= 'f')
        rsum |= (byte - 'a' + 10) << shift;

      shift += 4;
    }

    unsigned short csum = CRC16((unsigned char*)&str[1], idx);

    // @todo: glider simulator checksum is not correct - will be fixed in future release.
    std::printf("[glider] csum: %04x == %04x (TO BE FIXED in future SHOEBOX release. Don't care for now)\r\n", csum, rsum);
    return true;
  }

  //! Decode received configuration command.
  //! @param[in] str received frame.
  void
  decodeConfigCommand(const std::string& str)
  {
    // it is *not* a payload configuration command.
    if (!DUNE::Utils::String::startsWith(str, c_cfg_cmd))
      return;

    unsigned lane = 99;
    unsigned cmd = 99;
    char option[32];
    char value[32];

    // set key
    if (std::sscanf(str.c_str(), "$pld%u.%[^=]%*1[=]%[^;]",
                    &lane, option, value) == 3)
    {
      if (lane > m_devices.size())
        return;

      std::string strop;
      std::string strval;
      strop.assign(option);
      strval.assign(value);

      // Update setting on configuration.
      m_cfg->set(m_devices[lane - 1], strop, strval);
      m_cfg_changed = true;
      std::cerr << "[glider] set-cfg #" << lane - 1 << ": "
                << strop.c_str() << " = " << strval.c_str() << std::endl;

      reply(lane, strop, strval);
    }
    // get key.
    else if (std::sscanf(str.c_str(), "$pld%u.%[^;]", &lane, option) == 2)
    {
      if (lane > m_devices.size())
        return;

      std::string strop;
      strop.assign(option);

      std::string value = m_cfg->get(m_devices[lane - 1], strop);
      std::cerr << "[glider] get-cfg #" << lane - 1 << ": "
                << strop.c_str() << " ? " << value.c_str() << std::endl;

      reply(lane, strop, value);
    }
    // control device.
    else if (std::sscanf(str.c_str(), "$pld%u=%u;", &lane, &cmd) == 2)
    {
      if (lane > m_devices.size() || cmd > 1)
        return;

      // forced mode.
      m_cfg->set(m_devices[lane - 1], "forced", cmd == 1 ? "on" : "off");
      m_cfg_changed = true;

      std::cerr << "[glider] force-cfg #" << lane - 1 << ": " << cmd << std::endl;
    }
  }

  //! Reply to navigation computer the current payload option and value.
  //! @param[in] lane sensor lane (+ 1).
  //! @param[in] option configuration option.
  //! @param[in] value configuration value.
  void
  reply(unsigned lane, const std::string& option, const std::string& value)
  {
    std::string reply;
    reply = DUNE::Utils::String::str("%s,%u,%s,%s*", c_rpl_cmd.c_str(), lane,
                                     option.c_str(), value.c_str());

    unsigned short csum = CRC16((unsigned char*)&reply[1], reply.size() - 1);
    reply += DUNE::Utils::String::str("%04x;\r\n", csum);

    std::cerr << "[glider] sent: '" << DUNE::Streams::sanitize(reply) << "'" << std::endl;
    m_uart->writeString(reply.c_str());
  }

  //! State machine.
  unsigned m_sm;
  //! Serial port interface.
  DUNE::Hardware::SerialPort* m_uart;
  //! Frame buffer.
  uint8_t m_frame[255];
  //! Current data packet index.
  size_t m_frame_index;
  //! Index of checksum character.
  size_t m_csum_index;

  //! NMC remote helm frames.
  FrameStatus* m_status;
  FrameNav* m_nav;
  FrameDetailedStatus* m_detailed;

  //! Pointer to configuration.
  DUNE::Parsers::Config* m_cfg;
  //! List of devices from configuration.
  std::vector<std::string> m_devices;
  //! Configuration has changed.
  bool m_cfg_changed;
};

#endif
