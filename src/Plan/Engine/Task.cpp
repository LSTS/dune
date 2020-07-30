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
// Author: Eduardo Marques                                                  *
// Author: Paulo Dias (plan actions addition)                               *
//***************************************************************************

// C++ standard library headers.
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "PlanRuntime.hpp"

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    enum OutputType
    {
      TYPE_NONE,
      TYPE_INF,
      TYPE_WAR
    };

    //! Timeout for the vehicle command reply.
    static const double c_vc_reply_timeout = 2.5;
    //! Timeout for the vehicle state
    static const double c_vs_timeout = 2.5;

    //! Plan Command operation descriptions
    static const char* c_op_desc[] = { DTR_RT("Start Plan"), DTR_RT("Stop Plan"),
                                       DTR_RT("Load Plan"), DTR_RT("Get Plan"),
                                       DTR_RT("Pause Plan"), DTR_RT("Resume Plan") };
    //! Plan state descriptions
    static const char* c_state_desc[] = { DTR_RT("BLOCKED"), DTR_RT("READY"),
                                          DTR_RT("INITIALIZING"), DTR_RT("EXECUTING"),
                                          DTR_RT("PAUSED") };

    //! DataBase statement
    static const char* c_get_plan_stmt = "select data from Plan where plan_id=?";

    //! Invalid maneuver type
    static const uint16_t c_invalid_maneuver = 0xFFFF;

    struct Arguments
    {
      //! Plan arguments
      PlanArguments plan_arguments;
      //! State report period
      float speriod;
      //! True if calibration should be performed at all
      bool do_calib;
      //! Abort when a payload fails to activate
      bool actfail_abort;
      //! Perform station keeping while calibrating
      bool sk_calib;
      //! Radius for the station keeping
      float sk_radius;
      //! Speed in RPM for the station keeping
      float sk_rpm;
      //! Entity label of the IMU
      std::string label_imu;
      //! Recovery plan
      std::string recovery_plan;
      //! Entity label of the plan generator.
      std::string label_gen;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Plan runtime manager
      std::unique_ptr<PlanRuntime> m_plan;
      //! Backup of a paused plan's runtime state
      std::unique_ptr<PlanRuntime> m_paused_plan;
      //! Plan control interface
      IMC::PlanControlState m_pcs;
      IMC::PlanControl m_reply;
      //! Last event description
      std::string m_last_event;
      //! Vehicle interface
      uint16_t m_vreq_ctr;
      double m_vc_reply_deadline;
      double m_last_vstate;
      IMC::VehicleCommand m_vc;
      //! PlanSpecification message
      IMC::PlanSpecification m_spec;
      //! List of supported maneuvers.
      std::set<uint16_t> m_supported_maneuvers;
      //! Misc.
      IMC::LoggingControl m_lc;
      IMC::EstimatedState m_state;
      //! ManeuverControlState message
      IMC::ManeuverControlState m_mcs;
      //! Timer counter for state report period
      Time::Counter<float> m_report_timer;
      //! Map of component names to entityinfo
      std::map<std::string, IMC::EntityInfo> m_cinfo;
      //! Source entity of the IMU
      unsigned m_eid_imu;
      //! Source entity of the plan generator
      unsigned m_eid_gen;
      //! IMU is enabled or not
      bool m_imu_enabled;
      //! Queue of PlanControl messages
      std::queue<IMC::PlanControl> m_requests;
      //! Plan database file.
      Path m_db_file;
      //! Task arguments.
      Arguments m_args;


      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_plan(nullptr),
        m_paused_plan(nullptr),
        m_imu_enabled(false)
      {
        param("Compute Progress", m_args.plan_arguments.compute_progress)
        .defaultValue("false")
        .description("True if plan progress should be computed");

        param("Fuel Prediction", m_args.plan_arguments.fpredict)
        .defaultValue("true")
        .description("True if plan's fuel prediction should be computed");

        param("State Report Frequency", m_args.speriod)
        .defaultValue("3.0")
        .units(Units::Hertz)
        .description("Frequency of plan control state");

        param("Minimum Calibration Time", m_args.plan_arguments.min_cal_time)
        .defaultValue("10")
        .units(Units::Second)
        .description("Duration of vehicle calibration commands");

        param("Perform Calibration", m_args.do_calib)
        .defaultValue("true")
        .description("True if calibration should be performed at all");

        param("Abort On Failed Activation", m_args.actfail_abort)
        .defaultValue("false")
        .description("Abort when a payload fails to activate");

        param("StationKeeping While Calibrating", m_args.sk_calib)
        .defaultValue("false")
        .description("Perform station keeping while calibrating");

        param("StationKeeping Speed in RPM", m_args.sk_rpm)
        .defaultValue("1600")
        .units(Units::RPM)
        .description("Speed in RPM for the station keeping");

        param("StationKeeping Radius", m_args.sk_radius)
        .defaultValue("20")
        .units(Units::Meter)
        .description("Radius for the station keeping");

        param("IMU Entity Label", m_args.label_imu)
        .defaultValue("IMU")
        .description("Entity label of the IMU for fuel prediction");

        param("Plan Generator Entity Label", m_args.label_gen)
        .defaultValue("Plan Generator")
        .description("Entity label of the Plan Generator");

        m_ctx.config.get("General", "Recovery Plan", "dislodge", m_args.recovery_plan);
        m_ctx.config.get("General", "Absolute Maximum Depth", "50.0",
                         m_args.plan_arguments.max_depth);

        m_db_file = m_ctx.dir_db / "Plan.db";

        bind<IMC::PlanControl>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::ManeuverControlState>(this);
        bind<IMC::RegisterManeuver>(this);
        bind<IMC::VehicleCommand>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EntityInfo>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::FuelLevel>(this);
      }

      unsigned int
      tryResolveEntity(std::string const& label) const
      try
      {
        return resolveEntity(label);
      }
      catch (...)
      {
        return UINT_MAX;
      }

      void
      onEntityResolution(void)
      {
        m_eid_imu = tryResolveEntity(m_args.label_imu);
        m_eid_gen = tryResolveEntity(m_args.label_gen);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.speriod))
          m_args.speriod = 1.0 / m_args.speriod;

        if (m_plan
            && (paramChanged(m_args.plan_arguments.compute_progress)
                || paramChanged(m_args.plan_arguments.min_cal_time)))
          throw RestartNeeded(DTR(
                              "restarting to relaunch plan runtime manager"),
                              0, false);
      }

      void
      onResourceRelease(void)
      {
        m_plan.reset(nullptr);
        m_paused_plan.reset(nullptr);
      }

      std::unique_ptr<PlanRuntime>
      makePlanRuntime(void)
      {
        return std::make_unique<PlanRuntime>(m_args.plan_arguments, this,
                                             &m_ctx.config);
      }

      void
      onResourceAcquisition(void)
      {
        m_plan = makePlanRuntime();
      }

      void
      onResourceInitialization(void)
      {
        debug("database file: '%s'", m_db_file.c_str());
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_report_timer.setTop(m_args.speriod);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_state = *msg;
      }

      void
      consume(const IMC::ManeuverControlState* msg)
      {
        m_mcs = *msg;

        if (msg->state == IMC::ManeuverControlState::MCS_DONE)
          m_plan->maneuverDone();
      }

      void
      consume(const IMC::RegisterManeuver* msg)
      {
        m_supported_maneuvers.insert(msg->mid);
      }

      void
      consume(const IMC::EntityInfo* msg)
      {
        m_cinfo.insert(std::pair<std::string, IMC::EntityInfo>(msg->label, *msg));
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        // not local message.
        if (msg->getSource() != getSystemId())
          return;

        if (m_plan)
        {
          std::string id;

          try
          {
            id = resolveEntity(msg->getSourceEntity());
          }
          catch (...)
          {
            return;
          }

          if (!m_plan->onEntityActivationState(id, msg))
          {
            std::string error = String::str(DTR("failed to activate %s: %s"),
                                            id.c_str(), msg->error.c_str());

            if (m_args.actfail_abort)
            {
              onFailure(error);

              // stop calibration if any is running
              if (initMode() && !pendingReply())
              {
                vehicleRequest(IMC::VehicleCommand::VC_STOP_CALIBRATION);
                m_reply.plan_id = m_spec.plan_id;
              }

              toReadyState(error, TYPE_NONE);
            }
            else
            {
              err("%s", error.c_str());
            }
          }
        }

        if (msg->getSourceEntity() == m_eid_imu)
        {
          if (msg->state == IMC::EntityActivationState::EAS_ACTIVE)
            m_imu_enabled = true;
          else
            m_imu_enabled = false;
        }
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        if (!m_plan)
          return;

        m_plan->onFuelLevel(msg);
      }

      void
      consume(const IMC::VehicleCommand* vc)
      {
        if (vc->type == IMC::VehicleCommand::VC_REQUEST)
          return;

        if ((vc->getDestination() != getSystemId()) ||
            (vc->getDestinationEntity() != getEntityId()) ||
            (m_vreq_ctr != vc->request_id))
          return;

        if (!pendingReply())
          return;

        m_vc_reply_deadline = -1;
        bool error = vc->type == IMC::VehicleCommand::VC_FAILURE;

        // Ignore failure if it failed to stop calibration
        if (error && (vc->command == IMC::VehicleCommand::VC_STOP_CALIBRATION))
        {
          debug("%s", vc->info.c_str());
          error = false;
        }

        if (initMode() || execMode())
        {
          if (error)
            toReadyState(vc->info, TYPE_NONE);
          return;
        }
      }

      void
      consume(const IMC::VehicleState* vs)
      {
        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
          return;

        m_last_vstate = Clock::get();

        switch (vs->op_mode)
        {
          case IMC::VehicleState::VS_SERVICE:
            onVehicleService(vs);
            break;
          case IMC::VehicleState::VS_CALIBRATION:
            onVehicleCalibration(vs);
            break;
          case IMC::VehicleState::VS_ERROR:
          case IMC::VehicleState::VS_BOOT:
            onVehicleError(vs);
            break;
          case IMC::VehicleState::VS_MANEUVER:
            onVehicleManeuver(vs);
            break;
          case IMC::VehicleState::VS_EXTERNAL:
            onVehicleExternalControl(vs);
            break;
        }

        // update calibration status
        if (m_plan && initMode())
        {
          m_plan->updateCalibration(vs);

          if (m_plan->isCalibrationDone())
          {
            debug("Calibration done");

            if ((vs->op_mode == IMC::VehicleState::VS_CALIBRATION) &&
                !pendingReply())
            {
              IMC::PlanManeuver const* pman = m_plan->loadStartManeuver();
              startManeuver(pman);
            }
          }
          else if (m_plan->hasCalibrationFailed())
          {
            onFailure(m_plan->getCalibrationInfo());
            m_reply.plan_id = m_spec.plan_id;
            toReadyState(m_plan->getCalibrationInfo());
          }
        }
      }

      void
      onVehicleService(const IMC::VehicleState* vs)
      {
        switch (m_pcs.state)
        {
          case IMC::PlanControlState::PCS_BLOCKED:
            toReadyState(DTR("vehicle ready"), TYPE_INF);
            break;
          case IMC::PlanControlState::PCS_INITIALIZING:
            if (!pendingReply())
            {
              m_plan->updateCalibration(vs);
              IMC::PlanManeuver const* pman = m_plan->loadStartManeuver();
              startManeuver(pman);
            }
            break;
          case IMC::PlanControlState::PCS_EXECUTING:
            if (!pendingReply())
            {
              onFailure(vs->last_error, false);
              m_reply.plan_id = m_spec.plan_id;
              toReadyState(vs->last_error);
            }
            break;
          default:
            break;
        }
      }

      void
      onVehicleManeuver(const IMC::VehicleState* vs)
      {
        if (!execMode() || pendingReply())
          return;

        if (!(vs->flags & IMC::VehicleState::VFLG_MANEUVER_DONE))
        {
          m_pcs.man_eta = vs->maneuver_eta;
          return;
        }

        if (m_plan->isDone())
        {
          vehicleRequest(IMC::VehicleCommand::VC_STOP_MANEUVER);

          std::string comp = DTR("plan completed");
          onSuccess(comp, false);
          m_pcs.last_outcome = IMC::PlanControlState::LPO_SUCCESS;
          m_reply.plan_id = m_spec.plan_id;

          // If we have a paused plan saved, go back to pause mode
          m_paused_plan ? toPauseState(comp, TYPE_INF)
                        : toReadyState(comp, TYPE_INF);

          return;
        }

        IMC::PlanManeuver const* pman = m_plan->loadNextManeuver();
        startManeuver(pman);
      }

      void
      onVehicleError(const IMC::VehicleState* vs)
      {
        std::string err_ents = DTR("vehicle errors: ") + vs->error_ents;
        std::string edesc = vs->last_error_time < 0 ? err_ents : vs->last_error;

        if (execMode())
        {
          onFailure(edesc);
          m_reply.plan_id = m_spec.plan_id;
        }

        // there are new error entities
        if (edesc != m_last_event && !pendingReply())
        {
          if (initMode())
          {
            onFailure(edesc);
            // stop calibration if any is running
            vehicleRequest(IMC::VehicleCommand::VC_STOP_CALIBRATION);
            m_reply.plan_id = m_spec.plan_id;
          }

          toBlockedState(edesc, TYPE_NONE);
        }
      }

      void
      onVehicleCalibration(const IMC::VehicleState* vs)
      {
        (void)vs;

        if (initMode())
          return;

        if (!blockedMode())
          toBlockedState(DTR("vehicle in CALIBRATION mode"), TYPE_NONE);
      }

      void
      onVehicleExternalControl(const IMC::VehicleState* vs)
      {
        (void)vs;

        if (blockedMode())
          return;

        toBlockedState(DTR("vehicle in EXTERNAL mode"), TYPE_NONE);
      }

      bool
      nonLocalEmergencyPlan(const IMC::PlanControl* pc) const
      {
        return (pc->plan_id == m_args.recovery_plan)
               && (pc->op == IMC::PlanControl::PC_START)
               && ((pc->getSource() != getSystemId())
                   || (pc->getSourceEntity() != m_eid_gen));
      }

      void
      consume(const IMC::PlanControl* pc)
      {
        if (pc->type != IMC::PlanControl::PC_REQUEST)
          return;

        // Emergency plan needs to be requested by
        // local plan generator.
        if (nonLocalEmergencyPlan(pc))
          return;

        if (pendingReply())
        {
          m_requests.push(*pc);
          debug("saved request %u", pc->request_id);
          return;
        }
        else if (m_requests.size())
        {
          m_requests.push(*pc);
          processRequest(&m_requests.front());
          m_requests.pop();
        }
        else
        {
          processRequest(pc);
        }
      }

      void
      processRequest(const IMC::PlanControl* pc)
      {
        if (pc->getDestination() != getSystemId()
            && pc->getDestination() != m_ctx.resolver.resolve("broadcast"))
        return;

        m_reply.setDestination(pc->getSource());
        m_reply.setDestinationEntity(pc->getSourceEntity());
        m_reply.request_id = pc->request_id;
        m_reply.op = pc->op;
        m_reply.plan_id = pc->plan_id;

        inf(DTR("request -- %s (%s)"),
            DTR(c_op_desc[m_reply.op]),
            m_reply.plan_id.c_str());

        if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
        {
          onFailure(DTR("engine not ready: entity state not normal"));
          return;
        }

        switch (pc->op)
        {
          case IMC::PlanControl::PC_START:
            if (!startPlan(pc->plan_id, pc->arg.isNull() ? 0 : pc->arg.get(), pc->flags))
              vehicleRequest(IMC::VehicleCommand::VC_STOP_MANEUVER);
            break;
          case IMC::PlanControl::PC_STOP:
            stopPlan();
            break;
          case IMC::PlanControl::PC_LOAD:
            loadPlan(pc->plan_id, pc->arg.isNull() ? 0 : pc->arg.get(), false);
            break;
          case IMC::PlanControl::PC_GET:
            getPlan();
            break;
          case IMC::PlanControl::PC_PAUSE:
            pausePlan();
            break;
          case IMC::PlanControl::PC_RESUME:
            resumePlan(pc->flags);
            break;
          default:
            onFailure(DTR("plan control operation not supported"));
            break;
        }
      }

      //! Load a plan into the vehicle
      //! @param[in] plan_id name of the plan
      //! @param[in] arg argument which may either be a maneuver or a plan specification
      //! @param[in] plan_startup true if a plan will start right after
      //! @return true if plan is successfully loaded
      bool
      loadPlan(const std::string& plan_id, const IMC::Message* arg,
               bool plan_startup = false)
      {
        if ((initMode() && !plan_startup) || execMode())
        {
          onFailure(DTR("cannot load plan now"));
          return false;
        }

        std::string info;
        if (!parseArg(plan_id, arg, info))
        {
          toReadyState(DTR("plan load failed: ") + info);
          return false;
        }

        try
        {
          IMC::PlanStatistics stats = loadPlanRuntime(plan_startup);

          // reply with statistics
          m_reply.arg.set(stats);
        }
        catch (std::exception const& e)
        {
          onFailure(e.what());
          m_plan->clear();
          toReadyState(DTR("plan parse failed: ") + m_reply.info);

          return false;
        }

        m_reply.plan_id = m_spec.plan_id;
        m_pcs.plan_id = m_spec.plan_id;

        onSuccess(DTR("plan loaded"), false);

        return true;
      }

      //! Get current plan
      void
      getPlan(void)
      {
        if (!initMode() && !execMode())
        {
          onFailure(DTR("no plan is running"));
          return;
        }

        m_reply.arg.set(m_spec);
        m_reply.plan_id = m_spec.plan_id;
        onSuccess();
      }

      //! Stop current plan being executed
      //! @param[in] plan_startup true if a plan will start right after this stop
      //! @return false if a plan is still running after this
      bool
      stopPlan(bool plan_startup = false)
      {
        if (isInPlan())
        {
          if (plan_startup)
          {
            m_pcs.last_outcome = IMC::PlanControlState::LPO_FAILURE;
            debug("switching to new plan");
            return false;
          }

          // If we are goind out of pause mode, restore the plan runtime state
          if (pauseMode())
            m_plan.reset(m_paused_plan.release());
          else
            vehicleRequest(IMC::VehicleCommand::VC_STOP_MANEUVER);

          m_reply.plan_id = m_spec.plan_id;
          m_pcs.last_outcome = IMC::PlanControlState::LPO_FAILURE;
          onSuccess();

          // If we have a paused plan saved, go back to pause mode
          m_paused_plan ? toPauseState(DTR("plan stopped"), TYPE_INF)
                        : toReadyState(DTR("plan stopped"), TYPE_INF);
        }
        else if (!plan_startup)
        {
          onFailure(DTR("no plan is running, request ignored"));
          m_reply.plan_id = "";
        }

        return true;
      }

      void
      pausePlan(void)
      {
        if (!execMode())
        {
          onFailure(DTR("no plan is running, pause request ignored"));
          return;
        }

        if (m_paused_plan)
          war("Discarding previously paused plan %s",
              m_paused_plan->getPlanId());

        debug("Pausing plan %s at maneuver %s", m_plan->getPlanId(),
              m_plan->getCurrentManeuver()->maneuver_id.c_str());

        m_plan->planPaused();

        m_paused_plan.reset(m_plan.release());
        changeLog("");

        vehicleRequest(IMC::VehicleCommand::VC_PAUSE_MANEUVER);
        onSuccess();
        toPauseState(DTR("plan paused"), TYPE_INF);
      }

      void
      resumePlan(uint16_t flags)
      {
        if (!pauseMode())
        {
          onFailure(DTR("no plan is paused, resume request ignored"));
          return;
        }

        if (!m_paused_plan)
        {
          err("Inconsistent state: no paused plan stored.");
          return;
        }

        m_plan.reset(m_paused_plan.release());
        m_plan->planResumed();

        toInitState(DTR("plan initializing: ")
                    + std::string(m_plan->getPlanId()),
                    TYPE_INF);

        if (flags & IMC::PlanControl::FLG_CALIBRATE)
        {
          startCalibration();
          return;
        }

        IMC::PlanManeuver const* curr_man = m_plan->getCurrentManeuver();

        if (!curr_man)
        {
          err("Inconsistent state: no current maneuver stored.");
          return;
        }

        m_pcs.plan_id = m_plan->getPlanId();
        m_reply.plan_id = m_pcs.plan_id;

        debug("Resuming plan %s at maneuver %s", m_pcs.plan_id.c_str(),
              curr_man->maneuver_id.c_str());

        changeLog(m_pcs.plan_id + "_resume");

        startManeuver(curr_man);

        execMode() ? onSuccess(m_last_event) : onFailure(m_last_event);
      }

      //! Load PlanSpecification into plan runtime manager
      //! @param[in] plan_startup true if the plan is starting up
      //! @return PlanStatistics message
      IMC::PlanStatistics
      loadPlanRuntime(bool plan_startup)
      {
        IMC::PlanStatistics stats
        = m_plan->load(m_spec, m_supported_maneuvers, m_cinfo, m_imu_enabled,
                       &m_state);

        // if a plan is not gonna start after this, clear plan object
        if (!plan_startup)
          m_plan->clear();

        return stats;
      }

      //! Look for a plan in the database
      //! @param[in] plan_id name of the plan
      //! @param[in] ps plan specification message
      //! @return true if plan is found
      bool
      lookForPlan(const std::string& plan_id, IMC::PlanSpecification& ps)
      {
        if (plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return false;
        }

        try
        {
          Database::Connection db(m_db_file.c_str(), Database::Connection::CF_RDONLY);

          Database::Statement get_plan_stmt(c_get_plan_stmt, db);
          get_plan_stmt << plan_id;
          if (!get_plan_stmt.execute())
          {
            onFailure(DTR("undefined plan"));
            return false;
          }

          Database::Blob data;
          get_plan_stmt >> data;
          ps.deserializeFields((const uint8_t*)&data[0], data.size());

        }
        catch (std::runtime_error& e)
        {
          onFailure(String::str(DTR("failed loading from DB: %s"), e.what()));
          return false;
        }

        return true;
      }

      //! Get the PlanSpecification from IMC::Message
      //! @param[in] plan_id ID of the plan
      //! @param[in] arg pointer to arg message
      //! @param[out] info string with the error in case of failure
      //! @return false if unable to get the spec
      bool
      parseArg(const std::string& plan_id, const IMC::Message* arg,
               std::string& info)
      {
        if (!arg)
        {
          // Search DB
          m_spec.clear();

          if (!lookForPlan(plan_id, m_spec))
          {
            info = m_reply.info;
            return false;
          }

          return true;
        }

        if (arg->getId() == DUNE_IMC_PLANSPECIFICATION)
        {
          m_spec = *static_cast<const IMC::PlanSpecification*>(arg);
          m_spec.setSourceEntity(getEntityId());

          return true;
        }

        // Quick plan
        IMC::PlanManeuver spec_man;
        const IMC::Maneuver* man = static_cast<const IMC::Maneuver*>(arg);

        spec_man.maneuver_id = arg->getName();
        spec_man.data.set(*man);

        m_spec.clear();
        m_spec.maneuvers.setParent(&m_spec);
        m_spec.plan_id = plan_id;
        m_spec.start_man_id = arg->getName();
        m_spec.maneuvers.push_back(spec_man);

        return true;
      }

      //! Start a given plan
      //! @param[in] plan_id name of the plan to execute
      //! @param[in] spec plan specification message if any
      //! @param[in] flags plan control flags
      //! @return false if previously executing maneuver was not stopped
      bool
      startPlan(const std::string& plan_id, const IMC::Message* spec, uint16_t flags)
      {
        bool stopped = stopPlan(true);

        toInitState(DTR("plan initializing: ") + plan_id, TYPE_INF);

        if (!(flags & IMC::PlanControl::FLG_NO_CLEAR_MANEUVERS))
        {
          IMC::ClearManeuverState clear_maneuvers;
          dispatch(clear_maneuvers);

          if (m_paused_plan)
          {
            war("Discarding paused plan %s", m_paused_plan->getPlanId());
            m_plan.reset(m_paused_plan.release());
          }
        }
        else if (!m_plan)
          m_plan = makePlanRuntime();

        if (!loadPlan(plan_id, spec, true))
          return stopped;

        changeLog(plan_id);

        // Flag the plan as starting
        if (initMode() || execMode())
        {
          if (!stopped)
            m_plan->planStopped();

          m_plan->planStarted();
        }

        dispatch(m_spec);

        if ((flags & IMC::PlanControl::FLG_CALIBRATE) &&
            m_args.do_calib)
        {
          if (!startCalibration())
            return stopped;
        }
        else
        {
          IMC::PlanManeuver const* pman = m_plan->loadStartManeuver();
          startManeuver(pman);

          if (execMode())
          {
            onSuccess(m_last_event);
          }
          else
          {
            onFailure(m_last_event);
            return stopped;
          }
        }

        return true;
      }

      //! Send a request to start calibration procedures
      //! @return true if request was sent
      bool
      startCalibration(void)
      {
        if (blockedMode())
        {
          onFailure(DTR("cannot initialize plan in BLOCKED state"));
          return false;
        }

        IMC::Message* m = 0;

        IMC::StationKeeping sk;

        if (m_args.sk_calib)
        {
          Coordinates::toWGS84(m_state, sk.lat, sk.lon);
          sk.z_units = IMC::Z_DEPTH;
          sk.z = 0;
          sk.radius = m_args.sk_radius;
          sk.speed_units = IMC::SUNITS_RPM;
          sk.speed = m_args.sk_rpm;
          m = static_cast<IMC::Message*>(&sk);
        }

        vehicleRequest(IMC::VehicleCommand::VC_START_CALIBRATION, m);
        return true;
      }

      //! Start a maneuver by name
      //! @param[in] pman pointer to plan maneuver message
      void
      startManeuver(IMC::PlanManeuver const* pman)
      {
        if (pman == NULL)
        {
          toReadyState(m_plan->getCurrentId() + DTR(": invalid maneuver ID"));
          return;
        }

        vehicleRequest(IMC::VehicleCommand::VC_EXEC_MANEUVER, pman->data.get());

        toExecState(pman->maneuver_id + DTR(": executing maneuver"),
                    pman->maneuver_id, pman->data.get(), TYPE_INF);

        m_plan->maneuverStarted(pman->maneuver_id);
      }

      //! Answer to the plan control request
      //! @param[in] type type of reply (same field as plan control message)
      //! @param[in] desc description for the answer
      //! @param[in] print true if output should be printed out
      void
      answer(uint8_t type, const std::string& desc, bool print = true)
      {
        m_reply.type = type;
        m_reply.info = desc;
        dispatch(m_reply);

        if (print)
        {
          std::string str = Utils::String::str(DTR("reply -- %s (%s) -- %s"),
                                               DTR(c_op_desc[m_reply.op]),
                                               m_reply.plan_id.c_str(),
                                               desc.c_str());

          if (type == IMC::PlanControl::PC_FAILURE)
            err("%s", str.c_str());
          else
            inf("%s", str.c_str());
        }
      }

      //! Answer to the reply with a failure message
      //! @param[in] errmsg text error message to send
      //! @param[in] print true if the message should be printed to output
      void
      onFailure(const std::string& errmsg, bool print = true)
      {
        m_pcs.last_outcome = IMC::PlanControlState::LPO_FAILURE;
        m_pcs.plan_progress = -1.0;
        m_pcs.plan_eta = 0;

        answer(IMC::PlanControl::PC_FAILURE, errmsg, print);
      }

      //! Answer to the reply with a success message
      //! @param[in] msg text message to send
      //! @param[in] print true if the message should be printed to output
      void
      onSuccess(const std::string& msg = DTR("OK"), bool print = true)
      {
        m_pcs.plan_progress = -1.0;
        m_pcs.plan_eta = 0;

        answer(IMC::PlanControl::PC_SUCCESS, msg, print);
      }

      double
      setLastEvent(std::string const& event, OutputType print)
      {
        double const now = Clock::getSinceEpoch();

        switch (print)
        {
          case TYPE_INF:
            inf("%s", event.c_str());
            break;
          case TYPE_WAR:
            war("%s", event.c_str());
            break;
          case TYPE_NONE: // fall-through
          default:
            break;
        }

        m_last_event = event;

        return now;
      }

      bool
      isInPlan(void) const
      {
        return initMode() || execMode() || pauseMode();
      }

      void
      planStopped(void)
      {
        m_plan->planStopped();
        changeLog("");
      }

      void
      reportState(double timestamp)
      {
        m_pcs.setTimeStamp(timestamp);
        dispatch(m_pcs, DF_KEEP_TIME);
      }

      void
      toReadyState(const std::string& event_desc, OutputType print = TYPE_INF)
      {
        double const now = setLastEvent(event_desc, print);

        if (changeMode(IMC::PlanControlState::PCS_READY))
          planStopped();

        reportState(now);
      }

      void
      toBlockedState(const std::string& event_desc, OutputType print = TYPE_INF)
      {
        double const now = setLastEvent(event_desc, print);

        if (changeMode(IMC::PlanControlState::PCS_BLOCKED))
          planStopped();

        reportState(now);
      }

      void
      toExecState(const std::string& event_desc, std::string const& man_id,
                  IMC::Message const* maneuver, OutputType print = TYPE_INF)
      {
        double const now = setLastEvent(event_desc, print);
        changeMode(IMC::PlanControlState::PCS_EXECUTING);

        if (maneuver)
        {
          m_pcs.man_id = man_id;
          m_pcs.man_type = maneuver->getId();
        }
        else
        {
          m_pcs.man_id.clear();
          m_pcs.man_type = c_invalid_maneuver;
        }

        reportState(now);
      }

      void
      toInitState(const std::string& event_desc, OutputType print = TYPE_INF)
      {
        double const now = setLastEvent(event_desc, print);
        changeMode(IMC::PlanControlState::PCS_INITIALIZING);
        reportState(now);
      }

      void
      toPauseState(const std::string& event_desc, OutputType print = TYPE_INF)
      {
        double const now = setLastEvent(event_desc, print);

        bool const two_plans_loaded = m_plan && m_paused_plan;
        bool const was_in_plan = changeMode(IMC::PlanControlState::PCS_PAUSED);

        if (was_in_plan && two_plans_loaded)
        {
          planStopped();
          debug("Returning to paused state -- freeing m_plan");
          m_plan.reset(nullptr);
        }

        reportState(now);
      }

      //! Change the current plan control state mode
      //! @param[in] s plan control state to switch to
      //! @return true if the PCS changed and the vehicle was executing a plan.
      bool
      changeMode(IMC::PlanControlState::StateEnum s)
      {
        if (s == m_pcs.state)
          return false;

        bool const was_in_plan = isInPlan();

        m_pcs.state = s;
        debug(DTR("now in %s state"), DTR(c_state_desc[s]));

        return was_in_plan;
      }

      //! Set task's initial state
      void
      setInitialState(void)
      {
        m_pcs.state = IMC::PlanControlState::PCS_READY;
        m_pcs.plan_id.clear();
        m_pcs.man_id.clear();
        m_pcs.man_type = c_invalid_maneuver;
        m_pcs.plan_progress = -1.0;
        m_pcs.last_outcome = IMC::PlanControlState::LPO_NONE;
        m_last_event = DTR("initializing");
        dispatch(m_pcs);

        m_vreq_ctr = 0;
        m_vc_reply_deadline = -1;
        m_last_vstate = Clock::get();
      }

      //! Report progress
      void
      reportProgress(void)
      {
        // Must be executing or calibrating to be able to compute progress
        if (!m_plan || (!execMode() && !initMode()))
          return;

        m_pcs.plan_progress = m_plan->updateProgress(&m_mcs);
        m_pcs.plan_eta = (int32_t)m_plan->getETA();
      }

      void
      reportState(void)
      {
        if (m_report_timer.overflow())
        {
          if (m_args.plan_arguments.compute_progress)
            reportProgress();

          dispatch(m_pcs);

          m_report_timer.reset();
        }
      }

      void
      handleTimeout(void)
      {
        m_vc_reply_deadline = -1;

        toReadyState(DTR("vehicle reply timeout"));

        // Popping all requests
        while (m_requests.size())
          m_requests.pop();

        // Increment local request id to prevent old replies from being processed
        ++m_vreq_ctr;

        err(DTR("cleared all requests"));
      }

      void
      onMain(void)
      {
        setInitialState();

        while (!stopping())
        {
          reportState();

          double const now = Clock::get();

          if ((getEntityState() == IMC::EntityState::ESTA_NORMAL) &&
              (now - m_last_vstate >= c_vs_timeout))
          {
            toBlockedState(DTR("vehicle state timeout"));
            m_last_vstate = now;
          }

          // got requests to process
          if (!pendingReply() && m_requests.size())
          {
            processRequest(&m_requests.front());
            m_requests.pop();
          }

          double const delta = m_vc_reply_deadline < 0 ? 1.0 : m_vc_reply_deadline - now;

          // past vehicle reply deadline
          if (delta <= 0.0)
          {
            handleTimeout();
            continue;
          }

          waitForMessages(std::min(1.0, delta));
        }
      }

      void
      vehicleRequest(IMC::VehicleCommand::CommandEnum command,
                     const IMC::Message* arg = 0)
      {
        m_vc.type = IMC::VehicleCommand::VC_REQUEST;
        m_vc.request_id = ++m_vreq_ctr;
        m_vc.command = command;

        if (arg)
          m_vc.maneuver.set(*static_cast<const IMC::Maneuver*>(arg));

        if (command == IMC::VehicleCommand::VC_START_CALIBRATION)
        {
          m_plan->calibrationStarted();
          m_vc.calib_time = m_plan->getEstimatedCalibrationTime();
          debug("Calibrating for %u seconds", m_vc.calib_time);
        }
        else
        {
          m_vc.calib_time = 0;
        }

        dispatch(m_vc);

        if (arg)
          m_vc.maneuver.clear();
        m_vc_reply_deadline = Clock::get() + c_vc_reply_timeout;
      }

      inline bool
      pendingReply(void)
      {
        return m_vc_reply_deadline >= 0;
      }

      inline bool
      blockedMode(void) const
      {
        return m_pcs.state == IMC::PlanControlState::PCS_BLOCKED;
      }

      inline bool
      readyMode(void) const
      {
        return m_pcs.state == IMC::PlanControlState::PCS_READY;
      }

      inline bool
      initMode(void) const
      {
        return m_pcs.state == IMC::PlanControlState::PCS_INITIALIZING;
      }

      inline bool
      execMode(void) const
      {
        return m_pcs.state == IMC::PlanControlState::PCS_EXECUTING;
      }

      inline bool
      pauseMode(void) const
      {
        return m_pcs.state == IMC::PlanControlState::PCS_PAUSED;
      }

      void
      changeLog(const std::string& name)
      {
        m_lc.op = IMC::LoggingControl::COP_REQUEST_START;
        m_lc.name = name;
        dispatch(m_lc);
      }
    };
  }
}

DUNE_TASK
