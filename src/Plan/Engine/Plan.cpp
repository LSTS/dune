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
// Author: Pedro Calado                                                     *
//***************************************************************************

// Local headers.
#include "Plan.hpp"

namespace Plan
{
  namespace Engine
  {
    Plan::Plan(const IMC::PlanSpecification* spec, bool compute_progress,
               bool fpredict, Tasks::Task* task,
               uint16_t min_cal_time, Parsers::Config* cfg):
      m_spec(spec),
      m_curr_node(NULL),
      m_compute_progress(compute_progress),
      m_predict_fuel(fpredict),
      m_progress(0.0),
      m_est_cal_time(0),
      m_profiles(NULL),
      m_beyond_dur(false),
      m_sched(NULL),
      m_started_maneuver(false),
      m_calib(NULL),
      m_min_cal_time(min_cal_time),
      m_config(cfg),
      m_fpred(NULL),
      m_task(task),
      m_properties(0)
    {
      try
      {
        m_speed_model = new Plans::SpeedModel(cfg);
        m_speed_model->validate();
      }
      catch (...)
      {
        Memory::clear(m_speed_model);
        m_task->inf(DTR("plan: speed model invalid"));
      }

      try
      {
        m_power_model = new Plans::PowerModel(cfg);
        m_power_model->validate();
      }
      catch (...)
      {
        Memory::clear(m_power_model);
        m_task->inf(DTR("plan: power model invalid"));
      }

      m_profiles = new Plans::TimeProfile(m_speed_model);
      m_calib = new Calibration();
      m_rt_stat = new RunTimeStatistics(&m_post_stat);
    }

    Plan::~Plan(void)
    {
      Memory::clear(m_profiles);
      Memory::clear(m_sched);
      Memory::clear(m_calib);
      Memory::clear(m_speed_model);
      Memory::clear(m_power_model);
      Memory::clear(m_fpred);
      Memory::clear(m_rt_stat);
    }

    void
    Plan::clear(void)
    {
      // Do not clear m_spec

      m_graph.clear();
      m_curr_node = NULL;
      m_seq_nodes.clear();
      m_progress = -1.0;
      m_beyond_dur = false;
      m_started_maneuver = false;
      m_est_cal_time = m_min_cal_time;

      if (m_profiles != NULL)
        m_profiles->clear();

      if (m_calib != NULL)
        m_calib->clear();

      m_cat.clear();
      m_properties = 0;
    }

    void
    Plan::parse(const std::set<uint16_t>* supported_maneuvers,
                const std::map<std::string, IMC::EntityInfo>& cinfo,
                IMC::PlanStatistics& ps, bool imu_enabled,
                const IMC::EstimatedState* state)
    {
      clear();

      // Build Graph of maneuvers and transitions, if this fails, parse fails
      buildGraph(supported_maneuvers);

      secondaryParse(cinfo, ps, imu_enabled, state);

      m_last_id = m_spec->start_man_id;

      return;
    }

    void
    Plan::planStarted(void)
    {
      // Post statistics
      if (m_rt_stat != NULL)
        m_rt_stat->clear();

      m_post_stat.plan_id = m_spec->plan_id;
      m_rt_stat->planStarted();

      if (m_sched == NULL)
        return;

      m_affected_ents.clear();

      m_sched->planStarted(m_affected_ents);
    }

    void
    Plan::planStopped(void)
    {
      if (m_sched != NULL)
        m_sched->planStopped(m_affected_ents);

      if (m_predict_fuel)
        if (m_fpred != NULL)
          m_rt_stat->fill(*m_fpred);

      m_rt_stat->planStopped();
      m_task->dispatch(m_post_stat);
    }

    void
    Plan::calibrationStarted(void)
    {
      m_calib->setTime(m_est_cal_time);
    }

    void
    Plan::maneuverStarted(const std::string& id)
    {
      m_started_maneuver = true;

      m_rt_stat->maneuverStarted(id);

      if (m_sched == NULL)
        return;

      m_sched->maneuverStarted(id);
    }

    void
    Plan::maneuverDone(void)
    {
      if (!m_started_maneuver)
        return;

      if (m_curr_node == NULL)
        return;

      m_rt_stat->maneuverStopped();

      const std::string& str_last = m_profiles->lastValid();

      if (!str_last.empty())
      {
        if (m_curr_node->pman->maneuver_id == str_last)
          m_beyond_dur = true;
      }

      if (m_sched == NULL)
        return;

      m_sched->maneuverDone(m_last_id);
    }

    uint16_t
    Plan::getEstimatedCalibrationTime(void) const
    {
      return m_est_cal_time;
    }

    bool
    Plan::isDone(void) const
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

    IMC::PlanManeuver*
    Plan::loadStartManeuver(void)
    {
      m_last_id = m_spec->start_man_id;

      return loadManeuverFromId(m_last_id);
    }

    IMC::PlanManeuver*
    Plan::loadNextManeuver(void)
    {
      m_last_id = m_curr_node->trans[0]->dest_man;

      return loadManeuverFromId(m_last_id);
    }

    float
    Plan::updateProgress(const IMC::ManeuverControlState* mcs)
    {
      float prog = progress(mcs);

      if (prog >= 0.0 && m_sched != NULL)
      {
        if (!m_beyond_dur)
          m_sched->updateSchedule(getETA());
        else // if we're beyond computed durations, flush all timed actions
          m_sched->flushTimed();
      }

      return prog;
    }

    void
    Plan::updateCalibration(const IMC::VehicleState* vs)
    {
      if (vs->op_mode == IMC::VehicleState::VS_CALIBRATION && m_calib->notStarted())
      {
        m_calib->start();
      }
      else if (vs->op_mode != IMC::VehicleState::VS_CALIBRATION && m_calib->inProgress())
      {
        m_calib->stop();

        // Fill statistics
        m_rt_stat->fillCalib(m_calib->getElapsedTime());
      }
      else if (m_calib->inProgress())
      {
        // check if some calibration time can be skipped
        if (waitingForDevice())
        {
          m_calib->forceRemainingTime(scheduledTimeLeft());
        }
        else if (m_calib->getElapsedTime() >= m_min_cal_time)
        {
          // If we're past the minimum calibration time
          m_calib->stop();

          // Fill statistics
          m_rt_stat->fillCalib(m_calib->getElapsedTime());
        }
      }
    }

    bool
    Plan::onEntityActivationState(const std::string& id, const IMC::EntityActivationState* msg)
    {
      if (m_sched != NULL)
        return m_sched->onEntityActivationState(id, msg);
      else
        return true;
    }

    void
    Plan::onFuelLevel(const IMC::FuelLevel* msg)
    {
      if (!m_predict_fuel)
        return;

      if (m_fpred == NULL)
        return;

      m_fpred->onFuelLevel(msg);
    }

    float
    Plan::getETA(void) const
    {
      if (m_progress >= 0.0)
        return getTotalDuration() * (1.0 - 0.01 * m_progress);
      else
        return -1.0;
    }

    // Private

    float
    Plan::getExecutionDuration(void) const
    {
      if (!isLinear() || !m_profiles->size())
        return -1.0;

      const std::string& str_last = m_profiles->lastValid();

      if (str_last.empty())
        return -1.0;

      TimeProfile::const_iterator itr = m_profiles->find(str_last);
      if (itr == m_profiles->end())
        return -1.0;

      return itr->second.durations.back();
    }

    bool
    Plan::waitingForDevice(void)
    {
      if (m_sched != NULL)
        return m_sched->waitingForDevice();

      return false;
    }

    float
    Plan::scheduledTimeLeft(void) const
    {
      if (m_sched != NULL)
        return m_sched->calibTimeLeft();

      return -1.0;
    }

    bool
    Plan::maneuverExists(const std::string id) const
    {
      std::vector<IMC::PlanManeuver*>::const_iterator itr = m_seq_nodes.begin();

      for (; itr != m_seq_nodes.end(); ++itr)
        if (!(*itr)->maneuver_id.compare(id))
          return true;

      return false;
    }

    void
    Plan::buildGraph(const std::set<uint16_t>* supported_maneuvers)
    {
      bool start_maneuver_ok = false;

      if (!m_spec->maneuvers.size())
        throw ParseError(m_spec->plan_id + DTR(": no maneuvers"));

      IMC::MessageList<IMC::PlanManeuver>::const_iterator mitr;
      mitr = m_spec->maneuvers.begin();

      // parse maneuvers and transitions
      do
      {
        if (*mitr == NULL)
        {
          ++mitr;
          continue;
        }

        if ((*mitr)->data.isNull())
          throw ParseError((*mitr)->maneuver_id + DTR(": actual maneuver not specified"));

        const IMC::Message* m = (*mitr)->data.get();

        if (supported_maneuvers->find(m->getId()) == supported_maneuvers->end())
          throw ParseError((*mitr)->maneuver_id + DTR(": maneuver is not supported"));

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
          std::string str = DTR(": maneuver has no incoming transition"
                                " and it's not the initial maneuver");
          throw ParseError((*mitr)->maneuver_id + str);
        }

        m_graph[(*mitr)->maneuver_id] = node;
        ++mitr;
      }
      while (mitr != m_spec->maneuvers.end());

      if (!start_maneuver_ok)
        throw ParseError(m_spec->start_man_id + DTR(": invalid start maneuver"));
    }

    void
    Plan::secondaryParse(const std::map<std::string, IMC::EntityInfo>& cinfo,
                         IMC::PlanStatistics& ps, bool imu_enabled,
                         const IMC::EstimatedState* state)
    {
      // Pre statistics
      ps.plan_id = m_spec->plan_id;
      PreStatistics pre_stat(&ps);

      if (m_compute_progress)
      {
        sequenceNodes();

        if (isLinear() && state != NULL)
        {
          m_profiles->parse(m_seq_nodes, state);

          Timeline tline;
          fillTimeline(tline);

          Memory::clear(m_sched);
          m_sched = new ActionSchedule(m_task, m_spec, m_seq_nodes,
                                       tline, cinfo);

          // Update timeline with scheduled calibration time if any
          tline.setPlanETA(std::max(m_sched->getEarliestSchedule(), getExecutionDuration()));

          // Fill component active time with action scheduler
          m_sched->fillComponentActiveTime(m_seq_nodes, tline, m_cat);

          // Update duration statistics
          pre_stat.fill(m_seq_nodes, tline);

          // Update action statistics
          pre_stat.fill(m_cat);

          // Estimate necessary calibration time
          float diff = m_sched->getEarliestSchedule() - getExecutionDuration();
          m_est_cal_time = (uint16_t)std::max(0.0f, diff);
          m_est_cal_time = (uint16_t)std::max(m_min_cal_time, m_est_cal_time);

          if (m_predict_fuel)
          {
            Memory::clear(m_fpred);
            m_fpred = new FuelPrediction(m_profiles, &m_cat, m_power_model,
                                         m_speed_model, imu_enabled, tline.getPlanETA());
            pre_stat.fill(*m_fpred);
          }
        }
        else if (!isLinear())
        {
          Memory::clear(m_sched);
          m_sched = new ActionSchedule(m_task, m_spec, m_seq_nodes, cinfo);

          m_est_cal_time = m_min_cal_time;
        }
      }

      if (!m_profiles->isDurationFinite())
        m_properties |= IMC::PlanStatistics::PRP_INFINITE;

      pre_stat.setProperties(m_properties);
    }

    void
    Plan::sequenceNodes(void)
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
          m_properties |= IMC::PlanStatistics::PRP_NONLINEAR;
          m_properties |= IMC::PlanStatistics::PRP_INFINITE;
          m_properties |= IMC::PlanStatistics::PRP_CYCLICAL;
          return;
        }

        itr = m_graph.find(itr->second.trans[0]->dest_man);
      }
    }

    IMC::PlanManeuver*
    Plan::loadManeuverFromId(const std::string id)
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

    float
    Plan::progress(const IMC::ManeuverControlState* mcs)
    {
      if (!m_compute_progress)
        return -1.0;

      // Compute only if linear and durations exists
      if (!isLinear() || !m_profiles->size())
        return -1.0;

      // If calibration has not started yet, but will later
      if (m_calib->notStarted())
        return -1.0;

      float total_duration = getTotalDuration();
      float exec_duration = getExecutionDuration();

      // Check if its calibrating
      if (m_calib->inProgress())
      {
        float time_left = m_calib->getRemaining() + exec_duration;
        m_progress = 100.0 * trimValue(1.0 - time_left / total_duration, 0.0, 1.0);
        return m_progress;
      }

      // If it's not executing, do not compute
      if (mcs->state != IMC::ManeuverControlState::MCS_EXECUTING ||
          mcs->eta == 0)
        return m_progress;

      TimeProfile::const_iterator itr;
      itr = m_profiles->find(getCurrentId());

      // If not found
      if (itr == m_profiles->end())
      {
        // If beyond the last maneuver with valid duration
        if (m_beyond_dur)
        {
          m_progress = 100.0;
          return m_progress;
        }
        else
        {
          return -1.0;
        }
      }

      // If durations vector for this maneuver is empty
      if (!itr->second.durations.size())
        return m_progress;

      IMC::Message* man = m_graph.find(getCurrentId())->second.pman->data.get();

      // Get execution progress
      float exec_prog = Progress::compute(man, mcs, itr->second.durations, exec_duration);

      float prog = 100.0 - getExecutionPercentage() * (1.0 - exec_prog / 100.0);

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

    void
    Plan::fillTimeline(Timeline& tl)
    {
      float execution_duration = getExecutionDuration();

      std::vector<IMC::PlanManeuver*>::const_iterator itr;
      itr = m_seq_nodes.begin();

      // Maneuver's start and end ETA
      float maneuver_start_eta = -1.0;
      float maneuver_end_eta = -1.0;

      // Iterate through plan maneuvers
      for (; itr != m_seq_nodes.end(); ++itr)
      {
        if (itr == m_seq_nodes.begin())
          maneuver_start_eta = execution_duration;
        else
          maneuver_start_eta = maneuver_end_eta;

        TimeProfile::const_iterator dur;
        dur = m_profiles->find((*itr)->maneuver_id);

        if (dur == m_profiles->end())
          maneuver_end_eta = -1.0;
        else if (dur->second.durations.size())
          maneuver_end_eta = execution_duration - dur->second.durations.back();
        else
          maneuver_end_eta = -1.0;

        // Fill timeline
        tl.setManeuverETA((*itr)->maneuver_id, maneuver_start_eta, maneuver_end_eta);
      }
    }
  }
}
