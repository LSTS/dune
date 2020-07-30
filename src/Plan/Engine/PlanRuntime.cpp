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
// Author: Pedro Calado                                                     *
//***************************************************************************

// C++ standard library headers.
#include <algorithm>

// Local headers.
#include "PlanRuntime.hpp"

using namespace DUNE;
using namespace DUNE::Plans;

namespace Plan
{
  namespace Engine
  {
    PlanRuntime::PlanRuntime(PlanArguments const& args, Tasks::Task* task,
                             Parsers::Config* cfg):
      m_plan_graph(nullptr),
      m_args(args),
      m_curr_node(NULL),
      m_progress(0.0),
      m_remaining(-1.0),
      m_est_cal_time(0),
      m_profiles(nullptr),
      m_beyond_dur(false),
      m_sched(nullptr),
      m_started_maneuver(false),
      m_calib(),
      m_fpred(nullptr),
      m_task(task),
      m_properties(0),
      m_rt_stat()
    {
      try
      {
        m_speed_model = std::make_unique<Plans::SpeedModel>(cfg);
        m_speed_model->validate();
      }
      catch (...)
      {
        m_speed_model.reset(nullptr);
        m_task->inf(DTR("plan: speed model invalid"));
      }

      try
      {
        m_power_model = std::make_unique<Power::Model>(cfg);
        m_power_model->validate();
      }
      catch (std::exception& e)
      {
        m_power_model.reset(nullptr);
        m_task->err(DTR("plan: power model invalid: %s"), e.what());
      }

      m_profiles = std::make_unique<TimeProfile>(m_speed_model.get());
    }

    void
    PlanRuntime::clear(void)
    {
      m_plan_graph.reset(nullptr);

      m_curr_node = NULL;
      m_progress = -1.0;
      m_beyond_dur = false;
      m_started_maneuver = false;
      m_est_cal_time = m_args.min_cal_time;

      if (m_profiles)
        m_profiles->clear();

      m_calib.clear();

      m_cat.clear();
      m_properties = 0;
    }

    IMC::PlanStatistics
    PlanRuntime::load(const IMC::PlanSpecification& spec,
                      const std::set<std::uint16_t>& supported_maneuvers,
                      const std::map<std::string, IMC::EntityInfo>& cinfo,
                      bool imu_enabled, const IMC::EstimatedState* state)
    {
      clear();

      m_plan_graph = std::make_unique<PlanGraph>(spec);

      for (auto const& node : *m_plan_graph)
      {
        IMC::Maneuver const* m = node.pman->data.get();

        if (!isDepthSafe(m))
          throw InvalidPlanSpec(node.pman->maneuver_id
                                + DTR(": maneuver depth beyond limits"));

        if (supported_maneuvers.find(m->getId()) == supported_maneuvers.end())
          throw InvalidPlanSpec(node.pman->maneuver_id
                                + DTR(": maneuver is not supported"));
      }

      IMC::PlanStatistics stats = initializeRuntime(cinfo, imu_enabled, state);

      m_last_id = m_plan_graph->getStartNode()->pman->maneuver_id;

      return stats;
    }

    void
    PlanRuntime::planStarted(void)
    {
      // Post statistics
      m_rt_stat.clear();

      m_rt_stat.setPlanId(m_plan_graph->getId());
      m_rt_stat.planStarted();

      if (!m_sched)
        return;

      m_affected_ents.clear();

      m_sched->planStarted(m_task, m_affected_ents);
    }

    void
    PlanRuntime::planResumed(void)
    {
      if (!m_sched)
      {
        m_est_cal_time = m_args.min_cal_time;
        return;
      }

      m_affected_ents.clear();

      float const cal_time
      = m_sched->planResumed(m_last_id, m_task, m_affected_ents);

      m_est_cal_time = static_cast<std::uint16_t>(std::max(0.0f, cal_time));
      m_est_cal_time = std::max(m_args.min_cal_time, m_est_cal_time);
    }

    void
    PlanRuntime::planStopped(void)
    {
      if (m_sched)
        m_sched->planStopped(m_task, m_affected_ents);

      if (m_args.fpredict && m_fpred)
        m_rt_stat.fill(*m_fpred);

      m_rt_stat.planStopped();
      IMC::PlanStatistics ps = m_rt_stat.getMessage();
      m_task->dispatch(ps);
    }

    void
    PlanRuntime::planPaused(void)
    {
      m_remaining = getETA();

      if (!m_sched)
        return;

      m_sched->planPaused(m_last_id, m_task, m_affected_ents);
    }

    void
    PlanRuntime::calibrationStarted(void)
    {
      m_calib.setTime(m_est_cal_time);
    }

    void
    PlanRuntime::maneuverStarted(const std::string& id)
    {
      m_started_maneuver = true;

      m_rt_stat.maneuverStarted(id);

      if (!m_sched)
        return;

      m_sched->maneuverStarted(m_task, id);
    }

    void
    PlanRuntime::maneuverDone(void)
    {
      if (!m_started_maneuver)
        return;

      if (m_curr_node == NULL)
        return;

      m_rt_stat.maneuverStopped();

      const std::string& str_last = m_profiles->lastValid();

      if (!str_last.empty())
      {
        if (m_curr_node->pman->maneuver_id == str_last)
          m_beyond_dur = true;
      }

      if (!m_sched)
        return;

      m_sched->maneuverDone(m_task, m_last_id);
    }

    std::uint16_t
    PlanRuntime::getEstimatedCalibrationTime(void) const
    {
      return m_est_cal_time;
    }

    bool
    PlanRuntime::isDone(void) const
    {
      if (m_curr_node == NULL)
        return false;

      if (m_curr_node->next == "_done_")
        return true;

      return false;
    }

    IMC::PlanManeuver const*
    PlanRuntime::loadStartManeuver(void)
    {
      if (m_curr_node)
        return getCurrentManeuver();

      m_curr_node = m_plan_graph->getStartNode();

      auto const* start_man = m_curr_node->pman;
      m_last_id = start_man->maneuver_id;

      return start_man;
    }

    IMC::PlanManeuver const*
    PlanRuntime::loadNextManeuver(void)
    {
      m_last_id = m_curr_node->next;

      return loadManeuverFromId(m_last_id);
    }

    float
    PlanRuntime::updateProgress(const IMC::ManeuverControlState* mcs)
    {
      float prog = progress(mcs);

      if (prog >= 0.0 && m_sched)
      {
        if (!m_beyond_dur)
          m_sched->updateSchedule(m_task, getETA());
        else // if we're beyond computed durations, flush all timed actions
          m_sched->flushTimed(m_task);
      }

      return prog;
    }

    void
    PlanRuntime::updateCalibration(const IMC::VehicleState* vs)
    {
      if (vs->op_mode == IMC::VehicleState::VS_CALIBRATION
          && m_calib.notStarted())
      {
        m_calib.start();
        return;
      }

      if (vs->op_mode != IMC::VehicleState::VS_CALIBRATION
               && m_calib.inProgress())
      {
        m_task->war("Stopping calibration -- vehicle not in calibration mode");
        m_calib.stop();

        // Fill statistics
        m_rt_stat.fillCalib(m_calib.getElapsedTime());

        return;
      }

      if (!m_calib.inProgress())
        return;

      // check if some calibration time can be skipped
      if (waitingForDevice())
      {
        m_calib.forceRemainingTime(scheduledTimeLeft());
        return;
      }

      // If we're past the minimum calibration time
      if (m_calib.getElapsedTime() >= m_args.min_cal_time)
      {
        m_task->debug("Stopping calibration -- past minimum calibration time");
        m_calib.stop();

        // Fill statistics
        m_rt_stat.fillCalib(m_calib.getElapsedTime());
      }
    }

    bool
    PlanRuntime::onEntityActivationState(const std::string& id,
                                         const IMC::EntityActivationState* msg)
    {
      if (m_sched)
        return m_sched->onEntityActivationState(m_task, id, msg);

      return true;
    }

    void
    PlanRuntime::onFuelLevel(const IMC::FuelLevel* msg)
    {
      if (!m_args.fpredict)
        return;

      if (!m_fpred)
        return;

      m_fpred->onFuelLevel(msg);
    }

    float
    PlanRuntime::getETA(void) const
    {
      if (m_progress >= 0.0)
        return getTotalDuration() * (1.0 - 0.01 * m_progress);

      return -1.0;
    }

    // Private

    float
    PlanRuntime::getExecutionDuration(void) const
    {
      if (!isLinear() || !m_profiles->size())
        return -1.0;

      const std::string& str_last = m_profiles->lastValid();

      if (str_last.empty())
        return -1.0;

      auto maneuver_profile = m_profiles->find(str_last);
      if (maneuver_profile == m_profiles->end())
        return -1.0;

      return maneuver_profile->second.durations.back();
    }

    bool
    PlanRuntime::waitingForDevice(void)
    {
      if (m_sched)
        return m_sched->waitingForDevice();

      return false;
    }

    float
    PlanRuntime::scheduledTimeLeft(void) const
    {
      if (m_sched)
        return m_sched->calibTimeLeft();

      return -1.0;
    }

    static std::unique_ptr<Timeline>
    makeFilledTimeline(float execution_duration, TimeProfile const& profiles,
                       std::vector<IMC::PlanManeuver const*> const& seq_nodes)
    {
      auto tl = std::make_unique<Timeline>();

      // Maneuver's start and end ETA
      float maneuver_start_eta = execution_duration;
      float maneuver_end_eta = -1.0;

      // Iterate through plan maneuvers
      for (auto node : seq_nodes)
      {
        auto durations = profiles.find(node->maneuver_id);

        if (durations == profiles.end())
          maneuver_end_eta = -1.0;
        else if (durations->second.durations.size())
          maneuver_end_eta
          = execution_duration - durations->second.durations.back();
        else
          maneuver_end_eta = -1.0;

        // Fill timeline
        tl->setManeuverETA(node->maneuver_id, maneuver_start_eta,
                           maneuver_end_eta);

        maneuver_start_eta = maneuver_end_eta;
      }

      return tl;
    }

    static std::vector<IMC::PlanManeuver const*>
    sequenceNodes(PlanGraph const* graph, unsigned* properties)
    {
      std::vector<IMC::PlanManeuver const*> seq_nodes;

      auto const* node = graph->getStartNode();
      std::string maneuver_id = node->pman->maneuver_id;

      while (true)
      {
        if (!node)
          throw PlanRuntime::PlanSequenceError(
          DTR("found invalid maneuver id '%s'") + maneuver_id);

        seq_nodes.push_back(node->pman);

        std::string const& dest_man_id = node->next;

        if (dest_man_id == "_done_")
          break;

        // Check if plan is cyclical
        if (std::find_if(std::begin(seq_nodes), std::end(seq_nodes),
                         [dest_man_id](IMC::PlanManeuver const* man) {
                           return man->maneuver_id == dest_man_id;
                         })
            != seq_nodes.end())
        {
          *properties |= IMC::PlanStatistics::PRP_NONLINEAR;
          *properties |= IMC::PlanStatistics::PRP_INFINITE;
          *properties |= IMC::PlanStatistics::PRP_CYCLICAL;
          return {};
        }

        maneuver_id = dest_man_id;
        node = graph->findNode(maneuver_id);
      }

      return seq_nodes;
    }

    IMC::PlanStatistics
    PlanRuntime::initializeRuntime(
    const std::map<std::string, IMC::EntityInfo>& cinfo, bool imu_enabled,
    const IMC::EstimatedState* state)
    {
      // Pre statistics
      PreStatistics pre_stat;
      pre_stat.setPlanId(m_plan_graph->getId());

      if (m_args.compute_progress)
      {
        auto const seq_nodes = sequenceNodes(m_plan_graph.get(), &m_properties);

        if (isLinear() && state != NULL)
        {
          m_profiles->parse(seq_nodes, state);

          m_remaining = getExecutionDuration();

          m_sched = std::make_unique<ActionSchedule>(
          m_task, m_plan_graph->getSpec(), seq_nodes,
          makeFilledTimeline(m_remaining, *m_profiles.get(), seq_nodes), cinfo,
          &m_cat);

          // Update duration statistics
          pre_stat.fill(seq_nodes, *m_sched->getTimeline());

          // Update action statistics
          pre_stat.fill(m_cat);

          // Estimate necessary calibration time
          m_est_cal_time = static_cast<std::uint16_t>(
          std::max(0.0f, m_sched->getCalibrationTime()));
          m_est_cal_time = std::max(m_args.min_cal_time, m_est_cal_time);

          if (m_args.fpredict)
          {
            m_fpred = std::make_unique<FuelPrediction>(
            m_profiles.get(), &m_cat, m_power_model.get(), m_speed_model.get(),
            imu_enabled, m_sched->getTimeline()->getPlanETA());

            pre_stat.fill(*m_fpred);
          }
        }
        else if (!isLinear())
        {
          m_sched
          = std::make_unique<ActionSchedule>(m_task, m_plan_graph->getSpec(),
                                             seq_nodes, cinfo);

          m_est_cal_time = m_args.min_cal_time;
        }
      }

      if (!m_profiles->isDurationFinite())
        m_properties |= IMC::PlanStatistics::PRP_INFINITE;

      pre_stat.setProperties(m_properties);

      return pre_stat.getMessage();
    }

    IMC::PlanManeuver const*
    PlanRuntime::loadManeuverFromId(const std::string& id)
    {
      auto const* node = m_plan_graph->findNode(id);

      if (!node)
        return NULL;

      m_curr_node = node;
      return m_curr_node->pman;
    }

    float
    PlanRuntime::progress(const IMC::ManeuverControlState* mcs)
    {
      if (!m_args.compute_progress)
        return -1.0;

      // Compute only if linear and we know the time profile of the plan
      if (!isLinear() || !m_profiles || !m_profiles->size())
        return -1.0;

      // If calibration has not started yet
      if (m_calib.notStarted())
        return -1.0;

      float total_duration = getTotalDuration();
      if (m_calib.inProgress())
      {
        float time_left = m_calib.getRemaining() + m_remaining;
        m_progress
        = 100.0 * trimValue(1.0 - time_left / total_duration, 0.0, 1.0);
        return m_progress;
      }

      // If it's not calibrating or executing, do not compute
      if (mcs->state != IMC::ManeuverControlState::MCS_EXECUTING
          || mcs->eta == 0)
        return m_progress;

      std::string const& current_id = getCurrentId();
      auto maneuver_profile = m_profiles->find(current_id);

      if (maneuver_profile == m_profiles->end())
        return m_beyond_dur ? (m_progress = 100.0) : -1.0;

      auto const& durations = maneuver_profile->second.durations;

      if (!durations.size())
        return m_progress;

      IMC::Message const* man
      = m_plan_graph->findNode(current_id)->pman->data.get();

      float exec_duration = getExecutionDuration();

      // Get execution progress
      float exec_prog = Progress::compute(man, mcs, durations, exec_duration);
      float prog = 100.0 - getExecutionPercentage() * (1.0 - exec_prog / 100.0);

      // If negative, then unable to compute
      // But keep last value of progress if it is not invalid
      if (prog < 0.0)
        return m_progress < 0.0 ? -1.0 : m_progress;

      // Never output shorter than previous
      m_progress = std::max(prog, m_progress);

      return m_progress;
    }

    bool
    PlanRuntime::isDepthSafe(const IMC::Message* maneuver) const
    {
      switch (maneuver->getId())
      {
        case DUNE_IMC_GOTO:
        {
          const IMC::Goto* m = static_cast<const IMC::Goto*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_POPUP:
        {
          const IMC::PopUp* m = static_cast<const IMC::PopUp*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_LAUNCH:
        {
          const IMC::Launch* m = static_cast<const IMC::Launch*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_LOITER:
        {
          const IMC::Loiter* m = static_cast<const IMC::Loiter*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_ROWS:
        {
          const IMC::Rows* m = static_cast<const IMC::Rows*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_ROWSCOVERAGE:
        {
          const IMC::RowsCoverage* m = static_cast<const IMC::RowsCoverage*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_FOLLOWPATH:
        {
          const IMC::FollowPath* m = static_cast<const IMC::FollowPath*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_YOYO:
        {
          const IMC::YoYo* m = static_cast<const IMC::YoYo*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_STATIONKEEPING:
        {
          const IMC::StationKeeping* m = static_cast<const IMC::StationKeeping*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_COMPASSCALIBRATION:
        {
          const IMC::CompassCalibration* m = static_cast<const IMC::CompassCalibration*>(maneuver);
          return checkDepth((IMC::ZUnits)m->z_units, m->z);
        }

        case DUNE_IMC_ELEVATOR:
        {
          const IMC::Elevator* m = static_cast<const IMC::Elevator*>(maneuver);
          if (m->start_z_units == IMC::Z_DEPTH)
          {
            if (m->start_z > m_args.max_depth + c_depth_margin)
              return false;
          }
          if (m->end_z_units == IMC::Z_DEPTH)
          {
            if (m->end_z > m_args.max_depth + c_depth_margin)
              return false;
          }

          break;
        }

        case DUNE_IMC_SCHEDULEDGOTO:
        {
          const IMC::ScheduledGoto* m = static_cast<const IMC::ScheduledGoto*>(maneuver);
          if (m->z_units == IMC::Z_DEPTH)
          {
            if (m->z > m_args.max_depth + c_depth_margin)
              return false;
          }
          if (m->travel_z_units == IMC::Z_DEPTH)
          {
            if (m->travel_z > m_args.max_depth + c_depth_margin)
              return false;
          }

          break;
        }

        default:
          break;
      }

      return true;
    }
  }
}
