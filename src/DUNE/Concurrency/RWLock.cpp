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

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/RWLock.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    RWLock::RWLock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_init(&m_lock, 0);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    RWLock::~RWLock(void)
    {
      try
      {
        destroy();
      }
      catch (...)
      { }
    }

    //! Apply a read lock.
    void
    RWLock::lockRead(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_rdlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Apply a write lock.
    void
    RWLock::lockWrite(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_wrlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Release the lock held.
    void
    RWLock::unlock(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_unlock(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }

    //! Release the lock held.
    void
    RWLock::destroy(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_RWLOCK)
      int rv = pthread_rwlock_destroy(&m_lock);

      if (rv != 0)
        throw RWLockError(rv);
#endif
    }
  }
}
