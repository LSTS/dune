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

#ifndef TRANSPORTS_GSM_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_GSM_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace GSM
  {
    using DUNE_NAMESPACES;

    //! SMS terminator character.
    static const char c_sms_term = 0x1a;
    //! SMS input prompt.
    static const char* c_sms_prompt = "\r\n> ";
    //! Size of SMS input prompt.
    static const unsigned c_sms_prompt_size = std::strlen(c_sms_prompt);

    class Driver: public HayesModem
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart serial port connected to the ISU.
      //! @param[in] pin PIN number.
      Driver(Tasks::Task* task, SerialPort* uart, const std::string& pin = ""):
        HayesModem(task, uart),
        m_pin(pin)
      {
        setLineTrim(true);
      }

      //! Destructor.
      ~Driver(void)
      { }

      void
      checkMessages(void)
      {
        IMC::TextMessage sms;
        std::string location;
        unsigned read_count = 0;

        sendAT("+CMGL=\"ALL\"");

        //! Read all messages.
        while (readSMS(location, sms.origin, sms.text))
        {
          if ((location == "\"REC UNREAD\"") || (location == "\"REC READ\""))
          {
            ++read_count;
            getTask()->dispatch(sms);
          }
        }

        // Remove read messages.
        if (read_count > 0)
        {
          sendAT("+CMGD=0,3");
          expectOK();
        }
      }

      void
      sendSMS(const std::string& number, const std::string& msg, double timeout)
      {
        uint8_t bfr[16];

        Time::Counter<double> timer(timeout);

        try
        {
          setReadMode(HayesModem::READ_MODE_RAW);
          sendAT(String::str("+CMGS=\"%s\"", number.c_str()));
          readRaw(timer, bfr, 4);
          setReadMode(HayesModem::READ_MODE_LINE);

          if (std::memcmp(bfr, c_sms_prompt, c_sms_prompt_size) != 0)
            throw Hardware::UnexpectedReply();

          std::string data = msg;
          data.push_back(c_sms_term);
          sendRaw((uint8_t*)&data[0], data.size());
        }
        catch (...)
        {
          setReadMode(HayesModem::READ_MODE_LINE);
          throw;
        }

        std::string reply = readLine(timer);
        if (reply == "ERROR")
        {
          throw std::runtime_error(DTR("unknown error"));
        }
        else if (String::startsWith(reply, "+CMGS:"))
        {
          setBusy(true);
        }
        else if (String::startsWith(reply, "+CMS ERROR:"))
        {
          int code = -1;
          std::sscanf(reply.c_str(), "+CMS ERROR: %d", &code);
          throw std::runtime_error(String::str(DTR("SMS transmission failed with error code %d"), code));
        }
        else
        {
          throw UnexpectedReply();
        }

        expectOK();
      }

    private:
      //! PIN number if needed.
      std::string m_pin;

      void
      queryRSSI(void)
      {
        sendAT("+CSQ");
        std::string line = readLine();
        int rssi = -1;
        int ber = 0;
        if (std::sscanf(line.c_str(), "+CSQ: %d,%d", &rssi, &ber) == 2)
        {
          expectOK();
          setRSSI(convertRSSI(rssi));
        }
      }

      void
      sendReset(void)
      {
        sendAT("Z");
      }

      void
      sendInitialization(void)
      {
        setEcho(false);
        setErrorVerbosity(2);
        setPin(m_pin);
        setMessageFormat(1);
      }

      float
      convertRSSI(int rssi)
      {
        float cvt = -1.0f;

        if (rssi >= 0 && rssi <= 9)
          cvt = (rssi / 9.0) * 25.0f;
        else if (rssi >= 10 && rssi <= 14)
          cvt = 25.0f + (((rssi - 10) / 4.0f) * 25.0f);
        else if (rssi >= 15 && rssi <= 19)
          cvt = 50.0f + (((rssi - 15) / 4.0f) * 25.0f);
        else
        {
          if (rssi >= 31)
            rssi = 31;

          cvt = 75.0f + (((rssi - 20) / 11.0f) * 25.0f);
        }

        return cvt;
      }

      bool
      handleUnsolicited(const std::string& str)
      {
        if (String::startsWith(str, "^SYSSTART"))
          return true;

        return false;
      }

      void
      setPin(const std::string& pin)
      {
        std::string bfr = readValue("+CPIN?");
        if (bfr == "+CPIN: READY")
          return;

        if (bfr == "+CPIN: SIM PIN")
        {
          sendAT(String::str("+CPIN=%s", pin.c_str()));
          expectOK();
        }
      }

      void
      setMessageFormat(unsigned value)
      {
        sendAT(String::str("+CMGF=%u", value));
        expectOK();
      }

      void
      setErrorVerbosity(unsigned value)
      {
        sendAT(String::str("+CMEE=%u", value));
        expectOK();
      }

      bool
      readSMS(std::string& location, std::string& origin, std::string& text)
      {
        std::string header = readLine();
        if (header == "OK")
          return false;

        if (!String::startsWith(header, "+CMGL:"))
          throw Hardware::UnexpectedReply();

        std::vector<std::string> parts;
        String::split(header, ",", parts);
        if (parts.size() != 6)
        {
          if (parts.size() >= 2)
          {
            location = parts[1];
            return true;
          }

          throw Hardware::UnexpectedReply();
        }

        if ((parts[2] != "\"\"") && (parts[2].size() <= 2))
          throw Hardware::UnexpectedReply();

        location = parts[1];
        origin = std::string(parts[2], 1, parts[2].size() - 2);
        text = readLine();
        return true;
      }
    };
  }
}

#endif
