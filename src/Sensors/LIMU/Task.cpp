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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "ErrorHandling.hpp"

namespace Sensors
{
  namespace LIMU
  {
    using DUNE_NAMESPACES;

    //! Serial port baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Number of axes.
    static const unsigned c_axes_count = 3;
    //! Power-up delay (s).
    static const double c_power_up_delay = 2.0;
    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";
    //! Hard Iron calibration date.
    static const std::string c_calib_time_param = "Last Calibration Time";

    //! Packet identifiers.
    enum PacketIds
    {
      //! Sample data.
      PKT_ID_OUTPUT_DATA  = 1,
      //! Continuous output configuration.
      PKT_ID_OUTPUT_CONF  = 2,
      //! Run self-test.
      PKT_ID_SELF_TEST    = 3,
      //! Hard-iron calibration parameters.
      PKT_ID_HARD_IRON    = 4,
      //! Raw sample data.
      PKT_ID_OUTPUT_RAW   = 5
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Output frequency.
      unsigned output_frq;
      //! Raw data output.
      bool raw_data;
      //! Power channel name.
      std::string pwr_name;
      //! Hard-iron correction factors.
      std::vector<double> hard_iron;
      //! Rotation matrix values.
      std::vector<double> rotation_mx;
      //! Number of seconds without data before reporting an error.
      double timeout_error;
      //! Number of seconds without data before
      //! reporting a failure and restarting.
      double timeout_failure;
      //! Calibration time stamp
      std::string calib_time;
    };

    struct Task: public Tasks::Task
    {
      //! Angular velocity.
      IMC::AngularVelocity m_ang_vel;
      //! Acceleration.
      IMC::Acceleration m_accel;
      //! Delta angles.
      IMC::EulerAnglesDelta m_delt_ang;
      //! Delta velocity.
      IMC::VelocityDelta m_delt_vel;
      //! Euler Angles.
      IMC::EulerAngles m_euler;
      //! Magnetic Field.
      IMC::MagneticField m_magn;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Serial port device.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! UCTK parser.
      UCTK::Parser m_parser;
      //! Scratch frame.
      UCTK::Frame m_frame;
      //! Scratch buffer.
      uint8_t m_buffer[128];
      //! Compass Calibration maneuver entity id.
      unsigned m_calib_eid;
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Entity state timer.
      Counter<double> m_state_timer;
      //! Error counts.
      ErrorCounts m_err_counts;
      //! Rotated hard-iron calibration parameters.
      double m_hard_iron[c_axes_count];
      //! Sample count.
      size_t m_sample_count;
      //! Faults count.
      size_t m_faults_count;
      //! Timeout count.
      size_t m_timeout_count;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_ctl(NULL),
        m_state_timer(1.0),
        m_sample_count(0),
        m_faults_count(0),
        m_timeout_count(0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Power Channel - Name", m_args.pwr_name)
        .defaultValue("")
        .description("Name of the power channel");

        param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_axes_count)
        .description("Hard-Iron calibration parameters");

        param("Output Frequency", m_args.output_frq)
        .units(Units::Hertz)
        .minimumValue("1")
        .maximumValue("127")
        .defaultValue("100")
        .description("Output frequency");

        param("Raw Data", m_args.raw_data)
        .defaultValue("false")
        .description("Set to true to enable raw data output");

        param("Rotation Matrix", m_args.rotation_mx)
        .defaultValue("1, 0, 0, 0, 1, 0, 0, 0, 1")
        .size(9)
        .description("Rotation matrix which is dependent of the mounting position");

        param("Timeout - Error", m_args.timeout_error)
        .defaultValue("3.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Timeout - Failure", m_args.timeout_failure)
        .defaultValue("6.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before restarting task");

        param(c_calib_time_param, m_args.calib_time)
        .description("Date of last successful calibration")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("N/A");

        bind<IMC::MagneticField>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_rotation.fill(c_axes_count, c_axes_count, &m_args.rotation_mx[0]);

        // Rotate calibration parameters.
        Math::Matrix data(c_axes_count, 1);
        for (unsigned i = 0; i < c_axes_count; i++)
          data(i) = m_args.hard_iron[i];
        data = transpose(m_rotation) * data;
        for (unsigned i = 0; i < c_axes_count; i++)
          m_hard_iron[i] = data(i);

        if (paramChanged(m_args.timeout_error))
          m_wdog.setTop(m_args.timeout_error);

        if (paramChanged(m_args.hard_iron) || paramChanged(m_args.rotation_mx))
          setHardIronFactors();

        if (paramChanged(m_args.output_frq) || paramChanged(m_args.raw_data))
          setOutputFrequency(m_args.output_frq);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        if (!m_args.pwr_name.empty())
        {
          IMC::PowerChannelControl pcc;
          pcc.name = m_args.pwr_name;
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(pcc);
          Delay::wait(c_power_up_delay);
        }

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
          m_ctl = new UCTK::Interface(m_uart);
          UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(DTR(e.what()), 5.0, false);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_ctl);
        Memory::clear(m_uart);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        setHardIronFactors();
        setOutputFrequency(m_args.output_frq);
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        if (getEntityId() != msg->getDestinationEntity())
          return;

        double hi_x = m_args.hard_iron[0] - msg->x;
        double hi_y = m_args.hard_iron[1] - msg->y;

        IMC::EntityParameter hip;
        hip.name = c_hard_iron_param;
        hip.value = String::str("%.4f, %.4f, 0.0", hi_x, hi_y);

        IMC::EntityParameter calt;
        Time::BrokenDown bdt(Time::Clock::getSinceEpochMsec() / 1000);
        calt.name = c_calib_time_param;
        calt.value = String::str("%04u-%02u-%02u %02u:%02u", bdt.year, bdt.month,
                                 bdt.day, bdt.hour, bdt.minutes);

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        np.params.push_back(calt);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      //! Define sensor output frequency.
      //! @param[in] frequency desired frequency.
      //! @return true if successful, false otherwise.
      void
      setOutputFrequency(uint8_t frequency)
      {
        if (m_ctl == NULL)
          return;

        if (m_args.raw_data)
          frequency |= 0x80;

        UCTK::Frame frame;
        frame.setId(PKT_ID_OUTPUT_CONF);
        frame.setPayloadSize(1);
        frame.set(frequency, 0);

        if (!m_ctl->sendFrame(frame))
          throw RestartNeeded(DTR("failed to configure output frequency"), 5);
      }

      //! Get current Hard-Iron calibration parameters.
      void
      getHardIronFactors(void)
      {
        if (m_ctl == NULL)
          return;

        UCTK::Frame frame;
        frame.setId(PKT_ID_HARD_IRON);
        if (m_ctl->sendFrame(frame))
        {
          if (frame.getPayloadSize() != (c_axes_count * 2))
            throw std::runtime_error(String::str("invalid hard iron size: %u", frame.getPayloadSize()));

          int16_t tmp = 0;
          for (unsigned i = 0; i < c_axes_count; ++i)
          {
            frame.get(tmp, i * 2);
            m_hard_iron[i] = tmp / 10e3;
          }
        }
        else
        {
          throw std::runtime_error("failed to retrieve hard-iron factors");
        }
      }

      //! Set Hard-Iron calibration parameters.
      void
      setHardIronFactors(void)
      {
        if (m_ctl == NULL)
          return;

        double factors[c_axes_count];
        factors[0] = m_hard_iron[0];
        factors[1] = m_hard_iron[1];
        factors[2] = m_hard_iron[2];

        getHardIronFactors();
        if ((std::fabs(factors[0] - m_hard_iron[0]) < 1e-3) &&
            (std::fabs(factors[1] - m_hard_iron[1]) < 1e-3) &&
            (std::fabs(factors[2] - m_hard_iron[2]) < 1e-3))
        {
          spew("no change in hard-iron parameters");
          return;
        }

        UCTK::Frame frame;
        frame.setId(PKT_ID_HARD_IRON);
        frame.setPayloadSize(c_axes_count * 2);
        for (unsigned i = 0; i < c_axes_count; ++i)
          frame.set<int16_t>(static_cast<int16_t>(factors[i] * 10e3), i * 2);

        if (!m_ctl->sendFrame(frame))
          throw RestartNeeded(DTR("failed to set hard-iron correction factors"), 5);

        inf(DTR("new hard-iron calibration parameters: %.4f, %.4f, 0.0"),
            m_args.hard_iron[0],
            m_args.hard_iron[1]);
      }

      //! Decode output data frame.
      //! @param[in] frame data frame.
      void
      decodeOutputData(const UCTK::Frame& frame)
      {
        double imc_tstamp = Clock::getSinceEpoch();
        float tmp = 0;
        uint16_t tmp_u16 = 0;
        Math::Matrix data(c_axes_count, 1);
        const uint8_t* ptr = frame.getPayload();

        // Timestamp.
        ptr += ByteCopy::fromLE(tmp_u16, ptr);
        double dev_tstamp = tmp_u16 / 1024.0;

        // Angular Velocity.
        ptr += extractRotatedVector(ptr, data);
        m_ang_vel.setTimeStamp(imc_tstamp);
        m_ang_vel.x = Angles::radians(data(0));
        m_ang_vel.y = Angles::radians(data(1));
        m_ang_vel.z = Angles::radians(data(2));
        m_ang_vel.time = dev_tstamp;
        dispatch(m_ang_vel, DF_KEEP_TIME);

        // Acceleration.
        ptr += extractRotatedVector(ptr, data);
        m_accel.setTimeStamp(imc_tstamp);
        m_accel.x = data(0);
        m_accel.y = data(1);
        m_accel.z = data(2);
        m_accel.time = dev_tstamp;
        dispatch(m_accel, DF_KEEP_TIME);

        // Delta Angles.
        ptr += extractRotatedVector(ptr, data);
        m_delt_ang.setTimeStamp(imc_tstamp);
        m_delt_ang.x = Angles::radians(data(0));
        m_delt_ang.y = Angles::radians(data(1));
        m_delt_ang.z = Angles::radians(data(2));
        m_delt_ang.time = dev_tstamp;
        dispatch(m_delt_ang, DF_KEEP_TIME);

        // Delta Velocity.
        ptr += extractRotatedVector(ptr, data);
        m_delt_vel.setTimeStamp(imc_tstamp);
        m_delt_vel.x = data(0);
        m_delt_vel.y = data(1);
        m_delt_vel.z = data(2);
        m_delt_vel.time = dev_tstamp;
        dispatch(m_delt_vel, DF_KEEP_TIME);

        // Magnetic Field.
        ptr += extractRotatedVector(ptr, data);
        m_magn.setTimeStamp(imc_tstamp);
        m_magn.x = data(0);
        m_magn.y = data(1);
        m_magn.z = data(2);
        m_magn.time = dev_tstamp;
        dispatch(m_magn, DF_KEEP_TIME);

        // Euler Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        data(0) = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        data(1) = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        data(2) = tmp;

        Matrix r(c_axes_count, c_axes_count);
        r = data.toDCM() * transpose(m_rotation);

        m_euler.setTimeStamp(imc_tstamp);
        m_euler.phi = std::atan2(r(2, 1), r(2, 2));
        m_euler.theta = std::asin(-r(2, 0));
        m_euler.psi = std::atan2(r(1, 0), r(0, 0));
        m_euler.psi_magnetic = m_euler.psi;
        m_euler.time = dev_tstamp;
        dispatch(m_euler, DF_KEEP_TIME);

        // Temperature.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_temp.value = tmp;
        m_temp.setTimeStamp(imc_tstamp);
        dispatch(m_temp, DF_KEEP_TIME);

        // Error flags.
        ptr += ByteCopy::fromLE(tmp_u16, ptr);

        if (tmp_u16 & ERR_FLAG_WDOG_TOUT)
          m_err_counts.increment(ERR_FLAG_WDOG_TOUT);

        if (tmp_u16 & ERR_FLAG_PROC_OVR)
          m_err_counts.increment(ERR_FLAG_PROC_OVR);

        if (tmp_u16 & ERR_FLAG_SENS_OVR)
          m_err_counts.increment(ERR_FLAG_SENS_OVR);

        if (tmp_u16 & ERR_FLAG_SPI_ERR)
          m_err_counts.increment(ERR_FLAG_SPI_ERR);

        m_wdog.reset();
        m_sample_count++;
      }

      //! Decode output raw data.
      //! @param[in] frame raw data.
      void
      decodeOutputRaw(const UCTK::Frame& frame)
      {
        IMC::DevDataBinary data;
        data.value.assign(frame.getPayload(), frame.getPayload() + frame.getPayloadSize());
        dispatch(data);
      }

      //! Decode data frame.
      //! @param[in] frame data frame.
      void
      decode(const UCTK::Frame& frame)
      {
        switch (frame.getId())
        {
          case PKT_ID_OUTPUT_DATA:
            decodeOutputData(frame);
            break;

          case PKT_ID_OUTPUT_RAW:
            decodeOutputRaw(frame);
            break;

          default:
            break;
        }
      }

      //! Read input from sensor.
      void
      readInput(void)
      {
        size_t rv = m_uart->read(m_buffer, sizeof(m_buffer));
        for (size_t i = 0; i < rv; ++i)
        {
          if (m_parser.parse(m_buffer[i], m_frame))
            decode(m_frame);
        }
      }

      uint8_t
      extractRotatedVector(const uint8_t* ptr, Matrix& vector)
      {
        float raw = 0;
        ptr += ByteCopy::fromLE(raw, ptr);
        vector(0) = raw;
        ptr += ByteCopy::fromLE(raw, ptr);
        vector(1) = raw;
        ptr += ByteCopy::fromLE(raw, ptr);
        vector(2) = raw;
        vector = m_rotation * vector;
        return (uint8_t)(c_axes_count * sizeof(float));
      }

      void
      reportEntityState(void)
      {
        if (m_wdog.overflow())
        {
          if (getEntityState() == IMC::EntityState::ESTA_NORMAL)
            m_faults_count++;

          std::string text = String::str(DTR("%0.1f seconds without valid data"),
                                         m_wdog.getElapsed());

          if (m_wdog.getElapsed() >= m_args.timeout_failure)
            throw RestartNeeded(text, 0);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, text);

          return;
        }

        if (!m_state_timer.overflow())
          return;

        double time_elapsed = m_state_timer.getElapsed();
        double frequency = Math::round(m_sample_count / time_elapsed);

        std::string text = String::str(DTR("active | timeouts: %u | faults: %u | frequency: %u"),
                                       m_timeout_count,
                                       m_faults_count,
                                       (unsigned)frequency);

        setEntityState(IMC::EntityState::ESTA_NORMAL, text);
        m_state_timer.reset();
        m_sample_count = 0;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (Poll::poll(*m_uart, 1.0))
            readInput();
          else
            m_timeout_count++;

          reportEntityState();
        }
      }
    };
  }
}

DUNE_TASK
