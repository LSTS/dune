//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Semaphore.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SEMAPHORE_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SEMAPHORE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
#  include <semaphore.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Semaphore;

    class Semaphore
    {
    public:
      Semaphore(int value = 1);

      ~Semaphore(void);

      void
      lock(void);

      void
      unlock(void);

      int
      getValue(void);

    private:
      //! Semaphore's handle.
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_t m_handle;
#endif

      // Non - copyable.
      Semaphore(const Semaphore&);

      // Non - assignable
      Semaphore&
      operator=(const Semaphore&);
    };
  }
}

#endif
