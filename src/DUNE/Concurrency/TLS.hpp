//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: TLS.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
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
