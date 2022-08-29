//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Transports
{
  //! Device driver for ETSI GSM 07.07 compatible GSM modems.
  //!
  //! @author Ricardo Martins
  namespace GSM
  {
    using DUNE_NAMESPACES;

    //! Default timer - security (m)
    static const int m_balance_per_default = 5;

    //! SMS struct.
    struct SMS
    {
      // Recipient.
      std::string recipient;
      // Message to send.
      std::string message;
      // Delivery deadline.
      double deadline;
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
      //! Code to request balance.
      unsigned ussd_code;
      //! Request balance.
      bool request_balance;
      //! Balance periodicity (m).
      unsigned balance_per;
    };

    static const std::string c_balance_request_param = "Request Balance";

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! GSM driver.
      Driver* m_driver;
      //! SMS queue.
      std::priority_queue<SmsRequest> m_queue;
      //! RSSI query timer.
      Counter<double> m_rssi_timer;
      //! SMS reception query timer.
      Counter<double> m_rsms_timer;
      //! SMS Request id for SMS Messages
      unsigned m_req_id;
      //! Task arguments.
      Arguments m_args;
      //! Balance of card
      std::string m_balance;
      //! Balance timer count.
      Time::Counter<int> m_balance_timer;
      //! Balance periodicity (s).
      int m_balance_per;

      bool m_success_balance;
      int m_rssi;


      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL),
        m_req_id(1560),
        m_success_balance(false),
        m_rssi(0)
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

        param("USSD code", m_args.ussd_code)
        .defaultValue("123")
        .description("USSD code");

        param("Request Balance", m_args.request_balance)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("true")
        .description("Enable Balance Request");

        param("Balance Periodicity", m_args.balance_per)
        .defaultValue("60")
        .description("Balance Periodicity");

        bind<IMC::SmsRequest>(this);
        bind<IMC::IoEvent>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.rsms_per))
          m_rsms_timer.setTop(m_args.rsms_per);

        if (paramChanged(m_args.rssi_per))
          m_rssi_timer.setTop(m_args.rssi_per);

        if (paramChanged(m_args.balance_per)) {
          if(m_args.balance_per > m_balance_per_default)
            m_balance_timer.setTop(m_args.balance_per * 60);
          else
            m_balance_timer.setTop(m_balance_per_default * 60);
        }
      }


      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_driver = new Driver(this, m_uart, m_args.pin);
          m_driver->initialize();
          debug("manufacturer: %s", m_driver->getManufacturer().c_str());
          debug("model: %s", m_driver->getModel().c_str());
          debug("IMEI: %s", m_driver->getIMEI().c_str());
          annouceNumber();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(DTR(e.what()), 5);
        }
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, getMessage(Status::CODE_IDLE).c_str());
      }

      void
      onResourceRelease(void)
      {
        if (m_driver)
        {
          m_driver->stopAndJoin();
          delete m_driver;
          m_driver = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestination() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded(DTR("input error"), 5);
      }

      void
      sendSmsStatus(const SmsRequest* sms_req,IMC::SmsStatus::StatusEnum status,const std::string& info = "")
      {
        IMC::SmsStatus sms_status;
        sms_status.setDestination(sms_req->src_adr);
        sms_status.setDestinationEntity(sms_req->src_eid);
        sms_status.req_id = sms_req->req_id;
        sms_status.info   = info;
        sms_status.status = status;

        dispatch(sms_status);
      }

      void
      consume(const IMC::SmsRequest* msg)
      {
        SmsRequest sms_req;
        sms_req.req_id      = msg->req_id;
        sms_req.destination = msg->destination;
        sms_req.sms_text    = msg->sms_text;
        sms_req.src_adr     = msg->getSource();
        sms_req.src_eid     = msg->getSourceEntity();

        if (msg->timeout <= 0)
        {
          sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_INPUT_FAILURE,"SMS timeout cannot be zero");
          inf("%s", DTR("SMS timeout cannot be zero"));
          return;
        }
        if(sms_req.sms_text.length() > 160) //160 characters encoded in 8-bit alphabet per SMS message
        {
        	sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_INPUT_FAILURE,"Can only send 160 characters over SMS.");
        	inf("%s", DTR("Can only send 160 characters over SMS"));
		    return;
        }
        sms_req.deadline = Clock::getSinceEpoch() + msg->timeout;
        m_queue.push(sms_req);
        sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_QUEUED,DTR("SMS sent to queue"));
      }

      void
      annouceNumber(void)
      {
        std::string number = m_driver->getOwnNumber();
        if (number != "")
        {

          std::stringstream os;
          os << "imc+gsm://" << number << "/";

          IMC::AnnounceService announce;
          announce.service = os.str();
          announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

          dispatch(announce);

        }
      }

      void
      processQueue(void)
      {
        if (m_queue.empty())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, getMessage(Status::CODE_IDLE).c_str());
          return;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, getMessage(Status::CODE_ACTIVE).c_str());

        SmsRequest sms_req = m_queue.top();
        m_queue.pop();

        // Message is too old, discard it.
        if (Time::Clock::getSinceEpoch() >= sms_req.deadline)
        {
          sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_INPUT_FAILURE,DTR("SMS timeout"));
          war(DTR("discarded expired SMS to recipient %s"), sms_req.destination.c_str());
          return;
        }

        try
        {
          m_driver->getRSSI();
          m_driver->sendSMS(sms_req.destination, sms_req.sms_text, m_args.sms_tout);
          //SMS successfully sent, otherwise driver throws error
          sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_SENT);
        }
        catch (...)
        {
          m_queue.push(sms_req);
          sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_ERROR,
                        DTR("Error sending message over GSM modem"));
          inf(DTR("Error sending SMS to recipient %s"),sms_req.destination.c_str());
        }
      }

      void
      pollStatus(void)
      {
        try
        {
          if (m_rssi_timer.overflow())
          {
            m_rssi_timer.reset();
            m_rssi = m_driver->getRSSI();
          }

          if (m_rsms_timer.overflow())
          {
            m_rsms_timer.reset();
            m_driver->checkMessages();
          }
        }
        catch (std::exception& e)
        {
          throw RestartNeeded(String::str(DTR("failed to poll status: %s"),
                                          e.what()), 5);
        }
      }

      void checkBalance(void)
      {
        if(m_args.request_balance)
        {
          if(m_driver->getBalance(m_args.ussd_code, m_balance))
            setEntityState(IMC::EntityState::ESTA_NORMAL, getMessage(Status::CODE_ACTIVE).c_str());

          m_args.request_balance = false;

          IMC::SetEntityParameters msg;
          IMC::EntityParameter balance_param;
          balance_param.name = c_balance_request_param;
          balance_param.value = "false";
          msg.params.push_back(balance_param);
          msg.name = getEntityLabel();
          dispatch(msg, DF_LOOP_BACK);
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          pollStatus();
          processQueue();

          checkBalance();

        }
      }

      std::string
      getMessage(Status::Code code)
      {
        std::stringstream ss;
        ss << getString(code) << m_balance;

        return ss.str();
      }
    };
  }
}

DUNE_TASK
