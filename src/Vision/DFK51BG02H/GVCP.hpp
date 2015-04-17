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

#ifndef VISION_DFK51BG02H_GVCP_HPP_INCLUDED_
#define VISION_DFK51BG02H_GVCP_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Vision
{
  namespace DFK51BG02H
  {
    //! Implementation of the GigE %Vision Control Protocol
    //! (%GVCP). Other cameras might have registers in different
    //! addresses. The right way to handle this would be to parse the
    //! Zipped XML that the camera provides.
    class GVCP
    {
    public:
      //! Message types.
      enum Types
      {
        //! Computer to camera.
        TYPE_COM_CAM = 0x4201,
        //! Camera to computer.
        TYPE_CAM_COM = 0x0000
      };

      //! Operation code.
      enum OpCodes
      {
        //! Register write request.
        OP_REG_WRITE = 0x0082,
        //! Register read request.
        OP_REG_READ  = 0x0080
      };

      //! Register addresses.
      enum Registers
      {
        //! Primary stream destination port.
        ADR_STREAM_PRT = 0x00000d00,
        //! Primary stream destination address.
        ADR_STREAM_ADR = 0x00000d18,
        //! Control privilege.
        ADR_PRIV       = 0x00000a00,
        //! Picture width (fixed).
        ADR_WIDTH      = 0xFF0001C0,
        //! Picture height (fixed).
        ADR_HEIGHT     = 0xFF0001D0,
        //! Picture offset (X).
        ADR_OFFS_X     = 0xFF0001E0,
        //! Picture offset (Y).
        ADR_OFFS_Y     = 0xFF0001F0,
        //! Pixel format.
        ADR_PIX_FMT    = 0xF0000000,
        //! Acquisition control: start/stop.
        ADR_ACQ_CTL    = 0xF0F00614,
        //! Frames per second.
        ADR_FPS        = 0xF0000004,
        //! Exposure time (raw).
        ADR_EXPO_RAW   = 0xFF000050,
        //! Gamma (raw).
        ADR_GAMMA_RAW  = 0xFF000020,
        //! Gain (raw).
        ADR_GAIN_RAW   = 0xFF000000,
        //! Strobe mode.
        ADR_STROBE_MOD = 0xFF000110,
        //! Strobe duration.
        ADR_STROBE_DUR = 0xFF000120,
        //! Strobe delay.
        ADR_STROBE_DEL = 0xFF000130
      };

      //! Frames per second.
      enum FramesPerSecond
      {
        // 15 frames per second.
        FPS_15         = 0x000A2C2A,
        // 7.5 frames per second.
        FPS_7          = 0x00145855,
        // 3.75 frames per second.
        FPS_3          = 0x0028B0AA
      };

      //! Pixel formats.
      enum PixelFormats
      {
        //! Grayscale, 1 byte per pixel.
        PIX_MONO8     = 0x01080001,
        //! Bayer GB8, 1 byte per pixel.
        PIX_BGB8      = 0x0108000A
      };

      //! Privilege bits.
      enum PrivilegeBitValues
      {
        // Exclusive control over registers.
        PRIV_BV_EXCLUSIVE = (1 << 0),
        // Control over registers.
        PRIV_BV_CONTROL   = (1 << 1)
      };

      //! Strobe modes.
      enum StrobeModes
      {
        // Strobe is always off.
        STROBE_MODE_OFF,
        // Strobe is always on.
        STROBE_MODE_ALWAYS_ON,
        // Strobe delay and duration are fixed.
        STROBE_MODE_FIXED,
        // Strobe duration is derived from the exposure time.
        STROBE_MODE_EXPOSURE
      };

      //! Strobe bit values.
      enum StrobeBitValues
      {
        //! Bit that controls on/off.
        STROBE_BV_ON_OFF   = (1 << 0),
        //! Bit that sets signal polarity.
        STROBE_BV_POLARITY = (1 << 1),
        //! Bit that ties the duration to exposure time.
        STROBE_BV_EXPOSURE = (1 << 2)
      };

      GVCP(const Address& cam_addr):
        m_cam_addr(cam_addr),
        m_seq(0),
        m_polarity(true)
      {
        m_socket.bind(c_port);
      }

      ~GVCP(void)
      {
        try
        {
          stopStreaming();
          setPrivilege(0);
        }
        catch (...)
        { }
      }

      //! Set access privileges. It's mandatory (or so I think)
      void
      setPrivilege(unsigned bits)
      {
        writeRegister(ADR_PRIV, bits);
      }

      //! Configure destination stream port (%GVSP).
      //! @param[in] port UDP port.
      void
      setStreamPort(uint16_t port)
      {
        writeRegister(ADR_STREAM_PRT, port);
      }

      //! Configure destination stream address (%GVSP).
      //! @param[in] address destination IP address.
      void
      setStreamAddress(const Address& address)
      {
        writeRegister(ADR_STREAM_ADR, address.toIntegerNative());
      }

      //! Set pixel format.
      //! @param[in] format pixel format.
      void
      setPixelFormat(PixelFormats format)
      {
        writeRegister(ADR_PIX_FMT, format);
      }

      //! Configure number of frames per second.
      //! @param[in] fps frames per second.
      void
      setFPS(FramesPerSecond fps)
      {
        writeRegister(ADR_FPS, fps);
      }

      //! Configure number of frames per second.
      //! @param[in] fps frames per second.
      void
      setFPS(unsigned fps)
      {
        switch (fps)
        {
          case 15:
            setFPS(FPS_15);
            break;
          case 7:
            setFPS(FPS_7);
            break;
          case 3:
            setFPS(FPS_3);
            break;
          default:
            throw std::runtime_error("invalid FPS value");
        }
      }

      // Set exposure time.
      // @param exposure exposure time in seconds.
      void
      setExposureTime(double exposure)
      {
        uint32_t raw = (uint32_t)(exposure * 10000);
        writeRegister(ADR_EXPO_RAW, raw);
      }

      //! Configure gain.
      //! @param[in] gain raw gain.
      void
      setGain(unsigned gain)
      {
        writeRegister(ADR_GAIN_RAW, gain);
      }

      //! Configure gamma.
      //! @param[in] gamma raw gamma.
      void
      setGamma(unsigned gamma)
      {
        writeRegister(ADR_GAMMA_RAW, gamma);
      }

      //! Configure strobe mode.
      //! @param[in] mode strobe mode.
      //! @param[in] polarity strobe polarity, false means inverted
      //! polarity.
      void
      setStrobeMode(StrobeModes mode, bool polarity = true)
      {
        m_polarity = polarity;

        uint32_t val = readRegister(ADR_STROBE_MOD);
        uint32_t dur = 0;
        uint32_t del = 0;

        // Clear bits.
        val &= ~(STROBE_BV_ON_OFF | STROBE_BV_EXPOSURE | STROBE_BV_POLARITY);

        switch (mode)
        {
          case STROBE_MODE_OFF:
            polarity = !polarity;
            break;

          case STROBE_MODE_ALWAYS_ON:
            val |= STROBE_BV_ON_OFF;
            break;

          case STROBE_MODE_FIXED:
            polarity = !polarity;
            val |= STROBE_BV_ON_OFF;
            dur = 10;
            break;

          case STROBE_MODE_EXPOSURE:
            polarity = !polarity;
            val |= (STROBE_BV_ON_OFF | STROBE_BV_EXPOSURE);
            dur = 10;
            break;
        }

        if (polarity)
          val |= STROBE_BV_POLARITY;

        writeRegister(ADR_STROBE_MOD, val);
        writeRegister(ADR_STROBE_DUR, dur);
        writeRegister(ADR_STROBE_DEL, del);
      }

      //! Set strobe delay.
      //! @param[in] delay strobe delay.
      void
      setStrobeDelay(int32_t delay)
      {
        writeRegister(ADR_STROBE_DEL, (uint32_t)delay);
      }

      //! Set strobe duration.
      //! @param[in] duration strobe duration.
      void
      setStrobeDuration(uint32_t duration)
      {
        writeRegister(ADR_STROBE_DUR, duration);
      }

      //! Start streaming.
      void
      startStreaming(void)
      {
        writeRegister(ADR_ACQ_CTL, 1);
      }

      //! Stop streaming.
      void
      stopStreaming(void)
      {
        setStrobeMode(STROBE_MODE_OFF, m_polarity);
        writeRegister(ADR_ACQ_CTL, 0);
      }

      //! Send keep-alive signal.
      void
      keepAlive(void)
      {
        readRegister(ADR_PRIV);
      }

    private:
      //! GVCP control port.
      static const uint16_t c_port = 3956;
      //! Camera IP Address.
      Address m_cam_addr;
      //! Sequence lock.
      Mutex m_seq_lock;
      //! Sequence number.
      uint16_t m_seq;
      //! GVCP socket.
      UDPSocket m_socket;
      //! Polarity.
      bool m_polarity;

      void
      writeRegister(uint32_t reg, uint32_t val)
      {
        uint16_t seq = getSequence();
        uint16_t type = TYPE_COM_CAM;
        uint16_t op = OP_REG_WRITE;

        uint8_t cmd[] =
        {
          // Type.
          (uint8_t)(type >> 8),
          (uint8_t)(type >> 0),

          // Operation.
          (uint8_t)(op >> 8),
          (uint8_t)(op >> 0),

          // Payload size.
          0x00, 0x08,

          // Sequence Number.
          (uint8_t)(seq >> 8),
          (uint8_t)(seq >> 0),

          // Address.
          (uint8_t)(reg >> 24),
          (uint8_t)(reg >> 16),
          (uint8_t)(reg >> 8),
          (uint8_t)(reg >> 0),

          // Value.
          (uint8_t)(val >> 24),
          (uint8_t)(val >> 16),
          (uint8_t)(val >> 8),
          (uint8_t)(val >> 0)
        };

        write(cmd, sizeof(cmd));
        if (!readAck(op, seq))
          throw std::runtime_error(String::str("ack failed (write): %08X", reg));
      }

      uint32_t
      readRegister(uint32_t reg)
      {
        uint16_t seq = getSequence();
        uint16_t type = TYPE_COM_CAM;
        uint16_t op = OP_REG_READ;

        uint8_t cmd[] =
        {
          // Type.
          (uint8_t)(type >> 8),
          (uint8_t)(type >> 0),

          // Operation.
          (uint8_t)(op >> 8),
          (uint8_t)(op >> 0),

          // Payload size.
          0x00, 0x04,

          // Sequence Number.
          (uint8_t)(seq >> 8),
          (uint8_t)(seq >> 0),

          // Address.
          (uint8_t)(reg >> 24),
          (uint8_t)(reg >> 16),
          (uint8_t)(reg >> 8),
          (uint8_t)(reg >> 0)
        };

        uint32_t value = 0;
        write(cmd, sizeof(cmd));
        if (!readAck(op, seq, &value))
          throw std::runtime_error(String::str("ack failed (read): %08X", reg));

        return value;
      }

      bool
      readAck(uint16_t op, uint16_t seq, uint32_t* value = NULL)
      {
        uint16_t type = TYPE_CAM_COM;
        uint8_t bfr[12];

        op += 1;

        double deadline = Clock::get() + 4.0;

        while (Clock::get() < deadline)
        {
          if (read(bfr, sizeof(bfr)))
          {
            if (bfr[0] != (uint8_t)(type >> 8))
              return false;

            if (bfr[1] != (uint8_t)(type >> 0))
              return false;

            if (bfr[2] != (uint8_t)(op >> 8))
              return false;

            if (bfr[3] != (uint8_t)(op >> 0))
              return false;

            if (bfr[6] != (uint8_t)(seq >> 8))
              return false;

            if (bfr[7] != (uint8_t)(seq >> 0))
              return false;

            if (value != NULL)
              ByteCopy::fromBE(*value, bfr + 8);

            return true;
          }
        }

        return false;
      }

      void
      write(const uint8_t* data, unsigned size)
      {
        m_socket.write(data, size, m_cam_addr, c_port);

#if defined(DEBUG)
        std::fprintf(stderr, "write (%u): ", size);
        for (unsigned i = 0; i < size; ++i)
          std::fprintf(stderr, "%02X ", data[i]);
        std::fprintf(stderr, "\n");
#endif
      }

      bool
      read(uint8_t* bfr, unsigned bfr_size)
      {
        if (!Poll::poll(m_socket, 1.0))
          return false;

        int rv = m_socket.read(bfr, bfr_size);

#if defined(DEBUG)
        std::fprintf(stderr, "read (%d): ", rv);
        for (int i = 0; i < rv; ++i)
          std::fprintf(stderr, "%02X ", (uint8_t)bfr[i]);
        std::fprintf(stderr, "\n");
#endif

        // Ignore unused datagram sizes (ping, etc).
        if (rv != (int)bfr_size)
          return false;

        return true;
      }

      uint16_t
      getSequence(void)
      {
        ScopedMutex l(m_seq_lock);
        if (++m_seq == 0)
          m_seq = 1;

        return m_seq;
      }
    };
  }
}

#endif
