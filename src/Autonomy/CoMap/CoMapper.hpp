#ifndef AUTONOMY_COMAPPER_HPP_INCLUDED_
#define AUTONOMY_COMAPPER_HPP_INCLUDED_

// ISO C++ headers.
#include <cstdint>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Math/Matrix.hpp>
#include "AreaCoverage.hpp"


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

    IMC::PlanSpecification
    sequentialPlan(std::string plan_id, std::vector<IMC::Maneuver*> maneuvers)
    {
      IMC::PlanManeuver last_man;
      unsigned i = 0;
      IMC::PlanSpecification result;

      for (IMC::Maneuver* m : maneuvers)
      {
        IMC::PlanManeuver man_spec;
        man_spec.data.set(*m);
        man_spec.maneuver_id = String::str(i + 1);
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
      CoMapTask() : CoMapTask(-1, IMC::PlanSpecification()) {}

      CoMapTask(int tid, IMC::PlanSpecification plan)
      {
        this->m_task_id = tid;
        this->m_plan = plan;
        this->m_status.status = TaskStatus::SSTATUS_ASSIGNED;
        this->m_status.task_id = tid;
      }

      int m_task_id;
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
      double m_speed;

      CoMapper(double moveSpeed) { this->m_speed = moveSpeed; }

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
        IMC::PlanSpecification plan;
        plan.plan_id = "comap-" + getTaskId(task);
        plan.description = "Survey of feature " + task->feature_id;
        plan.start_actions.push_back(profile.m_params);
        // TODO actually generate a coverage plan.
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

        return sequentialPlan("comap-" + getTaskId(task), { &move });
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
        int tid = getTaskId(task);
        try
        {
          SurveyProfile profile = matchingProfile(task);
          PlanSpecification plan = generatePlan(task, profile);
          CoMapTask new_task(tid, plan);
          new_task.m_status.progress = 0;
          new_task.m_status.status = IMC::TaskStatus::SSTATUS_ASSIGNED;
          new_task.m_task_id = tid;
          m_tasks[tid] = new_task;
          m_schedule.push_back(tid);
        }
        catch (std::exception& e)
        {
          return false;
        }
        return true;
      }

      bool
      addMoveTask(const IMC::MoveTask* task)
      {
        int tid = getTaskId(task);
        return false;
      }

      bool
      removeTask(int task_id)
      {
        return false;
      }
    };
  }
}

#endif// AUTONOMY_COMAPPER_HPP_INCLUDED_