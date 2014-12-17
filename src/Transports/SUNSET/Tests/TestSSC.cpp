//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>

#include <DUNE/DUNE.hpp>

// Task headers.
#include <Transports/SUNSET/SSC/Commands.hpp>

// Local headers.
#include "Test.hpp"

using DUNE_NAMESPACES;

static std::string
computeCRC(const std::string& str)
{
  uint16_t crc = DUNE::Algorithms::CRC16::compute((const uint8_t*)&str[0], str.size());
  return DUNE::Utils::String::str("%04X", crc);
}

int
main(int argc, char** argv)
{
  // Test test("Transports/SUNSET/Command");

  // {
  //   try
  //   {
  //     Transports::SUNSET::Param cmd;
  //     std::set<unsigned> dsts;
  //     dsts.insert(0);

  //     cmd.setTTL(30)
  //     .setFlags(0x00)
  //     .setPriority(0)
  //     .setDestinations(dsts);

  //     std::string str = cmd.encode();
  //     std::cerr << str << std::endl;

  //   }
  //   catch (std::exception& e)
  //   {
  //     std::cerr << e.what() << std::endl;
  //   }
  // }

  // Test# 0.
  // {
  //   const char* text = "Encode/Decode";
  //   try
  //   {
  //     Transports::SUNSET::CommandOk cmd0;
  //     cmd0.setSource(1)
  //     .addDestination(2)
  //     .setTTL(30)
  //     .setFlags(0x01)
  //     .setPriority(1);
  //     cmd0.name = "None";

  //     std::string str = cmd0.encode();
  //     Transports::SUNSET::CommandOk cmd1;
  //     cmd1.decode(str);

  //     test.boolean(text, cmd0 == cmd1);
  //   }
  //   catch (std::exception& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  // // Test# 0.
  // {
  //   const char* text = "Encode/Decode";
  //   try
  //   {
  //     Transports::SUNSET::Command cmd0;
  //     cmd0.setName("Abort")
  //     .setVersion(0)
  //     .setSource(1)
  //     .addDestination(2)
  //     .setTTL(30)
  //     .setFlags(0x01)
  //     .setPriority(1);

  //     std::string str = cmd0.encode();
  //     Transports::SUNSET::Command cmd1;
  //     cmd1.decode(str);

  //     test.boolean(text, cmd0 == cmd1);
  //   }
  //   catch (std::exception& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  // // Test# 1.
  // {
  //   const char* text = "Invalid Checksum";
  //   try
  //   {
  //     std::string str("SSC,0,01,30,1,1,1,2,Abort,853\n");
  //     Transports::SUNSET::Command cmd;
  //     cmd.decode(str);
  //     test.failed(text, "invalid checksum not detected");
  //   }
  //   catch (Transports::SUNSET::InvalidChecksum& e)
  //   {
  //     test.passed(text);
  //   }
  //   catch (std::runtime_error& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  // // Test# 2.
  // {
  //   const char* text = "Invalid Format (prefix)";
  //   try
  //   {
  //     std::string str("SS,0,01,30,1,1,1,2,Abort,");
  //     str.append(computeCRC(str) + Transports::SUNSET::c_ssc_term);

  //     Transports::SUNSET::Command cmd;
  //     cmd.decode(str);
  //     test.failed(text, "invalid format not detected");
  //   }
  //   catch (Transports::SUNSET::InvalidFormat& e)
  //   {
  //     test.passed(text, e.what());
  //   }
  //   catch (std::runtime_error& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  // // Test# 3.
  // {
  //   const char* text = "Invalid Format (destinations)";
  //   try
  //   {
  //     std::string str("SSC,0,01,30,1,1,4,1,2,Abort,");
  //     str.append(computeCRC(str) + Transports::SUNSET::c_ssc_term);

  //     Transports::SUNSET::Command cmd;
  //     cmd.decode(str);
  //     test.failed(text, "invalid format not detected");
  //   }
  //   catch (Transports::SUNSET::InvalidFormat& e)
  //   {
  //     test.passed(text, e.what());
  //   }
  //   catch (std::runtime_error& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  // // Test# 4.
  // {
  //   const char* text = "Invalid Format (minimum args)";
  //   try
  //   {
  //     std::string str("SSC,0,01,30,1,1,1,");
  //     str.append(computeCRC(str) + Transports::SUNSET::c_ssc_term);

  //     Transports::SUNSET::Command cmd;
  //     cmd.decode(str);
  //     test.failed(text, "invalid format not detected");
  //   }
  //   catch (Transports::SUNSET::InvalidFormat& e)
  //   {
  //     test.passed(text, e.what());
  //   }
  //   catch (std::runtime_error& e)
  //   {
  //     test.failed(text, e.what());
  //   }
  // }

  return 0;
}
