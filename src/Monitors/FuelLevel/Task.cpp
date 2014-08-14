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
// Author: Ricardo Martins                                                  *
// Author: Pedro Calado (energy counting adaptation)                        *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "BatteryData.hpp"

namespace Monitors
{
  namespace FuelLevel
  {
    using DUNE_NAMESPACES;

    //! Arbitrary value of confidence at optimistic or pessimistic model curves
    static const float c_mod_conf = 50.0f;
    //! Percentage of model's interval to consider influence by merged estimate in confidence
    //! values of the two remaining models
    static const float c_mod_prox = 0.2f;
    //! Maximum confidence value
    static const float c_top_conf = 100.0f;
    //! Electric current stable value to consider an estimate refresh
    static const float c_stable_current = 1.0;
    //! Time to consider stabilization after maneuvering
    static const float c_sane_time = 10.0;
    //! Discharge curve model names
    static const std::string c_model_names[] = {"Optimistic", "Pessimistic", "Zero", "Very Cold"};

    struct Arguments
    {
      //! Arguments for the fuel filter.
      FuelFilter::Arguments filter_args;
      //! Entity label for measurement readings.
      std::string elb[BatteryData::BM_TOTAL];
      //! Energy capacity of the batteries advertised by manufacturer.
      float full_capacity;
      //! Least amount of samples before an initial estimate is computed.
      unsigned min_samples;
      //! Decay factor given by percentage of actual_capacity/advertised_capacity.
      float decay_factor;
      //! Temperature of the optimistic and pessimistic models.
      float rated_temp;
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
      //! Acceptable temperature level for estimating.
      float acceptable_temperature;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Battery related data being measured
      BatteryData* m_bdata;
      //! Fuel level message.
      IMC::FuelLevel m_fuel;
      //! Estimated amount of energy consumed in Wh since the task started
      float m_energy_consumed;
      //! Do we have an initial estimate
      bool m_has_initial_estimate;
      //! Initial estimate of energy left in the batteries
      float m_initial_estimate;
      //! Last energy computation time
      double m_last_time;
      //! Total number of measurement samples got so far
      unsigned m_total_samples;
      //! Present estimate was performed in cold temperatures
      bool m_cold_estimate;
      //! Redo estimate only once
      bool m_redid_estimate;
      //! Array of entities
      unsigned m_eids[BatteryData::BM_TOTAL];
      //! Timer Counter for stabilization time after maneuvering
      Time::Counter<float> m_sane_timer;
      //! True if maneuvering. Start as true.
      bool m_is_maneuvering;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_bdata(NULL),
        m_energy_consumed(0.0),
        m_has_initial_estimate(false),
        m_last_time(-1.0),
        m_total_samples(0),
        m_cold_estimate(false),
        m_redid_estimate(false),
        m_sane_timer(c_sane_time),
        m_is_maneuvering(true)
      {
        for (unsigned i = 0; i < BatteryData::BM_TOTAL; ++i)
        {
          param(c_measure_names[i] + " Moving Average Window", m_args.avg_win[i])
          .defaultValue("5")
          .description("Number of samples for measures' moving average filter");

          param("Entity Label - " + c_measure_names[i], m_args.elb[i])
          .defaultValue("")
          .description("Entity label of the " + c_measure_names[i] + " measures.");
        }

        param("Batteries Energy Capacity", m_args.filter_args.full_capacity)
        .defaultValue("498.8")
        .minimumValue("0.0")
        .units(Units::WattHour)
        .description("Energy capacity of the batteries advertised by manufacturer");

        param("Minimum Samples For Estimate", m_args.min_samples)
        .defaultValue("20")
        .minimumValue("0")
        .description("Least amount of samples before an initial estimate is computed");

        param("Capacity Decay Factor", m_args.decay_factor)
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

        param("OP Mode Labels", m_args.op_labels)
        .description("Label of the operation mode");

        param("OP Mode Values", m_args.op_values)
        .units(Units::Watt)
        .description("Corresponding value of power consumption");

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

        param("Low Confidence Level", m_args.low_confidence)
        .defaultValue("40.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .units(Units::Percentage)
        .description("Value below which fuel estimation is unreliable");

        param("Acceptable Temperature", m_args.acceptable_temperature)
        .defaultValue("15.0")
        .units(Units::DegreeCelsius)
        .description("Acceptable temperature level for estimating.");

        // Register listeners.
        bind<IMC::Voltage>(this);
        bind<IMC::Current>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::VehicleState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.decay_factor))
          m_args.decay_factor *= 0.01f;

        // Validate models.
        for (unsigned i = 0; i < MDL_TOTAL; ++i)
        {
          if (m_args.models[i].voltage.size() != m_args.models[i].energy.size()
              || !m_args.models[i].voltage.size())
          {
            std::string msg_inv = DTR("invalid model");
            err("%s", msg_inv.c_str());
            throw std::runtime_error(msg_inv);
          }
        }

        if (m_args.op_values.size() != m_args.op_labels.size())
          throw std::runtime_error(DTR("operation mode list labels and values "
                                       "have different sizes"));

        // Validate opmodes
        for (unsigned i = 0; i < m_args.op_values.size(); ++i)
        {
          if (m_args.op_values[i] == 0.0)
          {
            std::string msg_inv = DTR("invalid opmode value (zero)");
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
        m_fuel_filter = new FuelFilter(m_args.avg_win);
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
      }

      void
      consume(const IMC::Voltage* msg)
      {
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

      //! Compute an initial estimate for the energy left in batteries
      //! @return initial estimate computed
      float
      computeInitialEstimate(void)
      {
        float value;

        if (!m_cold_estimate)
        {
          // do not interpolate for currents lower than the pessimistic model current
          // just output pessimistic model estimate
          if (m_bdata->getCurrent() < m_args.models[MDL_PES].current)
            value = getModelEstimate(MDL_PES);
          else
            value = getMergedEstimate(MGD_RATED);
        }
        else
        {
          if (m_bdata->getTemperature() < m_args.models[MDL_VCOLD].temp)
            value = getMergedEstimate(MGD_FTAC);
          else
            value = getMergedEstimate(MGD_ATAC);
        }

        // check if the estimate goes above the actual likely capacity
        return std::min(value, m_args.full_capacity * (1 - m_args.decay_factor));
      }

      //! Compute a rough estimate of the confidence on the measure of energy (in %)
      //! @param[in] energy to use
      //! @return value of confidence computed
      float
      computeConfidence(float energy)
      {
        float conf;
        float good_est = getModelEstimate(MDL_OPT);
        float bad_est = getModelEstimate(MDL_PES);
        float merged_est = getMergedEstimate(MGD_RATED);

        float good_conf = c_mod_conf;
        float bad_conf = c_mod_conf;
        float interval = std::fabs(good_est - bad_est);

        // division by zero check (should never happen)
        if (interval == 0.0)
          return -1.0;

        if (std::fabs(bad_est - merged_est) < c_mod_prox * interval)
          bad_conf = c_mod_conf + (c_top_conf - c_mod_conf) * (1 - std::fabs(bad_est - merged_est) / (c_mod_prox * interval));

        if (std::fabs(good_est - merged_est) < c_mod_prox * interval)
          good_conf = c_mod_conf + (c_top_conf - c_mod_conf) * (1 - std::fabs(good_est - merged_est) / (c_mod_prox * interval));

        std::vector<float> vec_energs, vec_confs;

        if (merged_est >= bad_est && merged_est <= good_est)
        {
          float energs[] = {0.0f, bad_est, merged_est, good_est, m_args.full_capacity};
          float confs[] = {0.0f, bad_conf, c_top_conf, good_conf, 0.0f};

          vec_energs.assign(energs, energs + sizeof(energs) / sizeof(float));
          vec_confs.assign(confs, confs + sizeof(confs) / sizeof(float));
        }
        else if (merged_est < bad_est)
        {
          float energs[] = {0.0f, merged_est, bad_est, good_est, m_args.full_capacity};
          float confs[] = {0.0f, c_top_conf, bad_conf, good_conf, 0.0f};

          vec_energs.assign(energs, energs + sizeof(energs) / sizeof(float));
          vec_confs.assign(confs, confs + sizeof(confs) / sizeof(float));
        }
        else if (merged_est > good_est)
        {
          float energs[] = {0.0f, bad_est, good_est, merged_est, m_args.full_capacity};
          float confs[] = {0.0f, bad_conf, good_conf, c_top_conf, 0.0f};

          vec_energs.assign(energs, energs + sizeof(energs) / sizeof(float));
          vec_confs.assign(confs, confs + sizeof(confs) / sizeof(float));
        }
        else
        {
          return -1.0;
        }

        conf = piecewiseLI(vec_confs, vec_energs, energy);

        return std::max(conf, 0.0f);
      }

      //! Compute a rough estimate of the confidence on the measure of energy (in %)
      //! @return value of confidence computed
      float
      computeConfidence(void)
      {
        return computeConfidence(m_initial_estimate - m_energy_consumed);
      }

      void
      task(void)
      {
        // check if we are still waiting for the first measurements
        if (!m_bdata->gotMeasurements())
          return;

        // do we have an initial estimate yet
        if (!m_has_initial_estimate)
        {
          if (m_total_samples < m_args.min_samples)
            return;

          if (m_bdata->getTemperature() < m_args.acceptable_temperature)
            m_cold_estimate = true;

          m_initial_estimate = computeInitialEstimate();
          m_has_initial_estimate = true;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          debug("Initial estimate: %.2f Wh, Optimistic: %.2f Wh, Pessimistic: %.2f Wh.",
                m_initial_estimate, getModelEstimate(MDL_OPT), getModelEstimate(MDL_PES));
        }

        // Check if we should refresh the initial estimate
        // if Temperature is reliable
        // if we have low electric currents
        // if vehicle is not maneuvering atm
        if ((m_bdata->getTemperature() > m_args.acceptable_temperature) &&
            (m_bdata->getCurrent() < c_stable_current) &&
            !m_is_maneuvering && m_sane_timer.overflow())
        {
          bool refresh = false;

          if (m_cold_estimate)
          {
            m_cold_estimate = false;
            refresh = true;
          }
          else if (!m_redid_estimate) // only redo once
          {
            // consider refreshing estimate if present one is unreliable
            if (m_fuel.confidence < m_args.low_confidence)
            {
              float pseudo_init = computeInitialEstimate();
              if (computeConfidence(pseudo_init) > m_args.low_confidence)
              {
                refresh = true;
                m_redid_estimate = true;
              }
            }
          }

          if (refresh)
          {
            m_initial_estimate = computeInitialEstimate();

            // Reset energy consumed
            m_energy_consumed = 0.0;

            debug("recomputed estimate");
          }
        }

        // fill value with estimated percentage of battery
        m_fuel.value = (m_initial_estimate - m_energy_consumed) / m_args.full_capacity * 100;
        m_fuel.confidence = computeConfidence();

        std::stringstream ss;

        m_fuel.opmodes.clear();

        for (unsigned i = 0; i < m_args.op_labels.size(); ++i)
        {
          ss << m_args.op_labels[i] << "="
             << (m_initial_estimate - m_energy_consumed) / m_args.op_values[i]
             << ";";
        }

        m_fuel.opmodes = ss.str();

        if (m_fuel.value < m_args.err_lvl)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_FUEL_RESERVE);
        else if (m_fuel.value < m_args.war_lvl)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_LOW);
        else if (m_fuel.confidence < m_args.low_confidence)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_FUEL_EST_UNRELIABLE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        dispatch(m_fuel);

        if (getEntityState() != IMC::EntityState::ESTA_BOOT)
        {
          trace("Operation modes are: %s\nPercentage is %.2f\nConfidence level is %.2f\n",
                m_fuel.opmodes.c_str(), m_fuel.value, m_fuel.confidence);

          trace("Energy Left %.2f Wh", m_initial_estimate - m_energy_consumed);

          trace("Energy value deviates %.1f from pessimistic model and %1.f"
                " from optimistic model.", getDeviationFromModel(MDL_PES),
                getDeviationFromModel(MDL_OPT));

          trace("Value deviates %.1f from RATED merged model, %.1f from FTAC merged "
                "model and %.1f from ATAC merged model.", getDeviationMergedModel(MGD_RATED),
                getDeviationMergedModel(MGD_FTAC), getDeviationMergedModel(MGD_ATAC));
        }
      }
    };
  }
}

DUNE_TASK
