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

// Local headers.
#include "Interface.hpp"

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

    enum InterfaceCode
    {
      //! Listener socket
      IC_LISTENER = 0,
      //! Driver socket
      IC_DRIVER = 1,
      //! Modem socket
      IC_MODEM = 2,
      //! Modem status socket
      IC_STATE = 3,
      //! Modem settings socket
      IC_SETTINGS = 4,
      //! Number of sockets
      NUM_IC
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
      std::string local_address;
      //! IPv4 Address of modem
      std::string modem_address;
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
      Interface* m_interface[NUM_IC];
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
        m_interface[IC_LISTENER]  = new Interface(this, "LISTENER",
                                                  m_args.local_address,
                                                  m_args.local_port);
        m_interface[IC_MODEM]     = new Interface(this, "MODEM",
                                                  m_args.modem_address,
                                                  m_args.modem_port);
        m_interface[IC_STATE]     = new Interface(this, "STATE",
                                                  m_args.modem_address,
                                                  m_args.state_port);
        m_interface[IC_SETTINGS]  = new Interface(this, "SETTINGS",
                                                  m_args.modem_address,
                                                  m_args.settings_port);

        m_interface[IC_LISTENER]  ->startListen(false, 15);
        m_interface[IC_MODEM]     ->connect();
        m_interface[IC_STATE]     ->connect();
        m_interface[IC_SETTINGS]  ->connect();

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
        for (unsigned i = 0; i < NUM_IC; ++i)
          Memory::clear(m_interface[i]);
      }

      //! Auto assign simualtor IP (node) and local port
      //! based on local evologics address.
      void
      autoAssign(void)
      {
        // Get evologics address
        std::string system = getSystemName();
        unsigned evo_address = 0;
        m_ctx.config.get(m_args.addr_section, system, "0", evo_address);

        // Maximum number of nodes = 10; Add more
        if (evo_address > 0 && evo_address <= 10)
        {
          m_args.modem_address = "10.42.74." + std::to_string(evo_address);
          m_args.local_port = 9200 + evo_address;
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

      //! Send setting to modem
      //! @param[in] parameter name of setting to send
      //! @param[in] values setting values
      template<typename T>
      void
      sendSetting(std::string parameter, std::vector<T> values)
      {
        // Command format:
        // parameter = val1 val2 val3 ... valn\n
        std::vector<std::string> params;
        params.push_back(parameter + " =");
        for (auto itr = values.begin(); itr != values.end(); ++itr)
          params.push_back(std::to_string(*itr));

        m_interface[IC_SETTINGS]->sendMultiple(params);
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
      checkForDriver()
      {
        if (!m_interface[IC_LISTENER]->poll(1.0))
          return;

        Memory::clear(m_interface[IC_DRIVER]);
        m_interface[IC_DRIVER] = m_interface[IC_LISTENER]->accept("DRIVER");

        debug(DTR("%s socket connected: %s:%d"),
              m_interface[IC_DRIVER]->m_name.c_str(),
              m_interface[IC_DRIVER]->m_sock->getBoundAddress().c_str(),
              m_interface[IC_DRIVER]->m_sock->getBoundPort());
      }

      //! Update modem position and attitude based on vehicle position and attitude
      void
      updateState()
      {
        if (!m_pos_update.overflow())
          return;

        double lat, lon;
        float height;
        double ned[3] = {0.0};
        double att[3] = {m_sstate.phi,
                         m_sstate.theta,
                         m_sstate.psi};

        Coordinates::toWGS84(m_sstate, lat, lon, height);
        WGS84::displacement(m_origin.lat, m_origin.lon, m_origin.height,
                            lat, lon, height,
                            &ned[0], &ned[1], &ned[2]);

        // Rotate to be compatible with modem reference frame
        // Refer to evologics modem manual
        // x = east
        // y = north
        // z = up
        Matrix state;
        state.vertCat(m_rotation * Matrix(ned, 3, 1));
        state.vertCat(m_rotation * Matrix(att, 3, 1));

        std::vector<double> bfr(state.begin(), state.end());
        m_interface[IC_STATE]->sendMultiple(bfr);

        m_pos_update.reset();
      }

      //! Relay incomming messages (modem to driver or driver to modem)
      //! @param[in] in identifier of incomming message socket
      //! @param[in] out identifier of outgoing message socket
      void
      bridge(InterfaceCode from)
      {
        InterfaceCode to;
        if (from == IC_DRIVER)
          to = IC_MODEM;
        else if (from == IC_MODEM)
          to = IC_DRIVER;
        else
          return;
        
        size_t rv = m_interface[from]->read(&m_bfr);
        if (rv)
        {
          // Forward message
          m_interface[to]->send(&m_bfr, rv);

          // Debug
          std::string str(m_bfr.begin(), m_bfr.begin()+rv);
          trace(DTR("Message [%s -> %s]: %s"), m_interface[from]->m_name.c_str(),
                                               m_interface[to]->m_name.c_str(),
                                               sanitize(str).c_str());

          // Check for reset command and reconnect
          if (String::startsWith(str, "ATZ0") ||
              String::startsWith(str, "PHYOFF"))
          {
            debug(DTR("Reset command: %s -> Reconnecting to modem in 3.0s"),
                  sanitize(str).c_str());
            Delay::wait(3.0);
            m_interface[IC_MODEM]->reconnect();
          }
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

          checkForDriver();
          updateState();

          if (!m_interface[IC_DRIVER])
          {
            debug("DRIVER interface not ready");
            continue;
          }
          
          bridge(IC_DRIVER);
          bridge(IC_MODEM);
        }
      }
    };
  }
}

DUNE_TASK
