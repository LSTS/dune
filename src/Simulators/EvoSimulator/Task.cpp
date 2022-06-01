//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
  //! Interface between DUNE Evologics driver and Evologics simulator.
  //!
  //! To use this simulator first connect to Evologics' VPN by following the
  //! instructions found in "dmace-74-FEUP-1-user-guide.pdf", at:
  //! https://drive.google.com/file/d/1ya361hHqA2l3uRWixb0BMUCODfzFMgxm/view?usp=sharing
  //!
  //! You must also enable a driver task that connects to this interface.
  //! Try enabling "Transports.Evologics/Simulator".
  //!
  //! You must now be able to simulate all vehicles in the address section (up to 10).
  //!
  //! @author Luís Venâncio
  namespace EvoSimulator
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
      //! Modem status socket
      STATE = 3,
      //! Modem settings socket
      SETTINGS = 4,
      //! Number of sockets
      NUM_SOCK
    };

    //! TCPSocket wraper for the specific usecase
    struct SafeTCPSocket
    {
      //! Handle to task using the wraper
      Tasks::Task* task;
      //! TCP socket
      TCPSocket* sock;
      //! Name of socket
      std::string name;

      //! Port used in case of connection
      uint16_t port;
      //! Address used in case of connection
      Address address;

      //! Constructor for new socket
      SafeTCPSocket(Tasks::Task* a_task, std::string a_name):
      task(a_task),
      sock(new TCPSocket),
      name(a_name),
      port(0),
      address("0.0.0.0")
      {}

      //! Constructor for existing socket
      SafeTCPSocket(Tasks::Task* a_task, std::string a_name, TCPSocket* a_sock):
      task(a_task),
      sock(a_sock),
      name(a_name),
      port(0),
      address("0.0.0.0")
      {}

      //! Destructor
      ~SafeTCPSocket()
      {
        delete sock;
      }

      //! Socket starts listening for connection requests
      //! @param[in] a_port port to bind socket
      //! @param[in] a_address address to bind socket
      //! @param[in] reuse flag to allow reuse of address
      //! @param[in] backlog number of connections allowed
      void
      startListen(uint16_t a_port, Address a_address, bool reuse, int backlog)
      {
        try
        {
          sock->bind(a_port, a_address, reuse);
          sock->listen(backlog);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start listener socket: ";
          str += e.what();
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Connect socket to remote port
      //! @param[in] a_address address of remote socket
      //! @param[in] a_port port of remote socket
      void
      connect(Address a_address, uint16_t a_port)
      {
        if (port == 0 && address.str() == "0.0.0.0")
        {
          port = a_port;
          address = a_address;
        }

        try
        {
          Memory::clear(sock);
          sock = new TCPSocket;
          sock->connect(a_address, a_port);

          task->debug(DTR("%s socket connected: %s:%d"),
                      name.c_str(),
                      address.c_str(),
                      port);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start " + name
                            + " socket: " + std::string(e.what());
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Attempt reconnection to saved socket address
      void
      reconnect()
      {
        if (port == 0 && address.str() == "0.0.0.0")
          return;

        connect(address, port);
      }

      //! Accept connection from outside socket
      //! @param[in] a_name name of new SafeTCPSocket
      //! @returns Safe
      SafeTCPSocket*
      accept(std::string a_name)
      {
        return new SafeTCPSocket(task, a_name, sock->accept());
      }

      //! Poll socket for reading
      //! @param[in] timeout time it waits for socket in seconds
      //! @return true if there is something to read, false otherwise
      bool
      poll(double timeout)
      {
        try
        {
          return Poll::poll(*sock, timeout);
        }
        catch(const std::exception& e)
        {
          task->err("error polling %s socket: %s", name.c_str(), e.what());
          return false;
        }
      }

      //! Read from socket to buffer
      //! @param[in] data buffer
      //! @param[in] length number of bytes to read
      //! @return number of bytes read
      size_t
      read(uint8_t *data, size_t length)
      {
        try
        {
          return sock->read(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->err("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write to socket
      //! @param[in] data data buffer
      //! @param[in] lenght number of bytes to write
      //! @return number of bytes written
      size_t
      write(const char *data, size_t length)
      {
        try
        {
          return sock->write(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->err("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write to socket
      //! @param[in] data data buffer
      //! @param[in] lenght number of bytes to write
      //! @return number of bytes written
      size_t
      write(const uint8_t *data, size_t length)
      {
        try
        {
          return sock->write(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->err("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write string to socket
      //! @param[in] str string to write
      //! @return number of bytes written
      size_t
      writeString(const std::string str)
      {
        try
        {
          return sock->writeString(str.c_str());
        }
        catch(const ConnectionClosed& e)
        {
          task->err("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string msg = name + "socket network error: " + std::string(e.what());
          msg += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }
    };

    //! Buffer capacity.
    static const unsigned c_bfr_size = 255;
    //! Timeout for settings reply
    double c_reply_timeout = 5.0;

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
      //! Port for settings of simulated modem
      uint16_t settings_port;
      //! Port for state of simulated modem (position and orientation)
      uint16_t state_port;
      //! Flag for auto assign local port and simulator IP
      bool auto_assign;
      //! Name of the section with modem addresses.
      std::string addr_section;
      //! Position update period
      double update_period;
      //! Common position reference
      //! to use as origin
      std::vector<double> ref;
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
      // Task arguments.
      Arguments m_args;
      //! TCP sockets
      SafeTCPSocket* m_socket[NUM_SOCK];
      //! Last received SimulatedState
      IMC::SimulatedState m_sstate;
      //! Position update timer
      Time::Counter<double> m_pos_update;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Rotation matrix
      Matrix m_rotation;
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
        DUNE::Tasks::Task(name, ctx)
      {
        param("Local Address", m_args.local_address)
        .defaultValue("172.0.0.1")
        .description("IP address of remote system.");

        param("Local Port", m_args.local_port)
        .defaultValue("9200")
        .minimumValue("0")
        .maximumValue("65535")
        .description("Local TCP port.");

        param("Modem Address", m_args.modem_address)
        .defaultValue("10.42.74.1")
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

        param("Modem State Port", m_args.state_port)
        .defaultValue("11000")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP port for simulated modem state (position and orientation).");

        param("Auto Assign", m_args.auto_assign)
        .defaultValue("true")
        .description("Flag for auto assign local port and simulator IP");

        param("Address Section", m_args.addr_section)
        .defaultValue("Evologics Addresses")
        .description("Name of the configuration section with modem addresses");

        param("State Update Period", m_args.update_period)
        .defaultValue("1.0")
        .minimumValue("1.0")
        .description("Position update period.");

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
          if (paramChanged(m_args.settings.ber) ||
            paramChanged(m_args.settings.rmax) ||
            paramChanged(m_args.settings.rshallow) ||
            paramChanged(m_args.settings.betta))
          simulatorSetup();

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
        // Buffer sizing
        m_bfr.clear();
        m_bfr.resize(c_bfr_size);

        // Rotation matrix
        // To convert from vehicle frame to modem frame
        double angles[3] = {0, Angles::radians(180), Angles::radians(-90)};
        m_rotation = Matrix(angles, 3, 1).toDCM();

        // Auto assign local port and simulator IP
        // based on evologics address
        if (m_args.auto_assign)
          autoAssign();

        // Socket array initialization
        m_socket[LISTENER]  = new SafeTCPSocket(this, "listener");
        m_socket[MODEM]     = new SafeTCPSocket(this, "modem");
        m_socket[STATE]     = new SafeTCPSocket(this, "state");
        m_socket[SETTINGS]  = new SafeTCPSocket(this, "settings");

        m_socket[LISTENER]  ->startListen(m_args.local_port,
                                          Address(m_args.local_address),
                                          false,
                                          15);
        m_socket[MODEM]     ->connect(m_args.modem_address, m_args.modem_port);
        m_socket[STATE]     ->connect(m_args.modem_address, m_args.state_port);
        m_socket[SETTINGS]  ->connect(m_args.modem_address, m_args.settings_port);

        // Acoustic model settings
        simulatorSetup();

        // Set state update period
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

      //! Auto assign simualtor IP (node) and local port
      //! based on local evologics address.
      void
      autoAssign(void)
      {
        // Get evologics address
        std::string system = getSystemName();
        unsigned address = 0;
        m_ctx.config.get(m_args.addr_section, system, "0", address);

        // Maximum number of nodes = 10; Add more
        if (address > 0 && address <= 10)
        {
          std::string simulator_address = "10.42.74." + std::to_string(address);
          m_args.modem_address = Address(simulator_address.c_str());

          m_args.local_port = 9200 + address;
        }
        else
        {
          std::string str = "System not suported: " + system;
          throw RestartNeeded(DTR(str.c_str()), 0);
        }
      }

      //! Send initial settings to modem (acoustic model parameters)
      void
      simulatorSetup()
      {
        sendSetting<double>("ber", m_args.settings.ber);
        sendSetting<double>("rmax", m_args.settings.rmax);
        sendSetting<double>("rshallow", m_args.settings.rshallow);
        sendSetting<double>("betta", m_args.settings.betta);
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

      //! Consume vehicle position
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

      //! Wait for simulator reply after sending setting
      //! @param[in] parameter name of setting to wait for
      void
      waitReply(std::string parameter)
      {
        // Wait reply (timeout after c_reply_timeout)
        double now = Clock::get();
        while (!m_socket[SETTINGS]->poll(1.0))
          if (Clock::get() - now > c_reply_timeout)
            war("%s setting reply timedout", parameter.c_str());

        // Read reply
        size_t rv = m_socket[SETTINGS]->read(&m_bfr[0], m_bfr.size());
        if (rv)
        {
          std::string str(m_bfr.begin(), m_bfr.begin()+rv);
          if (!String::startsWith(str, parameter))
            war("expected reply to %s, got: %s", parameter.c_str(), str.c_str());
        }
      }

      //! Send setting to modem
      //! @param[in] parameter name of setting to send
      //! @param[in] values setting values
      template<typename T>
      void
      sendSetting(std::string parameter, std::vector<T> values)
      {
        if (!m_socket[SETTINGS])
          throw RestartNeeded(DTR("error in settings socket, restarting"), 1);

        // Command format:
        // parameter = val1 val2 val3 ... valn\n
        std::string str = parameter + " =";
        for (auto itr = values.begin(); itr != values.end(); ++itr)
          str += " " + std::to_string(*itr);
        str += "\n";

        m_socket[SETTINGS]->writeString(str.c_str());

        waitReply(parameter);
        trace("Set: %s", sanitize(str).c_str());
      }

      //! Send setting to modem
      //! @param[in] parameter name of setting to send
      //! @param[in] value setting value
      template<typename T>
      void
      sendSetting(std::string parameter, T value)
      {
        sendSetting(parameter, std::vector<T>(1, value));
      }

      //! Check listener socket for connection requests
      void
      checkSocket()
      {
        if (!m_socket[LISTENER]->poll(1.0))
          return;

        Memory::clear(m_socket[DRIVER]);
        m_socket[DRIVER] = m_socket[LISTENER]->accept("driver");

        debug(DTR("%s socket connected: %s:%d"),
              m_socket[DRIVER]->name.c_str(),
              m_socket[DRIVER]->sock->getBoundAddress().c_str(),
              m_socket[DRIVER]->sock->getBoundPort());
      }

      //! Update modem position and attitude based on vehicle position and attitude
      void
      updateState()
      {
        if (!m_socket[STATE])
          throw RestartNeeded(DTR("error in state socket, restarting"), 1);

        if (!m_pos_update.overflow())
          return;

        double ll[2] = {m_sstate.lat,
                         m_sstate.lon};
        float height = m_sstate.height;

        double ned[3] = {0.0};
        double att[3] = {m_sstate.phi,
                         m_sstate.theta,
                         m_sstate.psi};

        Coordinates::toWGS84(m_sstate, ll[0], ll[1], height);
        WGS84::displacement(m_origin.lat, m_origin.lon, m_origin.height,
                            ll[0], ll[1], height,
                            &ned[0], &ned[1], &ned[2]);

        // Rotate to be compatible with modem reference frame
        // Refer to evologics modem manual
        // x = east
        // y = north
        // z = up
        Matrix state;
        state.vertCat(m_rotation * Matrix(ned, 3, 1));
        state.vertCat(m_rotation * Matrix(att, 3, 1));

        std::string state_str = std::to_string(state(0));
        for (int i = 1; i < state.size(); ++i)
          state_str += " " + std::to_string(state(i));
        state_str += "\n";

        m_socket[STATE]->writeString(state_str.c_str());
        spew("State: %s", sanitize(state_str).c_str());

        m_pos_update.reset();
      }

      //! Check string for a reset command
      //! @param[in] str string to check
      void
      checkReset(std::string str)
      {
        if (!(String::startsWith(str, "ATZ0") ||
            String::startsWith(str, "PHYOFF")))
          return;

        debug(DTR("Reset command: %s -> Reconnecting to modem"),
              sanitize(str.substr(0, str.find('\n'))).c_str());
        Delay::wait(5.0);
        m_socket[MODEM]->connect(m_args.modem_address, m_args.modem_port);
      }

      //! Relay incomming messages (modem to driver or driver to modem)
      //! @param[in] in identifier of incomming message socket
      //! @param[in] out identifier of outgoing message socket
      void
      transport(unsigned in, unsigned out)
      {
        if (!m_socket[MODEM] || !m_socket[DRIVER])
          throw RestartNeeded(DTR("error in modem or driver socket, restarting"), 1);

        if (!m_socket[in]->poll(1.0))
          return;

        size_t rv = m_socket[in]->read(&m_bfr[0], m_bfr.size());
        if (rv)
        {
          // Forward message
          m_socket[out]->write(&m_bfr[0], rv);

          // Check for reset command and reconnect
          std::string str(m_bfr.begin(), m_bfr.begin()+rv);
          checkReset(str);

          // Debug
          spew(DTR("Message [%s -> %s]: %s"), m_socket[in]->name.c_str(),
                                              m_socket[out]->name.c_str(),
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
          transport(DRIVER, MODEM);
          transport(MODEM, DRIVER);
        }
      }
    };
  }
}

DUNE_TASK
