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

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  //! Device driver for DeepVision's OEM Sonar Module OSM2.
  namespace DeepVisionOSM2
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      //! Number of samples.
      unsigned samples;
      //! Number of periods.
      unsigned periods;
      //! Default frequency.
      std::string frequency;
      //! Default range.
      unsigned range;
      //! Name of sidescan's power channel.
      std::string power_channel;
      //! Output Data Format.
      std::string output_format;
      //! Default speed.
      float speed;
      //! Trigger slaves.
      std::vector<std::string> trigger_slaves;
      //! Trigger delay.
      uint8_t trigger_delay;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Driver.
      Driver* m_driver;
      //! Watchdog.
      Counter<double> m_iwdog;
      //! Configuration parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_driver(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("2.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Number of Samples", m_args.samples)
        .defaultValue("1000")
        .minimumValue("1")
        .maximumValue("1000")
        .description("Number of samples return in the Ping Return Packet");

        param("Number of Periods", m_args.periods)
        .defaultValue("64")
        .minimumValue("4")
        .maximumValue("128")
        .description("The number of periods depends on resolution and range. For"
                     " high resolution and short range then 8 might be the best "
                     "option. However 64 typically gives a good result. A longer"
                     " pulse returns a more \"blurry\" image with higher signal "
                     "to noise ratio (SNR). A shorter pulse gives a \"crispier\""
                     " image but with a lower SNR");

        param(DTR_RT("Frequency"), m_args.frequency)
        .values(DTR_RT("Low, High"))
        .defaultValue("High")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description(DTR("Operating frequency"));

        param(DTR_RT("Range"), m_args.range)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("30")
        .units(Units::Meter)
        .description(DTR("Operating range"));

        param(DTR_RT("Optimize for this Speed"), m_args.speed)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("1.0")
        .minimumValue("0.8")
        .maximumValue("2.6")
        .units(Units::MeterPerSecond)
        .description(DTR("Average system speed to compute longitudinal resolution"));

        param("Output Data Format", m_args.output_format)
        .values("IMC, DVS")
        .defaultValue("IMC")
        .description("Sidescan output data format");

        param("Power Channel", m_args.power_channel)
        .defaultValue("")
        .description("Name of sidescan's power channel");

        param("Output Trigger - Slave Entity Labels", m_args.trigger_slaves)
        .defaultValue("")
        .description("Output trigger slaves");

        param(DTR_RT("Trigger Delay"), m_args.trigger_delay)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .defaultValue("80")
        .units(Units::Millisecond)
        .description("After output trigger is set, device waits this delay time"
                     " before pinging again to allow other systems to transmit");

        setPostPowerOnDelay(2.0);
        setPowerOffDelay(1.0);

        bind<IMC::EstimatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.power_channel))
        {
          clearPowerChannelNames();
          addPowerChannelName(m_args.power_channel);
        }

        if (paramChanged(m_args.input_timeout))
          m_iwdog.setTop(m_args.input_timeout);

        if (!isActive())
          return;

        if (paramChanged(m_args.frequency) || paramChanged(m_args.range) ||
            paramChanged(m_args.samples) || paramChanged(m_args.periods) ||
            paramChanged(m_args.speed) || paramChanged(m_args.output_format) ||
            paramChanged(m_args.trigger_delay))
        {
          Memory::clear(m_driver);
          onConnect();
          setup();
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (isConnected())
          m_driver->onState(msg);
      }

      //! Send pulse detection control mode.
      //! @param[in] op pulse detection control operation.
      void
      controlPulseDetection(IMC::PulseDetectionControl::OperationEnum op)
      {
        for (size_t i = 0; i < m_args.trigger_slaves.size(); ++i)
        {
          try
          {
            unsigned eid = resolveEntity(m_args.trigger_slaves[i]);
            IMC::PulseDetectionControl pdc;
            pdc.setDestinationEntity(eid);
            pdc.op = op;
            dispatch(pdc);
          }
          catch (...)
          { }
        }
      }

      //! This derived task has direct log control.
      //! @return true if it has log control, false otherwise.
      bool
      enableLogControl(void)
      {
        return m_args.output_format != "IMC";
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void)
      {
        m_driver = new Driver(this, m_args.uart_dev, m_args.uart_baud);
        debug("connected to device");
        return true;
      }

      //! Test if connection exists with device.
      //! @return true if a connection exists, false otherwise.
      bool
      isConnected(void)
      {
        return m_driver != NULL;
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData(void)
      {
        if (!isConnected())
          return false;

        // Check if we have data to receive.
        if (m_driver->read())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_iwdog.reset();
          return true;
        }

        // Watchdog overflow.
        if (m_iwdog.overflow())
        {
          m_iwdog.reset();
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }

        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect(void)
      {
        controlPulseDetection(IMC::PulseDetectionControl::POP_OFF);
        Memory::clear(m_driver);
      }

      //! Device may be initialized.
      void
      onInitializeDevice(void)
      {
        if (isConnected())
        {
          controlPulseDetection(IMC::PulseDetectionControl::POP_ON);
          setup();
        }
      }

      //! Setup device.
      void
      setup(void)
      {
        if (isConnected())
        {
          bool high_freq = m_args.frequency == "High";
          bool imc = m_args.output_format == "IMC";

          m_driver->setup(high_freq, m_args.periods, m_args.samples,
                          m_args.range, m_args.speed, imc, m_args.trigger_delay);

          m_iwdog.reset();
        }
      }

      //! Open log file.
      //! @param[in] path path to log file.
      void
      onOpenLog(const DUNE::FileSystem::Path& path)
      {
        if (isConnected())
          m_driver->onOpenLog(path);
      }

      //! Close log file.
      void
      onCloseLog(void)
      {
        if (isConnected())
          m_driver->onCloseLog();
      }
    };
  }
}

DUNE_TASK
