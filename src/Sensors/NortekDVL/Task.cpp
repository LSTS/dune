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
      //! IPv4 address.
      Address addr;
      //! TCP command port.
      unsigned port;
      //! Sampling rate.
      float sampling_rate;
      //! Use at water surface.
      bool use_at_surface;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Driver.
      Driver* m_driver;
      //! Parser.
      Parser* m_parser;
      //! Medium handler.
      Monitors::MediumHandler m_hand;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_driver(NULL),
        m_parser(NULL)
      {
        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.61.187")
        .description("IP address of the sonar");

        param("TCP Port", m_args.port)
        .defaultValue("9000")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP command port");

        param("Sampling Rate", m_args.sampling_rate)
        .defaultValue("5.0")
        .minimumValue("1.0")
        .maximumValue("8.0")
        .description("Device sampling rate");

        param(DTR_RT("Use Device at Surface"), m_args.use_at_surface)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Enable to activate device when at surface");

        bind<IMC::PulseDetectionControl>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (isActive())
        {
          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port))
            throw RestartNeeded(DTR("restarting to change TCP command port"), 1);
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);
        Memory::clear(m_parser);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
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
        // @todo trigger/pulse ?
        (void)msg;
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (isConnected())
          m_driver->setSalinity(msg->value);
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
        m_driver = new Driver(this, m_args.addr, m_args.port,
                              m_args.sampling_rate);

        m_parser = new Parser(this, m_args.addr, m_args.port + 2);
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
        Memory::clear(m_driver);
        Memory::clear(m_parser);
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
