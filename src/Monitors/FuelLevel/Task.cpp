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
    //! Minimum time to wait before redoing estimate
    static const float c_redo_time = 600.0;
    //! Time to consider stabilization after maneuvering
    static const float c_sane_time = 10.0;
    //! Discharge curve model names
    static const std::string c_model_names[] = {"Optimistic", "Pessimistic", "Zero", "Very Cold"};

    enum Models
    {
      //! Optimistic model.
      MDL_OPT,
      //! Pessimistic model.
      MDL_PES,
      //! Model for 0º Celsius of temperature
      MDL_ZERO,
      //! Very cold model.
      MDL_VCOLD,
      //! Number of models available.
      MDL_TOTAL
    };

    enum MergedModels
    {
      //! Optimistic and pessimistic model merge
      MGD_RATED,
      //! Rated and cold model merge to find energy for
      //! fixed cold temperature and any electric current
      MGD_FTAC,
      //! Rated and cold model merge (temperature map)
      //! to find energy for any temperature and any electric current
      MGD_ATAC
    };

    struct BatteryModel
    {
      //! Voltage values
      std::vector<float> voltage;
      //! Energy values
      std::vector<float> energy;
      //! Electric current value
      float current;
      //! Temperature value
      float temp;
    };

    struct Arguments
    {
      //! Number of samples for measures' moving average filter.
      unsigned avg_win[BatteryData::BM_TOTAL];
      //! Entity label for measurement readings.
      std::string elb[BatteryData::BM_TOTAL];
      //! Energy capacity of the batteries advertised by manufacturer.
      float full_capacity;
      //! Least amount of samples before an initial estimate is computed.
      unsigned min_samples;
      //! Decay factor given by percentage of actual_capacity/advertised_capacity.
      float decay_factor;
      //! Battery models.
      BatteryModel models[MDL_TOTAL];
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
      //! Timer Counter for redoing the estimation
      Time::Counter<float> m_redo_timer;
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
        m_redo_timer(c_redo_time),
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

        param("Batteries Energy Capacity", m_args.full_capacity)
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

        for (unsigned i = 0; i < MDL_TOTAL; ++i)
        {
          param(c_model_names[i] + " Model Voltage", m_args.models[i].voltage)
          .defaultValue("")
          .units(Units::Volt)
          .description("Voltage values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Current", m_args.models[i].current)
          .defaultValue("")
          .units(Units::Ampere)
          .description("Current values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Energy", m_args.models[i].energy)
          .defaultValue("")
          .units(Units::WattHour)
          .description("Energy values for " + c_model_names[i] + " model");

          param(c_model_names[i] + " Model Temperature", m_args.models[i].temp)
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
        Memory::clear(m_bdata);
      }

      void
      onResourceAcquisition(void)
      {
        m_bdata = new BatteryData(m_args.avg_win);

        m_bdata->setEntities(m_eids);
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
        // If value was changed
        if (m_bdata->update(msg))
        {
          ++m_total_samples;

          if (m_total_samples % m_args.avg_win[BatteryData::BM_VOLTAGE] == 0)
          {
            if (m_last_time < 0.0)
            {
              m_last_time = msg->getTimeStamp();
              return;
            }

            double delta = msg->getTimeStamp() - m_last_time;
            m_last_time = msg->getTimeStamp();

            // Check if we have a valid time delta.
            if (delta < 0)
              return;

            // integrate energy consumed even if there is no estimate yet
            m_energy_consumed += m_bdata->getEnergyDrop(delta);
          }
        }
      }

      void
      consume(const IMC::Current* msg)
      {
        m_bdata->update(msg);
      }

      void
      consume(const IMC::Temperature* msg)
      {
        m_bdata->update(msg);
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        // Check if vehicle is not maneuvering atm
        if ((msg->op_mode != IMC::VehicleState::VS_MANEUVER) &&
            (msg->op_mode != IMC::VehicleState::VS_CALIBRATION) &&
            (msg->op_mode != IMC::VehicleState::VS_EXTERNAL))
        {
          if (m_is_maneuvering)
          {
            m_sane_timer.reset();
            m_is_maneuvering = false;
          }
        }
        else
        {
          m_is_maneuvering = true;
        }
      }

      //! Compute deviation from model
      //! @param[in] model model to be used to compute deviation
      //! @return deviation from given model
      inline float
      getDeviationFromModel(const Models model)
      {
        return (m_initial_estimate - m_energy_consumed - getModelEstimate(model)) / getModelEstimate(model) * 100.0f;
      }

      //! Compute deviation from a merged model
      //! @param[in] model merged model to be used to compute deviation
      //! @return deviation from given merged model
      inline float
      getDeviationMergedModel(const MergedModels model)
      {
        return (m_initial_estimate - m_energy_consumed - getMergedEstimate(model)) / getMergedEstimate(model) * 100.0f;
      }

      //! Compute an estimate based on a current discharge model
      //! @param[in] model model to be used in computing the estimate
      //! @return estimate computed
      inline float
      getModelEstimate(const Models model)
      {
        return getModelEstimate(model, m_bdata->getVoltage());
      }

      //! Compute an estimate based on a current discharge model
      //! @param[in] model model to be used in computing the estimate
      //! @param[in] voltage voltage to be used in optimistic and pessimistic model
      //! @return estimate computed
      inline float
      getModelEstimate(const Models model, float voltage)
      {
        return piecewiseLI(m_args.models[model].energy,
                           m_args.models[model].voltage,
                           voltage);
      }

      //! Find closest model to a certain temperature
      //! @param[in] temperature temperature value to use
      //! @return closest model to the given temperature
      Models
      getClosestModel(float temperature)
      {
        Models closest = (Models)0;

        if (MDL_TOTAL == 1)
          return closest;

        float lowest_diff = std::fabs(m_args.models[closest].temp - temperature);

        for (unsigned i = 1; i < MDL_TOTAL; ++i)
        {
          float diff = std::fabs(m_args.models[i].temp - temperature);
          if (diff < lowest_diff)
          {
            lowest_diff = diff;
            closest = (Models)i;
          }
        }

        return closest;
      }

      //! Compute estimate for temperature map merged model
      //! @param[in] model temperature model to use
      //! @param[in] current electric current value to use in estimate
      //! @return estimate for the cold map merged model
      float
      getMapEstimate(const Models model, float current)
      {
        float ex = getModelEstimate(model);
        float v1 = getInvertedEstimate(MDL_OPT, ex);
        float v2 = getInvertedEstimate(MDL_PES, ex);
        float i1 = m_args.models[MDL_OPT].current;
        float i2 = m_args.models[MDL_PES].current;
        float vt = v1 + (current - i1) / (i2 - i1) * (v2 - v1);
        float vn = v1 + (m_args.models[model].current - i1) / (i2 - i1) * (v2 - v1);
        float vf = m_bdata->getVoltage() + (vn - vt);
        return getModelEstimate(model, vf);
      }

      //! Compute voltage using energy value.
      //! This works as an inverted getModelEstimate().
      //! @param[in] model model to be used in compute the estimate
      //! @param[in] energy energy value to interpolate with to find voltage.
      //! @return computed voltage value by interpolation
      inline float
      getInvertedEstimate(const Models model, float energy)
      {
        return piecewiseLI(m_args.models[model].voltage,
                           m_args.models[model].energy,
                           energy);
      }

      //! Compute a merged estimate using an electric current value
      //! @param[in] model merged model to use
      //! @param[in] current electric current value to use
      //! @param[in] temperature temperature value to use
      //! @return merged estimate value
      float
      getMergedEstimate(const MergedModels model, float current, float temperature)
      {
        switch (model)
        {
          case MGD_RATED:
            return linearInterpolation(LinIntParam<float>(getModelEstimate(MDL_PES),
                                                          getModelEstimate(MDL_OPT),
                                                          m_args.models[MDL_PES].current,
                                                          m_args.models[MDL_OPT].current,
                                                          current));
          case MGD_FTAC:
            return getMapEstimate(getClosestModel(temperature), current);
          case MGD_ATAC:
            if (temperature < m_args.models[MDL_ZERO].temp)
            {
              float e_zero = getMapEstimate(MDL_ZERO, current);
              float e_vcold = getMapEstimate(MDL_VCOLD, current);
              return linearInterpolation(LinIntParam<float>(e_zero, e_vcold,
                                                            m_args.models[MDL_ZERO].temp,
                                                            m_args.models[MDL_VCOLD].temp,
                                                            temperature));
            }
            else if (temperature < m_args.models[MDL_OPT].temp)
            {
              float e_zero = getMapEstimate(MDL_ZERO, current);
              float e_opt = getMergedEstimate(MGD_RATED);
              return linearInterpolation(LinIntParam<float>(e_zero, e_opt,
                                                            m_args.models[MDL_ZERO].temp,
                                                            m_args.models[MDL_OPT].temp,
                                                            temperature));
            }
            else
            {
              // fall through
            }
          default:
            return -1.0;
        }
      }

      //! Compute a merged estimate using an electric current value (overload)
      //! @param[in] model merged model to use
      //! @return merged estimate value
      inline float
      getMergedEstimate(const MergedModels model)
      {
        return getMergedEstimate(model, m_bdata->getCurrent(), m_bdata->getTemperature());
      }

      //! Estimate likely time left for operation in a certain power regime
      //! for available energy left in batteries
      //! @param[in] power_rate rate of power consumption
      //! @return remaining time at consumption rate
      inline float
      getRemainingTime(float power_rate)
      {
        return (m_initial_estimate - m_energy_consumed) / power_rate * 3600.0;
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
          else if (m_redo_timer.overflow()) // only redo estimate every once in a while
          {
            float pseudo_init = computeInitialEstimate();
            if (computeConfidence(pseudo_init) > computeConfidence())
            {
              refresh = true;
              m_redo_timer.reset();
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
