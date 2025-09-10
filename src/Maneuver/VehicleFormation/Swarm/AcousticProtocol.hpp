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

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Utils/String.hpp>

// Local headers.
#include "CommsProtocol.hpp"
namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      class AcousticProtocol: public CommsProtocol
      {
      public:
        //! Default constructor.
        AcousticProtocol(DUNE::Tasks::Task* task):
          CommsProtocol(task, "AcousticProtocol", 0xA2),
          m_sync_time(-1),
          m_max_slots(-1),
          m_slot(-1),
          m_time_per_slot(-1)
        { }

        void
        send(const std::string& sys, const std::vector<uint8_t>& data) override
        {
          // TDMA
          // if (!available())
          // {
          //   spew("Not available to send data, not in time slot");
          //   return;
          // }

          DUNE::Algorithms::CRC8 crc(m_poly);

          DUNE::IMC::UamTxFrame frame;
          frame.setSource(m_task->getSystemId());
          frame.setSourceEntity(m_task->getEntityId());
          frame.setDestination(m_task->getSystemId());
          frame.sys_dst = sys;
          frame.seq = 0;
          frame.flags = 0;

          frame.data.push_back(m_sync);
          crc.putByte(m_sync);
          for (size_t i = 0; i < data.size(); ++i)
          {
            frame.data.push_back(data[i]);
            crc.putByte(data[i]);
          }
          frame.data.push_back(crc.get());

          // Debug
          // if (m_task->getDebugLevel() >= DUNE::Tasks::DebugLevel::DEBUG_LEVEL_SPEW)
          // {
          //   std::vector<uint8_t> serialized_data(frame.data.begin(), frame.data.end());
          //   spew(DUNE::Utils::String::str("Sending message: %s",
          //                                 DUNE::Utils::String::bytesToHex(serialized_data).c_str()));
          // }

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

          if ((uint8_t)msg->data[0] != m_sync)
          {
            debug(DUNE::Utils::String::str("invalid synchronization number: %02X", msg->data[0]));
            return false;
          }

          DUNE::Algorithms::CRC8 crc(m_poly);
          crc.putArray((uint8_t*)&msg->data[0], msg->data.size() - 1);
          if (crc.get() != (uint8_t)(msg->data[msg->data.size() - 1]))
          {
            debug("invalid CRC");
            return false;
          }

          return (msg->sys_dst == "broadcast" || imc_addr_dst == m_task->getSystemId());
        }

        void
        setSyncTime(const double sync_time)
        {
          m_sync_time = sync_time;
          m_slot_start = m_sync_time + m_slot * m_time_per_slot;
          trace(DUNE::Utils::String::str("SYNC time set: %f", m_sync_time));
        }

        void
        resetSyncTime()
        {
          m_sync_time = -1;
        }

        double
        getSyncTime()
        {
          return m_sync_time;
        }

        void
        setMaxSlots(const int max_slots)
        {
          m_max_slots = max_slots;
          trace(DUNE::Utils::String::str("Max slots set: %d", m_max_slots));
        }

        void
        resetMaxSlots()
        {
          m_max_slots = -1;
        }

        int
        getMaxSlots()
        {
          return m_max_slots;
        }

        void
        resetSlot()
        {
          m_slot = -1;
        }

        void
        setSlot(const int slot)
        {
          m_slot = slot;
          trace(DUNE::Utils::String::str("Slot set: %d", m_slot));
        }

        void
        setTimePerSlot(const double time_per_slot)
        {
          m_time_per_slot = time_per_slot;
          trace(DUNE::Utils::String::str("Time per slot set: %f", m_time_per_slot));
        }

        void
        resetTimePerSlot()
        {
          m_time_per_slot = -1;
        }

        double
        getTimePerSlot()
        {
          return m_time_per_slot;
        }

        bool
        isTimeSlotConfigured()
        {
          return m_sync_time >= 0 && m_max_slots >= 0 && m_slot >= 0 && m_time_per_slot >= 0;
        }

        bool
        available()
        {
          double now = DUNE::Time::Clock::getSinceEpoch();

          if (!isTimeSlotConfigured())
            return false;

          return m_slot_start <= now && now < m_slot_start + m_time_per_slot;
        }

        void
        run()
        {
          if (!isTimeSlotConfigured())
            return;
          
          double now = DUNE::Time::Clock::getSinceEpoch();
          if (now > m_slot_start + m_time_per_slot)
            m_slot_start += m_max_slots * m_time_per_slot;
        }

      private:
        double m_sync_time;
        double m_slot_start;
        int m_max_slots;
        int m_slot;
        double m_time_per_slot;
      };
    }
  }
}

#endif