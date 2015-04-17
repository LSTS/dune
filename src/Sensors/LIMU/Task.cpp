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
    //! Number of hard-iron correction factors.
    static const unsigned c_hard_iron_count = 3;
    //! Power-up delay (s).
    static const double c_power_up_delay = 2.0;
    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";

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
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
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
      //! Watchdog.
      Counter<double> m_wdog;
      //! Error counts.
      ErrorCounts m_err_counts;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_ctl(NULL)
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
        .size(c_hard_iron_count)
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

        bind<IMC::MagneticField>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (m_ctl == NULL)
          return;

        if (paramChanged(m_args.hard_iron))
          setHardIronFactors(m_args.hard_iron);

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
        setHardIronFactors(m_args.hard_iron);
        setOutputFrequency(m_args.output_frq);
        m_wdog.setTop(2.0);
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

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
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
      //! @return hard-iron calibration parameters.
      std::vector<double>
      getHardIronFactors(void)
      {
        std::vector<double> factors;

        UCTK::Frame frame;
        frame.setId(PKT_ID_HARD_IRON);
        if (m_ctl->sendFrame(frame))
        {
          int16_t tmp = 0;
          for (unsigned i = 0; i < c_hard_iron_count; ++i)
          {
            frame.get(tmp, i * 2);
            factors.push_back(tmp / 10e3);
          }
        }

        return factors;
      }

      //! Set Hard-Iron calibration parameters.
      //! @param[in] factors new calibration values.
      void
      setHardIronFactors(const std::vector<double>& factors)
      {
        spew("setting hard-iron parameters to %.4f, %.4f, %.4f",
             factors[0],
             factors[1],
             factors[2]);

        std::vector<double> old = getHardIronFactors();
        if ((factors[0] == old[0]) && (factors[1] == old[1]))
        {
          spew("no change in hard-iron parameters");
          return;
        }

        UCTK::Frame frame;
        frame.setId(PKT_ID_HARD_IRON);
        frame.setPayloadSize(6);
        for (unsigned i = 0; i < c_hard_iron_count; ++i)
          frame.set<int16_t>(static_cast<int16_t>(factors[i] * 10e3), i * 2);

        if (!m_ctl->sendFrame(frame))
          throw RestartNeeded(DTR("failed to set hard-iron correction factors"), 5);
      }

      //! Decode output data frame.
      //! @param[in] frame data frame.
      void
      decodeOutputData(const UCTK::Frame& frame)
      {
        double imc_tstamp = Clock::getSinceEpoch();
        float tmp = 0;
        uint16_t tmp_u16 = 0;
        const uint8_t* ptr = frame.getPayload();

        // Timestamp.
        ptr += ByteCopy::fromLE(tmp_u16, ptr);
        double dev_tstamp = tmp_u16 / 1024.0;

        // Angular Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.x = Angles::radians(tmp);
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.y = Angles::radians(tmp);
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.z = Angles::radians(tmp);
        m_ang_vel.time = dev_tstamp;
        m_ang_vel.setTimeStamp(imc_tstamp);
        dispatch(m_ang_vel, DF_KEEP_TIME);

        // Acceleration.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.z = tmp;
        m_accel.time = dev_tstamp;
        m_accel.setTimeStamp(imc_tstamp);
        dispatch(m_accel, DF_KEEP_TIME);

        // Delta Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.x = Angles::radians(tmp);
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.y = Angles::radians(tmp);
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.z = Angles::radians(tmp);
        m_delt_ang.time = dev_tstamp;
        m_delt_ang.setTimeStamp(imc_tstamp);
        dispatch(m_delt_ang, DF_KEEP_TIME);

        // Delta Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.z = tmp;
        m_delt_vel.time = dev_tstamp;
        m_delt_vel.setTimeStamp(imc_tstamp);
        dispatch(m_delt_vel, DF_KEEP_TIME);

        // Magnetic Field.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.z = tmp;
        m_magn.time = dev_tstamp;
        m_magn.setTimeStamp(imc_tstamp);
        dispatch(m_magn, DF_KEEP_TIME);

        // Euler Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.phi = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.theta = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.psi_magnetic = tmp;
        m_euler.psi = tmp;
        m_euler.time = dev_tstamp;
        m_euler.setTimeStamp(imc_tstamp);
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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

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

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (Poll::poll(*m_uart, 1.0))
            readInput();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(Status::CODE_COM_ERROR)), 5);
          }
        }
      }
    };
  }
}

DUNE_TASK
