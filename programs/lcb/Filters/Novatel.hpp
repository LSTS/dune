//***************************************************************************
// Copyright (C) 2014 Laboratório de Sistemas e Tecnologia Subaquática      *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef LCB_FILTERS_NOVATEL_HPP_INCLUDED_
#define LCB_FILTERS_NOVATEL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Filter.hpp"

namespace LCB
{
  namespace Filters
  {
    //! Novatel CRC32 Polynomial.
    static const uint32_t c_novatel_crc_poly = 0xEDB88320UL;

    class Novatel: public Filter
    {
    public:
      Novatel(sqlite3* db):
        Filter(db),
        m_time(-1),
        m_fsm_state(NOV_FSM_SYNC0)
      {
        dbCreate("CREATE TABLE IF NOT EXISTS nvtl_time ("
                 "  time   UNSIGNED BIG INT NOT NULL,"
                 "  year   INTEGER NOT NULL,"
                 "  month  INTEGER NOT NULL,"
                 "  day    INTEGER NOT NULL,"
                 "  hour   INTEGER NOT NULL,"
                 "  minute INTEGER NOT NULL,"
                 "  second INTEGER NOT NULL,"
                 "  PRIMARY KEY(time)"
                 " )"
                 );

        dbPrepare("INSERT INTO nvtl_time VALUES(?,?,?,?,?,?,?)");

        dbCreate("CREATE TABLE IF NOT EXISTS nvtl_data ("
                 "  time   UNSIGNED BIG INT NOT NULL,"
                 "  data   BLOB NOT NULL,"
                 "  PRIMARY KEY(time)"
                 " )"
                 );

        std::string sql = "INSERT INTO nvtl_data VALUES(?, ?)";
        sqlite3_prepare_v2(db, sql.c_str(), sql.size() + 1, &m_data_ins, NULL);
      }

      int64_t
      getTime(void) const
      {
        return m_time;
      }

    private:
      //! GPS Reference Time Status.
      enum TimeStatus
      {
        //! Time has fine precision.
        NOV_TS_FINE = 160,
        //! Time is fine set and is being steered by the backup system.
        NOV_TS_FINE_BACKUP = 170,
        //! Time is fine set and is being steered.
        NOV_TS_FINE_STEERING = 180
      };

      enum MessageId
      {
        //! Time data.
        NOV_MSG_ID_TIME  = 0x65
      };

      //! Finite state machine states.
      enum FSMStates
      {
        NOV_FSM_SYNC0,
        NOV_FSM_SYNC1,
        NOV_FSM_SYNC2,
        NOV_FSM_HDR_LEN,
        NOV_FSM_HDR,
        NOV_FSM_MSG,
        NOV_FSM_CRC
      };

      struct Time
      {
        uint32_t clock_status;
        uint8_t offset[8];
        uint8_t offset_std[8];
        uint8_t utc_offset[8];
        uint32_t utc_year;
        uint8_t utc_month;
        uint8_t utc_day;
        uint8_t utc_hour;
        uint8_t utc_min;
        uint32_t utc_ms;
        uint32_t utc_status;
      };

      struct Header
      {
        uint16_t msg_id;
        uint8_t msg_type;
        uint8_t port_addr;
        uint16_t msg_len;
        uint16_t seq;
        uint8_t idle_time;
        uint8_t time_status;
        uint16_t week;
        uint32_t ms;
        uint32_t status;
        uint16_t reserved;
        uint16_t sw_version;
      };

      //!
      int64_t m_time;
      //! Payload.
      uint8_t m_payload[64];
      //!
      unsigned m_msec;

      //! Insert statement.
      sqlite3_stmt* m_data_ins;

      uint8_t m_fsm_state;
      uint8_t m_hdr_len;
      uint8_t m_hdr_idx;
      uint16_t m_msg_len;
      uint16_t m_msg_idx;
      uint8_t m_crc_idx;
      uint32_t m_mcrc;

      union
      {
        uint8_t raw[24];
        Header field;
      } m_hdr;

      union
      {
        uint8_t raw[4];
        uint32_t value;
      } m_crc;

      union
      {
        uint8_t raw[65536];
        Time time;
      } m_msg;

      bool
      doFilter(int64_t msec, uint8_t byte)
      {
        switch (m_fsm_state)
        {
          case NOV_FSM_SYNC0:
            if (byte == 0xAA)
            {
              m_msec = (msec / 1000) * 1000;
              m_hdr_len = 0;
              m_hdr_idx = 0;
              m_msg_idx = 0;
              m_msg_len = 0;
              m_crc_idx = 0;
              resetCRC32();
              updateCRC32(byte);
              m_fsm_state = NOV_FSM_SYNC1;
            }
            break;

          case NOV_FSM_SYNC1:
            updateCRC32(byte);
            if (byte == 0x44)
              m_fsm_state = NOV_FSM_SYNC2;
            break;

          case NOV_FSM_SYNC2:
            updateCRC32(byte);
            if (byte == 0x12)
              m_fsm_state = NOV_FSM_HDR_LEN;
            break;

          case NOV_FSM_HDR_LEN:
            updateCRC32(byte);
            m_hdr_len = byte - 4;
            m_fsm_state = NOV_FSM_HDR;
            break;

          case NOV_FSM_HDR:
            updateCRC32(byte);
            m_hdr.raw[m_hdr_idx++] = byte;
            if (m_hdr_idx == m_hdr_len)
            {
              m_msg_len = m_hdr.field.msg_len;
              if (m_msg_len > sizeof(m_msg.raw))
              {
                m_fsm_state = NOV_FSM_SYNC0;
                std::fprintf(stderr, "ERROR: novatel: message too big\n");
              }

              if (m_msg_len == 0)
                m_fsm_state = NOV_FSM_CRC;
              else
                m_fsm_state = NOV_FSM_MSG;
            }
            break;

          case NOV_FSM_MSG:
            updateCRC32(byte);
            m_msg.raw[m_msg_idx++] = byte;
            if (m_msg_idx == m_msg_len)
            {
              m_fsm_state = NOV_FSM_CRC;
            }
            break;

          case NOV_FSM_CRC:
            m_crc.raw[m_crc_idx++] = byte;
            if (m_crc_idx == 4)
            {
              m_fsm_state = NOV_FSM_SYNC0;

              if (m_mcrc != m_crc.value)
              {
                std::fprintf(stderr, "ERROR: novatel: invalid CRC %04X != %04X\n", m_mcrc, m_crc.value);
                std::fprintf(stderr, "novatel: message %u, length %u\n", m_hdr.field.msg_id, m_msg_len);
              }
              else
              {
                interpret();
                return true;
              }
            }
            break;
        }

        return false;
      }

      void
      resetCRC32(void)
      {
        m_mcrc = 0;
      }

      uint32_t
      computeCRC32(uint8_t byte)
      {
        uint32_t crc = byte;
        for (uint8_t i = 8; i > 0; --i)
        {
          if (crc & 1)
            crc = (crc >> 1) ^ c_novatel_crc_poly;
          else
            crc >>= 1;
        }

        return crc;
      }

      void
      updateCRC32(uint8_t byte)
      {
        m_mcrc = (m_mcrc >> 8) ^ computeCRC32(m_mcrc ^ byte);
      }

      bool
      timeIsFine(void)
      {
        uint8_t status = m_hdr.field.time_status;
        return (status == NOV_TS_FINE
                || status == NOV_TS_FINE_BACKUP
                || status == NOV_TS_FINE_STEERING);
      }

      void
      parseTime(void)
      {
        if (m_msg.time.utc_status == 1 && timeIsFine())
        {
          struct tm tm = {0};
          tm.tm_sec = m_msg.time.utc_ms / 1000;
          tm.tm_min = m_msg.time.utc_min;
          tm.tm_hour = m_msg.time.utc_hour;
          tm.tm_mday = m_msg.time.utc_day;
          tm.tm_mon = m_msg.time.utc_month - 1;
          tm.tm_year = m_msg.time.utc_year - 1900;
          m_time = mktime(&tm);
          m_time *= 1000;
        }

#if 0
        std::fprintf(stderr, "%u-%02u-%02u %02u:%02u:%02u (%u:%u)\r\n",
                     (uint16_t)m_msg.time.utc_year,
                     m_msg.time.utc_month,
                     m_msg.time.utc_day,
                     m_msg.time.utc_hour,
                     m_msg.time.utc_min,
                     (uint8_t)(m_msg.time.utc_ms / 1000),
                     m_hdr.field.time_status,
                     (uint8_t)m_msg.time.utc_status);
#endif

        if (dbIsActive())
        {
          dbBindInt64(1, m_msec);
          dbBindInt(2, m_msg.time.utc_year);
          dbBindInt(3, m_msg.time.utc_month);
          dbBindInt(4, m_msg.time.utc_day);
          dbBindInt(5, m_msg.time.utc_hour);
          dbBindInt(6, m_msg.time.utc_min);
          dbBindInt(7, m_msg.time.utc_ms / 1000);
          dbStep();
        }
      }

      void
      interpret(void)
      {
        if (m_hdr.field.msg_id == NOV_MSG_ID_TIME)
        {
          parseTime();
          return;
        }

        //std::fprintf(stderr, "novatel: message %u, length %u\n", m_hdr.field.msg_id, m_msg_len);

        if (dbIsActive())
        {
          sqlite3_bind_int64(m_data_ins, 1, m_msec);
          sqlite3_bind_blob(m_data_ins, 2, m_msg.raw, m_msg_len, SQLITE_TRANSIENT);
          sqlite3_step(m_data_ins);
          sqlite3_clear_bindings(m_data_ins);
          sqlite3_reset(m_data_ins);
        }
      }
    };
  }
}

#endif
