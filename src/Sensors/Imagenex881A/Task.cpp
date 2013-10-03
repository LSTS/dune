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

namespace Sensors
{
  namespace Imagenex881A
  {
    using DUNE_NAMESPACES;

    //! Switch data command.
    enum IndexQuery
    {
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
      // Profile mode.
      SD_PROFILE = 22,
      // Calibrate sensor.
      SD_CALIBRATE = 23,
      // Switch Delay index.
      SD_SWITCH_DELAY = 24,
      // Frequency index.
      SD_FREQUENCY = 25
    };

    //! Sonar return data.
    enum IndexResponse
    {
      // Head position low byte.
      SR_HEAD_POS_LO = 5,
      // Head position high byte.
      SR_HEAD_POS_HI = 6,
      // Range.
      SR_RANGE = 7,
      // Profile range low byte.
      SR_PRANGE_LO = 8,
      // Profile range high byte.
      SR_PRANGE_HI = 9
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
    };

    //! List of available ranges.
    static const unsigned c_ranges[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60, 80, 100, 150, 200};
    //! Count of available ranges.
    static const unsigned c_ranges_size = sizeof(c_ranges) / sizeof(c_ranges[0]);
    //! This device has only one baud rate.
    static const unsigned c_uart_baud = 115200;
    // Switch data size.
    static const int c_sdata_size = 27;

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      // Output switch data.
      uint8_t m_sdata[c_sdata_size];
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
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
        .minimumValue("175")
        .maximumValue("1175")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .units(Units::Kilohertz)
        .description("Operating frequency");

        param("Profile Mode", m_args.profile)
        .defaultValue("true")
        .description("Gather data in profile mode");

        // Initialize switch data.
        std::memset(m_sdata, 0, sizeof(m_sdata));
        m_sdata[0] = 0xfe;
        m_sdata[1] = 0x44;
        m_sdata[2] = 0x10;
        m_sdata[26] = 0xfd;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.uart_dev) && (m_uart != NULL))
          throw RestartNeeded(DTR("restarting to change UART device"), 1);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev,
                                c_uart_baud,
                                SerialPort::SP_PARITY_NONE,
                                SerialPort::SP_STOPBITS_1,
                                SerialPort::SP_DATABITS_8,
                                true);
        m_wdog.setTop(2.0);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! Main loop.
      void
      onMain(void)
      {
        uint8_t bfr[513];

        while (!stopping())
        {
          if (!isActive())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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

          // Extract and dispatch data.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
