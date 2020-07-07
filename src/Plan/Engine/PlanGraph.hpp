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

#ifndef PLAN_ENGINE_PLAN_GRAPH_HPP_INCLUDED_
#define PLAN_ENGINE_PLAN_GRAPH_HPP_INCLUDED_

// C++ standard library headers.
#include <algorithm>
#include <stdexcept>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC.hpp>

namespace Plan
{
  namespace Engine
  {
    //! Graph of a parsed plan
    class PlanGraph
    {
    public:
      //! Exception for plan parsing errors
      struct PlanParseError : public std::runtime_error
      {
        PlanParseError(const std::string& label)
        : std::runtime_error(DTR("parse error: ") + label)
        {
        }
      };

      //! Constructor.
      //! Parse a PlanSpecification message into a maneuver graph.
      PlanGraph(DUNE::IMC::PlanSpecification const&);

      ~PlanGraph(void) {}

      //! Graph node (a maneuver and its outgoing transitions)
      struct Node
      {
        //! Pointer to a plan maneuver
        DUNE::IMC::PlanManeuver* pman;
        //! Vector of pointers to plan transitions
        std::vector<DUNE::IMC::PlanTransition*> transitions;
      };

      //! Get this plan's ID.
      std::string const&
      getId(void) const noexcept
      {
        return m_spec.plan_id;
      }

      //! Get the node corresponding to the starting maneuver.
      Node const*
      getStartNode(void) const noexcept
      {
        return m_start_node;
      }

      //! Find the node with a given maneuver ID.
      Node const*
      findNode(std::string const& id) const noexcept
      {
        auto node = std::find_if(std::cbegin(m_nodes), std::cend(m_nodes),
                                 [id](Node const& n) {
                                   return n.pman->maneuver_id == id;
                                 });

        if (node == m_nodes.end())
          return nullptr;

        return &(*node);
      }

      //! Get a pointer to the PlanSpecification message from which this plan
      //! was parsed.
      DUNE::IMC::PlanSpecification const*
      getSpec(void) const noexcept
      {
        return &m_spec;
      }

      using const_iterator = std::vector<Node>::const_iterator;

      const_iterator
      begin(void) const noexcept
      {
        return std::cbegin(m_nodes);
      }

      const_iterator
      end(void) const noexcept
      {
        return std::cend(m_nodes);
      }

    private:
      //! Plan specification message.
      DUNE::IMC::PlanSpecification m_spec;
      //! Node containing the starting maneuver.
      Node* m_start_node;
      //! List of nodes.
      std::vector<Node> m_nodes;
    };
  } // namespace Engine
} // namespace Plan

#endif
