//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda         *
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

#ifndef SENSORS_DEEPVISION_OSM2_DRIVER_HPP_INCLUDED_
#define SENSORS_DEEPVISION_OSM2_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// Local headers.
#include "Parser.hpp"

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DeepVisionOSM2
  {
    using DUNE_NAMESPACES;

    //! Line rate constant.
    static const float c_lrate = 750.0f;
    //! Hardware sampling rate.
    static const float c_hdwr_rate = 0.00017813030f;
    //! Minimum device resolution.
    static const float c_min_res = 0.02f;
    //! Maximum device resolution.
    static const float c_max_res = 1.0f;
    //! Command register identifier.
    static const uint8_t c_reg_id = 0xf5;
    //! Maximum packet size.
    static const unsigned c_max_size = 256;

    //! Driver class to configure DeepVision's OEM Sonar Module OSM2.
    //!
    //! This class is the command link with the device for configuration.
    class Driver
    {
    public:
      //! Available command link baud rates.
      enum BaudCodes
      {
        BC_115200  = 694,
        BC_230400  = 347,
        BC_460800  = 173,
        BC_921600  = 86,
        BC_1000000 = 80
      };

      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart serial port device.
      //! @param[in] baud serial port baud rate.
      Driver(Tasks::Task* task, const std::string& uart, unsigned baud):
        m_task(task),
        m_uart(NULL),
        m_baud(baud)
      {
        m_uart = new SerialPort(uart.c_str(), c_ini_baud);
        m_parser = new Parser();
      }

      //! Destructor.
      ~Driver(void)
      {
        onCloseLog();
        Memory::clear(m_parser);
        Memory::clear(m_uart);
      }

      //! Device's setup sequence.
      //! @param[in] periods number of periods.
      //! @param[in] samples number of samples.
      //! @param[in] range sidescan range.
      //! @param[in] speed system speed.
      //! @param[in] left true if port transducer is enabled.
      //! @param[in] right true if starboard transducer is enabled.
      void
      setup(unsigned periods, unsigned samples, unsigned range, float speed, bool left, bool right)
      {
        reset();
        // @todo correct values.
        setPulse(periods, 640000, 60000);
        setSampling(samples, getDecimation(range, speed), left, right, false);
        m_parser->setup(getResolution(range, speed), getLineRate(range));
        run(m_baud);
      }

      //! Get device data.
      //! @return true if we were able to process data, false otherwise.
      bool
      read(void)
      {
        Counter<double> timer(1.0);
        bool parsed = false;

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            continue;

          size_t rv = m_uart->read(&m_bfr[0], c_max_size);

          for (size_t i = 0; i < rv; ++i)
          {
            if (m_parser->parse(m_bfr[i]))
              parsed = true;
          }
        }

        return parsed;
      }

      //! Open new log file.
      //! @param[in] path file system path.
      void
      onOpenLog(const DUNE::FileSystem::Path& path)
      {
        m_parser->openLog(path);
      }

      //! Close log file.
      void
      onCloseLog(void)
      {
        m_parser->closeLog();
      }

      //! Received estimated state.
      //! @param[in] msg estimated state message.
      void
      onState(const IMC::EstimatedState* msg)
      {
        m_parser->onState(msg);
      }

    private:
      //! Get line rate
      float
      getLineRate(unsigned range)
      {
        return (float)range / c_lrate;
      }

      //! Get sample resolution
      float
      getResolution(unsigned range, float speed)
      {
        float y_res = getLineRate(range) * speed;

        if (y_res < c_min_res)
          y_res = c_min_res;
        else if (y_res > c_max_res)
          y_res = c_max_res;

        return y_res;
      }

      //! Get decimation.
      unsigned
      getDecimation(unsigned range, float speed)
      {
        return (unsigned)(getResolution(range, speed) / c_hdwr_rate);
      }

      //! Reset device
      void
      reset(void)
      {
        setRegister(0xAB, 0x05060708);
      }

      //! Set device's sonar pulse.
      //! @param[in] periods number of periods.
      //! @param[in] start_freq start frequency.
      //! @param[in] delta_freq chirp delta frequency.
      void
      setPulse(uint32_t periods, float start_freq, float delta_freq)
      {
        uint32_t chirp = 0;
        if (delta_freq < 0)
        {
          delta_freq = -delta_freq;
          chirp = 0x80000000;
        }

        uint32_t f0 = (uint32_t)(start_freq * 0.0131072f + 0.5);
        uint32_t diff = (uint32_t)(delta_freq * 1.666667f / periods + 0.5);

        setRegister(c_reg_pulser_1, (diff << 16) | (0xffff & f0));
        setRegister(c_reg_pulser_2, chirp | ((0x03ff & periods) << 16));
      }

      //! Setup device's sampling.
      //! @param[in] samples number of samples in ping return packet.
      //! @param[in] decimation sample resolution.
      //! @param[in] left true if port transducer is enabled.
      //! @param[in] right true if starboard transducer is enabled.
      //! @param[in] single false if continuous pinging.
      void
      setSampling(uint32_t samples, uint32_t decimation, bool left, bool right, bool single)
      {
        // Use 0 for sum, 1 for maximum.
        uint32_t mode = 1;

        uint32_t chns = 0;
        if (left)
          chns |= Parser::c_chn_left;

        if (right)
          chns |= Parser::c_chn_right;

        setRegister(c_reg_mode, (decimation << 16) | (chns << 3) | mode);
        setRegister(c_reg_samples, samples);

        if (single)
          setRegister(c_reg_single, 0x1 << 16);
      }

      //! Start pinging and send data.
      //! @param[in] baud desired baud rate.
      void
      run(unsigned baud)
      {
        switch (baud)
        {
          case 115200:
            setRegister(c_reg_cmd, BC_115200);
            break;
          case 230400:
            setRegister(c_reg_cmd, BC_230400);
            break;
          case 460800:
            setRegister(c_reg_cmd, BC_460800);
            break;
          case 921600:
            setRegister(c_reg_cmd, BC_921600);
            break;
          case 1000000:
            setRegister(c_reg_cmd, BC_1000000);
            break;
          default:
            // error
            break;
        }

        changeBaud(m_baud);
      }

      //! Set device's DSP register.
      //! @param[in] reg register address.
      //! @param[in] value new register value.
      void
      setRegister(uint16_t reg, uint32_t value)
      {
        uint8_t bfr[c_cmd_size];

        bfr[0] = c_reg_id;
        bfr[1] = (uint8_t)((reg >> 8) & 0xFF);
        bfr[2] = (uint8_t)((reg) & 0xFF);
        bfr[3] = (uint8_t)((value >> 24) & 0xFF);
        bfr[4] = (uint8_t)((value >> 16) & 0xFF);
        bfr[5] = (uint8_t)((value >> 8) & 0xFF);
        bfr[6] = (uint8_t)((value) & 0xFF);
        bfr[7] = 0;

        // checksum.
        for (int i = 0; i < 7; i++)
          bfr[7] += bfr[i];

        m_task->spew("send: %02X%02X%02X%02X%02X%02X%02X%02X", bfr[0], bfr[1],
                     bfr[2], bfr[3], bfr[4], bfr[5], bfr[6], bfr[7]);

        m_uart->write((const char*)bfr, c_cmd_size);
      }

      //! Change serial port baud rate.
      //! @param[in] baud desired baud rate.
      void
      changeBaud(unsigned baud)
      {
        Delay::wait(0.1);
        m_uart->flush();
        m_uart->setBaudRate(baud);
      }

      //! Parent task.
      Tasks::Task* m_task;
      //! Serial Port handle.
      SerialPort* m_uart;
      //! Parser handle.
      Parser* m_parser;
      //! Serial Port baud rate.
      unsigned m_baud;
      //! Internal buffer.
      uint8_t m_bfr[c_max_size];
      //! Device's initial baud rate.
      static const unsigned c_ini_baud = 9600;
      //! Size of command.
      static const unsigned c_cmd_size = 8;
      //! Register command.
      static const uint16_t c_reg_cmd = 0x01;
      //! Register pulser address 1.
      static const uint16_t c_reg_pulser_1 = 0x11;
      //! Register pulser address 2.
      static const uint16_t c_reg_pulser_2 = 0x12;
      //! Register for single ping request.
      static const uint16_t c_reg_single = 0x20;
      //! Register for mode, decimation and active channels.
      static const uint16_t c_reg_mode = 0x21;
      //! Register for number of samples.
      static const uint16_t c_reg_samples = 0x25;
    };
  }
}

#endif
