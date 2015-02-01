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
// Author: Filipe Ferreira                                                  *
//***************************************************************************
//                                                                          *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  IMC::Message* msg = NULL;

  unsigned phototrigger_eid = 0;

  std::ofstream logfile;
  logfile.open("gps.txt", std::ofstream::app);

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_LOGBOOKENTRY)
      {
        IMC::LogBookEntry* lbe = static_cast<IMC::LogBookEntry*>(msg);

        if (lbe->getSourceEntity() != phototrigger_eid)
          continue;

        double lat;
        double lon;
        double height;

        std::sscanf(lbe->text.c_str(), "%lf,%lf,%lf", &lat, &lon, &height);

        logfile << std::setprecision(10) << Angles::degrees(lat) << "," << Angles::degrees(lon) << "," << height << std::endl;
      }

      else if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        IMC::EntityInfo* ei = static_cast<IMC::EntityInfo*>(msg);

        if (!std::strcmp(ei->label.c_str(), "Photo Trigger"))
          phototrigger_eid = ei->id;
      }

      delete msg;
    }

    logfile.close();
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  return 0;
}
