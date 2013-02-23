//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_HPP_INCLUDED_
#define DUNE_COMPRESSION_HPP_INCLUDED_

namespace DUNE
{
  //! %Compression related routines and classes.
  namespace Compression
  { }
}

#include <DUNE/Compression/Methods.hpp>
#include <DUNE/Compression/Compressor.hpp>
#include <DUNE/Compression/Decompressor.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/Factory.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>
#include <DUNE/Compression/Bzip2Compressor.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>
#include <DUNE/Compression/Bzip2Decompressor.hpp>
#include <DUNE/Compression/ZlibDecompressor.hpp>
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/FilterInput.hpp>
#include <DUNE/Compression/FilterOutput.hpp>
#include <DUNE/Compression/FileInput.hpp>
#include <DUNE/Compression/FileOutput.hpp>

#endif
