//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins, Jose Pinto                                      *
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
