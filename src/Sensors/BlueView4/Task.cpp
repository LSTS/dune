//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// BlueView SDK.
#include <bvt_sdk.h>

// Local headers.
#include "Log.hpp"

namespace Sensors
{
  namespace BlueView4
  {
    using DUNE_NAMESPACES;

    //! Log file prefix.
    static const char* c_log_prefix = "Data_";
    //! Log file suffix.
    static const char* c_log_suffix = ".son";
    //! User Navigation String prefix.
    static const char* c_nav_user_prefix = "DUNE-0";

    //! State machine states.
    enum StateMachineState
    {
      SM_IDLE,
      SM_ACT_BEGIN,
      SM_ACT_POWER_ON,
      SM_ACT_POWER_WAIT,
      SM_ACT_CONNECT,
      SM_ACT_SETUP,
      SM_ACT_LOG_GET,
      SM_ACT_LOG_WAIT,
      SM_ACT_SYNC_WAIT,
      SM_ACT_PING,
      SM_DEACT_BEGIN,
      SM_DEACT_LOG_CLOSE,
      SM_DEACT_DISCONNECT,
      SM_DEACT_POWER_OFF,
      SM_DEACT_POWER_WAIT
    };

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
      //! Power channel name.
      std::string power_channel;
      //! Log folder prefix.
      std::string log_prefix;
      //! Name of the master system.
      std::string master_system_name;
      //! Default sound speed.
      int sound_speed_def;
      //! Number of pings per file.
      unsigned pings_per_file;
      //! Sound speed tolerance.
      int sound_speed_tolerance;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Sonar device.
      BVTSonar m_sonar;
      //! Sonar device head.
      BVTHead m_sonar_head;
      //! Sonar ping.
      BVTPing m_ping;
      //! Navigation data.
      BVTNavData m_nav_data;
      //! Log folder name.
      std::string m_log_name;
      //! Current state machine state.
      StateMachineState m_sm_state;
      //! True if power channel is on.
      bool m_powered;
      //! Current log file.
      Log* m_log;
      //! Last sound speed value.
      int m_sound_speed;
      //! Last sound speed value with full resolution.
      double m_sound_speed_full_res;
      //! Configuration parameters.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sonar(NULL),
        m_sonar_head(NULL),
        m_ping(NULL),
        m_sm_state(SM_IDLE),
        m_powered(false),
        m_log(NULL),
        m_sound_speed(-1),
        m_sound_speed_full_res(-1.0)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("10.0.2.45")
        .description("IP address of the sonar");

        param("Power Channel", m_args.power_channel)
        .defaultValue("")
        .description("Power channel that controls the power of the device");

        param("Log Prefix", m_args.log_prefix)
        .defaultValue("")
        .description("Log folder prefix");

        param("Master System Name", m_args.master_system_name)
        .defaultValue("")
        .description("Name of the master system");

        param("Pings Per File", m_args.pings_per_file)
        .defaultValue("10000")
        .description("Maximum number of pings per recorded file");

        param("Sound Speed - Tolerance", m_args.sound_speed_tolerance)
        .defaultValue("2")
        .units(Units::MeterPerSecond)
        .description("Sound speed tolerance");

        param("Sound Speed - Default Value", m_args.sound_speed_def)
        .defaultValue("1500")
        .minimumValue("1375")
        .maximumValue("1900")
        .units(Units::MeterPerSecond)
        .description("Sound speed in water");

        m_nav_data = BVTNavData_Create();

        // Register consumers.
        bind<IMC::PowerChannelState>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::EstimatedState>(this);
      }

      ~Task(void)
      {
        BVTNavData_Destroy(m_nav_data);
      }

      //! Update task parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.sound_speed_def))
        {
          m_sound_speed_full_res = m_args.sound_speed_def;
          setSoundSpeed(m_sound_speed_full_res);
        }

        if (!hasPowerChannel())
          m_powered = true;
      }

      //! Initialize task resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release task resources.
      void
      onResourceRelease(void)
      {
        // if (isActive())
        //   requestDeactivation();
        // else
        //   clear();
      }

      void
      onRequestActivation(void)
      {
        m_sm_state = SM_ACT_BEGIN;
      }

      void
      onActivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onRequestDeactivation(void)
      {
        m_sm_state = SM_DEACT_BEGIN;
      }

      void
      onDeactivation(void)
      {
        if (m_sonar != NULL)
          BVTSonar_Destroy(m_sonar);

        inf("%s", DTR(Status::getString(Status::CODE_IDLE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        bool old_state = m_powered;
        m_powered = (msg->state == IMC::PowerChannelState::PCS_ON);
        if (!old_state && m_powered)
          debug("device is powered");
        else if (old_state && !m_powered)
          debug("device is no longer powered");
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        double lat = msg->lat;
        double lon = msg->lon;
        Coordinates::toWGS84(*msg, lat, lon);

        BVTNavData_SetNavTime(m_nav_data, msg->getTimeStamp());
        BVTNavData_SetLatitude(m_nav_data, Angles::degrees(lat));
        BVTNavData_SetLongitude(m_nav_data, Angles::degrees(lon));
        BVTNavData_SetDepth(m_nav_data, msg->depth);
        BVTNavData_SetAltitude(m_nav_data, msg->alt);
        BVTNavData_SetPitchAngle(m_nav_data, Angles::degrees(msg->theta));
        BVTNavData_SetRollAngle(m_nav_data, Angles::degrees(msg->phi));
        BVTNavData_SetHeadingVelocity(m_nav_data, msg->u);
        BVTNavData_SetCourseOverGround(m_nav_data, Angles::degrees(std::atan2(msg->vy, msg->vx)));

        double heading = Angles::degrees(msg->psi);
        if (heading < 0)
          heading += 360.0;

        BVTNavData_SetHeading(m_nav_data, heading);

        // Record full resolution sound speed.
        std::string user_string = String::str("%s: SoundSpeed=%0.2f", c_nav_user_prefix, m_sound_speed_full_res);
        BVTNavData_SetUserNavString(m_nav_data, user_string.c_str());
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != resolveSystemName(m_args.master_system_name))
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
          case IMC::LoggingControl::COP_CURRENT_NAME:
            if (m_sm_state == SM_ACT_LOG_WAIT || m_sm_state == SM_ACT_PING)
              openLog(msg->name, false);
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value <= 0)
          return;

        if (m_sonar_head == NULL)
          return;

        m_sound_speed_full_res = msg->value;
        setSoundSpeed((int)Math::round(m_sound_speed_full_res));
      }

      bool
      getPing(BVTPing& ping)
      {
        if (m_sonar_head == NULL)
          return false;

        RetVal rv = BVTHead_GetPing(m_sonar_head, -1, &ping);
        if (rv != BVT_SUCCESS)
          return false;

        BVTPing_SetNavData(ping, m_nav_data);
        return true;
      }

      bool
      queryRangeWindow(float& start_range, float& stop_range)
      {
        if (m_sonar_head == NULL)
          return false;

        RetVal rv = BVTHead_GetMinimumRange(m_sonar_head, &start_range);
        if (rv != BVT_SUCCESS)
          return false;

        rv = BVTHead_GetMaximumRange(m_sonar_head, &stop_range);
        if (rv != BVT_SUCCESS)
          return false;

        debug("range window: [%0.2f - %0.2f]", start_range, stop_range);
        return true;
      }

      bool
      setRange(float start_range, float stop_range)
      {
        if (m_sonar_head == NULL)
          return false;

        RetVal rv = BVTHead_SetRange(m_sonar_head, start_range, stop_range);
        if (rv != BVT_SUCCESS)
        {
          war("failed to set range window: %s: %s", BVTError_GetName(rv), BVTError_GetString(rv));
          return false;
        }

        trace("modified range: [%0.2f - %0.2f] ", start_range, stop_range);
        return true;
      }

      void
      controlPower(IMC::PowerChannelControl::OperationEnum op)
      {
        if (!hasPowerChannel())
        {
          trace("assuming power is always on");
          return;
        }

        IMC::PowerChannelControl pcc;
        pcc.name = m_args.power_channel;
        pcc.op = op;
        dispatch(pcc);
      }

      void
      turnPowerOn(void)
      {
        trace("turning power on");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
      }

      void
      turnPowerOff(void)
      {
        trace("turning power off");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
      }

      bool
      isPowered(void)
      {
        return m_powered;
      }

      bool
      hasPowerChannel(void)
      {
        return !m_args.power_channel.empty();
      }

      bool
      connect(void)
      {
        trace("connecting");
        m_sonar = BVTSonar_Create();

        RetVal rv = BVTSonar_Open(m_sonar, "NET", m_args.addr.c_str());
        if (rv != BVT_SUCCESS)
        {
          trace("failed to open sonar: %d", rv);
          goto cleanup;
        }

        rv = BVTSonar_GetHead(m_sonar, 0, &m_sonar_head);
        if (rv != BVT_SUCCESS)
        {
          trace("failed to get head: %d", rv);
          goto cleanup;
        }

        trace("connected");
        return true;

      cleanup:
        trace("connection failed");
        BVTSonar_Destroy(m_sonar);
        m_sonar = NULL;
        return false;
      }

      void
      disconnect(void)
      {
        trace("disconnecting");
        if (m_sonar_head != NULL)
        {
          trace("destroying sonar head");
          BVTHead_Destroy(m_sonar_head);
          m_sonar_head = NULL;
        }

        if (m_sonar != NULL)
        {
          trace("destroying sonar");
          BVTSonar_Destroy(m_sonar);
          m_sonar = NULL;
        }
      }

      bool
      setup(void)
      {
        trace("disabling local timestamp");
        if (BVTSonar_SetTimestampsUseLocalClock(m_sonar, 0) != BVT_SUCCESS)
          return false;

        float start_range = 0;
        float stop_range = 0;
        if (!queryRangeWindow(start_range, stop_range))
          return false;

        if (!setRange(start_range, stop_range))
          return false;

        return true;
      }

      Path
      getLogPath(const Path& prefix)
      {
        double now = Clock::getSinceEpoch();

        while (true)
        {
          std::string log_name(c_log_prefix);
          log_name.append(Format::getDateSafe(now) + Format::getTimeSafe(now));
          log_name.append(c_log_suffix);

          Path path = m_ctx.dir_log / m_args.log_prefix / prefix / log_name;
          if (!path.exists())
            return path;

          now += 1.0;
        }
      }

      bool
      logIsOpen(void)
      {
        return m_log != NULL;
      }

      void
      openLog(const std::string& prefix, bool force)
      {
        if (logIsOpen())
        {
          if (m_log->getPrefix() == prefix && !force)
            return;
        }

        closeLog();
        Path path = getLogPath(prefix);
        m_log = new Log(this, prefix, path, m_sonar, m_sound_speed);
        m_log->start();
      }

      void
      closeLog(void)
      {
        if (logIsOpen())
        {
          trace("closing log file: %s", m_log->getPath().c_str());
          m_log->stopAndJoin();
          Memory::clear(m_log);
        }
      }

      void
      putInLog(BVTPing ping)
      {
        if (!logIsOpen())
          return;

        m_log->put(ping);
        if (m_log->getPingCount() >= m_args.pings_per_file)
          openLog(m_log->getPrefix(), true);
      }

      void
      requestLogName(void)
      {
        debug("requesting current log path");
        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(lc);
      }

      bool
      isSynched(void)
      {
        if (getPing(m_ping))
        {
          double time = 0;
          BVTPing_GetTimestamp(m_ping, &time);
          BVTPing_Destroy(m_ping);
          return std::abs(Clock::getSinceEpoch() - time) <= 2.0;
        }

        return false;
      }

      void
      setSoundSpeed(int value)
      {
        int diff = std::abs(value - m_sound_speed);

        if (diff <= m_args.sound_speed_tolerance)
          return;

        m_sound_speed = value;

        if (logIsOpen())
          openLog(m_log->getPrefix(), true);
      }

      void
      updateStateMachine(void)
      {
        switch (m_sm_state)
        {
          case SM_IDLE:
            waitForMessages(1.0);
            break;

          case SM_ACT_BEGIN:
            trace("starting activation procedure");
            m_sm_state = SM_ACT_POWER_ON;
            break;

          case SM_ACT_POWER_ON:
            turnPowerOn();
            m_sm_state = SM_ACT_POWER_WAIT;
            break;

          case SM_ACT_POWER_WAIT:
            waitForMessages(1.0);
            if (isPowered())
              m_sm_state = SM_ACT_CONNECT;
            break;

          case SM_ACT_CONNECT:
            if (connect())
              m_sm_state = SM_ACT_SETUP;
            else
              Delay::wait(1.0);
            break;

          case SM_ACT_SETUP:
            waitForMessages(1.0);
            if (setup())
            {
              activate();
              m_sm_state = SM_ACT_LOG_GET;
            }
            break;

          case SM_ACT_LOG_GET:
            requestLogName();
            m_sm_state = SM_ACT_LOG_WAIT;
            break;

          case SM_ACT_LOG_WAIT:
            waitForMessages(1.0);
            if (logIsOpen())
              m_sm_state = SM_ACT_SYNC_WAIT;
            break;

          case SM_ACT_SYNC_WAIT:
            if (isSynched())
              m_sm_state = SM_ACT_PING;
            break;

          case SM_ACT_PING:
            if (getPing(m_ping))
            {
              putInLog(m_ping);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            break;

          case SM_DEACT_BEGIN:
            trace("starting deactivation procedure");
            m_sm_state = SM_DEACT_LOG_CLOSE;
            break;

          case SM_DEACT_LOG_CLOSE:
            closeLog();
            m_sm_state = SM_DEACT_DISCONNECT;

          case SM_DEACT_DISCONNECT:
            disconnect();
            m_sm_state = SM_DEACT_POWER_OFF;
            break;

          case SM_DEACT_POWER_OFF:
            turnPowerOff();
            m_sm_state = SM_DEACT_POWER_WAIT;
            break;

          case SM_DEACT_POWER_WAIT:
            waitForMessages(1.0);
            if (!isPowered() || !hasPowerChannel())
            {
              deactivate();
              m_sm_state = SM_IDLE;
            }
            break;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          updateStateMachine();
        }
      }
    };
  }
}

DUNE_TASK
