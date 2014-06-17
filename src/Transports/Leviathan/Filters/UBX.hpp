//***************************************************************************
// Copyright (C) 2014 Laboratório de Sistemas e Tecnologia Subaquática      *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef LCB_FILTERS_UBX_HPP_INCLUDED_
#define LCB_FILTERS_UBX_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Filter.hpp"

namespace Transports
{
  namespace Leviathan
  {
    class UBX: public Filter
    {
    public:
      UBX(sqlite3* db):
        Filter(db),
        m_time(-1),
        m_fsm_state(UBX_FSM_SYNC0)
      {
        dbCreate("CREATE TABLE IF NOT EXISTS ubx ("
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

        dbPrepare("INSERT INTO ubx VALUES(?,?,?,?,?,?,?)");
      }

      int64_t
      getTime(void) const
      {
        return m_time;
      }

    private:
      //! Finite state machine states.
      enum FSMStates
      {
        UBX_FSM_SYNC0,
        UBX_FSM_SYNC1,
        UBX_FSM_CLASS,
        UBX_FSM_ID,
        UBX_FSM_LENGTH0,
        UBX_FSM_LENGTH1,
        UBX_FSM_PAYLOAD,
        UBX_FSM_CK_A,
        UBX_FSM_CK_B
      };

      enum MessageIds
      {
        //! UTC Time Solution.
        UBX_NAV_TIMEUTC = 0x21
      };

      struct NavTimeUTC
      {
        uint32_t itow;
        int32_t nano;
        uint32_t tacc;
        uint16_t year;
        uint8_t month;
        uint8_t day;
        uint8_t hour;
        uint8_t min;
        uint8_t sec;
        uint8_t valid;
      };

      //!
      int64_t m_time;
      //! Current finite state machine state.
      uint8_t m_fsm_state;
      //! Checksum A.
      uint8_t m_ck_a;
      //! Checksum B.
      uint8_t m_ck_b;
      //! Class of current packet.
      uint8_t m_class;
      //! Id of current packet.
      uint8_t m_id;
      //! Current payload index.
      uint16_t m_payload_idx;
      //! Length of current payload.
      uint16_t m_payload_size;
      //! Payload.
      uint8_t m_payload[64];
      //!
      unsigned m_msec;

      bool
      doFilter(int64_t msec, uint8_t byte)
      {
        switch (m_fsm_state)
        {
          case UBX_FSM_SYNC0:
            if (byte == 0xb5)
            {
              m_msec = (msec / 1000) * 1000;
              m_fsm_state = UBX_FSM_SYNC1;
            }
            break;

          case UBX_FSM_SYNC1:
            if (byte == 0x62)
              m_fsm_state = UBX_FSM_CLASS;
            else
              m_fsm_state = UBX_FSM_SYNC0;
            break;

          case UBX_FSM_CLASS:
            m_ck_a = byte;
            m_ck_b = byte;
            m_class = byte;
            m_fsm_state = UBX_FSM_ID;
            break;

          case UBX_FSM_ID:
            m_ck_a += byte;
            m_ck_b += m_ck_a;
            m_id = byte;
            m_fsm_state = UBX_FSM_LENGTH0;
            break;

          case UBX_FSM_LENGTH0:
            m_ck_a += byte;
            m_ck_b += m_ck_a;
            m_payload_size = byte;
            m_fsm_state = UBX_FSM_LENGTH1;
            break;

          case UBX_FSM_LENGTH1:
            m_ck_a += byte;
            m_ck_b += m_ck_a;
            m_payload_idx = 0;
            m_payload_size |= byte << 8;
            if (m_payload_size > sizeof(m_payload))
              m_fsm_state = UBX_FSM_SYNC0;
            else
              m_fsm_state = UBX_FSM_PAYLOAD;
            break;

          case UBX_FSM_PAYLOAD:
            m_ck_a += byte;
            m_ck_b += m_ck_a;
            m_payload[m_payload_idx++] = byte;
            if (m_payload_idx == m_payload_size)
              m_fsm_state = UBX_FSM_CK_A;
            break;

          case UBX_FSM_CK_A:
            if (m_ck_a == byte)
            {
              m_fsm_state = UBX_FSM_CK_B;
            }
            else
            {
              m_fsm_state = UBX_FSM_SYNC0;
            }
            break;

          case UBX_FSM_CK_B:
            m_fsm_state = UBX_FSM_SYNC0;
            if (m_ck_b == byte)
              return interpret();
            else
              std::fprintf(stderr, "ERROR: UBX: invalid checksum.\n");
            break;
        }

        return false;
      }

      bool
      interpret(void)
      {
        if (m_id != UBX_NAV_TIMEUTC)
          return false;

        NavTimeUTC msg;
        uint8_t* ptr = m_payload;
        ptr += ByteCopy::fromLE(msg.itow, ptr);
        ptr += ByteCopy::fromLE(msg.nano, ptr);
        ptr += ByteCopy::fromLE(msg.tacc, ptr);
        ptr += ByteCopy::fromLE(msg.year, ptr);
        ptr += ByteCopy::fromLE(msg.month, ptr);
        ptr += ByteCopy::fromLE(msg.day, ptr);
        ptr += ByteCopy::fromLE(msg.hour, ptr);
        ptr += ByteCopy::fromLE(msg.min, ptr);
        ptr += ByteCopy::fromLE(msg.sec, ptr);
        ptr += ByteCopy::fromLE(msg.valid, ptr);

        std::fprintf(stderr, "UTC %02u-%02u-%02u %02u:%02u:%02u %02X\n",
                     msg.year,
                     msg.month,
                     msg.day,
                     msg.hour,
                     msg.min,
                     msg.sec,
                     msg.valid
                     );

        if (msg.valid)
        {
          std::cerr << "VALID" << std::endl;
          struct tm tm = {0};
          tm.tm_sec = msg.sec;
          tm.tm_min = msg.min;
          tm.tm_hour = msg.hour;
          tm.tm_mday = msg.day;
          tm.tm_mon = msg.month - 1;
          tm.tm_year = msg.year - 1900;
          m_time = mktime(&tm);
          m_time *= 1000;
        }

        if (dbIsActive())
        {
          dbBindInt64(1, m_msec);
          dbBindInt(2, msg.year);
          dbBindInt(3, msg.month);
          dbBindInt(4, msg.day);
          dbBindInt(5, msg.hour);
          dbBindInt(6, msg.min);
          dbBindInt(7, msg.sec);
          dbStep();
        }

        return true;
      }
    };
  }
}

#endif
