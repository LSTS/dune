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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_POWER_MODEL_HPP_INCLUDED_
#define DUNE_POWER_MODEL_HPP_INCLUDED_

// ISO C++ headers.
#include <vector>
#include <map>

// DUNE headers.
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Power
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Model;

    //! Utility class to compute offline power conversions and hold model parameters.
    //! Consider ONLY positive speed.
    class Model
    {
    public:
      //! Constructor
      //! @param[in] cfg reference to Config parser
      Model(Parsers::Config* cfg);

      //! Validate the model
      void
      validate(void) const;

      //! Compute energy consumed by motor for some RPM value
      //! @param[in] rpm value of rpms to convert from
      //! @param[in] duration amount of time rotating at rpm
      //! @return energy consumed in Wh
      float
      computeMotionEnergy(float rpm, float duration) const;

      //! Compute energy consumed by a payload entity
      //! @param[in] label name of the payload
      //! @param[in] duration amount of time active
      //! @return energy consumed in Wh
      float
      computePayloadEnergy(const std::string& label, float duration) const;

      //! Compute energy consumed by minimal resources
      //! @param[in] duration amount of time in seconds
      //! @return energy consumed in Wh
      float
      computeHotelEnergy(float duration) const;

      //! Compute energy consumed by IMU
      //! @param[in] duration amount of time in seconds
      //! @return energy consumed in Wh
      float
      computeIMUEnergy(float duration) const;

      //! Get the battery capacity
      //! @return battery energy capacity in Wh
      inline float
      getBatteryCapacity(void) const
      {
        return m_capacity;
      }

      inline float
      getPowerConsumptionHotel(void) const
      {
        return m_power_hotel;
      }

      inline float
      getPowerConsumptionFull(void) const
      {
        return m_power_full;
      }

    private:
      enum Indices
      {
        //! Index of the 'Survival' column.
        CFG_IDX_SURVIVAL = 0,
        //! Index of the 'Hotel' column.
        CFG_IDX_HOTEL = 1,
        //! Index of the 'Payload' column.
        CFG_IDX_PAYLOAD = 2,
        //! Index of the 'IMU' column.
        CFG_IDX_IMU = 3,
        //! Index of the 'Average Power Consuption' column.
        CFG_IDX_AVERAGE = 4,
        //! Index of the 'Powersave Power Consuption' column.
        CFG_IDX_POWERSAVE = 5,
        //! Index of the 'Entity Label' column.
        CFG_IDX_ENTITY_LABEL = 6
      };

      //! Conversion values for power (Watt).
      std::vector<float> m_conv_watt;
      //! Conversion values for speed (rpm).
      std::vector<float> m_conv_rpm;
      //! Hotel load of the model.
      float m_power_hotel;
      //! Power consumed by IMU.
      float m_power_imu;
      //! Power consumed by the payload.
      float m_power_payload;
      //! Power consumed by the full system (hotel + payload + IMU).
      float m_power_full;
      //! Map of payloads to power consumed.
      std::map<std::string, float> m_payloads;
      //! Battery energy capacity.
      float m_capacity;

      //! Converts W to Wh using time in seconds
      //! @param[in] power value of power in W
      //! @param[in] duration amount of time in seconds
      //! @return energy consumed in Wh
      inline float
      toWh(float power, float duration) const
      {
        return (float)(power * duration / 3600.0);
      }

      void
      processHardwareParts(const std::vector<std::string>& hardware_parts, Parsers::Config* cfg);
    };
  }
}

#endif
