//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Listener.hpp"

namespace Actuators
{
  namespace SCRTv4
  {
    using DUNE_NAMESPACES;

    //! Number of servos
    static const unsigned c_servo_count = 4;

    enum Commands
    {
      CMD_STATE                = 1,
      CMD_PARAMS_CON           = 2,
      CMD_PARAMS_FAC           = 3,
      CMD_PARAMS_EFF           = 4,
      CMD_PARAMS_CAL_FBK       = 5,
      CMD_PARAMS_CAL_FBK_START = 6,
      CMD_PARAMS_CAL_FBK_END   = 7,
      CMD_PARAMS_CAL_MID       = 8,
      CMD_SERVO_SET            = 9,
      CMD_SERVO_PWR            = 10,
      CMD_SELF_TEST            = 11,
      CMD_CHECK_FUSES          = 12
    };

    enum ContinuousOutputRates
    {
      CONT_OUT_RATE_0HZ        = 0,
      CONT_OUT_RATE_1HZ        = 1,
      CONT_OUT_RATE_2HZ        = 2,
      CONT_OUT_RATE_5HZ        = 5,
      CONT_OUT_RATE_10HZ       = 10
    };

    enum SelfTestResult
    {
      SELF_TEST_OK             = 0xf0,
      SELF_TEST_ERROR          = 0xf1
    };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Servo directions.
      std::vector<double> servo_dirs;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Servo position messages.
      IMC::ServoPosition m_servo_pos[c_servo_count];
      //! Current messages.
      IMC::Current m_servo_amp[c_servo_count];
      //! Serial port device.
      SerialPort* m_uart;
      Listener* m_listener;
      //! Minimum excursion (º).
      double m_exc_min[c_servo_count];
      //! Maximum excursion (º).
      double m_exc_max[c_servo_count];
      //! Demand resolution.
      uint8_t m_demand_res;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_listener(NULL),
        m_demand_res(0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Servo Directions", m_args.servo_dirs)
        .defaultValue("-1, 1, -1, 1")
        .size(c_servo_count)
        .description("Direction of the servos");

        // Register handler routines.
        bind<IMC::SetServoPosition>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          m_servo_pos[i].id = i;

          std::string elabel = String::str("%s - Servo %u", getEntityLabel(), i);
          m_servo_amp[i].setSourceEntity(reserveEntity(elabel));
        }
      }

      void
      onResourceRelease(void)
      {
        if (m_listener != NULL)
        {
          m_listener->stopAndJoin();
          delete m_listener;
          m_listener = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, 115200);
          m_listener = new Listener(m_uart);
          m_listener->start();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      void
      onResourceInitialization(void)
      {
        LUCL::ProtocolParser::sendCommand(CMD_PARAMS_CON, 0, 0, m_uart);
        LUCL::ProtocolParser::sendCommand(CMD_PARAMS_EFF, 0, 0, m_uart);
        LUCL::ProtocolParser::sendCommand(CMD_STATE, CONT_OUT_RATE_10HZ, m_uart);

        m_wdog.setTop(5.0);
      }

      uint8_t
      convertAngleToDemand(unsigned servo, double angle)
      {
        double deg = Angles::degrees(angle * m_args.servo_dirs[servo]);
        if (deg > m_exc_max[servo])
          deg = m_exc_max[servo];

        if (deg < m_exc_min[servo])
          deg = m_exc_min[servo];

        double exc_deg = m_exc_max[servo] - m_exc_min[servo];
        uint8_t demand = (uint8_t)Math::round(((deg - m_exc_min[servo]) * m_demand_res) / exc_deg);
        if (demand > m_demand_res)
          demand = m_demand_res;

        return demand;
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        uint8_t servo = msg->id;
        if (servo >= c_servo_count)
          return;

        uint8_t data[] =
        {
          servo,
          convertAngleToDemand(servo, msg->value)
        };

        LUCL::ProtocolParser::sendCommand(CMD_SERVO_SET, data, sizeof(data), m_uart);
      }

      void
      handleState(LUCL::Command::CommandPayload& cmd)
      {
        uint8_t* ptr = cmd.data;

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          uint16_t position = (ptr[5] << 8) | ptr[4];
          uint16_t current = (ptr[11] << 8) | ptr[10];
          ptr += 12;

          m_servo_amp[i].value = current / 1000.0;
          dispatch(m_servo_amp[i]);
          m_servo_pos[i].value = Angles::radians(m_exc_min[i] + position) * m_args.servo_dirs[i];
          dispatch(m_servo_pos[i]);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.reset();
      }

      void
      handleParamsEff(LUCL::Command::CommandPayload& cmd)
      {
        uint8_t* ptr = cmd.data;

        ptr += 2;

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          uint16_t exc_min = (ptr[i * 2 + 17] << 8) | ptr[i * 2 + 16];
          uint16_t exc_max = (ptr[i * 2 + 25] << 8) | ptr[i * 2 + 24];

          m_exc_min[i] = -exc_min;
          m_exc_max[i] = exc_max;
        }
      }

      void
      handleParamsCon(LUCL::Command::CommandPayload& cmd)
      {
        m_demand_res = cmd.data[6];
      }

      void
      handleCommand(LUCL::Command* cmd)
      {
        switch (cmd->type)
        {
          case LUCL::CommandTypeNormal:
            if (cmd->command.code == CMD_STATE)
              handleState(cmd->command);
            else if (cmd->command.code == CMD_PARAMS_CON)
              handleParamsCon(cmd->command);
            else if (cmd->command.code == CMD_PARAMS_EFF)
              handleParamsEff(cmd->command);
            break;

          case LUCL::CommandTypeError:
            err("error");
            break;

          default:
            break;
        }
      }

      void
      onMain(void)
      {
        LUCL::Command* cmd = NULL;

        while (!stopping())
        {
          waitForMessages(0.1);

          while ((cmd = m_listener->pop()) != NULL)
          {
            handleCommand(cmd);
            delete cmd;
          }

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
