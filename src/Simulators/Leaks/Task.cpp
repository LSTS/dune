//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! %Leaks is responsible to simulate a leak sensor.
  //! A leak sensor signals DUNE that a leak is detected
  //! which is caused by an entry point in the vehicle hull.
  //!
  //! @author Eduardo Marques
  namespace Leaks
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      std::vector<std::string> leak_ents;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! Convenience typedef
      typedef std::map<std::string, IMC::EntityState> LeakSet;
      //! Leak set
      LeakSet m_leaks;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Leak Entities", m_args.leak_ents)
        .defaultValue("")
        .description("Names of leak entities to simulate");

        bind<IMC::LeakSimulation>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onUpdateParameters(void)
      {
        setStatus(m_args.leak_ents, true);
      }

      void
      onEntityReservation(void)
      {
        for (LeakSet::iterator itr = m_leaks.begin(); itr != m_leaks.end(); ++itr)
          itr->second.setSourceEntity(reserveEntity(itr->first));
      }

      void
      onReportEntityState(void)
      {
        for (LeakSet::iterator itr = m_leaks.begin(); itr != m_leaks.end(); ++itr)
          dispatch(itr->second);
      }

      void
      consume(const IMC::LeakSimulation* ls)
      {
        bool ok = ls->op == IMC::LeakSimulation::LSIM_OFF;

        if (ls->entities == "")
        {
          setStatus(ok);
        }
        else
        {
          std::vector<std::string> v;
          String::split(ls->entities, ",", v);
          setStatus(v, ok);
        }
      }

      //! Set status for leak sensors in a given vector.
      //! @param[in] v vector of leak sensors.
      //! @param[in] ok discrete state.
      void
      setStatus(const std::vector<std::string>& v, bool ok)
      {
        uint8_t state = ok ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_FAILURE;

        for (unsigned int i = 0; i < v.size(); ++i)
        {
          m_leaks[v[i]].state = state;
          m_leaks[v[i]].description = ok ? DTR(Status::getString(Status::CODE_ACTIVE)) : DTR("leak detected");
          debug("%s | %s", v[i].c_str(), (ok ? "ok" : "leak"));
        }
      }

      //! Set status for all leak sensors.
      //! @param[in] ok discrete state.
      void
      setStatus(bool ok)
      {
        uint8_t state = ok ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_FAILURE;

        for (LeakSet::iterator itr = m_leaks.begin(); itr != m_leaks.end(); ++itr)
        {
          itr->second.state = state;
          itr->second.description = ok ? DTR(Status::getString(Status::CODE_ACTIVE)) : DTR("leak detected");
          debug("%s | %s", itr->first.c_str(), (ok ? "ok" : "leak"));
        }
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
