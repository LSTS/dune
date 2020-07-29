//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Aguiar                                                    *
// Author: Pedro Calado (original implementation)                           *
//***************************************************************************

#include "PlanGraph.hpp"

using namespace DUNE;

namespace Plan
{
  namespace Engine
  {
    PlanGraph::PlanGraph(IMC::PlanSpecification const& spec)
    : m_spec(spec), m_start_node(nullptr), m_nodes()
    {
      bool start_maneuver_ok = false;

      if (!m_spec.maneuvers.size())
        throw PlanParseError(m_spec.plan_id + DTR(": no maneuvers"));

      m_nodes.reserve(m_spec.maneuvers.size());

      for (auto plan_maneuver : m_spec.maneuvers)
      {
        // parse maneuvers and transitions
        if (!plan_maneuver)
          continue;

        if (plan_maneuver->data.isNull())
          throw PlanParseError(plan_maneuver->maneuver_id
                               + DTR(": actual maneuver not m_specified"));

        Node node{ plan_maneuver, "_done_" };
        bool has_parent = false;

        for (auto transition : m_spec.transitions)
        {
          if (!transition)
            continue;

          if (transition->dest_man == plan_maneuver->maneuver_id)
            has_parent = true;

          if (transition->source_man == plan_maneuver->maneuver_id)
            node.next = transition->dest_man;
        }

        if (!has_parent && (plan_maneuver->maneuver_id != m_spec.start_man_id))
          throw PlanParseError(plan_maneuver->maneuver_id
                               + DTR(": maneuver has no incoming transition"
                                     " and it's not the initial maneuver"));

        m_nodes.push_back(std::move(node));

        if (plan_maneuver->maneuver_id == m_spec.start_man_id)
        {
          m_start_node = &m_nodes.back();
          start_maneuver_ok = true;
        }
      }

      if (!start_maneuver_ok)
        throw PlanParseError(m_spec.start_man_id
                             + DTR(": invalid start maneuver"));
    }
  } // namespace Engine
} // namespace Plan
