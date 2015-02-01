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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/IMC/IridiumMessageDefinitions.hpp>
#include <DUNE/Math/Random.hpp>

namespace Transports
{
  namespace Iridium
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Delay between dev updates.
      int delay_between_device_updates;
      //! Delay between announcements.
      int delay_between_announces;
      //! Maximum age after which received messages are discarded
      int max_age_secs;
      //! Destination to send all iridium messages
      std::string iridium_destination;
    };

    struct Task: public DUNE::Tasks::Task
    {
      std::map<std::string, IMC::Announce> m_last_announces;
      double m_last_dev_update_time;
      double m_last_announce_time;
      bool m_update_pool_empty;
      bool m_announce_pool_empty;
      int m_dev_update_req_id;
      int m_announce_req_id;

      IMC::FuelLevel m_fuel_state;
      IMC::PlanControlState m_plan_state;
      IMC::VehicleState m_vehicle_state;
      Random::Generator* m_rnd;
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_last_dev_update_time(Clock::get()),
        m_last_announce_time(Clock::get()),
        m_update_pool_empty(true),
        m_announce_pool_empty(true),
        m_dev_update_req_id(10),
        m_announce_req_id(75),
        m_rnd(NULL)
      {
        param("Device updates - Periodicity", m_args.delay_between_device_updates)
        .units(Units::Second)
        .defaultValue("600")
        .description("Delay between announce update messages. 0 for no updates being sent.");

        param("Announce Periodicity", m_args.delay_between_announces)
        .units(Units::Second)
        .defaultValue("0").description("Delay between announce messages being sent. 0 for no updates being sent.");

        param("Maximum age", m_args.max_age_secs)
        .units(Units::Second)
        .defaultValue("1200")
        .description("Age, in seconds, after which received IMC messages are discarded.");

        bind<IMC::Announce>(this);
        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::FuelLevel>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_rnd = Random::Factory::create("drand48", -1);
      }

      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://iridium");
        dispatch(announce);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_rnd);
      }

      void
      handleIridiumCommand(IridiumCommand * irCmd)
      {
        IMC::TextMessage tm;
        inf("received command: '%s'", irCmd->command.c_str());
        tm.text = irCmd->command;
        tm.origin = "Iridium";
        tm.setSource(irCmd->source);
        std::stringstream ss;
        tm.toText(ss);
        spew("sending this message to bus: %s", ss.str().c_str());

        dispatch(tm);
      }

      void
      handleUpdates(std::vector<DevicePosition> positions)
      {
        std::vector<DevicePosition>::iterator it;
        inf("received device update with %d updates",
            (int)positions.size());

        for (it = positions.begin(); it != positions.end(); it++)
        {
          DevicePosition p = *it;
          int selector = (p.id & 0xE0) >> 4;

          IMC::RemoteSensorInfo sensorInfo;
          sensorInfo.alt = -1;
          sensorInfo.lat = p.lat;
          sensorInfo.lon = p.lon;
          sensorInfo.heading = 0;

          std::string name = resolveSystemId(p.id);

          switch (selector)
          {
            case 0:
              sensorInfo.sensor_class = "Unmanned Vehicle";
              break;
            case 2:
              sensorInfo.sensor_class = "External Vehicle";
              break;
            case 4:
              sensorInfo.sensor_class = "Console";
              break;
            case 6:
              sensorInfo.sensor_class = "Sensor";
              break;
            case 8:
              sensorInfo.sensor_class = "Manned Vehicle";
              break;
            default:
              sensorInfo.sensor_class = "Unknown";
              break;
          }

          if (name == "unknown")
          {
            std::stringstream ss;
            ss << sensorInfo.sensor_class << "_" << p.id;
            sensorInfo.id = ss.str();
          }

          if (p.pos_class != 0)
          {
            std::stringstream ss;
            ss << "Argos Class " << (char)p.pos_class;
            sensorInfo.sensor_class = ss.str();
          }
          else
            sensorInfo.id = name;

          dispatch(sensorInfo);
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        DUNE::IMC::IridiumMessage * m = DUNE::IMC::IridiumMessage::deserialize(msg);
        if (m == NULL)
        {
          war(DTR("error while parsing Iridium message"));
          return;
        }

        switch (m->msg_id)
        {
          case (ID_ACTIVATESUB):
            inf("received subscription activation request via Iridium (ignoring).");
            break;
          case (ID_DEACTIVATESUB):
            inf("received subscription deactivation request via Iridium (ignoring).");
            break;
          case (ID_IRIDIUMCMD):
            handleIridiumCommand(static_cast<IridiumCommand *>(m));
            inf("received text command via Iridium.");
            break;
          case (ID_DEVICEUPDATE):
            handleUpdates(static_cast<DeviceUpdate *>(m)->positions);
            break;
          case (ID_EXTDEVUPDATE):
            handleUpdates(static_cast<ExtendedDeviceUpdate *>(m)->positions);
            break;
          default:
            DUNE::IMC::ImcIridiumMessage * irMsg =
            static_cast<DUNE::IMC::ImcIridiumMessage *>(m);

            double age = Clock::getSinceEpoch() - irMsg->msg->getTimeStamp();
            if (age < m_args.max_age_secs)
            {
              inf("received IMC message of type %s via Iridium.", irMsg->msg->getName());
              dispatch(irMsg->msg);
            }
            else
            {
              war("discarded IMC message of type %s because it is too old (%f seconds of age).",irMsg->msg->getName(), age);
            }
            break;
        }
        delete m;
      }

      void
      consume(const IMC::PlanControlState * msg)
      {
        m_plan_state = *msg;
      }

      void
      consume(const IMC::FuelLevel * msg)
      {
        m_fuel_state = *msg;
      }

      void
      consume(const IMC::VehicleState * msg)
      {
        m_vehicle_state = *msg;
      }

      void
      consume(const IMC::Announce* msg)
      {
        if (msg->lat != 0 || msg->lon != 0)
          m_last_announces[msg->sys_name] = *msg;
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->req_id == m_dev_update_req_id) {
          if (msg->status == IridiumTxStatus::TXSTATUS_OK)
          {
            debug("Device Updates just got sent.");
            m_last_dev_update_time = Clock::get();
          }

          m_update_pool_empty =
          msg->status == IridiumTxStatus::TXSTATUS_OK
          || msg->status == IridiumTxStatus::TXSTATUS_EXPIRED;
        }

        if (msg->req_id == m_announce_req_id) {
          if (msg->status == IridiumTxStatus::TXSTATUS_OK)
          {
            debug("Announce just got sent.");
            m_last_announce_time = Clock::get();
          }

          m_announce_pool_empty =
          msg->status == IridiumTxStatus::TXSTATUS_OK
          || msg->status == IridiumTxStatus::TXSTATUS_EXPIRED;
        }
      }

      bool
      sendAnnounce(void)
      {
        if (!m_announce_pool_empty)
        {
          debug("won't send announce message because pool is not empty");
          return false;
        }

        debug("queuing announce");

        if (m_last_announces.find(getSystemName()) != m_last_announces.end())
        {
          Announce ann = m_last_announces[getSystemName()];

          std::stringstream ss;
          if (m_plan_state.state == IMC::PlanControlState::PCS_EXECUTING)
            ss << "P:" << m_plan_state.plan_id << " ";
          else
            ss << "P:n/a ";
          ss << "F:" << (int)m_fuel_state.value << "% ";
          if (m_vehicle_state.error_count > 0)
            ss << "E:" << m_vehicle_state.last_error;

          ann.services = ss.str();
          DUNE::IMC::ImcIridiumMessage irMsg(&ann);
          irMsg.source = getSystemId();
          irMsg.destination = 65535;
          uint8_t buffer[65535];
          int len = irMsg.serialize(buffer);

          DUNE::IMC::IridiumMsgTx m;
          m.data.assign(buffer, buffer + len);
          m.req_id = m_rnd->random() % 65535;
          m_announce_req_id = m.req_id;
          m.ttl = 60;
          m.setTimeStamp();
          dispatch(m);
          m_announce_pool_empty = false;
          return true;
        }
        else
          return false;
      }

      bool
      sendDeviceUpdates(void)
      {
        if (!m_update_pool_empty)
        {
          debug("won't send device updates message because pool is not empty");
          return false;
        }

        debug("queuing device updates");
        DUNE::IMC::DeviceUpdate msg;
        uint8_t buffer[65535];
        std::map<std::string, IMC::Announce>::iterator it;

        for (it = m_last_announces.begin(); it != m_last_announces.end(); it++)
        {
          DevicePosition pos;
          pos.id = it->second.getSource();
          pos.lat = it->second.lat;
          pos.lon = it->second.lon;
          pos.time = it->second.getTimeStamp();
          msg.positions.push_back(pos);

          spew("position to be sent: id:%d, lat: %f, lon: %f, time: %f", pos.id, pos.lat, pos.lon, pos.time);
        }
        m_last_announces.clear();

        msg.source = getSystemId();
        msg.destination = 0xFFFF;

        IMC::IridiumMsgTx m;
        int len = msg.serialize(buffer);
        m.data.assign(buffer, buffer + len);
        m.req_id = m_rnd->random() % 65535;
        m.ttl = 60;
        m.setTimeStamp();
        m_dev_update_req_id = m.req_id;
        dispatch(m);

        std::stringstream ss;
        m.toText(ss);
        spew("sent the following message: %s", ss.str().c_str());
        m_update_pool_empty = false;

        return true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          double now = Clock::get();
          if ((m_args.delay_between_device_updates > 0)
              && (now - m_last_dev_update_time) > m_args.delay_between_device_updates)
            sendDeviceUpdates();
          else
            debug("Will send device updates in %f seconds.", (now - m_last_dev_update_time)
                  - m_args.delay_between_device_updates);

          if ((m_args.delay_between_announces > 0)
              && (now - m_last_announce_time) > m_args.delay_between_announces)
            sendAnnounce();
          else
            debug("Will send announce in %f seconds.", (now - m_last_announce_time)
                  - m_args.delay_between_announces);

          Delay::wait(3.0);
        }
      }
    };
  }
}

DUNE_TASK
