//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************


#ifndef SRC_TRANSPORTS_DATASTORE_DATASTORE_HPP_
#define SRC_TRANSPORTS_DATASTORE_DATASTORE_HPP_

#define BASE_HISTORY_SIZE 36
#define MINIMUM_SAMPLE_SIZE 15

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace DataStore
  {

    using DUNE_NAMESPACES;

    class DataSample
    {
    public:
      double latDegs, lonDegs, zMeters, timestamp;
      int priority, source;
      IMC::Message * sample;

      DataSample()
      {
        latDegs = lonDegs = zMeters = timestamp = 0;
        priority = source = -1;
        sample = NULL;
      }

      ~DataSample()
      {
        if (sample != NULL)
          delete sample;
      }

      // comparison based on timestamp of sample
      bool operator<(DataSample other) const
      {
        return timestamp > other.timestamp;
      }

      int
      serializationSize()
      {
        return sample->getPayloadSerializationSize() + MINIMUM_SAMPLE_SIZE;
      }
    };

    HistoricSample*
    parse(DataSample* sample, double base_lat, double base_lon, long base_time)
    {
      HistoricSample* s = new HistoricSample();

      double lat1 = Angles::radians(base_lat), lat2 = Angles::radians(sample->latDegs);
      double lon1 = Angles::radians(base_lon), lon2 = Angles::radians(sample->lonDegs);
      double x, y, z;

      WGS84::displacement(lat1, lon1, 0, lat2, lon2, 0, &x, &y, &z);

      s->x = (int16_t) x;
      s->y = (int16_t) y;
      s->z = (int16_t) (sample->zMeters * 10);
      s->t = (int16_t) (sample->timestamp - base_time);
      s->sys_id = sample->source;
      s->sample.set(sample->sample);
      return s;
    }


    std::vector<DataSample *>
    parse(const IMC::HistoricData* data)
    {
      std::vector<DataSample *> samples;
      MessageList<HistoricSample>::const_iterator it;

      for (it = data->data.begin(); it != data->data.end(); it++)
      {
        DataSample* s = new DataSample();
        s->latDegs = data->base_lat;
        s->lonDegs = data->base_lon;
        WGS84::displace((*it)->x, (*it)->y, &s->latDegs, &s->lonDegs);
        s->source = (*it)->sys_id;
        s->timestamp = data->base_time + (*it)->t;
        s->zMeters = (*it)->z / 10.0;
        s->sample = (*it)->sample.get()->clone();
        samples.push_back(s);
      }

      return samples;
    }

    class DataStore
    {
    public:
      DataStore()
    {

    }

      void
      addSample(DataSample* sample)
      {
        Concurrency::ScopedRWLock(m_lock, true);
        samples.push(sample);
      }

      void
      addData(const IMC::HistoricData * data)
      {
        std::vector<DataSample *> tmp = parse(data);
        std::vector<DataSample *>::iterator it;
        for (it = tmp.begin(); it != tmp.end(); it++)
        {
          addSample(*it);
        }
      }

      IMC::HistoricData * pollData(int size)
      {
        std::vector<DataSample *> added, rejected;
        IMC::HistoricData * ret = new IMC::HistoricData();
        size -= BASE_HISTORY_SIZE; // base fields from HistoricData

        Concurrency::ScopedRWLock(m_lock, true);
        while (!samples.empty() && size > MINIMUM_SAMPLE_SIZE)
        {
          // pop next sample
          DataSample * sample = samples.top();
          samples.pop();

          // check if there is space left for this sample
          int sample_size = sample->serializationSize();
          if (sample_size > size)
          {
            rejected.push_back(sample);
          }
          else
          {
            size -= sample_size;
            added.push_back(sample);
          }
        }
        // add back samples that didn't fit on the message
        std::vector<DataSample *>::iterator it;
        for (it = rejected.begin(); it != rejected.end(); it++)
        {
          samples.push(*it);
        }

        // no data can be added
        if (added.empty())
          return NULL;

        ret->base_lat = added.at(0)->latDegs;
        ret->base_lon = added.at(0)->lonDegs;
        ret->base_time = added.at(0)->timestamp;

        for (it = added.begin(); it != added.end(); it++)
        {
          DataSample * sample = *it;
          ret->data.push_back(parse(sample, ret->base_lat, ret->base_lon, ret->base_time));
          delete sample;
        }

        return ret;
      }

    private:
      std::priority_queue<DataSample *, std::vector<DataSample *> > samples;
      Concurrency::RWLock m_lock;
    };
  } /* namespace DataStore */
} /* namespace Transports */

#endif /* SRC_TRANSPORTS_DATASTORE_DATASTORE_HPP_ */
