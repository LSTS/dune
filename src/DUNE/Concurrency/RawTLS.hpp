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

#ifndef DUNE_CONCURRENCY_RAW_TLS_HPP_INCLUDED_
#define DUNE_CONCURRENCY_RAW_TLS_HPP_INCLUDED_

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
