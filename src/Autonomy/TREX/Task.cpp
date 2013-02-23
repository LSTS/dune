//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins, Jose Pinto                                      *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  //! %TREX is responsible to interact with MBARI's T-REX
  namespace TREX
  {
    using DUNE_NAMESPACES;

    //! %Task arguments
    struct Arguments
    {
      //! T-REX IMC identifier.
      unsigned trex_id;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Announce cache.
      std::map<unsigned int, IMC::Announce> lastAnnounces;
      //! HeartBeat cache.
      std::map<unsigned int, double> lastHeartBeat;
      //! Mutex for accessing announces map.
      DUNE::Concurrency::Mutex m_mutex;
      //! Task arguments.
      Arguments m_args;
      //! Last HeartBeat.
      double m_last_heartbeat;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_last_heartbeat(Time::Clock::get())
      {
        param("TREX ID", m_args.trex_id)
        .defaultValue("65000");

        // Register consumers.
        bind<IMC::Announce>(this);
        bind<IMC::Heartbeat>(this);
      }

      void
      onReportEntityState(void)
      {
        double latency = Time::Clock::get() - m_last_heartbeat;

        if (latency > 10)
        {
          std::stringstream sstm;
          sstm << String::str(DTR("TREX disconnected for more than %d seconds"), (int)latency);
          setEntityState(IMC::EntityState::ESTA_ERROR, sstm.str());
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() == m_args.trex_id)
        {
          m_last_heartbeat = Time::Clock::get();
        }

        if (lastAnnounces.count(msg->getSource()))
        {
          lastHeartBeat[msg->getSource()] = Time::Clock::get();
        }
      }

      void
      consume(const IMC::Announce* msg)
      {
        // new connection
        if (!lastAnnounces.count(msg->getSource()))
        {
          lastHeartBeat[msg->getSource()] = Time::Clock::get();
        }
        m_mutex.lock();
        lastAnnounces[msg->getSource()] = *msg;
        m_mutex.unlock();
      }

      void
      onMain(void)
      {
        std::map<unsigned int, double>::iterator it;
        std::map<unsigned int, double> oldMap;
        double lastTest = Time::Clock::get();
        while (!stopping())
        {
          consumeMessages();
          oldMap.clear();
          oldMap.insert(lastHeartBeat.begin(), lastHeartBeat.end());
          double now = Clock::get();

          if (now - lastTest > 10.0)
          {
            for (it = oldMap.begin(); it != oldMap.end(); it++)
            {
              // disconnected
              if (now - it->second > 20.0)
              {
                lastHeartBeat.erase(it->first);
                lastAnnounces.erase(it->first);
              }
            }
          }

          IMC::VehicleLinks links;
          links.localname = getSystemName();

          if (lastAnnounces.size())
          {
            m_mutex.lock();
            std::map<unsigned int, IMC::Announce>::iterator i;
            for (i = lastAnnounces.begin(); i != lastAnnounces.end(); i++)
              links.links.push_back(&i->second);
            m_mutex.unlock();
          }

          dispatch(links);

          Delay::wait(1.0);
        }
      }
    };
  }
}

DUNE_TASK
