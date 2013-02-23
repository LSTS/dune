//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
#include <DUNE/System/IOMultiplexing.hpp>

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
    class SerialPort
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

      //! Write an amount of bytes to the serial port.
      //! @param bfr buffer of bytes.
      //! @param size amount of bytes to write.
      //! @return amount of bytes actually written.
      int
      write(const char* bfr, int size);

      //! Write an amount of bytes to the serial port.
      //! @param bfr buffer of bytes.
      //! @param size amount of bytes to write.
      //! @return amount of bytes actually written.
      int
      write(const uint8_t* bfr, int size);

      //! Write a null terminated string to the serial port.
      //! @param bfr C string.
      //! @return amount of bytes written.
      int
      write(const char* bfr);

      //! Read an amount of bytes from the serial port.
      //! @param bfr destination buffer.
      //! @param size amount of bytes to read.
      //! @return amount of bytes actually read.
      int
      read(char* bfr, int size);

      //! Read an amount of bytes from the serial port
      //! and define last character as null.
      //! @param bfr destination buffer.
      //! @param size amount of bytes to read.
      //! @return amount of bytes actually read.
      int
      readString(char* bfr, int size);

      //! Read an amount of bytes from the serial port.
      //! @param bfr destination buffer.
      //! @param size amount of bytes to read.
      //! @return amount of bytes actually read.
      int
      read(uint8_t* bfr, int size);

      //! Flush input buffer, discarding all of it's contents.
      void
      flushInput(void);

      //! Flush output buffer, aborting output.
      void
      flushOutput(void);

      //! Flush both input and output buffers.
      void
      flush(void);

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

      //! Check if there is new data to be read.
      //! @param timeout timeout.
      System::IOMultiplexing::Result
      hasNewData(double timeout = -1.0);

      void
      addToPoll(System::IOMultiplexing& poller);

      void
      delFromPoll(System::IOMultiplexing& p);

      bool
      wasTriggered(System::IOMultiplexing& p);

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
    };
  }
}

#endif
