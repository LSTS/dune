#ifndef LCB_FILTERS_TABLE_HPP_INCLUDED_
#define LCB_FILTERS_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// SQLite headers.
#include <sqlite3/sqlite3.h>

// Local headers.
#include "Filters/Filter.hpp"
#include "Filters/Factory.hpp"
#include "Definitions/Power.hpp"

namespace Transports
{
  namespace Leviathan
  {
    static const unsigned c_db_flush = 10000;
    static const uint8_t c_pulse_channel = 0xcc;
    static const uint8_t c_off_channel = 0xcf;

    class Table: public DUNE::Concurrency::Thread
    {
    public:
      Table(Tasks::Task* task, const Path& db_file):
        m_task(task),
        m_fsm_state(FSM_ST_ACQUIRE_TIME),
        m_pulse(0),
        m_sync(false),
        m_msec(-1),
        m_time_channel(0),
        m_db(NULL),
        m_db_file(db_file)
      {
        m_filters.resize(16, NULL);
        openDataBase();
      }

      ~Table(void)
      {
        closeDataBase();
      }

      void
      openDataBase(void)
      {
        sqlite3_open(m_db_file.c_str(), &m_db);
        sqlite3_exec(m_db, "BEGIN TRANSACTION", NULL, NULL, NULL);
      }

      void
      closeDataBase(void)
      {
        if (m_db != NULL)
        {
          m_task->inf("closing database");
          flushDataBase();

          for (size_t i = 0; i < m_filters.size(); ++i)
          {
            if (m_filters[i] != NULL)
            {
              m_filters[i]->dbSetActive(false);
              delete m_filters[i];
              m_filters[i] = NULL;
            }
          }

          sqlite3_close(m_db);
          m_db = NULL;
        }
      }

      void
      flushDataBase(void)
      {
        sqlite3_exec(m_db, "END TRANSACTION", NULL, NULL, NULL);
        sqlite3_exec(m_db, "BEGIN TRANSACTION", NULL, NULL, NULL);
        printCount();
      }

      void
      setTimeReferenceChannel(unsigned channel)
      {
        m_time_channel = channel;
      }

      void
      setFilter(unsigned index, const std::string& name)
      {
        m_filters[index] = Factory::create(name, m_db);
      }

      bool
      acquireTime(uint8_t channel, uint8_t byte)
      {
        if (channel != m_time_channel)
          return false;

        Filter* f = m_filters[channel];
        f->filter(0, byte);
        m_msec = f->getTime();
        if (m_msec < 0)
          return false;


        m_task->inf("time acquired %lld", m_msec);
        return true;
      }

      bool
      acquirePulse(uint8_t channel, uint8_t byte)
      {
        if (channel != c_pulse_channel)
          return false;

        if (byte != 0)
          return false;

        m_task->inf("pulse acquired");
        return true;
      }

      void
      streamPulse(uint8_t byte)
      {
        (void)byte;

        m_msec += 10;
        if ((m_msec % c_db_flush) == 0)
          flushDataBase();
      }

      void
      stream(uint8_t channel, uint8_t byte)
      {
        if (m_filters[channel] == NULL)
        {
          m_task->err("channel %u is not valid", channel);
          return;
        }

        m_filters[channel]->filter(m_msec, byte);
      }

      void
      sendPowerDownIP(void)
      {
        IMC::PowerOperation po;
        po.setDestination(m_task->getSystemId());
        po.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
        po.time_remain = 10;
        m_task->dispatch(po);
      }

      void
      filter(uint8_t byte)
      {
        if (!m_parser.parse(byte, m_frame))
          return;

        if (m_frame.getId() == 8)
        {
          uint8_t mode = m_frame.getPayload()[0];
          if (mode == PWR_MODE_OFF_IP && m_fsm_state != FSM_ST_IDLE)
            m_fsm_state = FSM_ST_CLOSE;
          return;
        }
        else if (m_frame.getId() != 1)
        {
          return;
        }

        uint8_t* payload = m_frame.getPayload();
        uint8_t pchannel = payload[0];
        uint8_t pbyte = payload[1];

        switch (m_fsm_state)
        {
          case FSM_ST_ACQUIRE_TIME:
            if (acquireTime(pchannel, pbyte))
              m_fsm_state = FSM_ST_ACQUIRE_PULSE;
            break;

          case FSM_ST_ACQUIRE_PULSE:
            if (acquirePulse(pchannel, pbyte))
            {
              dbSetActive(true);
              m_fsm_state = FSM_ST_STREAM;
            }
            break;

          case FSM_ST_STREAM:
            if (pchannel == c_pulse_channel)
              streamPulse(pbyte);
            else
              stream(pchannel, pbyte);
            break;

          case FSM_ST_CLOSE:
            m_task->war("turning off");
            closeDataBase();
            sendPowerDownIP();
            m_fsm_state = FSM_ST_IDLE;
            break;

          case FSM_ST_IDLE:
            break;
        }
      }

      void
      push(uint8_t byte)
      {
        m_queue.push(byte);
      }

      void
      dbSetActive(bool active)
      {
        m_task->inf("activating database");
        for (size_t i = 0; i < m_filters.size(); ++i)
        {
          if (m_filters[i] != NULL)
            m_filters[i]->dbSetActive(active);
        }
      }

      void
      run(void)
      {
        while (isRunning())
        {
          if (!m_queue.waitForItems(1.0))
            continue;

          uint8_t byte = m_queue.pop();
          filter(byte);
        }
      }

    private:
      enum State
      {
        FSM_ST_ACQUIRE_TIME,
        FSM_ST_ACQUIRE_PULSE,
        FSM_ST_STREAM,
        FSM_ST_CLOSE,
        FSM_ST_IDLE
      };

      Tasks::Task* m_task;
      State m_fsm_state;
      unsigned m_pulse;
      bool m_sync;
      //! Milliseconds since epoch.
      int64_t m_msec;
      DUNE::Hardware::UCTK::Frame m_frame;
      DUNE::Hardware::UCTK::Parser m_parser;
      DUNE::System::DynamicLoader m_loader;
      std::vector<Filter*> m_filters;
      DUNE::Concurrency::TSQueue<uint8_t> m_queue;

      //! Channel with absolute time reference.
      size_t m_time_channel;

      sqlite3* m_db;
      Path m_db_file;

      void
      printCount(void) const
      {
        std::string msg("frame count:");

        for (size_t i = 0; i < m_filters.size(); ++i)
        {
          if (m_filters[i] == NULL)
            continue;
          msg.append(String::str(" | % 2lu: % 8llu", i, m_filters[i]->getCount()));
        }

        msg.append(" |");
        m_task->inf("%s", msg.c_str());
      }
    };
  }
}


#endif
