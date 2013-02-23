//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <map>
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SIMCT01
  {
    using DUNE_NAMESPACES;

    //! Maximum amount of time to wait for replies.
    static const double c_reply_tout = 0.01;
    static const double c_reset_duration = 2.0;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! True if serial port device echoes written data.
      bool echo;
      //! Motor entity names.
      std::vector<std::string> motor_enames;
      //! Motor logical addresses.
      std::vector<unsigned> addrs_log;
      //! Motor hardware addresses.
      std::vector<unsigned> addrs_hwr;
      //! Feedback querying frequency.
      double feedback_freq;
      //! Scale factor
      double scale;
      //! Watchdog timeout.
      double wdog_tout;
    };

    struct Task: public Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Current messages.
      std::vector<IMC::Current> m_amps;
      //! RPM messages.
      std::vector<IMC::Rpm> m_rpms;
      //! Feedback timer.
      Counter<double> m_feedback_timer;
      //! Watchdogs.
      std::vector<Counter<double> > m_wdogs;
      //! Reply timeout.
      double m_reply_tout;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_reply_tout(c_reply_tout)
      {
        param("Entity Label - Motors", m_args.motor_enames)
        .defaultValue("")
        .description("Entity names of each motor");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port used to connect to motors");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Serial Port - Echo", m_args.echo)
        .defaultValue("false");

        param("Hardware Addresses", m_args.addrs_hwr)
        .defaultValue("")
        .description("Hardware addresses of the thrusters");

        param("Logical Addresses", m_args.addrs_log)
        .defaultValue("")
        .description("Logical addresses of the thrusters");

        param("Scale Factor", m_args.scale)
        .defaultValue("1.0")
        .description("Scale factor to be multiplied to the thruster actuation reference");

        param("Feedback Querying Frequency", m_args.feedback_freq)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Frequency with which the motors are queried for current and RPMs");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("1.0");

        bind<IMC::SetThrusterActuation>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < m_args.motor_enames.size(); ++i)
        {
          unsigned eid = reserveEntity(m_args.motor_enames[i]);
          m_amps[i].setSourceEntity(eid);
          m_rpms[i].setSourceEntity(eid);
        }
      }

      void
      onUpdateParameters(void)
      {
        unsigned motor_count = m_args.motor_enames.size();
        m_amps.resize(motor_count);
        m_rpms.resize(motor_count);
        m_wdogs.resize(motor_count);

        if (m_args.addrs_log.size() != motor_count)
          throw std::runtime_error("number of logical addresses must match the number of entity names");

        if (m_args.addrs_hwr.size() != motor_count)
          throw std::runtime_error("number of hardware addresses must match the number of entity names");

        if (paramChanged(m_args.feedback_freq))
          m_feedback_timer.setTop(1.0 / m_args.feedback_freq);

        if (paramChanged(m_args.uart_dev) && m_uart)
          throw RestartNeeded("changing serial port device", 5);

        if (paramChanged(m_args.uart_baud) && m_uart)
          throw RestartNeeded("changing serial port baud rate", 5);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->setCanonicalInputTerminator('\r');
      }

      void
      onResourceInitialization(void)
      {
        setReplyTimeout(1.0);

        for (unsigned i = 0; i < m_args.addrs_log.size(); ++i)
        {
          if (!resetMotor(i))
            throw RestartNeeded(String::str("motor %u failed to reply on time", m_args.addrs_log[i]), 1);

          m_wdogs[i].setTop(m_args.wdog_tout);
        }

        setReplyTimeout(c_reply_tout);
        m_feedback_timer.reset();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      setReplyTimeout(double timeout)
      {
        m_reply_tout = timeout;
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        for (unsigned i = 0; i < m_args.addrs_log.size(); ++i)
        {
          if (m_args.addrs_log[i] == msg->id)
          {
            sendDemand(i, (int8_t)(msg->value * m_args.scale));
            break;
          }
        }
      }

      void
      readString(char* bfr, unsigned bfr_size)
      {
        m_uart->readString(bfr, bfr_size);
      }

      bool
      sendCommand(const char* cmd, char* reply, unsigned reply_size)
      {
        m_uart->flushInput();
        m_uart->write(cmd);

        if (m_args.echo)
        {
          if (m_uart->hasNewData(m_reply_tout) != IOMultiplexing::PRES_OK)
            return false;

          readString(reply, reply_size);
          if (std::strcmp(cmd, reply) != 0)
          {
            if (std::strcmp(cmd, reply + 1) != 0)
              return false;
          }
        }

        if (m_uart->hasNewData(m_reply_tout) != IOMultiplexing::PRES_OK)
          return false;

        readString(reply, reply_size);
        return true;
      }

      bool
      sendDemand(unsigned index, int8_t value)
      {
        char expected[16];
        std::sprintf(expected, "U%u4\r", m_args.addrs_hwr[index]);

        if (value > 100)
          value = 100;
        if (value < -100)
          value = -100;

        char cmd[16];
        std::sprintf(cmd, "u%u_%+03d\r", m_args.addrs_hwr[index], value);
        cmd[2] = std::strlen(cmd) + '0';

        char reply[16];
        if (!sendCommand(cmd, reply, sizeof(reply)))
          return false;

        if (std::strcmp(reply, expected) != 0)
          return false;

        m_wdogs[index].reset();
        return true;
      }

      bool
      resetMotor(unsigned index)
      {
        char expected[16];
        std::sprintf(expected, "U%u4\r", m_args.addrs_hwr[index]);

        char cmd[16];
        std::sprintf(cmd, "u%u_z\r", m_args.addrs_hwr[index]);
        cmd[2] = std::strlen(cmd) + '0';

        char reply[16];
        if (!sendCommand(cmd, reply, sizeof(reply)))
          return false;

        if (std::strcmp(reply, expected) != 0)
          return false;

        m_wdogs[index].reset();
        return true;
      }

      bool
      queryCurrent(unsigned index)
      {
        char cmd[16];
        std::sprintf(cmd, "u%u6?C\r", m_args.addrs_hwr[index]);

        char reply[16];
        if (!sendCommand(cmd, reply, sizeof(reply)))
          return false;

        unsigned value = 0;
        if (std::sscanf(reply, "U%*c%*cC%u\r", &value) != 1)
          return false;

        m_wdogs[index].reset();
        m_amps[index].value = value;
        dispatch(m_amps[index]);
        return true;
      }

      bool
      queryRPM(unsigned index)
      {
        char cmd[16];
        std::sprintf(cmd, "u%u6?R\r", m_args.addrs_hwr[index]);

        char reply[16];
        if (!sendCommand(cmd, reply, sizeof(reply)))
          return false;

        int value = 0;
        if (std::sscanf(reply, "U%*c%*cR%d\r", &value) != 1)
          return false;

        m_wdogs[index].reset();
        m_rpms[index].value = (int16_t)Math::round(value / 5.0);
        dispatch(m_rpms[index]);
        return true;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.5);

          // Query feedback.
          if (m_feedback_timer.overflow())
          {
            m_feedback_timer.reset();
            for (unsigned i = 0; i < m_args.addrs_hwr.size(); ++i)
            {
              queryRPM(i);
              queryCurrent(i);
            }
          }

          // Check watchdogs.
          std::vector<unsigned> in_error;
          for (unsigned i = 0; i < m_args.addrs_hwr.size(); ++i)
          {
            if (m_wdogs[i].overflow())
              in_error.push_back(i);
          }

          // Set entity state.
          if (in_error.size() == 0)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
        }
      }
    };
  }
}

DUNE_TASK
