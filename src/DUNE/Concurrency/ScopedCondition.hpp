//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_SCOPED_CONDITION_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SCOPED_CONDITION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>
#include <DUNE/Concurrency/Condition.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Scoped Condition.
    class ScopedCondition
    {
    public:
      //! Construct the object, locking the associated condition.
      //! @param l associated condition.
      ScopedCondition(Condition& l):
        m_lock(l)
      {
        m_lock.lock();
      }

      //! Destruct the object, unlocking the associated condition.
      ~ScopedCondition(void)
      {
        m_lock.unlock();
      }

    private:
      //! Associated condition.
      Condition& m_lock;

      //! This class is non - copyable.
      ScopedCondition(const ScopedCondition&);

      //! This class is non - assignable.
      ScopedCondition&
      operator=(const ScopedCondition&);
    };
  }
}

#endif
