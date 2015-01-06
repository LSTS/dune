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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Exceptions.hpp>
#include <DUNE/Concurrency/RawTLS.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    RawTLS::RawTLS(dune_concurrency_raw_tls_dtr_t dtor):
      m_dtor(dtor)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_KEY)
      int rv = pthread_key_create(&m_key, m_dtor);

      if (rv != 0)
        throw TLSError(rv);
#endif
    }

    RawTLS::~RawTLS(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_KEY)
      pthread_key_delete(m_key);
#endif
    }

    void
    RawTLS::set(const void* data)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_KEY)
      if (m_dtor)
      {
        void* prev = pthread_getspecific(m_key);
        if (prev)
          m_dtor(prev);
      }
      pthread_setspecific(m_key, data);
#endif
    }

    void*
    RawTLS::get(void)
    {
#if defined(DUNE_SYS_HAS_PTHREAD_KEY)
      return pthread_getspecific(m_key);
#else
      return 0;
#endif
    }
  }
}
