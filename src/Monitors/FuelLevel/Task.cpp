//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// Author: Ricardo Martins                                                  *
// Author: Pedro Calado (energy counting adaptation)                        *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "BatteryData.hpp"
#include "EntityPower.hpp"
#include "FuelFilter.hpp"

namespace Monitors
{
  namespace FuelLevel
  {
    using DUNE_NAMESPACES;

    //! Discharge curve model names
    static const std::string c_model_names[] = {"Optimistic", "Pessimistic", "Zero", "Very Cold"};

    struct Arguments
    {
      //! Arguments for the fuel filter.
      FuelFilter::Arguments filter_args;
      //! Entity label for measurement readings.
      std::string elb[BatteryData::BM_TOTAL];
      //! Level of battery below which a warning will be thrown.
      float war_lvl;
      //! Level of battery below which an error will be thrown.
      float err_lvl;
      //! Level of battery, in volts, below which an error will be thrown.
      float err_lvl_volt;
      //! Threshold Level of battery, to switch of error to active.
      float thr_err_lvl_volt;
      //! Value below which fuel estimation is unreliable.
      float low_confidence;
      //! List of entity labels that must be estimated.
      std::vector<std::string> est_list;
      //! List of estimated power consumed by the entities
      std::vector<float> est_power;
      //! Number of battery packs.
      unsigned battery_packs;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Fuel filter
      FuelFilter* m_fuel_filter;
      //! Fuel level message.
      IMC::FuelLevel m_fuel;
      //! Array of entities
      unsigned m_eids[BatteryData::BM_TOTAL];
      //! Flag to control state of voltage error level
      bool m_volt_error_level;
      //! Volatage level of batteries
      float m_volt_bat;
      //! True if filter is ready and computing estimates
      bool m_filter_ready;
      //! Set to gather estimated power consumption of certain entities
      EPMap m_epower;
      //! Power model.
      Power::Model* m_power_model;
      //! Label of the operation modes.
      std::vector<std::string> m_op_labels;
      //! Corresponding value of power consumption in these modes.
      std::vector<float> m_op_values;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_fuel_filter(NULL),
        m_volt_error_level(false),
        m_volt_bat(0),
        m_filter_ready(false)
      {
        m_power_model = new Power::Model(&ctx.config);
        m_op_labels.push_back("Hotel");
        m_op_values.push_back(m_power_model->getPowerConsumptionHotel());
        m_op_labels.push_back("Full");
        m_op_values.push_back(m_power_model->getPowerConsumptionFull());

        for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
        {
          param(c_measure_names[i] + " Moving Average Window", m_args.filter_args.avg_win[i])
          .defaultValue("5")
          .description("Number of samples for measures' moving average filter");

          param("Entity Label - " + c_measure_names[i], m_args.elb[i])
          .defaultValue("")
          .description("Entity label of the " + c_measure_names[i] + " measures.");
        }

        param("Minimum Samples For Estimate", m_args.filter_args.min_samples)
        .defaultValue("20")
        .minimumValue("0")
        .description("Least amount of samples before an initial estimate is computed");

        param("Capacity Decay Factor", m_args.filter_args.decay_factor)
        .defaultValue("15")
        .minimumValue("0")
        .maximumValue("100")
        .units(Units::Percentage)
        .description("Decay factor given by percentage of actual/advertised capacity");

        for (unsigned i = 0; i < FuelFilter::MDL_TOTAL; ++i)
        {
          param(c_model_names[i] + " Model Voltage", m_args.filter_args.models[i].voltage)
          .defaultValue("")
          .units(Units::Volt)
          .description("Voltage values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Current", m_args.filter_args.models[i].current)
          .defaultValue("")
          .units(Units::Ampere)
          .description("Current values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Energy", m_args.filter_args.models[i].energy)
          .defaultValue("")
          .units(Units::WattHour)
          .description("Energy values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Temperature", m_args.filter_args.models[i].temp)
          .defaultValue("")
          .units(Units::DegreeCelsius)
          .description("Temperature of the " + c_model_names[i] + " model.");
        }

        param("Warning Level", m_args.war_lvl)
        .defaultValue("30.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Level of battery below which a warning will be thrown");

        param("Error Level", m_args.err_lvl)
        .defaultValue("10.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Level of battery below which an error will be thrown");

        param("Voltage Error Level", m_args.err_lvl_volt)
        .defaultValue("25.5")
        .units(Units::Volt)
        .description("Level of battery, in voltage, below which an error will be thrown");

        param("Voltage Threshold Error Level", m_args.thr_err_lvl_volt)
        .defaultValue("0.2")
        .minimumValue("0.1")
        .maximumValue("8.0")
        .units(Units::Volt)
        .description("Threshold Level of battery, to switch of error to active.");

        param("Low Confidence Level", m_args.low_confidence)
        .defaultValue("40.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Value below which fuel estimation is unreliable");

        param("Acceptable Temperature", m_args.filter_args.acceptable_temperature)
        .defaultValue("15.0")
        .units(Units::DegreeCelsius)
        .description("Acceptable temperature level for estimating.");

        param("Minimum Update Confidence", m_args.filter_args.min_update_conf)
        .defaultValue("95.0")
        .units(Units::Percentage)
        .description("Minimum confidence for recomputing update");

        param("Update Estimate Anytime", m_args.filter_args.update_anytime)
        .defaultValue("false")
        .description("Update estimate even if maneuvering");

        param("Estimated Entity Label List", m_args.est_list)
        .defaultValue("")
        .description("List of entity labels that must be estimated");

        param("Estimated Entity Power List", m_args.est_power)
        .defaultValue("")
        .units(Units::Watt)
        .description("List of estimated power consumed by the entities");

        m_ctx.config.get("General", "Battery Capacity", "700.0", m_args.filter_args.full_capacity);
        m_ctx.config.get("General", "Battery Packs", "4", m_args.battery_packs);

        // Register listeners.
        bind<IMC::Voltage>(this);
        bind<IMC::Current>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EntityActivationState>(this);
      }

      ~Task(void)
      {
        delete m_power_model;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.filter_args.decay_factor))
          m_args.filter_args.decay_factor *= 0.01f;

        // Validate models.
        for (unsigned i = 0; i < FuelFilter::MDL_TOTAL; ++i)
        {
          if (m_args.filter_args.models[i].voltage.size() != m_args.filter_args.models[i].energy.size()
              || !m_args.filter_args.models[i].voltage.size())
          {
            std::string msg_inv = DTR("invalid model");
            err("%s", msg_inv.c_str());
            throw std::runtime_error(msg_inv);
          }
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fuel_filter);
      }

      void
      onResourceAcquisition(void)
      {
        for (unsigned i = 0; i < FuelFilter::MDL_TOTAL; ++i)
        {
          for (unsigned j = 0; j < m_args.filter_args.models[i].energy.size(); j++)
            m_args.filter_args.models[i].energy[j] *= m_args.battery_packs;
        }

        m_fuel_filter = new FuelFilter(&m_args.filter_args, m_eids, &m_epower, this);
      }

      void
      onEntityResolution(void)
      {
        for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
        {
          try
          {
            m_eids[i] = resolveEntity(m_args.elb[i]);
          }
          catch (...)
          {
            m_eids[i] = 0;
          }
        }

        for (unsigned i = 0; i < m_args.est_list.size(); ++i)
        {
          try
          {
            unsigned ent = resolveEntity(m_args.est_list[i]);
            m_epower.insert(EPPair(ent, m_args.est_power[i]));
          }
          catch (...)
          { }
        }
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if(msg->getSource() == getSystemId())
        {
          if(resolveEntity(msg->getSourceEntity()).compare(m_args.elb[0]) == 0)
          {
            if(m_args.err_lvl_volt >= 0)
            {
              if(msg->value < m_args.err_lvl_volt)
                m_volt_error_level = true;

              m_volt_bat = msg->value;
            }
          }
        }
        m_fuel_filter->onVoltage(msg);
      }

      void
      consume(const IMC::Current* msg)
      {
        m_fuel_filter->onCurrent(msg);
      }

      void
      consume(const IMC::Temperature* msg)
      {
        m_fuel_filter->onTemperature(msg);
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_fuel_filter->onVehicleState(msg);
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        // not local message.
        if (msg->getSource() != getSystemId())
          return;

        m_fuel_filter->onEntityActivationState(msg);
      }

      void
      task(void)
      {
        // Update fuel filter
        if (!m_fuel_filter->update())
          return;

        if (!m_filter_ready)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_filter_ready = true;
        }

        // Fill fuel level message
        m_fuel_filter->fillMessage(m_fuel, m_op_labels, m_op_values);

        if (m_fuel.value < m_args.err_lvl && !m_volt_error_level)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_FUEL_RESERVE);
        else if (m_fuel.value < m_args.war_lvl && !m_volt_error_level)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_LOW);
        else if (m_fuel.confidence < m_args.low_confidence && !m_volt_error_level)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_EST_UNRELIABLE);
        else if (m_volt_error_level)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_FUEL_RESERVE);
        else
          if(!m_volt_error_level)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        if(m_volt_error_level && m_volt_bat > (m_args.err_lvl_volt + m_args.thr_err_lvl_volt))
          m_volt_error_level = false;

        dispatch(m_fuel);

        if (getEntityState() != IMC::EntityState::ESTA_BOOT)
        {
          trace("Operation modes are: %s\nPercentage is %.2f\nConfidence level is %.2f\n",
                m_fuel.opmodes.c_str(), m_fuel.value, m_fuel.confidence);
        }
      }
    };
  }
}

DUNE_TASK
