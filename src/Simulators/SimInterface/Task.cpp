//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luís Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace SimInterface
  {
    using DUNE_NAMESPACES;

    enum sockets
    {
      //! Listener socket
      LISTENER = 0,
      //! Driver socket
      DRIVER = 1,
      //! Modem socket
      MODEM = 2,
      //! Modem settings socket
      SETTINGS = 3,
      //! Number of sockets
      NUM_SOCK
    };

    std::array<std::string, NUM_SOCK> c_sock_name = {"listener", "driver", "modem", "settings"};

    struct Arguments
    {
      //! Local UDP port of interface
      uint16_t local_port;
      //! IPv4 Address of interface
      Address local_address;
      //! IPv4 Address of modem
      Address modem_address;
      //! Port for simulated modem
      uint16_t modem_port;
      //! Port for settigns of simulated modem
      uint16_t settings_port;
      //! Position update period
      double update_period;
      //! Common position reference
      //! to use as origin
      std::vector<double> ref;
      //! Name of the section with modem addresses.
      std::string addr_section;
      //! Modem settings
      struct set
      {
        // double source_level;
        // double noise_level;
        // double rx_sensitivity;

        // std::string attenuation_model;
        // std::string dups;
        // double mistiming;

        double ber;
        double rmax;
        double rshallow;
        double betta;
      }settings;

    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Buffer capacity.
      static const unsigned c_bfr_size = 255;
      // Task arguments.
      Arguments m_args;
      //! TCP sockets
      TCPSocket* m_socket[NUM_SOCK];
      //! Last received SimulatedState
      IMC::SimulatedState m_sstate;
      //! Position update timer
      Time::Counter<double> m_pos_update;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Initialization flag
      bool m_init;
      //! Common position reference
      //! to use as origin in simulator
      struct pos
      {
        double lat;
        double lon;
        double height;
      } m_origin;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_init(false)
      {
        param("Local Port", m_args.local_port)
        .defaultValue("9200")
        .minimumValue("0")
        .maximumValue("65535")
        .description("Local TCP port.");

        param("Local Address", m_args.local_address)
        .defaultValue("172.0.0.1")
        .description("IP address of remote system.");

        param("Modem Address", m_args.modem_address)
        .defaultValue("0.0.0.0")
        .description("IP address of remote system.");

        param("Modem Port", m_args.modem_port)
        .defaultValue("9200")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP port of simulated modem.");

        param("Modem Settings Port", m_args.settings_port)
        .defaultValue("4242")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP port for simulated modem settings.");

        param("State Update Period", m_args.update_period)
        .defaultValue("3.0")
        .minimumValue("1.0")
        .description("Position update period.");

        param("Address Section", m_args.addr_section)
        .defaultValue("Evologics Addresses")
        .description("Name of the configuration section with modem addresses");

        param("Bit Error Rate", m_args.settings.ber)
        .defaultValue("0.001")
        .description("Maximum bit error rate."
                      " (Refer to manual).");

        param("Maximum radius", m_args.settings.rmax)
        .units(Units::Meter)
        .defaultValue("3000")
        .description("Distance when bit error rate is ber."
                      " (Refer to manual).");

        param("Shallow radius", m_args.settings.rshallow)
        .units(Units::Meter)
        .defaultValue("200")
        .description("Distance when shallow water bit error"
                      " rate is ber. (Refer to manual).");

        param("Exponential Stretching Factor", m_args.settings.betta)
        .defaultValue("0.4")
        .description("Exponential stretching factor." 
                      " (Refer to manual).");

        param("Reference Position", m_args.ref)
        .units(Units::Degree)
        .size(3)
        .defaultValue("41.1850, -8.7062, 0")
        .description("Reference position to use as origin "
                      "in the simulator coordinate system."
                      "Ensure it is the same reference on "
                      "all simulated devices.");

        bind<IMC::SimulatedState>(this);
        bind<IMC::GpsFix>(this);
        
        for (unsigned i = 0; i < NUM_SOCK; ++i)
          m_socket[i] = NULL;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_origin.lat = Math::Angles::radians(m_args.ref[0]);
        m_origin.lon = Math::Angles::radians(m_args.ref[1]);
        m_origin.height = Math::Angles::radians(m_args.ref[2]);

        if (isActive())
        {
          if (paramChanged(m_args.local_address))
            throw RestartNeeded(DTR("Restarting to change local address"), 1);

          if (paramChanged(m_args.local_port))
            throw RestartNeeded(DTR("Restarting to change local port"), 1);

          if (paramChanged(m_args.modem_address))
            throw RestartNeeded(DTR("Restarting to change modem address"), 1);

          if (paramChanged(m_args.modem_port))
            throw RestartNeeded(DTR("Restarting to change modem port"), 1);

          if (paramChanged(m_args.settings_port))
            throw RestartNeeded(DTR("Restarting to change modem settings port"), 1);
        }
      }

      //! Acquire resources by binding to the local TCP port.
      void
      onResourceAcquisition(void)
      {
        // Initial setup
        networkSetup();
        simulatorSetup();

        // Set state update period.
        m_pos_update.setTop(m_args.update_period);

        // Deactivate until valid simulated message
        requestDeactivation();
      }

      //! Release resources. Clears TCP sockets.
      void
      onResourceRelease(void)
      {
        for (unsigned i = 0; i < NUM_SOCK; ++i)
          Memory::clear(m_socket[i]);
      }

      void
      connect(unsigned sock_num, 
              Address add, 
              uint16_t port)
      {
        try
        {
          Memory::clear(m_socket[sock_num]);
          m_socket[sock_num] = new TCPSocket;
          m_socket[sock_num]->connect(add, port);

          debug(DTR("%s socket connected: %s:%d"),
                c_sock_name[sock_num].c_str(),
                add.c_str(),
                port);
        }
        catch (std::runtime_error& e)
        {
          std::string str = "Unable to start " + c_sock_name[sock_num] 
                            + " socket: " + std::string(e.what());
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Initial network setup
      void
      networkSetup(void)
      {
        // Bind listener socket, to expect connection from driver
        try
        {
          m_socket[LISTENER] = new TCPSocket;
          m_socket[LISTENER]->bind(m_args.local_port, Address(m_args.local_address), false);
          m_socket[LISTENER]->listen(15);
        }
        catch (std::runtime_error& e)
        {
          std::string str = "Unable to start listener socket: ";
          str += e.what();
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }

        // Get modem address and use this to choose modem IP.
        if (m_args.modem_address == Address("0.0.0.0"))
        {
          std::string system = getSystemName();
          unsigned addr = 0;

          m_ctx.config.get(m_args.addr_section, system, "0", addr);
          std::string ip("10.42.74." + std::to_string(addr));

          // Maximum number of nodes = 10; Add more
          if (addr != 0 || addr > 10)
          {
            m_args.modem_address = Address(ip.c_str());
          }
          else
          {
            std::string str = "System not suported: " + system;
            throw RestartNeeded(DTR(str.c_str()), 0);
          }
        }

        // Connect to modem.
        connectToModem();
      }
      
      void
      connectToModem(void)
      {
        connect(MODEM, m_args.modem_address, m_args.modem_port);
        connect(SETTINGS, m_args.modem_address, m_args.settings_port);
      }

      //! Consume vehicle position
      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        m_sstate = *msg;
      }

      //! Consume vehicle position and update modem position
      void
      consume(const IMC::GpsFix* msg)
      {
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        m_sstate.lat = msg->lat;
        m_sstate.lon = msg->lon;
        m_sstate.height = msg->height;

        m_sstate.x = 0;
        m_sstate.y = 0;
        m_sstate.z = 0;
      }

      void
      waitReply(std::string parameter)
      {
        while (!Poll::poll(*m_socket[SETTINGS], 1.0))

        m_bfr.clear();
        m_bfr.resize(c_bfr_size);
        size_t rv = m_socket[SETTINGS]->read(&m_bfr[0], m_bfr.size());
        if (rv)
        {
          std::string str(m_bfr.begin(), m_bfr.end());
          str = str.substr(0,rv);

          if (String::startsWith(str, parameter))
            return;
          else
            throw RestartNeeded(DTR("Wrong setting. Please restart modem."), 1);
        }
      }

      template<typename T>
      void
      sendSetting(std::string parameter, std::vector<T> values)
      {
        std::string str = parameter + " =";
        
        for (auto itr = values.begin(); itr != values.end(); ++itr)
          str += " " + std::to_string(*itr);
        
        str += "\n";
        m_socket[SETTINGS]->writeString(str.c_str());

        trace("Set: %s", sanitize(str).c_str());
        waitReply(parameter);
      }

      template<typename T>
      void
      sendSetting(std::string parameter, T value)
      {
        sendSetting(parameter, std::vector<T>(1, value));
      }

      void
      simulatorSetup()
      {
        sendSetting<double>("ber", m_args.settings.ber);
        sendSetting<double>("rmax", m_args.settings.rmax);
        sendSetting<double>("rshallow", m_args.settings.rshallow);
        sendSetting<double>("betta", m_args.settings.betta);
      }
      
      void
      updateState()
      {
        if (!m_pos_update.overflow())
          return;

        double lat = m_sstate.lat;
        double lon = m_sstate.lon;
        double height = m_sstate.height;
        double n = 0, e = 0, d = 0;

        WGS84::displace(m_sstate.x, m_sstate.y, m_sstate.z,
                        &lat, &lon, &height);

        WGS84::displacement(m_origin.lat, m_origin.lon, m_origin.height,
                            lat, lon, height,
                            &n, &e, &d);

        sendSetting<double>("position", {n, e, d});

        // sendSetting<fp64_t>("orientation", {Angles::degrees(m_sstate.theta),
        //                                     Angles::degrees(m_sstate.phi),
        //                                     Angles::degrees(m_sstate.psi)});

        m_pos_update.reset();
      }

      void
      checkSocket(void)
      {
        if (!Poll::poll(*m_socket[LISTENER], 1.0))
          return;

        Memory::clear(m_socket[DRIVER]);
        m_socket[DRIVER] = m_socket[LISTENER]->accept();

        debug(DTR("%s socket connected: %s:%d"),
              c_sock_name[DRIVER].c_str(),
              m_socket[DRIVER]->getBoundAddress().c_str(), 
              m_socket[DRIVER]->getBoundPort());
      }

      void
      checkReset(std::string str)
      {
        if (String::startsWith(str, "ATZ0") || 
            String::startsWith(str, "PHYOFF"))
        {
          debug(DTR("Reset command: %s -> Reconnecting to modem."), 
                sanitize(str.substr(0, str.find('\n'))).c_str());
          Delay::wait(5.0);
          connectToModem();
        }
      }

      //! Read incoming datagrams. If incoming data is a DUNE::IMC::AcousticMessage,
      //! and contains a DUNE::IMC::UamTxFrame (inline) it gets translated to a
      //! @publish DUNE::IMC::UamRxFrame and gets posted to the local bus.
      void
      transport(unsigned in, unsigned out)
      {
        if (!Poll::poll(*m_socket[in], 1.0))
          return;

        m_bfr.clear();
        m_bfr.resize(c_bfr_size);
        size_t rv = m_socket[in]->read(&m_bfr[0], m_bfr.size());
        if (rv)
        {
          // Forward message
          m_socket[out]->write(&m_bfr[0], rv);

          // Handle resets request
          std::string str(m_bfr.begin(), m_bfr.end());
          str = str.substr(0, rv);

          checkReset(str);
          
          // Debug
          if (!m_init && String::startsWith(str, "AT?CLOCK"))
          {
            m_init = true;
            inf(DTR("Modem simulator ready."));
          }
          spew(DTR("Message [%s -> %s]: %s"), c_sock_name[in].c_str(), 
                                              c_sock_name[out].c_str(), 
                                              sanitize(str).c_str());
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          if (!isActive())
            continue;
          
          checkSocket();
          updateState();
          
          if (m_socket[DRIVER] && m_socket[MODEM])
          {
            transport(DRIVER, MODEM);
            transport(MODEM, DRIVER);
          }
          else
          {
            war(DTR("Null socket."));
          }
        }
      }
    };
  }
}

DUNE_TASK
