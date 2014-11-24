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

#ifndef MONITORS_FUEL_LEVEL_FUEL_FILTER_HPP_INCLUDED_
#define MONITORS_FUEL_LEVEL_FUEL_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <sstream>

// DUNE headers.
#include <DUNE/Memory.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/Tasks.hpp>

// Local headers.
#include "BatteryData.hpp"
#include "EntityPower.hpp"

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
    static const float c_stable_current = 1.0f;
    //! Minimum time to wait before redoing estimate
    static const float c_redo_time = 600.0f;
    //! Time to consider stabilization after maneuvering
    static const float c_sane_time = 10.0f;
    //! Maximum time delta in seconds between measures
    static const float c_max_delta = 3.0f;

    //! Fuel Filter for Fuel Level
    class FuelFilter
    {
    public:
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

      struct Arguments
      {
        //! Number of samples for measures' moving average filter.
        unsigned avg_win[BatteryData::BM_TOTAL];
        //! Battery models.
        BatteryModel models[MDL_TOTAL];
        //! Energy capacity of the batteries advertised by manufacturer.
        float full_capacity;
        //! Least amount of samples before an initial estimate is computed.
        unsigned min_samples;
        //! Decay factor given by percentage of actual_capacity/advertised_capacity.
        float decay_factor;
        //! Temperature of the optimistic and pessimistic models.
        float rated_temp;
        //! Acceptable temperature level for estimating.
        float acceptable_temperature;
        //! Minimum confidence for recomputing update
        float min_update_conf;
        //! Update estimate even if maneuvering
        bool update_anytime;
      };

      FuelFilter(Arguments* args, unsigned eids[BatteryData::BM_TOTAL],
                 const EPMap* epower, Tasks::Task* task = NULL,
                 bool real_clock = false, double start_time = 0.0):
        m_args(args),
        m_bdata(NULL),
        m_epower(epower),
        m_energy_consumed(0.0),
        m_has_initial_estimate(false),
        m_last_time(-1.0),
        m_total_samples(0),
        m_cold_estimate(false),
        m_redo_timer(c_redo_time, real_clock, start_time),
        m_sane_timer(c_sane_time, real_clock, start_time),
        m_is_maneuvering(true),
        m_est_rate(0.0),
        m_task(task)
      {
        m_bdata = new BatteryData(m_args->avg_win);
        m_bdata->setEntities(eids);
      }

      ~FuelFilter(void)
      {
        Memory::clear(m_bdata);
      }

      //! On Voltage message
      //! @param[in] msg pointer to Voltage message
      void
      onVoltage(const IMC::Voltage* msg)
      {
        m_redo_timer.update(msg->getTimeStamp());
        m_sane_timer.update(msg->getTimeStamp());

        // If value was changed
        if (m_bdata->update(msg))
        {
          ++m_total_samples;

          if (m_total_samples % m_args->avg_win[BatteryData::BM_VOLTAGE] == 0)
          {
            if (m_last_time < 0.0)
            {
              m_last_time = msg->getTimeStamp();
              return;
            }

            double delta = msg->getTimeStamp() - m_last_time;
            m_last_time = msg->getTimeStamp();

            // Check if we have a valid time delta.
            if (delta < 0 || delta > c_max_delta)
              return;

            // integrate energy consumed even if there is no estimate yet
            // take energy from estimated entities into account
            m_energy_consumed += m_bdata->getEnergyDrop(delta) + m_est_rate * delta;
          }
        }
      }

      //! On Current message
      //! @param[in] msg pointer to Current message
      void
      onCurrent(const IMC::Current* msg)
      {
        m_bdata->update(msg);
      }

      //! On Temperature message
      //! @param[in] msg pointer to Temperature message
      void
      onTemperature(const IMC::Temperature* msg)
      {
        m_bdata->update(msg);
      }

      //! On VehicleState message
      //! @param[in] msg pointer to VehicleState message
      void
      onVehicleState(const IMC::VehicleState* msg)
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

      //! On EntityActivationState message
      //! @param[in] msg pointer to EntityActivationState message
      void
      onEntityActivationState(const IMC::EntityActivationState* msg)
      {
        if (!m_epower->size())
          return;

        EPMap::const_iterator it;
        it = m_epower->find(msg->getSourceEntity());

        if (it == m_epower->end())
          return;

        std::set<unsigned>::iterator ut;
        ut = m_act_ent.find(it->first);
        bool exists = ut != m_act_ent.end();

        if (msg->state == IMC::EntityActivationState::EAS_ACTIVE && !exists)
          m_act_ent.insert(it->first);

        if (msg->state != IMC::EntityActivationState::EAS_ACTIVE && exists)
          m_act_ent.erase(it->first);

        // update estimated rate
        m_est_rate = 0.0;

        for (ut = m_act_ent.begin(); ut != m_act_ent.end(); ut++)
        {
          it = m_epower->find(*ut);
          m_est_rate += it->second.getPowerPerSecond();
        }
      }

      //! Update fuel filter
      //! @return true if the filter has gathered enough data to start estimating, false otherwise
      bool
      update(void)
      {
        // check if we are still waiting for the first measurements
        if (!m_bdata->gotMeasurements())
          return false;

        // do we have an initial estimate yet
        if (!m_has_initial_estimate)
        {
          if (m_total_samples < m_args->min_samples)
            return false;

          if (m_bdata->getTemperature() < m_args->acceptable_temperature)
            m_cold_estimate = true;

          m_initial_estimate = computeInitialEstimate();
          m_has_initial_estimate = true;

          std::string dbg;
          dbg = String::str("Initial estimate: %.2f Wh, Optimistic: %.2f Wh, Pessimistic: %.2f Wh.",
                            m_initial_estimate, getModelEstimate(MDL_OPT), getModelEstimate(MDL_PES));

          if (m_task != NULL)
            m_task->debug("%s", dbg.c_str());
          else
            std::cerr << dbg << std::endl;

          return true;
        }

        bool stable_current;
        bool usable_state;
        if (m_args->update_anytime)
        {
          float diff = std::fabs(m_bdata->getCurrent() - m_args->models[MDL_PES].current);
          stable_current = diff < c_stable_current;

          usable_state = true;
        }
        else
        {
          stable_current = (m_bdata->getCurrent() < c_stable_current);
          usable_state = !m_is_maneuvering && m_sane_timer.overflow();
        }

        // Check if we should refresh the initial estimate
        // if Temperature is reliable
        // if we have stable electric currents
        // if vehicle is not maneuvering atm or update anytime
        if ((m_bdata->getTemperature() > m_args->acceptable_temperature) &&
            stable_current && usable_state)
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
            float pseudo_conf = computeConfidence(pseudo_init);
            if (pseudo_conf > computeConfidence() &&
                pseudo_conf > m_args->min_update_conf)
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

            if (m_task != NULL)
              m_task->debug("recomputed estimate");
            else
              std::cerr << "recomputed estimate" << std::endl;
          }
        }

        return true;
      }

      void
      fillMessage(IMC::FuelLevel& fl, const std::vector<std::string>& labels,
                  const std::vector<float>& values)
      {
        // fill value with estimated percentage of battery
        fl.value = (m_initial_estimate - m_energy_consumed) / m_args->full_capacity * 100.0;
        fl.value = std::max(0.0f, fl.value);
        fl.value = std::min(100.0f, fl.value);
        fl.confidence = computeConfidence();

        std::stringstream ss;

        fl.opmodes.clear();

        for (unsigned i = 0; i < labels.size(); ++i)
        {
          ss << labels[i] << "="
             << (m_initial_estimate - m_energy_consumed) / values[i]
             << ";";
        }

        fl.opmodes = ss.str();

        if (m_task != NULL)
        {
          m_task->trace("Energy Left %.2f Wh", m_initial_estimate - m_energy_consumed);

          m_task->trace("Energy value deviates %.1f from pessimistic model and %1.f"
                        " from optimistic model.", getDeviationFromModel(MDL_PES),
                        getDeviationFromModel(MDL_OPT));

          m_task->trace("Value deviates %.1f from RATED merged model, %.1f from FTAC merged "
                        "model and %.1f from ATAC merged model.", getDeviationMergedModel(MGD_RATED),
                        getDeviationMergedModel(MGD_FTAC), getDeviationMergedModel(MGD_ATAC));
        }
      }

    private:
      //! Compute deviation from model
      //! @param[in] model model to be used to compute deviation
      //! @return deviation from given model
      inline float
      getDeviationFromModel(const Models model)
      {
        float modest = getModelEstimate(model);
        return (m_initial_estimate - m_energy_consumed - modest) / modest * 100.0f;
      }

      //! Compute deviation from a merged model
      //! @param[in] model merged model to be used to compute deviation
      //! @return deviation from given merged model
      inline float
      getDeviationMergedModel(const MergedModels model)
      {
        float mergedest = getMergedEstimate(model);
        return (m_initial_estimate - m_energy_consumed - mergedest) / mergedest * 100.0f;
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
        return piecewiseLI(m_args->models[model].energy,
                           m_args->models[model].voltage,
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

        float lowest_diff = std::fabs(m_args->models[closest].temp - temperature);

        for (unsigned i = 1; i < MDL_TOTAL; ++i)
        {
          float diff = std::fabs(m_args->models[i].temp - temperature);
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
        float i1 = m_args->models[MDL_OPT].current;
        float i2 = m_args->models[MDL_PES].current;
        float vt = v1 + (current - i1) / (i2 - i1) * (v2 - v1);
        float vn = v1 + (m_args->models[model].current - i1) / (i2 - i1) * (v2 - v1);
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
        return piecewiseLI(m_args->models[model].voltage,
                           m_args->models[model].energy,
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
                                                          m_args->models[MDL_PES].current,
                                                          m_args->models[MDL_OPT].current,
                                                          current));
          case MGD_FTAC:
            return getMapEstimate(getClosestModel(temperature), current);
          case MGD_ATAC:
            if (temperature < m_args->models[MDL_ZERO].temp)
            {
              float e_zero = getMapEstimate(MDL_ZERO, current);
              float e_vcold = getMapEstimate(MDL_VCOLD, current);
              return linearInterpolation(LinIntParam<float>(e_zero, e_vcold,
                                                            m_args->models[MDL_ZERO].temp,
                                                            m_args->models[MDL_VCOLD].temp,
                                                            temperature));
            }
            else if (temperature < m_args->models[MDL_OPT].temp)
            {
              float e_zero = getMapEstimate(MDL_ZERO, current);
              float e_opt = getMergedEstimate(MGD_RATED);
              return linearInterpolation(LinIntParam<float>(e_zero, e_opt,
                                                            m_args->models[MDL_ZERO].temp,
                                                            m_args->models[MDL_OPT].temp,
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
          if (m_bdata->getCurrent() < m_args->models[MDL_PES].current)
            value = getModelEstimate(MDL_PES);
          else
            value = getMergedEstimate(MGD_RATED);
        }
        else
        {
          if (m_bdata->getTemperature() < m_args->models[MDL_VCOLD].temp)
            value = getMergedEstimate(MGD_FTAC);
          else
            value = getMergedEstimate(MGD_ATAC);
        }

        // check if the estimate goes above the actual likely capacity
        return std::min(value, m_args->full_capacity * (1 - m_args->decay_factor));
      }

      //! Find the optimistic and pessimistic confidence
      inline void
      goodBadConfidence(float& good_conf, float& bad_conf, float interval,
                        float good_est, float bad_est, float merged_est)
      {
        good_conf = c_mod_conf;
        bad_conf = c_mod_conf;

        float prox_interval = c_mod_prox * interval;
        float conf_gap = c_top_conf - c_mod_conf;
        float bad_est_diff = std::fabs(bad_est - merged_est);
        float good_est_diff = std::fabs(good_est - merged_est);

        if (bad_est_diff < prox_interval)
        {
          bad_conf += (conf_gap) * (1 - bad_est_diff / prox_interval);
        }

        if (good_est_diff < prox_interval)
        {
          good_conf += (conf_gap) * (1 - good_est_diff / prox_interval);
        }
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
        float interval = std::fabs(good_est - bad_est);

        // division by zero check (should never happen)
        if (interval == 0.0)
          return -1.0;

        float good_conf;
        float bad_conf;
        goodBadConfidence(good_conf, bad_conf, interval,
                          good_est, bad_est, merged_est);

        std::vector<float> vec_energs, vec_confs;

        if (merged_est >= bad_est && merged_est <= good_est)
        {
          float energs[] = {0.0f, bad_est, merged_est, good_est, m_args->full_capacity};
          float confs[] = {0.0f, bad_conf, c_top_conf, good_conf, 0.0f};

          vec_energs.assign(energs, energs + sizeof(energs) / sizeof(float));
          vec_confs.assign(confs, confs + sizeof(confs) / sizeof(float));
        }
        else if (merged_est < bad_est)
        {
          float energs[] = {0.0f, merged_est, bad_est, good_est, m_args->full_capacity};
          float confs[] = {0.0f, c_top_conf, bad_conf, good_conf, 0.0f};

          vec_energs.assign(energs, energs + sizeof(energs) / sizeof(float));
          vec_confs.assign(confs, confs + sizeof(confs) / sizeof(float));
        }
        else if (merged_est > good_est)
        {
          float energs[] = {0.0f, bad_est, good_est, merged_est, m_args->full_capacity};
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
      inline float
      computeConfidence(void)
      {
        return computeConfidence(m_initial_estimate - m_energy_consumed);
      }

      struct DualClock
      {
        //! Monotonic clock
        Time::Counter<float> mono;
        //! Realtime clock now
        double real;
        //! Realtime clock start
        double start;
        //! Top of the clock
        double top;
        //! True if realtime clock
        bool type_real;

        DualClock(double t = 0.0, bool type = false, double start_time = 0.0):
          mono(t),
          real(start_time),
          start(start_time),
          top(t),
          type_real(type)
        { }

        void
        setTop(double new_top)
        {
          if (type_real)
            top = new_top;
          else
            mono.setTop(new_top);

          reset();
        }

        void
        reset(void)
        {
          if (type_real)
            start = real;
          else
            mono.reset();
        }

        inline bool
        overflow(void)
        {
          if (type_real)
            return real - start > top;
          else
            return mono.overflow();
        }

        void
        update(double time)
        {
          if (!type_real)
            return;

          real = time;
        }
      };

      //! Filter's arguments
      const Arguments* m_args;
      //! Battery related data being measured
      BatteryData* m_bdata;
      //! Pointer to set to gather estimated power consumption of certain entities
      const EPMap* m_epower;
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
      //! Timer for redoing estimate
      DualClock m_redo_timer;
      //! Timer Counter for stabilization time after maneuvering
      DualClock m_sane_timer;
      //! True if maneuvering. Start as true.
      bool m_is_maneuvering;
      //! Set of active entities
      std::set<unsigned> m_act_ent;
      //! Energy rate consumed by entities we're estimating
      float m_est_rate;
      //! Pointer to typename T (which could be class Task)
      Tasks::Task* m_task;
    };
  }
}

#endif
