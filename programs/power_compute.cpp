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
// Author: Pedro Calado                                                     *
//***************************************************************************
// Utility to compute device's power consumption from LSF test log files.   *
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

struct ElectricMeasure
{
  // Current accumulated sum
  double sum;
  // Number of measures
  unsigned count;
  // Value of the previous average
  double prev;

  ElectricMeasure(void):
    sum(0.0), count(0), prev(0.0)
  { };

  void
  addMeasure(double value)
  {
    ++count;
    sum += value;
  }

  double
  update(void)
  {
    double temp = prev;
    prev = sum / (double)count;
    sum = 0.0;
    count = 0;
    return temp;
  }

  void
  reset(void)
  {
    sum = 0.0;
    count = 0;
    prev = 0.0;
  }
};

enum Supplies
{
  // 5 volts
  SU_5_VOLT,
  // 12 volts
  SU_12_VOLT,
  // Batteries
  SU_BATTERIES,
  // Number of supplies
  SU_COUNT
};

static const std::string c_supply_name[] = {"Power Supply (+5VDC)", "Power Supply (+12VDC)",
                                            "Batteries"};

uint8_t
findLargest(double jumps[])
{
  double largest = 0.0;
  uint8_t index = 0;

  for (unsigned i = 0; i < SU_COUNT; i++)
  {
    if (jumps[i] > largest)
    {
      largest = jumps[i];
      index = i;
    }
  }

  return index;
}

void
printPower(std::string device_name, ElectricMeasure voltage[], ElectricMeasure current[])
{
  std::cerr << device_name << ":" << std::endl;

  // Jump in current
  double curr_jump[SU_COUNT];

  for (unsigned i = 0; i < SU_COUNT; i++)
  {
    voltage[i].update();
    curr_jump[i] = current[i].update();
    curr_jump[i] = current[i].prev - curr_jump[i];
  }

  uint8_t index = findLargest(curr_jump);

  std::cerr << "Using label \"" << c_supply_name[index] << "\"" << std::endl;

  std::cerr << "consumes " << voltage[index].prev * curr_jump[index]
            << " Watt" << std::endl << std::endl;
}

int
main(int argc, char** argv)
{
  Utils::OptionParser options;
  options.executable(argv[0])
  .program(argv[0])
  .copyright(DUNE_COPYRIGHT)
  .email(DUNE_CONTACT)
  .version("1.0")
  .date(DUNE_BUILD_TIME)
  .arch(DUNE_SYSTEM_NAME)
  .add("-t", "--timeout",
       "Interval to ignore data right after a new device has been turned on."
       " Default is 10.0", "TIMEOUT")
  .add("-f", "--file",
       "Log file in .lsf or .lsf.gz format", "FILE");

  // Parse command line arguments.
  if (!options.parse(argc, argv) || options.value("--file").empty())
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;

    options.usage();
    return 1;
  }

  std::string file = options.value("--file");

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(file.c_str());
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(file.c_str(), std::ios::binary);
  else
    is = new Compression::FileInput(file.c_str(), method);

  IMC::Message* msg = NULL;

  // Current and voltage measurements
  ElectricMeasure current_measures[SU_COUNT];
  ElectricMeasure voltage_measures[SU_COUNT];

  typedef std::map<uint8_t, std::string> Id2Name;
  Id2Name channel_names;

  typedef std::map<uint8_t, uint8_t> Supply2Id;
  Supply2Id measure_ids;

  typedef std::map<std::string, double> Name2Power;
  Name2Power device_power;

  // Got all power channels
  bool got_channels = false;

  // Time counter
  double counter = 0.0;

  // Test has started
  bool test_started = false;

  // Ignore measures if true
  bool ignore_data = true;
  bool was_ignoring = true;

  // Last timestamp
  double last_timestamp = -1.0;

  // Timeout for ignoring data
  double ignore_timeout;
  if (options.value("--timeout").empty())
    ignore_timeout = 10.0;
  else
    ignore_timeout = atoi(options.value("--timeout").c_str());

  // Last device turned on
  Id2Name::const_iterator last_device = channel_names.end();

  try
  {
    while ((msg = IMC::Packet::deserialize(*is)) != 0)
    {
      if (last_timestamp < 0.0)
        last_timestamp = msg->getTimeStamp();

      if (ignore_data != was_ignoring)
      {
        if (!was_ignoring)
        {
          // reset timer counter
          counter = 0.0;
        }
      }

      if (ignore_data && test_started)
      {
        counter += msg->getTimeStamp() - last_timestamp;

        if (counter >= ignore_timeout)
        {
          counter = 0.0;
          ignore_data = false;
        }
      }

      was_ignoring = ignore_data;
      last_timestamp = msg->getTimeStamp();

      if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        IMC::EntityInfo* einfo = static_cast<IMC::EntityInfo*>(msg);

        for (unsigned i = 0; i < SU_COUNT; i++)
        {
          if (std::strcmp(einfo->label.c_str(), c_supply_name[i].c_str()) == 0)
          {
            measure_ids.insert(std::pair<uint8_t, uint8_t>(einfo->id, i));
            break;
          }
        }
      }
      else if (msg->getId() == DUNE_IMC_POWERCHANNELCONTROL)
      {
        IMC::PowerChannelControl* pcc = static_cast<IMC::PowerChannelControl*>(msg);

        if (pcc->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF && got_channels)
        {
          ignore_data = true;
          test_started = true;
        }
        else if (pcc->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
        {
          if (last_device != channel_names.end())
          {
            printPower(last_device->second, voltage_measures, current_measures);
          }
          else
          {
            for (unsigned i = 0; i < SU_COUNT; i++)
            {
              voltage_measures[i].update();
              current_measures[i].update();
            }
          }

          ignore_data = true;
          last_device = channel_names.find(pcc->id);
        }
      }
      else if (msg->getId() == DUNE_IMC_POWERCHANNELSTATE)
      {
        IMC::PowerChannelState* pcs = static_cast<IMC::PowerChannelState*>(msg);

        if (channel_names.find(pcs->id) == channel_names.end())
          channel_names.insert(std::pair<uint8_t, std::string>(pcs->id, pcs->label));
        else
          got_channels = true;
      }
      else if (msg->getId() == DUNE_IMC_VOLTAGE)
      {
        IMC::Voltage* volt = static_cast<IMC::Voltage*>(msg);
        Supply2Id::const_iterator it = measure_ids.find(volt->getSourceEntity());

        if (it != measure_ids.end() && !ignore_data)
          voltage_measures[it->second].addMeasure(volt->value);
      }
      else if (msg->getId() == DUNE_IMC_CURRENT)
      {
        IMC::Current* curr = static_cast<IMC::Current*>(msg);
        Supply2Id::const_iterator it = measure_ids.find(curr->getSourceEntity());

        if (it != measure_ids.end() && !ignore_data)
          current_measures[it->second].addMeasure(curr->value);
      }
    }

    // Compute last device in the list
    printPower(last_device->second, voltage_measures, current_measures);
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  return 0;
}
