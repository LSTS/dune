//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SCOPED_SEMAPHORE_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SCOPED_SEMAPHORE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Semaphore.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Scoped Semaphore.
    class ScopedSemaphore
    {
    public:
      //! Construct the object, locking the associated semaphore.
      //! @param l associated semaphore.
      ScopedSemaphore(Semaphore& l):
        m_lock(l)
      {
        m_lock.lock();
      }

      //! Destruct the object, unlocking the associated semaphore.
      ~ScopedSemaphore(void)
      {
        m_lock.unlock();
      }

    private:
      //! Associated Semaphore.
      Semaphore& m_lock;

      //! This class is non - copyable.
      ScopedSemaphore(const ScopedSemaphore&);

      //! This class is non - assignable.
      ScopedSemaphore&
      operator=(const ScopedSemaphore&);
    };
  }
}

#endif
