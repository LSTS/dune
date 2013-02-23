//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace LogBook
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      // Convenience typedef.
      typedef CircularBuffer<IMC::LogBookEntry> LBEBuffer;
      // Size for logbook buffer.
      static const uint32_t c_logbook_sz = 128;
      // Size for error logbook buffer.
      static const uint32_t c_elogbook_sz = 32;
      // Start time.
      double m_start_time;
      // General logbook buffer.
      LBEBuffer m_logbook;
      // Error logbook buffer.
      LBEBuffer m_elogbook;
      // Reply message.
      IMC::LogBookControl m_reply;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_logbook(c_logbook_sz),
        m_elogbook(c_elogbook_sz)
      {
        m_reply.command = IMC::LogBookControl::LBC_REPLY;
        m_start_time = Time::Clock::getSinceEpoch();

        bind<IMC::LogBookEntry>(this);
        bind<IMC::LogBookControl>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::LogBookEntry* h)
      {
        m_logbook.add(*h);

        if (h->type != IMC::LogBookEntry::LBET_INFO)
          m_elogbook.add(*h);

        report(*h);
      }

      void
      consume(const IMC::LogBookControl* hc)
      {
        switch (hc->command)
        {
          case IMC::LogBookControl::LBC_GET:
            provide(hc->htime, m_logbook);
            break;
          case IMC::LogBookControl::LBC_GET_ERR:
            // @todo specialize
            provide(hc->htime, m_elogbook);
            break;
          case IMC::LogBookControl::LBC_CLEAR:
            m_logbook.clear();
            m_elogbook.clear();
            inf("cleared logbook");
            break;
          default:
            err("invalid or unsupported command");
            break;
        }
      }

      void
      provide(double since, LBEBuffer& b)
      {
        uint32_t count = 0;
        uint32_t n = b.getSize();
        int32_t pos;

        IMC::MessageList<LogBookEntry>* ml = &m_reply.msg;

        for (pos = n-1; pos >= 0; pos--) {
          if (b(pos).htime < since)
            break;
          ml->push_back(b(pos));
          count++;
        }

        trace("sending history since %s | %u out of %u messages reported",
            Time::Format::getTimeDate(since).c_str(), count, n);

        m_reply.setTimeStamp();
        m_reply.htime = Time::Clock::getSinceEpoch();
        dispatch(m_reply, DF_KEEP_TIME);
        m_reply.msg.clear();
      }

      void
      report(const IMC::LogBookEntry& h)
      {
        trace("%s | %d | %s | %s", Time::Format::getTimeDate(h.htime).c_str(),
              h.type, h.context.c_str(), h.text.c_str());
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
