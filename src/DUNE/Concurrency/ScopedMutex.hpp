//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ScopedMutex.hpp 12667 2013-01-22 02:44:42Z rasm                  $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SCOPED_MUTEX_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SCOPED_MUTEX_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Mutex.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Scoped Mutex.
    class ScopedMutex
    {
    public:
      //! Construct the object, locking the associated mutex.
      //! @param l associated mutex.
      ScopedMutex(Mutex& l):
        m_lock(l)
      {
        m_lock.lock();
      }

      //! Destruct the object, unlocking the associated mutex.
      ~ScopedMutex(void)
      {
        m_lock.unlock();
      }

    private:
      //! Associated Mutex.
      Mutex& m_lock;

      //! This class is non - copyable.
      ScopedMutex(const ScopedMutex&);

      //! This class is non - assignable.
      ScopedMutex&
      operator=(const ScopedMutex&);
    };
  }
}

#endif
