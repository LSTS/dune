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

#ifndef TRANSPORTS_EVOLOGICS_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Replies.hpp"

namespace Transports
{
  namespace Evologics
  {
    using DUNE_NAMESPACES;

    //! Default AT command timeout.
    static const double c_timeout = 5.0;

    //! Asynchronous messages.
    static const char* c_async_msgs[] =
    {
      "DELIVEREDIM",
      "FAILEDIM",
      "CANCELEDIM",
      "RECVIMS",
      "RECVIM",
      "USBLLONG",
      "USBLANGLES",
      "USBLPHYD",
      "USBLPHYP",
      "BITRATE",
      "SRCLEVEL",
      "PHYON",
      "PHYOFF",
      "RECVSTART",
      "RECVFAILED",
      "RECVEND",
      "SENDSTART",
      "SENDEND"
    };

    class Driver: public HayesModem
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      Driver(Tasks::Task* task, IO::Handle* handle):
        HayesModem(task, handle)
      { }

      //! Destructor.
      ~Driver(void)
      { }

      //! Reset device.
      void
      sendReset(void)
      {
        sendAT("Z1");
        sendAT("Z3");
        sendAT("Z4");
      }

      //! Set modem address.
      //! @param[in] addr address.
      void
      setAddress(unsigned addr)
      {
        sendAT(String::str("!AL%u", addr));
        expectOK();
      }

      //! Set the sound pressure level (SPL) in transmission mode.
      //! @param[in] value from 3 to 0.
      void
      setSourceLevel(unsigned value)
      {
        sendAT(String::str("!L%u", value));
        expectOK();
      }

      //! Set low gain mode. Recommended for short distances or testing
      //! purposes.
      //! @param[in] low_gain true to enable low gain, false otherwise.
      void
      setLowGain(bool low_gain)
      {
        sendAT(String::str("!G%u", low_gain ? 1 : 0));
        expectOK();
      }

      //! Set the timeout before closing an idle acoustic connection.
      //! @param[in] value timeout (s).
      void
      setIdleTimeout(unsigned value)
      {
        sendAT(String::str("!ZI%u", value));
        expectOK();
      }

      //! Set how many times will the device retry to establish an
      //! acoustic connection.
      //! @param[in] value number of retries.
      void
      setRetryCount(unsigned value)
      {
        sendAT(String::str("!RC%u", value));
        expectOK();
      }

      //! Set the number of instant message delivery retries.
      //! @param[in] value number of delivery retries.
      void
      setRetryCountIM(unsigned value)
      {
        sendAT(String::str("!RI%u", value));
        expectOK();
      }

      //! Set the time interval that the device waits for a response to
      //! its acoustic connection establishment request.
      //! @param[in] value interval (millisecond).
      void
      setRetryTimeout(unsigned value)
      {
        sendAT(String::str("!RT%u", value));
        expectOK();
      }

      //! Retrieve the firmware version string.
      //! @return firmware version.
      std::string
      getFirmwareVersion(void)
      {
        return m_version;
      }

      void
      setExtendedNotifications(bool enable)
      {
        sendAT(String::str("@ZX%u", enable ? 1 : 0));
        expectOK();
      }

      void
      setPromiscuous(bool enable)
      {
        sendAT(String::str("!RP%u", enable ? 1 : 0));
        expectOK();
      }

      //! Set highest address.
      //! @param[in] value highest address.
      void
      setHighestAddress(unsigned value)
      {
        sendAT(String::str("!AM%u", value));
        expectOK();
      }

      //! Send instant message.
      //! @param[in] data data to send.
      //! @param[in] data_size number of bytes to send.
      //! @param[in] dst destination address.
      //! @param[in] ack true to wait for acknowledgment, false otherwise.
      void
      sendIM(const uint8_t* data, size_t data_size, unsigned dst, bool ack)
      {
        std::string cmd = String::str("*SENDIM,%u,%u,%s,", data_size, dst, ack ? "ack" : "noack");
        cmd.append((char*)data, data_size);
        sendAT(cmd);
        expectOK();
        setBusy(true);
      }

      //! Retrieve the last computed acoustic signal propagation time
      //! between communicating devices.
      //! @return propagation time (microsecond).
      unsigned
      getPropagationTime(void)
      {
        sendAT("?T");
        std::string str = readLine();
        unsigned value = 0;
        if (!castLexical(str, value))
          throw Hardware::InvalidFormat(str);

        return value;
      }

      //! Retrieve the configured sound speed.
      //! @return sound speed (in m/s).
      unsigned
      getSoundSpeed(void)
      {
        sendAT("?CA");
        std::string str = readLine();
        unsigned value = 0;
        if (!castLexical(str, value))
          throw Hardware::InvalidFormat(str);

        return value;
      }

      //! Set sound speed.
      //! @param[in] value sound speed (m/s).
      void
      setSoundSpeed(unsigned value)
      {
        sendAT(String::str("!CA%u", value));
        expectOK();
      }

      void
      setCarrierWaveformID(unsigned value)
      {
        sendAT(String::str("!C%u", value));
        expectOK();
      }

      void
      setPositionDataOutput(bool enable)
      {
        sendAT(String::str("@ZU%u", enable ? 1 : 0));
        expectOK();
      }

      //! Retrieve value of system clock.
      //! @return sound speed (in m/s).
      uint32_t
      getClock(void)
      {
        sendAT("?CLOCK");
        std::string str = readLine();
        unsigned value = 0;
        if (!castLexical(str, value))
          throw Hardware::InvalidFormat(str);

        return value;
      }

      //! Retrieve a table illustrating the structure of the last
      //! received acoustic signal’s multipath propagation from its
      //! source to the local device.
      //! @return multipath structure.
      std::vector<unsigned>
      getMultipathStructure(void)
      {
        std::vector<unsigned> mp;
        mp.resize(16, 0);

        sendAT("?P");
        std::string str = readLine();
        std::istringstream ss(str);
        for (unsigned i = 0; i < 16; ++i)
        {
          ss >> mp[i];
          if (ss.fail())
            throw Hardware::InvalidFormat(str);
        }

        return mp;
      }

      void
      switchToNoiseState(void)
      {
        sendAT("N");
        std::string rv = readLine();
        if (rv != "INITIATION NOISE")
          throw UnexpectedReply("INITIATION NOISE", rv);
      }

      void
      switchToListenState(void)
      {
        sendAT("A");
        std::string rv = readLine();
        if (rv != "INITIATION LISTEN")
          throw UnexpectedReply("INITIATION LISTEN", rv);
      }

      void
      getRSSI(void)
      {

      }

      void
      parse(const std::string& str, RecvIM& msg)
      {
        int offset = 0;
        char flag[16] = {0};
        long unsigned int data_size = 0;
        int rv = 0;

        if (getFirmwareVersion() == "1.6")
        {
          rv = std::sscanf(str.c_str(),
                           "RECVIM,%lu,%u,%u,%[^,],%u,%f,%u,%f,%f,%n",
                           &data_size, &msg.src, &msg.dst, flag, &msg.bitrate,
                           &msg.rssi, &msg.integrity, &msg.propagation_time,
                           &msg.velocity, &offset);

          if (rv != 9)
            throw std::runtime_error("invalid format");
        }
        else
        {
          rv = std::sscanf(str.c_str(),
                           "RECVIM,%lu,%u,%u,%[^,],%u,%f,%u,%f,%n",
                           &data_size, &msg.src, &msg.dst, flag, &msg.duration,
                           &msg.rssi, &msg.integrity, &msg.velocity, &offset);

          if (rv != 8)
            throw std::runtime_error("invalid format");
        }

        msg.ack = std::strcmp(flag, "ack") == 0;

        if ((unsigned)offset >= str.size())
          throw std::runtime_error("empty payload");

        msg.data.assign((uint8_t*)&str[offset], (uint8_t*)&str[str.size()]);
      }

    private:
      //! Firmware version.
      std::string m_version;
      //! Physical layer protocol version.
      std::string m_phy_ptl_version;
      //! Data-link layer protocol version.
      std::string m_mac_ptl_version;

      void
      sendInitialization(void)
      {
        // Get firmware version.
        sendAT("I0");
        m_version = readLine();

        // Get PHY and MAC versions.
        char phy[64] = {0};
        char mac[64] = {0};

        sendAT("I1");
        std::string str = readLine();
        if (std::sscanf(str.c_str(), "phy:%*[^0]%[^,], mac:%*[^v]v%s", phy, mac) != 2)
          throw Hardware::InvalidFormat(str);
        m_phy_ptl_version = phy;
        m_mac_ptl_version = mac;

        getTask()->debug("firmware version: %s (MAC: %s, PHY: %s)", m_version.c_str(),
                         m_mac_ptl_version.c_str(),
                         m_phy_ptl_version.c_str());
      }

      int
      getCommaIndex(const std::string& str, unsigned number)
      {
        unsigned count = 0;

        for (size_t i = 0; i < str.size(); ++i)
        {
          if (str[i] == ',')
            ++count;

          if (count == number)
            return i;
        }

        return -1;
      }

      bool
      isFragment(const std::string& str)
      {
        int last_comma = -1;
        unsigned length = 0;

        if (std::sscanf(str.c_str(), "RECVIM,%u", &length) == 1)
        {
          if (m_version == "1.6")
            last_comma = getCommaIndex(str, 10);
          else
            last_comma = getCommaIndex(str, 9);
        }
        else if (std::sscanf(str.c_str(), "RECVIMS,%u", &length) == 1)
        {
          last_comma = getCommaIndex(str, 9);
        }
        else
        {
          return false;
        }

        //!@fixme: replace 2 with terminator size.
        unsigned data_size = (str.size() - (last_comma + 1)) - 2;
        if (data_size != length)
          return true;

        return false;
      }

      bool
      handleUnsolicited(const std::string& str)
      {
        for (size_t i = 0; i < sizeof(c_async_msgs) / sizeof(char*); ++i)
        {
          if (String::startsWith(str, c_async_msgs[i]))
          {
            dispatch(str);
            return true;
          }
        }

        return false;
      }

      void
      dispatch(const std::string& str)
      {
        IMC::DevDataText msg;
        msg.setDestination(getTask()->getSystemId());
        msg.setDestinationEntity(getTask()->getEntityId());
        msg.value.assign(str);
        getTask()->dispatch(msg, DF_LOOP_BACK);
      }

      void
      expectOK(void)
      {
        std::string rv = readLine();
        if ((rv != "OK") && (rv != "[*]OK"))
          throw UnexpectedReply("OK", rv);
      }
    };
  }
}

#endif
