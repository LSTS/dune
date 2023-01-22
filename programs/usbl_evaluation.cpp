//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: José Braga                                                       *
//***************************************************************************
// Utility to compute difference between UsblFix and EstimatedState         *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

int
main(int32_t argc, char** argv)
{
  // Check arguments.
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0]
              << " <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  unsigned start_index = 1;

  std::vector<float> m_avg_ranges;
  std::vector<float> m_avg_bearings;
  float m_total_ranges = 0.0;
  float m_total_bearings = 0.0;

  for (int32_t i = start_index; i < argc; ++i)
  {
    std::vector<float> m_ranges;
    std::vector<float> m_bearings;
    float m_sum_ranges = 0.0;
    float m_sum_bearings = 0.0;
    std::istream* is = 0;
    DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(argv[i]);
    if (method == DUNE::Compression::METHOD_UNKNOWN)
      is = new std::ifstream(argv[i], std::ios::binary);
    else
      is = new DUNE::Compression::FileInput(argv[i], method);

    DUNE::IMC::Message* msg = NULL;

    bool got_name = false;
    bool got_state = false;
    std::string log_name = "unknown";
    double lat, lon;

    try
    {
      while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
      {
        if (msg->getId() == DUNE_IMC_LOGGINGCONTROL)
        {
          if (!got_name)
          {
            DUNE::IMC::LoggingControl* ptr = static_cast<DUNE::IMC::LoggingControl*>(msg);

            if (ptr->op == DUNE::IMC::LoggingControl::COP_STARTED)
            {
              log_name = ptr->name;
              got_name = true;
            }
          }
        }
        else if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
        {
          if (!got_state)
            got_state = true;

          DUNE::IMC::EstimatedState* ptr = static_cast<DUNE::IMC::EstimatedState*>(msg);
          DUNE::Coordinates::toWGS84(*ptr, lat, lon);
        }
        else if (msg->getId() == DUNE_IMC_USBLFIXEXTENDED)
        {
          if (got_state)
          {
            float b, r;
            DUNE::IMC::UsblFixExtended* ptr = static_cast<DUNE::IMC::UsblFixExtended*>(msg);
            DUNE::Coordinates::WGS84::getNEBearingAndRange(lat, lon, ptr->lat,
                                                           ptr->lon, &b, &r);
            m_ranges.push_back(r);
            m_bearings.push_back(b);
            m_sum_ranges += r;
            m_sum_bearings += b;
          }
        }
        else if (msg->getId() == DUNE_IMC_USBLFIX)
        {
          if (got_state)
          {
            float b, r;
            DUNE::IMC::UsblFix* ptr = static_cast<DUNE::IMC::UsblFix*>(msg);
            DUNE::Coordinates::WGS84::getNEBearingAndRange(lat, lon, ptr->lat,
                                                           ptr->lon, &b, &r);
            m_ranges.push_back(r);
            m_bearings.push_back(b);
            m_sum_ranges += r;
            m_sum_bearings += b;
          }
        }

        delete msg;
      }
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
    }

    delete is;

    if (m_ranges.size() == 0)
    {
      std::cerr << "\r\nThere is no USBL in " << log_name << "." << std::endl;
      continue;
    }

    std::cerr << " - - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
    std::cerr << "\r\n Errors in log (" << i << "/" << argc << "): '" << log_name << "'\r\n" << std::endl;

    std::vector<float>::iterator itrr = m_ranges.begin();
    std::vector<float>::iterator itrb = m_bearings.begin();
    for (; itrr < m_ranges.end(); ++itrr, ++itrb)
      std::cerr << std::setprecision(4) << "\t" << *itrr << "m | "
                << DUNE::Math::Angles::degrees(*itrb) << "º" << std::endl;

    float avg_ranges = m_sum_ranges / m_ranges.size();
    float avg_bearings = m_sum_bearings / m_bearings.size();
    std::cerr << "\r\n\t\t Average (" << m_ranges.size() << "):"
              << std::setprecision(4) << avg_ranges << "m | "
              << DUNE::Math::Angles::degrees(avg_bearings)
              << "º" << std::endl;

    m_avg_ranges.push_back(avg_ranges);
    m_avg_bearings.push_back(avg_bearings);
    m_total_ranges += avg_ranges;
    m_total_bearings += avg_bearings;
  }

  std::cerr << "\r\n - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
  std::cerr << " - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
  std::cerr << "\r\n\t    # # # S U M M A R Y # # #\r\n" << std::endl;
  if (m_avg_ranges.size() == 0)
  {
    std::cerr << "\tNo USBL data in logs." << std::endl;
    return 0;
  }

  std::vector<float>::iterator itrr = m_avg_ranges.begin();
  std::vector<float>::iterator itrb = m_avg_bearings.begin();
  for (; itrr < m_avg_ranges.end(); ++itrr, ++itrb)
    std::cerr << std::setprecision(4) << "\t\t" << *itrr << "m | "
              << DUNE::Math::Angles::degrees(*itrb) << "º" << std::endl;

  std::cerr << "\r\n\t\t\t AVERAGE OF ALL LOG AVERAGES ("
            << m_avg_ranges.size() << "): " << std::setprecision(4)
            << m_total_ranges / m_avg_ranges.size() << "m | "
            << DUNE::Math::Angles::degrees(m_total_bearings / m_avg_bearings.size())
            << "º" << std::endl;
  return 0;
}



