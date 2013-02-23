//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

namespace Sensors
{
  //! XR-620 CTD from RBR Ltd. device driver.
  //! This device is able to measure conductivity,
  //! temperature and pressure of the medium.
  //!
  //! @author Ricardo Martins
  namespace XR620CTD
  {
    using DUNE_NAMESPACES;

    //! Measurement channels.
    enum Channels
    {
      // Conductivity channel.
      CHN_CONDUCTIVITY = 0,
      // Temperature channel.
      CHN_TEMPERATURE = 1,
      // Pressure channel.
      CHN_PRESSURE = 2
    };

    //! Maximum ADC value.
    static const double c_full_scale = 16777216.0;
    //! Raw values above this number are considered negative numbers.
    static const uint32_t c_percent099 = (uint32_t)(c_full_scale * 0.99);
    //! Raw values above this number are considered negative numbers.
    static const uint32_t c_percent875 = (uint32_t)(c_full_scale * 0.875);

    //! Setup commands.
    struct SetupCommands
    {
      //! Set command.
      const char* cmd_set;
      //! Get command.
      const char* cmd_get;
      //! Reply to get command.
      const char* cmd_rpl;
    };

    //! Setup commands.
    static const SetupCommands c_setup_cmds[] =
    {
      {"!A0000000000000000", "!L", "0000000000000000THR\r\n"},
      {"W0100", "X", "0100BST\r\n"},
      {"!141030000", "!2", "41030000STC\r\n"},
      {0, 0, 0}
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Sound speed moving average samples size.
      int avg_ss_samples;
      //! Speed of Sound output frequency.
      float output_freq;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port device.
      SerialPort* m_uart;
      //! Scratch buffer.
      char m_bfr[256];
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
      //! Sound Speed Moving Average.
      Math::MovingAverage<double>* m_avg_sspeed;
      //! Counter to output Speed of Sound.
      Time::Counter<float> m_sspeed_timer;
      //! Parser.
      Parser m_parser;
      //! Channel Coefficients.
      double m_coeffs[3][4];
      //! Task arguments.
      Arguments m_args;
      //! Waiting first sample.
      bool m_wait_sample;
      //! Input watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_avg_sspeed(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Sound Speed Moving Average Samples", m_args.avg_ss_samples)
        .defaultValue("10")
        .description("Number of moving average samples to smooth sound speed");

        param("Sound Speed Output Frequency", m_args.output_freq)
        .units(Units::Hertz)
        .minimumValue("0.1")
        .defaultValue("1.0")
        .description("Output frequency of sound speed estimations");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        // Initialize timer.
        m_sspeed_timer.setTop(1 / m_args.output_freq);
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
        Memory::clear(m_avg_sspeed);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_wdog.setTop(2);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_wait_sample = false;
        m_avg_sspeed = new MovingAverage<double>(m_args.avg_ss_samples);

        m_uart->setCanonicalInput(true);

        // Wake up.
        m_uart->write("AA");
        m_uart->flushInput();

        stopSampling();
        getCalibration();
        setParameters();
        startSampling();

        m_uart->setCanonicalInput(false);
      }

      //! Read string from serial port.
      //! @param[in] bfr pointer to data buffer.
      //! @param[in] bfr_len length of the data buffer.
      //! @param[in] timeout incoming data timeout.
      //! @return true if successful, false otherwise.
      bool
      readString(char* bfr, unsigned bfr_len, double timeout = 1.0)
      {
        if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
          return false;

        m_uart->readString(bfr, bfr_len);

        (void)timeout;
        return true;
      }

      //! Stop sampling device.
      void
      stopSampling(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        while (!stopping())
        {
          Delay::wait(1.0);

          consumeMessages();

          // Stop sampling.
          m_uart->write("!9");
          Delay::wait(1.0);
          m_uart->flushInput();

          // Try requesting identification information.
          m_uart->write("A");
          if (!readString(m_bfr, sizeof(m_bfr)))
            continue;

          std::vector<std::string> parts;
          String::split(m_bfr, " ", parts);

          if (parts.size() != 4)
            continue;

          if (parts[0].compare("RBR") != 0)
            continue;

          if (parts[1].compare("XR-620") != 0)
            continue;

          break;
        }
      }

      //! Get calibration from the device.
      void
      getCalibration(void)
      {
        while (!stopping())
        {
          Delay::wait(1.0);

          consumeMessages();

          try
          {
            m_uart->flushInput();

            // Read conductivity calibration.
            m_uart->write("Z01");
            if (!readString(m_bfr, sizeof(m_bfr)))
              continue;

            for (unsigned i = 0; i < 4; ++i)
              m_coeffs[CHN_CONDUCTIVITY][i] = Parser::readDoubleFromASCII(m_bfr + 16 * i);

            // Read temperature.
            m_uart->write("Z02");
            if (!readString(m_bfr, sizeof(m_bfr)))
              continue;

            for (unsigned i = 0; i < 4; ++i)
              m_coeffs[CHN_TEMPERATURE][i] = Parser::readDoubleFromASCII(m_bfr + 16 * i);

            // Read pressure calibration.
            m_uart->write("Z03");
            if (!readString(m_bfr, sizeof(m_bfr)))
              continue;

            for (unsigned i = 0; i < 4; ++i)
              m_coeffs[CHN_PRESSURE][i] = Parser::readDoubleFromASCII(m_bfr + 16 * i);

            break;
          }
          catch (...)
          {
            continue;
          }
        }
      }

      //! Set device parameters.
      void
      setParameters(void)
      {
        const SetupCommands* ptr = c_setup_cmds;

        while (ptr->cmd_set && !stopping())
        {
          Delay::wait(1.0);

          consumeMessages();

          m_uart->flushInput();
          m_uart->write(ptr->cmd_set);
          m_uart->write(ptr->cmd_get);

          if (!readString(m_bfr, sizeof(m_bfr)))
            continue;

          if (std::strcmp(m_bfr, ptr->cmd_rpl) != 0)
            continue;

          ++ptr;
        }
      }

      //! Start sampling data.
      void
      startSampling(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_MISSING_DATA);
        m_wait_sample = true;
        m_uart->write("!B0D");
        m_uart->write("!R");
      }

      //! Define measurement coefficients.
      //! @param[in] coeffs index.
      //! @param[in] value multiplier constant.
      //! @return output value.
      double
      applyCoefficients(int coeffs, double value)
      {
        return m_coeffs[coeffs][0]
        + (m_coeffs[coeffs][1] * value)
        + (m_coeffs[coeffs][2] * value * value)
        + (m_coeffs[coeffs][3] * value * value * value);
      }

      //! Compute conductivity.
      //! @return conductivity value.
      double
      computeConductivity(void)
      {
        uint32_t raw = m_parser.getDataField(CHN_CONDUCTIVITY);
        double scaled = raw;
        if (raw > c_percent099)
          scaled -= (double)c_full_scale;
        scaled /= c_full_scale;
        return applyCoefficients(CHN_CONDUCTIVITY, scaled);
      }

      //! Compute temperature.
      //! @return temperature value.
      double
      computeTemperature(void)
      {
        uint32_t val = m_parser.getDataField(CHN_TEMPERATURE);
        double v = applyCoefficients(1, std::log(c_full_scale / val - 1));
        return 1.0 / v - 273.14999999;
      }

      //! Compute pressure.
      //! @return pressure value.
      double
      computePressure(void)
      {
        uint32_t raw = m_parser.getDataField(CHN_PRESSURE);
        double scaled = raw;
        if (raw > c_percent875)
          scaled -= (double)c_full_scale;
        scaled /= c_full_scale;
        return applyCoefficients(CHN_PRESSURE, scaled);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (m_sspeed_timer.overflow() && (getEntityState() == IMC::EntityState::ESTA_NORMAL))
          {
            dispatch(m_sspe);
            m_sspeed_timer.reset();
          }

          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
          {
            if (!m_wait_sample && m_wdog.overflow())
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            continue;
          }

          int rv = m_uart->readString(m_bfr, sizeof(m_bfr));
          for (int i = 0; i < rv; ++i)
          {
            try
            {
              if (m_parser.parse(m_bfr[i]))
              {
                m_cond.setTimeStamp();
                m_pres.setTimeStamp(m_cond.getTimeStamp());
                m_temp.setTimeStamp(m_cond.getTimeStamp());
                m_sali.setTimeStamp(m_cond.getTimeStamp());

                // Temperature.
                m_temp.value = computeTemperature();

                // Conductivity.
                m_cond.value = computeConductivity() / 10.0;

                // Pressure.
                double pres_bar = computePressure() / 10.0;
                m_pres.value = pres_bar * 100000.0;

                // Derived values.
                m_sali.value = UNESCO1983::computeSalinity(m_cond.value, pres_bar, m_temp.value);

                m_sspe.value = (m_sali.value < 0.0) ? -1.0 : m_avg_sspeed->update(UNESCO1983::computeSoundSpeed(m_sali.value, pres_bar, m_temp.value));

                dispatch(m_cond, DF_KEEP_TIME);
                dispatch(m_temp, DF_KEEP_TIME);
                dispatch(m_pres, DF_KEEP_TIME);
                dispatch(m_sali, DF_KEEP_TIME);

                // Update watchdog and state.
                m_wdog.reset();
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_wait_sample = false;
              }
            }
            catch (std::runtime_error& e)
            {
              err(DTR("parse error: %s"), e.what());
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
