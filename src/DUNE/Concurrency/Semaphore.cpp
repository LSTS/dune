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
