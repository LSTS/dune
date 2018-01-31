//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Compression::Error;
using DUNE::Compression::BufferTooShort;
using DUNE::Compression::OutOfMemory;

// Call destructor on dynamic object.
TEST_CASE("heapDestructor")
{
  delete new Error("Error");
  delete new BufferTooShort(10);
  delete new OutOfMemory();
}
