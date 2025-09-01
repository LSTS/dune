//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef TRANSPORTS_JANUS_PARSER_HPP_INCLUDED_
#define TRANSPORTS_JANUS_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Janus
  {
    using DUNE_NAMESPACES;
    
    class Parser 
    {
    public:
      Parser(Tasks::Task* task, uint8_t version = 0x03):
        m_version(version),
        m_task(task)
      {
        computeTRSVTable();
        computeTRPTTable();
      }

      ~Parser() = default;

      // Deserialize the baseline packet.
      void
      deserializeBaseline(const std::vector<char>& data, IMC::UamJanusPacket& packet)
      {
        
        m_task->spew("Received Janus baseline packet: %s", String::toHex(data).c_str());

        // Check message size
        if (data.size() < c_baseline_size)
          throw std::runtime_error(String::str("invalid baseline packet size: %zu", data.size()));

        // Check CRC
        Algorithms::CRC8 crc(c_poly);
        crc.putArray((uint8_t*)&data[0], c_baseline_size - 1);
        if (crc.get() != (uint8_t)(data[c_baseline_size - 1]))
          throw std::runtime_error(String::str("invalid baseline packet CRC: %02x != %02x", (uint8_t)data[c_baseline_size - 1], crc.get()));

        // Deserialize the baseline packet.
        RecvJanusBaseline baseline;
        baseline.version             = data[0] >> 4;
        baseline.mobility            = (data[0] & 0b00001000) >> 3;
        baseline.schedule            = (data[0] & 0b00000100) >> 2;
        baseline.tx_rx               = (data[0] & 0b00000010) >> 1;
        baseline.forward             = data[0] & 0b00000001;
        baseline.user_class_id       = data[1];
        baseline.application_type    = data[2] >> 2;
        baseline.adb[0]              = data[2] & 0b00000011;
        for (uint8_t i = 1; i < 5; ++i)
          baseline.adb[i]            = data[2+i];
        baseline.crc                 = data[7];

        m_task->spew("Deserialized Janus baseline packet: version=%d, mobility=%d, "
                     "schedule=%d, tx_rx=%d, forward=%d, user_class_id=%d, "
                     "application_type=%d, adb=[%02x %02x %02x %02x %02x], "
                     "crc=%02x",
            baseline.version,
            baseline.mobility,
            baseline.schedule,
            baseline.tx_rx,
            baseline.forward,
            baseline.user_class_id,
            baseline.application_type,
            baseline.adb[0],
            baseline.adb[1],
            baseline.adb[2],
            baseline.adb[3],
            baseline.adb[4],
            baseline.crc);

        
        packet.clear();
        packet.op = IMC::UamJanusPacket::OP_BASELINE_RECV;
        packet.baseline_flags |= baseline.mobility ? IMC::UamJanusPacket::JANUSBL_MOBILE : 0;
        // Use schedule
        if (baseline.schedule)
        {
          // Check first 8 bits of ADB (Ignore first 6 bits of array).
          uint8_t schedule = (baseline.adb[0] & 0b00000011) << 6;
          schedule |= (baseline.adb[1] >> 2);

          if (schedule & 0b10000000)
          {
            packet.baseline_flags |= IMC::UamJanusPacket::JANUSBL_REPEAT_INTERVAL;
            // Compute repeat interval
            packet.time = trptIndexToMs(schedule & 0b01111111);
          }
          else
          {
            packet.baseline_flags |= IMC::UamJanusPacket::JANUSBL_RESERVATION_TIME;
            // Compute reservation time
            packet.time = trsvIndexToMs(schedule & 0b01111111);
          }
        }
        packet.baseline_flags |= baseline.tx_rx ? IMC::UamJanusPacket::JANUSBL_DECODE_CAPABILITY : 0;
        packet.baseline_flags |= baseline.forward ? IMC::UamJanusPacket::JANUSBL_FORWARD_CAPABILITY : 0;
        packet.class_user_id = baseline.user_class_id;
        packet.application_type = baseline.application_type;
        packet.adb.assign((char*)&baseline.adb[0], (char*)&baseline.adb[4]);
        // packet.error.clear();
      }

      // Serialize the baseline packet.
      void
      serializeBaseline(const IMC::UamJanusPacket& packet, std::vector<char>& data)
      {
        data.resize(c_baseline_size);

        // Version
        data[0] |= m_version << 4;
        // Mobility
        data[0] |= packet.baseline_flags & IMC::UamJanusPacket::JANUSBL_MOBILE ? 0b00001000 : 0;
        // Schedule
        if ((packet.baseline_flags & IMC::UamJanusPacket::JANUSBL_REPEAT_INTERVAL) ||
            (packet.baseline_flags & IMC::UamJanusPacket::JANUSBL_RESERVATION_TIME))
          data[0] |= 0b00000100;
        // Tx/Rx
        data[0] |= packet.baseline_flags & IMC::UamJanusPacket::JANUSBL_DECODE_CAPABILITY ? 0b00000010 : 0;
        // Forward
        data[0] |= packet.baseline_flags & IMC::UamJanusPacket::JANUSBL_FORWARD_CAPABILITY ? 0b00000001 : 0;

        // User Class Id
        data[1] = packet.class_user_id;

        // Application Type
        data[2] = (packet.application_type << 2);
        // ADB
        data[2] |= (packet.adb[0] & 0b00000011);
        for (uint8_t i = 1; i < 5; ++i)
          data[2+i] = packet.adb[i];

        // CRC
        Algorithms::CRC8 crc(c_poly);
        crc.putArray((uint8_t*)&data[0], 7);
        data[7] = crc.get();
      }


      //! Convert index of reserve time to milliseconds.
      //! @param[in] i index.
      //! @return time in milliseconds.
      double 
      trsvIndexToMs(const uint8_t i) const
      {
        if (i > c_max_index)
          return m_trsv_table[c_max_index];
        return m_trsv_table[i];
      }

      //! Convert index of repeat interval to milliseconds.
      //! @param[in] i index.
      //! @return time in seconds.
      double 
      trptIndexToMs(const uint8_t i) const
      {
        if (i > c_max_index)
          return m_trpt_table[c_max_index];
        return m_trpt_table[i];
      }
      
    private:
      //! Polynomial used for CRC8.
      const uint8_t c_poly = 0x07;
      //! Baseline size
      const uint8_t c_baseline_size = 8;
      //! Protocol version.
      uint8_t m_version;

      //! Maximum index for TRSV and TRPT tables.
      const uint8_t c_max_index = 127;
      //! Transmission rate for TRSV table (reservation time).
      const double c_trsv_rate = 1.1;
      //! Transmission rate for TRPT table (repeat interval).
      const double c_trpt_rate = 1.176769793407883;
      //! Transmission rate table for TRSV (reservation time).
      std::vector<double> m_trsv_table;
      //! Transmission rate table for TRPT (repeat interval).
      std::vector<double> m_trpt_table;

      //! Owener task.
      Tasks::Task* m_task;

      //! Structure to hold Janus baseline packet received.
      struct RecvJanusBaseline 
      {
        RecvJanusBaseline(void):
          version(0),
          mobility(false),
          schedule(false),
          tx_rx(false),
          forward(false),
          user_class_id(0),
          application_type(0),
          crc(0)
        {
          memset(adb, 0, sizeof(adb));
        }

        uint8_t version;            // 4 bits
        bool mobility;              // 1 bit
        bool schedule;              // 1 bit
        bool tx_rx;                 // 1 bit
        bool forward;               // 1 bit
        uint8_t user_class_id;      // 8 bits
        uint8_t application_type;   // 6 bits (Ignore first 2 bits)
        uint8_t adb[5];             // 34 bits (Ignore first 6 bits)
        uint8_t crc;                // 8 bits
      };

      //! Compute TRSV and TRPT tables.
      void 
      computeTRSVTable()
      {
        m_trsv_table.resize(c_max_index + 1);
        m_trsv_table[0] = 0.0033211;
    
        for (int i = 1; i <= c_max_index; ++i) 
        {
          switch (i) 
          {
            case 60: m_trsv_table[i] = 1; break;
            case 84: m_trsv_table[i] = 10; break;
            case 103: m_trsv_table[i] = 60; break;
            case 127: m_trsv_table[i] = 600; break;
            default:
              m_trsv_table[i] = m_trsv_table[i - 1] * c_trsv_rate;
          }
        }
      }

      void 
      computeTRPTTable()
      {
        m_trpt_table.resize(c_max_index + 1);
        m_trpt_table[0] = 0.0033211;
    
        for (int i = 1; i <= c_max_index; ++i) 
        {
          switch (i) 
          {
            case 21: m_trpt_table[i] = 1; break;
            case 35: m_trpt_table[i] = 10; break;
            case 46: m_trpt_table[i] = 60; break;
            case 71: m_trpt_table[i] = 3600; break;
            case 91: m_trpt_table[i] = 86400; break;
            case 127: m_trpt_table[i] = 31557600; break;
            default:
              m_trpt_table[i] = m_trpt_table[i - 1] * c_trpt_rate;
          }
        }
      }
    };
  }
}

#endif
