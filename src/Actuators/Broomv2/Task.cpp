//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Utils.hpp"
#include "Reader.hpp"

namespace Actuators
{
  namespace Broomv2
  {
    //! .
    //!
    //! .
    //! @author Bernardo Gabriel
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Input timeout in seconds.
      float inp_tout;
      //! Frequency to send thruster actuation command.
      float thruster_freq;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Reader thread.
      Reader* m_reader;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Attempt to connect on Idle watchdog.
      Time::Counter<uint16_t> m_wdog_con;
      //! Timer for thruster actuation command.
      Time::Counter<float> m_thruster_cmd_timer;
      //! Thruster reference actuation.
      fp32_t m_thruster_ref;
      //! Vehicle operation mode
      uint8_t m_mode;
      //! Send command state.
      CMD_STATE m_send_cmd_state;
      //! Queue of commands to send.
      std::queue<std::pair<std::string, bool>> m_queue;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_reader(NULL),
        m_thruster_ref(0.0f),
        m_mode(IMC::VehicleState::VS_BOOT)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, 
                    true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\".");

        param("Input Timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("5.0f")
        .minimumValue("0.0f")
        .description("Input timeout");

        param("Thruster Command Frequency", m_args.thruster_freq)
        .units(Units::Second)
        .maximumValue("100.0f")
        .defaultValue("10.0f")
        .minimumValue("0.0f")
        .description("Frequency to send thruster actuation command.");

        setWaitForMessages(1.0);

        bind<IMC::DevDataText>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::VehicleState>(this);
      }

      //! Destructor.
      ~Task(void)
      {
        onDisconnect();
      }

      //! Task is in idle.
      void
      onIdle(void) override
      {
        if (m_wdog_con.getTop() > 0 && m_wdog_con.overflow())
        {
          m_wdog_con.setTop(0);
          requestActivation();
        }
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, CODE_ACTIVATING);

        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
          m_reader = new Reader(this, m_handle);
          m_reader->start();
        }
        catch (...)
        {
          war("Failed to connect to device: %s [retrying]", m_args.io_dev.c_str());
          m_wdog_con.setTop(getActivationTime());
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        setDisconnect();

        if (m_reader != NULL)
        {
          m_reader->stopAndJoin();
          Memory::clear(m_reader);
        }

        Memory::clear(m_handle);

        m_wdog_con.setTop(0.0f);
      }

      void
      setupBoard(void)
      {
        setConnect();

        waitForReplies();
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        m_wdog.setTop(m_args.inp_tout);
        setupBoard();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.io_dev) && isActive())
          requestRestart();

        if (paramChanged(m_args.inp_tout))
          m_wdog.setTop(m_args.inp_tout);

        if (paramChanged(m_args.thruster_freq))
          m_thruster_cmd_timer.setTop(m_args.thruster_freq == 0.0f ? 0.0f : 1.0f / m_args.thruster_freq);
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
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      
        if (msg->getSourceEntity() != getEntityId())
          return;

        spew("received: %s", sanitize(msg->value).c_str());

        if (!checkDataIn(msg->value))
        {
          trace(DTR("message with invalid checksum"));
          return;
        }

        m_wdog.reset();

        interpretDataIn(msg->value);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      
        if (msg->getSourceEntity() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          err("%s", msg->error.c_str());
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        setServoPosition(msg->id, Angles::degrees(msg->value));
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        m_thruster_ref = msg->value;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        
        if (m_mode != IMC::VehicleState::VS_BOOT &&
            m_mode != IMC::VehicleState::VS_SERVICE &&
            m_mode != IMC::VehicleState::VS_ERROR &&
            (msg->op_mode == IMC::VehicleState::VS_BOOT ||
             msg->op_mode == IMC::VehicleState::VS_SERVICE ||
             msg->op_mode == IMC::VehicleState::VS_ERROR))
        {
          m_thruster_ref = 0.0f;
          setThrusterActuation(m_thruster_ref);
          stopActuation();
        }
        else if ((m_mode == IMC::VehicleState::VS_BOOT ||
                  m_mode == IMC::VehicleState::VS_SERVICE ||
                  m_mode == IMC::VehicleState::VS_ERROR) &&
                  msg->op_mode != IMC::VehicleState::VS_BOOT &&
                  msg->op_mode != IMC::VehicleState::VS_SERVICE &&
                  msg->op_mode != IMC::VehicleState::VS_ERROR)
        {
          startActuation();
        }

        m_mode = msg->op_mode;
      }

      //! Check if data is valid.
      //! @return true if valid, false otherwise.
      bool
      checkDataIn(const std::string& line)
      {
        size_t pos = line.find_last_of(c_data_term);
        if (pos == line.npos || line[pos + 1] == c_line_term)
        {
          debug(DTR("message has no checksum"));
          return false;
        }

        uint8_t rcsum = line[pos + 1];
        return rcsum == calcCRC8(line);
      }

      //! Interpret incoming data.
      void
      interpretDataIn(const std::string& line)
      {
        std::vector<std::string> data;
        String::split(line, ",", data);
        if (data.size() < 3)
          return;

        char code = data[1].front();
        switch (code)
        {
        case c_code_ack:
          m_send_cmd_state = CMD_ACK;
          break;

        case c_code_nack:
          m_send_cmd_state = CMD_NACK;
          break;
          
        default:
          break;
        }
      }

      void
      waitForReplies(void)
      {
        while(!m_queue.empty() && !stopping())
        {
          if (m_wdog.getTop() > 0.0f && m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          waitForMessages(1.0);
          checkCommandQueue();
        }
      }

      void
      resetCommadQueue(void)
      {
        m_send_cmd_state = CMD_IDLE;
        m_queue.empty();
      }

      void
      checkCommandQueue(void)
      {
        switch (m_send_cmd_state)
        {
        case CMD_ACK:
          if (!m_queue.empty())
            m_queue.pop();
          [[fallthrough]];
        case CMD_IDLE:
        case CMD_NACK:
        case CMD_ERROR:
          if (!m_queue.empty())
          {
            auto& cmd = m_queue.front();
            sendCommand(cmd.first, cmd.second, true);
          }
          else
            m_send_cmd_state = CMD_IDLE;
          break;
        case CMD_WAITING:
        default:
          break;
        }
      }

      void
      sendCommand(std::string cmd, bool wait_ack, bool retry = false)
      {
        if (m_handle == NULL)
          return;

        if (!retry)
          m_queue.push(std::make_pair(cmd, wait_ack));

        if(m_send_cmd_state == CMD_WAITING)
          return;
        
        spew("sending: %s%s", sanitize(cmd).c_str(), wait_ack ? " (needs response)" : "");
        m_handle->writeString(cmd.c_str());

        if (!wait_ack)
        {
          m_send_cmd_state = CMD_IDLE;
          m_queue.pop();
        }
        else
          m_send_cmd_state = CMD_WAITING;
        
        return;
      }

      void
      sendCommand(const char& code, bool wait_ack)
      {
        if (m_handle == NULL)
          return;
        
        char cmd[64];
        std::sprintf(cmd, "%c,%c,%c",
                           c_line_init,
                           code,
                           c_data_term);
        std::sprintf(cmd, "%s%c%c", cmd, calcCRC8(cmd), c_line_term);
        sendCommand(cmd, wait_ack);
      }

      void
      sendCommand(const char& code, bool wait_ack, const char* fmt, ...)
      {
        if (m_handle == NULL)
          return;
        
        char bfr[256];
        va_list args;
        va_start(args, fmt);
        vsprintf(bfr, fmt, args);
        va_end(args);
        char cmd[256 + 7];
        std::sprintf(cmd, "%c,%c,%s,%c",
                           c_line_init,
                           code,
                           bfr,
                           c_data_term);
        std::sprintf(cmd, "%s%c%c", cmd, calcCRC8(cmd), c_line_term);
        sendCommand(cmd, wait_ack);
      }

      void
      startActuation(void)
      {
        sendCommand(c_code_actuation, true, "%c", c_code_actuation_start);
      }

      void
      stopActuation(void)
      {
        sendCommand(c_code_actuation, true, "%c", c_code_actuation_stop);
      }

      void
      setServoPosition(uint8_t id, fp32_t angle)
      {
        sendCommand(c_code_actuation, false, "%c,%u,%.2f",
                                              c_id_servo, 
                                              id,
                                              angle);
      }

      void
      setThrusterActuation(fp32_t value)
      {
        sendCommand(c_code_actuation, false, "%c,%.3f",
                                              c_id_thruster,
                                              value);
      }

      void
      setConnect(void)
      {
        resetCommadQueue();
        sendCommand(c_code_connect, true);
      }

      void
      setDisconnect(void)
      {
        resetCommadQueue();
        sendCommand(c_code_disconnect, false);
      }

      //! Executed when task is activated.
      //! Data is read on consume(const IMC::DevDataText* msg).
      //! @return true.
      bool
      onReadData() override
      {
        if (m_wdog.getTop() > 0.0f && m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        if (m_thruster_cmd_timer.overflow() &&
            m_mode != IMC::VehicleState::VS_BOOT &&
            m_mode != IMC::VehicleState::VS_SERVICE &&
            m_mode != IMC::VehicleState::VS_ERROR)
          setThrusterActuation(m_thruster_ref);

        return true;
      }
    };
  }
}

DUNE_TASK
