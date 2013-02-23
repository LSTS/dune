//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Modem.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_MODEM_HPP_INCLUDED_
#define DUNE_HARDWARE_MODEM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstdarg>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Forward declarations.
    class SerialPort;

    // Export DLL symbol.
    class DUNE_DLL_SYM Modem;

    class Modem
    {
    public:
      //! Modem response codes.
      enum Result
      {
        //! Success.
        MR_OK,
        //! Timeout.
        MR_TIMEOUT,
        //! Invalid argument.
        MR_INVALID_ARGUMENT,
        //! I/O error.
        MR_IO_ERROR
      };

      //! Minimal set of modem modes.
      //! Other modes can be defined by concrete modems.
      enum Mode
      {
        //! Unknown mode.
        MM_UNKNOWN,
        //! Command mode.
        MM_COMMAND,
        //! Data mode.
        MM_DATA
      };

      //! Constructor for modems bound to a serial port.
      //! @param device Serial Device.
      //! @param baudrate Serial device baud rate.
      Modem(std::string device, int baudrate);

      //! Destructor.
      virtual
      ~Modem(void);

      //! Set modem mode.
      //! @param mode mode to set.
      //! @param force If true, forces mode change.
      //! @return Result return code for operation
      virtual Result
      setMode(int mode, bool force = false) = 0;

      //! Get current modem mode.
      //! @return current modem mode.
      virtual int
      getMode(void) const = 0;

      //! Setup the modem.
      //! @return MR_OK if modem has been set up successfully.
      virtual Result
      setup(void) = 0;

      //! Modem command.
      //! @param timeout Timeout.
      //! @param expect Expected reply string.
      //! @param fmt Command format.
      //! @param ... Variable argument list.
      Result
      command(double timeout, const char* expect, const char* fmt, ...);

      //! Modem command - alternate version.
      //! @param timeout Timeout.
      //! @param expect Expected reply string.
      //! @param fmt Command format.
      //! @param ap Argument list.
      Result
      command(double timeout, const char* expect, const char* fmt, std::va_list ap);

      //! Expect a certain reply from the modem.
      //! @param timeout Timeout.
      //! @param expected_reply Expected reply.
      Result
      expect(double timeout, const char* expected_reply);

      //! Send data. Base implementation just writes to the device.
      //! This behavior may be be specialized or replaced in subclasses.
      //! @param data Data to send.
      //! @param length Length of data to send.
      //! @return Result return code for operation
      virtual Result
      send(const char* data, uint16_t length);

      //! Receive data.
      //! @param data Buffer for receiving data.
      //! @param length Entry: length for incoming data; Exit: actual
      //! length of read data.
      //! @param timeout Timeout.
      //! @return Result return code for operation, in particular: OK if
      //! data was received, TIMEOUT if timeout has elapsed.
      Result
      receive(char* data, uint16_t* length, double timeout);

      //! Poll for incoming data.
      //! @param timeout Poll timeout in milliseconds, use negative value
      //! for blocking wait.
      //! @return Result return code for operation, in particular: OK if
      //! incoming data is ready, TIMEOUT if timeout has elapsed.
      Result
      poll(double timeout);

    protected:
      //! Working buffer size.
      static const int c_wbuffer_size = 512;

      //! Working buffer for control mode.
      char m_wbuf[c_wbuffer_size];

      //! I/O stream handle.
      DUNE::Hardware::SerialPort* m_io;
    };
  }
}

#endif
