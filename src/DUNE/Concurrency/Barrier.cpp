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
#include <DUNE/Concurrency/Barrier.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Constructor.
    Barrier::Barrier(int count)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      int rv = 0;

      if ((rv = pthread_barrier_init(&m_barrier, 0, count)) != 0)
        throw BarrierError("initializing", rv);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      m_count = 0;
      m_max = count;
      pthread_mutex_init(&m_lock, 0);
      pthread_cond_init(&m_cond, 0);
#endif
    }

    //! Destructor.
    Barrier::~Barrier(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      pthread_barrier_destroy(&m_barrier);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      pthread_mutex_destroy(&m_lock);
      pthread_cond_destroy(&m_cond);
#endif
    }

    void
    Barrier::wait(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_BARRIER)
      int rv = pthread_barrier_wait(&m_barrier);

      if (rv != 0 && rv != PTHREAD_BARRIER_SERIAL_THREAD)
        throw BarrierError("wait", rv);

#elif defined(DUNE_SYS_HAS_PTHREAD_COND) && defined(DUNE_SYS_HAS_PTHREAD_MUTEX)
      pthread_mutex_lock(&m_lock);
      ++m_count;

      // Check if we should wait or not.
      if (m_count < m_max)
        pthread_cond_wait(&m_cond, &m_lock);
      else
        pthread_cond_broadcast(&m_cond);

      pthread_mutex_unlock(&m_lock);
#endif
    }
  }
}
