//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
