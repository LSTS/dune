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
// Author: PGonçalves                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Driver.hpp"

namespace Sensors
{
  namespace OEMX
  {
    using DUNE_NAMESPACES;

    static const float c_delay_startup = 10.0f;
    static const float c_timeout_uart = 1.0f;
    static const float c_mS_per_cm_to_S_per_m = 0.1f;
    static const float c_bar_to_Pa = 100000.0f;
    static const float c_dbar_to_bar = 0.1f;
    //! Sensor options.
    static const std::string c_s_options[] = { "Conductivity", "SoundSpeed",
                                               "Temperature", "Pressure",
                                               "Turbidity" };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      //! Input number samples/s
      unsigned int input_samples_number;
      //! List of sensors in primary mount.
      std::vector<std::string> primary_mount;
      //! List of sensors in secondary mount.
      std::vector<std::string> secondary_mount;
    };

    struct SensorStateData
    {
      //! Conductivity
      bool haveConductivity;
      //! SoundSpeed
      bool haveSoundSpeed;
      //! Temperature
      bool haveTemperature;
      //! Pressure
      bool havePressure;
      //! Turbidity
      bool haveTurbidity;
      //! Salinity
      bool haveSalinity;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Task arguments
      Arguments m_args;
      //! Sensor data state
      SensorStateData m_sdstate;
      //! Driver of CTD
      DriverOEMX *m_driver;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Conductivity.
      IMC::Conductivity m_cond;
      //! Salinity.
      IMC::Salinity m_sali;
      //! Sound speed.
      IMC::SoundSpeed m_sspe;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Pressure.
      IMC::Pressure m_pres;
      //! Turbidity
      IMC::Turbidity m_turb;
      //! Depth
      IMC::Depth m_depth;
      //! Temperature
      float m_temperature;
      //! Salinity
      float m_salinity;
      //! Pressure
      float m_pressure;
      //! Conductivity
      float m_conductivity;
      //! SoundSpeed
      float m_soundSpeed;
      //! Turbidity
      float m_turbidity;
      //! Number of sensors plug in CTD
      std::size_t m_numberSensors;
      //! Timestamp.
      double m_tstamp;
      //! Flag to control calibration of CTD
      bool m_first_value;
      //! Offset of pressure from CTD
      float m_offset_pressure;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(0),
        m_temperature(0),
        m_salinity(0),
        m_pressure(0),
        m_conductivity(0),
        m_soundSpeed(0),
        m_turbidity(0),
        m_numberSensors(0),
        m_tstamp(0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Number of Samples/s", m_args.input_samples_number)
        .defaultValue("1")
        .minimumValue("1")
        .maximumValue("5")
        .description("Amount of samples/s.");

        param("Primary Mount", m_args.primary_mount)
        .defaultValue("")
        .description("List of sensors in primary mount");

        param("Secondary Mount", m_args.secondary_mount)
        .defaultValue("")
        .description("List of sensors in secondary mount");
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        resetStateDataSensor();

        for (unsigned i = 0; i < m_args.primary_mount.size(); i++)
        {
          if (m_args.primary_mount[i].compare(c_s_options[0]) == 0)
            m_sdstate.haveConductivity = true;
          else if (m_args.primary_mount[i].compare(c_s_options[1]) == 0)
            m_sdstate.haveSoundSpeed = true;
          else if (m_args.primary_mount[i].compare(c_s_options[2]) == 0)
            m_sdstate.haveTemperature = true;
        }

        for (unsigned i = 0; i < m_args.secondary_mount.size(); i++)
        {
          if (m_args.secondary_mount[i].compare(c_s_options[3]) == 0)
            m_sdstate.havePressure = true;
          else if (m_args.secondary_mount[i].compare(c_s_options[4]) == 0)
            m_sdstate.haveTurbidity = true;
          else if (m_args.secondary_mount[i].compare(c_s_options[2]) == 0)
            m_sdstate.haveTemperature = true;
        }

        if (m_sdstate.haveConductivity && m_sdstate.havePressure
            && m_sdstate.haveTemperature)
          m_sdstate.haveSalinity = true;

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
          m_poll.add(*m_uart);
          m_driver = new DriverOEMX(this, m_uart, m_poll);
          m_numberSensors = m_args.primary_mount.size() + m_args.secondary_mount.size();
          m_first_value = true;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        resetStateDataSensor();
        Delay::wait(c_delay_startup);
        getInfoOfCTD();

        if(!m_driver->initCTD(m_args.input_samples_number))
          throw RestartNeeded(DTR("failed to init CTD"), 10, true);

        m_wdog.setTop(m_args.input_timeout);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_driver);
          Memory::clear(m_uart);
        }
      }

      void
      resetStateDataSensor(void)
      {
        m_sdstate.haveConductivity = false;
        m_sdstate.havePressure = false;
        m_sdstate.haveSalinity = false;
        m_sdstate.haveSoundSpeed = false;
        m_sdstate.haveTemperature = false;
        m_sdstate.haveTurbidity = false;
      }

      void
      getInfoOfCTD()
      {
        if(m_driver->getInfoOfCTD())
        {
          inf("CTD Info: %s", m_driver->m_ctdData.ctdInfo.c_str());
          inf("Primary Mount Info: %s", m_driver->m_ctdData.primaryInfo.c_str());
          inf("Secondary Mount Info: %s", m_driver->m_ctdData.secondaryInfo.c_str());
        }
        else
        {
          throw RestartNeeded(DTR("com error - get info"), 10, true);
        }
      }

      void
      formateDataCTD(void)
      {
        std::size_t cntIndex = 0;
        for (std::size_t i = 0; i < m_args.primary_mount.size(); i++)
        {
          if (m_args.primary_mount[i].compare(c_s_options[0]) == 0)
          {
            m_conductivity = m_driver->m_ctdData.dataReceived[i] * c_mS_per_cm_to_S_per_m;
            m_sdstate.haveConductivity = true;
            cntIndex++;
          }
          else if (m_args.primary_mount[i].compare(c_s_options[1]) == 0)
          {
            m_soundSpeed = m_driver->m_ctdData.dataReceived[i];
            m_sdstate.haveSoundSpeed = true;
            cntIndex++;
          }
          else if (m_args.primary_mount[i].compare(c_s_options[2]) == 0)
          {
            m_temperature = m_driver->m_ctdData.dataReceived[i];
            m_sdstate.haveTemperature = true;
            cntIndex++;
          }
        }

        for (std::size_t i = 0; i < m_args.secondary_mount.size(); i++)
        {
          if (m_args.secondary_mount[i].compare(c_s_options[3]) == 0)
          {
            m_pressure = m_driver->m_ctdData.dataReceived[cntIndex + i] * c_dbar_to_bar;
            m_sdstate.havePressure = true;
          }
          else if (m_args.secondary_mount[i].compare(c_s_options[4]) == 0)
          {
            m_turbidity = m_driver->m_ctdData.dataReceived[cntIndex + i];
            m_sdstate.haveTurbidity = true;
          }
          else if (m_args.secondary_mount[i].compare(c_s_options[2]) == 0)
          {
            m_temperature = m_driver->m_ctdData.dataReceived[cntIndex + i];
            m_sdstate.haveTemperature = true;
          }
        }

        if(m_sdstate.haveConductivity && m_sdstate.havePressure && m_sdstate.haveTemperature)
        {
          m_salinity = UNESCO1983::computeSalinity(m_conductivity, (m_pressure - m_offset_pressure), m_temperature);
          if(m_salinity < 0)
            m_salinity = 0;
          m_sdstate.haveSalinity = true;
        }

        if(m_sdstate.haveSalinity && m_sdstate.havePressure && m_sdstate.haveTemperature && !m_sdstate.haveSoundSpeed)
        {
          if (m_salinity > 0)
            m_soundSpeed = UNESCO1983::computeSoundSpeed(m_salinity, (m_pressure - m_offset_pressure), m_temperature);
          else
            m_soundSpeed = 0;

          m_sdstate.haveSoundSpeed = true;
        }
      }

      void
      dispatchData(void)
      {
        if (!m_first_value)
        {
          if (m_sdstate.haveConductivity)
          {
            spew("Conductivity: %f S/m", m_conductivity);
            m_cond.setTimeStamp(m_tstamp);
            m_cond.value = m_conductivity;
            dispatch(m_cond, DF_KEEP_TIME);
          }
          if (m_sdstate.havePressure)
          {
            spew("Pressure: %f Bar", (m_pressure - m_offset_pressure));
            m_pres.setTimeStamp(m_tstamp);
            m_pres.value = (m_pressure - m_offset_pressure) * c_bar_to_Pa;
            dispatch(m_pres, DF_KEEP_TIME);

            m_depth.setTimeStamp(m_tstamp);
            m_depth.value = (m_pres.value / (Math::c_gravity * c_seawater_density));
            spew("Depth: %f m", m_depth.value);
            dispatch(m_depth, DF_KEEP_TIME);
          }
          if (m_sdstate.haveSoundSpeed)
          {
            spew("SoundSpeed: %f m/s", m_soundSpeed);
            m_sspe.setTimeStamp(m_tstamp);
            m_sspe.value = m_soundSpeed;
            dispatch(m_sspe, DF_KEEP_TIME);
          }
          if (m_sdstate.haveTemperature)
          {
            spew("Temperature: %f C", m_temperature);
            m_temp.setTimeStamp(m_tstamp);
            m_temp.value = m_temperature;
            dispatch(m_temp, DF_KEEP_TIME);
          }
          if (m_sdstate.haveSalinity)
          {
            spew("Salinity: %f", m_salinity);
            m_sali.setTimeStamp(m_tstamp);
            m_sali.value = m_salinity;
            dispatch(m_sali, DF_KEEP_TIME);
          }
          if (m_sdstate.haveTurbidity)
          {
            spew("Turbidity: %f", m_turbidity);
            m_turb.setTimeStamp(m_tstamp);
            m_turb.value = m_turbidity;
            dispatch(m_turb, DF_KEEP_TIME);
          }
        }
        else
        {
          m_first_value = false;
          if (m_sdstate.havePressure)
          {
            m_offset_pressure = m_pressure;
            inf(DTR("CTD - Pressure calibrated (%f)"), m_offset_pressure);
          }
        }

        spew(" ");
        resetStateDataSensor();
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.1);

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
          }

          if (!Poll::poll(*m_uart, c_timeout_uart))
            continue;

          m_tstamp = Clock::getSinceEpoch();
          if(m_driver->haveNewData(m_numberSensors))
          {
            formateDataCTD();
            dispatchData();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_wdog.reset();
          }
        }
        m_driver->sendCommand("\r", ">");
      }
    };
  }
}

DUNE_TASK
