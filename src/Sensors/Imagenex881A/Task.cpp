//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: José Braga                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

namespace Sensors
{
  namespace Imagenex881A
  {
    using DUNE_NAMESPACES;

    //! Switch data command.
    enum IndexQuery
    {
      // Header 1.
      SD_HDR_1 = 0,
      // Header 2.
      SD_HDR_2 = 1,
      // Head ID.
      SD_HEAD_ID = 2,
      // Range index.
      SD_RANGE = 3,
      // Hold/Reverse step direction.
      SD_REV_HOLD = 5,
      // Master/Slave mode.
      SD_MASTER_SLAVE = 6,
      // Start Gain index.
      SD_START_GAIN = 8,
      // LOGF index.
      SD_LOGF = 9,
      // Absorption index.
      SD_ABSORPTION = 10,
      // Train angle.
      SD_TRAIN_ANGLE = 11,
      // Sector Width.
      SD_SECTOR_WIDTH = 12,
      // Step size.
      SD_STEP_SIZE = 13,
      // Pulse length index.
      SD_PULSE_LEN = 14,
      // Profile minimum range.
      SD_PROFILE_MIN_RANGE = 15,
      // Data points index.
      SD_DATA_POINTS = 19,
      // Data bits.
      SD_DATA_BITS = 20,
      // Baud rate.
      SD_BAUD_RATE = 21,
      // Profile mode.
      SD_PROFILE = 22,
      // Calibrate sensor.
      SD_CALIBRATE = 23,
      // Switch Delay index.
      SD_SWITCH_DELAY = 24,
      // Frequency index.
      SD_FREQUENCY = 25,
      // Terminator index.
      SD_TERMINATOR = 26
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Start gain.
      uint8_t start_gain;
      //! Absorption.
      float absorption;
      //! Step size.
      float step_size;
      //! Profile minimum range.
      float profile_min_range;
      //! Data points.
      unsigned data_points;
      //! Data bits.
      uint8_t data_bits;
      //! Switch delay.
      unsigned switch_delay;
      //! Range.
      uint8_t range;
      //! Frequency.
      unsigned frequency;
      //! Profile mode.
      bool profile;
      //! Sound speed on water.
      double sspeed;
      //! Use dynamic sound speed.
      bool sspeed_dyn;
    };

    //! Device query baud rate.
    static const unsigned c_uart_baud = 115200;
    //! List of available ranges.
    static const uint8_t c_ranges[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60, 80, 100, 150, 200};
    //! Count of available ranges.
    static const uint8_t c_ranges_size = sizeof(c_ranges) / sizeof(c_ranges[0]);
    //! Switch data size.
    static const uint8_t c_sdata_size = 27;
    //! Return frame maximum size.
    static const uint16_t c_max_rdata_size = 513;
    //! Echo sounder practical minimum range.
    static const float c_min_range = 0.0;
    //! Device uses this constant sound speed.
    static const double c_sound_speed = 1500.0;

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Response frame parser.
      Parser m_parser;
      //! Distance message.
      IMC::Distance m_distance;
      //! Profile message.
      IMC::SonarData m_sonar;
      // Output switch data.
      uint8_t m_sdata[c_sdata_size];
      //! Last valid sound speed value.
      double m_sound_speed;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_parser(m_sonar.data),
        m_sound_speed(c_sound_speed)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Start Gain", m_args.start_gain)
        .defaultValue("3")
        .units(Units::Decibel)
        .minimumValue("0")
        .maximumValue("40")
        .description("Start gain");

        param("Absorption", m_args.absorption)
        .defaultValue("0.1")
        .units(Units::DecibelPerMeter)
        .minimumValue("0")
        .maximumValue("2.55")
        .description("Absorption");

        param("Profile Minimum Range", m_args.profile_min_range)
        .defaultValue("0.1")
        .units(Units::Meter)
        .minimumValue("0.0")
        .maximumValue("25.0")
        .description("Minimum range for profile point digitization");

        param("Step Size", m_args.step_size)
        .defaultValue("0.3")
        .values("0, 0.3, 0.6, 0.9, 1.2, 2.4")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Degree)
        .description("Step size");

        param("Data Bits", m_args.data_bits)
        .defaultValue("8")
        .values("4, 8, 16")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Bit)
        .description("Resolution (number of data bits) of the returned echo data");

        param("Data Points", m_args.data_points)
        .defaultValue("250")
        .values("250, 500")
        .description("Number of sonar return data points");

        param("Switch Delay", m_args.switch_delay)
        .defaultValue("0")
        .units(Units::Millisecond)
        .minimumValue("0")
        .maximumValue("510")
        .description("The head can be commanded to pause before sending"
                     "its return data to allow the commanding program"
                     "enough time to setup for the return of the data.");

        param(DTR_RT("Range"), m_args.range)
        .defaultValue("30")
        .values("1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60, 80, 100, 150, 200")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Operating range");

        param(DTR_RT("Frequency"), m_args.frequency)
        .defaultValue("675")
        .minimumValue("600")
        .maximumValue("1000")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Kilohertz)
        .description("Operating frequency");

        param("Profile Mode", m_args.profile)
        .defaultValue("true")
        .description("Gather data in profile mode");

        param("Sound Speed on Water", m_args.sspeed)
        .units(Units::MeterPerSecond)
        .defaultValue("1500");

        param("Use Dynamic Sound Speed", m_args.sspeed_dyn)
        .defaultValue("false");

        m_distance.validity = IMC::Distance::DV_VALID;

        // Filling constant Sonar Data.
        m_sonar.type = IMC::SonarData::ST_ECHOSOUNDER;
        m_sonar.scale_factor = 1.0f;

        // Initialize switch data.
        std::memset(m_sdata, 0, sizeof(m_sdata));
        m_sdata[SD_HDR_1] = 0xfe;
        m_sdata[SD_HDR_2] = 0x44;
        m_sdata[SD_HEAD_ID] = 0x10;
        m_sdata[SD_MASTER_SLAVE] = 0x43;
        m_sdata[SD_BAUD_RATE] = 0x06;
        m_sdata[SD_TERMINATOR] = 0xfd;

        bind<IMC::SoundSpeed>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.uart_dev) && (m_uart != NULL))
          throw RestartNeeded(DTR("restarting to change UART device"), 1);

        m_sound_speed = m_args.sspeed;

        setRange();
        setStartGain();
        setAbsorption();
        setDataPoints();
        setDataBits();
        setProfile();
        setFrequency();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        m_uart = new SerialPort(m_args.uart_dev,
                                c_uart_baud,
                                SerialPort::SP_PARITY_NONE,
                                SerialPort::SP_STOPBITS_1,
                                SerialPort::SP_DATABITS_8,
                                true);

        m_uart->flush();
        m_wdog.setTop(5.0);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value < 0.0)
          return;

        m_sound_speed = msg->value;
      }

      void
      setRange(void)
      {
        m_sdata[SD_RANGE] = m_args.range;
      }

      void
      setStartGain(void)
      {
        m_sdata[SD_START_GAIN] = m_args.start_gain;
      }

      void
      setAbsorption(void)
      {
        uint8_t abs = (uint8_t)(m_args.absorption * 100.0);

        if (abs == 253)
          abs += 1;

        m_sdata[SD_ABSORPTION] = abs;
      }

      void
      setStepSize(void)
      {
        m_sdata[SD_STEP_SIZE] = (uint8_t)(m_args.step_size / 0.3);
      }

      void
      setProfile(void)
      {
        m_sdata[SD_PROFILE] = m_args.profile ? 1 : 0;
      }

      void
      setDataBits(void)
      {
        m_sonar.bits_per_point = m_args.data_bits;
        m_sdata[SD_DATA_BITS] = m_args.data_bits;
      }

      void
      setDataPoints(void)
      {
        m_sdata[SD_DATA_POINTS] = (uint8_t)(m_args.data_points / 10.0);
      }

      void
      setProfileMinRange(void)
      {
        m_sdata[SD_PROFILE_MIN_RANGE] = (uint8_t)(m_args.profile_min_range * 10.0);
      }

      void
      setSwitchDelay(void)
      {
        uint8_t sd = (uint8_t)(m_args.switch_delay / 2);

        if (sd == 253)
          sd += 1;

        m_sdata[SD_SWITCH_DELAY] = sd;
      }

      void
      setFrequency(void)
      {
        m_sonar.frequency = m_args.frequency;
        m_sdata[SD_FREQUENCY] = (uint8_t)((m_args.frequency - 675) / 5 + 100);
      }

      void
      updateState(void)
      {
        // @todo
      }

      void
      temporary(void)
      {
        // Temporary.
        m_sdata[SD_SECTOR_WIDTH] = 120;
        m_sdata[SD_TRAIN_ANGLE] = 0;
        m_sdata[SD_STEP_SIZE] = 1;
        m_sdata[SD_PULSE_LEN] = 26;
      }

      //! Main loop.
      void
      onMain(void)
      {
        temporary();

        uint8_t bfr[c_max_rdata_size];

        while (!stopping())
        {
          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          m_uart->write(m_sdata, c_sdata_size);

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->read(bfr, sizeof(bfr));

          if (rv == 0)
            continue;

          for (size_t i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(bfr[i]))
              continue;

            m_distance.value = m_parser.getProfileRange();

            // If range is zero, there are no echoes.
            if (m_distance.value <= c_min_range)
              m_distance.value = m_parser.getRange();

            // Correct for dynamic sound speed.
            if (m_args.sspeed_dyn)
              m_distance.value = (m_distance.value * m_sound_speed) / c_sound_speed;

            updateState();

            dispatch(m_distance);

            if (m_parser.getDataPointsCount() > 0)
            {
              m_sonar.setTimeStamp(m_distance.getTimeStamp());
              m_sonar.min_range = static_cast<uint16_t>(m_parser.getProfileRange());
              m_sonar.max_range = m_parser.getRange();
              dispatch(m_sonar);
            }

            // Gather data.
            inf("Data Bytes: %d | Head: %f | Range: %f",
                m_parser.getDataPointsCount(),
                m_parser.getHeadPosition(),
                m_distance.value);

            // Extract and dispatch data.
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_wdog.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
