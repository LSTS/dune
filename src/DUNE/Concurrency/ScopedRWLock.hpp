//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ScopedRWLock.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SCOPED_RW_LOCK_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SCOPED_RW_LOCK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/RWLock.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Scoped Read/Write lock.
    class ScopedRWLock
    {
    public:
      //! Construct the object, locking the associated read/write lock.
      //! @param l associated lock.
      //! @param write true to perform a write lock, false to perform a
      //! read lock.
      ScopedRWLock(RWLock& l, bool write = false):
        m_lock(l)
      {
        (write) ? m_lock.lockWrite() : m_lock.lockRead();
      }

      //! Destruct the object, unlocking the associated read/write
      //! lock.
      ~ScopedRWLock(void)
      {
        m_lock.unlock();
      }

    private:
      //! Associated Read/Write lock.
      RWLock& m_lock;

      //! This class is non - copyable.
      ScopedRWLock(const ScopedRWLock&);

      //! This class is non - assignable.
      ScopedRWLock&
      operator=(const ScopedRWLock&);
    };
  }
}

#endif
