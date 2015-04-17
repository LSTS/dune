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

//! Minimum horizontal accuracy
#define MIN_HACC 12.0

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " Data.lsf[.gz]"
              << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  ByteBuffer buffer;
  std::ofstream lsf("SurfaceData.lsf", std::ios::binary);

  IMC::Message* msg;

  unsigned i = 0;

  IMC::EstimatedState state;
  IMC::Packet::serialize(&state, buffer);
  lsf.write(buffer.getBufferSigned(), buffer.getSize());
  double timestamp = -1.0;

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_GPSFIX)
      {
        IMC::GpsFix* fix = static_cast<IMC::GpsFix*>(msg);

        if ((fix->hacc <= MIN_HACC) &&
            (fix->validity & IMC::GpsFix::GFV_VALID_POS) &&
            (fix->getTimeStamp() >= timestamp))
        {
          timestamp = fix->getTimeStamp();

          IMC::Packet::serialize(msg, buffer);
          lsf.write(buffer.getBufferSigned(), buffer.getSize());

          ++i;
        }
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
    return -1;
  }

  lsf.close();

  delete is;

  std::cerr << "Got " << i << " GpsFix messages." << std::endl;

  return 0;
}
