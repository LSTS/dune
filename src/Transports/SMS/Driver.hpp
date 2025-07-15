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
// Author: Pedro Gonçalves                                                 *
//***************************************************************************

#ifndef TRANSPORTS_SMS_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_SMS_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SMS
  {
    using DUNE_NAMESPACES;

    static const uint8_t c_time_to_restart_task = 10;
    static const uint8_t c_time_to_check_response = 10;
    static const char c_sms_term = 0x1a;

    // Structure to hold CSQ command results
    struct CSQResult
    {
      int ber = -1;               // Bit Error Rate (0-7, 99 = unknown)
      int rssiRaw = -1;           // Raw RSSI value (0-31, 99 = unknown)
      float rssiPercent = -1.0f;  // RSSI as percentage (0-100%)
      bool ok = false;            // True if response contains OK
      bool newUpdate = false;     // True if new update is available
    };

    struct SmsRequest
    {
      // Request id.
      uint16_t req_id;
      // Source address.
      uint16_t src_adr;
      // Source entity id.
      uint8_t src_eid;
      // Recipient.
      std::string destination;
      // Message to send.
      std::string sms_text;
      // Deadline to deliver the
      double deadline;
      // Higher deadlines have less priority.
      bool
      operator<(const SmsRequest& other) const
      {
        return deadline > other.deadline;
      }
    };

    // Structure to store information about each SMS
    struct SMSRx {
        std::string number;   // Sender's phone number
        std::string message;  // Content of the SMS
        int slotId;           // Index of the SMS in the modem
        double timestamp;     // Timestamp when the SMS was received
    };

    struct GSMInfo
    {
      std::string model;          // Modem model
      std::string manufacturer;   // Modem manufacturer
      std::string firmwareVersion; // Firmware version
    };

    class Driver
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart serial port connected to the ISU.
      //! @param[in] pin PIN number.
      Driver(DUNE::Tasks::Task *task, IO::Handle* handle, int time_to_accept_sms,
             std::string pin):
        m_task(task),
        m_handle(handle),
        m_time_to_accept_sms(time_to_accept_sms),
        m_pin(pin)
      {
        m_rx_timeout.setTop(c_time_to_check_response);
        m_modem_sending_commands = false;
        m_queue_to_send.clear();
        m_queue_received.clear();
        m_received_sms = false;
        m_sms_sent_count = 0;
        m_sms_received_count = 0;
        m_handle_is_open = false;
        m_counter_errors = 0;
      }

      //! Destructor.
      ~Driver(void)
      { }

      void
      addRXLineReceived(const std::string& line)
      {
        m_rx_line = line;
        m_task->debug("[Driver]:RX Line received: %s", m_rx_line.c_str());
      }

      bool
      initModemGSM(void)
      {
        m_modem_sending_commands = true;
        sendCommand("ATE1\r\n", "OK"); // Disable echo
        if(respondReceived())
        {
          m_task->trace("[Driver]:Modem echo enabled to get responses");
          getModemInfo();
          if(!m_gsm.model.empty() || !m_gsm.manufacturer.empty() || !m_gsm.firmwareVersion.empty())
          {
            std::string modemInfo = "Model: " + m_gsm.model +
                                  ", Manufacturer: " + m_gsm.manufacturer +
                                  ", Firmware Version: " + m_gsm.firmwareVersion;
            m_task->inf("[Driver]:Modem Info - %s", modemInfo.c_str());

            IMC::VersionInfo versionMsg;
            versionMsg.op = VersionInfo::OP_REPLY;
            versionMsg.version = m_gsm.firmwareVersion;
            versionMsg.description = modemInfo;
            m_task->dispatch(versionMsg);
          }
          else
          {
            m_task->inf("[Driver]:Failed to retrieve modem information");
          }
        }
        else
        {
          m_task->trace("[Driver]:Failed to disable modem echo");
        }

        sendCommand("ATE0\r\n", "OK"); // Disable echo
        if(respondReceived())
        {
          m_task->inf("[Driver]:Modem echo disabled");
        }
        else
        {
          m_task->err("[Driver]:Failed to disable modem echo");
          m_modem_sending_commands = false;
          return false;
        }

        sendCommand("AT+CMEE=2\r\n", "OK"); // Enable verbose error messages
        if(respondReceived())
        {
          m_task->inf("[Driver]:Verbose error messages enabled");
        }
        else
        {
          m_task->err("[Driver]:Failed to enable verbose error messages");
          m_modem_sending_commands = false;
          return false;
        }

        sendCommand("AT+CPIN?\r\n", "READY"); // Check if SIM is ready
        if(respondReceived())
        {
          m_task->inf("[Driver]:CPIN is ready");
        }
        else
        {
          m_task->err("[Driver]:CPIN is not ready, trying to unlock with PIN");
          if(m_pin.empty())
          {
            m_task->err("[Driver]:No PIN provided, cannot unlock SIM");
            m_modem_sending_commands = false;
            return false;
          }
          else
          {
            sendCommand("AT+CPIN=\"" + m_pin + "\"\r\n", "OK");
            if(respondReceived())
            {
              m_task->inf("[Driver]:SIM unlocked successfully");
            }
            else
            {
              m_task->err("[Driver]:Failed to unlock SIM with provided PIN");
              m_modem_sending_commands = false;
              return false;
            }
          }
        }

        sendCommand("AT+CSCS=\"GSM\"\r\n", "OK"); // Set character set to GSM
        if(respondReceived())
        {
          m_task->inf("[Driver]:Character set to GSM");
        }
        else
        {
          m_task->err("[Driver]:Failed to set character to GSM");
          m_modem_sending_commands = false;
          return false;
        }

        sendCommand("AT+CMGF=1\r\n", "OK"); // Set SMS mode to text
        if(respondReceived())
        {
          m_task->inf("[Driver]:SMS mode set to text");
        }
        else
        {
          m_task->err("[Driver]:Failed to set SMS mode to text");
          m_modem_sending_commands = false;
          return false;
        }

        sendCommand("AT+CMEE=2\r\n", "OK"); // Set error reporting to verbose
        if(respondReceived())
        {
          m_task->inf("[Driver]:Error reporting set to verbose");
        }
        else
        {
          m_task->err("[Driver]:Failed to set error reporting to verbose");
        }

        m_modem_sending_commands = false;
        return true;
      }

      void
      sendCommand(const std::string& command, const std::string& expectedResponse = "")
      {
        if (m_handle != NULL && m_handle_is_open)
        {
          m_expectedResponse = expectedResponse;
          m_task->trace("[Driver]:Sending command: %s | Expected: %s", command.c_str(), expectedResponse.c_str());
          m_handle->flushOutput();
          m_handle->writeString(command.c_str());
          m_rx_timeout.reset();
        }
        else
        {
          if (m_handle == NULL)
            m_task->inf("[Driver]:Handle is NULL, cannot send command: %s", command.c_str());
          else
            m_task->inf("[Driver]:Handle is not open, cannot send command: %s", command.c_str());
        }
      }

      void
      updateHandle(IO::Handle* handle)
      {
        m_task->inf("[Driver]:Updating handle");
        m_handle = handle;
      }

      void
      parseIncomingData(void)
      {
        if (m_rx_line.empty() && !m_modem_sending_commands)
          return;

        m_task->trace("[Driver]:Parsing incoming data: %s", m_rx_line.c_str());
        // Process the received line
        if (m_rx_line.find("+CSQ:") != std::string::npos)
        {
          m_csqResult = parseCSQResponse(m_rx_line);
          m_csqResult.newUpdate = true; // Mark as new update
          m_task->debug("[Driver]:Parsed CSQ Result - RSSI: %d, BER: %d, RSSI Percent: %.2f, OK: %s",
                        m_csqResult.rssiRaw,
                        m_csqResult.ber,
                        m_csqResult.rssiPercent,
                        m_csqResult.ok ? "true" : "false"); 

          IMC::RSSI rssiMsg;
          rssiMsg.value = (int)m_csqResult.rssiPercent;
          m_task->dispatch(rssiMsg);
        }
        else if (m_rx_line.find("+CMTI:") != std::string::npos)
        {
          m_task->inf("[Driver]:Received new SMS notification, sending command to read SMS");
          sendCommand("AT+CMGL=\"ALL\"\r\n", "OK");
        }
        else if (m_rx_line.find("+CMGL:") != std::string::npos)
        {
          std::vector<SMSRx> smsList = parseSMS(m_rx_line);
          if( !smsList.empty())
          {
            for (const auto& sms : smsList)
            {
              m_task->inf("[Driver]:Received SMS from %s: %s", sms.number.c_str(), sms.message.c_str());
              // Here you can handle the received SMS as needed
              // For example, you might want to dispatch it as a message
              SMS::SmsRequest sms_req;
              sms_req.req_id = sms.slotId; // Use the slot ID as request ID
              sms_req.destination = sms.number;
              sms_req.sms_text = sms.message;
              m_queue_received.push_back(sms_req);
              m_received_sms = true;
            }
          }
        }
        else if (m_rx_line.find("AT+CGMM") != std::string::npos && m_rx_line.find("OK") != std::string::npos)
        {
          size_t startPos = m_rx_line.find("\r\n") + 2;
          size_t endPos = m_rx_line.find("\r\n", startPos);
          if (endPos == std::string::npos)
            endPos = m_rx_line.length();

          m_gsm.model = m_rx_line.substr(startPos, endPos - startPos);
          m_task->trace("[Driver]:Modem model: %s", sanitize(m_gsm.model).c_str());
        }
        else if (m_rx_line.find("AT+CGMI") != std::string::npos && m_rx_line.find("OK") != std::string::npos)
        {
          size_t startPos = m_rx_line.find("\r\n") + 2;
          size_t endPos = m_rx_line.find("\r\n", startPos);
          if (endPos == std::string::npos)
            endPos = m_rx_line.length();

          m_gsm.manufacturer = m_rx_line.substr(startPos, endPos - startPos);
          m_task->trace("[Driver]:Modem manufacturer: %s", sanitize(m_gsm.manufacturer).c_str());
        }
        else if (m_rx_line.find("AT+CGMR") != std::string::npos && m_rx_line.find("OK") != std::string::npos)
        {
          size_t startPos = m_rx_line.find("\r\n") + 2;
          size_t endPos = m_rx_line.find("\r\n", startPos);
          if (endPos == std::string::npos)
            endPos = m_rx_line.length();

          m_gsm.firmwareVersion = m_rx_line.substr(startPos, endPos - startPos);
          m_task->trace("[Driver]:Modem firmware version: %s", m_gsm.firmwareVersion.c_str());
        }
        else if (m_rx_line.find("AT+CPIN") != std::string::npos && m_rx_line.find("READY") != std::string::npos)
        {
          m_task->inf("[Driver]:SIM card is ready");
        }
        else if (m_rx_line.find("OK") != std::string::npos)
        {
          m_task->debug("[Driver]:Received OK response: %s", m_rx_line.c_str());
        }
        else if (m_rx_line.find("ERROR") != std::string::npos)
        {
          m_task->debug("[Driver]:Received ERROR response: %s", m_rx_line.c_str());
        }
        else
        {
          m_task->inf("[Driver]:Received line does not contain valid Header: %s", m_rx_line.c_str());
        }

        m_rx_line.clear(); // Clear the line after processing
      }

      void
      addtoSendQueue(const SMS::SmsRequest& sms_req)
      {
        m_task->trace("[Driver]:Adding SMS request to send queue: %s", sms_req.sms_text.c_str());
        m_queue_to_send.push_back(sms_req);
      }

      bool
      receivedSMS(void) const
      {
        return m_received_sms;
      }

      void
      clearReceivedSMS(void)
      {
        m_received_sms = false;
      }

      void
      sendSmsStatus(const SMS::SmsRequest* sms_req, IMC::SmsStatus::StatusEnum status, const std::string& info = "")
      {
        IMC::SmsStatus sms_status;
        sms_status.setDestination(sms_req->src_adr);
        sms_status.setDestinationEntity(sms_req->src_eid);
        sms_status.req_id = sms_req->req_id;
        sms_status.info   = info;
        sms_status.status = status;
        m_task->dispatch(sms_status);
      }

      void
      processQueues(void)
      {
        // Process the queue to send SMS messages
        if (!m_queue_to_send.empty() && m_csqResult.rssiPercent > 0)
        {
          for (const auto& sms_req : m_queue_to_send)
          {
            if(m_handle == NULL)
            {
              m_task->war("[Driver]:Handle is NULL, cannot send SMS.");
              return;
            }
            if (sms_req.deadline < Time::Clock::getSinceEpoch())
            {
              m_task->war("[Driver]:SMS request deadline has passed for req_id: %d", sms_req.req_id);
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_INPUT_FAILURE, "Deadline passed");
              continue; // Skip sending this SMS
            }
            if (sms_req.sms_text.empty())
            {
              m_task->war("[Driver]:SMS request text is empty for req_id: %d", sms_req.req_id);
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_INPUT_FAILURE, "Empty SMS text");
              continue; // Skip sending this SMS
            }
            if (sms_req.destination.empty())
            {
              m_task->war("[Driver]:SMS request destination is empty for req_id: %d", sms_req.req_id);
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_INPUT_FAILURE, "Empty destination");
              continue; // Skip sending this SMS
            }
            if (sms_req.sms_text.length() > 160)
            {
              m_task->war("[Driver]:SMS request text exceeds 160 characters for req_id: %d", sms_req.req_id);
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_INPUT_FAILURE, "SMS text too long");
              continue; // Skip sending this SMS
            }
            m_task->debug("[Driver]:Processing SMS request to send: %s", sms_req.sms_text.c_str());
            if (sendSMS(sms_req))
            {
              m_task->debug("[Driver]:SMS sent successfully to %s", sms_req.destination.c_str());
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_SENT, "SMS sent successfully");
              m_sms_sent_count++;
            }
            else
            {
              m_task->debug("[Driver]:Failed to send SMS to %s", sms_req.destination.c_str());
              sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_ERROR, "Failed to send SMS");
            }
          }
          m_queue_to_send.clear(); // Clear the queue after processing
        }
        else if (!m_queue_received.empty())
        {
          // Process the queue of received SMS messages
          for (const auto& sms_req : m_queue_received)
          {
            // if m_handle is not open, we cannot process received SMS
            if (!m_handle_is_open)
            {
              m_task->inf("[Driver]:Handle is not ready, cannot process received SMS.");
              break;
            }
            m_task->debug("[Driver]:Processing received SMS request: %s", sms_req.sms_text.c_str());
            // Here you can handle the received SMS as needed
            // For example, you might want to dispatch it as a message
            // heck if plain text, if yes run:
            IMC::TextMessage receivedSms;
            receivedSms.origin = sms_req.destination;
            receivedSms.text= sms_req.sms_text;
            m_task->dispatch(receivedSms);
            //delete the SMS from the modems memory
            deleteSMSAtIndex(sms_req.req_id);
            m_sms_received_count++;
          }
          m_queue_received.clear(); // Clear the queue after processing
        }
      }

      void
      setTimeToAcceptSMS(int time_to_accept_sms)
      {
        m_time_to_accept_sms = time_to_accept_sms;
        m_task->trace("[Driver]:Time to accept SMS set to %d hours", m_time_to_accept_sms);
      }

      uint32_t
      getSmsSentCount(void) const
      {
        return m_sms_sent_count;
      }

      uint32_t
      getSmsReceivedCount(void) const
      {
        return m_sms_received_count;
      }

      std::string
      convertTimeToString(double time_in_seconds) const
      {
        int hours = static_cast<int>(time_in_seconds / 3600);
        int minutes = static_cast<int>((time_in_seconds - (hours * 3600)) / 60);
        int seconds = static_cast<int>(time_in_seconds - (hours * 3600) - (minutes * 60));
        std::ostringstream oss;
        if(hours > 0)
        {
          oss << "< " << (hours + 1) << "h";
        }
        else if(minutes > 0)
        {
          oss << "< " << (minutes + 1) << "m";
        }
        else
        {
          oss << seconds << "s";
        }
        return oss.str();
      }

      void
      setHandleIsOpen(bool is_open)
      {
        m_handle_is_open = is_open;
        m_task->inf("[Driver]:Handle is open: %s", is_open ? "true" : "false");
      }

      int
      getNumberOfErrors(void) const
      {
        return m_counter_errors;
      }

      void
      setPin(const std::string pin)
      {
        m_pin = pin;
        m_task->inf("[Driver]:PIN set to: %s", m_pin.c_str());
      }

      void
      getRssi(void)
      {
        if(m_handle_is_open)
        {
          m_task->debug("[DRIVER]: Sending AT+CSQ command to check RSSI");
          sendCommand("AT+CSQ\r\n");
          if(!respondReceived(false))
          {
            m_task->war("[DRIVER]: Failed to get RSSI from modem");
            m_counter_errors++;
          }
          else
          {
            m_counter_errors = 0; // Reset error counter on successful response
          }
        }
      }

      void
      checkMailBox(void)
      {
        if(m_handle_is_open)
        {
          m_task->debug("checkCommandsTriggered: Sending AT+CMGL command to check mailbox");
          sendCommand("AT+CMGL=\"ALL\"\r\n");
          if(!respondReceived(false))
          {
            m_task->war("[DRIVER]: Failed to check mailbox");
            m_counter_errors++;
          }
          else
          {
            m_counter_errors = 0; // Reset error counter on successful response
          }
        }
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Serial port handle.
      IO::Handle *m_handle;
      //! Expected response from the modem.
      std::string m_expectedResponse;
      //! RX line
      std::string m_rx_line;
      //! rx check timeout watchdog.
      Time::Counter<float> m_rx_timeout;
      //! Structure to hold CSQ command results
      CSQResult m_csqResult;
      //! Flag to control state if modem is sending commands or not.
      bool m_modem_sending_commands;
      //! Vector to hold SMS messages to be sent.
      std::vector<SMS::SmsRequest> m_queue_to_send;
      //! Vector to hold SMS messages received.
      std::vector<SMS::SmsRequest> m_queue_received;
      //! Flag to indicate if new SMS was received.
      bool m_received_sms;
      //! Time to accept incoming SMS.
      int m_time_to_accept_sms;
      //! PIN number for the SIM card.
      std::string m_pin;
      //! GSM modem information.
      GSMInfo m_gsm;
      //! Number of sms send
      uint32_t m_sms_sent_count;
      //! Number of sms received
      uint32_t m_sms_received_count;
      //! Flag to control handle state
      bool m_handle_is_open;
      //! counter errors to restart task
      int m_counter_errors;

      // Robust split function: splits string by delimiter safely
      std::vector<std::string>
      split(const std::string& str, char delimiter)
      {
        std::vector<std::string> tokens;
        std::stringstream ss(str);
        std::string token;

        while (std::getline(ss, token, delimiter))
        {
          if (!token.empty() && token.back() == '\r')
          {
            token.pop_back();
          }
          if (!token.empty())
          {
            tokens.push_back(token);
          }
        }
        return tokens;
      }

      bool
      respondReceived(bool delete_input = true)
      {
        while(!m_rx_timeout.overflow())
        {
          if (!m_rx_line.empty())
          {
            m_task->debug("[Driver]:Checking response: %s", m_rx_line.c_str());
            if (m_expectedResponse.empty() || m_rx_line.find(m_expectedResponse) != std::string::npos)
            {
              m_task->debug("[Driver]:Response received: %s", m_rx_line.c_str());
              if(delete_input)
                m_rx_line.clear();
              m_counter_errors = 0; // Reset error counter on successful response
              return true;
            }
            else
            {
              m_task->debug("[Driver]:Expected response not found in: %s", m_rx_line.c_str());
            }
          }
          Time::Delay::waitMsec(100); // Wait for a short period before checking again
        }
        m_rx_line.clear();
        return false;
      }

      // Parses the full AT response string for +CSQ and OK
      CSQResult
      parseCSQResponse(const std::string& fullResponse)
      {
        CSQResult result;
        auto lines = split(fullResponse, '\n');

        for (const auto& line : lines)
        {
          if (line.find("+CSQ:") != std::string::npos)
          {
            size_t colonPos = line.find(':');
            if (colonPos == std::string::npos || colonPos + 1 >= line.size())
            {
              // malformed line, skip safely
              continue;
            }
            std::string data = line.substr(colonPos + 1);
            auto values = split(data, ',');
            if (values.size() != 2)
            {
              // not the expected format
              continue;
            }
            try
            {
              int rssi = std::stoi(values[0]);
              int ber = std::stoi(values[1]);

              // Validate ranges
              if (rssi < 0 || rssi > 31)
              {
                rssi = -1;
              }
              if ((ber < 0 || ber > 7) && ber != 99)
              {
                ber = -1;
              }

              result.rssiRaw = rssi;
              result.ber = ber;

              if (rssi != -1)
              {
                result.rssiPercent = (rssi / 31.0f) * 100.0f;
              }
            }
            catch (const std::exception& e)
            {
              // stoi failed: invalid integer format, ignore line safely
              continue;
            }
          }
          else if (line == "OK")
          {
            result.ok = true;
            m_counter_errors = 0; // Reset error counter on successful response
          }
        }

        return result;
      }

      // Sends an SMS text message to a given phone number.
      // Returns true on success, false otherwise.
      bool
      sendSMS(const SMS::SmsRequest& sms_req)
      {
        if(!m_handle_is_open)
        {
          m_task->inf("[Driver]:Handle is not ready, cannot send SMS.");
          return false;
        }
        //check if phone number is valid
        if (sms_req.destination.empty() || sms_req.sms_text.empty())
        {
          m_task->war("[Driver]:Invalid phone number or SMS text");
          return false;
        }

        m_modem_sending_commands = true;
        std::string response;
        // 1. Make sure modem is in SMS text mode
        sendCommand("AT+CMGF=1\r\n", "OK");
        if (!respondReceived())
        {
          m_task->err("[Driver]:Failed to set SMS text mode");
          m_modem_sending_commands = false;
          m_counter_errors++;
          return false;
        }
        else
        {
          m_task->trace("[Driver]:SMS text mode set");
        }

        // 2. Send AT+CMGS command with recipient phone number
        sendCommand("AT+CMGS=\"" + sms_req.destination + "\"\r\n", ">");  // wait for '>' prompt
        if (!respondReceived())
        {
          m_task->err("[Driver]:Failed to get prompt for message text");
          m_modem_sending_commands = false;
          m_counter_errors++;
          return false;
        }
        else
        {
          m_task->debug("[Driver]:Prompt for message text received");
        }

        // 3. Send message text followed by Ctrl+Z (ASCII 26) to indicate end of message
        std::string msgWithCtrlZ = sms_req.sms_text + "\r" + c_sms_term;
        //sendRaw(msgWithCtrlZ, "OK");  // wait for OK response after sending message
        sendCommand(msgWithCtrlZ, "OK");
        if (!respondReceived())
        {
          m_task->err("[Driver]:Send Failed: [%s] to %s, req_id: %d",
                      sanitize(sms_req.sms_text).c_str(), sms_req.destination.c_str(), sms_req.req_id);
          m_modem_sending_commands = false;
          m_counter_errors++;
          return false;
        }

        m_task->inf("[Driver]:Send OK: [%s] to %s, req_id: %d",
                      sanitize(sms_req.sms_text).c_str(), sms_req.destination.c_str(), sms_req.req_id);
        m_modem_sending_commands = false;
        m_counter_errors = 0; // Reset error counter on successful send
        return true;
      }

      // Function to parse CMGL output and extract SMS number + message
      std::vector<SMSRx>
      parseSMS(const std::string& input)
      {
        std::vector<SMSRx> smsList;
        std::istringstream stream(input);
        std::string line;
        std::string header;
        std::string body;

        std::regex cmglRegex(R"delim(\+CMGL: (\d+),"[^"]*","([^"]*)",,"([^"]*)")delim");
        double time_sys = Clock::getSinceEpoch();
        double time_to_accept_sms = m_time_to_accept_sms * 3600.0; // Convert hours to seconds
        while (std::getline(stream, line))
        {
          if (line.rfind("+CMGL:", 0) == 0)
          {
            header = line;

            if (std::getline(stream, body))
            {
              std::smatch match;
              if (std::regex_search(header, match, cmglRegex))
              {
                SMSRx sms;
                sms.slotId = std::stoi(match[1]);
                // check if sms.slotId is valid
                if (sms.slotId < 0)
                {
                  m_task->war("[Driver]:Invalid SMS slot ID: %d", sms.slotId);
                  continue; // Skip invalid slot IDs
                }

                sms.number = match[2];
                std::string timestampStr = match[3];
                sms.timestamp = parseSMSTimestamp(timestampStr);
                if (!body.empty() && body.back() == '\r')
                  body.pop_back();

                sms.message = body;
                m_task->trace("[Driver]:Parsed SMS - Time: %s (%0.f epoch sec).  Number: %s, Message: %s",
                              timestampStr.c_str(), sms.timestamp ,sms.number.c_str(),
                            sms.message.c_str());

                if (sms.timestamp + time_to_accept_sms < time_sys)
                {
                  m_task->war("[Driver]:SMS from %s is too old, ignoring (%s : %.0f seconds)", sms.number.c_str(), sms.message.c_str(),
                              time_sys - sms.timestamp);
                  deleteSMSAtIndex(sms.slotId);
                  continue; // Ignore SMS if it's too old
                }
                smsList.push_back(sms);
              }
              else
              {
                m_task->war("[Driver]:Regex failed for header: %s", header.c_str());
              }
            }
          }
        }

        return smsList;
      }

      double
      parseSMSTimestamp(const std::string& ts)
      {
        std::tm tm{};
        int tzOffset = 0;

        if (sscanf(ts.c_str(), "%2d/%2d/%2d,%2d:%2d:%2d+%2d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday,
                   &tm.tm_hour, &tm.tm_min, &tm.tm_sec, &tzOffset)
            == 7)
        {
          tm.tm_year += 100;
          tm.tm_mon -= 1;

          std::time_t t = timegm(&tm);
          t -= tzOffset * 15 * 60;
          return static_cast<double>(t);
        }

        return 0.0;
      }

      void
      deleteSMSAtIndex(int index)
      {
        if (m_handle != NULL)
        {
          std::string deleteCommand = "AT+CMGD=" + std::to_string(index) + ",0\r\n";
          sendCommand(deleteCommand, "OK");
          if (!respondReceived())
          {
            m_task->war("[Driver]:Failed to delete SMS index %d", index);
            m_counter_errors++;
          }
          else
          {
            m_task->inf("[Driver]:SMS with index %d deleted successfully", index);
            m_counter_errors = 0; // Reset error counter on successful deletion
          }
        }
        else
        {
          m_task->war("[Driver]:Handle is NULL, cannot delete SMS.");
        }
      }

      void
      getModemInfo(void)
      {
        m_task->inf("[Driver]:Getting modem info");
        sendCommand("AT+CGMM\r\n", "OK"); // Get modem model
        Time::Delay::waitMsec(700); // Wait for a short period to allow response
        parseIncomingData();
        sendCommand("AT+CGMI\r\n", "OK"); // Get modem manufacturer
        Time::Delay::waitMsec(700); // Wait for a short period to allow response
        parseIncomingData();
        sendCommand("AT+CGMR\r\n", "OK"); // Get firmware version
        Time::Delay::waitMsec(700); // Wait for a short period to allow response
        parseIncomingData();
      }

    };
  }
}

#endif
