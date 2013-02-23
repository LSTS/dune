//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: test_MD5.cpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************
// Test program for DUNE::Algorithms::MD5 class.                            *
//***************************************************************************
// ISO C++ headers
#include <cstring>
#include "Test.hpp"

// DUNE headers
#include <DUNE/Algorithms/MD5.hpp>

using namespace DUNE::Algorithms;

int
main(int argc, char** argv)
{
  Test test("DUNE::Algorithms::MD5");

  // Note - the test suite was taken from http://tools.ietf.org/html/rfc1321

  const char* input_strings[] =
  {
    "",
    "a",
    "abc",
    "message digest",
    "abcdefghijklmnopqrstuvwxyz",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    "12345678901234567890123456789012345678901234567890123456789012345678901234567890"
  };

  const uint8_t results[][16] =
  {
    {0xd4, 0x1d, 0x8c, 0xd9, 0x8f, 0x00, 0xb2, 0x04, 0xe9, 0x80, 0x09, 0x98, 0xec, 0xf8, 0x42, 0x7e},
    {0x0c, 0xc1, 0x75, 0xb9, 0xc0, 0xf1, 0xb6, 0xa8, 0x31, 0xc3, 0x99, 0xe2, 0x69, 0x77, 0x26, 0x61},
    {0x90, 0x01, 0x50, 0x98, 0x3c, 0xd2, 0x4f, 0xb0, 0xd6, 0x96, 0x3f, 0x7d, 0x28, 0xe1, 0x7f, 0x72},
    {0xf9, 0x6b, 0x69, 0x7d, 0x7c, 0xb7, 0x93, 0x8d, 0x52, 0x5a, 0x2f, 0x31, 0xaa, 0xf1, 0x61, 0xd0},
    {0xc3, 0xfc, 0xd3, 0xd7, 0x61, 0x92, 0xe4, 0x00, 0x7d, 0xfb, 0x49, 0x6c, 0xca, 0x67, 0xe1, 0x3b},
    {0xd1, 0x74, 0xab, 0x98, 0xd2, 0x77, 0xd9, 0xf5, 0xa5, 0x61, 0x1c, 0x2c, 0x9f, 0x41, 0x9d, 0x9f},
    {0x57, 0xed, 0xf4, 0xa2, 0x2b, 0xe3, 0xc9, 0x55, 0xac, 0x49, 0xda, 0x2e, 0x21, 0x07, 0xb6, 0x7a}
  };

  int n = sizeof(input_strings) / sizeof(const char*);

  uint8_t digest[16];

  for (int i = 0; i < n; ++i)
  {
    MD5::compute((const uint8_t*)input_strings[i], std::strlen(input_strings[i]), digest);
    test.boolean(input_strings[i], !std::memcmp(digest, results[i], sizeof(digest)));
  }
  return 0;
}
