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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
# include <DUNE/DUNE.hpp>
# include "IridiumMessageDefinitions.hpp"
# include <DUNE/Math/Random.hpp>

namespace Transports
{
  namespace Iridium
  {
    using DUNE_NAMESPACES;
    struct Arguments
    {
      // Delay between announcements.
      double delay_between_device_updates;

      // Destination to send all iridium messages
      std::string iridium_destination;

    };

    struct Task : public DUNE::Tasks::Task
    {
      std::map<std::string, IMC::Announce> m_last_announces;
      double m_last_dev_update_time;
      bool m_update_pool_empty;
      int m_dev_update_req_id;
      Random::Generator* m_rnd;
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx), m_last_dev_update_time(Clock::get()), m_update_pool_empty(
              true), m_dev_update_req_id(10), m_rnd(NULL)
      {
        param("Delay between announce update messages",
              m_args.delay_between_device_updates).units(Units::Second).defaultValue(
            "10").description(
            "Delay between announce update messages. 0 for no updates being sent.");

        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::Announce>(this);
        bind<IMC::IridiumTxStatus>(this);
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
      handleIridiumCommand(IridiumCommand * irCmd)
      {
        IMC::TextMessage tm;
        inf("received this command via Iridium: %s.", irCmd->command.c_str());

        tm.text = irCmd->command;
        tm.origin = "Iridium";
        tm.setSource(irCmd->source);
        dispatch(tm);
      }

      void
      handleDeviceUpdate(DeviceUpdate * devUpt)
      {
        std::vector<DevicePosition>::iterator it;
        it = devUpt->positions.begin();
        inf("received Iridium device update with %u updates.",
            devUpt->positions.size());
        for (; it != devUpt->positions.end(); it++)
        {
          DevicePosition p = *it;
          int selector = (p.id & 0xE0) >> 4;

          IMC::RemoteSensorInfo sensorInfo;
          sensorInfo.alt = -1;
          sensorInfo.lat = p.lat;
          sensorInfo.lon = p.lon;
          sensorInfo.heading = 0;
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

          std::stringstream ss;
          ss << sensorInfo.sensor_class << "_" << p.id;
          sensorInfo.id = ss.str();
          dispatch(sensorInfo);
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage * m = IridiumMessage::deserialize(msg);

        if (m == NULL)
        {
          war("Error while parsing Iridium message.");
          return;
        }

        switch (m->msg_id)
        {
          case (ID_ACTIVATESUB):
            war("Received an Iridium subscription request. WTF?");
            break;
          case (ID_DEACTIVATESUB):
            war("Received an Iridium subscription end request. WTF?");
            break;
          case (ID_IRIDIUMCMD):
            handleIridiumCommand(dynamic_cast<IridiumCommand *>(m));
            break;
          case (ID_DEVICEUPDATE):
            handleDeviceUpdate(dynamic_cast<DeviceUpdate *>(m));
            break;
          default:
            GenericIridiumMessage * irMsg =
                dynamic_cast<GenericIridiumMessage *>(m);
            dispatch(irMsg->msg);
            break;
        }
        delete m;
      }

      void
      consume(const IMC::Announce* msg)
      {
        m_last_announces[msg->sys_name] = *msg;
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->req_id == m_dev_update_req_id)
          m_update_pool_empty = msg->status == IridiumTxStatus::TXSTATUS_OK
              || msg->status == IridiumTxStatus::TXSTATUS_ERROR;
      }

      bool
      send_device_updates()
      {

        if (!m_update_pool_empty)
        {
          return false;
        }
        inf("sending device updates");
        DeviceUpdate msg;
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
        }
        m_last_announces.clear();

        DUNE::IMC::IridiumMsgTx * m = new DUNE::IMC::IridiumMsgTx();
        int len = msg.serialize(buffer);
        m->data.assign(buffer, buffer + len);
        m->req_id = m_rnd->random() % 65535;
        m->setTimeStamp();
        //TODO set time to live accordingly
        m_dev_update_req_id = m->req_id;
        dispatch(m);
        m_update_pool_empty = false;

        return true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (m_args.delay_between_device_updates > 0)
          {
            double now = Clock::get();
            if ((now - m_last_dev_update_time)
                > m_args.delay_between_device_updates)
            {
              if (send_device_updates())
                m_last_dev_update_time = now;
            }
          }
          Delay::wait(1.0);
        }
      }
    };
  }
}

DUNE_TASK
