//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "TxRequest.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Driver handler.
      Driver* m_driver;
      //! Queue of transmit requests.
      std::queue<TxRequest*> m_queue;
      //! RSSI value.
      unsigned m_rssi;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the modem");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::RSSI>(this);
      }

      ~Task(void)
      {
        clearQueue();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_driver = new Driver(this, m_uart);
        m_driver->initialize();
        m_driver->setRadioActivity(true);
        debug("Manufacturer: %s", m_driver->getManufacturer().c_str());
        debug("Model: %s", m_driver->getModel().c_str());
        debug("Revision: %s", m_driver->getRevision().c_str());
        debug("IMEI: %s", m_driver->getIMEI().c_str());
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::IridiumMsgTx* msg)
      {
        unsigned sys_id = resolveSystemName(msg->destination);
        TxRequest* req = new TxRequest(sys_id, msg->req_id, msg->data);
        m_queue.push(req);
      }

      void
      consume(const IMC::RSSI* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        m_rssi = msg->value;
      }

      void
      processQueue(void)
      {
        if (m_driver->isBusy())
          return;

        if (m_driver->hasSessionResult())
        {
          const SessionResult& res = m_driver->getSessionResult();
          if (res.isSuccessMO())
          {
            debug("dequeing message");
            TxRequest* req = m_queue.front();
            delete req;
            m_queue.pop();
          }
        }

        if (m_queue.empty())
          return;

        if (m_rssi == 0)
          return;

        debug("sending message");
        TxRequest* req = m_queue.front();
        m_driver->sendSBD(req->getData());
      }

      void
      clearQueue(void)
      {
        while (!m_queue.empty())
        {
          TxRequest* req = m_queue.front();
          delete req;
          m_queue.pop();
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
