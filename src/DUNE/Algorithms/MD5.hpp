//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: MD5.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

#ifndef DUNE_ALGORITHMS_MD5_HPP_INCLUDED_
#define DUNE_ALGORITHMS_MD5_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM MD5;

    //! MD-5 Algorithm (RFC 1321).
    class MD5
    {
    public:
      // Static utility methods

      //! Compute the MD5 hash sum of a given data buffer.
      //! @param buffer data buffer.
      //! @param len data buffer length.
      //! @param digest output MD5 digest (16 bytes long).
      static void
      compute(const uint8_t* buffer, unsigned int len, uint8_t* digest);

      //! Compute the MD5 hash sum for a file.
      //! @param path file path.
      //! @param digest output MD5 digest (16 bytes long).
      static void
      compute(const char* path, uint8_t* digest);

      // Instance methods

      //! Constructor.
      MD5(void);

      //! Destructor.
      ~MD5(void);

      //! Reset to an initial state.
      void
      reset(void);

      //! Update MD5 hash with input data.
      //! @param data data buffer
      //! @param size length of data
      void
      update(const uint8_t* data, int size);

      //! Finalize MD5 hash and obtain digest.
      //! @param digest output digest (16 bytes long)
      void
      finalize(uint8_t* digest);

    private:
      // Forward declaration.
      struct MD5_HANDLE;

      //! Private handle for MD5 calculation.
      MD5_HANDLE* m_handle;
    };
  }
}

#endif
