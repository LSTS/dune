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
//***************************************************************************

#ifndef TRANSPORTS_SUNSET_SENSORS_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SENSORS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Link.hpp"
#include "SSC/Commands.hpp"

namespace Transports
{
  namespace SUNSET
  {
    using DUNE_NAMESPACES;

    class Sensors
    {
    public:
      Sensors(Tasks::Task* task, std::vector<std::string>& table):
        m_task(task)
      {
        for (size_t i = 0; i < table.size(); i += 5)
        {
          std::string measurement = table[i + 0];
          SensorInfoTuple tuple;
          tuple.sensor_id = castLexical<unsigned>(table[i + 2]);
          tuple.sensor_vendor = table[i + 3];
          tuple.sensor_model = table[i + 4];
          m_sensor_map[measurement][tuple.sensor_id] = tuple;

          try
          {
            m_eids[std::make_pair(measurement, m_task->resolveEntity(table[i + 1]))] = tuple.sensor_id;
          }
          catch (...)
          { }
        }
      }

      bool
      exists(const std::string& name, unsigned sensor_id)
      {
        return (m_readings[name][sensor_id] != NULL);
      }

      int
      getSensorId(const std::string& name, unsigned eid)
      {
        std::map<std::pair<std::string, unsigned>, unsigned>::const_iterator itr = m_eids.find(std::make_pair(name, eid));
        if (itr == m_eids.end())
          return -1;

        return itr->second;
      }

      void
      setMeasurement(const std::string& name, unsigned sensor_id, double value, const Position& position)
      {
        if (m_readings[name][sensor_id] == NULL)
          m_readings[name][sensor_id] = new SensorSample;

        m_readings[name][sensor_id]->sample = value;
        m_readings[name][sensor_id]->position = position.value;
      }

      const SensorSample&
      getMeasurement(const std::string& name, unsigned sensor_id)
      {
        if (m_readings[name][sensor_id] == NULL)
          throw InvalidRequest();

        return *m_readings[name][sensor_id];
      }

      std::vector<std::string>
      getMeasurementList(void)
      {
        std::vector<std::string> list;
        for (SensorListMap::const_iterator itr = m_sensor_map.begin();
             itr != m_sensor_map.end(); ++itr)
          list.push_back(itr->first);

        return list;
      }

      std::vector<SensorInfoTuple>
      getSensorInfoList(const std::string& measurement_name)
      {
        std::vector<SensorInfoTuple> list;
        SensorListMap::const_iterator itr = m_sensor_map.find(measurement_name);
        if (itr == m_sensor_map.end())
          return list;

        std::map<unsigned, SensorInfoTuple>::const_iterator mitr = itr->second.begin();
        for (; mitr != itr->second.end(); ++mitr)
          list.push_back(mitr->second);

        return list;
      }

    private:
      typedef std::map<std::string, std::map<unsigned, SensorInfoTuple> > SensorListMap;

      //! Parent task.
      Tasks::Task* m_task;
      //! Sensor map.
      SensorListMap m_sensor_map;
      //! Readings.
      std::map<std::string, std::map<unsigned, SensorSample*> > m_readings;
      std::map<std::pair<std::string, unsigned>, unsigned> m_eids;
    };
  }
}

#endif
