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
// Author: João Costa                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// Local Headers.
#include "Parser.hpp"

//! Abort Cmd char
#define CMD_ABORT 'A'
//! Send parameter's manual command
#define CMD_MANUAL 'M'
//! Ping firmware Cmd char
#define CMD_PING 'P'
//! Sample Clean Cmd char
#define CMD_CLEAN_SAMPLE 'C'
//! Sample Polluted Cmd char
#define CMD_DIRTY_SAMPLE 'D'
//! Stop Cmd char
#define CMD_STOP 'T'
//! Get firmware version Cmd char
#define CMD_VERSION 'V'
//! Acknowledged sampling is done Cmd char
#define CMD_ACKD_DONE 'O'

//! Cmd max send tries
#define CMD_MAX_TRIES 10
//! Cmd's answer max waiting time (s)
#define ANSWER_DELAY 5

//! Firminfe's ping interval
#define PING_INTERVAL 10
//! Firminfe's watchdog time
#define WATCHDOG_TIME 30

namespace Actuators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Costa
  namespace RampSampler
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_buffer = 128;

    //! Navigation states.
    enum StateMachineStates
    {
      //! Initialization state.
      SM_INIT,
      //! Stopped State.
      SM_STOPPED,
      //! Moving to a waypoint.
      SM_MOVING,
      //! Asking for sample state.
      SM_SAMPLE,
      //! Sampling State.
      SM_SAMPLING,
      //! Maneuver Done.
      SM_MANEUVER_DONE
    };

    enum BoardInitStates
    {
      //! Board Init Starting Point
      BI_START,
      //! Ask FW's version
      BI_ASK_VERSION,
      //! Wait for/Get FW's version state
      BI_GET_VERSION,
      //! Init done state
      BI_DONE
    };

    enum FwSamplingStateOptions
    {
      SAMPLING_STOPPED,
      SAMPLING_INPUTSELECT,
      SAMPLING_CLEAN,
      SAMPLING_DIRTY,
      SAMPLING_SAVED,
      SAMPLING_DONE
    };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Type of sample.
      std::string type_of_sample;
      //! CPU Serial Command
      std::string cpu_cmd;
      //! Expected name of the plan to consider sampling plan
      std::string plan_name;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Master name
      std::string m_master_name;

      //! Serial port handle.
      SerialPort *m_uart;
      //! count for fail rx uartm_args.cpu_cmd
      uint8_t m_fail_uart;
      //! Serial buffer in
      uint8_t m_bfr[128];
      //! Parser
      Parser *m_parse;
      //! CSUM value
      uint8_t m_csum[c_max_csum];
      //! Message used to construct the command to be sent
      char m_msg[c_max_buffer - 32];
      //! Command to be sent via usart
      char m_cmd[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;

      //! Command send count
      uint8_t cmd_sent_count;
      //! Timer used for resend the command to WASAB.
      Time::Counter<double> m_cmd_timer;
      //! WASAB's Pinger.
      Time::Counter<double> m_pinger;

      //! New manual cmd available flag
      bool m_manual_cmd_FL;
      //! Vehicle is near the go-to flag
      bool m_NEAR_FL;
      //! Start plan flag
      bool m_START_FL;
      //! Stop plan flag
      bool m_STOP_FL;
      //! Is sampling plan started flag
      bool m_SAMPLING_PLAN_FL;
      //! Is another plan started flag
      bool m_ANOTHER_PLAN_FL;
      //! Otter in maneuver flag
      bool m_ON_MANEUVER_FL;
      //! Let maneuver end flag
      bool m_WAIT_END_FL;

      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Board Init state
      BoardInitStates m_bi_state;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Maneuver done flag to be sent via IMC
      IMC::ManeuverDone m_done;

      //! Type of sample
      std::string m_type_of_sample;
      //! Last path_ref value from PathControlState
      uint32_t last_flag_path_ref;

      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
                                                           m_master_name("otter"),
                                                           m_uart(NULL),
                                                           cmd_sent_count(0),
                                                           m_manual_cmd_FL(false),
                                                           m_NEAR_FL(false),
                                                           m_START_FL(false),
                                                           m_STOP_FL(false),
                                                           m_SAMPLING_PLAN_FL(false),
                                                           m_ANOTHER_PLAN_FL(false),
                                                           m_ON_MANEUVER_FL(false),
                                                           m_WAIT_END_FL(false),
                                                           m_sm_state(SM_INIT),
                                                           m_bi_state(BI_START)
      {
        param("Serial Port - Device", m_args.uart_dev)
            .defaultValue("/dev/ttyUSB0")
            .description("Serial port used to communicate with the firmware.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
            .defaultValue("115200")
            .description("Serial port baudrate.");

        param("Type of Sample", m_args.type_of_sample)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_MANEUVER)
            .values(DTR_RT("None, Clean, Dirty"))
            .defaultValue("None")
            .description(DTR("Type of the required sample."));

        param("Serial Manual Command", m_args.cpu_cmd)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("P")
            .description(DTR("Command input to send manually to firmware."));

        param("Plan Name Prefix", m_args.plan_name)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .defaultValue("Sample_")
            .description(DTR("Prefix of the sampling plan's name."));

        bind<IMC::PathControlState>(this);
        bind<IMC::PlanControl>(this);
        // bind<IMC::PlanControlState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        // bind<IMC::StopManeuver>(this);
        bind<IMC::Abort>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        war("onUpdateParameters()");

        // If it is stopped and parameters are updated while its in maneuver
        if (m_sm_state == SM_STOPPED && m_ON_MANEUVER_FL && !m_STOP_FL) //&& (m_SAMPLING_PLAN_FL || m_ANOTHER_PLAN_FL))
        {
          m_START_FL = true;
          trace("[VAR] : m_START_FL = true");
        }

        // update command to be sent manually to WASAB
        if (paramChanged(m_args.cpu_cmd))
        {
          m_manual_cmd_FL = true;
        }

        // update type of sample if changed
        if (paramChanged(m_args.type_of_sample))
        {
          m_type_of_sample = m_args.type_of_sample;
          trace("[PARAM] : type_of_sample = %s", m_type_of_sample.c_str());
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        // spew("onEntityReservation()");
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        // spew("onEntityResolution()");
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // spew("onResourceAcquisition()");
        err("onResourceAcquisition()");
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
          m_fail_uart = 0;
          m_poll.add(*m_uart);
        }
        catch (std::runtime_error &e)
        {
          err("Error opening serial port");
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // spew("onResourceInitialization()");

        // if (m_uart != NULL)
        //{
        m_uart->flushInput();
        m_uart->flush();

        m_parse = new Parser(this);
        //}

        m_parse->set_wdog(WATCHDOG_TIME);
        m_pinger.setTop(PING_INTERVAL);
        m_cmd_timer.setTop(ANSWER_DELAY);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        // spew("onResourceRelease()");

        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      //! Send Commands to Serial Port
      void
      sendCommand(char cmd)
      {
        std::memset(&m_msg, '\0', sizeof(m_msg));
        if (cmd == CMD_MANUAL)
        {
          std::sprintf(m_msg, "%s*", m_args.cpu_cmd.c_str());
        }
        else
        {
          std::sprintf(m_msg, "%c*", cmd);
        }
        m_csum[0] = Algorithms::XORChecksum::compute((uint8_t *)m_msg, strlen(m_msg) - 1, 0);
        sprintf(m_cmd, "$%s%c\r\n", m_msg, m_csum[0]);
        m_parse->m_msg_receipt = 0;
        m_uart->writeString(m_cmd);
        spew("SendCommand: %s", m_cmd);
      }

      //! Check if there's commands that need to be sent.
      void
      updateCpuCommands(void)
      {
        if (m_manual_cmd_FL)
        {
          sendCommand(CMD_MANUAL);
          m_manual_cmd_FL = false;
        }
      }

      //! Check if there's data to be read sent by WASAB.
      bool
      hasNewData(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          std::memset(&m_bfr, '\0', sizeof(m_bfr));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_bfr, sizeof(m_bfr));
          }
          catch (std::exception &e)
          {
            err(DTR("read error: %s"), e.what());
            return false;
          }

          if (rv <= 0)
          {
            err(DTR("unknown read error"));
            return false;
          }
          else
          {
            for (uint8_t i = 0; i < rv; ++i)
            {
              if (!m_parse->parse(m_bfr[i]))
                continue;
              return true;
            }
          }
        }
        return false;
      }

      void
      consume(const IMC::PathControlState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        trace("IMC::PathControlState");
        // spew("source: %s | path_ref: %d | NEAR_FL: %d", resolveSystemId(msg->getSource()), msg->path_ref, msg->flags);

        if ((msg->flags & IMC::PathControlState::FL_NEAR) && (msg->path_ref != last_flag_path_ref))
        {
          m_NEAR_FL = true;
          trace("[VAR] : NEAR_FL = true");
          last_flag_path_ref = msg->path_ref;
        }
      }

      void
      consume(const IMC::PlanControl *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        trace("IMC::PlanControl");
        // spew("type: %d | operation: %d | plan: %s | source: %s", msg->type, msg->op, msg->plan_id.c_str(), resolveSystemId(msg->getSource()));

        // If request to start plan was successful (or completed)
        if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_START)
        {
          // Check if plan is completed
          if (msg->info.find("completed") != std::string::npos)
          {
            m_START_FL = false;
            trace("[VAR] : m_START_FL = false");
            m_STOP_FL = true;
            trace("[VAR] : m_STOP_FL = true");
            m_SAMPLING_PLAN_FL = false;
            trace("[VAR] : m_SAMPLING_PLAN_FL = false");
            m_ANOTHER_PLAN_FL = false;
            trace("[VAR] : m_ANOTHER_PLAN_FL = false");
            m_sm_state = SM_STOPPED;
            debug("[STATE] : m_sm_state = SM_STOPPED");
          }
          else // Or successfully initiated
          {
            m_START_FL = true;
            trace("[VAR] : m_START_FL = true");
            m_STOP_FL = false;
            trace("[VAR] : m_STOP_FL = false");
          }

          // Check if the plan is the one to sample
          if (msg->plan_id.find(m_args.plan_name) != std::string::npos)
          {
            // And the plan started/is running.
            if (m_START_FL)
            {
              inf("Started sampling plan.");
              m_SAMPLING_PLAN_FL = true;
              trace("[VAR] : m_SAMPLING_PLAN_FL = true");
              m_ANOTHER_PLAN_FL = false;
              trace("[VAR] : m_ANOTHER_PLAN_FL = false");
            }
            // Or if it just ended.
            else
            {
              inf("Finished sampling plan");
            }
          }
          // Or if the plan is another one
          else
          {
            if (m_START_FL)
            {
              inf("Started another plan.");
              m_SAMPLING_PLAN_FL = false;
              trace("[VAR] : m_SAMPLING_PLAN_FL = false");
              m_ANOTHER_PLAN_FL = true;
              trace("[VAR] : m_ANOTHER_PLAN_FL = true");
            }
            else
            {
              inf("Finished another plan.");
            }
          }
        }
        // If request to stop plan was successful
        else if (msg->type == IMC::PlanControl::PC_SUCCESS && msg->op == IMC::PlanControl::PC_STOP)
        {
          inf("Stop plan!");
          m_START_FL = false;
          trace("[VAR] : m_START_FL = false");
          m_STOP_FL = true;
          trace("[VAR] : m_STOP_FL = true");
          m_sm_state = SM_STOPPED;
          debug("[STATE] : m_sm_state = SM_STOPPED");

          sendCommand(CMD_STOP);
          sendCommand(CMD_STOP);
          inf("Stop command sent to WASAB.");
        }
      }

      void
      consume(const IMC::EstimatedState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::VehicleState *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getSource())) != 0)
          return;

        trace("IMC::VehicleState");
        // spew("mode: %d | source: %s ", msg->op_mode, resolveSystemId(msg->getSource()));

        if ((msg->op_mode == IMC::VehicleState::VS_MANEUVER) && !m_ON_MANEUVER_FL) // If vehicle enters MANEUVER mode
        {
          m_ON_MANEUVER_FL = true;
          trace("[VAR] : m_ON_MANEUVER_FL = true");
        }
        else if ((msg->op_mode != IMC::VehicleState::VS_MANEUVER) && m_ON_MANEUVER_FL) // If vehicle leaves MANEUVER mode
        {
          m_ON_MANEUVER_FL = false;
          trace("[VAR] : m_ON_MANEUVER_FL = false");
          m_sm_state = SM_STOPPED;
          debug("[STATE] : m_sm_state = SM_STOPPED");
        }
      }

      void
      consume(const IMC::Abort *msg)
      {
        if (m_master_name.compare(resolveSystemId(msg->getDestination())) != 0)
          return;

        trace("IMC::Abort");
        inf("Mission Aborted");

        sendCommand(CMD_STOP);
        sendCommand(CMD_STOP);
        spew("STOP (Abort) sent to WASAB.");

        m_STOP_FL = true;
        trace("[VAR] : m_STOP_FL = true");
        m_sm_state = SM_STOPPED;
        debug("[STATE] : m_sm_state = SM_STOPPED");

        m_NEAR_FL = false;
        trace("[VAR] : m_NEAR_FL = false");
        m_START_FL = false;
        trace("[VAR] : m_START_FL = false");
        m_SAMPLING_PLAN_FL = false;
        trace("[VAR] : m_SAMPLING_PLAN_FL = false");
        m_ANOTHER_PLAN_FL = false;
        trace("[VAR] : m_ANOTHER_PLAN_FL = false");
        m_ON_MANEUVER_FL = false;
        trace("[VAR] : m_ON_MANEUVER_FL = false");
      }

      //! Board Initiation State Machine
      uint8_t
      initBoard()
      {
        switch (m_bi_state)
        {
        // Initiation starting point
        case BI_START:
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_SYNCING);
          m_bi_state = BI_ASK_VERSION;
          debug("[STATE] : m_bi_state = BI_ASK_VERSION");
          break;

        // Ask WASAB's fw version
        case BI_ASK_VERSION:
          sendCommand(CMD_VERSION);
          m_cmd_timer.reset();
          cmd_sent_count++;
          trace("[VAR] : cmd_sent_count = %d", cmd_sent_count);
          m_bi_state = BI_GET_VERSION;
          debug("[STATE] : m_bi_state = BI_WAIT_VERSION");
          break;

        // Wait until get WASAB's fw version
        case BI_GET_VERSION:
          // if msg with fw's version is received
          if (m_parse->m_msg_receipt == 1 && m_parse->m_rampState.fwVersion != 0.0)
          {
            // reset vars, dispatch fw, move state
            m_parse->m_msg_receipt = 0;
            trace("[VAR] : m_parse->m_msg_receipt = 0");
            cmd_sent_count = 0;
            trace("[VAR] : cmd_sent_count = 0");
            inf("WASAB (RAMP Version) fw v%.1f", m_parse->m_rampState.fwVersion);
            m_bi_state = BI_DONE;
            debug("[STATE] : m_bi_state = BI_DONE");
          }
          else if (m_cmd_timer.overflow()) // check if time to answer passed
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              inf("WASAB not answered version command: %d.", cmd_sent_count);
              m_bi_state = BI_ASK_VERSION;
              debug("[STATE] : m_bi_state = BI_ASK_VERSION");
            }
            else
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR("WASAB don't answer DUNE"), 5);
            }
          }
          break;
        // Board Initialized. State machine is now, ready to operate.
        case BI_DONE:
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          break;
        }
        return m_bi_state;
      }

      //! Main State Machine
      void
      updateStateMachine(void)
      {
        switch (m_sm_state)
        {
        // Waits for Board Initialization
        case SM_INIT:
          if (initBoard() == BI_DONE)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            m_sm_state = SM_STOPPED;
            debug("[STATE] : m_sm_state = SM_STOPPED");
          }
          break;
        // Ready to operate, waiting to start
        case SM_STOPPED:
          if (m_START_FL && m_ON_MANEUVER_FL && !m_STOP_FL && (m_SAMPLING_PLAN_FL || m_ANOTHER_PLAN_FL))
          {
            inf("The vehicle start moving");
            m_sm_state = SM_MOVING;
            debug("[STATE] : m_sm_state = SM_MOVING");
            m_START_FL = false;
            trace("[VAR] : m_START_FL = false");
            m_NEAR_FL = false;
            trace("[VAR] : m_NEAR_FL = false");
          }
          break;
        case SM_MOVING:
          if (m_NEAR_FL) // when the vehicle arrives to the waypoint
          {
            if (m_SAMPLING_PLAN_FL) // if the plan is the sampling plan
            {
              if (std::strcmp(m_type_of_sample.c_str(), "None") != 0) // and there is samples to be done in here
              {
                inf("Way Point Info: Sample Type: %s.", m_type_of_sample.c_str());

                if (std::strcmp(m_type_of_sample.c_str(), "Clean") == 0)
                {
                  sendCommand(CMD_CLEAN_SAMPLE);
                  inf("Asked for Clean Sample.");
                }
                else
                {
                  sendCommand(CMD_DIRTY_SAMPLE);
                  inf("Asked for Dirty Sample.");
                }

                m_sm_state = SM_SAMPLE;
                debug("[STATE] : m_sm_state = SM_SAMPLING");
                cmd_sent_count++;
                trace("[VAR] : cmd_sent_count = %d", cmd_sent_count);
                m_cmd_timer.reset();
              }
              else
              {
                inf("Way Point Info: No sampling here.");
                m_sm_state = SM_MANEUVER_DONE;
                debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
              }
            } 
            else // if it is not the sampling plan
            {
              inf("Way Point Info: No sampling here.");
              m_sm_state = SM_MANEUVER_DONE;
              debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
            }
            m_NEAR_FL = false;
          }
          break;
        case SM_SAMPLE:
          if (m_parse->m_rampState.sampleState == SAMPLING_CLEAN || m_parse->m_rampState.sampleState == SAMPLING_DIRTY)
          {
            inf("Sampling initiated.");
            m_sm_state = SM_SAMPLING;
            debug("[STATE] : m_sm_state = SM_SAMPLING");
            m_args.cpu_cmd = "";
            trace("[VAR] : m_args.cpu_smd = \"\"");
            cmd_sent_count = 0;
            trace("[VAR] : cmd_sent_count = 0");
            m_parse->m_msg_receipt = 0;
            trace("[VAR] : m_parse->m_msg_receipt = 0");
            m_NEAR_FL = false;
          }
          else if (m_parse->m_msg_receipt == 0 && m_cmd_timer.overflow())
          {
            if (cmd_sent_count < CMD_MAX_TRIES)
            {
              inf("WASAB not answered %d SAMPLING commands.", cmd_sent_count);
              cmd_sent_count++;
              trace("[VAR] : cmd_sent_count = %d", cmd_sent_count);
              m_cmd_timer.reset();
              m_sm_state = SM_MOVING;
              debug("[STATE] : m_sm_state = SM_MOVING");
            }
            else
            {
              err("WASAB not answered %d DUNE commands.", CMD_MAX_TRIES);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              cmd_sent_count = 0;
              trace("[VAR] : cmd_sent_count = 0");
              m_sm_state = SM_STOPPED;
              debug("[STATE] : m_sm_state = SM_STOPPED");
            }
          }
          break;

        case SM_SAMPLING:
          if (m_parse->is_sampling_done())
          {
            m_parse->reset_is_sampling_done();
            sendCommand(CMD_ACKD_DONE);
            inf("Sampling done.");
            m_args.cpu_cmd = "";
            trace("[VAR] : m_args.cpu_smd = \"\"");
            m_sm_state = SM_MANEUVER_DONE;
            debug("[STATE] : m_sm_state = SM_MANEUVER_DONE");
          }
          break;

        case SM_MANEUVER_DONE:
          dispatch(m_done);
          inf("Maneuver done.");
          m_parse->reset_is_sampling_done();
          if (m_START_FL)
          {
            m_sm_state = SM_MOVING;
            m_START_FL = false;
            debug("[STATE] : m_sm_state = SM_MOVING");
          }
          else
          {
            m_sm_state = SM_STOPPED;
            debug("[STATE] : m_sm_state = SM_STOPPED");
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
          // Check for serial commands and parse them.
          if (m_poll.poll(0.2))
          {
            if (hasNewData())
            {
              m_parse->translate();
            }
          }

          // Check if firmware pinged back.
          if (m_parse->m_fw_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("WASAB's watchdog triggered!"), 10);
          }
          else if (m_pinger.overflow())
          {
            sendCommand(CMD_PING);
            m_pinger.reset();
          }

          // Check if there's any flags tocommand to be sent.
          updateCpuCommands();

          // Update state machines.
          updateStateMachine();

          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
