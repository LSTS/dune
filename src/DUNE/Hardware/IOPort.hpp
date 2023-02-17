//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
