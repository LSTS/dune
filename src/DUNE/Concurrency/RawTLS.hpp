//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: RawTLS.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_RAWTLS_HPP_INCLUDED_
#define DUNE_CONCURRENCY_RAWTLS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

extern "C"
{
  typedef void (*dune_concurrency_raw_tls_dtr_t)(void*);
}

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM RawTLS;

    class RawTLS
    {
    public:
      //! Constructor.
      //! @param dtor optional TLS data destructor.
      RawTLS(dune_concurrency_raw_tls_dtr_t dtor = NULL);

      //! Destructor.
      ~RawTLS(void);

      //! Set data for calling thread.
      //! Previous data set, if any, is released using key destructor,
      //! For a value of 0 in particular, it releases the data for the
      //! calling thread.
      //! @param data data to set
      void
      set(const void* data);

      //! Get data set for calling thread.
      void*
      get(void);

      // Non - copyable.
      RawTLS(RawTLS const&);

      // Non - assignable
      RawTLS&
      operator=(RawTLS const&);

    private:
#if defined(DUNE_SYS_HAS_PTHREAD_KEY)
      //! pthread libray key handle.
      pthread_key_t m_key;
      //! Data destructor handle.
      dune_concurrency_raw_tls_dtr_t m_dtor;
#endif
    };
  }
}

#endif
