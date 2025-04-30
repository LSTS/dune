//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Constants.hpp"

namespace Sensors
{
  //! Driver for HMC5883L compass.
  //!
  //! HMC5883L compass is a I2C device.
  //! The driver is a periodic task that reads the compass data and
  //! dispatches the Euler angles.
  //! @author Bernardo Gabriel
  namespace HMC5883L
  {
    struct Arguments
    {
      //! I2C device name.
      std::string dev;
      //! I2C address.
      uint8_t addr;
      //! Number of samples averaged.
      uint8_t samples;
      //! Data output rate.
      float rate;
      //! Measurement configuration.
      std::string config;
      //! HMC5883L measurement mode.
      std::string mode;
      //! Gain configuration.
      float gain;
    };

    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! I2C device handle.
      DUNE::Hardware::I2C* m_handle;
      //! Configuration A.
      uint8_t m_config_a;
      //! Configuration B.
      uint8_t m_config_b;
      //! Mode.
      uint8_t m_mode;
      //! Scale factor.
      float m_scale;
      //! X axis value.
      float m_x;
      //! Y axis value.
      float m_y;
      //! Z axis value.
      float m_z;
      //! Time stamp.
      double m_tstamp;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_handle(nullptr),
        m_scale(0.0f),
        m_x(0.0f),
        m_y(0.0f),
        m_z(0.0f),
        m_tstamp(0)
      {
        param("Device Name", m_args.dev)
        .defaultValue("")
        .description("I2C device name.");

        param("Address", m_args.addr)
        .defaultValue("0x1E")
        .description("I2C address.");

        param("Samples", m_args.samples)
        .defaultValue("8")
        .values("1, 2, 4, 8")
        .description("Number of samples averaged "
                     "per measurement output.");

        param("Data Rate", m_args.rate)
        .units(Units::Hertz)
        .defaultValue("15")
        .values("0.75, 1.5, 3, 7.5, 15, 30, 75")
        .description("Output data rate.");

        param("Measurement Configuration", m_args.config)
        .defaultValue("Normal")
        .values("Normal, Positive Bias, Negative Bias")
        .description("Measurement configuration. Specify whether or not"
                     "to incorporate an applied bias into the measurement.");

        param("Gain Configuration", m_args.gain)
        .units(Units::Gauss)
        .defaultValue("1.3")
        .values("0.88, 1.3, 1.9, 2.5, 4.0, 4.7, 5.6, 8.1")
        .description("Gain configuration for all channels.");

        param("Measurement mode", m_args.mode)
        .defaultValue("Continuous")
        .values("Continuous, Single, Idle")
        .description("HMC5883L measurement mode.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (m_handle == nullptr)
          return;
          
        if (paramChanged(m_args.dev))
          restartNeeded("I2C device name has changed");

        if (paramChanged(m_args.addr))
          restartNeeded("I2C address has changed");
        
        if (paramChanged(m_args.samples) || 
            paramChanged(m_args.rate)    ||
            paramChanged(m_args.config))
          setConfigA();

        if (paramChanged(m_args.gain))
          setConfigB();

        if (paramChanged(m_args.mode))
          setMode();
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        if (m_args.dev.empty())
          restartNeeded("I2C device name not set", 5);

        m_handle = new DUNE::Hardware::I2C(m_args.dev);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setup();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_handle);
      }
      
      void
      setup(void)
      {
        if (m_handle == nullptr)
          restartNeeded("I2C device not initialized", 5);

        m_handle->connect(m_args.addr);
        setConfigA();
        setConfigB();
        setMode();
        validate();
      }

      bool
      identificate(void)
      {
        const auto id_a = readData8(c_register_identification_a);
        const auto id_b = readData8(c_register_identification_b);
        const auto id_c = readData8(c_register_identification_c);

        return (id_a == c_register_identification_a_value &&
                id_b == c_register_identification_b_value &&
                id_c == c_register_identification_c_value);
      }

      void
      validate(void)
      {
        if (!checkConfigA() ||
            !checkConfigB() ||
            !checkMode()    ||
            !identificate())
          restartNeeded("HMC5883L validation failed", 5);
      }

      bool
      checkConfig(const uint8_t reg, const uint8_t expected, uint8_t* result)
      {
        *result = readData8(reg);
        return (*result == expected);
      }

      bool
      checkConfigA(void)
      {
        uint8_t result = 0;
        const auto valid = checkConfig(c_register_config_a, m_config_a, &result);
        if (!valid)
          spew("Error on config A: real 0x%02X expected 0x%02X", result, m_config_a);
        return valid;
      }

      bool
      checkConfigB(void)
      {
        uint8_t result = 0;
        const auto valid = checkConfig(c_register_config_b, m_config_b, &result);
        if (!valid)
          spew("Error on config B: real 0x%02X expected 0x%02X", result, m_config_b);
        return valid;
      }

      bool
      checkMode(void)
      {
        uint8_t result = 0;
        const auto valid = checkConfig(c_register_mode, m_mode, &result);
        if (!valid)
          spew("Error on config A: real 0x%02X expected 0x%02X", result, m_config_a);
        return valid;
      }

      void
      config(const uint8_t reg, const uint8_t val)
      {
        if (m_handle == nullptr)
          restartNeeded("I2C device not initialized", 5);

        uint8_t data[2];
        data[0] = reg;
        data[1] = val;

        m_handle->write(data, 2);
      }

      void
      setConfigA(void)
      {
        m_config_a = 0x0                          << 7 |
                     c_samples.at(m_args.samples) << 5 |
                     c_rate.at(m_args.rate)       << 2 |
                     c_config.at(m_args.config)   << 0;
        config(c_register_config_a, m_config_a);
      }

      void
      setConfigB(void)
      {
        m_config_b = c_gain.at(m_args.gain) << 5 |
                     0x0                    << 0;
        config(c_register_config_b, m_config_b);
        setScale();
      }

      void
      setMode(void)
      {
        m_mode = 0x0                    << 7 |
                 c_mode.at(m_args.mode) << 0;
        config(c_register_mode, m_mode);
      }

      void
      setScale(void)
      {
        m_scale = c_scale.at(m_args.gain);
      }

      float
      readXaxis(void)
      {
        return readData16(c_register_Xaxis) * m_scale;
      }

      float
      readYaxis(void)
      {
        return readData16(c_register_Yaxis) * m_scale;
      }

      float
      readZaxis(void)
      {
        return readData16(c_register_Zaxis) * m_scale;
      }

      uint8_t
      readData8(const uint8_t reg)
      {
        if (m_handle == nullptr)
          restartNeeded("I2C device not initialized", 5);
        
        uint8_t value = 0;
        m_handle->write(&reg, 1);
        m_handle->read(&value, 1);
        return value;
      }

      uint16_t
      readData16(const uint8_t reg)
      {
        if (m_handle == nullptr)
          restartNeeded("I2C device not initialized", 5);
        
        uint8_t value[2] = {0};
        m_handle->write(&reg, 1);
        m_handle->read(value, 2);
        return ((value[0] << 8) | value[1]);
      }

      double
      readValues(void)
      {
        if (m_handle == nullptr)
          restartNeeded("I2C device not initialized", 5);
        
        uint8_t value[6] = {0};
        m_handle->transfer(m_args.addr, c_register_data, 0, 0, value, 6, 0);
        m_x = ((value[0] << 8) | value[1]) * m_scale;
        m_y = ((value[2] << 8) | value[3]) * m_scale;
        m_z = ((value[4] << 8) | value[5]) * m_scale;
        spew("x: %f y: %f z: %f", m_x, m_y, m_z);
        return Clock::getSinceEpoch();
      }

      double
      computeYaw(void)
      {
        const auto yaw = std::atan2(m_y, m_x);
        return Angles::normalizeRadian(yaw);
      }

      double
      computePitch(void)
      {
        const auto pitch = std::atan2(-m_x, std::sqrt(m_y * m_y + m_z * m_z));
        return Angles::normalizeRadian(pitch);
      }

      double
      computeRoll(void)
      {
        const auto roll = std::atan2(m_z, m_y);
        return Angles::normalizeRadian(roll);
      }

      void
      dispatchEulerAngles(const double tstamp)
      {
        IMC::EulerAngles euler;
        euler.setTimeStamp(tstamp);
        euler.phi = computeRoll();
        euler.theta = computePitch();
        euler.psi = computeYaw();
        euler.psi_magnetic = euler.psi;
        dispatch(euler, DF_KEEP_TIME);
        trace("roll: %.2f pitch: %.2f yaw: %.2f",
               Angles::degrees(euler.phi),
               Angles::degrees(euler.theta),
               Angles::degrees(euler.psi));
      }

      void
      restartNeeded(const std::string& msg, const unsigned delay = 3)
      {
        throw RestartNeeded(DTR(msg.c_str()), delay);
      }

      void
      task(void)
      {
        const auto tstamp = readValues();
        dispatchEulerAngles(tstamp);
      }
    };
  }
}

DUNE_TASK
