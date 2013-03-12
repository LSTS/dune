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
// Author: Eduardo Marques                                                  *
// Author: Paulo Dias (plan actions addition)                               *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Plan.hpp"

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    //! Timeout for the vehicle command reply.
    const double c_vc_reply_timeout = 2.5;
    //! Timeout for the vehicle state
    const double c_vs_timeout = 2.5;
    //! Plan Command operation descriptions
    const char* c_op_desc[] = {DTR("Start Plan"), DTR("Stop Plan"), DTR("Load Plan"), DTR("Get Plan")};
    //! Plan state descriptions
    const char* c_state_desc[] = {DTR("BLOCKED"), DTR("READY"), DTR("INITIALIZING"), DTR("EXECUTING")};
    //! DataBase statement
    static const char* c_get_plan_stmt = "select data from Plan where plan_id=?";

    struct Arguments
    {
      //! Whether or not to compute plan's progress
      bool progress;
      //! State report period
      float speriod;
      //! Factor to convert from RPMs to meters per second
      float speed_conv_rpm;
      //! Conv to convert from actuation to meters per second      
      float speed_conv_act;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Pointer to Plan class
      Plan* m_plan;
      //! Plan control interface
      IMC::PlanControlState m_pcs;
      IMC::PlanControl m_reply;
      //! Last event description
      std::string m_last_event;
      //! Vehicle interface
      bool m_vehicle_ready;
      uint16_t m_vreq_ctr;
      double m_vc_reply_deadline;
      double m_last_vstate;
      IMC::VehicleCommand m_vc;
      //! Is the plan loaded
      bool m_plan_loaded;
      //! PlanSpecification message
      IMC::PlanSpecification m_spec;
      // List of supported maneuvers.
      std::set<uint16_t> m_supported_maneuvers;
      //! Database related (for plan DB direct queries to avoid
      //! unnecessary interface with bus / PlanDB task directly)
      Database::Connection* m_db;
      Database::Statement* m_get_plan_stmt;
      //! Misc.
      IMC::LoggingControl m_lc;
      IMC::EstimatedState m_state;
      //! ManeuverControlState message
      IMC::ManeuverControlState m_mcs;
      //! Timer counter for state report period
      Time::Counter<float> m_report_timer;
      //! Map of component names to entityinfo
      std::map<std::string, IMC::EntityInfo> m_cinfo;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_plan(NULL),
        m_db(NULL),
        m_get_plan_stmt(NULL)
      {
        param("Compute Progress", m_args.progress)
        .defaultValue("false")
        .description("True if plan progress should be computed");

        param("State Report Frequency", m_args.speriod)
        .defaultValue("3.0")
        .units(Units::Hertz)
        .description("Frequency of plan control state");

        param("RPM Conversion Factor", m_args.speed_conv_rpm)
        .defaultValue("0.001")
        .description("Factor to convert from RPMs to meters per second");

        param("Actuation Conversion Factor", m_args.speed_conv_act)
        .defaultValue("0.02")
        .description("Factor to convert from actuation to meters per second");

        bind<IMC::PlanControl>(this);
        bind<IMC::PlanDB>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::ManeuverControlState>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::RegisterManeuver>(this);
        bind<IMC::VehicleCommand>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EntityInfo>(this);
      }

      ~Task()
      {
        closeDB();
      }

      void
      onUpdateParameters(void)
      {
        m_args.speriod = 1.0 / m_args.speriod;
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_plan);
      }

      void
      onResourceAcquisition(void)
      {
        m_plan = new Plan(&m_spec, m_args.progress,
                          m_args.speed_conv_rpm, m_args.speed_conv_act);
      }

      void
      onResourceInitialization(void)
      {
        m_report_timer.setTop(m_args.speriod);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_state = *msg;
      }

      void
      consume(const IMC::ManeuverControlState* msg)
      {
        m_mcs = *msg;
      }

      void
      consume(const IMC::PowerOperation* po)
      {
        switch (po->op)
        {
          case IMC::PowerOperation::POP_PWR_DOWN_IP:
            closeDB();
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_POWER_DOWN);
            break;
          case IMC::PowerOperation::POP_PWR_DOWN_ABORTED:
            openDB();
            break;
          default:
            break;
        }
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
      consume(const IMC::PlanDB* pdb)
      {
        if (pdb->op != IMC::PlanDB::DBOP_BOOT || pdb->type != IMC::PlanDB::DBT_SUCCESS)
          return;

        openDB();
      }

      void
      openDB(void)
      {
        if (m_db != NULL)
          return;

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        Path db_file = m_ctx.dir_db / "Plan.db";

        inf(DTR("database file: '%s'"), db_file.c_str());

        m_db = new Database::Connection(db_file.c_str(), true);
        m_get_plan_stmt = new Database::Statement(c_get_plan_stmt, *m_db);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      closeDB(void)
      {
        if (m_db == NULL)
        {
          return;
        }

        Memory::clear(m_get_plan_stmt);

        delete m_db;
        m_db = NULL;

        inf(DTR("database connection closed"));
      }

      void
      consume(const IMC::VehicleCommand* vc)
      {
        if (vc->type == IMC::VehicleCommand::VC_REQUEST)
          return;

        if ((vc->getDestination() != getSystemId()) || vc->getDestinationEntity() != getEntityId() || m_vreq_ctr != vc->request_id)
          return;

        if (!pendingReply())
          return;

        m_vc_reply_deadline = -1;
        bool error = vc->type == IMC::VehicleCommand::VC_FAILURE;

        if (initMode() || execMode())
        {
          if (error)
            changeMode(IMC::PlanControlState::PCS_READY, vc->info, false);
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
            onVehicleError(vs);
            break;
          case IMC::VehicleState::VS_MANEUVER:
            onVehicleManeuver(vs);
            break;
          case IMC::VehicleState::VS_EXTERNAL:
            onVehicleExternalControl(vs);
            break;
        }
      }

      void
      onVehicleService(const IMC::VehicleState* vs)
      {
        switch (m_pcs.state)
        {
          case IMC::PlanControlState::PCS_BLOCKED:
            if (m_plan_loaded)
              changeMode(IMC::PlanControlState::PCS_READY, DTR("vehicle ready"));
            else if (!m_vehicle_ready)
              m_vehicle_ready = true;
            break;
          case IMC::PlanControlState::PCS_INITIALIZING:
            if (!pendingReply())
            {
              IMC::PlanManeuver* pman = m_plan->loadStartManeuver();
              startManeuver(pman);
            }
            break;
          case IMC::PlanControlState::PCS_EXECUTING:
            if (!pendingReply())
            {
              onFailure(vs->last_error, false);
              m_reply.plan_id = m_spec.plan_id;
              changeMode(IMC::PlanControlState::PCS_READY, vs->last_error);
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

        if (vs->flags & IMC::VehicleState::VFLG_MANEUVER_DONE)
        {
          if (m_plan->isDone())
          {
            vehicleRequest(IMC::VehicleCommand::VC_STOP_MANEUVER);

            std::string comp = DTR("plan completed");
            onSuccess(comp, false);
            m_pcs.last_outcome = IMC::PlanControlState::LPO_SUCCESS;
            m_reply.plan_id = m_spec.plan_id;
            changeMode(IMC::PlanControlState::PCS_READY, comp);
          }
          else
          {
            IMC::PlanManeuver* pman = m_plan->loadNextManeuver();
            startManeuver(pman);
          }
        }
        else
        {
          m_pcs.man_eta = vs->maneuver_eta;
        }
      }

      void
      onVehicleError(const IMC::VehicleState* vs)
      {
        m_vehicle_ready = false;
        std::string err_ents = DTR("vehicle errors: ") + vs->error_ents;
        std::string edesc = vs->last_error_time < 0 ? err_ents : vs->last_error;

        if (execMode())
        {
          onFailure(edesc);
          m_reply.plan_id = m_spec.plan_id;
        }

        // @FIXME blockedmode or there are new error entities
        if (!blockedMode() || edesc != m_last_event)
        {
          if (initMode())
          {
            onFailure(edesc);
            m_reply.plan_id = m_spec.plan_id;
          }

          changeMode(IMC::PlanControlState::PCS_BLOCKED, edesc, false);
        }
      }

      void
      onVehicleCalibration(const IMC::VehicleState* vs)
      {
        (void)vs;

        if (initMode())
          return;

        if (!blockedMode())
          changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("vehicle in CALIBRATION mode"), false);
      }

      void
      onVehicleExternalControl(const IMC::VehicleState* vs)
      {
        (void)vs;

        if (blockedMode())
          return;

        changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("vehicle in EXTERNAL mode"), false);
      }

      void
      consume(const IMC::PlanControl* pc)
      {
        if (pc->type != IMC::PlanControl::PC_REQUEST)
          return;

        m_reply.setDestination(pc->getSource());
        m_reply.setDestinationEntity(pc->getSourceEntity());
        m_reply.request_id = pc->request_id;
        m_reply.op = pc->op;
        m_reply.plan_id = pc->plan_id;

        inf(DTR("request -- %s (%s)"), c_op_desc[m_reply.op], m_reply.plan_id.c_str());

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
            loadPlan(pc->plan_id, pc->arg.isNull() ? 0 : pc->arg.get());
            break;
          case IMC::PlanControl::PC_GET:
            getPlan();
            break;
        }
      }

      //! Load a plan into the vehicle
      //! @param[in] plan_id name of the plan
      //! @param[in] arg argument which may either be a maneuver or a plan specification
      //! @param[in] plan_startup true if a plan will start right after
      //! @return true if plan is successfully loaded
      bool
      loadPlan(const std::string& plan_id, const IMC::Message* arg, bool plan_startup = false)
      {
        if ((initMode() && !plan_startup) || execMode())
        {
          onFailure(DTR("cannot load plan now"));
          return false;
        }

        if (arg)
        {
          const IMC::PlanSpecification* given_plan = dynamic_cast<const IMC::PlanSpecification*>(arg);

          if (given_plan)
          {
            m_spec = *given_plan;
          }
          else
          {
            // Quick plan
            IMC::PlanManeuver mspec;
            const IMC::Maneuver* man = dynamic_cast<const IMC::Maneuver*>(arg);

            if (man)
            {
              mspec.maneuver_id = arg->getName();
              mspec.data.set(*man);
              m_spec.clear();
              m_spec.plan_id = plan_id;
              m_spec.start_man_id = arg->getName();
              m_spec.maneuvers.push_back(mspec);
            }
            else
            {
              changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("plan load failed: undefined maneuver or plan"));
              return false;
            }
          }
        }
        else
        {
          // Search DB
          m_spec.clear();

          if (!lookForPlan(plan_id, m_spec))
          {
            changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("plan load failed: ") + m_reply.info);
            return false;
          }
        }

        if (!parsePlan())
        {
          changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("plan validation failed: ") + m_reply.info);
          return false;
        }

        m_plan_loaded = true;
        m_pcs.plan_id = m_spec.plan_id;

        if (plan_startup)
        {
          onSuccess(DTR("plan loaded"), false);
        }
        else
        {
          if (m_vehicle_ready)
            changeMode(IMC::PlanControlState::PCS_READY, DTR("plan loaded"));
          else
            changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("plan loaded but vehicle not ready"));
        }

        return true;
      }

      //! Get current plan
      void
      getPlan(void)
      {
        if (!m_plan_loaded)
        {
          onFailure(DTR("no plan is loaded"));
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
        if (initMode() || execMode())
        {
          if (!plan_startup)
          {
            // stop maneuver only if we are not executing a plan afterwards
            vehicleRequest(IMC::VehicleCommand::VC_STOP_MANEUVER);

            m_reply.plan_id = m_spec.plan_id;
            changeMode(IMC::PlanControlState::PCS_READY, DTR("plan stopped"));
          }
          else if (m_plan_loaded)
          {
            inf(DTR("switching to new plan"));
            return false;
          }
          else
          {
            return false;
          }
        }
        else
        {
          if (!plan_startup)
          {
            if (m_plan_loaded)
            {
              onFailure(DTR("loaded plan is not running, request ignored"));
              m_reply.plan_id = m_spec.plan_id;
            }
            else
            {
              onFailure(DTR("no plan is even loaded, request ignored"));
              m_reply.plan_id = "";
            }
          }
        }

        return true;
      }

      //! Reset the plan data
      void
      resetPlanData(void)
      {
        m_pcs.plan_id.clear();
        m_plan->clear();
        m_spec.clear();
        m_mcs.clear();
      }

      //! Parse a given plan
      //! @return true if was able to parse the plan
      inline bool
      parsePlan(void)
      {
        std::string desc;
        if (!m_plan->parse(&m_supported_maneuvers, desc, &m_state))
        {
          onFailure(desc);
          return false;
        }

        return true;
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
          *m_get_plan_stmt << plan_id;

          if (!m_get_plan_stmt->execute())
          {
            onFailure(DTR("undefined plan"));
            m_get_plan_stmt->reset();
            return false;
          }

          Database::Blob data;

          *m_get_plan_stmt >> data;

          ps.deserializeFields((const uint8_t*)&data[0], data.size());

          m_get_plan_stmt->reset();
        }
        catch (std::runtime_error& e)
        {
          err("%s", e.what());
          throw std::runtime_error(Utils::String::str("%s", e.what()));
        }

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

        changeMode(IMC::PlanControlState::PCS_INITIALIZING, DTR("plan initializing: ") + plan_id);

        if (!loadPlan(plan_id, spec, true))
          return stopped;

        changeLog(plan_id);

        dispatch(m_spec);

        if (flags & IMC::PlanControl::FLG_CALIBRATE)
        {
          if (!startCalibration())
            return stopped;
        }
        else
        {
          IMC::PlanManeuver* pman = m_plan->loadStartManeuver();
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

        vehicleRequest(IMC::VehicleCommand::VC_CALIBRATE);
        return true;
      }

      //! Start a maneuver by name
      //! @param[in] pman pointer to plan maneuver message
      void
      startManeuver(IMC::PlanManeuver* pman)
      {
        if (pman == NULL)
        {
          changeMode(IMC::PlanControlState::PCS_READY,
                     m_plan->getCurrentId() + DTR(": invalid maneuver ID"));
          return;
        }

        vehicleRequest(IMC::VehicleCommand::VC_EXEC_MANEUVER, pman->data.get());

        changeMode(IMC::PlanControlState::PCS_EXECUTING,
                   pman->maneuver_id + DTR(": executing maneuver"),
                   pman->maneuver_id, pman->data.get());
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
          std::string str = Utils::String::str(DTR("reply -- %s (%s) -- %s"), c_op_desc[m_reply.op], m_reply.plan_id.c_str(), desc.c_str());

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

      //! Change the current plan control state mode
      //! @param[in] s plan control state to switch to
      //! @param[in] event_desc description of the event that motivated the change
      //! @param[in] nid id of the maneuver if any
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in] print true if the messages should be printed to output
      void
      changeMode(IMC::PlanControlState::StateEnum s, const std::string& event_desc,
                 const std::string& nid, const IMC::Message* maneuver, bool print = true)
      {
        double now = Clock::getSinceEpoch();

        if (print)
          war("%s", event_desc.c_str());

        if (!m_plan_loaded)
          resetPlanData();

        m_last_event = event_desc;

        if (s != m_pcs.state)
        {
          debug(DTR("now in %s state"), c_state_desc[s]);

          bool was_plan_exec = initMode() || execMode();

          m_pcs.state = s;

          bool is_plan_exec = initMode() || execMode();

          if (was_plan_exec && !is_plan_exec)
            changeLog("idle");
        }

        if (maneuver)
        {
          m_pcs.man_id = nid;
          m_pcs.man_type = maneuver->getId();
        }
        else
        {
          m_pcs.man_id.clear();
          m_pcs.man_type = 0xFFFF;
        }

        m_pcs.setTimeStamp(now);
        dispatch(m_pcs, DF_KEEP_TIME);
      }

      //! Change the current plan control state mode
      //! @param[in] s plan control state to switch to
      //! @param[in] event_desc description of the event that motivated the change
      //! @param[in] print true if the messages should be printed to output
      void
      changeMode(IMC::PlanControlState::StateEnum s, const std::string& event_desc,
                 bool print = true)
      {
        changeMode(s, event_desc, "", NULL, print);
      }

      //! Set task's initial state
      void
      setInitialState(void)
      {
        m_plan_loaded = false;
        m_vehicle_ready = false;
        m_pcs.state = IMC::PlanControlState::PCS_BLOCKED;
        m_pcs.plan_id.clear();
        m_pcs.man_id.clear();
        m_pcs.man_type = 0xFFFF;
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
        if (m_plan == NULL || !execMode())
          return;

        m_pcs.plan_progress = m_plan->getProgress(&m_mcs);
        m_pcs.plan_eta = m_plan->getTotalDuration() * (1.0 - 0.01 * m_pcs.plan_progress);
      }

      void
      onMain(void)
      {
        setInitialState();

        while (!stopping())
        {
          if (m_report_timer.overflow())
          {
            if (m_args.progress)
              reportProgress();

            dispatch(m_pcs);

            m_report_timer.reset();
          }

          double now = Clock::get();

          if ((getEntityState() == IMC::EntityState::ESTA_NORMAL) &&
              (now - m_last_vstate >= c_vs_timeout))
          {
            changeMode(IMC::PlanControlState::PCS_BLOCKED, DTR("vehicle state timeout"));
            m_last_vstate = now;
          }

          double delta = m_vc_reply_deadline < 0 ? 1 : m_vc_reply_deadline - now;

          if (delta > 0)
          {
            waitForMessages(std::min(1.0, delta));
            continue;
          }

          // handle reply timeout
          m_vc_reply_deadline = -1;

          changeMode(IMC::PlanControlState::PCS_READY, DTR("vehicle reply timeout"));
        }
      }

      void
      vehicleRequest(IMC::VehicleCommand::CommandEnum command, const IMC::Message* arg = 0)
      {
        m_vc.type = IMC::VehicleCommand::VC_REQUEST;
        m_vc.request_id = ++m_vreq_ctr;
        m_vc.command = command;

        if (arg)
          m_vc.maneuver.set(*dynamic_cast<const IMC::Maneuver*>(arg));

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
