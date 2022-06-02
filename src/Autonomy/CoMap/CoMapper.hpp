#ifndef AUTONOMY_COMAPPER_HPP_INCLUDED_
#define AUTONOMY_COMAPPER_HPP_INCLUDED_

// ISO C++ headers.
#include <cstdint>

// DUNE headers.
#include "AreaCoverage.hpp"
#include <DUNE/DUNE.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <Plan/Engine/Plan.hpp>

namespace Autonomy
{
  namespace CoMap
  {
    using DUNE_NAMESPACES;

    /**
     * @brief Get the Task Identifier
     *
     * @param task Any kind of task
     * @return int The identifier of the task or -1 if not known / error
     */
    int
    getTaskId(const IMC::TaskAdminArgs* task)
    {
      if (task->getId() == IMC::SurveyTask::getIdStatic())
        return (((IMC::SurveyTask*)task)->task_id);
      else if (task->getId() == IMC::MoveTask::getIdStatic())
        return (((IMC::MoveTask*)task)->task_id);
      else
        return -1;
    }

    bool
    getFeature(int feature_id, const IMC::WorldModel* world, std::vector<std::pair<double, double>>& feature)
    {
      for (const IMC::GeoFeature* f : world->geo_features)
      {
        if (f->feature_id == feature_id)
        {
          for (const IMC::MapPoint* point : f->points)
          {
            feature.push_back(std::make_pair(point->lat, point->lon));
          }
          return true;
        }
      }
      return false;
    }

    bool
    getFeature(const IMC::TaskAdminArgs* task, const IMC::WorldModel* world,
               std::vector<std::pair<double, double>>& feature)
    {
      if (task->getId() == IMC::SurveyTask::getIdStatic())
      {
        int fid = ((IMC::SurveyTask*)task)->feature_id;
        return getFeature(fid, world, feature);
      }
      else if (task->getId() == IMC::MoveTask::getIdStatic())
      {
        IMC::MapPoint* point = ((IMC::MoveTask*)task)->destination.get();
        feature.push_back(std::make_pair(point->lat, point->lon));
        delete point;
        return true;
      }
      return false;
    }

    bool
    validateTask(const IMC::TaskAdminArgs* task)
    {
      if (getTaskId(task) == -1)
      {
        std::cerr << "Invalid task id: " << getTaskId(task) << std::endl;
        return false;
      }

      return true;
    }

    IMC::PlanSpecification
    sequentialPlan(std::string plan_id, std::vector<IMC::Maneuver*> maneuvers, std::vector<IMC::Message*> payload)
    {
      IMC::PlanManeuver last_man;
      unsigned i = 0;
      IMC::PlanSpecification result;

      for (IMC::Maneuver* m : maneuvers)
      {
        IMC::PlanManeuver man_spec;
        man_spec.data.set(*m);
        man_spec.maneuver_id = String::str(i + 1);
        for (IMC::Message* payload_msg : payload)
          man_spec.start_actions.push_back(payload_msg);
        if (i > 0)
        {
          IMC::PlanTransition trans;
          trans.conditions = "ManeuverIsDone";
          trans.dest_man = man_spec.maneuver_id;
          trans.source_man = last_man.maneuver_id;
          result.transitions.push_back(trans);
        }
        result.maneuvers.push_back(man_spec);
        i++;
        last_man = man_spec;
      }

      result.plan_id = plan_id;
      result.start_man_id = "1";

      return result;
    }

    /**
     * @brief This class holds a task to be executed, as well as the plan that executes it
     *
     */
    class CoMapTask
    {
    public:
      CoMapTask() : CoMapTask(-1, IMC::PlanSpecification(), 0, 0) {}

      CoMapTask(int tid, IMC::PlanSpecification plan, double deadline, double duration)
      {
        this->m_task_id = tid;
        this->m_plan = plan;
        this->m_status.status = TaskStatus::SSTATUS_ASSIGNED;        
        this->m_status.task_id = tid;
        this->m_duration = duration;
        this->m_finish_deadline = deadline;
        // TODO compute time to execute plan using Plan::Engine::Plan class
        this->m_start_deadline = Clock::getSinceEpoch();
      }

      int m_task_id;
      double m_finish_deadline, m_start_deadline, m_duration;
      IMC::PlanSpecification m_plan;
      IMC::TaskStatus m_status;
    };

    class SurveyProfile
    {
    public:
      IMC::SensorType m_sensor;
      double m_z, m_speed, m_swath_width, m_resolution, m_res_bathym_factor, m_cov_rate, m_cov_bathym_factor;
      SpeedUnits m_speed_units;
      ZUnits m_z_units;
      SetEntityParameters m_params;
      SurveyProfile(IMC::SensorType sensor, double speed, SpeedUnits sunits, double z, double swath_width,
                    ZUnits zunits, SetEntityParameters params, double resolution, double resolution_bathym_factor,
                    double coverage_rate, double coverage_bathym_factor)
      {
        this->m_sensor = sensor;
        this->m_params = params;
        this->m_swath_width = swath_width;
        this->m_z = z;
        this->m_speed = speed;
        this->m_z_units = zunits;
        this->m_speed_units = sunits;
        this->m_resolution = resolution;
        this->m_res_bathym_factor = resolution_bathym_factor;
        this->m_cov_rate = coverage_rate;
        this->m_cov_bathym_factor = coverage_bathym_factor;
      }
    };

    class CoMapper
    {
    public:
      IMC::WorldModel m_world_model;
      std::vector<SurveyProfile> m_area_survey_profiles;
      std::vector<SurveyProfile> m_point_survey_profiles;
      std::vector<int> m_schedule;
      std::map<int, CoMapTask> m_tasks;
      int m_active_task;
      Tasks::Task* m_parent;
      Parsers::Config* m_config;
      double m_speed;

      CoMapper(double moveSpeed, Tasks::Task* parent, Parsers::Config* config) { 
        this->m_speed = moveSpeed; 
        this->m_parent = parent;
        this->m_config = config;
      }

      double
      planDuration(DUNE::IMC::PlanSpecification* plan)
      {
        Plan::Engine::Plan p(plan, false, false, 100, m_parent, 0, m_config);      
        return p.getETA();
      }

      void
      addAreaSurveyProfile(IMC::CapabilityAreaSurvey capability, double speed, SpeedUnits sunits, double z,
                           double swath_width, ZUnits zunits, SetEntityParameters params)
      {
        IMC::SensorType stype = IMC::SensorType(capability.sensor);
        SurveyProfile profile(stype, speed, sunits, z, swath_width, zunits, params, capability.resolution,
                              capability.res_bathym_factor, capability.cov_rate, capability.cov_bathym_factor);
        m_area_survey_profiles.push_back(profile);
      }

      void
      addPointSurveyProfile(IMC::CapabilityPointSurvey capability, double speed, SpeedUnits sunits, double z,
                            double swath_width, ZUnits zunits, SetEntityParameters params)
      {
        IMC::SensorType stype = IMC::SensorType(capability.sensor);
        SurveyProfile profile(stype, speed, sunits, z, swath_width, zunits, params, capability.resolution, 0, 0, 0);
        m_point_survey_profiles.push_back(profile);
      }

      void
      addKleinCapabilities()
      {
        CapabilityAreaSurvey sss_survey;
        CapabilityPointSurvey p_survey;
        IMC::SetEntityParameters params;

        sss_survey.sensor = SensorType::SENSORTYPE_SIDESCAN;
        sss_survey.resolution = 750;
        sss_survey.cov_rate = 100;
        sss_survey.res_bathym_factor = 1;
        sss_survey.cov_bathym_factor = 1;
        params = createParams("Sidescan", { { "Active", "true" },
                                            { "High-Frequency Channel", "true" },
                                            { "Low-Frequency Channel", "true" },
                                            { "Range", "50" } });
        addAreaSurveyProfile(sss_survey, 1.0, SpeedUnits::SUNITS_METERS_PS, 5.0, 100, ZUnits::Z_ALTITUDE, params);

        p_survey.sensor = SensorType::SENSORTYPE_SIDESCAN;
        p_survey.resolution = 1200;
        p_survey.duration = 120;
        params = createParams("Sidescan", { { "Active", "true" },
                                            { "High-Frequency Channel", "true" },
                                            { "Low-Frequency Channel", "true" },
                                            { "Range", "30" } });
        addAreaSurveyProfile(sss_survey, 1.0, SpeedUnits::SUNITS_METERS_PS, 3.0, 30, ZUnits::Z_ALTITUDE, params);
      }

      void
      addDeltaTCapabilities()
      {
        CapabilityAreaSurvey mbs_survey;
        mbs_survey.resolution = 1200;
        mbs_survey.cov_rate = 1;
        mbs_survey.res_bathym_factor = 0.33333;
        mbs_survey.cov_bathym_factor = 3;

        IMC::SetEntityParameters params =
            createParams("Multibeam", { { "Active", "true" }, { "Adaptive Range Modifier", "true" } });
        addAreaSurveyProfile(mbs_survey, 1.0, SpeedUnits::SUNITS_METERS_PS, 2.0, 20, ZUnits::Z_DEPTH, params);
      }

      void
      clearSensorCapabilities()
      {
        m_area_survey_profiles.clear();
        m_point_survey_profiles.clear();
      }

      IMC::SetEntityParameters
      createParams(std::string section, std::vector<std::pair<std::string, std::string>> parameters)
      {
        IMC::SetEntityParameters params;
        params.name = section;
        for (auto p : parameters)
        {
          EntityParameter parameter;
          parameter.name = p.first;
          parameter.value = p.second;
          params.params.push_back(parameter);
        }
        return params;
      }

      VehicleCapabilities
      generateCapabilities()
      {
        VehicleCapabilities capabilities;

        // move
        CapabilityMove move;
        move.speed = m_speed;
        capabilities.capabilities.push_back(move);

        for (auto prof : m_area_survey_profiles)
        {
          CapabilityAreaSurvey asurvey;
          asurvey.sensor = prof.m_sensor;
          asurvey.cov_bathym_factor = prof.m_cov_bathym_factor;
          asurvey.resolution = prof.m_resolution;
          asurvey.cov_rate = prof.m_cov_rate;
          asurvey.res_bathym_factor = prof.m_res_bathym_factor;
          capabilities.capabilities.push_back(asurvey);
        }

        for (auto prof : m_point_survey_profiles)
        {
          CapabilityPointSurvey psurvey;
          psurvey.sensor = prof.m_sensor;
          psurvey.resolution = prof.m_resolution;
          psurvey.duration = 120;
          capabilities.capabilities.push_back(psurvey);
        }

        return capabilities;
      }

      void
      setWorldModel(const IMC::WorldModel* model)
      {
        this->m_world_model = *model;
      }

      void
      setMovingSpeed(double speed)
      {
        this->m_speed = speed;
      }

      IMC::PlanSpecification
      generatePlan(const IMC::SurveyTask* task, SurveyProfile profile)
      {

        std::vector<std::pair<double, double>> area;

        if (!getFeature(task, &m_world_model, area))
        {
          IMC::PlanSpecification plan;
          plan.plan_id = "comap-invalid";
          plan.description = "Could not retrieve feature";
          m_parent->err("Could not retrieve feature (%d) for task %d", task->feature_id, task->task_id);
          return plan;
        }

        std::vector<std::pair<double, double>> coverage_path;
        getCoveragePath(area, coverage_path, profile.m_swath_width);
        IMC::FollowPath path;
        path.speed = profile.m_speed;
        path.speed_units = profile.m_speed_units;
        path.z = profile.m_z;
        path.z_units = profile.m_z_units;
        if (!coverage_path.empty())
        {
          double lat = coverage_path[0].first;
          double lon = coverage_path[0].second;

          for (unsigned i = 0; i < coverage_path.size(); i++)
          {
            auto point = coverage_path[i];
            IMC::PathPoint pathPoint;
            WGS84::displacement(lat, lon, 0, point.first, point.second, 0, &pathPoint.x, &pathPoint.y, &pathPoint.z);
            path.points.push_back(pathPoint);
          }
        }

        IMC::PlanSpecification plan =
            sequentialPlan(String::str("comap-survey-%d", getTaskId(task)), { &path }, { &profile.m_params });

        m_parent->debug("Created survey plan for surveying feature %d", task->feature_id);
        return plan;
      }

      IMC::PlanSpecification
      generatePlan(const IMC::MoveTask* task)
      {
        
        IMC::PlanSpecification plan;
        const IMC::MapPoint* point = task->destination.get();
        IMC::Goto move;
        move.lat = point->lat;
        move.lon = point->lon;
        move.z = 0;
        move.z_units = ZUnits::Z_DEPTH;
        move.speed = m_speed;
        move.speed_units = SpeedUnits::SUNITS_METERS_PS;

        m_parent->debug("Created move plan towards %.5f / %.5f", Angles::degrees(move.lat), Angles::degrees(move.lon));
        return sequentialPlan(String::str("comap-move-%d", getTaskId(task)), { &move }, {});
      }

      CoMapTask*
      getTask(int task_id)
      {
        if (m_tasks.find(task_id) == m_tasks.end())
          return nullptr;
        return &(m_tasks[task_id]);
      }

      IMC::TaskStatus
      getTaskStatus(int task_id)
      {
        CoMapTask* task = getTask(task_id);
        if (task == nullptr)
        {
          IMC::TaskStatus msg;
          msg.task_id = task_id;
          msg.status = IMC::TaskStatus::SSTATUS_ERROR;
          return msg;
        }
        else
          return task->m_status;
      }

      void
      setTaskStatus(int task_id, TaskStatus::StatusEnum status)
      {
        m_tasks[task_id].m_status.status = status;            
      }

      SurveyProfile
      matchingProfile(const IMC::SurveyTask* task)
      {
        IMC::SensorType stype = IMC::SensorType(task->sensor);

        for (SurveyProfile prof : m_area_survey_profiles)
        {
          if (prof.m_sensor == stype)
            return prof;
        }
        throw std::runtime_error("No survey profile found for this task");
      }

      bool
      addSurveyTask(const IMC::SurveyTask* task)
      {
        if (!validateTask(task))
          return false;

        int tid = getTaskId(task);
        SurveyProfile profile = matchingProfile(task);
        PlanSpecification plan = generatePlan(task, profile);
        double duration = std::max(120.0, planDuration(&plan));
        CoMapTask new_task(tid, plan, task->deadline, planDuration(&plan));
        new_task.m_status.progress = 0;
        new_task.m_start_deadline = task->deadline - duration;
        new_task.m_status.status = IMC::TaskStatus::SSTATUS_ASSIGNED;
        new_task.m_task_id = tid;
        scheduleTask(new_task);
        std::cout << "new size: " << m_schedule.size() << std::endl;

        return true;
      }

      bool
      addMoveTask(const IMC::MoveTask* task)
      {
        if (!validateTask(task))
          return false;

        try
        {
          int tid = getTaskId(task);
          PlanSpecification plan = generatePlan(task);
          CoMapTask new_task(tid, plan, task->deadline, planDuration(&plan));
          new_task.m_status.progress = 0;
          new_task.m_status.status = IMC::TaskStatus::SSTATUS_ASSIGNED;
          new_task.m_task_id = tid;
          new_task.m_start_deadline = Clock::getSinceEpoch();
          scheduleTask(new_task);
        }
        catch (std::exception& e)
        {
          return false;
        }
        return true;
      }

      void
      scheduleTask(CoMapTask& new_task)
      {
        int tid = new_task.m_task_id;
        m_tasks[tid] = new_task;

        // try to insert the new task in the current schedule
        bool inserted = false;
        for (auto s = m_schedule.begin(); s != m_schedule.end(); s++)
        {
          CoMapTask other = m_tasks[*s];
          if (other.m_finish_deadline > new_task.m_finish_deadline)
          {
            m_schedule.insert(s, tid);
            inserted = true;
            break;
          }
        }
        if (!inserted)
          m_schedule.push_back(tid);
        
        recomputeSchedule();
      }

      std::string
      getScheduleAsString()
      {
        std::stringstream ss;
        for (int tid : m_schedule)
        {
          CoMapTask task = m_tasks[tid];

          ss << " * " << tid << " [" << Time::Format::getTimeDate(task.m_start_deadline) << " > "
             << Time::Format::getTimeDate(task.m_finish_deadline) << "] " << std::endl;
        }
        return ss.str();
      }

      void
      recomputeSchedule()
      {
        m_parent->debug("recomputing schedule.");
        double current_time = Clock::getSinceEpoch();
        for (int tid : m_schedule)
        {
          CoMapTask task = m_tasks[tid];
          if (task.m_status.status == TaskStatus::SSTATUS_IN_PROGRESS)
            current_time = task.m_start_deadline + task.m_duration;
          else if (task.m_status.status == TaskStatus::SSTATUS_ASSIGNED)
          {
            task.m_start_deadline = current_time;
            current_time += std::max(120.0, task.m_duration);
            m_tasks[tid] = task;
          }
        }
      }

      bool
      removeTask(int task_id)
      {
        for (auto t = m_schedule.begin(); t != m_schedule.end(); t++)
        {
          if (*t == task_id)
          {
            m_schedule.erase(t);
            break;
          }
        }
        bool existed = m_tasks.erase(task_id) > 0;
        if (existed)
          recomputeSchedule();
        return existed;
      }

      
      CoMapTask*
      nextFeasibleTask()
      {
        double cur_time = Clock::getSinceEpoch();
        for (auto t = m_tasks.begin(); t != m_tasks.end(); t++)
        {
          if (t->second.m_status.status == TaskStatus::SSTATUS_ASSIGNED && t->second.m_start_deadline < cur_time)
            return &t->second;
        }
        return nullptr;
      }
    };
  }
}

#endif// AUTONOMY_COMAPPER_HPP_INCLUDED_