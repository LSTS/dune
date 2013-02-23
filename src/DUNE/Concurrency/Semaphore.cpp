//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Semaphore.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Concurrency/Semaphore.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    Semaphore::Semaphore(int value)
    {
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_init(&m_handle, 1, value);
#else
      (void)value;
#endif
    }

    Semaphore::~Semaphore(void)
    {
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_post(&m_handle);
      sem_destroy(&m_handle);
#endif
    }

    void
    Semaphore::lock(void)
    {
      //      std::cerr << "in lock" << std::endl;
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_wait(&m_handle);
#endif
      //      std::cerr << "out lock" << std::endl;
    }

    void
    Semaphore::unlock(void)
    {
      //      std::cerr << "in unlock" << std::endl;
#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_post(&m_handle);
#endif
      //      std::cerr << "out lock" << std::endl;
    }

    int
    Semaphore::getValue(void)
    {
      int value = 0;

#if defined(DUNE_SYS_HAS_SEMAPHORE_H)
      sem_getvalue(&m_handle, &value);
#endif

      return value;
    }
  }
}
