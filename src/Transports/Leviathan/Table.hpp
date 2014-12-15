#ifndef LCB_FILTERS_TABLE_HPP_INCLUDED_
#define LCB_FILTERS_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Filters/Filter.hpp"
#include "Filters/Factory.hpp"
#include "Definitions/Power.hpp"

namespace Transports
{
  namespace Leviathan
  {
    static const unsigned c_db_flush = 10000;
    static const unsigned c_log_switch = 10 * c_db_flush;
    static const uint8_t c_pulse_channel = 0xcc;
    static const uint8_t c_off_channel = 0xcf;

    class Table: public DUNE::Concurrency::Thread
    {
    public:
      Table(Tasks::Task* task, const Path& log_folder):
        m_task(task),
        m_fsm_state(FSM_ST_ACQUIRE_TIME),
        m_pulse(0),
        m_sync(false),
        m_msec(-1),
        m_time_channel(0),
        m_log_folder(log_folder),
        m_bin_ofs(NULL)
      {
        m_filters.resize(16, NULL);

        m_log_tmp = log_folder / "tmp";
        try
        {
          m_log_tmp.remove(Path::MODE_RECURSIVE);
        }
        catch (...)
        { }

        m_log_tmp.create();
      }

      ~Table(void)
      {
        flushLog();
      }

      void
      openLog(void)
      {
        std::string name(String::str("%lld.gz", m_msec));
        m_log_file_tmp = m_log_tmp / name ;
        m_log_file = m_log_folder / name;
        m_bin_ofs = new Compression::FileOutput(m_log_file_tmp.c_str(), Compression::METHOD_GZIP);
        m_task->inf("opened log: %s", m_log_file_tmp.c_str());
      }

      void
      flushLog(void)
      {
        if (m_bin_ofs == NULL)
          return;

        if ((m_msec % c_log_switch) == 0)
        {
          closeLog();
          openLog();
        }

        printCount();
      }

      void
      closeLog(void)
      {
        if (m_bin_ofs == NULL)
          return;

        Memory::clear(m_bin_ofs);
        std::rename(m_log_file_tmp.c_str(), m_log_file.c_str());
        m_task->inf("closed log: %s", m_log_file_tmp.c_str());
      }

      void
      setTimeReferenceChannel(unsigned channel)
      {
        m_time_channel = channel;
      }

      void
      setFilter(unsigned index, const std::string& name)
      {
        m_filters[index] = Factory::create(name);
      }

      bool
      acquireTime(uint8_t channel, uint8_t byte)
      {
        if (channel != m_time_channel)
          return false;

        Filter* f = m_filters[channel];
        f->filter(0, byte, m_bin_ofs);
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
          flushLog();
      }

      void
      stream(uint8_t channel, uint8_t byte)
      {
        if (m_filters[channel] == NULL)
        {
          m_task->err("channel %u is not valid", channel);
          return;
        }

        m_filters[channel]->filter(m_msec, byte, m_bin_ofs);
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
              openLog();
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
            closeLog();
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

      Path m_log_file_tmp;
      Path m_log_file;
      Path m_log_folder;
      Path m_log_tmp;

      std::ostream* m_bin_ofs;

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
