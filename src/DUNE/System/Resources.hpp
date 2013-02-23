//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
