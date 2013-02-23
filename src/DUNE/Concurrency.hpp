//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_HPP_INCLUDED_
#define DUNE_CONCURRENCY_HPP_INCLUDED_

namespace DUNE
{
  //! %Concurrency related routines and classes.
  namespace Concurrency
  { }
}

#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/AtomicInteger.hpp>
#include <DUNE/Concurrency/AtomicCounter.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/RWLock.hpp>
#include <DUNE/Concurrency/ScopedRWLock.hpp>
#include <DUNE/Concurrency/Condition.hpp>
#include <DUNE/Concurrency/ScopedCondition.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Concurrency/Barrier.hpp>
#include <DUNE/Concurrency/RawTLS.hpp>
#include <DUNE/Concurrency/TLS.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>
#include <DUNE/Concurrency/Constants.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Concurrency/Process.hpp>
#include <DUNE/Concurrency/SharedMemory.hpp>
#include <DUNE/Concurrency/Semaphore.hpp>

#endif
