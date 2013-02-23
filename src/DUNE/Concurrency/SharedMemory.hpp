//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: SharedMemory.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SHARED_MEMORY_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SHARED_MEMORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <climits>

// DUNE headers.
#include <DUNE/Config.hpp>

#if !defined(PATH_MAX)
#  define PATH_MAX 1024
#endif

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SharedMemory;

    class SharedMemory
    {
    public:
      SharedMemory(const char* name, unsigned size);

      SharedMemory(unsigned size);

      ~SharedMemory(void);

      void
      create(void);

      void
      open(void);

      //! Get name of memory area.
      //! @return memory area's name.
      const char*
      getName(void)
      {
        return m_name;
      }

      //! Get pointer to shared memory area.
      //! @return pointer to shared memory area.
      void*
      operator*(void)
      {
        return m_ptr;
      }

    private:
      //! True if this instance created the memory area.
      bool m_creator;
      //! Size of shared memory area.
      unsigned m_size;
      //! Pointer to shared memory area.
      void* m_ptr;
      //! Memory area name.
      char m_name[PATH_MAX];

      //! Generate an unique name.
      void
      generateName(void);

      //! Non-copyable.
      SharedMemory(const SharedMemory&);

      //! Non - assignable
      SharedMemory&
      operator=(const SharedMemory&);
    };
  }
}

#endif
