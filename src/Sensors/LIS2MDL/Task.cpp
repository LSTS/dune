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

#include "RegisterAddressMap.hpp"

namespace Sensors
{
  //! Device driver for LIS2MDL magnetic sensor using I2C interface.
  //!
  //! @author Bernardo Gabriel
  namespace LIS2MDL
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Get temperature period.
      int8_t temp_period;
      //! Output data rate.
      uint8_t rate;
      //! Enable low power filter.
      bool lp_filter;
    };

    //! Chip id.
    constexpr uint8_t c_id = 0x40;
    //! Sensor temperature sensitivity (Celsius degrees/LSB).
    constexpr float c_temp_sensitivity = 0.125;
    //! Sensor magnetic field sensitivity for 50 gauss full scale (mgauss/LSB).
    constexpr float c_mag_sensitivity = 1.5;
    //! Output data rate map.
    const std::map<uint8_t, uint8_t> c_rate_map = {{10, 0b00}, {20, 0b01}, {50, 0b10}, {100, 0b11}};
    //! Default configuration register A.
    constexpr uint8_t c_default_cfg_a = 0x03;
    //! Default configuration register B.
    constexpr uint8_t c_default_cfg_b = 0x00;
    //! Default configuration register C.
    constexpr uint8_t c_default_cfg_c = 0x00;

    struct Task: public DUNE::Hardware::BasicI2CDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! Buffer for write operation data.
      std::vector<uint8_t> m_write_buffer;
      //! Buffer for last read operation data.
      std::vector<uint8_t> m_read_buffer;
      //! Temperature message.
      IMC::Temperature m_temp;
      //! Magnetic Field message.
      IMC::MagneticField m_mag;
      //! Get temperature timer.
      Counter<int8_t> m_temp_timer;
      //! Current config A.
      uint8_t m_cfg_a;
      //! Current config B.
      uint8_t m_cfg_b;
      //! Current config C.
      uint8_t m_cfg_c;
      //! Device initialization done.
      bool m_init_done;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Hardware::BasicI2CDriver(name, ctx),
        m_cfg_a(c_default_cfg_a),
        m_cfg_b(c_default_cfg_b),
        m_cfg_c(c_default_cfg_c)
      {
        param("Get temperature period", m_args.temp_period)
        .minimumValue("-1")
        .maximumValue("127")
        .defaultValue("0")
        .units(Units::Second)
        .description("Period between temperature readings. Set to -1 to disable temperature readings.");

        param("Output data rate", m_args.rate)
        .values("10,20,50,100")
        .defaultValue("10")
        .units(Units::Hertz)
        .description("Rate of data output.");

        param("Enable low power filter", m_args.lp_filter)
        .defaultValue("false")
        .description("Enable low power filter.");
      }

      void
      onUpdateParameters(void) override
      {
        if (!isActive())
          return;

        bool change_a = false;
        if (paramChanged(m_args.rate))
        {
          change_a = true;
          setDataRate();
        }

        if (change_a)
          setConfig(REGISTER_MAP::CFG_REG_A, m_cfg_a);

        bool change_b = false;
        if (paramChanged(m_args.lp_filter))
        {
          change_b = true;
          enableLowPassFilter();
        }

        if (change_b)
          setConfig(REGISTER_MAP::CFG_REG_B, m_cfg_b);
      }

      void
      onActivation(void) override
      {
        if (!verifyIdentity())
        {
          err("failed to verify device identity");
          requestDeactivation();
          return;
        }

        init();
        getConfig();
        m_temp_timer.setTop(0);
      }

      void
      onDeactivation(void) override
      {
        deinit();
        getConfig();
      }

      void
      enableTempComp(const bool en = true)
      {
        m_cfg_a = (m_cfg_a & ~(1u << 7)) | (static_cast<uint8_t>(en) << 7);
      }

      void
      reboot(void)
      {
        m_cfg_a |= (1u << 6);
        setConfig(REGISTER_MAP::CFG_REG_A, m_cfg_a);
        m_cfg_a &= ~(1u << 6);
      }

      void
      reset(void)
      {
        m_cfg_a |= (1u << 5);
        setConfig(REGISTER_MAP::CFG_REG_A, m_cfg_a);
        m_cfg_a &= ~(1u << 5);
      }

      void
      enableLowPower(const bool en = true)
      {
        m_cfg_a = (m_cfg_a & ~(1u << 4)) | (static_cast<uint8_t>(en) << 4);
      }

      void
      startMeasurements(const bool en = true)
      {
        m_cfg_a = (m_cfg_a & ~0b11) | (en ? 0b00 : 0b11);
      }

      void
      setDataRate(void)
      {
        m_cfg_a = (m_cfg_a & ~(0b11 << 2)) | (c_rate_map.at(m_args.rate) << 2);
      }

      void
      enableLowPassFilter(void)
      {
        m_cfg_b = (m_cfg_b & ~(1u << 0)) | (static_cast<uint8_t>(m_args.lp_filter) << 0);
      }

      void
      enableBDU(const bool en = true)
      {
        m_cfg_c = (m_cfg_c & ~(1u << 4)) | (static_cast<uint8_t>(en) << 4);
      }

      void
      init(void)
      {
        reset();
        Delay::waitMsec(100);

        enableTempComp();
        enableLowPower(false);
        setDataRate();
        startMeasurements();
        enableLowPassFilter();
        enableBDU();
        setConfig(REGISTER_MAP::CFG_REG_A, m_cfg_a);
        setConfig(REGISTER_MAP::CFG_REG_B, m_cfg_b);
        setConfig(REGISTER_MAP::CFG_REG_C, m_cfg_c);
        m_init_done = true;
      }

      void
      deinit(void)
      {
        if (!m_init_done)
          return;

        enableTempComp(false);
        enableLowPower();
        startMeasurements(false);
        enableBDU(false);
        setConfig(REGISTER_MAP::CFG_REG_A, m_cfg_a);
        setConfig(REGISTER_MAP::CFG_REG_B, m_cfg_b);
        setConfig(REGISTER_MAP::CFG_REG_C, m_cfg_c);
        m_init_done = false;
      }

      void
      getHardIron(void)
      {
        if (!read(REGISTER_MAP::OFFSET_X_REG_L, 6, true))
          return;

        if (m_read_buffer.size() != 6)
          return;

        auto decode = [&](int idx)
        {
          int16_t t = (int16_t)
          (
            (uint16_t)m_read_buffer[idx + 1] << 8 |
            (uint16_t)m_read_buffer[idx]
          );
          return t * c_mag_sensitivity * 0.001f;
        };

        float hi_x = decode(0);
        float hi_y = decode(2);
        float hi_z = decode(4);
        err("hard iron > x: %.2f y: %.2f z: %.2f", hi_x, hi_y, hi_z);
      }

      void
      setHardIron(const float x, const float y, const float z)
      {
        m_write_buffer.clear();

        auto encode = [&](float v)
        {
          int16_t t = static_cast<int16_t>(v / (c_mag_sensitivity * 0.001f));
          m_write_buffer.push_back(t & 0xFF);
          m_write_buffer.push_back((t >> 8) & 0xFF);
        };

        encode(x);
        encode(y);
        encode(z);
        write(REGISTER_MAP::OFFSET_X_REG_L, m_write_buffer, true);
        err("setting hard iron > x: %.2f y: %.2f z: %.2f", x, y, z);
      }

      bool
      verifyIdentity(void)
      {
        if (!read(REGISTER_MAP::WHO_AM_I, 1, true))
          return false;

        if (m_read_buffer.size() != 1)
          return false;

        return m_read_buffer[0] == c_id;
      }

      void
      getConfig(void)
      {
        if (!read(REGISTER_MAP::CFG_REG_A, 3, true))
          return;

        if (m_read_buffer.size() != 3)
          return;

        m_cfg_a = m_read_buffer[0];
        m_cfg_b = m_read_buffer[1];
        m_cfg_c = m_read_buffer[2];
        spew("config > 0x%02x 0x%02x 0x%02x", m_cfg_a, m_cfg_b, m_cfg_c);
      }

      void
      setConfig(const REGISTER_MAP reg, const uint8_t cfg)
      {
        m_write_buffer.clear();
        m_write_buffer.push_back(cfg);
        write(reg, m_write_buffer, true);
      }

      void
      getData(const bool temperature)
      {
        if (!read(REGISTER_MAP::OUTX_L_REG, temperature ? 8 : 6, true))
          return;

        auto decode = [&](int idx, float sensitivity)
        {
          int16_t t = (int16_t)
          (
            (uint16_t)m_read_buffer[idx + 1] << 8 |
            (uint16_t)m_read_buffer[idx]
          );
          return static_cast<float>(t) * sensitivity;
        };

        switch (m_read_buffer.size())
        {
        case 8:
          m_temp.value = decode(6, c_temp_sensitivity);
          dispatch(m_temp); // TODO: add timestamp
          spew("temperature > %.2f", m_temp.value);
          m_temp_timer.setTop(m_args.temp_period);
#if (DUNE_LEGACY)
          /*FALLTHROUGH*/
#else
          [[fallthrough]];
#endif
        case 6:
          m_mag.x = decode(0, c_mag_sensitivity) * 0.001f;
          m_mag.y = decode(2, c_mag_sensitivity) * 0.001f;
          m_mag.z = decode(4, c_mag_sensitivity) * 0.001f;
          dispatch(m_mag); // TODO: add timestamp
          spew("magnetic field > x: %.2f y: %.2f z: %.2f", m_mag.x, m_mag.y, m_mag.z);
          break;
        
        default:
          return;
        }
      }

      void
      onI2CAction(const IMC::I2CAction& msg)
      {
        switch (msg.status)
        {
        case I2CAction::STAT_SUCCESS:
        {
          switch (msg.op)
          {
          case I2CAction::OP_READ:
          {
            m_read_buffer.assign(msg.data.begin(), msg.data.end());
            break;
          }
          
          default:
            break;
          }

          break;
        }
        
        default:
          break;
        }
      }

      void
      step(void) override
      {
        getData(m_temp_timer.overflow() && m_args.temp_period != -1);
      }
    };
  }
}

DUNE_TASK
