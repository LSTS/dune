//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_IO_PORT_HPP_INCLUDED_
#define DUNE_HARDWARE_IO_PORT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/System/Error.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM IOPort;

    class IOPort
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string msg, int code):
          std::runtime_error("IO port error (" + msg + "): " + System::Error::getMessage(code))
        { }
      };

      //! Constructor.
      IOPort(uint32_t base_address, uint32_t size);

      //! Destructor.
      ~IOPort(void);

      void
      write(uint8_t value, uint32_t offset = 0);

      uint8_t
      read(uint32_t offset = 0);

    private:
      uint32_t m_base_address;
      uint32_t m_size;

#if defined(DUNE_OS_LINUX) && !defined(DUNE_CPU_X86)
      int m_dev_mem;
      uint8_t* m_base_page;
      uint8_t* m_memory;
#endif
    };
  }
}

#endif
