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

#ifndef TRANSPORTS_IRIDIUM_SBD_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_IRIDIUM_SBD_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Exceptions.hpp"
#include "SessionResult.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    using DUNE_NAMESPACES;

    //! Default AT command timeout.
    static const double c_timeout = 5.0;
    //! Maximum number of revision lines.
    static const unsigned c_max_rev_lines = 10;

    class Driver: public HayesModem
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart serial port connected to the ISU.
      Driver(Tasks::Task* task, SerialPort* uart):
        HayesModem(task, uart),
        m_session_result_read(true),
        m_sbd_ring(false),
        m_queued_mt(0)
      {
        setLineTrim(true);
      }

      //! Destructor.
      ~Driver(void)
      { }

      void
      sendReset(void)
      {
        sendAT("Z0");
      }

      //! Retrieve MOMSN that will be used during the next mobile
      //! originated SBD session.
      //! @return MOMSN.
      unsigned
      getMOMSN(void)
      {
        std::string value = readValue("+SBDS");
        unsigned momsn = 0;
        if (std::sscanf(value.c_str(), "+SBDS:%*u,%u,%*u,%*u", &momsn) != 1)
          throw DUNE::Hardware::InvalidFormat(value);
        return momsn;
      }

      //! Read the contents of the MT SBD message buffer.
      //! @param[in] data buffer to hold binary data.
      //! @param[in] data_size size of binary data buffer.
      //! @return number of bytes read.
      unsigned
      readBufferMT(uint8_t* data, unsigned data_size)
      {
        ReadMode saved_read_mode = getReadMode();
        Counter<double> timer(getTimeout());
        uint8_t bfr[2] = {0};
        uint8_t ccsum[2] = {0};
        unsigned length = 0;

        try
        {
          // Prepare to read raw data.
          setReadMode(READ_MODE_RAW);

          // Send command.
          sendAT("+SBDRB");

          // Read incoming data length.
          length = getBufferSizeMT(timer);
          getTask()->spew("reading %u bytes of SBD binary data", length);

          // Read data.
          if (length > data_size)
            throw BufferTooSmall(data_size, length);

          if (length > 0)
          {
            readRaw(timer, data, length);
            computeChecksum(data, length, ccsum);
          }

          // Read and validate.
          readRaw(timer, bfr, 2);
          if ((bfr[0] != ccsum[0]) || (bfr[1] != ccsum[1]))
            throw Hardware::InvalidChecksum(bfr, ccsum);

          setReadMode(saved_read_mode);
          expectOK();
        }
        catch (...)
        {
          setReadMode(saved_read_mode);
          throw;
        }

        return length;
      }

      //! Start an SBD session to query the number of messages waiting
      //! at the GSS. This function should be used when hasRingAlert
      //! returns true.
      void
      checkMailBoxAlert(void)
      {
        sendSBD(std::vector<uint8_t>(), true);
      }

      //! Start an SBD session to query the number of messages waiting
      //! at the GSS.
      void
      checkMailBox(void)
      {
        sendSBD(std::vector<uint8_t>(), false);
      }

      //! Send MO SBD message.
      //! @param[in] data data to send.
      //! @param[in] alert_reply true if a ring alert was received,
      //! false otherwise.
      void
      sendSBD(const std::vector<uint8_t>& data, bool alert_reply = false)
      {
        getTask()->debug("sending SBD with size %u", static_cast<unsigned>(data.size()));

        if (data.size() == 0)
          writeBufferMO(NULL, 0);
        else
          writeBufferMO(&data[0], data.size());

        if (alert_reply)
          sendAT("+SBDIXA");
        else
          sendAT("+SBDIX");

        setBusy(true);
      }

      //! Retrieve the result of the last SBD session. The function
      //! should be called if hasSessionResult returns true.
      //! @return session result.
      const SessionResult&
      getSessionResult(void)
      {
        ScopedMutex l(m_mutex);
        m_session_result_read = true;
        return m_session_result;
      }

      //! Check if the result of an SBD session was received.
      //! @return true if SBD session result is available, false
      //! otherwise.
      bool
      hasSessionResult(void)
      {
        ScopedMutex l(m_mutex);
        return !m_session_result_read;
      }

      //! Clear MO SBD message buffer.
      void
      clearBufferMO(void)
      {
        std::string rv = readValue("+SBDD0");
        if (rv != "0")
          throw std::runtime_error(DTR("error ocurred while clearing MO buffer"));
      }

      //! Clear MT SBD message buffer.
      void
      clearBufferMT(void)
      {
        std::string rv = readValue("+SBDD1");
        if (rv != "0")
          throw std::runtime_error(DTR("error ocurred while clearing MT buffer"));
      }

      //! Check if a ring alert was received.
      //! @return true if ring alert was received, false otherwise.
      bool
      hasRingAlert(void)
      {
        ScopedMutex l(m_mutex);
        return m_sbd_ring;
      }

      //! Clear ring alert notification.
      void
      clearRingAlert(void)
      {
        ScopedMutex l(m_mutex);
        m_sbd_ring = false;
      }

      //! Retrieve the count of MT SBD messages waiting at the GSS.
      //! @return count of MT SBD messages queued at the GSS.
      unsigned
      getQueuedMT(void)
      {
        ScopedMutex l(m_mutex);
        return m_queued_mt;
      }

    private:
      //! Message buffer types.
      enum BufferType
      {
        //! Mobile originated SBD message buffer.
        BFR_TYPE_ORIGINATED = 0,
        //! Mobile terminated SBD message buffer.
        BFR_TYPE_TERMINATED = 1,
        //! Mobile originated SBD message buffer.
        BFR_TYPE_BOTH = 2
      };

      //! Result of last SBD session.
      SessionResult m_session_result;
      //! True if last session result was read.
      bool m_session_result_read;
      //! True if Alert Ring was received.
      bool m_sbd_ring;
      //! Number of MT messages waiting at the GSS.
      unsigned m_queued_mt;

      //! Perform ISU initialization, this function must be called
      //! before any other.
      void
      sendInitialization(void)
      {
        setEcho(false);
        setFlowControl(false);
        setRadioActivity(true);
        setRingAlert(true);
        setIndicatorEventReporting(true);
        setAutomaticRegistration(true);
      }

      //! Enable or disable RTS/CTS flow control.
      //! @param[in] value true to enable flow control, false otherwise.
      void
      setFlowControl(bool value)
      {
        if (value)
          sendAT("&K3");
        else
          sendAT("&K0");

        expectOK();
      }

      bool
      handleUnsolicited(const std::string& str)
      {
        if (String::startsWith(str, "SBDRING"))
          handleSBDRING(str);
        else if (String::startsWith(str, "+CIEV"))
          handleCIEV(str);
        else if (String::startsWith(str, "+AREG"))
          handleAREG(str);
        else if (String::startsWith(str, "+SBDIX"))
          handleSBDIX(str);
        else
          return false;

        return true;
      }

      void
      handleSBDRING(const std::string& str)
      {
        getTask()->debug("SBD ring");
        (void)str;
        ScopedMutex l(m_mutex);
        m_sbd_ring = true;
      }

      void
      handleCIEV(const std::string& str)
      {
        unsigned ind = 0;
        unsigned value = 0;

        if (std::sscanf(str.c_str(), "+CIEV:%u,%u", &ind, &value) == 2)
        {
          if (ind == 0)
            setRSSI(value * 20);
        }
        else
        {
          getTask()->war(DTR("invalid unsolicited string %s"), str.c_str());
        }
      }

      void
      handleAREG(const std::string& str)
      {
        (void)str;
      }

      void
      handleSBDIX(const std::string& str)
      {
        {
          ScopedMutex l(m_mutex);
          if (!m_session_result_read)
            getTask()->err(DTR("new session result will overwrite previously unread value"));
          m_session_result_read = false;
          m_session_result.parse(str);
          if (m_session_result.isSuccessMT())
            m_queued_mt = m_session_result.getQueuedMT();
        }

        setSkipLine("OK");

        setBusy(false);
      }

      //! Enable or disable radio activity.
      //! @param[in] value true to enable, false to disable.
      void
      setRadioActivity(bool value)
      {
        sendAT(value ? "*R1" : "*R0");
        expectOK();
      }

      //! Enable or disable the ISU to listen for SBD Ring Alerts.
      //! @param[in] value true to enable, false to disable.
      void
      setRingAlert(bool value)
      {
        sendAT(value ? "+SBDMTA=1" : "+SBDMTA=0");
        expectOK();
      }

      //! Enable or disable automatic network registration.
      //! @param[in] value true to enable, false to disable.
      void
      setAutomaticRegistration(bool value)
      {
        if (value)
          sendAT("+SBDAREG=1");
        else
          sendAT("+SBDAREG=0");

        expectOK();
      }

      void
      setIndicatorEventReporting(bool value)
      {
        sendAT(value ? "+CIER=1,1,0" : "+CIER=0");
        expectOK();
      }

      void
      clearMessageBuffer(BufferType type)
      {
        std::string rv = readValue(String::str("+SBDD%u", type));
        if (rv != "0")
          throw std::runtime_error(DTR("error ocurred while clearing buffer"));
      }

      void
      clearSequenceNumber(void)
      {
        std::string rv = readValue("+SBDC");
        if (rv != "0")
          throw std::runtime_error(DTR("error ocurred while clearing the MOMSN"));
      }

      void
      computeChecksum(const uint8_t* data, unsigned data_size, uint8_t* bfr) const
      {
        uint16_t csum = 0;
        for (unsigned i = 0; i < data_size; ++i)
          csum += data[i];

        bfr[0] = csum >> 8;
        bfr[1] = csum & 0xff;
      }

      //! Write SBD binary data to the ISU MO message buffer.
      //! @param[in] data binary data.
      //! @param[in] data_size size of binary data.
      void
      writeBufferMO(const uint8_t* data, unsigned data_size)
      {
        if (data_size == 0)
        {
          clearMessageBuffer(BFR_TYPE_ORIGINATED);
          return;
        }

        if (data_size > 340)
        {
          throw SBDInvalidSize(data_size);
        }

        // Send command.
        sendAT(String::str("+SBDWB=%u", data_size));
        expectREADY();

        // Send data.
        sendRaw(data, data_size);

        // Send checksum.
        uint8_t csum[2] = {0};
        computeChecksum(data, data_size, csum);
        sendRaw(csum, sizeof(csum));

        // Read response.
        std::string line = readLine();
        if (line != "0")
          throw SBDInvalidWrite(line);

        expectOK();
      }

      //! Read the length of an SBD message. If unsolicited messages
      //! are enabled they might be issued while sending the "read
      //! SBD binary message", garbling the two bytes of message length.
      //! This function guarantees that unsolicited messages
      //! are properly handled and the length is read correctly.
      unsigned
      getBufferSizeMT(Counter<double>& timer)
      {
        uint8_t bfr[2] = {0};

        // Read first byte.
        readRaw(timer, bfr, 1);

        // Handle start of unsolicited messages and ring alerts.
        if (bfr[0] == '+' || bfr[0] == 'S')
        {
          getTask()->debug("handling unsolicited message in raw mode");
          std::string line((const char*)bfr, 1);
          while (!timer.overflow())
          {
            readRaw(timer, bfr, 1);
            if (bfr[0] == '\n')
            {
              handleUnsolicited(String::trim(line));
              return getBufferSizeMT(timer);
            }
          }

          throw ReadTimeout();
        }
        // Handle padding of an unsolicited message
        else if ((bfr[0] == '\r') || (bfr[0] == '\n'))
        {
          return getBufferSizeMT(timer);
        }

        // Read second byte and handle SBD length.
        readRaw(timer, bfr + 1, 1);
        return (bfr[0] << 8) | bfr[1];
      }
    };
  }
}

#endif
