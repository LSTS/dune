//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Listener.hpp"

namespace Transports
{
  //! %AirOS is responsible to communicate with Ubiquiti's AirOS
  //! wireless and router operating system.
  //!
  //! @author Ricardo Martins
  namespace AirOS
  {
    using DUNE_NAMESPACES;

    //! Possible modes.
    enum Mode
    {
      //! Device is master (Access Point).
      MODE_MASTER,
      //! Device is managed (Station).
      MODE_MANAGED,
      //! Device mode is unknown.
      MODE_UNKNOWN
    };

    //! Device type.
    enum Type
    {
      //! Device is AirMAX (v5).
      TYPE_AIRMAX,
      //! Device is legacy (v3/v4).
      TYPE_LEGACY,
      //! Device type is unknown.
      TYPE_UNKNOWN
    };

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
      //! Port.
      unsigned port;
      //! Username.
      std::string user;
      //! Password
      std::string pass;
    };

    //! Command to verify mode.
    static const std::string c_cmd_mode = "/usr/www/cfg.cgi | grep radio.1.mode\r\n";
    //! Command to verify device type.
    static const std::string c_cmd_type = "cat /usr/lib/version\r\n";
    //! Command to verify signal.
    static const std::string c_cmd_sign = "echo $(/usr/www/signal.cgi | grep 'signal')\r\n";
    //! Command to verify PS1.
    static const std::string c_cmd_ps1 = "PS1='# '\r\n";

    struct Task: public Tasks::Periodic
    {
      //! RSSI.
      IMC::RSSI m_rssi;
      //! Task arguments.
      Arguments m_args;
      //! Worker thread.
      Listener* m_worker;
      //! Radio mode.
      Mode m_mode;
      //! Radio type.
      Type m_type;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_worker(NULL),
        m_mode(MODE_UNKNOWN),
        m_type(TYPE_UNKNOWN)
      {
        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.1.20");

        param("Port", m_args.port)
        .defaultValue("23");

        param("Username", m_args.user)
        .defaultValue("ubnt");

        param("Password", m_args.pass)
        .defaultValue("ubnt");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        if (m_worker != NULL)
        {
          m_worker->stopAndJoin();
          delete m_worker;
        }
      }

      void
      onResourceAcquisition(void)
      {
        onResourceRelease();
        m_worker = new Listener(m_args.addr, m_args.port);
      }

      void
      onResourceInitialization(void)
      {
        m_worker->start();

        login();
        getType();
        getMode();
      }

      //! Login to AirOS.
      void
      login(void)
      {
        // Send username.
        m_worker->send(m_args.user + "\n");
        if (!m_worker->waitForLine(1.0))
          throw std::runtime_error(DTR("username failure"));
        m_worker->getLine();

        Delay::wait(0.5);

        // Send password.
        m_worker->send(m_args.pass + "\n");
        if (!m_worker->waitForLine(1.0))
          throw std::runtime_error(DTR("password failure"));
        m_worker->getLine();

        // Read MOTD.
        for (int i = 0; i < 5; ++i)
        {
          if (!m_worker->waitForLine(1.0))
            throw std::runtime_error(DTR("MOTD failure"));
          m_worker->getLine();
        }

        // Change prompt.
        m_worker->send(c_cmd_ps1);
        for (int i = 0; i < 2; ++i)
        {
          if (!m_worker->waitForLine(1.0))
            throw std::runtime_error(DTR("PS1 failure"));
          m_worker->getLine();
        }
      }

      //! Get device type.
      void
      getType(void)
      {
        if (!m_worker->sendCommand(c_cmd_type))
          return;

        if (!m_worker->waitForLine(1.0))
          return;

        std::string version = m_worker->getLine();
        int major = 0;
        if (std::sscanf(version.c_str(), "%*[^.].%*[^.].v%d", &major) != 1)
          return;

        if (major == 5)
          m_type = TYPE_AIRMAX;
        else
          m_type = TYPE_LEGACY;
      }

      //! Get device mode.
      void
      getMode(void)
      {
        if (!m_worker->sendCommand(c_cmd_mode))
        {
          inf(DTR("no mode"));
          return;
        }

        if (!m_worker->waitForLine(1.0))
        {
          inf(DTR("no mode2"));
          return;
        }

        std::string mode = m_worker->getLine();
        war("%s", mode.c_str());

        if (mode == "radio.1.mode=managed\r\n")
          m_mode = MODE_MANAGED;
        else
          m_mode = MODE_MASTER;
      }

      //! Get RSSI.
      void
      getRSSIManaged(void)
      {
        if (!m_worker->sendCommand(c_cmd_sign))
        {
          inf(DTR("command failure"));
          return;
        }

        inf(DTR("command passed"));

        if (!m_worker->waitForLine(1.0))
          return;

        std::string line = m_worker->getLine();
        int signal = 0;
        int noisef = 0;
        if (std::sscanf(line.c_str(), "signal=%d; noisef=%d;\r", &signal, &noisef) != 2)
          return;

        float rssi = signal - noisef;
        if (rssi < 0)
          rssi *= -1.0;

        float level = (rssi * 100.0) / 30.0;
        level = trimValue(level, 0.0f, 100.0f);

        inf(DTR("level %0.2f"), level);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      task(void)
      {
        if (m_mode == MODE_MANAGED)
        {
          getRSSIManaged();
        }
      }
    };
  }
}

DUNE_TASK
