//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// C++ headers.
#include <unordered_map>

namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Satellite
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Maximum size of a frame to be sent.
      uint16_t max_frame_size;
      //! Maximum age of received messages.
      double max_age_secs;
      //! Delay between announce messages.
      double delay_between_announces;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of received iridium fragments.
      std::unordered_map<uint8_t, IridiumFragment*> m_ir_frags;
      //! Map of outgoing iridium fragments.
      std::unordered_map<uint8_t, IridiumMsgTx*> m_ir_out_frags;
      //! Task arguments.
      Arguments m_args;
      //! Last announce messages received.
      std::unordered_map<std::string, IMC::Announce> m_last_announces;
      //! Last plan state received.
      IMC::PlanControlState m_plan_state;
      //! Last fuel state received.
      IMC::FuelLevel m_fuel_state;
      //! Last vehicle state received.
      IMC::VehicleState m_vehicle_state;
      //! Flag to indicate if the last announce message was queued.
      bool m_ann_queued;
      //! Announce watchdog.
      Counter<double> m_ann_wdog;
      //! Request ID for Iridium messages.
      uint16_t m_req_id;
      //! Fragments transmission ID.
      uint8_t m_frag_id;
      //! Request ID for announce messages.
      uint16_t m_ann_req_id;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_ann_queued(false),
        m_req_id(0),
        m_frag_id(0)
      {
        // clang-format off
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);
        // clang-format on

        param("Maximum Frame Size", m_args.max_frame_size)
          .defaultValue("268")
          .description("Maximum size of a frame to be sent.");

        param("Maximum age", m_args.max_age_secs)
          .units(Units::Second)
          .defaultValue("1200")
          .description("Age, in seconds, after which received IMC messages are discarded.");

        param("Announce Periodicity", m_args.delay_between_announces)
          .units(Units::Second)
          .defaultValue("0")
          .description("Delay between announce messages being sent. 0 for no updates being sent.");

        bind<IMC::Announce>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::SatelliteRequest>(this);
        bind<IMC::VehicleState>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://iridium");
        dispatch(announce);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_ann_wdog.setTop(m_args.delay_between_announces);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      handleIridiumCmd(IridiumCommand* cmd)
      {
        IMC::TextMessage tm;
        tm.text = cmd->command;
        tm.origin = "iridium";
        tm.setSource(cmd->source);

        trace("dispatching text message: %s", tm.text.c_str());
        dispatch(tm);
      }

      void
      handleUpdates(std::vector<DevicePosition>& positions)
      {
        inf("Received device update with %d positions", (int)positions.size());

        for (auto itr = positions.begin(); itr != positions.end(); itr++)
        {
          DevicePosition& pos = *itr;
          int selector = (pos.id & 0x0F);

          IMC::RemoteSensorInfo rsi;
          rsi.alt = -1;
          rsi.lat = pos.lat;
          rsi.lon = pos.lon;
          rsi.heading = 0;

          war("System %X is at (%.5f, %.5f).", pos.id, Angles::degrees(pos.lat),
              Angles::degrees(pos.lon));

          std::string name = resolveSystemId(pos.id);

          switch (selector)
          {
            case 0:
              rsi.sensor_class = "Unmanned Vehicle";
              break;
            case 2:
              rsi.sensor_class = "External Vehicle";
              break;
            case 4:
              rsi.sensor_class = "Console";
              break;
            case 6:
              rsi.sensor_class = "Sensor";
              break;
            case 8:
              rsi.sensor_class = "Manned Vehicle";
              break;
            default:
            {
              rsi.sensor_class = "Unknown";
              std::stringstream ss;
              ss << rsi.sensor_class << "_" << pos.id;
              rsi.id = ss.str();
            }
            break;
          }

          if (pos.pos_class != 0)
          {
            std::stringstream ss;
            ss << "Argos Class " << (char)pos.pos_class;
            rsi.sensor_class = ss.str();
          }
          else
            rsi.id = name;

          dispatch(rsi);
        }
      }

      void
      handleIMCMessage(ImcIridiumMessage* ir_msg)
      {
        IMC::Message* msg = ir_msg->msg;

        double age = Clock::getSinceEpoch() - msg->getTimeStamp();
        if (age >= m_args.max_age_secs)
        {
          war("discarded IMC message of type %s because it is too old (%f seconds of age).",
              msg->getName(), age);
          return;
        }

        inf("received IMC message of type %s via Iridium from %d.", msg->getName(), ir_msg->source);
        msg->setSource(ir_msg->source);
        dispatch(msg, DF_LOOP_BACK);
      }

      void
      handleFragment(IridiumFragment* frag)
      {
        debug("Received fragment %d/%d", frag->hdr.frag_id, frag->hdr.num_frags);

        if (m_ir_frags.find(frag->hdr.trans_id) == m_ir_frags.end())
        {
          m_ir_frags[frag->hdr.trans_id] = frag;
          return;
        }

        IMC::Message* imc_msg = m_ir_frags[frag->hdr.trans_id]->merge(frag);
        if (imc_msg != nullptr)
        {
          inf("received message as fragmets %s", imc_msg->getName());
          dispatch(imc_msg);
          Memory::clear(imc_msg);
        }
      }

      void
      sendAnnounce(void)
      {
        if (m_ann_queued)
        {
          debug("won't send announce message while previous one is still queued.");
          return;
        }

        debug("queuing announce");

        if (m_last_announces.find(getSystemName()) == m_last_announces.end())
          return;

        IMC::Announce* ann = &m_last_announces[getSystemName()];

        std::stringstream ss;
        if (m_plan_state.state == IMC::PlanControlState::PCS_EXECUTING)
          ss << "P:" << m_plan_state.plan_id << " ";
        else
          ss << "P:n/a ";
        ss << "F:" << (int)m_fuel_state.value << "% ";
        if (m_vehicle_state.error_count > 0)
          ss << "E:" << m_vehicle_state.last_error;

        ann->services = ss.str();

        m_ann_req_id = m_req_id;
        sendIridiumMsg(ann);
        m_ann_queued = true;
      }

      void
      sendSatelitteMsg(DeviceUpdate* msg)
      {
        IridiumMsgTx tx;
        tx.ttl = 60;
        tx.req_id = 0;

        uint8_t buffer[1024];
        size_t size = msg->serialize(buffer);
        tx.data.assign(buffer, buffer + size);

        dispatch(tx);
      }

      void
      sendFragmented(IMC::Message* msg)
      {
        spew("sending %s (%d) as fragments", msg->getName(), m_frag_id);

        IridiumFragment frags;

        std::list<std::vector<char>> frag_lst =
          frags.serialize(msg, m_frag_id++, m_args.max_frame_size);

        for (auto& itr : frag_lst)
        {
          IridiumMsgTx* tx = new IridiumMsgTx();
          m_ir_out_frags[m_frag_id] = tx;

          tx->ttl = 60;
          tx->req_id = m_req_id++;
          tx->data.assign(itr.begin(), itr.end());

          dispatch(tx);
        }
      }

      void
      sendIridiumMsg(IMC::Message* msg)
      {
        // 10 bytes is the ImcIridiumMessage header size
        if (msg->getPayloadSerializationSize() + 10 > m_args.max_frame_size)
        {
          sendFragmented(msg);
          return;  // Send as fragments
        }

        uint8_t buffer[m_args.max_frame_size];

        ImcIridiumMessage ir_msg;
        ir_msg.source = getSystemId();
        ir_msg.msg = msg;
        int len = ir_msg.serialize(buffer);

        IridiumMsgTx tx;
        tx.ttl = 60;
        tx.req_id = m_req_id++;
        tx.data.assign(buffer, buffer + len);

        dispatch(tx);

        spew("sent message %s - %s", msg->getName(), (char*)buffer);
      }

      void
      consume(const IMC::Announce* msg)
      {
        if (msg->lat == 0 && msg->lon == 0)
          return;

        m_last_announces[msg->sys_name] = *msg;
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel_state = *msg;
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        // Respond to the original sender
        if (msg->getDestinationEntity() != getEntityId())
        {
          IMC::SatelliteStatus sat_status;
          sat_status.setDestinationEntity(msg->getDestinationEntity());
          sat_status.req_id = msg->req_id;
          sat_status.status = msg->status;
          sat_status.info = msg->text;

          dispatch(sat_status);
          return;
        }

        // Filter Device Updates
        if (msg->req_id == m_ann_req_id)
        {
          if (msg->status == IridiumTxStatus::TXSTATUS_OK)
          {
            m_ann_wdog.setTop(m_args.delay_between_announces);
            debug("announce sent successfully");
          }

          // If message was expired or send, clear the flag
          m_ann_queued = !(msg->status == IridiumTxStatus::TXSTATUS_OK
                           || msg->status == IridiumTxStatus::TXSTATUS_EXPIRED);

          return;
        }

        // Test if message fragments were sent successfully
        if (m_ir_out_frags.find(msg->req_id) == m_ir_out_frags.end())
          return;

        switch (msg->status)
        {
          case IMC::IridiumTxStatus::TXSTATUS_OK:
          {
            spew("Received ack for message %d", msg->req_id);
            Message* sent = m_ir_out_frags[msg->req_id];

            Memory::clear(sent);
            m_ir_out_frags.erase(msg->req_id);
          }
          break;

          case IMC::IridiumTxStatus::TXSTATUS_EXPIRED:
          {
            spew("received expired ack for message %d", msg->req_id);
            Message* sent = m_ir_out_frags[msg->req_id];
            dispatch(sent);
          }
          break;

          default:
            break;
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage* ir_msg = nullptr;
        try
        {
          ir_msg = IridiumMessage::deserialize(msg);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
          war(DTR("Parsing unrecognized iridium message as text"));
          std::string text(msg->data.begin(), msg->data.end());
          IMC::TextMessage tm;
          tm.text = text;
          tm.origin = "iridium";
          std::stringstream ss;
          tm.toText(ss);
          trace("sending this message to bus: %s", ss.str().c_str());
          dispatch(tm);
          return;
        }

        switch (ir_msg->msg_id)
        {
          case ID_IRIDIUMCMD:
            handleIridiumCmd(static_cast<IridiumCommand*>(ir_msg));
            break;

          case (ID_DEVICEUPDATE):
            handleUpdates(static_cast<DeviceUpdate*>(ir_msg)->positions);
            break;

          case (ID_EXTDEVUPDATE):
            handleUpdates(static_cast<ExtendedDeviceUpdate*>(ir_msg)->positions);
            break;

          case (ID_IMCMESSAGE):
            handleIMCMessage(static_cast<ImcIridiumMessage*>(ir_msg));
            break;

          case (ID_FRAGMENT):
            handleFragment(static_cast<IridiumFragment*>(ir_msg));
            break;

          default:
            break;
        }

        Memory::clear(ir_msg);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_plan_state = *msg;
      }

      void
      consume(const IMC::SatelliteRequest* msg)
      {
        IridiumMsgTx tx;
        tx.setSource(msg->getSource());
        tx.setSourceEntity(msg->getSourceEntity());

        tx.req_id = msg->req_id;
        tx.destination = msg->destination;
        tx.ttl = msg->ttl;

        IMC::Message* imsg = const_cast<IMC::Message*>(msg->msg.get());
        switch (msg->type)
        {
          case SatelliteRequest::TYPE_INLINEMSG:
            trace("sending inline message %s", imsg->getName());
            sendIridiumMsg(imsg);
            break;

          case SatelliteRequest::TYPE_TEXT:
            trace("sending text message %s", imsg->getName());
            // Send as text message
            break;

          case SatelliteRequest::TYPE_RAW:
            trace("sending raw message %s", imsg->getName());
            // Send as raw data
            break;

          default:
            break;
        }
        dispatch(tx);
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_vehicle_state = *msg;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!isActive())
            continue;

          if (m_ann_wdog.overflow() && m_ann_wdog.getTop() != 0)
            sendAnnounce();
        }
      }
    };
  }
}

DUNE_TASK
