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

    //! Class used to store a single sample.
    //! All samples have a location, timestamp, priority and a message (IMC).
    class DataSample
    {
    public:
      //! Sample global coordinates
      double latDegs, lonDegs, zMeters, timestamp;

      //! Priority of the sample (higher priority samples are transmitted first)
      int priority;

      //! The system that generated this sample
      int source;

      //! Actual data gathered at these coords
      IMC::Message* sample;

      DataSample(void)
      {
        latDegs = lonDegs = zMeters = timestamp = 0;
        priority = source = -1;
        sample = NULL;
      }

      ~DataSample(void)
      {
        if (sample != NULL)
          delete sample;
      }

      int
      serializationSize(void)
      {
        return sample->getPayloadSerializationSize() + MINIMUM_SAMPLE_SIZE;
      }
    };

    class CompareSamples
    {
    public:
      bool operator()(const DataSample* p1, const DataSample* p2) const
      {
        return p1->priority <= p2->priority && p1->timestamp < p2->timestamp;
      }
    };

    //! Translate a (global coordinates) Data Sample into an IMC HistoricSample message
    HistoricSample*
    parse(DataSample* sample, double base_lat, double base_lon, long base_time)
    {
      HistoricSample* s = new HistoricSample();

      double lat1 = Angles::radians(base_lat);
      double lat2 = Angles::radians(sample->latDegs);
      double lon1 = Angles::radians(base_lon);
      double lon2 = Angles::radians(sample->lonDegs);
      double x, y, z;

      // compute displacement to used relative to base coordinates
      WGS84::displacement(lat1, lon1, 0, lat2, lon2, 0, &x, &y, &z);
      s->x = (int16_t) x;
      s->y = (int16_t) y;
      s->z = (int16_t) (sample->zMeters * 10);
      s->t = (int16_t) (sample->timestamp - base_time);

      // other fields are copied from original
      s->sys_id = sample->source;
      s->sample.set(sample->sample);
      s->priority = sample->priority;
      return s;
    }

    //! Given an HistoricData message, extract all samples
    void
    parse(const IMC::HistoricData* data, std::vector<DataSample*>& samples, std::vector<RemoteCommand*>& commands)
    {
      IMC::MessageList<RemoteData>::const_iterator it;

      for (it = data->data.begin(); it != data->data.end(); it++)
      {
        if ((*it)->getId() == RemoteCommand::getIdStatic())
        {
          commands.push_back(static_cast<RemoteCommand*>((*it)->clone()));
        }
        else
        {
          const HistoricSample* sample = static_cast<const HistoricSample*>(*it);
          DataSample* s = new DataSample();

          double lat = Angles::radians(data->base_lat);
          double lon = Angles::radians(data->base_lon);
          WGS84::displace((sample)->x, (sample)->y, &lat, &lon);
          s->latDegs = Angles::degrees(lat);
          s->lonDegs = Angles::degrees(lon);
          s->source = (sample)->sys_id;
          s->timestamp = data->base_time + (sample)->t;
          s->zMeters = (sample)->z / 10.0;
          s->sample = (sample)->sample.get()->clone();
          samples.push_back(s);
        }
      }
    }

    //! This class is used to store samples locally until they are forwarded to other node
    class DataStore
    {
    public:
      DataStore(Task* task):
        m_task(task)
    { }

      ~DataStore(void)
      {
        Concurrency::ScopedRWLock(m_lock, true);
        while (!m_samples.empty())
        {
          delete m_samples.top();
          m_samples.pop();
        }
      }

      //! Add sample to this store
      void
      addSample(DataSample* sample)
      {
        Concurrency::ScopedRWLock(m_lock, true);
        m_task->debug("Adding sample %d/%f", sample->sample->getId(), sample->timestamp);
        m_samples.push(sample);
      }

      //! Add a series of historic samples packed as an HistoricData message
      void
      addData(const IMC::HistoricData * data)
      {
        std::vector<DataSample*> new_samples;
        std::vector<RemoteCommand*> commands;
        parse(data, new_samples, commands);
        std::vector<DataSample*>::iterator it;
        std::vector<RemoteCommand*>::iterator cmd;
        for (it = new_samples.begin(); it != new_samples.end(); it++)
          addSample(*it);
        for (cmd = commands.begin(); cmd != commands.end(); cmd++)
        {
          uint16_t dst = (*cmd)->destination;
          double timeout = (*cmd)->timeout;

          // if command has timed-out, drop it
          if (Clock::getSinceEpoch() > timeout)
          {
            m_task->debug("Dropping expired remote command.");
            continue;
          }

          // if message's destination is this system, dispatch it locally
          if (dst == m_task->getSystemId())
          {
            Message * msg = (*cmd)->cmd.get();
            msg->setDestination(dst);
            msg->setSource((*cmd)->original_source);
            m_task->debug("Dispatching remote command of type %s sent by %s.",
                          msg->getName(),
                          m_task->resolveSystemId((*cmd)->original_source));

            m_task->dispatch(msg, DF_KEEP_SRC_EID);
          }
          else
          {
            m_task->debug("Adding (multi-hop) remote command.");
            m_commands.push_back(*cmd);
          }
        }
      }

      //! Retrieve a series of commands that take up to 'size'
      IMC::HistoricData*
      pollCommands(int destination, int size)
      {
        size -= BASE_HISTORY_SIZE; // base fields from HistoricData
        IMC::HistoricData* ret = new IMC::HistoricData();

        // add commands for that destination
        std::vector<RemoteCommand*>::iterator cmd_it;

        cmd_it = m_commands.begin();
        while(cmd_it != m_commands.end()) {
          if ((*cmd_it)->destination == destination) {
            int ser_size = (*cmd_it)->getSerializationSize();
            if (ser_size < size)
            {
              size -= ser_size;
              ret->data.push_back(*cmd_it);
              cmd_it = m_commands.erase(cmd_it);
              continue;
            }
          }
          cmd_it++;
        }

        if (ret->data.size() == 0)
          return NULL;
        else
          return ret;
      }

      //! Retrieve a series of sample that take up to 'size'
      IMC::HistoricData*
      pollSamples(int size)
      {

        size -= BASE_HISTORY_SIZE; // base fields from HistoricData
        IMC::HistoricData* ret = new IMC::HistoricData();

        std::vector<DataSample*> added, rejected;

        Concurrency::ScopedRWLock(m_lock, true);
        while (!m_samples.empty() && size > MINIMUM_SAMPLE_SIZE)
        {
          // pop next sample
          DataSample* sample = m_samples.top();
          m_samples.pop();

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
          m_samples.push(*it);
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
          ret->data.push_back(
              parse(sample, ret->base_lat, ret->base_lon, ret->base_time));
          delete sample;
        }

        return ret;
      }

    private:
      std::priority_queue<DataSample *, std::vector<DataSample *> , CompareSamples> m_samples;
      std::vector<RemoteCommand* > m_commands;
      Concurrency::RWLock m_lock;
      Task* m_task;
    };
  }
}

#endif
