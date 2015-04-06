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
// Author: Pedro Calado                                                     *
//***************************************************************************
// Utility to compute distance travelled from LSF log files.                *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
  if (argc < 2)
  {
    std::cerr << "Usage: " << argv[0] << " <abbrev of imc message 1>,<abbrev of imc message 2>,..,"
              << "<abbrev of imc message n> Data.lsf[.gz] .. Data.lsf[.gz]"
              << std::endl;
    std::cerr << argv[0] << " accepts multiple IMC messages comma separated and "
              << "multiple Data.lsf files space separated." << std::endl;
    std::cerr << "This program does not sort the input Data.lsf files." << std::endl;
    return 1;
  }

  ByteBuffer buffer;
  std::ofstream lsf("FilteredData.lsf", std::ios::binary);

  IMC::Message* msg;

  uint32_t accum = 0;

  bool done_first = false;

  std::set<uint32_t> ids;
  std::vector<std::string> msgs;
  Utils::String::split(argv[1], ",", msgs);

  for (unsigned k = 0; k < msgs.size(); ++k)
  {
    uint32_t got = IMC::Factory::getIdFromAbbrev(Utils::String::trim(msgs[k]));
    ids.insert(got);
  }

  for (uint32_t j = 2; j < (uint32_t)argc; ++j)
  {
    std::istream* is = 0;
    Compression::Methods method = Compression::Factory::detect(argv[j]);
    if (method == METHOD_UNKNOWN)
      is = new std::ifstream(argv[j], std::ios::binary);
    else
      is = new Compression::FileInput(argv[j], method);

    uint32_t i = 0;

    try
    {
      while ((msg = IMC::Packet::deserialize(*is)) != 0)
      {
        if (!done_first)
        {
          // place an empty estimatedstate message in the log
          IMC::EstimatedState state;
          state.setTimeStamp(msg->getTimeStamp());
          IMC::Packet::serialize(&state, buffer);
          lsf.write(buffer.getBufferSigned(), buffer.getSize());
          done_first = true;
        }

        std::set<uint32_t>::const_iterator it;
        it = ids.find(msg->getId());

        if (it != ids.end())
        {
          IMC::Packet::serialize(msg, buffer);
          lsf.write(buffer.getBufferSigned(), buffer.getSize());

          ++i;
        }

        delete msg;
      }
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
      return -1;
    }

    std::cerr << i << " messages in " << argv[j] << std::endl;
    accum += i;

    delete is;
  }

  lsf.close();

  std::cerr << "Total of " << accum << " " << argv[1] << " messages." << std::endl;

  return 0;
}
