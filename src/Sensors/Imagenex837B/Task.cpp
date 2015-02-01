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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Frame.hpp"

namespace Sensors
{
  //! Device driver for the Imagenex 837B “Delta T” Multibeam
  //! Profiling Sonar.
  //!
  //! The Model 837 DeltaT is an advanced high-speed, high-resolution
  //! multibeam sonar system that has been designed to provide
  //! simple, reliable, and accurate representation of underwater images.
  //!
  //! This device driver is capable of controlling the following
  //! parameters:
  //!  - <em>Range</em>: Range of the multibeam. Unit is meter,
  //!    the default value is 30, and the domain is {5, 10, 20,
  //!    30, 40, 50, 60, 80, 100}
  //!  - <em>Start Gain</em>: Unit is Decibel, the default value
  //!  - is 3 and the domain is {0, 1, 2, ..., 20}.
  //!  - <em>Absorption</em>: Unit is Decibel per meter, the
  //!    default value is 0.1 and the domain is [0.00, 2.55]
  //!  - <em>Data Points</em>: Number of sonar return data points
  //!     -# <em>8</em>: 8000 data points are returned by the head
  //!     -# <em>16</em>: 16000 data points are returned by the head
  //!  - <em>Switch Delay</em>: The head can be commanded to pause
  //!    before sending its return data to allow the commanding
  //!    program enough time to setup for the return of the data.
  //!    Unit is millisecond, default value is 0 and the domain is
  //!    [0, 500].
  //!    <em>Auto Gain</em>: Auto Gain, set to 1 to enable Automatic
  //!    Gain Control. If the sonar head transducer is pointing at an
  //!    angle other than straight down, the mounting angle and/or
  //!    the roll angle must be loaded into Nadir Offset Angle
  //!    An Automatic Gain Control threshold value must also be loaded.
  //!  - <em>Automatic Gain Control</em>: When using Automatic Gain
  //!    Control, this number is used as a set point for adjusting
  //!    the internal hardware gain. For strong bottom returns, use
  //!    a low threshold value. For weak bottom returns, use a high
  //!    threshold value. A value of 120 is a typical threshold value
  //!    for a sandy bottom. Unitless, the default value is 120 and the
  //!    domain is [10, 250]
  //!  - <em>Nadir Offset Angle</em>: When using Automatic Gain Control,
  //!    the sonar head must know if there is a physical mounting offset
  //!    and/or a roll angle present.
  //!
  //! This driver will output raw data from the sonar for each measurement.
  //!
  //! @author José Braga
  namespace Imagenex837B
  {
    using DUNE_NAMESPACES;

    //! Necessary bytes for switch data command.
    enum Index
    {
      // Range index.
      SD_RANGE = 3,
      // Nadir Offset Angle High Byte index.
      SD_NADIR_HI = 5,
      // Nadir Offset Angle Low Byte index.
      SD_NADIR_LO = 6,
      // Start Gain index.
      SD_START_GAIN = 8,
      // Absorption index.
      SD_ABSORPTION = 10,
      // Automatic Gain Control Threshold index.
      SD_AGC_THRESHOLD = 11,
      // Packet Number index.
      SD_PACKET_NUM = 13,
      // Pulse length index.
      SD_PULSE_LEN = 14,
      // Data points index.
      SD_DATA_POINTS = 19,
      // Run Mode index.
      SD_RUN_MODE = 22,
      // Switch Delay index.
      SD_SWITCH_DELAY = 24,
      // Frequency index.
      SD_FREQUENCY = 25
    };

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
      //! TCP port.
      unsigned port;
      //! Start gain.
      unsigned start_gain;
      //! Absorption.
      float absorption;
      //! Data points.
      unsigned data_points;
      //! Switch delay.
      unsigned switch_delay;
      //! Default range.
      unsigned def_range;
      //! Nadir Offset Angle.
      float nadir;
      //! Auto gain mode.
      bool auto_gain;
      //! Automatic gain control threshold.
      unsigned auto_gain_value;
      //! Profile Tilt Angle.
      float tilt_angle;
      //! Transducer mounting position.
      bool xdcr;
      //! Save data in 837 format.
      bool save_to_file;
      //! Save data in 837 format.
      bool fill_state;
      // Power channel name.
      std::string power_channel;
      //! Range Modifier.
      bool range_modifier;
      //! Range Modifier Additive Constant.
      float range_modifier_add_k;
      //! Range Modifier Multiplicative Constant.
      float range_modifier_mul_k;
      //! Range Modifier Timer.
      float range_modifier_timer;
      //! Distance between GPS (navigation origin) and device.
      float offset;
      //! 837 file name.
      std::string file_name_837;
    };

    //! List of available ranges.
    static const unsigned c_ranges[] = {5, 10, 20, 30, 40, 50, 60, 80, 100};
    //! Count of available ranges.
    static const unsigned c_ranges_size = sizeof(c_ranges) / sizeof(c_ranges[0]);
    //! List of repetition rates in ms.
    static const unsigned c_rep_rate[] = {67, 73, 87, 100, 114, 128, 140, 167, 195};
    //! List of pulse lengths in us.
    static const unsigned c_pulse_len[] = {30, 60, 120, 180, 240, 300, 360, 480, 600};
    //! Switch data size.
    static const int c_sdata_size = 27;
    //! Return data header size.
    static const int c_rdata_hdr_size = 32;
    //! Return data payload size.
    static const int c_rdata_dat_size = 1000;
    //! Return data footer size.
    static const int c_rdata_ftr_size = 1;
    //! Delta T operating frequency.
    static const uint32_t c_freq = 260000;
    //! Delta T beam width.
    static const float c_beam_width = 3.0;
    //! Delta T beam height.
    static const float c_beam_height = 120.0;
    //! Minimum altitude for dynamic range modifier.
    static const float c_min_alt = 0.3;

    //! %Task.
    struct Task: public Tasks::Periodic
    {
      //! TCP socket.
      TCPSocket* m_sock;
      //! 837 Frame.
      Frame m_frame;
      //! Output switch data.
      uint8_t m_sdata[c_sdata_size];
      //! Header Return data.
      uint8_t m_rdata_hdr[c_rdata_hdr_size];
      //! Footer Return data.
      uint8_t m_rdata_ftr[c_rdata_ftr_size];
      //! Single sidescan ping.
      IMC::SonarData m_ping;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Log file.
      std::ofstream m_log_file;
      //! Log filename
      Path m_log_path;
      //! Power channel control.
      IMC::PowerChannelControl m_power_channel_control;
      //! Activation/deactivation timer.
      Counter<double> m_countdown;
      //! Range adaptive modifier counter.
      Counter<double> m_range_counter;
      //! Configuration parameters.
      Arguments m_args;

      //! Constructor.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_sock(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.0.2")
        .description("IP address of the sonar");

        param("TCP Port", m_args.port)
        .defaultValue("4040")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP port");

        param("Start Gain", m_args.start_gain)
        .defaultValue("3")
        .units(Units::Decibel)
        .minimumValue("0")
        .maximumValue("20")
        .description("Start gain");

        param("Absorption", m_args.absorption)
        .defaultValue("0.1")
        .units(Units::DecibelPerMeter)
        .minimumValue("0")
        .maximumValue("2.55")
        .description("Absorption");

        param("Data Points", m_args.data_points)
        .defaultValue("8000")
        .values("8000, 16000")
        .description("Number of sonar return data points");

        param("Switch Delay", m_args.switch_delay)
        .defaultValue("0")
        .units(Units::Millisecond)
        .minimumValue("0")
        .maximumValue("500")
        .description("The head can be commanded to pause before sending"
                     "its return data to allow the commanding program"
                     "enough time to setup for the return of the data.");

        param(DTR_RT("Range"), m_args.def_range)
        .defaultValue("30")
        .values("5, 10, 20, 30, 40, 50, 60, 80, 100")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Meter)
        .description("Operating range");

        param("Nadir Offset Angle", m_args.nadir)
        .defaultValue("0.0")
        .units(Units::Degree)
        .minimumValue("-360")
        .maximumValue("360")
        .description("When using Automatic Gain Control (Byte 22, Bit 4)"
                     "the sonar head must know if there is a physical"
                     "mounting offset and/or a roll angle present.");

        param("Auto Gain Mode", m_args.auto_gain)
        .defaultValue("true")
        .description("Auto Gain, set to 1 to enable Automatic Gain Control."
                     "If the sonar head transducer is pointing at an angle "
                     "other than straight down, the mounting angle and/or "
                     "the roll angle must be loaded into Nadir Offset Angle"
                     "(see description for Bytes 5-6). An AGC Threshold"
                     "value must also be loaded into Byte 11.");

        param("Automatic Gain Control", m_args.auto_gain_value)
        .defaultValue("120")
        .minimumValue("10")
        .maximumValue("250")
        .description("Set point for adjusting the internal hardware gain."
                     "For strong bottom returns, use a low threshold value."
                     "For weak bottom returns, use a high threshold value."
                     "A value of 120 is a typical threshold value for a sandy bottom.");

        param("Profile Tilt Angle", m_args.tilt_angle)
        .defaultValue("0.0")
        .minimumValue("-30.0")
        .maximumValue("30.0")
        .units(Units::Degree)
        .description("Mounting offset");

        param("Connector Pointing Aft", m_args.xdcr)
        .defaultValue("true")
        .description("Mounting position of the multibeam");

        param("Save Data in 837 Format", m_args.save_to_file)
        .defaultValue("true")
        .description("Save multibeam in Imagenex proprietary 837 format");

        param("Fill State in 837 Format", m_args.fill_state)
        .defaultValue("true")
        .description("Fill state data in Imagenex proprietary 837 format");

        param("837 File Name", m_args.file_name_837)
        .defaultValue("Data.837")
        .description("837 file name");

        param("Power Channel", m_args.power_channel)
        .defaultValue("Multibeam")
        .description("Power channel that controls the power of the device");

        param("Adaptive Range Modifier", m_args.range_modifier)
        .defaultValue("true")
        .description("Adaptive Multibeam range modifier");

        param("Adaptive Range Modifier Additive Constant", m_args.range_modifier_add_k)
        .defaultValue("0")
        .minimumValue("0")
        .description("Adaptive Multibeam range modifier additive constant");

        param("Adaptive Range Modifier Multiplicative Constant", m_args.range_modifier_mul_k)
        .defaultValue("2")
        .minimumValue("1")
        .maximumValue("3")
        .description("Adaptive Multibeam range modifier multiplicative constant");

        param("Adaptive Range Modifier Timer", m_args.range_modifier_timer)
        .defaultValue("10")
        .minimumValue("0")
        .description("Adaptive Multibeam range modifier timer");

        param("X-Axis Distance to GPS", m_args.offset)
        .defaultValue("0")
        .units(Units::Meter)
        .description("Position of the Multibeam relative to the GPS antenna in the x-axis of the body frame");

        // Initialize switch data.
        std::memset(m_sdata, 0, sizeof(m_sdata));
        m_sdata[0] = 0xfe;
        m_sdata[1] = 0x44;
        m_sdata[2] = 0x10;
        m_sdata[9] = 0x01;
        m_sdata[20] = 0x08;
        m_sdata[26] = 0xfd;

        IMC::BeamConfig bc;
        bc.beam_width = Math::Angles::radians(c_beam_width);
        bc.beam_height = Math::Angles::radians(c_beam_height);
        m_ping.beam_config.clear();
        m_ping.beam_config.push_back(bc);

        // Initialize return data.
        m_ping.type = IMC::SonarData::ST_MULTIBEAM;
        m_ping.bits_per_point = 8;
        m_ping.scale_factor = 1.0f;
        m_ping.min_range = 0;

        setFrequency();

        // Register consumers.
        bind<IMC::LoggingControl>(this);
        bind<IMC::SoundSpeed>(this);
      }

      //! Update task parameters.
      void
      onUpdateParameters(void)
      {
        if (isActive())
        {
          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port))
            throw RestartNeeded(DTR("restarting to change TCP port"), 1);
        }

        if (paramChanged(m_args.data_points))
        {
          m_args.data_points /= 1000;
          m_ping.data.resize(c_rdata_dat_size * m_args.data_points);
        }

        setRange(m_args.def_range);
        setStartGain(m_args.start_gain);
        setSwitchDelay(m_args.switch_delay);
        setAbsorption((unsigned)(m_args.absorption * 100));
        setDataPoints(m_args.data_points);

        m_frame.setProfileTiltAngle(m_args.tilt_angle);

        if (m_args.auto_gain)
        {
          setAutoMode(true);
          setNadirAngle(m_args.nadir);
          setAutoGainValue(m_args.auto_gain_value);
        }
        else
        {
          setAutoMode(false);
        }

        m_power_channel_control.name = m_args.power_channel;

        m_countdown.setTop(getActivationTime());

        if (paramChanged(m_args.range_modifier_timer))
          m_range_counter.setTop(m_args.range_modifier_timer);

        if (m_args.fill_state || m_args.range_modifier)
          bind<IMC::EstimatedState>(this);
      }

      void
      onResourceInitialization(void)
      {
        requestDeactivation();
        closeLog();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceRelease(void)
      {
        requestDeactivation();
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

        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(lc);
      }

      void
      onDeactivation(void)
      {
        closeLog();

        Memory::clear(m_sock);

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
          m_sock = new TCPSocket;
          m_sock->setNoDelay(true);
          m_sock->connect(m_args.addr, m_args.port);

          activate();
          debug("activation took %0.2f s", getActivationTime() -
                m_countdown.getRemaining());
        }
        catch (...)
        { }
      }

      void
      openLog(const Path& path)
      {
        if (path == m_log_path)
          return;

        closeLog();

        m_log_path = path;
        m_log_file.open(m_log_path.c_str(), std::ofstream::app | std::ios::binary);
        debug("opening %s", m_log_path.c_str());
      }

      void
      closeLog(void)
      {
        if (m_log_file.is_open())
        {
          m_log_file.close();
          int64_t size = m_log_path.size();
          if (size == 0)
          {
            debug("removing empty log '%s'", m_log_path.c_str());
            m_log_path.remove();
          }
          m_log_path = Path();
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (!m_args.save_to_file)
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
          case IMC::LoggingControl::COP_CURRENT_NAME:
            openLog(m_ctx.dir_log / msg->name / m_args.file_name_837);
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        // Do not use invalid readings.
        if (msg->value < 0)
          return;

        m_frame.setSoundVelocity(msg->value);
      }

      //! Get index from table according with given value.
      //! @param[in] value value to be checked in the table.
      //! @param[in] table vector with parameters.
      //! @param[in] table_size size of the vector.
      //! @return index of the vector.
      unsigned
      getIndex(unsigned value, const unsigned* table, unsigned table_size)
      {
        for (unsigned i = 0; i < table_size; ++i)
        {
          if (value <= table[i])
            return i;
        }

        return table_size - 1;
      }

      //! Define switch command data frequency value.
      void
      setFrequency(void)
      {
        m_sdata[SD_FREQUENCY] = (uint8_t)86;
        m_ping.frequency = c_freq;
      }

      //! Define switch command data range.
      //! @param[in] value range.
      void
      setRange(unsigned value)
      {
        unsigned idx = getIndex(value, c_ranges, c_ranges_size);

        m_sdata[SD_RANGE] = (uint8_t)c_ranges[idx];
        m_sdata[SD_PULSE_LEN] = (uint8_t)(c_pulse_len[idx] / 10);

        m_frame.setRange((uint8_t)c_ranges[idx]);
        m_frame.setPulseLength((uint8_t)(c_pulse_len[idx] / 10));

        m_ping.max_range = c_ranges[idx];
        Periodic::setFrequency(1.0 / (c_rep_rate[idx] / 1000.0));
        m_frame.setRepRate((uint16_t)c_rep_rate[idx]);
      }

      //! Define switch command data start gain.
      //! @param[in] value start gain.
      void
      setStartGain(unsigned value)
      {
        m_sdata[SD_START_GAIN] = (uint8_t) Math::trimValue(value, 0u, 20u);
        m_frame.setStartGain(value);
      }

      //! Define switch command data switch delay.
      //! @param[in] value switch delay.
      void
      setSwitchDelay(unsigned value)
      {
        m_sdata[SD_SWITCH_DELAY] = (uint8_t) (Math::trimValue(value, 0u, 500u) / 2);
      }

      //! Define switch command data absorption value.
      //! @param[in] value absorption value.
      void
      setAbsorption(unsigned value)
      {
        m_sdata[SD_ABSORPTION] = (uint8_t) Math::trimValue(value, 0u, 255u);
      }

      //! Define switch command data number of data points.
      //! @param[in] value number of data points.
      void
      setDataPoints(unsigned value)
      {
        m_sdata[SD_DATA_POINTS] = (uint8_t)value;

        if (value == 16)
          m_frame.setExtendedDataPoints(true);
        if (value == 8)
          m_frame.setExtendedDataPoints(false);
      }

      //! Define switch command data auto mode.
      void
      setAutoMode(bool auto_mode)
      {
        if (auto_mode)
          m_sdata[SD_RUN_MODE] |= 0x10;
        else
          m_sdata[SD_RUN_MODE] &= 0xEF;
      }

      //! Define switch command data number nadir angle.
      //! @param[in] angle nadir angle.
      void
      setNadirAngle(float angle)
      {
        if (m_args.xdcr)
          angle = -angle;

        if (angle < 0.0)
          angle += 360.0;

        uint16_t value = (uint16_t)(angle / 360 * 65536);

        m_sdata[SD_NADIR_HI] = (uint8_t)((value & 0xff00) >> 8);
        m_sdata[SD_NADIR_LO] = (uint8_t)(value & 0x00ff);

        m_frame.setDisplayMode(m_args.xdcr);
      }

      //! Define switch command data auto gain threshold.
      //! @param[in] value auto gain threshold.
      void
      setAutoGainValue(unsigned value)
      {
        m_sdata[SD_AGC_THRESHOLD] = (uint8_t)value;
      }

      //! Request device to ping.
      //! @param[in] data_point data index.
      void
      ping(unsigned data_point)
      {
        m_sdata[SD_PACKET_NUM] = (uint8_t)data_point;
        m_sock->write((char*)m_sdata, c_sdata_size);

        int rv = m_sock->read((char*)m_rdata_hdr, c_rdata_hdr_size);
        if (rv != c_rdata_hdr_size)
          throw std::runtime_error(DTR("failed to read header"));

        unsigned dat_idx = data_point * c_rdata_dat_size;

        if (m_args.save_to_file)
          rv = m_sock->read((char*)(m_frame.getMessageData() + dat_idx), c_rdata_dat_size);
        else
          rv = m_sock->read(&m_ping.data[dat_idx], c_rdata_dat_size);

        if (rv != c_rdata_dat_size)
          throw std::runtime_error(DTR("failed to read data"));

        rv = m_sock->read((char*)m_rdata_ftr, c_rdata_ftr_size);
        if (rv != c_rdata_ftr_size)
          throw std::runtime_error(DTR("failed to read footer"));

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Handle sonar data to 837 file format.
      void
      handleSonarData(void)
      {
        // Update information.
        updateState();
        m_frame.setDateTime(Clock::getSinceEpochMsec());
        m_frame.setSerialStatus(m_rdata_hdr[4]);
        m_frame.setFirmwareVersion(m_rdata_hdr[6]);

        if (m_log_file.is_open())
          m_log_file.write((const char*)m_frame.getData(), m_frame.getSize());
      }

      //! Update vehicle state in 837 files.
      void
      updateState(void)
      {
        setNadirAngle(m_args.nadir + Angles::degrees(m_estate.phi));

        if (!m_args.fill_state)
          return;

        double lat, lon;
        Coordinates::toWGS84(m_estate, lat, lon);

        // Do not correct if offset is null.
        if (std::fabs(m_args.offset) > 0)
        {
          double x = m_args.offset * std::cos(m_estate.psi);
          double y = m_args.offset * std::sin(m_estate.psi);
          Coordinates::WGS84::displace(x, y, &lat, &lon);
        }

        m_frame.setGpsData(lat, lon);
        m_frame.setSpeed(m_estate.u);
        m_frame.setCourse(m_estate.psi);
        m_frame.setRoll(m_estate.phi);
        m_frame.setPitch(m_estate.theta);
        m_frame.setHeading(m_estate.psi);
      }

      //! Check current water column.
      void
      checkAltitude(void)
      {
        if (m_estate.alt > c_min_alt)
          setRange((unsigned)(m_estate.alt * m_args.range_modifier_mul_k + m_args.range_modifier_add_k));
      }

      void
      task(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (isActive() && (m_sock != NULL))
          {
            try
            {
              for (unsigned i = 0; i < m_args.data_points; ++i)
                ping(i);

              if (m_args.save_to_file)
                handleSonarData();
              else
                dispatch(m_ping);

              if (m_args.range_modifier)
              {
                if (m_range_counter.overflow())
                {
                  checkAltitude();
                  m_range_counter.reset();
                }
              }
            }
            catch (std::exception& e)
            {
              err("%s", e.what());
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
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
