//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************
// Utility to create a CSV file with all CTD data from a log.               *
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

enum Content
{
  //! Conductivity
  GOT_COND = 0x01,
  //! Temperature
  GOT_TEMP = 0x02,
  //! Got depth
  GOT_DEPTH = 0x04,
  //! Got state
  GOT_STATE = 0x08,
  //! Got all
  GOT_ALL = GOT_COND | GOT_TEMP | GOT_DEPTH | GOT_STATE
};

static const std::string c_ctd_label = "CTD";

struct RData
{
  unsigned cnt;
  double timestamp;
  double lat;
  double lon;
  float cond;
  float temp;
  float depth;

  bool
  gotState(void)
  {
    return (cnt & GOT_STATE) != 0;
  }

  bool
  gotAll(void)
  {
    return (cnt == GOT_ALL);
  }

  void
  writeToStream(std::ofstream& ofs)
  {
    ofs << std::fixed << std::setprecision(3)
        << timestamp << ", "
        << std::fixed << std::setprecision(7)
        << lat * 180.0 / Math::c_pi << ", "
        << lon * 180.0 / Math::c_pi << ", "
        << std::fixed << std::setprecision(4)
        << cond << ", "
        << temp << ", "
        << depth;
    ofs << std::endl;
  }

  void
  clearData(void)
  {
    cnt = 0x00;
  }
};

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " [options] <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl
              << "Options:" << std::endl
              << "-i    Process idles. Idle logs are ignored by default."
              << std::endl;
    return 1;
  }

  std::ofstream csv("AllData.csv");
  csv << "timestamp (s), latitude (deg), longitude (deg), conductivity (S/m), temperature (ºC), depth (m)" << std::endl;

  for (int32_t i = 1; i < argc; ++i)
  {
    std::istream* is = 0;
    Compression::Methods method = Compression::Factory::detect(argv[i]);
    if (method == METHOD_UNKNOWN)
      is = new std::ifstream(argv[i], std::ios::binary);
    else
      is = new Compression::FileInput(argv[i], method);

    IMC::Message* msg = NULL;

    bool got_name = false;
    std::string log_name = "unknown";

    bool got_ent = false;
    unsigned ctd_ent = 0;

    bool ignore = false;

    RData rdata;
    rdata.clearData();
    std::stringstream ss_data;

    try
    {
      while ((msg = IMC::Packet::deserialize(*is)) != 0)
      {
        if (msg->getId() == DUNE_IMC_LOGGINGCONTROL)
        {
          IMC::LoggingControl* ptr = dynamic_cast<IMC::LoggingControl*>(msg);

          if (ptr->op == IMC::LoggingControl::COP_STARTED)
          {
            log_name = ptr->name;
            got_name = true;
          }
        }
        else if (msg->getId() == DUNE_IMC_ENTITYINFO)
        {
          IMC::EntityInfo *ptr = dynamic_cast<IMC::EntityInfo*>(msg);

          if (ptr->label.compare(c_ctd_label) == 0)
          {
            ctd_ent = ptr->id;
            got_ent = true;
          }
        }
        else if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
        {
          IMC::EstimatedState* ptr = dynamic_cast<IMC::EstimatedState*>(msg);

          Coordinates::toWGS84(*ptr, rdata.lat, rdata.lon);
          rdata.timestamp = ptr->getTimeStamp();

          rdata.cnt |= GOT_STATE;
        }
        else if (rdata.gotState() && got_ent)
        {
          if (msg->getId() == DUNE_IMC_CONDUCTIVITY)
          {
            IMC::Conductivity* ptr = dynamic_cast<IMC::Conductivity*>(msg);
            if (ptr->getSourceEntity() == ctd_ent)
            {
              rdata.cond = ptr->value;
              rdata.cnt |= GOT_COND;
            }
          }
          else if (msg->getId() == DUNE_IMC_TEMPERATURE)
          {
            IMC::Temperature* ptr = dynamic_cast<IMC::Temperature*>(msg);
            if (ptr->getSourceEntity() == ctd_ent)
            {
              rdata.temp = ptr->value;
              rdata.cnt |= GOT_TEMP;
            }
          }
          else if (msg->getId() == DUNE_IMC_DEPTH)
          {
            IMC::Depth* ptr = dynamic_cast<IMC::Depth*>(msg);
            if (ptr->getSourceEntity() == ctd_ent)
            {
              rdata.depth = ptr->value;
              rdata.cnt |= GOT_DEPTH;
            }
          }

          if (rdata.gotAll())
          {
            rdata.writeToStream(csv);
            rdata.clearData();
          }
        }

        delete msg;

        // ignore idles
        // either has the string _idle or has only 
        if (got_name &&
            (log_name.find("_idle") != std::string::npos ||
             log_name.size() == 15))
        {
          ignore = true;
          std::cerr << "this is an idle log";
          break;
        }
      }
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
    }

    csv.flush();

    delete is;

    if (ignore)
    {
      std::cerr << "... ignoring " << log_name << std::endl;
      continue;
    }
    else
    {
      std::cerr << "Processed " << log_name << std::endl;
    }
  }

  csv.close();

  return 0;
}
