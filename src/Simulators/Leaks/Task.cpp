//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
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
      //! Leak set
      typedef std::vector<Entities::StatefulEntity*> LeakSet;
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
        if (m_leaks.size() > 0 && m_leaks.size() != m_args.leak_ents.size())
          throw std::runtime_error("attempted to change the number of reserved entities");
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < m_args.leak_ents.size(); ++i)
        {
          m_leaks.push_back(reserveEntity<Entities::StatefulEntity>(m_args.leak_ents[i]));
          m_leaks.back()->setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          spew("added entity %s", m_args.leak_ents[i].c_str());
        }
      }

      void
      onReportEntityState(void)
      {
        for (LeakSet::iterator itr = m_leaks.begin(); itr != m_leaks.end(); ++itr)
          (*itr)->reportState();
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
        IMC::EntityState::StateEnum state = ok ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_FAILURE;

        for (unsigned int i = 0; i < v.size(); ++i)
        {
          LeakSet::iterator itr = std::find(m_leaks.begin(), m_leaks.end(), v[i]);
          if (itr == m_leaks.end())
            continue;

          (*itr)->setState(state, std::string(ok ? DTR(Status::getString(Status::CODE_ACTIVE)) : DTR("leak detected")));
          debug("%s | %s", v[i].c_str(), (ok ? "ok" : "leak"));
          (*itr)->reportState();
        }
      }

      //! Set status for all leak sensors.
      //! @param[in] ok discrete state.
      void
      setStatus(bool ok)
      {
        IMC::EntityState::StateEnum state = ok ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_FAILURE;

        for (LeakSet::iterator itr = m_leaks.begin(); itr != m_leaks.end(); ++itr)
        {
          (*itr)->setState(state, ok ? DTR(Status::getString(Status::CODE_ACTIVE)) : DTR("leak detected"));
          debug("%s | %s", (*itr)->getLabel().c_str(), (ok ? "ok" : "leak"));
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
