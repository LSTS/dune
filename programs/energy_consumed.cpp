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
// Utility to compute energy consumed during in LSF log file.               *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>
// Battery Data
#include <Monitors/FuelLevel/BatteryData.hpp>

// Minimum rpm before starting to assume that the vehicle is moving
const float c_min_rpm = 400.0;
// Entity label string to look for
const std::string c_label = "Batteries";
// Number of moving average samples
const unsigned c_samples = 7;
// Minimum number of samples before starting to count energy
const unsigned c_min_samples = 20;

int
main(int32_t argc, char** argv)
{
  if (argc <= 1)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl;
    std::cerr << "Or: " << argv[0] << "-e <Voltage Entity Label> <Current Entity Label> <path_to_log_1/Data.lsf[.gz]> ... <path_to_log_n/Data.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  std::string volt_label;
  std::string curr_label;

  unsigned start_index = 1;

  if (strcmp(argv[1], "-e") == 0)
  {
    if (argc < 5)
    {
      std::cerr << "Too few arguments" << std::endl;
      return 1;
    }

    volt_label = argv[2];
    curr_label = argv[3];

    start_index = 4;
  }
  else
  {
    volt_label = c_label;
    curr_label = c_label;
  }

  // Total of energy spent
  double total_accum = 0.0;
  // Total energy spent while the motor was on
  double motor_total_accum = 0.0;

  // Moving average window sizes
  unsigned wsizes[Monitors::FuelLevel::BatteryData::BM_TOTAL];

  for (unsigned k = 0; k < Monitors::FuelLevel::BatteryData::BM_TOTAL; k++)
    wsizes[k] = c_samples;

  for (int32_t i = start_index; i < argc; ++i)
  {
    std::istream* is = 0;
    DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(argv[i]);
    if (method == DUNE::Compression::METHOD_UNKNOWN)
      is = new std::ifstream(argv[i], std::ios::binary);
    else
      is = new DUNE::Compression::FileInput(argv[i], method);

    DUNE::IMC::Message* msg = NULL;

    bool got_name = false;
    std::string log_name = "unknown";

    // Energy computation related data
    Monitors::FuelLevel::BatteryData bdata(wsizes);
    bool volt_entity_set = false;
    bool curr_entity_set = false;
    bool entities_set = false;
    unsigned eids[Monitors::FuelLevel::BatteryData::BM_TOTAL] = {0};
    unsigned samples = 0;
    double last_timestamp = 0.0;
    double accum = 0.0;

    // Current rpm value
    float rpm = 0.0;

    // Ignore some logs
    bool ignore = false;

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
        else if (msg->getId() == DUNE_IMC_ENTITYINFO)
        {
          DUNE::IMC::EntityInfo* ptr = static_cast<DUNE::IMC::EntityInfo*>(msg);

          if (ptr->label.compare(volt_label) == 0)
          {
            eids[Monitors::FuelLevel::BatteryData::BM_VOLTAGE] = ptr->id;
            volt_entity_set = true;
          }

          if (ptr->label.compare(curr_label) == 0)
          {
            eids[Monitors::FuelLevel::BatteryData::BM_CURRENT] = ptr->id;
            curr_entity_set = true;
          }

          if (!entities_set && volt_entity_set && curr_entity_set)
          {
            bdata.setEntities(eids);
            entities_set = true;
          }
        }
        else if (msg->getId() == DUNE_IMC_VOLTAGE)
        {
          if (entities_set)
          {
            DUNE::IMC::Voltage* ptr = static_cast<DUNE::IMC::Voltage*>(msg);
            bdata.update(ptr);
            ++samples;

            if (samples > c_min_samples)
            {
              float drop = bdata.getEnergyDrop(msg->getTimeStamp() - last_timestamp);
              accum += drop;

              if (rpm > c_min_rpm)
                motor_total_accum += drop;
            }
          }

          last_timestamp = msg->getTimeStamp();
        }
        else if (msg->getId() == DUNE_IMC_CURRENT)
        {
          if (entities_set)
          {
            DUNE::IMC::Current* ptr = static_cast<DUNE::IMC::Current*>(msg);
            bdata.update(ptr);
          }
        }
        else if (msg->getId() == DUNE_IMC_RPM)
        {
          DUNE::IMC::Rpm* ptr = static_cast<DUNE::IMC::Rpm*>(msg);
          rpm = ptr->value;
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

    std::cerr << "Consumed " << accum << " in " << log_name << "." << std::endl;

    total_accum += accum;
  }

  std::cerr << "Total energy consumed is " << total_accum << "Wh" << std::endl
            << "The amount of " << motor_total_accum
            << std::fixed << std::setprecision(1)
            << "Wh (" << motor_total_accum / total_accum * 100.0
            << "%) was consumed while the motor was on" << std::endl;

  return 0;
}
