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

#ifndef DUNE_SYSTEM_RESOURCES_HPP_INCLUDED_
#define DUNE_SYSTEM_RESOURCES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace System
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Resources;

    class Resources
    {
    public:
      //! Initialize resource monitor.
      Resources(void);

      //! Retrieve the percentage of CPU time used by the calling
      //! process since the last call to this function or object
      //! creation. On multi CPU systems the CPU time is an average.
      //! @return percentage of the CPU time used or -1 if not
      //! implemented in the current platform.
      int
      getProcessorUsage(void);

      //! Make all memory pages mapped by the address space of the
      //! current process to be memory-resident until unlocked or until
      //! the process exits.
      static void
      lockMemory(void);

      //! Unlock memory pages.
      static void
      unlockMemory(void);

      //! Make those whole pages containing any part of the address
      //! space of the process starting at address 'addr' and
      //! continuing for 'length' bytes to be memory-resident until
      //! unlocked or until the process exits or execs another process
      //! image.
      //! @param[in] addr starting memory address.
      //! @param[in] length length of memory.
      static void
      lockMemory(void* addr, size_t length);

      //! Unlock memory pages.
      //! @param[in] addr starting memory address.
      //! @param[in] length length of memory.
      static void
      unlockMemory(const void* addr, size_t length);

    private:
      //! Last process's CPU time.
      uint64_t m_last_proc_time;
      //! Last global CPU time.
      uint64_t m_last_global_time;
    };
  }
}

#endif
