//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
      //! Relevant entities when performing a safe plan.
      std::vector<std::string> safe_ents;
      //! Allow external control
      bool ext_control;
      //! Timeout for starting or stopping a maneuver
      double handle_timeout;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Timer to wait for calibration and maneuver requests.
      float m_switch_time;
      //! Currently performing a safe plan.
      bool m_in_safe_plan;
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

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_switch_time(-1.0),
        m_in_safe_plan(false),
        m_scope_ref(0),
        m_man_sup(NULL)
      {
        param("Safe Entities", m_args.safe_ents)
        .defaultValue("")
        .description("Relevant entities when performing a safe plan");

        param("Allows External Control", m_args.ext_control)
        .defaultValue("true")
        .description("Allow for the vehicle to be externally controlled");

        param("Maneuver Handling Timeout", m_args.handle_timeout)
        .defaultValue("1.0")
        .description("Timeout for starting or stopping a maneuver");

        bind<IMC::Abort>(this);
        bind<IMC::ControlLoops>(this);
        bind<IMC::EntityMonitoringState>(this);
        bind<IMC::ManeuverControlState>(this);
        bind<IMC::VehicleCommand>(this);
        bind<IMC::PlanControl>(this);
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
      }

      void
      reset(void)
      {
        m_man_sup->addStop();

        m_in_safe_plan = false;

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

        m_vs.last_error = DTR("got abort request");
        m_vs.last_error_time = Clock::getSinceEpoch();
        err("%s", m_vs.last_error.c_str());

        stopManeuver(true);
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
          war(DTR("entity errors cleared"));
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
        if (msg->getSource() != getSystemId())
          return;

        m_man_sup->update(msg);

        if (!maneuverMode())
          return;

        switch ((IMC::ManeuverControlState::StateEnum)msg->state)
        {
          case IMC::ManeuverControlState::MCS_EXECUTING:
            if (msg->eta != m_vs.maneuver_eta)
            {
              m_vs.maneuver_eta = msg->eta;
              dispatch(m_vs);
            }
            break;
          case IMC::ManeuverControlState::MCS_DONE:
            debug("%s maneuver done",
                  IMC::Factory::getAbbrevFromId(m_vs.maneuver_type).c_str());
            m_vs.maneuver_eta = 0;
            m_vs.flags |= IMC::VehicleState::VFLG_MANEUVER_DONE;
            dispatch(m_vs);
            // start timer
            m_switch_time = Clock::get();
            break;
          case IMC::ManeuverControlState::MCS_ERROR:
            m_vs.last_error = IMC::Factory::getAbbrevFromId(m_vs.maneuver_type)
            + DTR(" maneuver error: ") + msg->info;
            m_vs.last_error_time = msg->getTimeStamp();
            debug("%s", m_vs.last_error.c_str());
            changeMode(IMC::VehicleState::VS_SERVICE);
            reset();
            break;
          case IMC::ManeuverControlState::MCS_STOPPED:
            break;
        }
      }

      void
      consume(const IMC::PlanControl* msg)
      {
        if ((msg->type == IMC::PlanControl::PC_REQUEST) &&
            (msg->op == IMC::PlanControl::PC_START))
        {
          // check if plan is supposed to ignore some errors
          if (msg->flags & IMC::PlanControl::FLG_IGNORE_ERRORS)
            m_in_safe_plan = true;
          else
            m_in_safe_plan = false;
        }
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

        m_man_sup->addStop();
        IMC::Message* clone = m->clone();
        changeMode(IMC::VehicleState::VS_MANEUVER, clone);
        delete clone;

        requestOK(msg, mtype + DTR(" maneuver started"));
      }

      void
      stopManeuver(bool abort = false)
      {
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
        if (cmd->type != IMC::VehicleCommand::VC_REQUEST)
          return;

        trace("%s request (%u/%u/%u)", c_cmd_desc[cmd->command],
              cmd->getSource(), cmd->getSourceEntity(), cmd->request_id);

        switch ((IMC::VehicleCommand::CommandEnum)cmd->command)
        {
          case IMC::VehicleCommand::VC_EXEC_MANEUVER:
            startManeuver(cmd);
            break;
          case IMC::VehicleCommand::VC_STOP_MANEUVER:
            stopManeuver();
            requestOK(cmd, DTR("OK"));
            break;
          case IMC::VehicleCommand::VC_START_CALIBRATION:
            startCalibration(cmd);
            break;
          case IMC::VehicleCommand::VC_STOP_CALIBRATION:
            stopCalibration(cmd);
            break;
        }
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
        dispatch(m_vs);

        if (serviceMode() && m_vs.control_loops && m_loops_timer.overflow())
          changeMode(IMC::VehicleState::VS_EXTERNAL);

        if (!m_args.ext_control && externalMode())
        {
          err(DTR("this vehicle does not allow for external control, disabling loops"));
          disableLoops();
        }

        m_man_sup->update();

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
        if (!m_vs.error_count)
          return false;

        if (!m_args.safe_ents.size() || !m_in_safe_plan)
          return true;

        std::vector<std::string>::const_iterator it_ents = m_ents_in_error.begin();

        for (; it_ents != m_ents_in_error.end(); ++it_ents)
        {
          std::vector<std::string>::const_iterator it_safe = m_args.safe_ents.begin();
          for (; it_safe != m_args.safe_ents.end(); ++it_safe)
          {
            if (!(*it_ents).compare((*it_safe)))
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
    };
  }
}

DUNE_TASK
