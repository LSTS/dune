//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "ManeuverSupervisor.hpp"

// Behavior Tree headers.
#include "behaviortree_cpp/bt_factory.h"

namespace Supervisors
{
  namespace Vehicle
  {
    using DUNE_NAMESPACES;

    //! State description strings
    static const char* c_state_desc[] = {DTR_RT("SERVICE"), DTR_RT("CALIBRATION"),
                                         DTR_RT("ERROR"), DTR_RT("MANEUVERING"),
                                         DTR_RT("EXTERNAL CONTROL"), DTR_RT("BOOT")};
    //! Vehicle command description strings
    static const char* c_cmd_desc[] =
    {"maneuver start", "maneuver stop", "calibration start", "calibration stop"};
    //! Printing errors period
    static const float c_error_period = 2.0;
    //! Maneuver request timeout
    static const float c_man_timeout = 1.0;
    //! Cooldown before checking control loops after change into service mode
    static const float c_loops_check_time = 2.0;

    struct Arguments
    {
      //! Entities that set the vehicle in error regardless
      //! of ignoring errors during plan execution.
      std::vector<std::string> vital_ents;
      //! Allow external control
      bool ext_control;
      //! Timeout for starting or stopping a maneuver
      double handle_timeout;

      bool skip;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Timer to wait for calibration and maneuver requests.
      float m_switch_time;
      //! Currently ignoring errors while executing plan.
      bool m_ignore_errors;
      //! Counter for printing errors
      Time::Counter<float> m_err_timer;
      //! Vehicle command message.
      IMC::VehicleCommand m_vc_reply;
      //! Vehicle state message.
      IMC::VehicleState m_vs;
      //! Stop maneuver message.
      IMC::StopManeuver m_stop;
      //! Idle maneuver message.
      IMC::IdleManeuver m_idle;
      //! Control loops last reference
      uint32_t m_scope_ref;
      //! Vector of labels from entities in error
      std::vector<std::string> m_ents_in_error;
      //! Last vehicle state operation mode
      IMC::VehicleState::OperationModeEnum m_last_op;
      //! Entities booting
      unsigned m_eboot;
      //! Time counter for enabled loops in service mode
      Time::Counter<float> m_loops_timer;
      //! Maneuver handler
      ManeuverSupervisor* m_man_sup;
      //! A timeout for calibration state
      float m_calib_timeout;
      //! Task arguments.
      Arguments m_args;
      //! Tree XML path
      DUNE::FileSystem::Path path = Path(DUNE_PATH_SRC) / "src" / "Supervisors" / "Vehicle" / "Manuever.xml";
      //! BT factory and runtime objects
      BT::BehaviorTreeFactory m_bt_factory;
      BT::Blackboard::Ptr m_bt_blackboard;
      BT::Tree m_bt_tree;
      bool m_bt_ready;
      //! Resume logic variables
      std::string m_resume_man_id;
      std::string m_resume_plan_id;
      std::string m_stage_man_id;
      std::string m_stage_plan_id;
      bool m_can_resume;
      //bool m_can_resume_teleop;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_switch_time(-1.0),
        m_ignore_errors(false),
        m_scope_ref(0),
        m_man_sup(NULL)
      {
        param("Vital Entities", m_args.vital_ents)
        .defaultValue("")
        .description("Relevant entities that are always considered "
                     "regardless of ignoring errors during plan execution");

        param("Allows External Control", m_args.ext_control)
        .defaultValue("true")
        .description("Allow for the vehicle to be externally controlled");

        param("Maneuver Handling Timeout", m_args.handle_timeout)
        .defaultValue("1.0")
        .description("Timeout for starting or stopping a maneuver");

        param("Skip maneuver Control", m_args.skip)
        .defaultValue("false")
        .description("Skip maneuver control");

        bind<IMC::Abort>(this);
        bind<IMC::ControlLoops>(this);
        bind<IMC::EntityMonitoringState>(this);
        bind<IMC::ManeuverControlState>(this);
        bind<IMC::VehicleCommand>(this);
        bind<IMC::PlanControl>(this);
        bind<IMC::PlanControlState>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.skip))
        {
          if (m_args.skip)
          {
            inf("skip called");
          
            m_bt_blackboard->set("Consume_ID", 1);
            m_bt_blackboard->set("skip", true);
            m_bt_tree.tickOnce();

            applyEntityParameter(&m_args.skip, false);
          }
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_man_sup = new ManeuverSupervisor(this, m_args.handle_timeout);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_man_sup);
      }

      void
      onResourceInitialization(void)
      {
        setInitialState();
        m_err_timer.setTop(c_error_period);
        m_loops_timer.setTop(c_loops_check_time);
        m_idle.duration = 0;
        if (m_bt_factory.builders().count("ManueverControlState_Switch") == 0)
        {
          // Register Action/Condition Nodes
          m_bt_factory.registerBuilder<eta_update>("eta_update", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<eta_update>(name, config, this);});
          m_bt_factory.registerBuilder<set_done>("set_done", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<set_done>(name, config, this);});
          m_bt_factory.registerBuilder<ERROR>("ERROR", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<ERROR>(name, config, this);});
          m_bt_factory.registerBuilder<Source_mode>("Source_mode", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<Source_mode>(name, config, this);});
          m_bt_factory.registerBuilder<VC_EXEC>("VC_EXEC", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<VC_EXEC>(name, config, this);});
          m_bt_factory.registerBuilder<VC_STOP>("VC_STOP", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<VC_STOP>(name, config, this);});
          m_bt_factory.registerBuilder<VC_START_CAL>("VC_START_CAL", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<VC_START_CAL>(name, config, this);});
          m_bt_factory.registerBuilder<VC_STOP_CAL>("VC_STOP_CAL", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<VC_STOP_CAL>(name, config, this);});
          m_bt_factory.registerBuilder<VehicleCommand_Switch>("VehicleCommand_Switch", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<VehicleCommand_Switch>(name, config, this);});
          m_bt_factory.registerBuilder<ProcessRequests>("ProcessRequests", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<ProcessRequests>(name, config, this);}); 
          
          // Resume node
          m_bt_factory.registerBuilder<CheckResume>("CheckResume", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<CheckResume>(name, config, this);});
          m_bt_factory.registerBuilder<TrackResumeState>("TrackResumeState", [this](const std::string& name, const BT::NodeConfig& config) {return std::make_unique<TrackResumeState>(name, config, this);});

          // Register Control Nodes
          m_bt_factory.registerNodeType<ManueverControlState_Switch>("ManueverControlState_Switch");
          m_bt_factory.registerNodeType<Tree_selector>("Tree_selector");
          m_bt_factory.registerNodeType<STOPPED>("STOPPED");

          m_bt_blackboard = BT::Blackboard::create();

          try {
            // Check if file exists first using DUNE FileSystem
            if (!path.isFile()) {
                throw std::runtime_error("File not found at " + path.str());
            }

            m_bt_factory.registerBehaviorTreeFromFile(path.str());
            m_bt_tree = m_bt_factory.createTree("MainTree", m_bt_blackboard);
            
            inf("BT loaded successfully from: %s", path.c_str());
            m_bt_blackboard->set("skip", false);
            m_bt_ready = true;
          } 
          catch (const std::exception& e) {
            err("BT loading failed: %s", e.what());
            m_bt_ready = false;
            // Set an entity error so the user knows why the supervisor is inactive
            setEntityState(IMC::EntityState::ESTA_FAILURE, "BT XML Error");
          }
        }
      }

      void
      reset(void)
      {
        m_man_sup->addStop();

        m_ignore_errors = false;

        m_err_timer.reset();

        m_vs.control_loops = 0;

        m_man_sup->addStart(&m_idle);
      }

      void
      setInitialState(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_vs.op_mode = IMC::VehicleState::VS_BOOT;
        m_vs.maneuver_type = 0xFFFF;
        m_vs.maneuver_stime = -1;
        m_vs.maneuver_eta = 0xFFFF;
        m_vs.error_ents.clear();
        m_vs.error_count = 0;
        m_vs.flags = 0;
        m_vs.last_error.clear();
        m_vs.last_error_time = -1;
        m_vs.control_loops = 0;

        m_last_op = (IMC::VehicleState::OperationModeEnum)m_vs.op_mode;
        m_eboot = 0;

        m_ents_in_error.clear();
      }

      void
      changeMode(IMC::VehicleState::OperationModeEnum s, IMC::Message* maneuver = 0)
      {
        if (m_vs.op_mode != s)
        {
          // if it's in service and some entities are in error
          if (s == IMC::VehicleState::VS_SERVICE && entityError())
            s = IMC::VehicleState::VS_ERROR;

          // if previous state was boot and there are still entities booting
          if ((s == IMC::VehicleState::VS_ERROR) && (m_eboot) &&
              (m_last_op == IMC::VehicleState::VS_BOOT))
            s = IMC::VehicleState::VS_BOOT;

          m_last_op = (IMC::VehicleState::OperationModeEnum)m_vs.op_mode;

          m_vs.op_mode = s;

          if (serviceMode() && m_vs.control_loops)
            m_loops_timer.reset();

          war(DTR("now in '%s' mode"), DTR(c_state_desc[s]));

          if (!maneuverMode())
          {
            m_vs.maneuver_type = 0xFFFF;
            m_vs.maneuver_stime = -1;
            m_vs.maneuver_eta = 0xFFFF;
            m_vs.flags &= ~IMC::VehicleState::VFLG_MANEUVER_DONE;
          }
        }

        if (maneuverMode() || (calibrationMode() && maneuver))
        {
          // original entity ID is the Plan.Engine's
          maneuver->setSourceEntity(getEntityId());
          m_man_sup->addStart(maneuver);
          m_vs.maneuver_stime = maneuver->getTimeStamp();
          m_vs.maneuver_type = maneuver->getId();
          m_vs.maneuver_eta = 0xFFFF;
          m_vs.last_error.clear();
          m_vs.last_error_time = -1;
          m_vs.flags &= ~IMC::VehicleState::VFLG_MANEUVER_DONE;
        }

        m_switch_time = -1.0;
        dispatch(m_vs);
      }

      void
      consume(const IMC::Abort* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getSource() == getSystemId())
        {
          try
          {
            m_vs.last_error = DTR("got abort request from entity ") + resolveEntity(msg->getSourceEntity()) +
                String::str(" @ 0x%02X", msg->getSourceEntity());
          }
          catch (Entities::EntityDataBase::InvalidId& e )
          {
            m_vs.last_error = DTR("got abort request from entity ") +
                String::str("unknown @ 0x%02X", msg->getSourceEntity());
          }
        }
        else
        {
          m_vs.last_error = DTR("got abort request from system ") + String::str("%s - 0x%04X @ 0x%02X",
              resolveSystemId(msg->getSource()), msg->getSource(), msg->getSourceEntity());
        }
        m_vs.last_error_time = Clock::getSinceEpoch();
        err("%s", m_vs.last_error.c_str());

        stopManeuver(true);

        IMC::Aborted aborted;
        dispatch(aborted);
      }

      void
      onEnabledControlLoops(void)
      {
        debug("some control loops are enabled now");

        switch ((IMC::VehicleState::OperationModeEnum)m_vs.op_mode)
        {
          case IMC::VehicleState::VS_SERVICE:
            m_loops_timer.reset();
            break;
          case IMC::VehicleState::VS_ERROR:
          case IMC::VehicleState::VS_BOOT:
            if (nonOverridableLoops())
              changeMode(IMC::VehicleState::VS_EXTERNAL);
            else
              reset();  // try to disable the control loops
            break;
          default:
            break; // ignore
        }
      }

      void
      onDisabledControlLoops(void)
      {
        debug("no control loops are enabled now");

        if (externalMode())
          changeMode(IMC::VehicleState::VS_SERVICE);

        // ignore otherwise
      }

      void
      consume(const IMC::ControlLoops* msg)
      {
        // If this scope is obsolete, ignore message
        if (msg->scope_ref < m_scope_ref)
          return;

        m_scope_ref = msg->scope_ref;

        uint32_t was = m_vs.control_loops;

        if (msg->enable == IMC::ControlLoops::CL_ENABLE)
        {
          m_vs.control_loops |= msg->mask;

          if (!was && m_vs.control_loops)
            onEnabledControlLoops();
        }
        else
        {
          m_vs.control_loops &= ~msg->mask;

          if (was && !m_vs.control_loops)
            onDisabledControlLoops();
        }
      }

      //! Split comma separated list and translate labels, then join again
      //! @param[in] list comma separated list of entity labels
      //! @return 'comma + white space' separated list of translated entity labels
      std::string
      splitAndTranslate(const std::string& list)
      {
        std::vector<std::string> elist;
        String::split(list, ",", elist);

        for (unsigned i = 0; i < elist.size(); ++i)
          elist[i] = DTR(elist[i].c_str());

        return String::join(elist.begin(), elist.end(), ", ");
      }

      void
      consume(const IMC::EntityMonitoringState* msg)
      {
        uint8_t prev_count = m_vs.error_count;

        m_vs.error_count = msg->ccount + msg->ecount;

        if (m_vs.error_count && msg->last_error_time > m_vs.last_error_time)
        {
          m_vs.last_error = msg->last_error;
          m_vs.last_error_time = msg->last_error_time;
        }

        m_vs.error_ents = "";
        m_ents_in_error.clear();
        m_eboot = msg->ecount;

        if (msg->ccount)
          m_vs.error_ents = msg->cnames;

        if (msg->ecount)
          m_vs.error_ents += (msg->ccount ? "," : "") + msg->enames;

        // copy list to vector
        String::split(m_vs.error_ents, ",", m_ents_in_error);
        // translate list for vehicle state message
        m_vs.error_ents = splitAndTranslate(m_vs.error_ents);

        if (prev_count && !m_vs.error_count)
        {
          inf(DTR("entity errors cleared"));
        }
        else if ((prev_count != m_vs.error_count) && m_err_timer.overflow())
        {
          war(DTR("vehicle errors: %s"), m_vs.error_ents.c_str());

          m_err_timer.reset();
        }

        if (errorMode() || bootMode())
        {
          if (!m_vs.error_count)
            changeMode(IMC::VehicleState::VS_SERVICE);
          else if (!m_eboot && bootMode())
            changeMode(IMC::VehicleState::VS_ERROR);

          return;
        }

        // External/maneuver mode
        if (externalMode() || maneuverMode())
        {
          if (entityError() && !nonOverridableLoops() && !teleoperationOn())
          {
            reset();
            changeMode(IMC::VehicleState::VS_ERROR);
          }
          return;
        }

        // Otherwise (SERVICE, MANEUVER modes)
        if (entityError() && !calibrationMode())
        {
          reset();
          changeMode(IMC::VehicleState::VS_ERROR);
        }
      }

      void
      consume(const IMC::ManeuverControlState* msg)
      {
        if (!m_bt_ready) return;
        m_bt_blackboard->set("Consume_ID", 1);
        m_bt_blackboard->set("msg", msg);
        m_bt_tree.tickOnce();
      }

      void
      consume(const IMC::PlanControl* msg)
      {
        if ((msg->type == IMC::PlanControl::PC_REQUEST) &&
            (msg->op == IMC::PlanControl::PC_START))
        {
          if(!msg->plan_id.empty())
          {
            m_stage_plan_id = msg->plan_id;
            war(DTR("starting plan '%s'"), msg->plan_id.c_str());
          }

          if (msg->flags & IMC::PlanControl::FLG_IGNORE_ERRORS)
            m_ignore_errors = true;
          else
            m_ignore_errors = false;
        }
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->man_id.empty())
            return;

        m_stage_man_id = msg->man_id;
      }

      void
      answer(const IMC::VehicleCommand* cmd, IMC::VehicleCommand::TypeEnum type,
             const std::string& desc)
      {
        m_vc_reply.setDestination(cmd->getSource());
        m_vc_reply.setDestinationEntity(cmd->getSourceEntity());
        m_vc_reply.type = type;
        m_vc_reply.command = cmd->command;
        m_vc_reply.request_id = cmd->request_id;
        m_vc_reply.info = desc;
        dispatch(m_vc_reply);

        if (type == IMC::VehicleCommand::VC_FAILURE)
          err("%s", desc.c_str());
        else
          trace("%s", desc.c_str());

        trace("(%u/%u/%u)", cmd->getSource(), cmd->getSourceEntity(), cmd->request_id);
      }

      inline void
      requestOK(const IMC::VehicleCommand* cmd, const std::string& desc)
      {
        answer(cmd, IMC::VehicleCommand::VC_SUCCESS, desc);
      }

      inline void
      requestFailed(const IMC::VehicleCommand* cmd, const std::string& desc)
      {
        answer(cmd, IMC::VehicleCommand::VC_FAILURE, desc);
      }

      void
      startCalibration(const IMC::VehicleCommand* msg)
      {
        if (externalMode())
        {
          requestFailed(msg, DTR("cannot calibrate: vehicle is in external mode"));
          return;
        }

        if (maneuverMode())
          reset();

        const IMC::Message* m = 0;

        if (!msg->maneuver.isNull())
        {
          m = msg->maneuver.get();

          m_man_sup->addStop();
          IMC::Message* clone = m->clone();
          changeMode(IMC::VehicleState::VS_CALIBRATION, clone);
          delete clone;

          inf(DTR("performing maneuver %s while calibrating"), m->getName());
        }
        else
        {
          changeMode(IMC::VehicleState::VS_CALIBRATION);
        }

        requestOK(msg, String::str(DTR("calibrating vehicle for %u seconds"),
                                   msg->calib_time));

        IMC::Calibration calib;
        calib.duration = msg->calib_time;
        dispatch(calib);

        // Make the timeout 1.5 times larger than the requested time
        // And do not consider calibration times longer than 15 seconds
        m_calib_timeout = 1.5 * std::max((uint16_t)15, msg->calib_time);
        m_switch_time = Clock::get();
      }

      void
      stopCalibration(const IMC::VehicleCommand* msg)
      {
        if (!calibrationMode())
        {
          requestOK(msg, DTR("cannot stop calibration: vehicle is not calibrating"));
          return;
        }

        requestOK(msg, DTR("stopped calibration"));

        debug("calibration over");
        changeMode(IMC::VehicleState::VS_SERVICE);
      }

      void
      startManeuver(const IMC::VehicleCommand* msg)
      {
        const IMC::Message* m = 0;

        if (!msg->maneuver.isNull())
          m = msg->maneuver.get();

        if (!m)
        {
          requestFailed(msg, DTR("no maneuver specified"));
          return;
        }

        std::string mtype = m->getName();

        if (externalMode())
        {
          requestFailed(msg, mtype + DTR(" maneuver cannot be started in current mode"));
          return;
        }

        m_can_resume = false;
        m_vs.flags &= ~IMC::VehicleState::VFLG_MANEUVER_DONE;

        m_man_sup->addStop();
        IMC::Message* clone = m->clone();
        changeMode(IMC::VehicleState::VS_MANEUVER, clone);
        delete clone;

        requestOK(msg, mtype + DTR(" maneuver started"));
      }

      void
      stopManeuver(bool abort = false)
      {

        if (maneuverMode())
        {
          // Save the ID of the maneuver that was active
          m_can_resume = true;
        }

        if (!errorMode() && !bootMode())
        {
          reset();

          if (!externalMode() || !nonOverridableLoops())
            changeMode(abort ? IMC::VehicleState::VS_ERROR : IMC::VehicleState::VS_SERVICE);
        }
      }

      void
      consume(const IMC::VehicleCommand* cmd)
      {
        if (!m_bt_ready) return;
        m_bt_blackboard->set("Consume_ID", 0);
        m_bt_blackboard->set("cmd", cmd);
        m_bt_tree.tickOnce();
      }

      void
      disableLoops(void)
      {
        IMC::ControlLoops cloops;
        cloops.enable = IMC::ControlLoops::CL_DISABLE;
        cloops.mask = IMC::CL_ALL;
        cloops.scope_ref = m_scope_ref;
        dispatch(&cloops, DF_LOOP_BACK);
      }

      void
      task(void)
      {

        if (m_can_resume && !maneuverMode())
          m_vs.flags |= IMC::VehicleState::VFLG_MANEUVER_DONE;
        else
          m_vs.flags &= ~IMC::VehicleState::VFLG_MANEUVER_DONE;

        dispatch(m_vs);

        if (serviceMode() && m_vs.control_loops && m_loops_timer.overflow())
          changeMode(IMC::VehicleState::VS_EXTERNAL);

        if (!m_args.ext_control && externalMode())
        {
          err(DTR("this vehicle does not allow for external control, disabling loops"));
          disableLoops();
        }

        m_man_sup->update();
        m_bt_blackboard->set("Consume_ID", 2);          
        m_bt_tree.tickOnce();

        if (m_switch_time < 0.0)
          return;

        double delta = Clock::get() - m_switch_time;

        bool timedout = false;

        if (maneuverMode() && (delta > c_man_timeout))
        {
          inf(DTR("maneuver request timeout"));
          timedout = true;
        }
        else if (calibrationMode() && (delta > m_calib_timeout))
        {
          inf(DTR("calibration timed out"));
          timedout = true;
        }

        if (timedout)
        {
          reset();
          changeMode(IMC::VehicleState::VS_SERVICE);
          m_switch_time = -1.0;
        }
      }

      //! Check if the entities in error are relevant for performing an emergency plan
      //! @return true if entity error is relevant for current state, false otherwise
      bool
      entityError(void)
      {
        // no errors found.
        if (!m_vs.error_count)
          return false;

        // errors detected and vehicle not ignoring errors.
        if (!m_ignore_errors)
          return true;

        // there are vital entities to be considered.
        if (!m_args.vital_ents.size())
          return false;

        std::vector<std::string>::const_iterator it_ents = m_ents_in_error.begin();

        for (; it_ents != m_ents_in_error.end(); ++it_ents)
        {
          std::vector<std::string>::const_iterator it_vital = m_args.vital_ents.begin();
          for (; it_vital != m_args.vital_ents.end(); ++it_vital)
          {
            // although vehicle is currently ignoring errors,
            // vital entities must never ignored.
            if (!(*it_ents).compare((*it_vital)))
              return true;
          }
        }

        return false;
      }

      inline bool
      serviceMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_SERVICE);
      }

      inline bool
      maneuverMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_MANEUVER);
      }

      inline bool
      errorMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_ERROR);
      }

      inline bool
      externalMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_EXTERNAL);
      }

      inline bool
      calibrationMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_CALIBRATION);
      }

      inline bool
      bootMode(void) const
      {
        return modeIs(IMC::VehicleState::VS_BOOT);
      }

      inline bool
      modeIs(IMC::VehicleState::OperationModeEnum mode) const
      {
        return m_vs.op_mode == mode;
      }

      inline bool
      teleoperationOn(void) const
      {
        return maneuverIs(DUNE_IMC_TELEOPERATION);
      }

      inline bool
      maneuverIs(uint16_t id) const
      {
        return m_vs.maneuver_type == id;
      }

      inline bool
      nonOverridableLoops(void) const
      {
        return (m_vs.control_loops & (IMC::CL_TELEOPERATION | IMC::CL_NO_OVERRIDE)) != 0;
      }

      //---------------------------------BT_Nodes---------------------------------

      class Tree_selector: public BT::ControlNode
      {
        public:

          Tree_selector(const std::string& name, const BT::NodeConfiguration& config): BT::ControlNode(name, config) {};
        
        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<int>("Consume_ID")};
          
        }

        BT::NodeStatus 
        tick() override
        {
          auto Consume_ID = getInput<int>("Consume_ID");
          if(Consume_ID.value() == 0) return children_nodes_[0]->executeTick();
          if(Consume_ID.value() == 1) return children_nodes_[1]->executeTick();
          if(Consume_ID.value() == 2) return children_nodes_[2]->executeTick();

          return BT::NodeStatus::FAILURE; 
        }
      };

      class eta_update : public BT::SyncActionNode
      {
        public:
          Task* mt;
          eta_update(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};
        
        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::ManeuverControlState*>("msg")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto msg = getInput<const DUNE::IMC::ManeuverControlState*>("msg");
          if(msg.value()->eta!=mt->m_vs.maneuver_eta){
            mt->m_vs.maneuver_eta = msg.value()->eta;
            mt->dispatch(mt->m_vs);
          }
          return BT::NodeStatus::SUCCESS; 
        }

      };

      class set_done : public BT::SyncActionNode
      {
        public:
          Task* mt;    
          set_done(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

        static BT::PortsList 
        providedPorts()
        {
          return {};
        }

        BT::NodeStatus 
        tick() override
        {
          mt->debug("%s maneuver done", IMC::Factory::getAbbrevFromId(mt->m_vs.maneuver_type).c_str());
          mt->m_vs.maneuver_eta = 0;
          mt->m_vs.flags |= IMC::VehicleState::VFLG_MANEUVER_DONE;
          mt->dispatch(mt->m_vs);
          // start timer
          mt->m_switch_time = Clock::get();

          return BT::NodeStatus::SUCCESS; 
        }

      };

      class ERROR : public BT::SyncActionNode
      {
        public: 
          Task* mt;    
          ERROR(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};        
        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::ManeuverControlState*>("msg")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto msg = getInput<const DUNE::IMC::ManeuverControlState*>("msg");
          mt->m_vs.last_error = IMC::Factory::getAbbrevFromId(mt->m_vs.maneuver_type)+ DTR(" maneuver error: ") + msg.value()->info;
          mt->m_vs.last_error_time = msg.value()->getTimeStamp();
          mt->debug("%s", mt->m_vs.last_error.c_str());
          mt->changeMode(IMC::VehicleState::VS_SERVICE);
          mt->reset();

          return BT::NodeStatus::SUCCESS; 
        }

      };

      class STOPPED : public BT::SyncActionNode
      {
        public:
          STOPPED(const std::string &name, const BT::NodeConfig& config): BT::SyncActionNode(name, config){};

          static BT::PortsList providedPorts(){
          return {};
        }

        BT::NodeStatus 
        tick() override
        {
          return BT::NodeStatus::SUCCESS; 
        }

      };

      class ManueverControlState_Switch : public BT::ControlNode
      {
        public:

          ManueverControlState_Switch(const std::string& name, const BT::NodeConfiguration& config): BT::ControlNode(name, config) {};
        
        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::ManeuverControlState*>("msg")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto msg = getInput<const DUNE::IMC::ManeuverControlState*>("msg");
          if(msg.value()->state == IMC::ManeuverControlState::MCS_EXECUTING) return children_nodes_[0]->executeTick();
          if(msg.value()->state == IMC::ManeuverControlState::MCS_DONE) return children_nodes_[1]->executeTick();
          if(msg.value()->state == IMC::ManeuverControlState::MCS_ERROR) return children_nodes_[2]->executeTick();
          if(msg.value()->state == IMC::ManeuverControlState::MCS_STOPPED) return children_nodes_[3]->executeTick();

          return BT::NodeStatus::FAILURE; 
        }
      };

      class Source_mode : public BT::ConditionNode
      {
        private:

        public:
          Task* mt;
          Source_mode(const std::string& name, const BT::NodeConfiguration& config, Task* task): BT::ConditionNode(name, config), mt(task) {};
        static BT::PortsList providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::ManeuverControlState*>("msg")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto msg = getInput<const DUNE::IMC::ManeuverControlState*>("msg");
          if(msg.value()->getSource() == mt->getSystemId())
          {
            mt->m_man_sup->update(msg.value());
            if(!(mt->maneuverMode())) return BT::NodeStatus::FAILURE;
            return BT::NodeStatus::SUCCESS;
          }
          else return BT::NodeStatus::FAILURE; 
        }
      };

      class VehicleCommand_Switch : public BT::ControlNode
      {
        public:
          Task* mt;
          VehicleCommand_Switch(const std::string& name, const BT::NodeConfiguration& config, Task* task): BT::ControlNode(name, config), mt(task) {};
        
        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::VehicleCommand*>("cmd")};
        }
          std::string m_stage_man_id;
          std::string m_stage_plan_id;
        BT::NodeStatus 
        tick() override
        {
          auto cmd = getInput<const DUNE::IMC::VehicleCommand*>("cmd");

          if (cmd.value()->type != IMC::VehicleCommand::VC_REQUEST) return BT::NodeStatus::FAILURE;
          mt->trace("%s request (%u/%u/%u)", c_cmd_desc[cmd.value()->command], cmd.value()->getSource(), cmd.value()->getSourceEntity(), cmd.value()->request_id);

          if(cmd.value()->command == IMC::VehicleCommand::VC_EXEC_MANEUVER) return children_nodes_[0]->executeTick();
          if(cmd.value()->command == IMC::VehicleCommand::VC_STOP_MANEUVER) return children_nodes_[1]->executeTick();
          if(cmd.value()->command == IMC::VehicleCommand::VC_START_CALIBRATION) return children_nodes_[2]->executeTick();
          if(cmd.value()->command == IMC::VehicleCommand::VC_STOP_CALIBRATION) return children_nodes_[3]->executeTick();

          return BT::NodeStatus::FAILURE; 
        }
      };

      class VC_EXEC : public BT::SyncActionNode
      {
        public:
          Task* mt;    
          VC_EXEC(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::VehicleCommand*>("cmd")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto cmd = getInput<const DUNE::IMC::VehicleCommand*>("cmd");
          mt->startManeuver(cmd.value());
          return BT::NodeStatus::SUCCESS; 
        }

      };

      class VC_STOP : public BT::SyncActionNode
      {
        public:
          Task* mt;    
          VC_STOP(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::VehicleCommand*>("cmd")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto cmd = getInput<const DUNE::IMC::VehicleCommand*>("cmd");
          mt->stopManeuver();
          mt->requestOK(cmd.value(), DTR("OK"));
          return BT::NodeStatus::SUCCESS; 
        }

      };

      class VC_START_CAL : public BT::SyncActionNode
      {
        public:
          Task* mt;    
          VC_START_CAL(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::VehicleCommand*>("cmd")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto cmd = getInput<const DUNE::IMC::VehicleCommand*>("cmd");
          mt->startCalibration(cmd.value());
          return BT::NodeStatus::SUCCESS; 
        }

      };

      class VC_STOP_CAL : public BT::SyncActionNode
      {
        public:
          Task* mt;    
          VC_STOP_CAL(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

        static BT::PortsList 
        providedPorts()
        {
          return {BT::InputPort<const DUNE::IMC::VehicleCommand*>("cmd")};
        }

        BT::NodeStatus 
        tick() override
        {
          auto cmd = getInput<const DUNE::IMC::VehicleCommand*>("cmd");
          mt->stopCalibration(cmd.value());
          return BT::NodeStatus::SUCCESS; 
        }
      };

      class ProcessRequests : public BT::SyncActionNode {
        public:
          Task* mt;
          ProcessRequests(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

          static BT::PortsList providedPorts() { return {}; }
          
          BT::NodeStatus tick() override {
            ManeuverSupervisor* ms = mt->m_man_sup;
            if (ms->m_curr_req != NULL || ms->m_reqs.empty()) return BT::NodeStatus::FAILURE;
            ms->m_curr_req = ms->m_reqs.front();
            ms->m_reqs.pop();

            if (ms->m_valid_state) {
              if (ms->m_curr_req->isStop()) {

                if (ms->m_state != IMC::ManeuverControlState::MCS_EXECUTING){ 
                  ms->clearCurrent();
                  return BT::NodeStatus::SUCCESS;
                }

                if (!ms->m_reqs.empty() && ms->m_reqs.front()->isStop()){ 
                  ms->clearCurrent();
                  return BT::NodeStatus::SUCCESS;
                }
              }
              else if (ms->m_curr_req->isStart()){
                if (ms->m_state == IMC::ManeuverControlState::MCS_EXECUTING){
                  ms->clearCurrent();
                  return BT::NodeStatus::SUCCESS;
                }
                if (!ms->m_reqs.empty()){
                  if (ms->m_reqs.front()->isStart()){
                    ms->clearCurrent();
                    return BT::NodeStatus::SUCCESS;
                  }
                  else if (ms->m_reqs.front()->isStop()){
                    ms->clearCurrent(); Memory::clear(ms->m_reqs.front());
                    ms->m_reqs.pop();
                    return BT::NodeStatus::SUCCESS;
                  }
                }
              }
            }
            else if (ms->m_curr_req->isStop()){ 
              ms->clearCurrent();
              return BT::NodeStatus::SUCCESS;
            }
            ms->m_curr_req->issue();
            mt->dispatch(ms->m_curr_req->getMessage());
            return BT::NodeStatus::SUCCESS;
          }
      };

      class CheckResume: public BT::ConditionNode
      {
        public:
          Task* mt;
          CheckResume(const std::string& name, const BT::NodeConfig& config, Task* t): BT::ConditionNode(name, config), mt(t) {};
          BT::NodeStatus tick() override {
            if (mt->m_can_resume) {
              mt->war("Resume point available: %s (plan ID: %s)", mt->m_resume_man_id.c_str(), mt->m_resume_plan_id.c_str());
              return BT::NodeStatus::SUCCESS;
            }
            return BT::NodeStatus::FAILURE; 
          }
      };

      class TrackResumeState : public BT::SyncActionNode
      {
        public:
          Task* mt;
          TrackResumeState(const std::string &name, const BT::NodeConfig& config, Task* task): BT::SyncActionNode(name, config), mt(task) {};

          static BT::PortsList providedPorts() { return {BT::InputPort<bool>("skip")}; }

          BT::NodeStatus tick() override
          {
            
            auto skip = getInput<bool>("skip");

            // change plan
            if (!mt->m_stage_plan_id.empty() && mt->m_resume_plan_id != mt->m_stage_plan_id)
            {
              mt->m_can_resume = false;
              mt->m_resume_man_id.clear();
              mt->m_resume_plan_id = mt->m_stage_plan_id;
            }

            // Non plan end
            if (mt->maneuverMode() && !mt->m_stage_man_id.empty())
            {
              mt->m_resume_man_id = mt->m_stage_man_id;
              mt->m_resume_plan_id = mt->m_stage_plan_id;
              mt->m_can_resume = true;
              
              mt->trace("BT synchronized tracking profile: %s (Plan: %s)", 
                        mt->m_resume_man_id.c_str(), mt->m_resume_plan_id.c_str());
            }

            // Skip Manuever
            if (skip.value_or(false))
            {
              mt->debug("%s maneuver skipped", IMC::Factory::getAbbrevFromId(mt->m_vs.maneuver_type).c_str());
              mt->m_vs.maneuver_eta = 0;
              mt->m_vs.flags |= IMC::VehicleState::VFLG_MANEUVER_DONE;
              mt->dispatch(mt->m_vs);
              // start timer
              mt->m_switch_time = Clock::get();

              config().blackboard->set("skip", false);
            }
            
            return BT::NodeStatus::SUCCESS;
          }

      };
    };
  }
}

DUNE_TASK