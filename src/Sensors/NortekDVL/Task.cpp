
//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "Parser.hpp"

namespace Sensors
{
  //! Device driver for Nortek's DVL.
  namespace NortekDVL
  {
    using DUNE_NAMESPACES;

    //! Data input timeout.
    static const double c_data_timeout = 5.0;

    //! Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Sampling rate.
      float sampling_rate;
      //! Use at water surface.
      bool use_at_surface;
      //! True to enable automatic activation/deactivation based on medium.
      bool auto_activation;
      //! DVL position.
      std::vector<float> pos;
      //! DVL orientation.
      std::vector<float> ang;
      //! Enable input trigger.
      bool input_trigger;
      //! Name of sidescan's power channel.
      std::string power_channel;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! IO device handle.
      IO::Handle* m_handle;
      //! IO device Handle for TCP data socket.
      IO::Handle* m_data_h;
      //! Driver.
      Driver* m_driver;
      //! Parser.
      Parser* m_parser;
      //! Medium handler.
      Monitors::MediumHandler m_hand;
      //! Watchdog.
      Counter<double> m_wdog;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Filtered DVL entity.
      unsigned m_entity;
      //! True if pings are externally triggered.
      bool m_triggered;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_data_h(NULL),
        m_driver(NULL),
        m_parser(NULL),
        m_triggered(false)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        // Define configuration parameters.
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Sampling Rate", m_args.sampling_rate)
        .defaultValue("5.0")
        .minimumValue("1.0")
        .maximumValue("8.0")
        .units(Units::Hertz)
        .description("Device sampling rate");

        param(DTR_RT("Use Device at Surface"), m_args.use_at_surface)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Enable to activate device when at surface");

        param(DTR_RT("Automatic Activation"), m_args.auto_activation)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Operator is able to control device");

        param("Device Position", m_args.pos)
        .defaultValue("0.50, 0, 0.20")
        .size(3)
        .units(Units::Meter)
        .description("Device position relative to navigation estimation (relative to GPS sensor)");

        param("Device Orientation", m_args.ang)
        .defaultValue("0, -90, 45")
        .size(3)
        .units(Units::Degree)
        .description("Device orientation");

        param("Enable Input Trigger", m_args.input_trigger)
        .defaultValue("false")
        .description("Enable input trigger");

        param("Power Channel", m_args.power_channel)
        .defaultValue("Private (DVL)")
        .description("Name of device's power channel");

        setPostPowerOnDelay(5.0);
        setPowerOffDelay(1.0);

        bind<IMC::PulseDetectionControl>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.power_channel))
        {
          clearPowerChannelNames();
          addPowerChannelName(m_args.power_channel);
        }
      }

      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < c_beam_count; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_entity = reserveEntity("DVL Filtered");
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_parser);
        Memory::clear(m_driver);
        Memory::clear(m_handle);
        Memory::clear(m_data_h);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (!m_args.auto_activation)
          return;

        m_hand.update(msg);

        // Request activation.
        if ((m_hand.isWaterSurface() && m_args.use_at_surface) ||
            m_hand.isUnderwater())
        {
          if (canRequestActivation())
            requestActivation();
        }

        // Request deactivation.
        if (m_hand.outWater() || (m_hand.isWaterSurface() && !m_args.use_at_surface))
        {
          if (isActive())
            requestDeactivation();

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        // Medium is unknown.
        if (!m_hand.isKnown() && m_hand.changed())
        {
          if (isActive())
            setEntityState(getEntityState(), Status::CODE_NO_MEDIUM_ACTIVE);
          else
            setEntityState(getEntityState(), Status::CODE_NO_MEDIUM_IDLE);

          err("%s", DTR(Status::getString(Status::CODE_NO_MEDIUM)));
        }
      }

      void
      consume(const IMC::PulseDetectionControl* msg)
      {
        if (!m_args.input_trigger)
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->op == IMC::PulseDetectionControl::POP_ON)
          m_triggered = true;
        else if (msg->op == IMC::PulseDetectionControl::POP_OFF)
          m_triggered = false;

        if (isConnected())
          m_driver->setInputTrigger(m_triggered);
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (isConnected())
          m_driver->setSalinity(msg->value);
      }

      //! Check if our IO device is a TCP socket.
      //! @return true if IO device is a TCP socket, false otherwise.
      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.io_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        // Create two TCP sockets, the first for command link,
        // the second to parse the data coming from the device.
        TCPSocket* sock = new TCPSocket;
        sock->setNoDelay(true);
        sock->setSendTimeout(1.0);
        sock->setReceiveTimeout(1.0);
        sock->connect(addr, port);
        m_handle = sock;

        TCPSocket* data_sock = new TCPSocket;
        data_sock->setNoDelay(true);
        data_sock->setSendTimeout(1.0);
        data_sock->setReceiveTimeout(1.0);
        data_sock->connect(addr, port + 2);
        m_data_h = data_sock;

        // generate driver and parser.
        m_driver = new Driver(this, m_handle, m_args.sampling_rate, m_triggered);
        m_parser = new Parser(this, m_data_h, m_args.pos, m_args.ang, m_entities, m_entity);

        if (!m_driver->login())
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);

        return true;
      }

      //! Test if the task can request activation.
      //! @return true if we can request activation, false otherwise.
      bool
      canRequestActivation(void)
      {
        return !(isActive() || isActivating());
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void)
      {
        consumeMessages();

        try
        {
          if (!openSocket())
          {
            // The serial port is used as command link and data.
            m_handle = new SerialPort(m_args.io_dev, m_args.uart_baud);
            m_driver = new Driver(this, m_handle, m_args.sampling_rate, m_triggered);
            m_parser = new Parser(this, m_handle, m_args.pos, m_args.ang, m_entities, m_entity);
          }
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }

      //! Test if connection exists with device.
      //! @return true if a connection exists, false otherwise.
      bool
      isConnected(void)
      {
        return m_driver != NULL;
      }

      //! Test if we have an active parser.
      //! @return true if we have a parser, false otherwise.
      bool
      isParserOn(void)
      {
        return m_parser != NULL;
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData(void)
      {
        if (!isParserOn())
          return false;

        if (m_parser->readData())
        {
          m_wdog.reset();
          return true;
        }
        else if (m_wdog.overflow())
        {
          requestDeactivation();
          requestActivation();
        }

        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect(void)
      {
        Memory::clear(m_parser);
        Memory::clear(m_driver);
        Memory::clear(m_handle);
        Memory::clear(m_data_h);
      }

      void
      onInitializeDevice(void)
      {
        if (isConnected())
        {
          if (m_driver->setup())
          {
            m_wdog.setTop(c_data_timeout);
            return;
          }

          requestDeactivation();
          requestActivation();
        }
      }

      void
      onSoundSpeed(const IMC::SoundSpeed* msg)
      {
        // @todo setup external speed or is internal reliable ?
        (void)msg;
      }
    };
  }
}

DUNE_TASK
