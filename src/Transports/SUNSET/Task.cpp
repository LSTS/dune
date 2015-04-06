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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "SSC/Factory.hpp"
#include "Link.hpp"
#include "Sensors.hpp"
#include "Scheduler.hpp"

namespace Transports
{
  namespace SUNSET
  {
    using DUNE_NAMESPACES;

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, unsigned> MapName;
    typedef std::map<unsigned, std::string> MapAddr;

    //! Task arguments.
    struct Arguments
    {
      //! TCP host.
      std::string tcp_addr;
      //! TCP port.
      unsigned tcp_port;
      //! Sensor list.
      std::vector<std::string> sensors;
      //! True to control source level based on medium.
      bool src_level_control;
      //! Source Level - Unknown.
      unsigned src_level_unknown;
      //! Source Level - Water.
      unsigned src_level_water;
      //! Source Level - Underwater.
      unsigned src_level_underwater;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of Evologics modems by name.
      MapName m_modem_names;
      //! Map of Evologics modems by address.
      MapAddr m_modem_addrs;
      //! Plan list.
      std::vector<std::string> m_plan_list;
      //! Local node address.
      unsigned m_addr_local;
      //! Broadcast address.
      unsigned m_addr_bcast;
      //! True if Aborted message was received.
      bool m_aborted;
      //! Internal buffer.
      uint8_t m_bfr[128];
      //! Command line being parsed.
      std::string m_line;
      //! Command link.
      Link* m_link;
      //! Sensor table.
      Sensors* m_sensors;
      //! Command scheduler.
      Scheduler* m_scheduler;
      //! Last position.
      Position m_position;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Keep-alive timer.
      Counter<double> m_kalive;
      //! Medium.
      IMC::VehicleMedium m_medium;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_addr_local(0),
        m_addr_bcast(0),
        m_aborted(false),
        m_link(NULL),
        m_sensors(NULL),
        m_scheduler(NULL)
      {
        param("TCP - Address", m_args.tcp_addr)
        .defaultValue("10.0.250.24")
        .description("SUNSET server TCP address");

        param("TCP - Port", m_args.tcp_port)
        .defaultValue("30500")
        .description("SUNSET server TCP port");

        param("Source Level - Control", m_args.src_level_control)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description("Enable/disable source level control based on medium");

        param("Source Level - Unknown", m_args.src_level_unknown)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("3")
        .description("Source level when medium is unknown");

        param("Source Level - Water", m_args.src_level_water)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("2")
        .description("Source level when medium is water");

        param("Source Level - Underwater", m_args.src_level_underwater)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("1")
        .description("Source level when medium is underwater");

        param("Sensors", m_args.sensors)
        .description("List of sensors");

        m_medium.medium = IMC::VehicleMedium::VM_UNKNOWN;

        // Process modem addresses.
        std::string system = getSystemName();
        std::vector<std::string> addrs = ctx.config.options("Evologics Addresses");
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned addr = 0;
          ctx.config.get("Evologics Addresses", addrs[i], "0", addr);
          m_modem_names[addrs[i]] = addr;
          m_modem_addrs[addr] = addrs[i];
        }

        bind<IMC::PlanDB>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Aborted>(this);
        bind<IMC::PlanControl>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::VehicleMedium>(this);

        // Sensors.
        bind<IMC::Conductivity>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::SoundSpeed>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_link = new Link(this, m_args.tcp_addr.c_str(), m_args.tcp_port);
          m_link->start();
          m_sensors = new Sensors(this, m_args.sensors);
          m_scheduler = new Scheduler(this);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        catch (...)
        {
          throw RestartNeeded(DTR("server not available"), 5, false);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_kalive.setTop(5.0);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_link)
        {
          m_link->stopAndJoin();
          delete m_link;
          m_link = NULL;
        }

        Memory::clear(m_sensors);
        Memory::clear(m_scheduler);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestination() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded(DTR("input error"), 5);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (m_addr_local == 0)
          return;

        if (!m_args.src_level_control)
          return;

        if (msg->medium != m_medium.medium)
        {
          debug("medium changed to %u", msg->medium);
          m_medium = *msg;
          switch (msg->medium)
          {
            case IMC::VehicleMedium::VM_UNDERWATER:
              setTxPower(m_args.src_level_underwater);
              break;

            case IMC::VehicleMedium::VM_WATER:
              setTxPower(m_args.src_level_water);
              break;

            default:
              setTxPower(m_args.src_level_unknown);
              break;
          }
        }
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        handleCommand(msg->value);
      }

      void
      consume(const IMC::Aborted* msg)
      {
        (void)msg;
        m_aborted = true;
      }

      void
      consume(const IMC::PlanControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        int sid = m_sensors->getSensorId("SoundVelocity", msg->getSourceEntity());
        if (sid >= 0)
          m_sensors->setMeasurement("SoundVelocity", sid, msg->value, m_position);
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        int sid = m_sensors->getSensorId("Salinity", msg->getSourceEntity());
        if (sid >= 0)
          m_sensors->setMeasurement("Salinity", sid, msg->value, m_position);
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        int sid = m_sensors->getSensorId("Temperature", msg->getSourceEntity());
        if (sid >= 0)
          m_sensors->setMeasurement("Temperature", sid, msg->value, m_position);
      }

      void
      consume(const IMC::Conductivity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        int sid = m_sensors->getSensorId("Conductivity", msg->getSourceEntity());
        if (sid >= 0)
          m_sensors->setMeasurement("Conductivity", sid, msg->value, m_position);
      }

      void
      consume(const IMC::PlanDB* msg)
      {
        if (msg->type != IMC::PlanDB::DBT_SUCCESS)
          return;

        if (msg->op != IMC::PlanDB::DBOP_GET_STATE)
          return;

        if (msg->arg.isNull())
          return;

        if (msg->arg->getId() != IMC::PlanDBState::getIdStatic())
          return;

        const IMC::PlanDBState* db_state = static_cast<const IMC::PlanDBState*>(msg->arg.get());
        IMC::MessageList<IMC::PlanDBInformation>::const_iterator itr = db_state->plans_info.begin();

        m_plan_list.clear();
        for (; itr != db_state->plans_info.end(); ++itr)
          m_plan_list.push_back((*itr)->plan_id);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        double lat = 0;
        double lon = 0;

        Coordinates::toWGS84(*msg, lat, lon);

        m_position.value.latitude = Angles::degrees(lat);
        m_position.value.longitude = Angles::degrees(lon);
        m_position.value.depth = msg->depth;
        m_position.value.altitude = msg->alt;
        m_position.heading = Angles::degrees(msg->psi);
      }

      std::string
      lookupSystemName(unsigned addr)
      {
        MapAddr::iterator itr = m_modem_addrs.find(addr);
        if (itr == m_modem_addrs.end())
          throw std::runtime_error("unknown system address");
        return itr->second;
      }

      void
      handlePlanListGet(const PlanListGet* cmd)
      {
        m_plan_list.clear();
        IMC::PlanDB db;
        db.type = IMC::PlanDB::DBT_REQUEST;
        db.op = IMC::PlanDB::DBOP_GET_STATE;
        dispatch(db);

        Time::Counter<double> timer(1.0);
        while (!timer.overflow())
        {
          waitForMessages(timer.getRemaining());
          if (!m_plan_list.empty())
          {
            sendPlanList(cmd->getSource());
            return;
          }
        }

        sendFailure(cmd->getSource(), FAIL_INTERNAL_ERROR);
      }

      void
      sendPlanList(unsigned destination)
      {
        PlanList cmd;
        cmd.setDestination(destination);
        cmd.plan_names = m_plan_list;
        sendCommand(cmd);
      }

      void
      handlePositionGet(const PositionGet* cmd)
      {
        m_scheduler->setSchedule("Position",
                                 0,
                                 cmd->getSource(),
                                 cmd->frequency);
      }

      void
      sendPosition(unsigned destination)
      {
        m_position.setDestination(destination);
        sendCommand(m_position);
      }

      void
      handlePlanStart(const PlanStart* cmd)
      {
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        pc.plan_id.assign(cmd->plan_name);
        pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
        dispatch(pc);

        // FIXME: check reply.

        sendPlanStarted(cmd->getSource(), cmd->plan_name);
      }

      void
      sendPlanStarted(unsigned destination, const std::string& plan_name)
      {
        PlanStarted cmd;
        cmd.plan_name = plan_name;
        cmd.setDestination(destination);
        sendCommand(cmd);
      }

      void
      handlePlanStop(const PlanStop* cmd)
      {
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_STOP;
        pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
        dispatch(pc);

        // FIXME: check reply.

        sendPlanStopped(cmd->getSource(), "");
      }

      void
      handleRange(const Range* cmd)
      {
        try
        {
          IMC::UamRxRange range;
          range.sys = lookupSystemName(cmd->target);
          range.value = cmd->travel_time * 1500.0;
          dispatch(range);
        }
        catch (std::runtime_error& e)
        {
          war("%s", e.what());
        }
      }

      void
      sendPlanStopped(unsigned destination, const std::string& plan_name)
      {
        PlanStopped cmd;
        cmd.plan_name = plan_name;
        cmd.setDestination(destination);
        sendCommand(cmd);
      }

      void
      handleAbort(const Abort* cmd)
      {
        war("got abort request");
        IMC::Abort msg;
        msg.setDestination(getSystemId());
        dispatch(msg);

        m_aborted = false;
        Time::Counter<double> timer(1.0);
        while (!timer.overflow())
        {
          waitForMessages(timer.getRemaining());
          if (m_aborted)
          {
            sendAborted(cmd->getSource());
            return;
          }
        }

        sendAborted(cmd->getSource());
      }

      void
      sendAborted(unsigned destination)
      {
        Aborted cmd;
        cmd.setDestination(destination);
        sendCommand(cmd);
      }

      void
      sendFailure(unsigned destination, FailureType fail)
      {
        CommandFailure cmd;
        cmd.setSource(m_addr_local);
        cmd.setDestination(destination);
        cmd.sequence_number = -1;
        cmd.failure_reason = fail;
        sendCommand(cmd);
      }

      void
      sendError(unsigned destination, ErrorType error)
      {
        CommandError cmd;
        cmd.setSource(m_addr_local);
        cmd.setDestination(destination);
        cmd.error_reason = error;
        sendCommand(cmd);
      }

      void
      sendOk(const std::string& command)
      {
        CommandOk ok;
        ok.name = command;
        ok.setSource(m_addr_local);
        ok.setDestination(m_addr_local);
        sendCommand(ok);
      }

      void
      handleSensorListGet(const SensorListGet* cmd)
      {
        (void)cmd;

        SensorList reply;
        reply.setSource(m_addr_local);
        reply.setDestination(cmd->getSource());
        reply.measurement_names = m_sensors->getMeasurementList();
        sendCommand(reply);
      }

      void
      handleSensorInfoGet(const SensorInfoGet* cmd)
      {
        SensorInfo reply;
        reply.setSource(m_addr_local);
        reply.setDestination(cmd->getSource());
        reply.tuples = m_sensors->getSensorInfoList(cmd->measurement_name);

        if (reply.tuples.empty())
        {
          sendFailure(cmd->getSource(), FAIL_INVALID_REQUEST);
          return;
        }

        sendCommand(reply);
      }

      void
      handleSensorSampleGet(const SensorSampleGet* cmd)
      {
        if (!m_sensors->exists(cmd->measurement_name, cmd->sensor_identifier))
        {
          sendError(cmd->getSource(), ERR_INVALID_REQUEST);
        }
        else
        {
          m_scheduler->setSchedule(cmd->measurement_name,
                                   cmd->sensor_identifier,
                                   cmd->getSource(),
                                   cmd->sampling_frequency);
          sendOk(cmd->getName());
        }
      }

      void
      sendSensorSample(const std::string& name, unsigned sensor_id, unsigned destination)
      {
        SensorSample cmd(m_sensors->getMeasurement(name, sensor_id));
        cmd.measurement_name = name;
        cmd.setDestination(destination);
        sendCommand(cmd);
      }

      void
      handleParam(const Param* cmd)
      {
        switch (cmd->name)
        {
          case NODE_ID:
            castLexical(cmd->value, m_addr_local);
            inf("node id is %s", cmd->value.c_str());
            break;

          case BROADCAST_ID:
            castLexical(cmd->value, m_addr_bcast);
            inf("broadcast id is %s", cmd->value.c_str());
            break;

          case TX_POWER:
            break;
        }
      }

      void
      handleCommand(const std::string& line)
      {
        debug("received: %s", sanitize(line).c_str());
        m_kalive.reset();

        AbstractCommand* cmd = NULL;
        try
        {
          cmd = Factory::decode(line);

          if (cmd->getName() == "Param")
            handleParam(static_cast<Param*>(cmd));

          if (cmd->getName() != "CommandOk"
              && cmd->getName() != "CommandError"
              && cmd->getName() != "CommandFailure"
              && cmd->getName() != "SensorSampleGet")
          {
            sendOk(cmd->getName());
          }

          if (cmd->getName() == "Abort")
            handleAbort(static_cast<Abort*>(cmd));

          if (cmd->getName() == "PlanListGet")
            handlePlanListGet(static_cast<PlanListGet*>(cmd));

          if (cmd->getName() == "PlanStart")
            handlePlanStart(static_cast<PlanStart*>(cmd));

          if (cmd->getName() == "PlanStop")
            handlePlanStop(static_cast<PlanStop*>(cmd));

          if (cmd->getName() == "SensorListGet")
            handleSensorListGet(static_cast<SensorListGet*>(cmd));

          if (cmd->getName() == "SensorSampleGet")
            handleSensorSampleGet(static_cast<SensorSampleGet*>(cmd));

          if (cmd->getName() == "SensorInfoGet")
            handleSensorInfoGet(static_cast<SensorInfoGet*>(cmd));

          if (cmd->getName() == "PositionGet")
            handlePositionGet(static_cast<PositionGet*>(cmd));

          if (cmd->getName() == "Range")
            handleRange(static_cast<Range*>(cmd));
        }
        catch (...)
        {

        }

        Memory::clear(cmd);
      }

      void
      sendCommand(AbstractCommand& cmd)
      {
        cmd.setSource(m_addr_local);
        m_link->write(cmd.encode());
      }

      double
      getLoopDelay(void) const
      {
        double delay = 1.0;
        double sched_delay = m_scheduler->getRemaining();
        if (sched_delay < 0)
          return delay;

        return (sched_delay < delay) ? sched_delay : delay;
      }

      void
      updateScheduler(void)
      {
        m_scheduler->update();
        while (m_scheduler->hasPending())
        {
          ScheduleKey key = m_scheduler->dequeuePending();
          if (key.measure_name == "Position")
            sendPosition(key.destination);
          else
            sendSensorSample(key.measure_name, key.sensor_id, key.destination);
        }
      }

      void
      requestNodeId(void)
      {
        ParamGet cmd;
        cmd.name = NODE_ID;
        cmd.setDestination(m_addr_local);
        sendCommand(cmd);
      }

      void
      setTxPower(unsigned level)
      {
        ParamSet cmd;
        cmd.name = TX_POWER;
        cmd.value = uncastLexical(level);
        cmd.setDestination(m_addr_local);
        sendCommand(cmd);
      }

      void
      keepAlive(void)
      {
        if (!m_kalive.overflow())
          return;

        m_kalive.reset();
        requestNodeId();
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(getLoopDelay());
          updateScheduler();
          keepAlive();
        }
      }
    };
  }
}

DUNE_TASK
