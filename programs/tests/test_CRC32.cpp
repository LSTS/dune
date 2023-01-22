//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Kristoffer Gryte                                                 *
//***************************************************************************
// Test program for DUNE::Algorithms::CRC32 class.                          *
//***************************************************************************
// ISO C++ headers
#include <cstring>
#include <string>

// DUNE headers
#include <DUNE/Algorithms/CRC32.hpp>
#include "Test.hpp"
/* // Gzip headers. */
/* #include <zlib/zlib.h> */

using namespace DUNE::Algorithms;

int
main(int argc, char** argv)
{
  Test test("DUNE::Algorithms::CRC32");

  // Tesed against http://www.sunshine2k.de/coding/javascript/crc/crc_js.html
  const char* input_strings[] =
  {
    "a",
    "abc",
    "message digest",
    "qwertyuiop",
    "abcdefghijklmnopqrstuvwxyz",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    "12345678901234567890123456789012345678901234567890123456789012345678901234567890"
  };

  // default CRC32 settings
  const uint32_t results[8] =
  {
		0xE8B7BE43,
		0x352441C2,
		0x20159D7F,
		0x40C92C2D,
		0x4C2750BD,
		0x1FC2E6D2,
		0x7CA94A72
  };

  const uint32_t results_no_reflect_data[8] =
  {
		0xD6D9C998,
		0xCEDD3126,
		0xEAC093FD,
		0x3340D7ED,
		0x69C9FDEE,
		0x11842E05,
		0x699E1068 
  };

  uint32_t initial_crc = 0xFFFFFFFF;
  uint8_t input[] = {0x01, 0x23, 0x45, 0x67};//, 0x89ABCDEF, 0x00000123};
  uint8_t input_stim[] = {0x93, 0x00, 0x26, 0x76, 0x00, 0x4c, 0x40, 0x00, 0x18, 
			  0xb3, 0x00, 0xff, 0xf2, 0x0c, 0xfd, 0x7e, 0x3b, 0x00, 
			  0x0c, 0xf8, 0x00, 0xff, 0xc0, 0x61, 0xeb, 0xe0, 0xdd,
			  0x00, 0x32, 0x9d, 0x00, 0x39, 0x02, 0x04, 0x00, 0x00}; // should yield 0x97D4282A

  uint32_t stim_crc = CRC32::reflect(CRC32::compute((const uint8_t*)input_stim, sizeof(input_stim)/sizeof(uint8_t), true, ~initial_crc) ^ 0xFFFFFFFF, 32);
  test.boolean("STIM CRC", stim_crc == 0x97D4282A);
  /* uint32_t crc = crc32(0, (Bytef*)input, sizeof(input)/sizeof(uint8_t)); */
  /* test.boolean("1", crc == 0xFD2B0F7B); */

  int n = sizeof(input_strings) / sizeof(const char*);
  std::string testname;
  for (int i = 0; i < n; ++i)
  {
    uint32_t crc = CRC32::compute((const uint8_t*)input_strings[i], std::strlen(input_strings[i]),false,0);
    testname = "Standard, " + std::string(input_strings[i]);
    test.boolean(testname.c_str(), crc == results[i]);
  }
  for (int i = 0; i < n; ++i)
  {
    uint32_t crc = CRC32::compute((const uint8_t*)input_strings[i], std::strlen(input_strings[i]),true,0);
    testname = "No data reflection, " + std::string(input_strings[i]);
    test.boolean(testname.c_str(), crc == results_no_reflect_data[i]);
  }
  return 0;
}
