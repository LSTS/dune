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
// Author: Ricardo Martins (POSIX)                                          *
// Author: Eduardo Marques (Microsoft Windows)                              *
//***************************************************************************

#ifndef DUNE_HARDWARE_SERIAL_PORT_HPP_INCLUDED_
#define DUNE_HARDWARE_SERIAL_PORT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IO/Handle.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_TERMIOS_H)
#  include <termios.h>
#endif

// Win32 headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SerialPort;

    //! The SerialPort class encapsulates serial port access.
    class SerialPort: public IO::Handle
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string op, std::string msg):
          std::runtime_error("serial port error (" + op + "): " + msg)
        { }
      };

      //! The optional parity bit is a simple sum of the data bits
      //! indicating whether or not the data contains an even or odd
      //! number of 1 bits. With even parity, the parity bit is 0 if there
      //! is an even number of 1's in the character. With odd parity, the
      //! parity bit is 0 if there is an odd number of 1's in the data. No
      //! parity means that no parity bit is present or transmitted.
      enum Parity
      {
        //! No parity.
        SP_PARITY_NONE = 0x01,
        //! Even parity.
        SP_PARITY_EVEN = 0x02,
        //! Odd parity.
        SP_PARITY_ODD = 0x03
      };

      //! There can be 1, 1.5, or 2 stop bits between characters and they
      //! always have a value of 1. Stop bits traditionally were used to
      //! give the computer time to process the previous character, but
      //! now only serve to synchronize the receiving computer to the
      //! incoming characters.
      enum StopBits
      {
        //! One stop bit.
        SP_STOPBITS_1 = 0x04,
        //! One and half stop bits.
        SP_STOPBITS_1_5 = 0x05,
        //! Two stop bits.
        SP_STOPBITS_2 = 0x06
      };

      //! Data bits.
      enum DataBits
      {
        //! Five data bits.
        SP_DATABITS_5 = 0x07,
        //! Six data bits.
        SP_DATABITS_6 = 0x08,
        //! Seven data bits.
        SP_DATABITS_7 = 0x09,
        //! Eight data bits.
        SP_DATABITS_8 = 0x0A
      };

      //! Enumerate available serial ports. The names returned are
      //! dependent on the operating system.
      //! @return vector of serial port names (devices).
      static std::vector<std::string>
      enumerate(void);

      //! Serial port constructor.
      //! @param device serial port device.
      //! @param baudrate I/O baud rate.
      //! @param parity parity checking type.
      //! @param stopbits number of stop bits.
      //! @param databits number of data bits.
      //! @param block false enable non-blocking I/O.
      //! @throw SerialPortError.
      SerialPort(const std::string& device, int baudrate = 38400, Parity parity = SP_PARITY_NONE, StopBits stopbits = SP_STOPBITS_1, DataBits databits = SP_DATABITS_8, bool block = false);

      //! Serial port destructor.
      ~SerialPort(void);

      void
      setMinimumRead(int value);

      //! Set the baud rate of the serial port.
      //! @param baudrate baud rate value.
      void
      setBaudRate(int baudrate);

      //! Set the parity of the serial port.
      //! @param parity parity value.
      void
      setParity(Parity parity);

      //! Set the number of data bits of the serial port.
      //! @param databits number of data bits.
      void
      setDataBits(DataBits databits);

      //! Set the number of stop bits of the serial port.
      //! @param sbits number of stop bits.
      void
      setStopBits(StopBits sbits);

      //! Enable canonical input. Canonical input is line-oriented. Input
      //! characters are put into a buffer which can be edited
      //! interactively by the user until a CR (carriage return) or LF
      //! (line feed) character is received.
      //! @param enable enable / disable canonical input.
      void
      setCanonicalInput(bool enable);

      void
      setCanonicalInputTerminator(char terminator);

      void
      setNonBlocking(void);

      void
      sendBreak(int duration);

      //! Enable software flow control (XON/XOFF/XANY).
      //! @param enabled enable / disable software flow control
      void
      setXONXOFF(bool enabled);

      //! Enable hardware flow control (CTSRTS).
      //! @param enabled enable / disable hardware flow control
      void
      setCTSRTS(bool enabled);

    private:
      // POSIX implementation.
#if defined(DUNE_SYS_HAS_STRUCT_TERMIOS)
      int m_handle;
      termios m_options;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      HANDLE m_handle;
      DCB m_options;

#endif

      IO::NativeHandle
      doGetNative(void) const
      {
        return m_handle;
      }

      //! Write an amount of bytes to the serial port.
      //! @param bfr buffer of bytes.
      //! @param size amount of bytes to write.
      //! @return amount of bytes actually written.
      size_t
      doWrite(const uint8_t* bfr, size_t size);

      //! Read an amount of bytes from the serial port.
      //! @param bfr destination buffer.
      //! @param size amount of bytes to read.
      //! @return amount of bytes actually read.
      size_t
      doRead(uint8_t* bfr, size_t size);

      //! Flush input buffer, discarding all of it's contents.
      void
      doFlushInput(void);

      //! Flush output buffer, aborting output.
      void
      doFlushOutput(void);

      //! Flush both input and output buffers.
      void
      doFlush(void);
    };
  }
}

#endif
