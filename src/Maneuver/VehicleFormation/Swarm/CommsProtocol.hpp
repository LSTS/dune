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

#ifndef MANEUVER_VEHICLEFORMATION_SWARM_COMMSPROTOCOL_HPP_INCLUDED_
#define MANEUVER_VEHICLEFORMATION_SWARM_COMMSPROTOCOL_HPP_INCLUDED_

#include <DUNE/Tasks.hpp>
#include <DUNE/Utils/String.hpp>

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      //! Takeoff maneuver
      class CommsProtocol
      {
      public:
        //! Default constructor.
        CommsProtocol(DUNE::Tasks::Task* task, std::string prot_name, uint8_t sync, uint8_t poly = 0x07):
          m_task(task),
          m_protocol_name(prot_name),
          m_sync(sync),
          m_poly(poly)
        { }

        virtual ~CommsProtocol() = default;

        enum Codes
        {
          CODE_ACK          = 0x00,
          CODE_READY        = 0x01,
          CODE_LEADER       = 0x02,
          CODE_START        = 0x03,
          CODE_POS          = 0x04,
          CODE_PARTICIPANT  = 0x05
        };

        struct PositionPackage
        {
          uint8_t waypoint_idx;
          float lat;
          float lon;
          float speed;
        };

        struct ParticipantPackage
        {
          uint16_t vid; // Vehicle ID.
          float off_x;
          float off_y;
          float off_z;
        };

        void
        sendParticipant(const std::string& sys, const uint16_t vid, const float off_x, const float off_y, const float off_z)
        {
          std::vector<uint8_t> data;

          ParticipantPackage part;
          part.vid = vid;
          part.off_x = off_x;
          part.off_y = off_y;
          part.off_z = off_z;

          data.resize(sizeof(part) + 1);
          data[0] = CODE_PARTICIPANT;
          std::memcpy(&data[1], &part, sizeof(part));

          send(sys, data);
        }

        void
        sendPos(const std::string& sys, const uint8_t waypoint_index, const float lat, const float lon, const float speed)
        {
          std::vector<uint8_t> data;

          PositionPackage p;
          p.waypoint_idx = waypoint_index;
          p.lat = lat;
          p.lon = lon;
          p.speed = speed;

          data.resize(sizeof(p) + 1);
          data[0] = CODE_POS;
          std::memcpy(&data[1], &p, sizeof(p));

          send(sys, data);
        }

        void
        sendAck(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_ACK);
          send(sys, data);
        }

        void
        sendReady(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_READY);
          send(sys, data);
        }

        void
        sendLeader(const std::string& sys)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_LEADER);
          send(sys, data);
        }

        void
        sendStart(const std::string& sys, const double sync_time)
        {
          std::vector<uint8_t> data;
          data.resize(sizeof(double) + 1);
          data[0] = CODE_START;
          std::memcpy(&data[1], &sync_time, sizeof(double));
          
          send(sys, data);
        }

        virtual void
        send(const std::string& sys, const std::vector<uint8_t>& data) = 0;

      protected:
        //! parent task.
        DUNE::Tasks::Task* m_task;
        //! Protocol name.
        std::string m_protocol_name;
        // Synchronization byte.
        uint8_t m_sync;
        uint8_t m_poly;

        void
        debug(const std::string& msg) const
        {
          m_task->debug("[%s] >> %s", m_protocol_name.c_str(), msg.c_str());
        }

        void
        trace(const std::string& msg) const
        {
          m_task->trace("[%s] >> %s", m_protocol_name.c_str(), msg.c_str());
        }

        void
        spew(const std::string& msg) const
        {
          m_task->spew("[%s] >> %s", m_protocol_name.c_str(), msg.c_str());
        }

        void
        war(const std::string& msg) const
        {
          m_task->war("[%s] >> %s", m_protocol_name.c_str(), msg.c_str());
        }

        void
        err(const std::string& msg) const
        {
          m_task->err("[%s] >> %s", m_protocol_name.c_str(), msg.c_str());
        }
      };
    }
  }
}

#endif