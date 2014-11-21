//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IO_HANDLE_HPP_INCLUDED_
#define DUNE_IO_HANDLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace IO
  {
#if defined(DUNE_OS_POSIX)
    typedef int NativeHandle;
#elif defined(DUNE_OS_WINDOWS)
    typedef HANDLE NativeHandle;
#endif

    class Handle
    {
    public:
      //! Destructor.
      virtual
      ~Handle(void)
      { }

      //! Write binary data to I/O handle.
      //! @param[in] data data buffer.
      //! @param[in] length number of bytes to write.
      //! @return number of bytes written.
      size_t
      write(const uint8_t* data, size_t length)
      {
        return doWrite(data, length);
      }

      //! Write binary data to I/O handle.
      //! @param[in] data data buffer.
      //! @param[in] length number of bytes to write.
      //! @return number of bytes written.
      size_t
      write(const char* data, size_t length)
      {
        return write(reinterpret_cast<const uint8_t*>(data), length);
      }

      //! Write C-style string to I/O handle.
      //! @param[in] cstr C-style string.
      //! @return number of bytes written.
      size_t
      writeString(const char* cstr)
      {
        return write(reinterpret_cast<const uint8_t*>(cstr), std::strlen(cstr));
      }

      //! Read binary data from I/O handle.
      //! @param[in] data data buffer.
      //! @param[in] length number of bytes to read.
      //! @return number of bytes read.
      size_t
      read(uint8_t* data, size_t length)
      {
        return doRead(data, length);
      }

      //! Read binary data from I/O handle.
      //! @param[in] data data buffer.
      //! @param[in] length number of bytes to read.
      //! @return number of bytes read.
      size_t
      read(char* data, size_t length)
      {
        return read(reinterpret_cast<uint8_t*>(data), length);
      }

      //! Read C-style string from I/O handle.
      //! @param[in] bfr data buffer.
      //! @param[in] length capacity of the data buffer.
      //! @return number of bytes read.
      size_t
      readString(char* bfr, size_t length)
      {
        size_t rv = read(bfr, length - 1);
        bfr[rv] = '\0';
        return rv;
      }

      //! Flush input and output.
      void
      flush(void)
      {
        doFlush();
      }

      //! Flush data received but not read.
      void
      flushInput(void)
      {
        doFlushInput();
      }

      //! Flush data buffered but not written.
      void
      flushOutput(void)
      {
        doFlushOutput();
      }

      //! Retrieve the native I/O handle.
      //! @return native I/O handle.
      NativeHandle
      getNative(void) const
      {
        return doGetNative();
      }

    protected:
      virtual NativeHandle
      doGetNative(void) const = 0;

      virtual size_t
      doWrite(const uint8_t* data, size_t data_size) = 0;

      virtual size_t
      doRead(uint8_t* data, size_t data_size) = 0;

      virtual void
      doFlushInput(void)
      { }

      virtual void
      doFlushOutput(void)
      { }

      virtual void
      doFlush(void)
      {
        doFlushOutput();
        doFlushInput();
      }
    };
  }
}

#endif
