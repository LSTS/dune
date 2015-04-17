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
// Author: Kristian Klausen                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include "DUNE/Control/BasicUAVAutopilot.hpp"

using namespace DUNE::Time;
using namespace DUNE::Utils;

namespace DUNE
{
  namespace Control
  {

    BasicUAVAutopilot::BasicUAVAutopilot(const std::string& name,
        Tasks::Context& ctx, const uint32_t controllable_loops,
        const uint32_t required_loops):
        Tasks::Task(name, ctx),
        m_aloops(0),
        m_controllable_loops(controllable_loops),
        m_required_loops(required_loops),
        m_scope_ref(0)
    {

      // Initialize entity state.
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

      // Register handler routines.
      bind<IMC::EstimatedState>(this);
      bind<IMC::ControlLoops>(this);
    }

    BasicUAVAutopilot::~BasicUAVAutopilot()
    {   }

    void
    BasicUAVAutopilot::onResourceInitialization(void)
    {
      requestDeactivation();
    }

    void
    BasicUAVAutopilot::reset(void)
    {
    }

    void
    BasicUAVAutopilot::consume(const IMC::EstimatedState* msg)
    {
      if (!isActive())
        return;

      m_estate = *msg;

      // Compute time delta.
      float timestep = m_last_estate.getDelta();

      // Check if we have a valid time delta.
      if (timestep < 0.0)
        return;

      onEstimatedState(timestep, msg);
    }

    void
    BasicUAVAutopilot::consume(const IMC::ControlLoops* msg)
    {
      uint32_t loops = msg->mask & m_controllable_loops;

      if (!loops)
        return;

      // If this scope is obsolete, ignore message
      if (msg->scope_ref < m_scope_ref)
        return;

      m_scope_ref = msg->scope_ref;

      bool was_active = isActive();

      if (msg->enable)
      {
        if (!isActive())
        {
          requestActivation();
          m_aloops = 0;
        }
        m_aloops |= loops;
      }
      else
      {
        m_aloops &= ~loops;

        if (!m_aloops)
          requestDeactivation();
      }

      if (was_active != isActive())
      {
        debug("%s", isActive() ? "enabling" : "disabling");

        if (msg->enable)
        {
          requestActivation();

          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = m_required_loops;
          cloops.scope_ref = m_scope_ref;
          dispatch(cloops);
        }
        else
        {
          requestDeactivation();
        }
      }
    }

    void
    BasicUAVAutopilot::onMain(void)
    {
      while (!stopping())
      {
        waitForMessages(1.0);
      }
    }

  }
}
