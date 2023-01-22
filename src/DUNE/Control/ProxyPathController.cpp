//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/Control/ProxyPathController.hpp>

namespace DUNE
{
  namespace Control
  {
    using namespace Tasks;
    using namespace IMC;

    ProxyPathController::ProxyPathController(const std::string& name, Tasks::Context& ctx):
      Control::PathController(name, ctx),
      m_state_filter(NULL)
    {
      param("EstimatedState Filter", m_state_src)
      .defaultValue("self")
      .description("List of <System>+<System> that defines the source"
                   " systems allowed to pass EstimatedState messages");
    }

    ProxyPathController::~ProxyPathController(void)
    {
      Memory::clear(m_state_filter);
    }

    void
    ProxyPathController::onEntityResolution(void)
    {
      PathController::onEntityResolution();

      // Process the systems allowed to pass the EstimatedState
      m_state_filter = new SourceFilter(*this, true, m_state_src, "EstimatedState");
    }

    bool
    ProxyPathController::sourceFilter(const IMC::EstimatedState* es)
    {
      // Allow only EstimatedState from the same vehicle.
      // 'True' if the message is NOT allowed to pass.
      return !m_state_filter->match(es);
    }
  }
}
