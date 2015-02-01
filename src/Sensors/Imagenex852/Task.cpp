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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <memory>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "SwitchData.hpp"
#include "Parser.hpp"
#include "Trigger.hpp"
#include "PatternFilter.hpp"

namespace Sensors
{
  //! Device driver for the Imagenex 852 High Frequency Echo Sounder.
  //!
  //! This device driver is capable of controlling the following
  //! parameters:
  //!  - <em>Range</em>: Range of the echosounder. Unit is meter,
  //!    the default value is 50, and the domain is {5, 10, 20,
  //!    30, 40, 50}.
  //!  - <em>Profile Minimum Range</em>: Minimum range for profile
  //!    point digitization. Unit is meter, the default value is 0,
  //!    and the domain is [0, 25] in 0.1 meter increments.
  //!  - <em>Start Gain</em>: Unit is Decibel, the default value
  //!    is 20 and the domain is {0, 1, 2, ..., 40}.
  //!  - <em>Pulse Length</em>: Length of acoustic transmit pulse.
  //!    Unit is second, default value is 15μs and the domain is
  //!    [0.0, 0.000255] in 1μs increments.
  //!  - <em>Data Points</em>: Number of sonar return data points
  //!     -# <em>0</em>  no data points are returned by the head.
  //!     -# <em>252</em>: 252 data points are returned by the head.
  //!     -# <em>500</em>: 500 data points are returned by the head.
  //!
  //! This driver will output raw data from the sonar for each measurement.
  //! as well as the first digitized range value above threshold in meters.
  //!
  //! @author Ricardo Martins
  namespace Imagenex852
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Default Range.
      unsigned range;
      //! Pulse length.
      double pulse_length;
      //! Start gain.
      unsigned start_gain;
      //! Profile minimum range.
      unsigned profile_range;
      //! Data points.
      unsigned data_points;
      //! Sound speed on water.
      double sspeed;
      //! Use dynamic sound speed.
      bool sspeed_dyn;
      //! Sonar position.
      std::vector<float> position;
      //! Sonar orientation.
      std::vector<float> orientation;
      //! Enable filtering the profile range.
      bool filter_enabled;
      //! Window size of the median filter.
      unsigned filter_median_size;
      //! Filter threshold to detect range.
      unsigned filter_threshold;
      //! Sampling frequency.
      double sample_frequency;
      //! Enable profile pattern filter
      bool pattern_filter;
      //! Pattern maximum difference
      unsigned pattern_diff;
      //! True to activate device at surface.
      bool activate_at_surface;
    };

    //! Device uses this constant sound speed.
    static const double c_sound_speed = 1500.0;
    //! Device beam width
    static const float c_beam_width = 10.0;
    //! This device has only one baud rate.
    static const unsigned c_uart_baud = 115200;
    //! This device has only one frequency (Hz).
    static const unsigned c_frequency = 675000;
    //! Echo sounder practical minimum range.
    static const float c_min_range = 0.150;
    //! Pattern filter pattern size
    static const unsigned c_pattern_size = 5;
    //! Pattern filter maximum samples
    static const unsigned c_pattern_samples = 8;
    //! Pattern filter required occurrences
    static const unsigned c_pattern_occurs = 50;

    //! %Task.
    struct Task: public Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Shot trigger.
      Trigger m_trigger;
      //! Distance message.
      IMC::Distance m_dist;
      //! Profile message.
      IMC::SonarData m_profile;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Last valid sound speed value.
      double m_sound_speed;
      //! Switch data.
      SwitchData m_switch;
      //! Return data parser.
      Parser m_parser;
      //! Pattern filter.
      PatternFilter* m_pfilt;
      //! Medium handler.
      Monitors::MediumHandler m_hand;
      //! Underwater acoustic modem transmission in progress.
      bool m_uam_tx_ip;

      //! %Task constructor.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_sound_speed(c_sound_speed),
        m_parser(m_profile.data),
        m_pfilt(NULL),
        m_uam_tx_ip(false)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Sampling Frequency", m_args.sample_frequency)
        .defaultValue("5")
        .minimumValue("0.1")
        .maximumValue("10")
        .units(Units::Hertz)
        .description("Number of samples per second");

        param("Range", m_args.range)
        .defaultValue("50")
        .values("5, 10, 20, 30, 40, 50")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Default range");

        param("Start Gain", m_args.start_gain)
        .defaultValue("20")
        .minimumValue("0")
        .maximumValue("40")
        .units(Units::Decibel)
        .description("Start gain");

        param("Pulse Length", m_args.pulse_length)
        .defaultValue("0.000015")
        .minimumValue("0.000001")
        .maximumValue("0.000255")
        .units(Units::Second)
        .description("Pulse length");

        param("Profile Minimum Range", m_args.profile_range)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("25")
        .units(Units::Meter)
        .description("Profile minimum range");

        param("Data Points", m_args.data_points)
        .defaultValue("500")
        .values("0, 252, 500")
        .description("Number of sonar return data points");

        param("Sound Speed on Water", m_args.sspeed)
        .defaultValue("1500")
        .minimumValue("1375")
        .maximumValue("1900")
        .units(Units::MeterPerSecond)
        .description("Water sound speed");

        param("Use Dynamic Sound Speed", m_args.sspeed_dyn)
        .defaultValue("false")
        .description("Update measurements according with measured sound speed");

        param("Sonar position", m_args.position)
        .defaultValue("1, 0, 0")
        .size(3)
        .description("Sonar position");

        param("Sonar orientation", m_args.orientation)
        .defaultValue("0, 0, 0")
        .size(3)
        .description("Sonar orientation");

        param("Filter Enabled", m_args.filter_enabled)
        .defaultValue("false")
        .description("Enable filtering the profile range using data points");

        param("Filter Median Elements", m_args.filter_median_size)
        .defaultValue("7")
        .units(Units::Meter)
        .description("Window size of the median filter");

        param("Filter Threshold", m_args.filter_threshold)
        .defaultValue("90")
        .description("Threshold value for range detection in filter");

        param("Pattern Filter Enabled", m_args.pattern_filter)
        .defaultValue("false")
        .description("Enable profile pattern filter");

        param("Pattern Filter Difference", m_args.pattern_diff)
        .defaultValue("0")
        .description("Pattern maximum difference");

        param(DTR_RT("Use Device at Surface"), m_args.activate_at_surface)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Enable to activate device when at surface");

        m_dist.validity = IMC::Distance::DV_VALID;

        // Filling constant Sonar Data.
        m_profile.type = IMC::SonarData::ST_ECHOSOUNDER;
        m_profile.frequency = c_frequency;
        m_profile.bits_per_point = 8;
        m_profile.scale_factor = 1.0f;

        bind<IMC::SoundSpeed>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::UamTxStatus>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        m_switch.setRange(m_args.range);
        m_switch.setStartGain(m_args.start_gain);
        m_switch.setPulseLength(m_args.pulse_length);
        m_switch.setProfileMinRange(m_args.profile_range);
        m_switch.setDataPoints(m_args.data_points);
        m_trigger.setSampleFrequency(m_args.sample_frequency);

        if (paramChanged(m_args.uart_dev) && (m_uart != NULL))
          throw RestartNeeded(DTR("restarting to change UART device"), 1);

        m_sound_speed = m_args.sspeed;

        if (paramChanged(m_args.orientation))
        {
          for (unsigned i = 0; i < m_args.orientation.size(); i++)
            m_args.orientation[i] = Math::Angles::radians(m_args.orientation[i]);
        }

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = m_args.orientation[0];
        ds.theta = m_args.orientation[1];
        ds.psi = m_args.orientation[2];
        m_dist.location.clear();
        m_dist.location.push_back(ds);

        IMC::BeamConfig bc;
        bc.beam_width = Math::Angles::radians(c_beam_width);
        bc.beam_height = Math::Angles::radians(c_beam_width);
        m_dist.beam_config.clear();
        m_dist.beam_config.push_back(bc);

        m_profile.beam_config.clear();
        m_profile.beam_config.push_back(bc);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev,
                                  c_uart_baud,
                                  SerialPort::SP_PARITY_NONE,
                                  SerialPort::SP_STOPBITS_1,
                                  SerialPort::SP_DATABITS_8,
                                  true);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        m_wdog.setTop(2.0);

        if (m_args.pattern_filter)
          m_pfilt = new PatternFilter(c_pattern_size, m_args.pattern_diff,
                                      c_pattern_samples, c_pattern_occurs);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_trigger.isRunning() || m_trigger.isStopping())
        {
          m_trigger.stopAndJoin();
        }

        Memory::clear(m_uart);
        Memory::clear(m_pfilt);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_trigger.setActive(isActive());
        m_trigger.setUART(m_uart);
        m_trigger.setSwitchData(m_switch.data(), m_switch.size());
        m_trigger.start();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        m_wdog.reset();
        m_trigger.setActive(true);
      }

      void
      onDeactivation(void)
      {
        if (m_hand.isKnown())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NO_MEDIUM_IDLE);

        m_trigger.setActive(false);
      }

      void
      consume(const IMC::UamTxStatus* msg)
      {
        m_uam_tx_ip = (msg->value == IMC::UamTxStatus::UTS_IP);
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value < 0.0)
          return;

        m_sound_speed = msg->value;
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        // Request activation.
        if ((m_hand.isWaterSurface() && m_args.activate_at_surface) ||
            m_hand.isUnderwater())
        {
          if (!isActive())
            requestActivation();
        }

        // Request deactivation.
        if (m_hand.outWater() || (m_hand.isWaterSurface() && !m_args.activate_at_surface))
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
      onMain(void)
      {
        uint8_t bfr[1024];

        while (!stopping())
        {
          if (!isActive())
          {
            waitForMessages(1.0);
            continue;
          }

          consumeMessages();

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->read(bfr, sizeof(bfr));
          if (rv == 0)
            continue;

          for (size_t i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(bfr[i]))
              continue;

            m_dist.validity = IMC::Distance::DV_VALID;

            m_dist.value = m_parser.getProfileRange();

            // If range is zero, there are no echoes.
            if (m_dist.value < c_min_range)
              m_dist.value = m_parser.getRange();

            // Filter using data points
            if (m_args.filter_enabled)
              filterRange(m_dist, m_profile);

            if (m_args.pattern_filter)
            {
              if (!m_pfilt->filterPattern(m_profile.data))
                m_dist.validity = IMC::Distance::DV_INVALID;
            }

            // Correct for dynamic sound speed.
            if (m_args.sspeed_dyn)
              m_dist.value = (m_dist.value * m_sound_speed) / c_sound_speed;

            // UAM is transmitting, data are probably garbled.
            if (!m_uam_tx_ip)
              dispatch(m_dist);

            if (m_parser.getDataPointsCount() > 0)
            {
              m_profile.setTimeStamp(m_dist.getTimeStamp());
              m_profile.min_range = static_cast<uint16_t>(m_switch.getProfileMinRange());
              m_profile.max_range = m_parser.getRange();
              dispatch(m_profile);
            }

            if (m_hand.isKnown())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            else
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NO_MEDIUM_ACTIVE);

            m_wdog.reset();
          }
        }
      }

      //! Filter profile range using information in data points
      //! @param[in,out] dist Distance message.
      //! @param[in,out] profile SonarData message.
      void
      filterRange(DUNE::IMC::Distance& dist, DUNE::IMC::SonarData& profile)
      {
        if (!profile.data.size())
          return;

        if (m_args.filter_median_size > profile.data.size())
          return;

        std::vector<char> temp(profile.data);
        bool detected = false;

        for (unsigned i = 0; i < temp.size(); ++i)
        {
          if (i <= m_args.filter_median_size / 2)
          {
            profile.data[i] = median(&temp[0], m_args.filter_median_size);
          }
          else if (i >= profile.data.size() - m_args.filter_median_size / 2)
          {
            profile.data[i] = median(&temp[profile.data.size() - m_args.filter_median_size],
                                     m_args.filter_median_size);
          }
          else
          {
            profile.data[i] = median(&temp[i - m_args.filter_median_size / 2],
                                     m_args.filter_median_size);
          }

          if ((profile.data[i] > (float)m_args.filter_threshold) && !detected)
          {
            dist.value = (float)m_switch.getRange() * i / m_args.data_points;
            detected = true;
          }
        }

        if (!detected)
          dist.value = m_switch.getRange();
      }
    };
  }
}

DUNE_TASK
