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
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_VEHICLEFORMATION_SWARM_ACOUSTICPROTOCOL_HPP_INCLUDED_
#define MANEUVER_VEHICLEFORMATION_SWARM_ACOUSTICPROTOCOL_HPP_INCLUDED_

#include <DUNE/Tasks.hpp>
#include <DUNE/Utils/String.hpp>

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      // Synchronization byte.
      static const uint8_t c_sync = 0xA2;
      static const uint8_t c_poly = 0x07;

      enum Codes
      {
        CODE_ACK    = 0x00,
        CODE_READY  = 0x01,
        CODE_LEADER = 0x02,
        CODE_SETUP  = 0x03,
        CODE_NEXT   = 0x04,
        CODE_POS    = 0x05
      };

      struct Point
      {
        float heading;
        float lat;
        float lon;
      };

      struct Setup
      {
        uint8_t formation_id;
        float offset_x;
        float offset_y;
        float offset_z;
      };

      //! Takeoff maneuver
      class AcousticProtocol
      {
      public:
        //! Default constructor.
        AcousticProtocol(DUNE::Tasks::Task* task):
          m_task(task)
        { }

        void
        sendPos(const std::string& sys, const float heading, const float lat, const float lon)
        {
          std::vector<uint8_t> data;

          Point p;
          p.heading = heading;
          p.lat = lat;
          p.lon = lon;

          data.resize(sizeof(p) + 1);
          data[0] = CODE_POS;
          std::memcpy(&data[1], &p, sizeof(p));

          sendFrame(sys, 0, data, false);
        }

        void
        sendNext(const std::string& sys, const float heading, const float lat, const float lon)
        {
          std::vector<uint8_t> data;

          Point p;
          p.heading = heading;
          p.lat = lat;
          p.lon = lon;

          data.resize(sizeof(p) + 1);
          data[0] = CODE_NEXT;
          std::memcpy(&data[1], &p, sizeof(p));

          sendFrame(sys, 0, data, false);
        }

        void
        sendSetup(const std::string& sys, const uint8_t formation_id, 
                  const float offset_x, const float offset_y, const float offset_z)
        {
          std::vector<uint8_t> data;

          Setup setup;
          setup.formation_id = formation_id;
          setup.offset_x = offset_x;
          setup.offset_y = offset_y;
          setup.offset_z = offset_z;

          data.resize(sizeof(setup) + 1);
          data[0] = CODE_SETUP;
          std::memcpy(&data[1], &setup, sizeof(setup));

          sendFrame(sys, 0, data, false);
        }

        void
        sendAck(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_ACK);
          sendFrame(sys, 0, data, false);
        }

        void
        sendReady(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_READY);
          sendFrame(sys, 0, data, false);
        }

        void
        sendLeader(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_LEADER);
          sendFrame(sys, 0, data, false);
        }

        void
        sendFrame(const std::string& sys, const uint16_t id, const std::vector<uint8_t>& data, bool ack)
        {
          DUNE::Algorithms::CRC8 crc(c_poly);

          DUNE::IMC::UamTxFrame frame;
          frame.setSource(m_task->getSystemId());
          frame.setSourceEntity(m_task->getEntityId());
          frame.setDestination(m_task->getSystemId());
          frame.sys_dst = sys;
          frame.seq = id;
          frame.flags = ack ? DUNE::IMC::UamTxFrame::UTF_ACK : 0;

          frame.data.push_back(c_sync);
          crc.putByte(c_sync);
          for (size_t i = 0; i < data.size(); ++i)
          {
            frame.data.push_back(data[i]);
            crc.putByte(data[i]);
          }
          frame.data.push_back(crc.get());

          m_task->dispatch(frame);
        }

        bool
        validate(const DUNE::IMC::UamRxFrame* msg)
        {
          if (msg->data.size() < 2)
          {
            debug("invalid message size");
            return false;
          }

          uint16_t imc_addr_src = 0;
          try
          {
            imc_addr_src = m_task->resolveSystemName(msg->sys_src);
          }
          catch (...)
          {
            debug(DUNE::Utils::String::str("unknown system name: %s", msg->sys_src.c_str()));
            return false;
          }

          (void)imc_addr_src;

          uint16_t imc_addr_dst = 0;
          try
          {
            imc_addr_dst = m_task->resolveSystemName(msg->sys_dst);
          }
          catch (...)
          {
            debug(DUNE::Utils::String::str("unknown system name: %s", msg->sys_dst.c_str()));
            return false;
          }

          // (void)imc_addr_dst;

          if ((uint8_t)msg->data[0] != c_sync)
          {
            debug(DUNE::Utils::String::str("invalid synchronization number: %02X", msg->data[0]));
            return false;
          }

          DUNE::Algorithms::CRC8 crc(c_poly);
          crc.putArray((uint8_t*)&msg->data[0], msg->data.size() - 1);
          if (crc.get() != (uint8_t)(msg->data[msg->data.size() - 1]))
          {
            debug("invalid CRC");
            return false;
          }

          return (msg->sys_dst == "broadcast" || imc_addr_dst == m_task->getSystemId());
        }

      private:
        DUNE::Tasks::Task* m_task;

        void
        debug(const std::string& msg) const
        {
          m_task->debug("[AcousticProtocol] >> %s", msg.c_str());
        }

        void
        war(const std::string& msg) const
        {
          m_task->war("[AcousticProtocol] >> %s", msg.c_str());
        }
      };
    }
  }
}

#endif