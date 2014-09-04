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

#ifndef DUNE_PLAN_ENGINE_FUELPREDICTION_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_FUELPREDICTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Parsers.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Plans/TimeProfile.hpp>
#include <DUNE/Plans/PowerModel.hpp>
#include <DUNE/Plans/SpeedModel.hpp>

// Local headers.
#include "ComponentActiveTime.hpp"
#include "GroupSpeed.hpp"

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM FuelPrediction;

    //! Tolerance for RPMs to group them together
    static const float c_rpm_tolerance = 10.0f;

    enum FuelParcels
    {
      //! Hotel energy consumed
      FP_HOTEL = 0,
      //! Motion energy
      FP_MOTION,
      //! Payload energy
      FP_PAYLOAD,
      //! IMU energy
      FP_IMU,
      //! Total number of parcels
      FP_TOTAL
    };

    //! Plan Specification parser
    class FuelPrediction
    {
    public:
      //! Constructor.
      FuelPrediction(const Plans::TimeProfile* profiles,
                     const ComponentActiveTime* cat,
                     const Plans::PowerModel* power_model,
                     const Plans::SpeedModel* speed_model,
                     bool imu_enabled,
                     float total_duration):

        m_pmodel(power_model)
      {
        computeHotelEnergy(total_duration);
        computeMotionEnergy(profiles, speed_model);
        computePayloadEnergy(cat);

        if (imu_enabled)
          computeIMUEnergy(total_duration);
        else
          m_fuel_parcels[FP_IMU] = 0.0f;
      }

      //! Destructor
      ~FuelPrediction(void)
      { }

      //! Get the total estimated fuel consumption
      //! @return estimated fuel consumed in Wh
      float
      getTotal(void) const
      {
        float total = 0.0f;
        for (unsigned i = 0; i < FP_TOTAL; ++i)
          total += m_fuel_parcels[i];

        return total;
      }

      inline float
      getHotel(void) const
      {
        return m_fuel_parcels[FP_HOTEL];
      }

      inline float
      getPayload(void) const
      {
        return m_fuel_parcels[FP_PAYLOAD];
      }

      inline float
      getMotion(void) const
      {
        return m_fuel_parcels[FP_MOTION];
      }

      inline float
      getIMU(void) const
      {
        return m_fuel_parcels[FP_IMU];
      }

    private:
      //! Compute hotel consumed energy
      //! @param[in] total_duration total amount of time of the plan
      void
      computeHotelEnergy(float total_duration)
      {
        m_fuel_parcels[FP_HOTEL] = m_pmodel->computeHotelEnergy(total_duration);
      }

      //! Compute energy consumed by motion gear
      //! @param[in] profiles pointer to TimeProfiles object with speed profiles
      //! @param[in] speed_model motion model parameters of the vehicle
      void
      computeMotionEnergy(const Plans::TimeProfile* profiles,
                          const Plans::SpeedModel* speed_model)
      {
        Plans::TimeProfile::const_iterator itr;

        // object to group the speeds together in a map
        GroupSpeed gspeed(c_rpm_tolerance);

        for (itr = profiles->begin(); itr != profiles->end(); ++itr)
        {
          // Pointer to vector of speed profiles
          const std::vector<TimeProfile::SpeedProfile>* sptr = &itr->second.speeds;

          for (unsigned i = 0; i < sptr->size(); i++)
          {
            float rpm = speed_model->toRPM(sptr->at(i).speed,
                                           sptr->at(i).speed_units);
            gspeed.add(rpm, sptr->at(i).time);
          }
        }

        float accum = 0.0f;

        GroupSpeed::const_iterator gtr;
        for (gtr = gspeed.begin(); gtr != gspeed.end(); ++gtr)
          accum += m_pmodel->computeMotionEnergy(gtr->first, gtr->second);

        m_fuel_parcels[FP_MOTION] = accum;
      }

      //! Compute energy consumed by payload
      //! @param[in] cat pointer to object with payload active times
      void
      computePayloadEnergy(const ComponentActiveTime* cat)
      {
        float accum = 0.0f;

        ComponentActiveTime::const_iterator itr;
        for (itr = cat->begin(); itr != cat->end(); ++itr)
        {
          float energy = m_pmodel->computePayloadEnergy(itr->first, itr->second);
          accum += energy > 0.0f ? energy : 0.0f;
        }

        m_fuel_parcels[FP_PAYLOAD] = accum;
      }

      //! Compute energy consumed by IMU
      //! @param[in] total_duration total amount of time of the plan
      void
      computeIMUEnergy(float total_duration)
      {
        m_fuel_parcels[FP_IMU] = m_pmodel->computeIMUEnergy(total_duration);
      }

      //! Parcels of estimated fuel consumed
      float m_fuel_parcels[FP_TOTAL];
      //! Power model for the estimation
      const Plans::PowerModel* m_pmodel;
    };
  }
}

#endif
