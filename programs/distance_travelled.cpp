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

// Minimum rpm before starting to assume that the vehicle is moving
const float c_min_rpm = 400.0;
// Maximum speed between to consider when integrating
const float c_max_speed = 6.0;
// Timestep
const float c_timestep = 0.5;

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  double total_accum = 0;

  // Accumulated travelled time
  double duration = 0.0;

  for (int32_t i = 1; i < argc; ++i)
  {
    std::istream* is = 0;
    Compression::Methods method = Compression::Factory::detect(argv[i]);
    if (method == METHOD_UNKNOWN)
      is = new std::ifstream(argv[i], std::ios::binary);
    else
      is = new Compression::FileInput(argv[i], method);

    IMC::Message* msg = NULL;

    uint16_t curr_rpm = 0;

    bool got_state = false;
    IMC::EstimatedState estate;
    double last_lat;
    double last_lon;

    // Accumulated travelled distance
    double accum = 0.0;

    bool got_name = false;
    std::string log_name = "unknown";

    bool ignore = false;

    try
    {
      while ((msg = IMC::Packet::deserialize(*is)) != 0)
      {

        if (msg->getId() == DUNE_IMC_LOGGINGCONTROL)
        {
          if (!got_name)
          {
            IMC::LoggingControl* ptr = dynamic_cast<IMC::LoggingControl*>(msg);

            if (ptr->op == IMC::LoggingControl::COP_STARTED)
            {
              log_name = ptr->name;
              got_name = true;
            }
          }
        }
        else if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
        {
          if (msg->getTimeStamp() - estate.getTimeStamp() > c_timestep)
          {
            IMC::EstimatedState* ptr = dynamic_cast<IMC::EstimatedState*>(msg);

            if (!got_state)
            {
              estate = *ptr;
              Coordinates::toWGS84(*ptr, last_lat, last_lon);

              got_state = true;
            }
            else if (curr_rpm > c_min_rpm)
            {
              double lat, lon;
              Coordinates::toWGS84(*ptr, lat, lon);

              double dist = Coordinates::WGS84::distance(last_lat, last_lon, 0.0,
                                                         lat, lon, 0.0);

              // Not faster than maximum considered speed
              if (dist / (ptr->getTimeStamp() - estate.getTimeStamp()) < c_max_speed)
              {
                accum += dist;
                duration += msg->getTimeStamp() - estate.getTimeStamp();
              }

              estate = *ptr;
              Coordinates::toWGS84(*ptr, last_lat, last_lon);
            }
          }
        }
        else if (msg->getId() == DUNE_IMC_RPM)
        {
          IMC::Rpm* ptr = dynamic_cast<IMC::Rpm*>(msg);
          curr_rpm = ptr->value;
        }
        else if (msg->getId() == DUNE_IMC_SIMULATEDSTATE)
        {
          // since it has simulated state let us ignore this log
          ignore = true;
          delete msg;
          std::cerr << "this is a simulated log";
          break;
        }

        delete msg;

        // ignore idles
        // either has the string _idle or has only 
        if (log_name.find("_idle") != std::string::npos ||
            log_name.size() == 15)
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

    delete is;

    if (ignore)
    {
      std::cerr << "... ignoring" << std::endl;
      continue;
    }

    std::cerr << "Travelled " << accum << " in " << log_name << "." << std::endl;

    total_accum += accum;
  }

  std::cerr << "Total travelled distance is " << total_accum << "m" << std::endl
            << " or " << total_accum / 1000.0 << " km." << std::endl;

  std::cerr << "Travelled for " << (unsigned)duration / 60 / 60 << "h"
            << (unsigned)(duration / 60) % 60 << "m"
            << (unsigned)duration % 60 << "s" << "." << std::endl;

  return 0;
}
