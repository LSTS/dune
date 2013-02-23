//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  //! Device driver for ETSI GSM 07.07 compatible GSM modems.
  //!
  //! @author Ricardo Martins
  namespace GSM
  {
    using DUNE_NAMESPACES;

    //! SMS struct.
    struct SMS
    {
      // Recipient.
      std::string recipient;
      // Message to send.
      std::string message;
      // Delivery deadline.
      double deadline;

      // Higher deadlines have less priority.
      bool
      operator<(const SMS& other) const
      {
        return deadline > other.deadline;
      }
    };

    //! %Task arguments.
    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! GSM Pin.
      std::string pin;
      //! RSSI periodicity (s).
      double rssi_per;
      //! Read SMS periodicity (s).
      double rsms_per;
      //! SMS send timeout (s).
      double sms_tout;
      //! Device response timeout.
      float reply_tout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //!! Internal buffer size.
      static const int c_buffer_size = 4096;
      //!! Internal buffer.
      char m_buffer[c_buffer_size];
      //!! Writting index of the internal buffer.
      int m_widx;
      //!! Serial port handle.
      SerialPort* m_uart;
      //! SMS queue.
      std::priority_queue<SMS> m_queue;
      //! RSSI message.
      IMC::RSSI m_rssi;
      //! RSSI query timer.
      Counter<double> m_rssi_ctr;
      //! SMS reception query timer.
      Counter<double> m_rsms_ctr;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Reply Timeout", m_args.reply_tout)
        .defaultValue("2.0")
        .units(Units::Second)
        .description("Amount of time to wait for a command reply");

        param("PIN", m_args.pin)
        .defaultValue("")
        .description("PIN Code");

        param("RSSI Periodicity", m_args.rssi_per)
        .defaultValue("10")
        .units(Units::Second)
        .description("Periodicity of RSSI reports");

        param("Read SMS Periodicity", m_args.rsms_per)
        .defaultValue("10")
        .units(Units::Second)
        .description("Periodicity of received SMS checks");

        param("SMS Send Timeout", m_args.sms_tout)
        .defaultValue("60")
        .units(Units::Second)
        .description("Maximum amount of time to wait for SMS send completion");

        bind<IMC::Sms>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30u);
        }
      }

      void
      onResourceInitialization(void)
      {
        if (!sendCommand("AT\r", "AT\r\r\nOK\r\n", 5.0))
          throw std::runtime_error(DTR("unable to get device's attention"));

        if (!sendCommand("ATZ\r", "ATZ\r\r\nOK\r\n"))
          throw std::runtime_error(DTR("unable to perform a soft reset"));

        if (!sendCommand("AT+CMEE=2\r", "AT+CMEE=2\r\r\nOK\r\n"))
          throw std::runtime_error(DTR("unable to configure verbose error messages"));

        if (!sendCommand("AT+CPIN?\r", "AT+CPIN?\r\r\n+CPIN: READY\r\n\r\nOK\r\n", 2.0))
        {
          std::string pin_cmd = "AT+CPIN=" + m_args.pin + "\r";

          if (!sendCommand(pin_cmd.c_str()))
            throw std::runtime_error(DTR("unable to configure pin"));
        }

        if (!sendCommand("AT+CMGF=1\r"))
          throw std::runtime_error(DTR("unable to set SMS message format"));

        m_rssi_ctr.setTop(m_args.rssi_per);

        m_rsms_ctr.setTop(m_args.rsms_per);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! Send command to GSM modem.
      //! @param[in] cmd command to be sent.
      //! @param[out] ack device acknowledge.
      //! @param[in] timeout timeout for communication.
      //! @return true if successful, false otherwise.
      bool
      sendCommand(const char* cmd, const char* ack = 0, double timeout = 2.0)
      {
        std::string ack_str;

        // If no specific ack string was given we construct a standard
        // one.
        if (!ack)
        {
          ack_str = cmd;
          ack_str += "\r\nOK\r\n";
          ack = ack_str.c_str();
        }

        // Send command
        inf("%s: %s", DTR("sending command"), sanitize(cmd).c_str());
        int sv = std::strlen(cmd);
        int rv = m_uart->write(cmd, sv);

        double deadline = Clock::get() + timeout;
        m_widx = 0;

        while ((Clock::get() < deadline) && m_widx < (c_buffer_size - 1))
        {
          consumeMessages();

          Delay::wait(0.1);
          rv = m_uart->read(m_buffer + m_widx, 64);

          if (rv > 0)
          {
            m_widx += rv;
            if (m_widx > c_buffer_size - 1)
              m_widx = c_buffer_size - 1;
            m_buffer[m_widx] = 0;
            inf("%s: %s", DTR("receiving"), sanitize(m_buffer).c_str());
            if (std::strstr(m_buffer, ack))
              return true;
          }
        }

        return false;
      }

      //! Get RSSI value.
      //! @return RSSI.
      float
      readRSSI(void)
      {
        char bfr[32];
        int rssi = 0;
        int ber = 0;
        float value = -1.0f;

        m_uart->setCanonicalInput(true);

        // Send command.
        m_uart->write("AT+CSQ\r");

        if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
          goto recover;

        // Read echo.
        if (m_uart->readString(bfr, sizeof(bfr)) < 0)
          goto recover;

        if (std::strcmp(bfr, "AT+CSQ\r\r\n") != 0)
          goto recover;

        // Read response.
        if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
          goto recover;

        if (m_uart->readString(bfr, sizeof(bfr)) < 0)
          goto recover;

        // Parse response.
        if (std::sscanf(bfr, "+CSQ: %d,%d\r\n", &rssi, &ber) != 2)
          goto recover;

        if (rssi >= 0 && rssi <= 9)
          value = (rssi / 9.0) * 25.0f;
        else if (rssi >= 10 && rssi <= 14)
          value = 25.0f + (((rssi - 10) / 4.0f) * 25.0f);
        else if (rssi >= 15 && rssi <= 19)
          value = 50.0f + (((rssi - 15) / 4.0f) * 25.0f);
        else if (rssi >= 20)
        {
          if (rssi >= 31)
            rssi = 31;

          value = 75.0f + (((rssi - 20) / 11.0f) * 25.0f);
        }

      recover:
        m_uart->setCanonicalInput(false);
        m_uart->flush();

        return value;
      }

      //! Send SMS.
      //! @param[in] number recipient number.
      //! @param[in] msg content of the  message to be sent.
      //! @return true if sucessful, false otherwise.
      bool
      sendSMS(const std::string& number, const std::string& msg)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        std::string cmd = "AT+CMGS=\"" + number + "\"\r";
        std::string ack = cmd + "\r\n>";
        std::string sms = msg + "\x1A";
        std::string sms_ack = String::str("\r\n%s\r\n+CMGS:", msg.c_str());

        inf("%s '%s'", DTR("sending SMS to"), number.c_str());

        // Try sending the SMS.
        bool sms_sent = false;
        if (sendCommand(cmd.c_str(), ack.c_str(), 10.0))
        {
          if (sendCommand(sms.c_str(), sms_ack.c_str(), m_args.sms_tout))
            sms_sent = true;
        }

        if (sms_sent)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          return true;
        }

        setEntityState(IMC::EntityState::ESTA_ERROR, DTR("failed to send SMS"));
        return false;
      }

      //! Process received SMS.
      //! @param[in] id author identifier.
      //! @param[in] from author number.
      //! @param[in] date date of the message.
      //! @param[in] msg content of the received message.
      void
      processRxSMS(const int id, const char* from, const char* date, const char* msg)
      {
        // Invalid message, do nothing
        if (id < 0)
          return;

        // Print the message
        inf("%s %d = %s = %s", DTR("Received SMS: id"), id, DTR("from"), sanitize(from).c_str());
        inf("%s = %s", DTR("timestamp"), sanitize(date).c_str());
        inf("%s = \"%s\"", DTR("msg"), sanitize(msg).c_str());

        // Parse the message
        if (std::strncmp(msg, "Plan ", 5) == 0)
        {
          // Plan control message!
          IMC::PlanControl pc;
          pc.type = IMC::PlanControl::PC_REQUEST;
          pc.op = IMC::PlanControl::PC_START;
          char plan_id[32];

          // Parse the plan id
          std::sscanf(msg, "Plan %s", plan_id);
          pc.plan_id = plan_id;

          inf("%s (%s = %s)", DTR("Received SMS request to start plan"), DTR("id"), sanitize(pc.plan_id).c_str());

          // Send the plan start request
          dispatch(pc);
        }

        // If message starts with 'cmd', send the corresponding PlanGeneration message
        if (std::strncmp(msg, "Cmd ", 4) == 0)
        {
          IMC::PlanGeneration pg;
          pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
          pg.op = IMC::PlanGeneration::OP_REQUEST;
          // use only the last part of the message
          pg.plan_id = msg[4];
          dispatch(pg);
        }
      }

      //! Read SMS.
      void
      readSMS(void)
      {
        char bfr[128];
        bool checkok = false;
        // Message data
        int id = -1;
        char from[32], time[21];
        std::string txt;
        std::vector<unsigned> to_delete;

        m_uart->setCanonicalInput(true);

        // Send command.
        m_uart->write("AT+CMGL=\"REC UNREAD\"\r");

        if (m_uart->hasNewData(2.0) != IOMultiplexing::PRES_OK)
          goto recover;

        // Read echo.
        if (m_uart->readString(bfr, sizeof(bfr)) < 0)
          goto recover;

        if (std::strcmp(bfr, "AT+CMGL=\"REC UNREAD\"\r\r\n") != 0)
          goto recover;

        // Read messages.
        while (m_uart->hasNewData(2.0) == IOMultiplexing::PRES_OK)
        {
          if (m_uart->readString(bfr, sizeof(bfr)) < 0)
            goto recover;

          // Check for a new message header, or for the end of the list
          if ((std::strncmp(bfr, "+CMGL", 5) == 0) ||
              (checkok == true && (std::strncmp(bfr, "OK\r\n", 4) == 0)))
          {
            if (id >= 0)
            {
              // Process the previous message
              processRxSMS(id, from, time, txt.c_str());

              // Add the id to the delete list
              to_delete.push_back(id);
            }

            // Parse header and clear the previous text
            std::sscanf(bfr, "+CMGL: %d,\"REC UNREAD\",\"%[^\"]\",,\"%[^\"]\"", &id, from, time);
            txt.clear();
          }
          // Check for newline (message list may have ended)
          else if (std::strncmp(bfr, "\r", 1) == 0)
          {
            checkok = true;
          }
          else
          {
            // Store the message contents
            txt.append(bfr);
          }
        }

      recover:
        m_uart->setCanonicalInput(false);
        m_uart->flush();

        // Delete the messages after we're done parsing them
        while (to_delete.size() > 0)
        {
          std::string command = "AT+CMGD=" + uncastLexical(to_delete.back()) + "\r";
          to_delete.pop_back();

          if (!sendCommand(command.c_str()))
            err("%s", DTR("failed to delete stored SMS message"));
        }
      }

      void
      consume(const IMC::Sms* msg)
      {
        if (msg->timeout == 0)
        {
          err("%s", DTR("SMS timeout cannot be zero"));
          return;
        }

        SMS sms;
        sms.recipient = msg->number;
        sms.message = msg->contents;
        sms.deadline = Clock::get() + msg->timeout;
        m_queue.push(sms);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.5);

          if (m_rssi_ctr.overflow())
          {
            m_rssi_ctr.reset();
            m_rssi.value = readRSSI();
            dispatch(m_rssi);
          }

          if (m_rsms_ctr.overflow())
          {
            m_rsms_ctr.reset();
            readSMS();
          }

          if (!m_queue.empty())
          {
            SMS sms = m_queue.top();
            m_queue.pop();

            // Message is too old, discard it.
            if (Clock::get() >= sms.deadline)
            {
              war(DTR("discarded expired SMS to recipient '%s'"), sms.recipient.c_str());
            }
            else
            {
              if (sendSMS(sms.recipient, sms.message))
              {
                inf(DTR("SMS sent"));
              }
              // We failed, push message back into the queue.
              else
              {
                m_queue.push(sms);
                err(DTR("SMS error"));
              }
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
