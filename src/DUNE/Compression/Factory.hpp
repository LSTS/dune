//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Factory.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_COMPRESSION_FACTORY_HPP_INCLUDED_
#define DUNE_COMPRESSION_FACTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Forward declarations.
    class Compressor;
    class Decompressor;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Factory;

    class Factory
    {
    public:
      static Methods
      method(const std::string& name);

      static std::string
      method(Methods name);

      static std::string
      extension(Methods name);

      static std::string
      extension(const std::string& name);

      static Methods
      detect(const char* fname);

      static Compressor*
      compressor(Methods method);

      static Compressor*
      compressor(const std::string& method);

      static Decompressor*
      decompressor(Methods method);

      static Decompressor*
      decompressor(const std::string& method);
    };
  }
}

#endif
