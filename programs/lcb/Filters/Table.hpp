#ifndef LCB_FILTERS_TABLE_HPP_INCLUDED_
#define LCB_FILTERS_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// SQLite headers.
#include <sqlite3/sqlite3.h>

// Local headers.
#include "Filter.hpp"
#include "Factory.hpp"

namespace LCB
{
  namespace Filters
  {
    static const unsigned c_db_flush = 10000;
    static const uint8_t c_pulse_channel = 0xcc;

    class Table: public DUNE::Concurrency::Thread
    {
    public:
      Table(const std::string& config):
        m_fsm_state(FSM_ST_ACQUIRE_TIME),
        m_pulse(0),
        m_sync(false),
        m_msec(-1),
        m_time_channel(0)
      {
        m_filters.resize(16, NULL);

        sqlite3_open("lcb.db", &m_db);

        m_config.parseFile(config.c_str());

        std::string time_channel = m_config.get("Filters", "Time Reference");
        if (!castLexical(time_channel, m_time_channel))
          throw std::runtime_error("invalid time reference channel");

        for (size_t i = 0; i < m_filters.size(); ++i)
        {
          std::string name = m_config.get("Filters", String::str("Channel %u", i));
          if (name.empty())
            continue;

          setFilter(i, name);
        }

        sqlite3_exec(m_db, "BEGIN TRANSACTION", NULL, NULL, NULL);
      }

      void
      setFilter(unsigned index, const std::string& name)
      {
        m_filters[index] = Factory::create(name, m_db);
      }

      void
      flushTransaction(void)
      {
        std::fprintf(stderr, "----- DB FLUSH -----\n");
        sqlite3_exec(m_db, "END TRANSACTION", NULL, NULL, NULL);
        sqlite3_exec(m_db, "BEGIN TRANSACTION", NULL, NULL, NULL);
      }

      bool
      acquireTime(uint8_t channel, uint8_t byte)
      {
        if (channel != m_time_channel)
          return false;

        Filter* filter = m_filters[channel];
        filter->filter(0, byte);
        m_msec = filter->getTime();
        if (m_msec < 0)
          return false;

        std::fprintf(stderr, "Time acquired: %lld\n", m_msec);
        return true;
      }

      bool
      acquirePulse(uint8_t channel, uint8_t byte)
      {
        if (channel != c_pulse_channel)
          return false;

        if (byte != 0)
          return false;

        std::fprintf(stderr, "Pulse acquired\n");
        return true;
      }

      void
      streamPulse(uint8_t byte)
      {
        m_msec += 10;
        if ((m_msec % c_db_flush) == 0)
          flushTransaction();
      }

      void
      stream(uint8_t channel, uint8_t byte)
      {
        if (m_filters[channel] == NULL)
          return;

        m_filters[channel]->filter(m_msec, byte);
      }

      void
      filter(uint8_t byte)
      {
        if (!m_parser.parse(byte, m_frame))
          return;

        if (m_frame.getId() != 1)
          return;

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
        std::cerr << "Activating database" << std::endl;
        for (size_t i = 0; i < m_filters.size(); ++i)
        {
          if (m_filters[i] != NULL)
            m_filters[i]->dbSetActive(active);
        }
      }

      void
      run(void)
      {
        while (true)
        {
          if (!m_queue.waitForItems())
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
        FSM_ST_STREAM
      };

      State m_fsm_state;
      unsigned m_pulse;
      //! Milliseconds since epoch.
      int64_t m_msec;
      bool m_sync;
      DUNE::Hardware::UCTK::Frame m_frame;
      DUNE::Hardware::UCTK::Parser m_parser;
      DUNE::System::DynamicLoader m_loader;
      DUNE::Parsers::Config m_config;
      std::vector<Filter*> m_filters;
      DUNE::Concurrency::TSQueue<uint8_t> m_queue;

      //! Channel with absolute time reference.
      size_t m_time_channel;

      sqlite3* m_db;
    };
  }
}


#endif
