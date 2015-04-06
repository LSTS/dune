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
      //! Power channel name.
      std::string pwr_name;
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

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL),
        m_tx_request(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the modem");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Power Channel - Name", m_args.pwr_name)
        .defaultValue("")
        .description("Name of the power channel that supplies the modem");

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

        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::IoEvent>(this);
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

        if (m_driver != NULL)
          m_driver->setTxRateMax(m_args.max_tx_rate);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        if (!m_args.pwr_name.empty())
        {
          IMC::PowerChannelControl pcc;
          pcc.name = m_args.pwr_name;
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(pcc);
        }

        Delay::wait(c_pwr_on_delay);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_driver = new Driver(this, m_uart);
          m_driver->initialize();
          m_driver->setTxRateMax(m_args.max_tx_rate);
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
        // FIXME: check if req_id already exists.
        // FIXME: check MTU.
        debug("queueing message");
        unsigned src_adr = msg->getSource();
        unsigned src_eid = msg->getSourceEntity();
        TxRequest* request = new TxRequest(src_adr, src_eid, msg->req_id,
                                           msg->ttl, msg->data);

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
        if (rv > 0)
        {
          IMC::IridiumMsgRx sbd;
          sbd.setDestination(getSystemId());
          sbd.data.assign(bfr, bfr + rv);
          dispatch(sbd, DF_KEEP_SRC_EID);
        }
        else
        {
          err(DTR("invalid SBD message of size %u"), rv);
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

      void
      processQueue(void)
      {
        cleanExpired();

        if (m_driver->isBusy())
          return;

        if (m_driver->hasSessionResult())
          handleSessionResult();

        if (m_driver->getRSSI() <= 0.1)
          return;

        if (m_driver->isCooling())
          return;

        if (!isActive())
        {
          m_mbox_check_timer.reset();
          return;
        }

        if (m_tx_request != NULL)
        {
          unsigned msn = m_driver->getMOMSN();
          m_tx_request->setMSN(msn);
          m_driver->sendSBD(m_tx_request->getData());
        }
        else if (m_tx_requests.empty())
        {
          if (m_driver->hasRingAlert())
            m_driver->checkMailBoxAlert();
          else if ((m_driver->getQueuedMT()) > 0 || m_mbox_check_timer.overflow())
            m_driver->checkMailBox();
        }
        else
        {
          m_tx_request = m_tx_requests.front();
          m_tx_requests.pop_front();
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
