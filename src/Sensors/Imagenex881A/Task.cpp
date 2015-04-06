//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
      uint16_t data_points;
      //! Data bits.
      uint8_t data_bits;
      //! Switch delay.
      uint16_t switch_delay;
      //! Range.
      uint8_t range;
      //! Sector Width.
      uint16_t sector_width;
      //! Train Angle.
      int16_t train_angle;
      //! Frequency.
      uint16_t frequency;
      //! Profile mode.
      bool profile;
      //! Sound speed on water.
      double sspeed;
      //! Use dynamic sound speed.
      bool sspeed_dyn;
      //! Sonar position.
      std::vector<float> position;
      //! Use default Imagenex configuration.
      bool use_default;
      // Power channel name.
      std::string power_channel;
    };

    //! Device query baud rate.
    static const unsigned c_uart_baud = 115200;
    //! List of available ranges.
    static const uint8_t c_ranges[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60, 80, 100};
    //! Count of available ranges.
    static const uint8_t c_ranges_size = sizeof(c_ranges) / sizeof(c_ranges[0]);
    //! List of pulse lengths in us.
    static const uint16_t c_pulse_len[] = {20, 20, 20, 20, 60, 60, 100, 160, 220, 260, 320, 420, 540};
    //! Switch data size.
    static const uint8_t c_sdata_size = 27;
    //! Return frame maximum size.
    static const uint16_t c_max_rdata_size = 513;
    //! Echo sounder practical minimum range.
    static const float c_min_range = 0.150;
    //! Device uses this constant sound speed.
    static const double c_sound_speed = 1500.0;
    //! Minimum frequency.
    static const float c_freq_min = 600;
    //! Frequency range.
    static const float c_freq_range = 400;
    //! Base width.
    static const float c_base_width = 2.4;
    //! Frequency level for small ranges.
    static const uint16_t c_frequency_below = 1000;
    //! Frequency level for big ranges.
    static const uint16_t c_frequency_above = 675;
    //! Absorption level for small ranges.
    static const float c_absorption_below = 0.6;
    //! Absorption level for big ranges.
    static const float c_absorption_above = 0.2;
    //! Range threshold for default configuration.
    static const uint8_t c_range_threshold = 5;

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
      //! Device State message.
      IMC::DeviceState m_device_state;
      // Output switch data.
      uint8_t m_sdata[c_sdata_size];
      //! Last valid sound speed value.
      double m_sound_speed;
      //! Power channel control.
      IMC::PowerChannelControl m_power_channel_control;
      //! Activation/deactivation timer.
      Counter<double> m_countdown;
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
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

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
        .values("1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60, 80, 100")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Operating range");

        param(DTR_RT("Frequency"), m_args.frequency)
        .defaultValue("675")
        .minimumValue("600")
        .maximumValue("1000")
        .units(Units::Kilohertz)
        .description("Operating frequency");

        param("Sector Width", m_args.sector_width)
        .defaultValue("360")
        .minimumValue("0")
        .maximumValue("360")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Degree)
        .description("Sweep sector width");

        param("Train Angle", m_args.train_angle)
        .defaultValue("0")
        .minimumValue("-180")
        .maximumValue("180")
        .units(Units::Degree)
        .description("Device train angle");

        param("Profile Mode", m_args.profile)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description("Gather data in profile mode");

        param("Sound Speed on Water", m_args.sspeed)
        .defaultValue("1500")
        .minimumValue("1375")
        .maximumValue("1900")
        .units(Units::MeterPerSecond)
        .description("Water sound speed");

        param("Use Dynamic Sound Speed", m_args.sspeed_dyn)
        .defaultValue("true")
        .description("Update measurements according with measured sound speed");

        param("Sonar position", m_args.position)
        .defaultValue("0.2, 0, -0.4")
        .size(3)
        .description("Sonar position");

        param("Use Default Configuration", m_args.use_default)
        .defaultValue("true")
        .description("Use default Imagenex configuration for frequency and absorption levels.");

        param("Power Channel", m_args.power_channel)
        .defaultValue("Pencil Beam")
        .description("Power channel that controls the power of the device");

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
        m_power_channel_control.name = m_args.power_channel;
        m_countdown.setTop(getActivationTime());

        setRange();
        setStartGain();
        setDataPoints();
        setDataBits();
        setProfile();
        setStepSize();
        setSectorWidth();
        setTrainAngle();

        if (m_args.use_default)
        {
          if (m_args.range > c_range_threshold)
          {
            setFrequency(c_frequency_above);
            setAbsorption(c_absorption_above);
          }
          else
          {
            setFrequency(c_frequency_below);
            setAbsorption(c_absorption_below);
          }
        }
        else
        {
          setFrequency(m_args.frequency);
          setAbsorption(m_args.absorption);
        }

        // Update state.
        m_device_state.x = m_args.position[0];
        m_device_state.y = m_args.position[1];
        m_device_state.z = m_args.position[2];
        m_distance.location.clear();
        m_distance.location.push_back(m_device_state);
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

      //! Release resources
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
        requestDeactivation();
      }

      void
      onResourceInitialization(void)
      {
        requestDeactivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestActivation(void)
      {
        m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(m_power_channel_control);

        m_countdown.reset();
      }

      void
      onActivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_IDLE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_power_channel_control);
      }

      void
      checkActivationProgress(void)
      {
        if (m_countdown.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          return;
        }

        try
        {
          testComms();
          activate();

          debug("activation took %0.2f s", getActivationTime() -
                m_countdown.getRemaining());

          m_wdog.reset();
        }
        catch (...)
        { }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value < 0.0)
          return;

        m_sound_speed = msg->value;
      }

      //! Get index from table according with given value.
      //! @param[in] value value to be checked in the table.
      //! @param[in] table vector with parameters.
      //! @param[in] table_size size of the vector.
      //! @return index of the vector.
      uint8_t
      getIndex(uint8_t value, const uint8_t* table, uint8_t table_size)
      {
        for (uint8_t i = 0; i < table_size; ++i)
        {
          if (value <= table[i])
            return i;
        }

        return table_size - 1;
      }

      //! Set switch data range.
      void
      setRange(void)
      {
        uint8_t idx = getIndex(m_args.range, c_ranges, c_ranges_size);

        m_sdata[SD_RANGE] = (uint8_t)c_ranges[idx];
        m_sdata[SD_PULSE_LEN] = (uint8_t)(c_pulse_len[idx] / 10);
      }

      //! Set switch data start gain.
      void
      setStartGain(void)
      {
        m_sdata[SD_START_GAIN] = m_args.start_gain;
      }

      //! Set switch data absorption.
      //! @param[in] absorption absorption level.
      void
      setAbsorption(float absorption)
      {
        uint8_t abs = (uint8_t)(absorption * 100.0);

        if (abs == 253)
          abs += 1;

        m_sdata[SD_ABSORPTION] = abs;
      }

      //! Set switch data step size.
      void
      setStepSize(void)
      {
        m_sdata[SD_STEP_SIZE] = (uint8_t)(m_args.step_size / 0.3);
      }

      //! Set switch data profile mode.
      void
      setProfile(void)
      {
        m_sdata[SD_PROFILE] = m_args.profile ? 1 : 0;
      }

      //! Set switch data number of bits per data point.
      void
      setDataBits(void)
      {
        m_sonar.bits_per_point = m_args.data_bits;
        m_sdata[SD_DATA_BITS] = m_args.data_bits;
      }

      //! Set switch data number of data points.
      void
      setDataPoints(void)
      {
        m_sdata[SD_DATA_POINTS] = (uint8_t)(m_args.data_points / 10.0);
      }

      //! Set switch data profile minimum range.
      void
      setProfileMinRange(void)
      {
        m_sdata[SD_PROFILE_MIN_RANGE] = (uint8_t)(m_args.profile_min_range * 10.0);
      }

      //! Set switch data delay.
      void
      setSwitchDelay(void)
      {
        uint8_t sd = (uint8_t)(m_args.switch_delay / 2);

        if (sd == 253)
          sd += 1;

        m_sdata[SD_SWITCH_DELAY] = sd;
      }

      //! Set switch data frequency.
      //! @param[in] frequency operation frequency.
      void
      setFrequency(uint16_t frequency)
      {
        m_sonar.frequency = frequency;
        m_sdata[SD_FREQUENCY] = (uint8_t)((frequency - 675) / 5 + 100);

        // Beam config.
        double width = c_base_width - (frequency - c_freq_min) / c_freq_range;
        IMC::BeamConfig bc;
        bc.beam_width = Math::Angles::radians(width);
        bc.beam_height = Math::Angles::radians(width);

        // Push back to distance and sonar variables.
        m_distance.beam_config.clear();
        m_distance.beam_config.push_back(bc);
        m_sonar.beam_config.clear();
        m_sonar.beam_config.push_back(bc);
      }

      //! Update state.
      //! @param[in] heading beam orientation.
      void
      updateState(float heading)
      {
        m_device_state.psi = heading;
        m_distance.location.clear();
        m_distance.location.push_back(m_device_state);
      }

      //! Set switch data sector width.
      void
      setSectorWidth(void)
      {
        m_sdata[SD_SECTOR_WIDTH] = (uint8_t)(m_args.sector_width / 3);
      }

      //! Set switch data train angle.
      void
      setTrainAngle(void)
      {
        m_sdata[SD_TRAIN_ANGLE] = (uint8_t)((m_args.train_angle + 180) / 3);
      }

      //! Test communication with device.
      void
      testComms(void)
      {
        m_uart->write(m_sdata, c_sdata_size);

        if (!Poll::poll(*m_uart, 1.0))
          throw std::runtime_error("unable to communicate");
      }

      //! Main loop.
      void
      onMain(void)
      {
        uint8_t bfr[c_max_rdata_size];

        while (!stopping())
        {
          consumeMessages();

          if (isActive() && (m_uart != NULL))
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
                m_distance.value *= m_sound_speed / c_sound_speed;

              updateState(m_parser.getHeadPosition());

              dispatch(m_distance);

              if (m_parser.getDataPointsCount() > 0)
              {
                m_sonar.setTimeStamp(m_distance.getTimeStamp());
                m_sonar.min_range = static_cast<uint16_t>(m_distance.value);
                m_sonar.max_range = m_parser.getRange();
                dispatch(m_sonar);
              }

              // Extract and dispatch data.
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_wdog.reset();
            }
          }
          else
          {
            waitForMessages(1.0);
            if (isActivating())
              checkActivationProgress();
          }
        }
      }
    };
  }
}

DUNE_TASK
