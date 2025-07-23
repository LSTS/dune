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
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "TxRequest.hpp"
#include "SessionResultCode.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    using DUNE_NAMESPACES;

    //! Power on delay.
    static const double c_pwr_on_delay = 5.0;
    //! Monitor delay before check state (in seconds).
    static const double c_monitor_delay = 20.0;
    //! Clear message queue parameter name.
    const std::string c_clear_queue_param = "Clear Message Queue";
    //! Timeout for general monitor restart message.
    const double c_timeout_tx_request = 120.0;

    enum TxRxPriority
    {
      //! No priority.
      None,
      //! Prioritize Transmission.
      Tx,
      //! Prioritize Reception.
      Rx
    };

    //! %Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! IO device 9523.
      std::string io_dev_9523;
      //! Mailbox check periodicity.
      double mbox_check_per;
      //! Maximum transmission rate.
      unsigned max_tx_rate;
      //! Flush Iridium Queue on start
      bool flush_queue;
      //! Flag to control use of 9523N Module
      bool use_9523;
      //! Name of the section with modem addresses.
      std::string addr_section;
      //! Transmission priority window period.
      double tx_window;
      //! Reception priority window period.
      double rx_window;
      //! Maximum number of errors to trigger restart
      unsigned max_error;
      //! Time to reset errors
      double error_reset_period;
      //! Time to check rssi (seconds)
      double rssi_check_period;
      //! Monitor Iridium Modem
      bool monitor_modem;
      //! Monitor Iridium Task Label
      std::string monitor_task_label;
      //! Clear Message Queue
      bool clear_queue;
      //! Maximum number of messages in the queue
      size_t queue_max;
      //! Timeout in seconds for the general monitor
      double general_monitor_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! IO device handle.
      IO::Handle* m_handle;
      //! Driver handler.
      Driver* m_driver;
      //! List of transmission requests.
      std::list<TxRequest*> m_tx_requests;
      //! Number of MT messages queued at the GSS.
      unsigned m_queued_mt;
      //! Mailbox check timer.
      Counter<double> m_mbox_check_timer;
      //! Task arguments.
      Arguments m_args;
      //! Active transmission request.
      TxRequest* m_tx_request;
      //! Transmission and Reception Priority.
      TxRxPriority m_prio;
      //! Transmission Window.
      Counter<double> m_tx_window;
      //! Reception Window.
      Counter<double> m_rx_window;
      //! Number of errors issued by modem
      unsigned m_error_count;
      //! Errors are cleared at the end of this timer.
      Counter<double> m_error_timer;
      //! Monitor check timer.
      Counter<double> m_monitor_check_timer;
      //! State of task.
      uint8_t m_state;
      //! rx queue size.
      unsigned m_rx_queue_size;
      //! tx queue size
      unsigned m_tx_queue_size;
      //! General Monitor
      Counter<double> m_general_monitor;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(nullptr),
        m_driver(NULL),
        m_tx_request(NULL),
        m_prio(TxRxPriority::None),
        m_error_count(0),
        m_state(Status::CODE_INIT)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO Port - Device used to communicate with the modem");

        param("IO Port - Device 9523", m_args.io_dev_9523)
        .defaultValue("")
        .description("IO Port - Device used to communicate with the modem");

        param("Mailbox Check - Periodicity", m_args.mbox_check_per)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("300")
        .description("Amount of time without alert rings or "
            "MT SBDs before doing a mailbox check");

        param("Maximum Transmission Rate", m_args.max_tx_rate)
        .units(Units::Second)
        .defaultValue("0")
        .description("");

        param("Flush Iridium Queue", m_args.flush_queue)
        .defaultValue("false");

        param("Use 9523N Module", m_args.use_9523)
        .defaultValue("false");

        param("Address Section", m_args.addr_section)
        .defaultValue("Iridium Addresses")
        .description("Name of the configuration section with modem addresses");

        param("Transmission Window", m_args.tx_window)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("100")
        .minimumValue("5")
        .description("Window to prioritize Transmission over Reception");

        param("Reception Window", m_args.rx_window)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("100")
        .minimumValue("5")
        .description("Window to prioritize Reception over Transmission");

        param("Maximum Errors", m_args.max_error)
        .defaultValue("3")
        .minimumValue("0")
        .description("Maximum number of errors to trigger restart");

        param("Error Reset Period", m_args.error_reset_period)
        .defaultValue("300")
        .minimumValue("60")
        .description("Period to reset error count");

        param("Time to check RSSI signal", m_args.rssi_check_period)
        .defaultValue("45.0")
        .minimumValue("10")
        .description("Time to check RSSI signal");

        param("Monitor Iridium Modems", m_args.monitor_modem)
        .defaultValue("false")
        .description("Monitor Iridium Modems");

        param("Monitor Iridium Task Label", m_args.monitor_task_label)
        .defaultValue("CPC")
        .description("Monitor Iridium Task Label");

        param(c_clear_queue_param, m_args.clear_queue)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description("Clears the message queue");

        param("Max Messages In Queue", m_args.queue_max)
        .defaultValue("0")
        .minimumValue("0")
        .description("Maximum number of messages in queue. 0 means no limit");

        param("General Monitor Timeout", m_args.general_monitor_timeout)
        .defaultValue("600.0")
        .minimumValue("60.0")
        .description("Timeout in seconds for the general monitor");

        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::EntityState>(this);
        m_queued_mt = 0;
      }

      //! Destructor.
      ~Task(void)
      {
        Memory::clear(m_tx_request);

        while (!m_tx_requests.empty())
        {
          TxRequest* req = m_tx_requests.front();
          m_tx_requests.pop_front();
          sendTxRequestStatus(req, IMC::IridiumTxStatus::TXSTATUS_ERROR,
              DTR("task is shutting down"));
          delete req;
        }
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.mbox_check_per))
          m_mbox_check_timer.setTop(m_args.mbox_check_per);

        if (paramChanged(m_args.tx_window))
        {
          if (m_tx_window.getRemaining() > m_args.tx_window && m_prio == TxRxPriority::Tx)
            m_tx_window.setTop(m_args.tx_window);
        }

        if (paramChanged(m_args.rx_window))
        {
          if (m_rx_window.getRemaining() > m_args.rx_window && m_prio == TxRxPriority::Rx)
            m_rx_window.setTop(m_args.rx_window);
        }

        if (paramChanged(m_args.error_reset_period))
        {
          m_error_timer.setTop(m_args.error_reset_period);
        }

        if (m_driver != NULL)
          m_driver->setTxRateMax(m_args.max_tx_rate);

        if (paramChanged(m_args.general_monitor_timeout))
        {
          trace("Setting general monitor timeout to %f seconds", m_args.general_monitor_timeout);
          m_general_monitor.setTop(m_args.general_monitor_timeout);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_IDLE);
        m_rx_queue_size = 99;
        m_tx_queue_size = 99;
        m_state = Status::CODE_IDLE;
        m_monitor_check_timer.setTop(c_monitor_delay);
        try
        {
          // To force dispatch of entity state, for other tasks now that we are in boot
          for(uint8_t i = 0; i < 5; i++)
          {
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_IDLE);
            Time::Delay::wait(1.0);
          }

          m_handle = openSocketTCP(m_args.io_dev);
          if (m_handle == nullptr)
          {
            if(m_args.use_9523)
            {
              inf("Opening serial port %s", m_args.io_dev_9523.c_str());
              m_handle = openUART(m_args.io_dev_9523);
            }
            else
            {
              inf("Opening serial port %s", m_args.io_dev.c_str());
              m_handle = openUART(m_args.io_dev);
            }
          }
          else
          {
            inf("Opening socket %s", m_args.io_dev.c_str());
          }

          IMC::VersionInfo vi;
          std::string version_model = "no libd-9523";
          m_driver = new Driver(this, m_handle, m_args.use_9523, c_pwr_on_delay, m_args.rssi_check_period);
          m_driver->initialize();
          m_driver->setTxRateMax(m_args.max_tx_rate);
          if(m_args.use_9523)
          {
            inf("LIDB FW: %s", m_driver->getFirmVersionLIDB().c_str());
            version_model = "LIDB FW: " + m_driver->getFirmVersionLIDB();
          }
          vi.version = version_model;
          version_model = "Model: " + m_driver->getModel() + " | IMEI: " + m_driver->getIMEI();
          vi.description = version_model;
          vi.op = IMC::VersionInfo::OP_REPLY;
          dispatch(vi);
          debug("manufacturer: %s", m_driver->getManufacturer().c_str());
          inf("%s", version_model.c_str());
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_state = Status::CODE_ACTIVE;
          dispatchEntityState();
        }
        catch (std::runtime_error& e)
        {
          std::string msg = "onResourceAcquisition: " + std::string(e.what());
          throw RestartNeeded(msg.c_str(), 10);
        }
        m_general_monitor.setTop(m_args.general_monitor_timeout);
      }

      void
      onActivation(void)
      {
        inf("onActivation");
        m_mbox_check_timer.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        dispatchEntityState();
        m_state = Status::CODE_ACTIVE;

        if (m_args.flush_queue)
        {
          IridiumMsgTx req;
          std::string data = "FLUSH_MT";
          req.data.assign(data.begin(), data.end());
          req.destination = "broadcast";
          req.ttl = 60;
          req.setSource(m_ctx.resolver.id());
          req.setDestination(m_ctx.resolver.id());
          consume(&req);
          war("Flushing MT Queue");
        }
      }

      void
      onDeactivation(void)
      {
        inf("onDeactivation");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_state = Status::CODE_IDLE;
        dispatchEntityState();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_driver)
        {
          m_driver->stopAndJoin();
          delete m_driver;
          m_driver = NULL;
        }

        Memory::clear(m_handle);
      }

      IO::Handle*
      openUART(const std::string& device)
      {
        if (device.empty())
          throw std::runtime_error("no device name");

        char uart[128] = {0};
        unsigned baud = 0;
        trace("[UART] >> attempting URI: %s", device.c_str());
        if (std::sscanf(device.c_str(), "uart://%[^:]:%u", uart, &baud) != 2)
          throw std::runtime_error("invalid device name");

        return new SerialPort(uart, baud);
      }

      IO::Handle *
      openSocketTCP(const std::string &device)
      {
        char addr[128] = {0};
        unsigned port = 0;
        trace("[TCP] >> attempting URI: %s", device.c_str());

        if (std::sscanf(device.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return nullptr;

        TCPSocket *sock = nullptr;
        try
        {
          sock = new TCPSocket();
          sock->setKeepAlive(true);
          sock->setNoDelay(true);
          sock->setSendTimeout(1.0);
          sock->setReceiveTimeout(1.0);
          sock->connect(addr, port);
        }
        catch (...)
        {
          Memory::clear(sock);
          throw;
        }

        return sock;
      }

      unsigned
      getIridiumSerial(const std::string& destination)
      {
        unsigned serial = 0;
        m_ctx.config.get(m_args.addr_section, destination, "0", serial);
        return serial;
      }

      void
      stripIridiumSerial(const uint8_t* bfr, size_t bfr_size, std::vector<uint8_t>& stripped)
      {
        size_t offs = 0;

        if (bfr_size >= 5)
        {
          if (bfr[0] == 'R' && bfr[1] == 'B')
            offs = 5;
        }

        stripped.assign(bfr + offs, bfr + bfr_size);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestination() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
        {
          std::string msg_info = "consume(const IMC::IoEvent* msg): " + std::string(DTR("input error"));
          throw RestartNeeded(msg_info.c_str(), 10);
        }
      }

      void
      consume(const IMC::IridiumMsgTx* msg)
      {
        if (msg->getSource() != getSystemId()
            && msg->getDestination() != getSystemId())
          return;

        unsigned src_adr = msg->getSource();
        unsigned src_eid = msg->getSourceEntity();
        TxRequest* request = new TxRequest(src_adr, src_eid, msg->req_id,
                                           msg->ttl, 
                                           getIridiumSerial(msg->destination),
                                           msg->data);

        enqueueTxRequest(request);
        sendTxRequestStatus(request, IMC::IridiumTxStatus::TXSTATUS_QUEUED);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if(m_args.monitor_modem)
        {
          if (m_monitor_check_timer.overflow())
          {
            if (m_args.monitor_task_label.compare(resolveEntity(msg->getSourceEntity())) == 0)
            {
              // check if description contains the string "Iridium: Switching"
              if (msg->description.find("Iridium: Switching") != std::string::npos)
              {
                m_monitor_check_timer.reset();
                throw RestartNeeded("Need to restart task for the new iridium modem", 5.0);
              }
            }
          }
        }
      }

      void
      sendTxRequestStatus(const TxRequest* request,
          IMC::IridiumTxStatus::StatusCodeEnum code,
          const std::string& text = "")
      {
        IMC::IridiumTxStatus status;
        status.setDestination(request->getSource());
        status.setDestinationEntity(request->getSourceEntity());
        status.req_id = request->getId();
        status.status = code;
        status.text = text;
        dispatch(status);
      }

      void
      enqueueTxRequest(TxRequest* request)
      {
        // Check for message limit
        if (m_args.queue_max > 0)
        {
          while (m_tx_requests.size() >= m_args.queue_max)
          {
            TxRequest* req = m_tx_requests.front();
            sendTxRequestStatus(req, IMC::IridiumTxStatus::TXSTATUS_EXPIRED);
            delete req;
            m_tx_requests.pop_front();
          }
        }

        std::list<TxRequest*>::iterator itr = m_tx_requests.begin();
        for ( ; itr != m_tx_requests.end(); ++itr)
        {
          if (request->getExpiration() < (*itr)->getExpiration())
          {
            m_tx_requests.insert(itr, request);
            return;
          }
        }

        m_tx_requests.insert(m_tx_requests.end(), request);
      }

      void
      dequeueTxRequest(unsigned msn)
      {
        if (m_tx_request == NULL)
          return;

        if (!m_tx_request->hasValidMSN() || (m_tx_request->getMSN() != msn))
          return;

        debug("dequeing message");
        m_driver->clearBufferMO();
        sendTxRequestStatus(m_tx_request, IMC::IridiumTxStatus::TXSTATUS_OK);
        inf(DTR("Message sent successfully. (req id: %u)"), m_tx_request->getId());
        Memory::clear(m_tx_request);
      }

      void
      invalidateTxRequest(unsigned msn, unsigned err_code)
      {
        if (m_tx_request == NULL)
          return;

        if (!m_tx_request->hasValidMSN() || (m_tx_request->getMSN() != msn))
          return;

        debug("invalidating MSN");
        m_tx_request->invalidateMSN();

        if (m_tx_request->hasExpired())
        {
          inf(DTR("Message transmission hasExpired, re-enqueueing. (req id: %u)"), m_tx_request->getId());
          sendTxRequestStatus(m_tx_request, IMC::IridiumTxStatus::TXSTATUS_ERROR,
              String::str(DTR("failed with error %u"), err_code));
          m_tx_requests.erase(std::remove(m_tx_requests.begin(), m_tx_requests.end(), m_tx_request), m_tx_requests.end());
          Memory::clear(m_tx_request);
          return;
        }

        // Not expired, warn and re-enqueue
        inf(DTR("Message transmission failed. (req id: %u)"), m_tx_request->getId());
        sendTxRequestStatus(m_tx_request, IMC::IridiumTxStatus::TXSTATUS_QUEUED,
            String::str(DTR("re-enqueue, failed with error %u"), err_code));
        m_tx_request->setLastError(String::str(DTR("failed with error %u"), err_code));
        enqueueTxRequest(m_tx_request);
        m_tx_request = NULL;
      }

      void
      handleSBD(void)
      {
        uint8_t bfr[340];
        unsigned rv = m_driver->readBufferMT(bfr, sizeof(bfr));

        if (rv == 0)
        {
          err(DTR("invalid SBD message"));
          return;
        }

        std::vector<uint8_t> stripped;
        stripIridiumSerial(bfr, rv, stripped);

        if (stripped.size() > 0)
        {
          IMC::IridiumMsgRx sbd;
          sbd.setDestination(getSystemId());
          sbd.data.assign(stripped.begin(), stripped.end());
          dispatch(sbd, DF_KEEP_SRC_EID);
        }
      }

      void
      handleSessionResult(void)
      {
        const SessionResult& res = m_driver->getSessionResult();

        if (res.isSuccessMO())
        {
          m_mbox_check_timer.reset();
          dequeueTxRequest(res.getSequenceMO());
          if (m_driver->hasRingAlert())
            m_driver->clearRingAlert();
        }
        else
        {
          war(DTR("transmission failed: %s"),
              SessionResultCode::translate(res.getStatusMO()).c_str());

          invalidateTxRequest(res.getSequenceMO(), res.getStatusMO());
        }

        if (res.getStatusMT() == 1)
          handleSBD();
      }

      void
      cleanExpired(void)
      {
        std::list<TxRequest*>::iterator itr = m_tx_requests.begin();
        while (itr != m_tx_requests.end())
        {
          if (!(*itr)->hasExpired())
            break;

          spew("removing expired");
          std::string msg = (*itr)->getLastError();
          const char* errorMsg = msg.c_str();
          if (errorMsg != nullptr && *errorMsg != '\0')
          {
              msg = errorMsg;
              sendTxRequestStatus(*itr, IMC::IridiumTxStatus::TXSTATUS_ERROR, msg);
          }
          else
          {
              sendTxRequestStatus(*itr, IMC::IridiumTxStatus::TXSTATUS_EXPIRED);
          }
          delete *itr;
          itr = m_tx_requests.erase(itr);
        }
      }

      void
      clearMessageQueue(void)
      {
        if (!m_args.clear_queue)
          return;

        // Clear the message queue
        war("Clearing message queue with %d messages", (int)m_tx_requests.size());
        std::list<TxRequest*>::iterator itr = m_tx_requests.begin();
        while (itr != m_tx_requests.end())
        {
          sendTxRequestStatus(*itr, IMC::IridiumTxStatus::TXSTATUS_EXPIRED);
          delete *itr;
          itr = m_tx_requests.erase(itr);
        }
        war("Queue cleared");

        // Reset clear queue flag
        m_args.clear_queue = false;
        IMC::SetEntityParameters msg;
        IMC::EntityParameter clear_queue_param;
        clear_queue_param.name = c_clear_queue_param;
        clear_queue_param.value = "false";
        msg.params.push_back(clear_queue_param);
        msg.name = getEntityLabel();
        dispatch(msg, DF_LOOP_BACK);
      }

      bool
      receptionSequence()
      {
        if (m_driver->hasRingAlert())
          m_driver->checkMailBoxAlert();
        else if (m_driver->getQueuedMT() > 0 || m_mbox_check_timer.overflow())
          m_driver->checkMailBox();
        else if(m_driver->getQueuedMT() == 0 && m_tx_request == NULL) //No messages to be received or sent
        {
          unsigned src_adr = getSystemId();
          unsigned src_eid = getEntityId();
          const std::vector<char> data(1);
          TxRequest* empty_req = new TxRequest(src_adr, src_eid, 0xFFFF, 0, 0, data);
          sendTxRequestStatus(empty_req, IMC::IridiumTxStatus::TXSTATUS_EMPTY,"No message to be received or sent.");
          // clear empty request
          delete empty_req;
          debug(DTR("No message to be received or sent."));

          return false;
        }

        return true;
      }

      bool
      transmissionSequence()
      {
        if (m_tx_request != NULL)
        {
          unsigned msn = m_driver->getMOMSN();
          m_tx_request->setMSN(msn);
          m_driver->sendSBD(m_tx_request->getData());
        }
        else if (!m_tx_requests.empty())
        {
          m_tx_request = m_tx_requests.front();
          m_tx_requests.pop_front();
        }
        else
          return false;

        return true;
      }

      void
      processQueue(void)
      {
        cleanExpired();

        if (m_driver->isBusy())
          return;

        if (m_driver->hasSessionResult())
          handleSessionResult();

        if (m_driver->getRSSI() <= 0.1)
        {
          m_prio = TxRxPriority::None;
          return;
        }

        if (m_driver->isCooling())
          return;

        if (!isActive())
          m_mbox_check_timer.reset();

        switch (m_prio)
        {
          case TxRxPriority::Tx:
            if (!transmissionSequence())
              receptionSequence();

            if (m_tx_window.overflow())
            {
              m_prio = TxRxPriority::Rx;
              m_rx_window.setTop(m_args.rx_window);
            }

            break;

          case TxRxPriority::Rx:
            if (!receptionSequence())
              transmissionSequence();

            if (m_rx_window.overflow())
            {
              m_prio = TxRxPriority::Tx;
              m_tx_window.setTop(m_args.tx_window);
            }

            break;

          default:
            m_prio = TxRxPriority::Tx;
            m_tx_window.setTop(m_args.tx_window);
        }
        m_general_monitor.reset();
      }

      void
      dispatchEntityState(void)
      {
        std::string description = "";
        if(m_state == Status::CODE_ACTIVE)
          description = "active | ";
        else
          description =  "idle | ";

        if(m_args.use_9523)
          description += m_args.io_dev_9523 + " | ";
        else
          description += m_args.io_dev + " | ";

        //get rx and tx queue size
        unsigned rx_queue_size = m_driver->getQueuedMT();
        unsigned tx_queue_size = m_tx_requests.size();
        trace("rx queue size: %u, tx queue size: %u", rx_queue_size, tx_queue_size);
        description += String::str("queue: rx:%u, tx:%u", rx_queue_size, tx_queue_size);
        setEntityState(IMC::EntityState::ESTA_NORMAL, description);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if(m_general_monitor.overflow())
          {
            err("General monitor overflow, restarting task");
            IMC::TransmissionRequest tr;
            tr.setDestination(getSystemId());
            tr.setSourceEntity(getEntityId());
            tr.destination = "broadcast";
            tr.deadline = Time::Clock::getSinceEpoch() + c_timeout_tx_request; // seconds
            tr.req_id = std::rand() % 0xFFFF;
            tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
            tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
            std::string msg = std::string(getName()) + " - General monitor overflow, restarting task";
            tr.txt_data = msg;
            dispatch(tr, DF_LOOP_BACK);
            throw RestartNeeded("General monitor overflow", 10.0);
          }

          try
          {
            waitForMessages(0.5);
            dispatchEntityState();
            processQueue();
            checkError();
            clearMessageQueue();
          }
          catch(const ReadTimeout& e)
          {
            signalError("ReadTimeout", e.what());
          }
          catch(const UnexpectedReply& e)
          {
            signalError("UnexpectedReply", e.what());
          }
        }
      }

      void
      signalError(std::string name, std::string error)
      {
        m_error_count++;
        m_error_timer.reset();
        debug("%s (%d/%d): %s", name.c_str(), m_error_count, m_args.max_error, error.c_str());

        if (m_error_count >= m_args.max_error)
        {
          std::stringstream ss;
          ss << "Max error count exceeded: "
             << error.c_str();
          throw RestartNeeded(ss.str(), 10.0);
        }
        else
        {
          war("Error %d of %d: %s", m_error_count, m_args.max_error, error.c_str());
        }
      }

      void
      checkError()
      {
        if (m_error_timer.overflow())
        {
          m_error_timer.reset();
          m_error_count = 0;
        }
      }
    };
  }
}

DUNE_TASK
