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
#ifndef DUNE_CONCURRENCY_TLS_HPP_INCLUDED_
#define DUNE_CONCURRENCY_TLS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Concurrency/RawTLS.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    //! Typed thread key.
    template <typename T>
    class TLS: private RawTLS
    {
    public:
      //! Constructor.
      //! Note: it passes base class with proper destruction method.
      TLS(): RawTLS(&TLS<T>::destructor) { }

      //! Get a datum that is allocated for calling thread only.
      //! Previously allocated value is returned, or a new one
      //! is created first time round.
      T&
      value(void)
      {
        T* data = reinterpret_cast<T*>(RawTLS::get());
        if (!data)
          RawTLS::set(data = new T);
        return *data;
      }

      //! Clear datum that is allocated for calling thread.
      void
      clear(void)
      {
        // Base class takes care of deallocation
        RawTLS::set(0);
      }

      TLS<T>&
      operator=(const T& v)
      {
        value() = v;
        return *this;
      }

      T&
      operator*(void)
      {
        return value();
      }

    private:
      static void
      destructor(void* data)
      {
        delete reinterpret_cast<T*>(data);
      }
    };
  }
}
#endif
