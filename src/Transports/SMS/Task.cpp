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

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "PollThread.hpp"

namespace Transports
{
  //!
  //! @author Pedro Gonçalves
  //! @brief SMS transport task.
  namespace SMS
  {
    using DUNE_NAMESPACES;
    //! Time to wait before checking RSSI.
    static const float c_time_to_check_rssi = 60.0;
    //! Timeout to set entity state.
    static const float c_time_to_set_entity_state = 4.0;
    //! Time, in seconds to wait before start sending commands to the modem.
    static const int c_time_to_wait_before_sending_commands = 10;

    //! %Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! Time to check mailbox in seconds.
      int time_to_check_mailbox;
      //! Maximum time to accept a incoming SMS.
      int time_to_accept_sms;
      //! PIN number.
      std::string pin;
      //! Number of consecutive errors to restart task.
      int consecutive_errors;
      //! Send SMS text messages.
      bool send_sms_text_messages;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! IO device handle.
      IO::Handle* m_handle;
      //! Driver of SMS modem
      Driver* m_driver;
      //! Thread to read from IO device.
      PollThread* m_poll_thread;
      //! RSSI timer.
      Time::Counter<float> m_rssi_timer;
      //! Mailbox timer.
      Time::Counter<float> m_mailbox_timer;
      //! Set entity state timer.
      Time::Counter<float> m_set_entity_state_timer;
      //! counter to control number of errors.
      int m_counter_errors;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_driver(NULL),
        m_poll_thread(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");

        param("Time to Check Mailbox in Seconds", m_args.time_to_check_mailbox)
        .defaultValue("150")
        .minimumValue("30")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("Time to wait before checking mailbox in seconds");

        param("Maximum Time to Accept SMS in Hours", m_args.time_to_accept_sms)
        .defaultValue("12")
        .minimumValue("1")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("Maximum time to accept an incoming SMS in Hours");

        param("PIN Number", m_args.pin)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("PIN number to unlock the SIM card");

        param("Number of Consecutive Errors to Restart Task", m_args.consecutive_errors)
        .defaultValue("5")
        .minimumValue("2")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("Number of consecutive errors to restart the task");

        param("Send SMS Text Messages", m_args.send_sms_text_messages)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("Send SMS text messages. If false, only received SMS will be processed without sending any SMS text messages");

        setWaitForMessages(0.1);

        bind<IMC::SmsRequest>(this);
      }

      ~Task() override
      {
        onDisconnect();
      }

      void
      onUpdateParameters(void)
      {
        trace("onUpdateParameters");
        BasicDeviceDriver::onUpdateParameters();
        if(paramChanged(m_args.time_to_check_mailbox))
        {
          m_mailbox_timer.setTop(m_args.time_to_check_mailbox);
          inf("Time to check mailbox set to %d seconds", m_args.time_to_check_mailbox);
        }
        if(paramChanged(m_args.time_to_accept_sms))
        {
          if(m_driver != NULL)
          {
            m_driver->setTimeToAcceptSMS(m_args.time_to_accept_sms);
            inf("Maximum time to accept SMS set to %d hours", m_args.time_to_accept_sms);
          }
        }
        if(paramChanged(m_args.pin))
        {
          if(m_driver != NULL)
          {
            m_driver->setPin(m_args.pin);
            inf("PIN number set to %s", m_args.pin.c_str());
          }
        }
        if(paramChanged(m_args.consecutive_errors))
        {
          inf("Number of consecutive errors to restart task set to %d", m_args.consecutive_errors);
        }
        if(paramChanged(m_args.send_sms_text_messages))
        {
          inf("Send SMS text messages set to %s", m_args.send_sms_text_messages ? "true" : "false");
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        trace("onEntityReservation");
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }
        return eid;
      }

      void
      onResourceRelease(void)
      {
        trace("onResourceRelease");
        deleteObjects();
        if(m_handle != NULL)
        {
          Memory::clear(m_handle);
          m_handle = NULL;
          inf("IO Device handle deleted");
        }
      }

      void
      deleteObjects(void)
      {
        trace("deleteObjects");
        if(m_poll_thread != NULL)
        {
          m_handle = m_poll_thread->getHandle();
          m_poll_thread->stopAndJoin();
          Memory::clear(m_poll_thread);
          m_poll_thread = NULL;
          inf("PollThread deleted");
        }
        if(m_driver != NULL)
        {
          Memory::clear(m_driver);
          m_driver = NULL;
          inf("Driver deleted");
        }
      }

      void
      onResourceAcquisition(void)
      {
        trace("onResourceAcquisition");
        try
        {
          if (m_args.io_dev.empty())
            throw RestartNeeded(DTR("Invalid IO device path"), c_time_to_restart_task);

          inf("Waiting %d seconds before connecting to the GSM device", c_time_to_wait_before_sending_commands);
          // Wait for the modem to "spew" initial data messages
          Time::Delay::wait(c_time_to_wait_before_sending_commands);

          if (m_handle == NULL)
            m_handle = openDeviceHandle(m_args.io_dev);

          if (m_handle == NULL)
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), c_time_to_restart_task);

          if (m_driver == NULL)
            m_driver = new Driver(this, m_handle, m_args.time_to_accept_sms, m_args.pin);

          if(m_poll_thread != NULL)
          {
            m_poll_thread->stop();
            Memory::clear(m_poll_thread);
          }
          m_poll_thread = new PollThread(this, m_handle, m_driver, m_args.io_dev);
          m_poll_thread->start();

          setupModem();
        }
        catch (const std::bad_alloc& e)
        {
          war("Memory allocation failed: %s", e.what());
          throw RestartNeeded(DTR("Memory allocation failure"), c_time_to_restart_task);
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), c_time_to_restart_task);
        }
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        trace("onConnect");
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVE);
        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        trace("onDisconnect");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

       //! Initialize device.
      void
      onInitializeDevice() override
      {}

      void
      onIdle(void)
      {}

      void
      consume(const IMC::SmsRequest* msg)
      {
        if(m_driver == NULL)
          return;

        SMS::SmsRequest sms_req;
        sms_req.req_id      = msg->req_id;
        sms_req.destination = msg->destination;
        sms_req.sms_text    = msg->sms_text;
        sms_req.src_adr     = msg->getSource();
        sms_req.src_eid     = msg->getSourceEntity();

        if(!m_args.send_sms_text_messages)
        {
          m_driver->sendSmsStatus(&sms_req, IMC::SmsStatus::SMSSTAT_INPUT_FAILURE, DTR("Send of SMS text messages are disabled"));
          inf("%s [%s]", DTR("Send of SMS text messages are disabled"), sms_req.sms_text.c_str());
          return;
        }

        if (msg->timeout <= 0)
        {
          m_driver->sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_INPUT_FAILURE,"SMS timeout cannot be zero");
          war("%s", DTR("SMS timeout cannot be zero"));
          return;
        }
        if(sms_req.sms_text.length() > 160) //160 characters encoded in 8-bit alphabet per SMS message
        {
          m_driver->sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_INPUT_FAILURE,"Can only send 160 characters over SMS.");
          war("%s", DTR("Can only send 160 characters over SMS"));
		      return;
        }
        sms_req.deadline = Clock::getSinceEpoch() + msg->timeout;
        m_driver->addtoSendQueue(sms_req);
        m_driver->sendSmsStatus(&sms_req,IMC::SmsStatus::SMSSTAT_QUEUED,DTR("SMS sent to queue"));
      }

      void
      setupModem(void)
      {
        m_counter_errors = 0; // Reset error counter
        m_rssi_timer.setTop(c_time_to_check_rssi);
        m_mailbox_timer.setTop(m_args.time_to_check_mailbox);
        m_set_entity_state_timer.setTop(c_time_to_set_entity_state);

        if (!m_driver->initModemGSM())
        {
          throw RestartNeeded(DTR("Fail to setup GSM modem"), c_time_to_restart_task);
        }
        else
        {
          inf("Modem initialized successfully");
          m_driver->getRssi();
          m_driver->parseIncomingData();  // Process the response
          m_driver->checkMailBox(); // Check mailbox for any pending messages
          m_driver->parseIncomingData();  // Process the response
        }
      }

      void
      checkDataIn(void)
      {
        m_driver->parseIncomingData();
      }

      void
      checkCommandsTriggered(void)
      {
        if(m_mailbox_timer.overflow())
        {
          m_mailbox_timer.reset();
          m_driver->checkMailBox();
        }
        else if(m_rssi_timer.overflow())
        {
          m_rssi_timer.reset();
          m_driver->getRssi();
        }
        else if(m_driver != NULL && m_driver->receivedSMS())
        {
          m_driver->clearReceivedSMS();
          m_mailbox_timer.reset();
        }
      }

      //! Check for input data.
      //! @return true.
      bool
      onReadData() override
      {
        checkDataIn();
        checkCommandsTriggered();
        m_driver->processQueues();

        if(m_poll_thread != NULL && m_poll_thread->isHandleReset())
        {
          m_poll_thread->clearHandleFlag();
          inf("Seting up the modem");
          onDisconnect();
          // Wait for the modem to "spew" initial data messages
          Time::Delay::wait(c_time_to_wait_before_sending_commands);
          m_handle->flushInput();
          m_handle->flushOutput();
          setupModem();
          onConnect();
          m_driver->setHandleIsOpen(true);
        }
        else
        {
          if(m_set_entity_state_timer.overflow())
          {
            m_set_entity_state_timer.reset();
            if(m_driver != NULL )
            {
              std::string text_entity = "active | " + m_args.io_dev + " | tx: " +
                                        std::to_string(m_driver->getSmsSentCount()) + " | rx: " +
                                        std::to_string(m_driver->getSmsReceivedCount()) +
                                        " | t_mb: " + m_driver->convertTimeToString(m_mailbox_timer.getRemaining());
              setEntityState(IMC::EntityState::ESTA_NORMAL, text_entity.c_str());
            }
            else
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, "active | " + m_args.io_dev);
            }
          }
        }

        if(m_driver->getNumberOfErrors() >= m_args.consecutive_errors)
        {
          throw RestartNeeded(DTR("Too many consecutive errors, restarting task"), c_time_to_restart_task);
        }
        else
        {
          if(m_counter_errors != m_driver->getNumberOfErrors())
          {
            m_counter_errors = m_driver->getNumberOfErrors();
            war("Counter errors: %d of %d", m_counter_errors, m_args.consecutive_errors);
          }
        }

        return false;
      }
    };
  }
}

DUNE_TASK
