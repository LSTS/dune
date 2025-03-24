//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
// Changes: Pedro Gonçalves                                                 *
//***************************************************************************

#ifndef TRANSPORTS_SMS_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_SMS_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SMS
  {
    using DUNE_NAMESPACES;

    //! SMS terminator character.
    static const char c_sms_term = 0x1a;
    //! SMS input prompt.
    static const char* c_sms_prompt = "\r\n> ";
    //! Size of SMS input prompt.
    static const unsigned c_sms_prompt_size = std::strlen(c_sms_prompt);
    //! GSM modem timeout execution on seconds.
    static const double c_timeout = 5.0;

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
        m_busy = false;
      }

      //! Destructor.
      ~Driver(void)
      { }

      bool
      isModemBusy(void)
      {
        return m_busy;
      }

      void
      checkMessages(void)
      {
        m_busy = true;
        IMC::TextMessage sms;
        std::string location;
        unsigned read_count = 0;
        bool text_mode = true;
        sendAT("+CMGL=\"ALL\"");
        //! Read all messages.
        while (readSMS(location, sms.origin, sms.text,text_mode))
        {
          if ((location == "\"REC UNREAD\"") || (location == "\"REC READ\""))
          {
            ++read_count;
            if(text_mode)
              getTask()->dispatch(sms);
          }
        }

        // Remove read messages.
        if (read_count > 0)
        {
          sendAT("+CMGD=0,3");
          expectOK();
        }
        m_busy = false;
      }

      std::string
      getOwnNumber(void)
      {
        m_busy = true;
        try
        {
          sendAT("+CPBS=ON");
          expectOK();
          sendAT("+CPBS?");
          setTimeout(c_timeout);
          std::string line = readLine();
          int n_registered_numbers = 0;
          int n_total_capacity = 0;
          if (std::sscanf(line.c_str(), "+CPBS: \"ON\",%d,%d", &n_registered_numbers, &n_total_capacity) == 2)
          {
            expectOK();
            if (n_registered_numbers > 0)
            {
              sendAT("+CPBR=1");
              setTimeout(c_timeout);
              line = readLine();
              int n_index;
              char n_number[20];
              int n_type;
              char n_name[20];
              if (std::sscanf(line.c_str(), "+CPBR: %d,\"%[^\"]\",%d,\"%[^\"]", &n_index, n_number,&n_type,n_name) == 4)
              {
                expectOK();
                if (n_index == 1)
                {

                  getTask()->inf(DTR("SIM card number: %s"), n_number);
                  m_busy = false;
                  return std::string(n_number);
                }
              }

            }
          }
        }
        catch (...)
        {
          getTask()->inf("SIM card number: not found");
          m_busy = false;
          return "";
        }
        m_busy = false;
        return "";
      }

      void
      sendSMS(const std::string& number, const std::string& msg, double timeout)
      {
        m_busy = true;
        uint8_t bfr[16];
        Time::Counter<double> timer(timeout);
        getTask()->trace("Sending SMS to %s | %s", number.c_str(), msg.c_str());
        try
        {
          m_handle->flushInput();
          m_handle->flushOutput();
          setReadMode(HayesModem::READ_MODE_RAW);
          sendAT(String::str("+CMGS=\"%s\"", number.c_str()));
          readRaw(timer, bfr, 4);
          setReadMode(HayesModem::READ_MODE_LINE);

          if (std::memcmp(bfr, c_sms_prompt, c_sms_prompt_size) != 0)
          {
            m_busy = false;
            getTask()->war("sendSMS:error 1:UnexpectedReply:%s", bfr);
            throw Hardware::UnexpectedReply();
          }

          std::string data = msg;
          data.push_back(c_sms_term);
          sendRaw((uint8_t*)&data[0], data.size());
        }
        catch (...)
        {
          setReadMode(HayesModem::READ_MODE_LINE);
          m_busy = false;
          getTask()->war("sendSMS:error 2");
          throw;
        }

        setTimeout(c_timeout);
        std::string reply = readLine(timer);
        if (reply == "ERROR")
        {
          m_busy = false;
          throw std::runtime_error(DTR("sendSMS:error 3:unknown error"));
        }
        else if (String::startsWith(reply, "+CMGS:"))
        {
          setBusy(true);
        }
        else if (String::startsWith(reply, "+CMS ERROR:"))
        {
          int code = -1;
          std::sscanf(reply.c_str(), "+CMS ERROR: %d", &code);
          m_busy = false;
          throw std::runtime_error(String::str(DTR("SMS transmission failed with error code %d"), code));
        }
        else
        {
          m_busy = false;
          getTask()->war("sendSMS:error 4:UnexpectedReply:%s", reply.c_str());
          throw UnexpectedReply();
        }

        expectOK();
        m_busy = false;
      }

      bool
      getBalance(unsigned ussd_code, std::string &balance)
      {
        m_busy = true;
        char code[50];
        sprintf(code,"+CUSD=1,\"*#%d#\"",ussd_code);
        sendAT(code);

        try{
          expectOK();
        }
        catch(...) {
          getTask()->war("Can't read balance. Please check the USSD code or connection");
          m_busy = false;
          return false;
        }
        setTimeout(c_timeout);
        std::string msg = readLine();
        Utils::String::toLowerCase(msg);

        size_t startPos = msg.find("saldo:");

        if(startPos == std::string::npos) {
          getTask()->war("Can't read balance");
          m_busy = false;
          return false;
        }

        std::string firstPart = msg.substr(startPos);
        balance = firstPart.substr(6, firstPart.find("eur")-6);

        getTask()->debug("Saldo: %s", balance.c_str());

        std::stringstream ss;
        ss << " | " << String::str(balance) << "Eur ";
        balance = ss.str();
        m_busy = false;
        return true;
      }

    private:
      //! PIN number if needed.
      std::string m_pin;
      //! Flag to Control access to the modem.
      bool m_busy;

      void
      queryRSSI(void)
      {
        m_busy = true;
        sendAT("+CSQ");
        setTimeout(c_timeout);
        std::string line = readLine();
        int rssi = -1;
        int ber = 0;
        if (std::sscanf(line.c_str(), "+CSQ: %d,%d", &rssi, &ber) == 2)
        {
          expectOK();
          setRSSI(convertRSSI(rssi));
        }
        m_busy = false;
      }

      void
      sendReset(void)
      {
        sendAT("Z");
      }

      void
      sendInitialization(void)
      {
        m_busy = true;
        setEcho(false);
        setErrorVerbosity(2);
        setPin(m_pin);
        setMessageFormat(1);
        m_busy = false;
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
        if (String::startsWith(str, "^MODE"))
          return true;
        if (String::startsWith(str, "+CUSATEND"))
          return true;
        if (String::startsWith(str, "^ECCLIST"))
          return true;
        if (String::startsWith(str, "+CUSATP"))
          return true;
        if (String::startsWith(str, "^HCSQ"))
          return true;
        if (String::startsWith(str, "^RSSI"))
          return true;
        if(String::startsWith(str, "+CRING")) //incoming call
          return true;
        if(String::startsWith(str, "^CEND:")) //end of call
          return true;
        if(String::startsWith(str, "NO CARRIER")) //missed call
          return true;
        return false;
      }

      void
      setPin(const std::string& pin)
      {
        if (pin.empty())
          return;
        m_busy = true;
        std::string bfr = readValue("+CPIN?");
        if (bfr == "+CPIN: READY")
        {
          m_busy = false;
          return;
        }

        if (bfr == "+CPIN: SIM PIN")
        {
          sendAT(String::str("+CPIN=%s", pin.c_str()));
          expectOK();
        }
        m_busy = false;
      }

      void
      setMessageFormat(unsigned value)
      {
        m_busy = true;
        sendAT(String::str("+CMGF=%u", value));
        expectOK();
        m_busy = false;
      }

      void
      setErrorVerbosity(unsigned value)
      {
        m_busy = true;
        sendAT(String::str("+CMEE=%u", value));
        expectOK();
        m_busy = false;
      }

      bool
      readSMS(std::string& location, std::string& origin, std::string& text, bool& text_mode)
      {
        m_busy = true;
        setTimeout(c_timeout);
        std::string header = readLine();
        // Print the received message
        getTask()->trace("Received message: %s", header.c_str());
        if (header == "OK")
        {
          m_busy = false;
          return false;
        }

        // Check if header contains the string +CMTI, +CSQ
        while(String::startsWith(header, "+CMTI:") || String::startsWith(header, "+CSQ:") || header == "OK")
        {
          getTask()->trace("Received CMTI/CSQ: %s", header.c_str());
          setTimeout(c_timeout);
          header = readLine();
        }

        if (!String::startsWith(header, "+CMGL:"))
        {
          m_busy = false;
          getTask()->war("Unexpected SMS header (1): %s", header.c_str());
          throw Hardware::UnexpectedReply();
        }

        std::vector<std::string> parts;
        String::split(header, ",", parts);
        if (parts.size() != 6)
        {
          if (parts.size() >= 2)
          {
            location = parts[1];
            m_busy = false;
            return true;
          }
          m_busy = false;
          getTask()->war("Unexpected SMS header (2): %s", header.c_str());
          throw Hardware::UnexpectedReply();
        }

        if ((parts[2] != "\"\"") && (parts[2].size() <= 2))
        {
          m_busy = false;
          getTask()->war("readSMS: Unexpected SMS header (3): %zu | %s", parts[2].size(), parts[2].c_str());
        }

        location = parts[1];
        origin = std::string(parts[2], 1, parts[2].size() - 2);
        setTimeout(c_timeout);
        std::string incoming_data = readLine();

        if(Algorithms::Base64::validBase64(incoming_data))
        {
          text_mode = false;
          Utils::ByteBuffer bfr;
          bfr.setSize(incoming_data.length());
          std::string decoded = Algorithms::Base64::decode(incoming_data);
          std::copy(decoded.begin(),decoded.end(),bfr.getBuffer());
          uint16_t length = decoded.size();
          try
          {
            IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), length);
            getTask()->inf(DTR("received IMC message of type %s via SMS"),msg_d->getName());
            getTask()->dispatch(msg_d);
          }
          catch(...) //InvalidSync || InvalidMessageId || InvalidCrc
          {
            getTask()->trace(DTR("Parsing unrecognized Base64 message as text:%s|S:%zu"), incoming_data.c_str(), incoming_data.size());
            text.assign(incoming_data);
            text_mode = true;
            m_busy = false;
            return true;
          }
        }
        else
        {
          text.assign(incoming_data);
          text_mode = true;
        }
        m_busy = false;
        return true;
      }
    };
  }
}

#endif
