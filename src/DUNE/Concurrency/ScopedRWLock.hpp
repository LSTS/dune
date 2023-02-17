//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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
