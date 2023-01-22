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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Router.hpp"

namespace Transports
{
  namespace CommManager
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Period, in seconds, between state report transmissions over iridium
      int iridium_period;
      //! Enable CommManager to process and convert legacy message -> AcousticOperation
      bool enable_acoustic;
      //! Addresses Number - modem
      std::string gsm_addr_section;
      //! Entity label of Iridium modem
      std::string iridium_label;
      //! Entity label of GSM modem
      std::string gsm_label;
      //! Name of the configuration section with acoustic modem addresses
      std::string acoustic_addr_section;
      //! Send Iridium text messages as plain text
      bool iridium_plain_texts;
    };

    //! Config section from where to fetch emergency sms number
    const std::string c_sms_section = "Monitors.Emergency";
    //! Config field from where to fetch emergency sms number
    const std::string c_sms_field = "SMS Recipient Number";

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;

      IMC::PlanControlState* m_pstate;
      IMC::FuelLevel* m_fuel;
      IMC::EstimatedState* m_estate;
      IMC::VehicleState* m_vstate;
      IMC::VehicleMedium* m_vmedium;
      Time::Counter<float> m_iridium_timer;
      Time::Counter<float> m_clean_timer;
      Time::Counter<float> m_retransmission_timer;
      std::list<IMC::TransmissionRequest*> m_retransmission_list;
      int m_plan_chksum;
      Router m_router;

      std::map<uint16_t, IMC::AcousticOperation*> m_acoustic_requests;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pstate(NULL),
        m_fuel(NULL),
        m_estate(NULL),
        m_vstate(NULL),
        m_vmedium(NULL),
        m_plan_chksum(0),
        m_router(this)
      {
        param("Iridium - Entity Label", m_args.iridium_label)
            .defaultValue("GSM")
            .description("Entity label of Iridium modem");

        param("GSM - Entity Label", m_args.gsm_label)
            .defaultValue("Iridium Modem")
            .description("Entity label of GSM modem");

        param("GSM Address Section", m_args.gsm_addr_section)
            .defaultValue("GSM Addresses")
            .description("Name of the configuration section with gsm modem addresses");

        param("Acoustic Address Section", m_args.acoustic_addr_section)
            .defaultValue("Evologics Addresses")
            .description("Name of the configuration section with acoustic modem addresses");

        param("Iridium Reports Period", m_args.iridium_period)
            .description("Period, in seconds, between transmission of states via Iridium. Value of 0 disables transmission.")
            .defaultValue("300");

        param("Process AcousticOperation Messages", m_args.enable_acoustic)
            .description("Enable CommManager to process and convert legacy message -> AcousticOperation")
            .defaultValue("true");

        param("Send Iridium plain texts", m_args.iridium_plain_texts)
            .description("Send Iridium text messages as plain text (and not IMC)")
            .defaultValue("1");

        bind<IMC::AcousticOperation>(this);
        bind<IMC::AcousticStatus>(this);
        bind<IMC::Announce>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::RSSI>(this);
        bind<IMC::Sms>(this);
        bind<IMC::SmsStatus>(this);
        bind<IMC::TCPStatus>(this);
        bind<IMC::TransmissionRequest>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::VehicleMedium>(this);

        m_clean_timer.setTop(3);
        m_retransmission_timer.setTop(1);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fuel);
        Memory::clear(m_pstate);
        Memory::clear(m_vstate);
        Memory::clear(m_estate);
      }

      //! Initialize resources and configure modem
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        // verify modem local address value -> GSM
        std::map<std::string, std::string> mapName;
        std::vector<std::string> addrs = m_ctx.config.options(m_args.gsm_addr_section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          std::string addr;
          m_ctx.config.get(m_args.gsm_addr_section, addrs[i], "0", addr);
          if (addr != "0")
          {
            mapName[addrs[i]] = addr;
          }
        }
        m_router.setGSMMap(mapName);

        // verify modem local address value -> Acoustic
        std::vector<std::string> acousticMap;
        addrs = m_ctx.config.options(m_args.acoustic_addr_section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          std::string addr;
          m_ctx.config.get(m_args.acoustic_addr_section, addrs[i], "-1", addr);
          if (addr != "-1")
          {
            acousticMap.push_back(addrs[i]);
          }
        }
        m_router.setAcousticMap(acousticMap);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          uint8_t gsm_id = resolveEntity(m_args.gsm_label);
          m_router.setGsmLabel(gsm_id);
        }
        catch (std::runtime_error& e)
        {
          war(DTR("ERROR Initializing CommManager. Couldn't resolve GSM label."));
          //throw RestartNeeded(e.what(), 5, false);
        }
        try
        {
          uint8_t iridium_id = resolveEntity(m_args.iridium_label);
          m_router.setIridiumLabel(iridium_id);
        }
        catch (std::runtime_error& e)
        {
          war(DTR("ERROR Initializing CommManager. Couldn't resolve Iridium label."));
          //throw RestartNeeded(e.what(), 5, false);
        }
      }

      void
      onUpdateParameters(void)
      {
        m_iridium_timer.setTop(m_args.iridium_period);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_pstate, new IMC::PlanControlState(*msg));
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_fuel, new IMC::FuelLevel(*msg));
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_estate, new IMC::EstimatedState(*msg));
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_vstate, new IMC::VehicleState(*msg));
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_vmedium, new IMC::VehicleMedium(*msg));
        m_router.process(msg->clone());
      }

      void
      consume(const IMC::PlanSpecification* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        const char * name = msg->plan_id.c_str();
        m_plan_chksum = CRC16::compute((uint8_t *)name, strlen(name));
      }

      void
      consume(const IMC::RSSI* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        m_router.process(msg->clone());
      }

      void
      consume(const IMC::Announce* msg)
      {
        m_router.process(msg->clone());
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        std::map<uint16_t, IMC::TransmissionRequest*>* tr_list =
            m_router.getList();

        if (tr_list->find(msg->req_id) != tr_list->end())
        {
          IMC::TransmissionRequest* req = tr_list->operator [](msg->req_id);

          if (req->comm_mean != IMC::TransmissionRequest::CMEAN_SATELLITE)
            return;

          switch (msg->status)
          {
            case (IMC::IridiumTxStatus::TXSTATUS_QUEUED):
              m_router.answer(
                  req, "Message has been queued for Satellite transmission.",
                  IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
              break;
            case (IMC::IridiumTxStatus::TXSTATUS_TRANSMIT):
              m_router.answer(req, "Message is being transmitted.",
                              IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
              break;
            case (IMC::IridiumTxStatus::TXSTATUS_OK):
              m_router.answer(req, "Message has been sent via Iridium.",
                              IMC::TransmissionStatus::TSTAT_SENT);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;
            case (IMC::IridiumTxStatus::TXSTATUS_ERROR):
              m_router.answer(req, "Error while trying to transmit message.",
                              IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);

              break;
            case (IMC::IridiumTxStatus::TXSTATUS_EXPIRED):
              m_router.answer(req, "Timeout while trying to transmit message.",
                              IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;
            default:
              break;
          }
        }
      }

      void
      consume(const IMC::SmsStatus* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        std::map<uint16_t, IMC::TransmissionRequest*>* tr_list = m_router.getList();

        if (tr_list->find(msg->req_id) != tr_list->end())
        {
          IMC::TransmissionRequest* req = tr_list->operator [](msg->req_id);
          switch (msg->status)
          {
            case (IMC::SmsStatus::SMSSTAT_QUEUED):
              m_router.answer(req,
                              "Message has been queued for GSM transmission.",
                              IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
              break;

            case (IMC::SmsStatus::SMSSTAT_SENT):
              m_router.answer(req, "Message has been sent via GSM.",
                              IMC::TransmissionStatus::TSTAT_SENT);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;

            case (IMC::SmsStatus::SMSSTAT_INPUT_FAILURE):
              m_router.answer(req, msg->info,
                              IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
              tr_list->erase(msg->req_id);
              Memory::clear(req);
              break;

            case (IMC::SmsStatus::SMSSTAT_ERROR):
              m_router.answer(req, msg->info,
                              IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);
              break;

            default:
              inf("ERROR: SmsStatus->status not implemented");
              break;
          }
        }
      }

      void
      consume(const IMC::AcousticStatus* msg)
      {
        if (msg->getSource() != getSystemId())
        {
          return;
        }
        std::map<uint16_t, IMC::TransmissionRequest*>* tr_list =
            m_router.getList();

        if (tr_list->find(msg->req_id) != tr_list->end())
        {

          IMC::TransmissionRequest* req = tr_list->operator [](msg->req_id);

          if (req->comm_mean != IMC::TransmissionRequest::CMEAN_ACOUSTIC)
            return;

          switch (msg->status)
          {
            case (IMC::AcousticStatus::STATUS_QUEUED):
              break;

            case (IMC::AcousticStatus::STATUS_IN_PROGRESS):
              m_router.answer(
                  req, "Message has been queued for Acoustic transmission.",
                  IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
              break;

            case (IMC::AcousticStatus::STATUS_SENT):
              m_router.answer(req, "Message has been sent via Acoustic.",
                              IMC::TransmissionStatus::TSTAT_SENT);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;

            case (IMC::AcousticStatus::STATUS_RANGE_RECEIVED):
              m_router.answer(req, msg->info,
                              IMC::TransmissionStatus::TSTAT_RANGE_RECEIVED,
                              msg->range);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;

            case (IMC::AcousticStatus::STATUS_ERROR):
              m_router.answer(req, msg->info,
                              IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);
              break;

            case (IMC::AcousticStatus::STATUS_BUSY):
              m_router.answer(req, "Acoustic modem is busy.",
                              IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);
              break;

            case (IMC::AcousticStatus::STATUS_INPUT_FAILURE):
              m_router.answer(req, msg->info,
                              IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
              tr_list->erase(msg->req_id);
              Memory::clear(req);
              break;

            default:
              inf("ERROR: AcousticStatus->status not implemented");
              break;
          }
          return;
        }

        if (!m_args.enable_acoustic)
        {
          return;
        }
        //old API
        if (m_acoustic_requests.find(msg->req_id) != m_acoustic_requests.end())
        {
          IMC::AcousticOperation* req = m_acoustic_requests[msg->req_id];

          switch (msg->status)
          {
            case (IMC::AcousticStatus::STATUS_QUEUED):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                  m_router.answer(req, IMC::AcousticOperation::AOP_MSG_QUEUED, req->system);
                  break;

                default:
                  break;
              }
              break;

            case (IMC::AcousticStatus::STATUS_IN_PROGRESS):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                  m_router.answer(req, IMC::AcousticOperation::AOP_MSG_IP, req->system);
                  break;

                case IMC::AcousticOperation::AOP_RANGE:
                case IMC::AcousticOperation::AOP_REVERSE_RANGE:
                  m_router.answer(req, IMC::AcousticOperation::AOP_RANGE_IP, req->system);
                  break;

                case IMC::AcousticOperation::AOP_ABORT:
                  m_router.answer(req, IMC::AcousticOperation::AOP_ABORT_IP, req->system);
                  break;

                default:
                  break;
              }
              break;

            case (IMC::AcousticStatus::STATUS_SENT):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                  m_router.answer(req, IMC::AcousticOperation::AOP_MSG_DONE, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                case IMC::AcousticOperation::AOP_ABORT:
                  m_router.answer(req, IMC::AcousticOperation::AOP_ABORT_ACKED, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                default:
                  break;
              }
              break;

            case (IMC::AcousticStatus::STATUS_RANGE_RECEIVED):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_RANGE:
                  m_router.answer(req, IMC::AcousticOperation::AOP_RANGE_RECVED,
                                  req->system,
                                  msg->range);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                default:
                  break;
              }
              break;

            case (IMC::AcousticStatus::STATUS_ERROR):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                  m_router.answer(req, IMC::AcousticOperation::AOP_MSG_FAILURE, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                case IMC::AcousticOperation::AOP_RANGE:
                case IMC::AcousticOperation::AOP_REVERSE_RANGE:
                  m_router.answer(req, IMC::AcousticOperation::AOP_RANGE_TIMEOUT, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                case IMC::AcousticOperation::AOP_ABORT:
                  m_router.answer(req, IMC::AcousticOperation::AOP_ABORT_TIMEOUT, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                default:
                  break;
              }

              break;

            case (IMC::AcousticStatus::STATUS_BUSY):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                case IMC::AcousticOperation::AOP_RANGE:
                case IMC::AcousticOperation::AOP_REVERSE_RANGE:
                case IMC::AcousticOperation::AOP_ABORT:
                  m_router.answer(req, IMC::AcousticOperation::AOP_BUSY, req->system);
                  break;

                default:
                  break;
              }
              break;

            case (IMC::AcousticStatus::STATUS_INPUT_FAILURE):
              switch (req->op)
              {
                case IMC::AcousticOperation::AOP_MSG:
                case IMC::AcousticOperation::AOP_RANGE:
                case IMC::AcousticOperation::AOP_REVERSE_RANGE:
                case IMC::AcousticOperation::AOP_ABORT:
                  m_router.answer(req, IMC::AcousticOperation::AOP_UNSUPPORTED, req->system);
                  Memory::clear(req);
                  m_acoustic_requests.erase(msg->req_id);
                  break;

                default:
                  break;
              }
              break;

            default:
              break;
          }
        }
      }

      void
      consume(const IMC::TCPStatus* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        
        std::map<uint16_t, IMC::TransmissionRequest*>* tr_list = m_router.getList();
        if (tr_list->find(msg->req_id) != tr_list->end())
        {
          IMC::TransmissionRequest* req = tr_list->operator [](msg->req_id);
          switch (msg->status)
          {
            case (IMC::TCPStatus::TCPSTAT_QUEUED):
              m_router.answer(req, "Message has been queued for TCP transmission.",
                     IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
              break;

            case (IMC::TCPStatus::TCPSTAT_SENT):
              m_router.answer(req, "Message has been sent via TCP.",
                     IMC::TransmissionStatus::TSTAT_SENT);
              Memory::clear(req);
              tr_list->erase(msg->req_id);
              break;

            case (IMC::TCPStatus::TCPSTAT_HOST_UNKNOWN):
              m_router.answer(req, msg->info,
                     IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);
              break;

            case (IMC::TCPStatus::TCPSTAT_CANT_CONNECT):
              m_router.answer(req, msg->info,
                     IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
              tr_list->erase(msg->req_id);
              m_retransmission_list.push_back(req->clone());
              Memory::clear(req);
              break;

            case (IMC::TCPStatus::TCPSTAT_INPUT_FAILURE):
              m_router.answer(req, msg->info,
                     IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
              tr_list->erase(msg->req_id);
              Memory::clear(req);
              break;

            default:
              inf("ERROR: TCPStatus -> status not implemented");
              break;
          }
        }
      }

      void
      consume(const IMC::TransmissionRequest* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        switch (msg->comm_mean)
        {
          case (IMC::TransmissionRequest::CMEAN_SATELLITE):
            m_router.sendViaSatellite(msg, m_args.iridium_plain_texts);
            break;
          case (IMC::TransmissionRequest::CMEAN_GSM):
            if (msg->destination.empty() || msg->destination == "broadcast") {
              IMC::TransmissionRequest req = *msg->clone();
              req.destination = m_ctx.config.get(c_sms_section, c_sms_field);
              m_router.sendViaGSM(&req);
            }
            else
              m_router.sendViaGSM(msg);
            break;
          case (IMC::TransmissionRequest::CMEAN_ACOUSTIC):
            m_router.sendViaAcoustic(msg);
            break;
          case (IMC::TransmissionRequest::CMEAN_WIFI):
            m_router.sendViaWifi(msg);
            break;
          case (IMC::TransmissionRequest::CMEAN_ANY):
            m_router.sendViaAny(msg, m_args.iridium_plain_texts);
            break;
          case (IMC::TransmissionRequest::CMEAN_ALL):
            m_router.sendViaAll(msg, m_args.iridium_plain_texts);
            break;
          default:
            m_router.answer(msg, "Communication mean not implemented.",
              IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            break;
        }
      }

      //Conversion from Sms to SmsRequest Message
      void
      consume(const IMC::Sms* msg)
      {
        if (msg->getSource() != getSystemId() && msg->getDestination() != getSystemId())
          return;

        uint16_t newId = m_router.createInternalId();

        SmsRequest sms_req;

        sms_req.req_id = newId;
        sms_req.destination = msg->number;
        sms_req.sms_text = msg->contents;
        sms_req.timeout = msg->timeout;
        sms_req.setSource(msg->getSource());
        sms_req.setSourceEntity(msg->getSourceEntity());

        dispatch(sms_req);
      }

      //Conversion from AcousticOperation to AcousticRequest Message
      void
      consume(const IMC::AcousticOperation* msg)
      {
        if (!m_args.enable_acoustic)
        {
          return;
        }

        if (msg->getSource() != getSystemId() && msg->getDestination() != getSystemId())
          return;

        uint16_t newId = m_router.createInternalId();

        AcousticRequest tx;
        //set message id
        tx.req_id = newId;

        //set destination
        if (msg->system == "")
          tx.destination = "broadcast";
        else
          tx.destination = msg->system.c_str();

        tx.setDestination(msg->getDestination());
        tx.setDestinationEntity(msg->getDestinationEntity());
        tx.setSource(getSystemId());
        tx.setSourceEntity(getEntityId());

        tx.timeout = 10;

        tx.range = msg->range;

        //set message type
        switch (msg->op)
        {
          case IMC::AcousticOperation::AOP_MSG:
            {
              tx.type = IMC::AcousticRequest::TYPE_MSG;
              //set message content
              const IMC::Message * inlinemsg = msg->msg.get();
              tx.msg.set(inlinemsg->clone());
              break;
            }

          case IMC::AcousticOperation::AOP_ABORT:
            {
              tx.type = IMC::AcousticRequest::TYPE_ABORT;
              break;
            }
          case IMC::AcousticOperation::AOP_RANGE:
            {
              tx.type = IMC::AcousticRequest::TYPE_RANGE;
              break;
            }
          case IMC::AcousticOperation::AOP_REVERSE_RANGE:
            {
              tx.type = IMC::AcousticRequest::TYPE_REVERSE_RANGE;
              break;
            }
          default:
            {
              //answer(msg, "Communication mode not implemented for communication mean Acoustic", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
              return;
              break;
            }
        }

        //add to transmission_queue
        m_acoustic_requests[newId] = msg->clone();
        dispatch(tx);
      }

      IMC::StateReport*
      produceReport()
      {
        if (m_vstate == NULL || m_estate == NULL)
          return NULL;

        IMC::EstimatedState* estate = new IMC::EstimatedState(*m_estate);
        IMC::VehicleState* vstate = new IMC::VehicleState(*m_vstate);

        IMC::StateReport* report = new IMC::StateReport();
        report->stime = (int)Clock::getSinceEpoch();

        // get current position
        double lat = estate->lat, lon = estate->lon;
        WGS84::displace(estate->x, estate->y, &lat, &lon);
        lat = Angles::degrees(lat);
        lon = Angles::degrees(lon);

        report->latitude = (fp32_t)lat;
        report->longitude = (fp32_t)lon;

        if (estate->depth != -1)
          report->depth = Math::roundToInteger(estate->depth * 10.0f);
        else
          report->depth = 0xFFFF;

        if (estate->alt != -1)
          report->altitude = Math::roundToInteger(estate->alt * 10.0f);
        else
          report->altitude = 0xFFFF;

        report->speed = Math::roundToInteger(estate->u * 100.0f);

        double ang = Angles::normalizeRadian(estate->psi);
        if (ang < 0)
          ang += Math::c_two_pi;
        report->heading = Math::roundToInteger((ang / c_two_pi) * 65535);

        if (m_fuel != NULL)
          report->fuel = Math::roundToInteger(m_fuel->value);

        switch (vstate->op_mode)
        {
          case VehicleState::VS_SERVICE:
            report->exec_state = -1;
            break;
          case VehicleState::VS_BOOT:
            report->exec_state = -2;
            break;
          case VehicleState::VS_CALIBRATION:
            report->exec_state = -3;
            report->plan_checksum = m_plan_chksum;
            break;
          default:
            if (m_pstate != NULL)
            {
              report->exec_state = Math::roundToInteger(m_pstate->plan_progress);
              report->plan_checksum = m_plan_chksum;
            }
            else
              report->exec_state = -2;
            break;
        }

        Memory::clear(vstate);
        Memory::clear(estate);
        return report;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_retransmission_timer.overflow())
          {
            while (!m_retransmission_list.empty())
            {
              consume(m_retransmission_list.front());
              m_retransmission_list.pop_front();
            }
            m_retransmission_timer.reset();
          }

          if (m_clean_timer.overflow())
          {
            m_router.clearTimeouts();
            m_clean_timer.reset();
          }

          if (m_args.iridium_period > 0 && m_iridium_timer.overflow())
          {
            if (m_vmedium != NULL && m_vmedium->medium == IMC::VehicleMedium::VM_WATER)
            {
              IMC::StateReport* msg = produceReport();
              if (msg != NULL)
              {
                dispatch(msg);
                inf("Requesting report transmission over Iridium.");
                IMC::TransmissionRequest request;
                request.setDestination (getSystemId());
                request.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
                request.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
                request.deadline = Time::Clock::getSinceEpoch() + m_args.iridium_period;
                request.destination = "broadcast";
                request.msg_data.set(msg);
                request.req_id = m_router.createInternalId();
                dispatch(request, DF_LOOP_BACK);

                Memory::clear(msg);
              }
              m_iridium_timer.reset();
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
