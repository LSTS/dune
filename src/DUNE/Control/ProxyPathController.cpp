//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.

// DUNE headers.
#include <DUNE/Control/SurrogatePathController.hpp>

using namespace DUNE::Tasks;
using namespace DUNE::IMC;

namespace DUNE
{
  namespace Control
  {
    SurrogatePathController::SurrogatePathController(std::string name, Tasks::Context& ctx):
      DUNE::Control::PathController(name, ctx),
      m_stateFilter(NULL)
    {
      param("EstimatedState Filter", m_state_src)
      .defaultValue("")
      .description("List of <System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass EstimatedState messages.");
    }

    SurrogatePathController::~SurrogatePathController(void)
    { }

    void
    SurrogatePathController::onEntityResolution(void)
    {
      PathController::onEntityResolution();

      //! Process the systems and entities allowed to pass the EstimatedState
      m_stateFilter = new SourceFilter(*this, m_state_src, "EstimatedState");
    }

    bool
    SurrogatePathController::sourceFilter(const IMC::EstimatedState* es)
    {
      // Allow only EstimatedState from the same vehicle.
      // 'True' if the message is NOT allowed to pass.
      return !m_stateFilter->match(es);
    }
  }
}
