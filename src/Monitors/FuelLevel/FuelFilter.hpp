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

#ifndef MONITORS_FUELLEVEL_FUEL_FILTER_HPP_INCLUDED_
#define MONITORS_FUELLEVEL_FUEL_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace FuelLevel
  {
    using DUNE_NAMESPACES;

    //! Fuel Filter for Fuel Level
    class FuelFilter
    {
    public:
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

      };

      FuelFilter(Arguments* args,
                 unsigned window_size[BatteryData::BM_TOTAL],
                 unsigned eids[BatteryData::BM_TOTAL]):
        m_args(args),
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
        m_bdata->setEntites(eids);
      }

      ~FuelFilter(void)
      {
        Memory::clear(m_bdata);
      }

      //! On Voltage message
      //! @param[in] msg pointer to Voltage message
      void
      onVoltage(const IMC::Voltage& msg)
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

    private:
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

      //! Filter's arguments
      Arguments* m_args;
      //! Battery related data being measured
      BatteryData* m_bdata;
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
      Time::Counter<float> m_redo_timer;
      //! Timer Counter for stabilization time after maneuvering
      Time::Counter<float> m_sane_timer;
      //! True if maneuvering. Start as true.
      bool m_is_maneuvering;
    };
  }
}

#endif
