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
// Utility to replay the fuel filter using a log file.                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>
// Battery Data
#include <Monitors/FuelLevel/BatteryData.hpp>
#include <Monitors/FuelLevel/FuelFilter.hpp>
#include <Monitors/FuelLevel/EntityPower.hpp>

// Minimum number of samples before starting to count energy
const unsigned c_min_samples = 20;
//! Discharge curve model names
static const std::string c_model_names[] = {"Optimistic", "Pessimistic", "Zero", "Very Cold"};

using namespace Monitors::FuelLevel;

struct Arguments
{
  FuelFilter::Arguments filter_args;
  //! Entity label for measurement readings.
  std::string elb[BatteryData::BM_TOTAL];
  //! Label of the operation modes.
  std::vector<std::string> op_labels;
  //! Corresponding value of power consumption in these modes.
  std::vector<float> op_values;
  //! Level of battery below which a warning will be thrown.
  float war_lvl;
  //! Level of battery below which an error will be thrown.
  float err_lvl;
  //! Value below which fuel estimation is unreliable.
  float low_confidence;
  //! List of entity labels that must be estimated.
  std::vector<std::string> est_list;
  //! List of estimated power consumed by the entities
  std::vector<float> est_power;
};

struct PseudoTimer
{
  //! Is timer valid
  bool valid;
  //! Time
  double time;

  PseudoTimer(void):
    valid(false)
  { }

  void
  update(double t)
  {
    time = t;

    if (!valid)
      valid = true;
  }

  bool
  isValid(void) const
  {
    return valid;
  }

  double
  getTime(void) const
  {
    return time;
  }
};

struct PeriodicRun
{
  //! Has run yet
  bool active;
  //! Last time it was run
  double last_time;
  //! Period
  double period;

  PeriodicRun(double p):
    active(false),
    last_time(0.0),
    period(p)
  { }

  bool
  doRun(double t)
  {
    if (!active)
    {
      active = true;
      last_time = t;
      return false;
    }

    if (t - last_time >= period)
    {
      last_time = t;
      return true;
    }

    return false;
  }
};

void
readArgs(char* file, Arguments& args)
{
  Config cfg(file);

  cfg.get("General", "Battery Capacity", "498.8", args.filter_args.full_capacity);

  std::string sec = "Monitors.FuelLevel";

  for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
  {
    cfg.get(sec, c_measure_names[i] + " Moving Average Window", "5", args.filter_args.avg_win[i]);
    cfg.get(sec, "Entity Label - " + c_measure_names[i], "", args.elb[i]);
  }

  cfg.get(sec, "Minimum Samples For Estimate", "20", args.filter_args.min_samples);
  cfg.get(sec, "Capacity Decay Factor", "15", args.filter_args.decay_factor);

  for (unsigned i = 0; i < FuelFilter::MDL_TOTAL; ++i)
  {
    cfg.get(sec, c_model_names[i] + " Model Voltage", "", args.filter_args.models[i].voltage);
    cfg.get(sec, c_model_names[i] + " Model Current", "", args.filter_args.models[i].current);
    cfg.get(sec, c_model_names[i] + " Model Energy", "", args.filter_args.models[i].energy);
    cfg.get(sec, c_model_names[i] + " Model Temperature", "", args.filter_args.models[i].temp);
  }

  cfg.get(sec, "Acceptable Temperature", "15.0", args.filter_args.acceptable_temperature);
  cfg.get(sec, "Minimum Update Confidence", "95.0", args.filter_args.min_update_conf);
  cfg.get(sec, "Update Estimate Anytime", "true", args.filter_args.update_anytime);

  cfg.get(sec, "OP Mode Labels", "", args.op_labels);
  cfg.get(sec, "OP Mode Values", "", args.op_values);
  cfg.get(sec, "Warning Level", "30.0", args.war_lvl);
  cfg.get(sec, "Error Level", "10.0", args.err_lvl);
  cfg.get(sec, "Low Confidence Level", "40.0", args.low_confidence);

  cfg.get(sec, "Estimated Entity Label List", "", args.est_list);
  cfg.get(sec, "Estimated Entity Power List", "", args.est_power);
}

int
main(int32_t argc, char** argv)
{
  if (argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << " <config ini file> <path_to_log.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  Arguments m_args;

  readArgs(argv[1], m_args);
  m_args.filter_args.decay_factor *= 0.01f;

  //! Array of entities
  unsigned m_eids[BatteryData::BM_TOTAL];

  // Filter pointer
  FuelFilter* m_fuel_filter = NULL;

  bool resolved_entities[BatteryData::BM_TOTAL];
  for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
    resolved_entities[i] = false;

  EPMap m_epower;

  bool got_entities = false;

  PseudoTimer timer;
  PeriodicRun pr(1.0);

  ByteBuffer buffer;
  std::ofstream lsf("NewFuel.lsf", std::ios::binary);

  std::istream* is = 0;
  DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(argv[2]);
  if (method == DUNE::Compression::METHOD_UNKNOWN)
    is = new std::ifstream(argv[2], std::ios::binary);
  else
    is = new DUNE::Compression::FileInput(argv[2], method);

  if (!is)
  {
    std::cerr << "bad file" << std::endl;
    return 1;
  }

  is->seekg(0, is->end);
  unsigned file_length = is->tellg();
  is->seekg(0, is->beg);
  Time::Counter<float> prog_timer(5.0);

  DUNE::IMC::Message* msg = NULL;

  DUNE::IMC::FuelLevel* ptr = NULL;

  bool got_first = false;

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      bool log_it = false;

      timer.update(msg->getTimeStamp());

      if (!got_first)
      {
        IMC::EstimatedState state;
        state.setTimeStamp(msg->getTimeStamp());
        IMC::Packet::serialize(&state, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
        got_first = true;

        std::cerr << "got first timestamp" << std::endl;

        m_fuel_filter = new FuelFilter(&m_args.filter_args, m_eids, &m_epower,
                                       NULL, true, msg->getTimeStamp());
      }

      if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        IMC::EntityInfo* ent = static_cast<IMC::EntityInfo*>(msg);

        if (!got_entities)
        {
          bool got_all = true;

          for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
          {
            if (ent->label == m_args.elb[i])
            {
              m_eids[i] = ent->id;
              resolved_entities[i] = true;
            }

            if (resolved_entities[i] == false)
              got_all = false;
          }

          got_entities = got_all;

          if (got_entities)
            std::cerr << "Got all entities" << std::endl;
        }

        for (unsigned i = 0; i < m_args.est_list.size(); i++)
        {
          if (ent->label == m_args.est_list[i])
            m_epower.insert(EPPair(ent->id, EntityPower(m_args.est_power[i])));
        }

        if (m_args.est_list.size() < m_epower.size())
          std::cerr << "TOO MANY ENTRIES!" << std::endl;

        IMC::Packet::serialize(msg, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
        delete msg;
        continue;
      }

      if (msg->getId() == DUNE_IMC_VOLTAGE)
      {
        m_fuel_filter->onVoltage(static_cast<IMC::Voltage*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_CURRENT)
      {
        m_fuel_filter->onCurrent(static_cast<IMC::Current*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_TEMPERATURE)
      {
        m_fuel_filter->onTemperature(static_cast<IMC::Temperature*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_VEHICLESTATE)
      {
        m_fuel_filter->onVehicleState(static_cast<IMC::VehicleState*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_FUELLEVEL)
      {
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_ENTITYACTIVATIONSTATE)
      {
        m_fuel_filter->onEntityActivationState(static_cast<IMC::EntityActivationState*>(msg));
        log_it = true;
      }

      if (timer.isValid() && pr.doRun(timer.getTime()))
      {
        // Update fuel filter
        if (m_fuel_filter->update())
        {
          IMC::FuelLevel fl;
          fl.setSourceEntity(250);
          fl.setTimeStamp(msg->getTimeStamp());

          m_fuel_filter->fillMessage(fl, m_args.op_labels, m_args.op_values);

          if (ptr != NULL)
          {
            float diff = ptr->value - fl.value;
            char sign = (diff > 0)? '-' : '+';
            if (std::fabs(diff) > 1.0)
              std::cerr << "jumped " << sign
                        << std::fabs(diff) / 100 * m_args.filter_args.full_capacity
                        << " (" << std::fabs(diff) << "%)" << std::endl;
          }

          Memory::clear(ptr);
          ptr = static_cast<IMC::FuelLevel*>(fl.clone());

          IMC::Packet::serialize(&fl, buffer);
          lsf.write(buffer.getBufferSigned(), buffer.getSize());
        }
      }

      if (log_it)
      {
        IMC::Packet::serialize(msg, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
      }

      if (prog_timer.overflow())
      {
        std::cerr << (float)is->tellg() / file_length * 100.0 << "%" << std::endl;
        prog_timer.reset();
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  Memory::clear(m_fuel_filter);
  Memory::clear(ptr);

  delete is;

  return 0;
}
