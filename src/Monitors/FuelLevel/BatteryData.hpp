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

#ifndef MONITORS_FUEL_LEVEL_BATTERY_DATA_HPP_INCLUDED_
#define MONITORS_FUEL_LEVEL_BATTERY_DATA_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace FuelLevel
  {
    using DUNE_NAMESPACES;

    //! Battery measure names
    static const std::string c_measure_names[] = {"Voltage", "Current", "Temperature"};

    //! Battery data for Fuel Level
    class BatteryData
    {
    public:
      enum BatteryMeasures
      {
        //! Voltage measures
        BM_VOLTAGE,
        //! Current measures
        BM_CURRENT,
        //! Temperature measures
        BM_TEMPERATURE,
        //! Number of measures
        BM_TOTAL
      };

      //! Constructor.
      //! @param[in] window_size moving averages window sizes
      BatteryData(const unsigned window_size[BM_TOTAL])
      {
        for (unsigned i = 0; i < BM_TOTAL; ++i)
        {
          m_avg[i] = new MovingAverage<float>(window_size[i]);
          m_measures[i] = false;
        }
      }

      //! Destructor.
      ~BatteryData(void)
      {
        for (unsigned i = 0; i < BM_TOTAL; ++i)
        {
          if (m_avg[i] != NULL)
          {
            delete m_avg[i];
            m_avg[i] = NULL;
          }
        }
      }

      //! Set message entities
      //! @param[in] eids array of entity ids
      void
      setEntities(unsigned eids[])
      {
        m_ents = &eids[0];
      }

      //! Update a measurement
      //! @param[in] bm battery measure type
      //! @param[in] entity entity id to set
      //! @param[in] value measure value to update with
      //! @return true if the value has been updated
      inline bool
      update(BatteryMeasures bm, uint8_t entity, float value)
      {
        if (m_ents[bm] == entity)
        {
          m_avg[bm]->update(value);
          m_measures[bm] = true;

          return true;
        }

        return false;
      }

      //! Update Voltage
      //! @param[in] msg voltage message pointer
      //! @return true if value was updated
      inline bool
      update(const IMC::Voltage* msg)
      {
        return update(BM_VOLTAGE, msg->getSourceEntity(), msg->value);
      }

      //! Update Current
      //! @param[in] msg current message pointer
      //! @return true if value was updated
      inline bool
      update(const IMC::Current* msg)
      {
        return update(BM_CURRENT, msg->getSourceEntity(), msg->value);
      }

      //! Update Temperature
      //! @param[in] msg temperature message pointer
      //! @return true if value was updated
      inline bool
      update(const IMC::Temperature* msg)
      {
        return update(BM_TEMPERATURE, msg->getSourceEntity(), msg->value);
      }

      //! Compute energy drop
      //! @param[in] timestep elapsed time to use in computation
      //! @return computed energy drop
      inline float
      getEnergyDrop(float timestep) const
      {
        return m_avg[BM_VOLTAGE]->mean() * m_avg[BM_CURRENT]->mean() * timestep / 3600.0;
      }

      //! Get voltage value
      //! @return voltage estimate
      inline float
      getVoltage(void) const
      {
        return m_avg[BM_VOLTAGE]->mean();
      }

      //! Get current value
      //! @return current estimate
      inline float
      getCurrent(void) const
      {
        return m_avg[BM_CURRENT]->mean();
      }

      //! Get temperature value
      //! @return temperature estimate
      inline float
      getTemperature(void) const
      {
        return m_avg[BM_TEMPERATURE]->mean();
      }

      //! Check if we have measurements
      //! @return false if some measurement has not been received yet
      inline bool
      gotMeasurements(void) const
      {
        return m_measures[BM_VOLTAGE] && m_measures[BM_CURRENT] && m_measures[BM_TEMPERATURE];
      }

    private:
      //! Measure types
      bool m_measures[BM_TOTAL];
      //! Pointer to entity ids
      unsigned* m_ents;
      //! Moving averages
      MovingAverage<float>* m_avg[BM_TOTAL];
    };
  }
}

#endif
