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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLAN_ENGINE_PLAN_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_PLAN_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Plans.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Plan;

    //! Plan Specification parser
    class Plan
    {
    public:
      //! Graph nodes (a maneuver and its outgoing transitions)
      struct Node
      {
        //! Pointer to a plan maneuver
        IMC::PlanManeuver* pman;
        //! Vector of pointers to plan transitions
        std::vector<IMC::PlanTransition*> trans;
      };

      //! Mapping between maneuver IDs and graph nodes
      typedef std::map<std::string, Node> PlanMap;
      //! Mapping between maneuver IDs and point durations
      typedef std::map< std::string, std::vector<float> > ManeuverDuration;

      //! Iterator
      typedef std::vector<IMC::PlanManeuver*>::const_iterator const_iterator;

      //! Default constructor.
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] compute_progress true if progress should be computed
      Plan(const IMC::PlanSpecification* spec, bool compute_progress,
           float speed_rpm_factor, float speed_act_factor):
        m_spec(spec),
        m_curr_node(NULL),
        m_sequential(false),
        m_compute_progress(compute_progress),
        m_progress(0.0)
      {
        m_speed_conv.rpm_factor = speed_rpm_factor;
        m_speed_conv.act_factor = speed_act_factor;
      }

      //! No speed conversion constructor
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] compute_progress true if progress should be computed
      Plan(const IMC::PlanSpecification* spec, bool compute_progress)
      {
        *this = Plan(spec, compute_progress, 0.0, 0.0);
      }

      //! Reset data
      void
      clear(void)
      {
        m_graph.clear();
        m_seq_nodes.clear();
        m_sequential = false;
        m_durations.clear();
        m_progress = -1.0;
      }

      //! Parse a given plan
      //! @param[in] supported_maneuvers list of supported maneuvers
      //! @param[out] desc description of the failure if any
      //! @param[in] state pointer to EstimatedState message
      //! @return true if was able to parse the plan
      bool
      parse(const std::set<uint16_t>* supported_maneuvers, std::string& desc,
            const IMC::EstimatedState* state = NULL)
      {
        bool start_maneuver_ok = false;

        clear();

        if (!m_spec->maneuvers.size())
        {
          desc = m_spec->plan_id + DTR(": no maneuvers");
          return false;
        }

        IMC::MessageList<IMC::PlanManeuver>::const_iterator mitr = m_spec->maneuvers.begin();

        // parse maneuvers and transitions
        do
        {
          if (*mitr == NULL)
          {
            ++mitr;
            continue;
          }

          if ((*mitr)->data.isNull())
          {
            desc = (*mitr)->maneuver_id + DTR(": actual maneuver not specified");
            return false;
          }

          const IMC::Message* m = (*mitr)->data.get();

          if (supported_maneuvers->find(m->getId()) == supported_maneuvers->end())
          {
            desc = (*mitr)->maneuver_id + DTR(" maneuver is not supported");
            return false;
          }

          if ((*mitr)->maneuver_id == m_spec->start_man_id)
            start_maneuver_ok = true;

          Node node;
          bool matched = false;

          node.pman = (*mitr);

          IMC::MessageList<IMC::PlanTransition>::const_iterator tritr;
          tritr = m_spec->transitions.begin();

          for (; tritr != m_spec->transitions.end(); ++tritr)
          {
            if (*tritr == NULL)
              continue;

            if ((*tritr)->dest_man == (*mitr)->maneuver_id)
              matched = true;

            if ((*tritr)->source_man == (*mitr)->maneuver_id)
              node.trans.push_back((*tritr));
          }

          // if a match was not found and this is not the start maneuver
          if (!matched && ((*mitr)->maneuver_id != m_spec->start_man_id))
          {
            desc = (*mitr)->maneuver_id + DTR(": maneuver has no incoming transition and is not the initial maneuver");
            return false;
          }

          m_graph[(*mitr)->maneuver_id] = node;
          ++mitr;
        }
        while (mitr != m_spec->maneuvers.end());

        if (!start_maneuver_ok)
        {
          desc = m_spec->start_man_id + DTR(": invalid start maneuver");
          return false;
        }

        if (m_compute_progress)
        {
          sequenceNodes();

          if (m_sequential && state != NULL)
            computeDurations(state);
        }

        m_last_id = m_spec->start_man_id;

        return true;
      }

      //! Check if plan has been completed
      //! @return true if plan is done
      bool
      isDone(void) const
      {
        // FIXME: we are only fetching a single transition and not all of them

        if (m_curr_node == NULL)
          return false;
        else if (!m_curr_node->trans.size())
          return true;
        else if (m_curr_node->trans[0]->dest_man == "_done_")
          return true;
        else
          return false;
      }

      //! Get start maneuver message
      //! @return NULL if start maneuver id is invalid
      IMC::PlanManeuver*
      loadStartManeuver(void)
      {
        m_last_id = m_spec->start_man_id;

        return loadManeuverFromId(m_last_id);
      }

      //! Get next maneuver message
      //! @return NULL if maneuver id is invalid
      IMC::PlanManeuver*
      loadNextManeuver(void)
      {
        m_last_id = m_curr_node->trans[0]->dest_man;

        return loadManeuverFromId(m_last_id);
      }

      //! Get current maneuver id
      //! @return current id string
      inline std::string
      getCurrentId(void) const
      {
        return m_last_id;
      }

      //! Get total duration of the plan
      //! @return total duration of plan
      float
      getTotalDuration(void) const
      {
        if (!m_sequential || !m_durations.size())
          return -1.0;

        ManeuverDuration::const_iterator itr = m_durations.find(m_seq_nodes.back()->maneuver_id);

        if (itr == m_durations.end())
          return -1.0;

        return itr->second.back();
      }

      //! Get current plan progress
      //! @param[in] mcs pointer to maneuver control state message
      //! @return progress in percent (-1.0 if unable to compute)
      float
      getProgress(const IMC::ManeuverControlState* mcs)
      {
        (void)mcs;

        if (!m_compute_progress)
          return -1.0;

        // Compute only if sequential and durations exists
        if (!m_sequential || !m_durations.size())
          return -1.0;

        // If it's not executing, do not compute
        if (mcs->state != IMC::ManeuverControlState::MCS_EXECUTING ||
            mcs->eta == 0)
          return m_progress;

        float total_duration = getTotalDuration();

        ManeuverDuration::const_iterator itr = m_durations.find(getCurrentId());

        // If not found
        if (itr == m_durations.end())
          return -1.0;

        // If durations for this maneuver is empty
        if (!itr->second.size())
          return -1.0;

        IMC::Message* man = m_graph.find(getCurrentId())->second.pman->data.get();

        // Get progress
        float prog = PlanProgress::compute(man, mcs, itr->second, total_duration);

        // If negative, then unable to compute
        // But keep last value of progress if it is not invalid
        if (prog < 0.0)
        {
          if (m_progress < 0.0)
            return -1.0;
          else
            return m_progress;
        }

        // Never output shorter than previous
        m_progress = prog > m_progress ? prog : m_progress;

        return m_progress;
      }

      //! Retrieve the number of elements in sequential list.
      //! @return number of elements in the list.
      size_t
      size(void) const
      {
        if (m_sequential)
          return m_seq_nodes.size();
        else
          return 0;
      }

      //! Return an iterator referring to the first element in the
      //! list container.
      //! @return iterator.
      const_iterator
      begin(void) const
      {
        if (m_sequential)
          return m_seq_nodes.begin();
        else
          return m_seq_nodes.end();
      }

      //! Returns an iterator referring to the past-the-end element in
      //! the list container.
      //! @return iterator.
      const_iterator
      end(void) const
      {
        return m_seq_nodes.end();
      }

    private:
      //! Check if a maneuver exists in the sequential nodes
      //! @param[in] id string id of the maneuver
      //! @return true if it already exists in the seq nodes vector
      bool
      maneuverExists(const std::string id) const
      {
        std::vector<IMC::PlanManeuver*>::const_iterator itr = m_seq_nodes.begin();

        for (; itr != m_seq_nodes.end(); ++itr)
          if (!(*itr)->maneuver_id.compare(id))
            return true;

        return false;
      }

      //! Sequence plan nodes if possible
      void
      sequenceNodes(void)
      {
        PlanMap::iterator itr = m_graph.find(m_spec->start_man_id);

        while (true)
        {
          m_seq_nodes.push_back(itr->second.pman);

          if (!itr->second.trans.size())
            break;
          else if (itr->second.trans[0]->dest_man == "_done_")
            break;

          // Check if plan is cyclical
          if (maneuverExists(itr->second.trans[0]->dest_man))
          {
            m_sequential = false;
            return;
          }

          itr = m_graph.find(itr->second.trans[0]->dest_man);
        }

        m_sequential = true;
      }

      //! Compute durations of each point in the plan
      //! @param[in] pointer to estimated state message
      void
      computeDurations(const IMC::EstimatedState* state)
      {
        PlanDuration::parse(m_seq_nodes, state, m_durations, m_speed_conv);
      }

      //! Get maneuver from id
      //! @param[in] id name of the maneuver to load
      //! @return NULL if maneuver id is invalid
      inline IMC::PlanManeuver*
      loadManeuverFromId(const std::string id)
      {
        PlanMap::iterator itr = m_graph.find(id);

        if (itr == m_graph.end())
        {
          return NULL;
        }
        else
        {
          m_curr_node = &itr->second;
          return m_curr_node->pman;
        }
      }

      //! Pointer to plan specification
      const IMC::PlanSpecification* m_spec;
      //! Plan graph of maneuvers and transitions
      PlanMap m_graph;
      //! Pointer to current node
      Node* m_curr_node;
      //! Last maneuver id
      std::string m_last_id;
      //! True if plan is sequential
      bool m_sequential;
      //! Whether or not to compute plan's progress
      bool m_compute_progress;
      //! Current progress if any
      float m_progress;
      //! Vector of message pointers to cycle through (sequential) plan
      std::vector<IMC::PlanManeuver*> m_seq_nodes;
      //! Maneuver durations
      ManeuverDuration m_durations;
      //! Speed conversion factors for plan duration
      PlanDuration::SpeedConversion m_speed_conv;
    };
  }
}

#endif
