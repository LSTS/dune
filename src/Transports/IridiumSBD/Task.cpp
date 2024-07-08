//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Mailbox check periodicity.
      double mbox_check_per;
      //! Maximum transmission rate.
      unsigned max_tx_rate;
      //! Flush Iridium Queue on start
      bool flush_queue;
      //! Flag to control use of 9523N Module
      bool use_9523;
      //! Serial port baud rate fot 9523N Module.
      unsigned uart_baud_9523;
      //! Name of the section with modem addresses.
      std::string addr_section;
      //! Transmission priority window period.
      double tx_window;
      //! Reception priority window period.
      double rx_window;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
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

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL),
        m_tx_request(NULL),
        m_prio(TxRxPriority::None)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the modem");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

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

        param("Serial Port 9523 - Baud Rate", m_args.uart_baud_9523)
        .defaultValue("115200")
        .description("Serial port baud rate for 9523N Module");

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

        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::IoEvent>(this);
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

        if (m_driver != NULL)
          m_driver->setTxRateMax(m_args.max_tx_rate);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          if(m_args.use_9523)
            m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud_9523);
          else
            m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_driver = new Driver(this, m_uart, m_args.use_9523, c_pwr_on_delay);
          m_driver->initialize();
          m_driver->setTxRateMax(m_args.max_tx_rate);
          if(m_args.use_9523)
          {
            inf("LIDB FW: %s", m_driver->getFirmVersionLIDB().c_str());
            inf("Model: %s | IMEI: %s", m_driver->getModel().c_str(), m_driver->getIMEI().c_str());
          }
          debug("manufacturer: %s", m_driver->getManufacturer().c_str());
          debug("model: %s", m_driver->getModel().c_str());
          debug("IMEI: %s", m_driver->getIMEI().c_str());
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 5);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        m_mbox_check_timer.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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

        Memory::clear(m_uart);
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
          throw RestartNeeded(DTR("input error"), 5);
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
        inf(DTR("Message sent successfully."));
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

        sendTxRequestStatus(m_tx_request, IMC::IridiumTxStatus::TXSTATUS_ERROR,
            String::str(DTR("failed with error %u"), err_code));

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
          sendTxRequestStatus(*itr, IMC::IridiumTxStatus::TXSTATUS_EXPIRED);
          delete *itr;
          itr = m_tx_requests.erase(itr);
        }
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
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          processQueue();
        }
      }
    };
  }
}

DUNE_TASK
