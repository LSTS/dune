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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <vector>
#include <cstddef>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "GPIO.hpp"
#include "ParallelPort.hpp"
#include "Emulator.hpp"
#include "Message.hpp"

namespace UserInterfaces
{
  namespace LEDs
  {
    using DUNE_NAMESPACES;

    enum Patterns
    {
#define PATTERN(type, string)                   \
      type,
#include "Patterns.def"
      PAT_COUNT
    };

    struct Pattern
    {
      // Duration of pattern in milliseconds.
      std::vector<unsigned> durations;
      // LED states.
      std::vector<std::vector<bool> > states;
    };

    struct Arguments
    {
      //! Interface (GPIO, Parallel Port, Emulator).
      std::string interface;
      //! LED identifiers.
      std::vector<std::string> led_ids;
      //! Parallel base address.
      unsigned pp_addr;
      //! Start delay.
      double start_delay;
      //! Entities whose failures are critical.
      std::vector<std::string> critical;
    };

    struct Task: public Tasks::Task
    {
      // Output devices.
      std::vector<AbstractOutput*> m_outs;
      // Pattern map.
      std::vector<unsigned> m_patterns[PAT_COUNT];
      // Current pattern.
      std::vector<unsigned>* m_current;
      // Position in the pattern.
      unsigned m_cursor;
      // Current pattern id.
      uint8_t m_current_id;
      // Next pattern id.
      int m_next_id;
      //! Critical entities.
      std::set<unsigned> m_critical_eids;
      bool m_critical_error;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_current(NULL),
        m_cursor(0),
        m_current_id(PAT_NORMAL),
        m_next_id(-1),
        m_critical_error(false)
      {
        param("Interface", m_args.interface)
        .values("GPIO, Parallel Port, Emulator, Message")
        .defaultValue("GPIO");

        param("Parallel Port - Base Address", m_args.pp_addr)
        .defaultValue("0x378");

        param("Identifiers", m_args.led_ids)
        .defaultValue("")
        .description("List of LED identifiers (Names, GPIO number, etc)");

        param("Start Delay", m_args.start_delay)
        .units(Units::Second)
        .defaultValue("4.0")
        .description("Amount of time to wait before start blinking LEDs");

        param("Critical Entities", m_args.critical)
        .defaultValue("")
        .description("Entity names whose failures are considered critical");

#define PATTERN(type, string)                   \
        param(string, m_patterns[type])         \
        .defaultValue("");
#include "Patterns.def"

        // Register message listeners.
        bind<IMC::VehicleState>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::EntityState>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        std::vector<AbstractOutput*>::iterator itr = m_outs.begin();
        for (; itr != m_outs.end(); ++itr)
        {
          if (*itr != NULL)
            delete *itr;
        }

        m_outs.clear();
      }

      void
      onResourceAcquisition(void)
      {
        for (unsigned i = 0; i < m_args.led_ids.size(); ++i)
        {
          AbstractOutput* out = NULL;

          if (m_args.interface == "Message")
          {
            out = new Message(m_args.led_ids[i], *this);
          }
          else
          {
            unsigned nr = 0;
            if (!castLexical(m_args.led_ids[i], nr))
              throw std::runtime_error(String::str("invalid LED identifier '%s'",
                                                   m_args.led_ids[i].c_str()));

            if (m_args.interface.compare("GPIO") == 0)
              out = new GPIO(nr);
            else if (m_args.interface.compare("Parallel Port") == 0)
              out = new ParallelPort(m_args.pp_addr, nr);
            else if (m_args.interface.compare("Emulator") == 0)
              out = new Emulator(nr);
            else
              std::runtime_error(String::str("unsupported interface '%s'", m_args.interface.c_str()));
          }

          out->setValue(0);
          m_outs.push_back(out);
        }
      }

      void
      onEntityResolution(void)
      {
        for (unsigned i = 0; i < m_args.critical.size(); ++i)
        {
          try
          {
            unsigned eid = resolveEntity(m_args.critical[i]);
            m_critical_eids.insert(eid);
          }
          catch (...)
          { }
        }
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onUpdateParameters(void)
      {
#define PATTERN(type, string)                   \
        validatePattern(type, string);
#include "Patterns.def"

        m_current_id = PAT_NORMAL;
        m_current = &m_patterns[m_current_id];
      }

      void
      validatePattern(Patterns type, const std::string& label)
      {
        unsigned size = m_patterns[type].size();

        if (size == 0)
          throw std::runtime_error(String::str("pattern '%s' is invalid", label.c_str()));

        if ((size % (m_outs.size() + 1)) != 0)
          throw std::runtime_error(String::str("pattern '%s' is invalid", label.c_str()));
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->state != IMC::EntityState::ESTA_FAILURE)
          return;

        if (m_critical_eids.find(msg->getSourceEntity()) != m_critical_eids.end())
        {
          m_critical_error = true;
          m_next_id = PAT_ERROR_FATAL;
        }
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::PowerOperation::POP_PWR_DOWN_IP:
            m_next_id = PAT_SHUTDOWN;
            break;
          case IMC::PowerOperation::POP_PWR_DOWN_ABORTED:
            m_next_id = PAT_NORMAL;
            switchPattern();
            break;
        }
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (m_critical_error)
          return;

        // If system is shutting down don't update LEDs.
        if ((m_next_id == PAT_SHUTDOWN) || (m_current_id == PAT_SHUTDOWN))
          return;

        switch (msg->op_mode)
        {
          case IMC::VehicleState::VS_BOOT:
          case IMC::VehicleState::VS_ERROR:
            m_next_id = PAT_ERROR;
            break;
          case IMC::VehicleState::VS_CALIBRATION:
            m_next_id = PAT_PLAN_STARTING;
            break;
          case IMC::VehicleState::VS_MANEUVER:
          case IMC::VehicleState::VS_EXTERNAL:
            m_next_id = PAT_PLAN_EXECUTING;
            break;
          case IMC::VehicleState::VS_SERVICE:
            m_next_id = PAT_NORMAL;
            break;
        }
      }

      void
      setLEDs(bool state)
      {
        std::vector<AbstractOutput*>::iterator itr = m_outs.begin();
        for (; itr != m_outs.end(); ++itr)
          (*itr)->setValue(state);
      }

      void
      initializeLEDs(void)
      {
        Delay::wait(1.0);

        setLEDs(true);

        // Wait for vehicle state to settle.
        Counter<double> timer(m_args.start_delay);
        while (!stopping() && !timer.overflow())
          waitForMessages(timer.getRemaining());

        setLEDs(false);
        if (m_next_id < 0)
          m_next_id = PAT_NORMAL;

        switchPattern();
      }

      void
      switchPattern(void)
      {
        if (m_next_id >= 0)
        {
          m_current_id = (uint8_t)m_next_id;
          m_current = &m_patterns[m_current_id];
          m_next_id = -1;
        }
      }

      void
      onMain(void)
      {
        initializeLEDs();

        while (!stopping())
        {
          consumeMessages();

          for (unsigned i = 0; i < m_outs.size(); ++i)
          {
            m_outs[i]->setValue(m_current->at(m_cursor));
            ++m_cursor;
          }

          Delay::waitMsec(m_current->at(m_cursor));
          ++m_cursor;

          if (m_cursor == m_current->size())
          {
            switchPattern();
            m_cursor = 0;
          }
        }

        setLEDs(false);
      }
    };
  }
}

DUNE_TASK
