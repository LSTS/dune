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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_SUNSET_SCHEDULER_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SCHEDULER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SUNSET
  {
    using DUNE_NAMESPACES;

    struct ScheduleKey
    {
      std::string measure_name;
      unsigned sensor_id;
      unsigned destination;

      ScheduleKey(const std::string& a_measure_name, unsigned a_sensor_id, unsigned a_destination):
        measure_name(a_measure_name),
        sensor_id(a_sensor_id),
        destination(a_destination),
        m_hash(measure_name)
      {
        m_hash.push_back((char)a_sensor_id);
        m_hash.push_back((char)a_destination);
      }

      bool
      operator<(const ScheduleKey& other) const
      {
        return m_hash < other.m_hash;
      }

      bool
      operator>(const ScheduleKey& other) const
      {
        return m_hash > other.m_hash;
      }

      bool
      operator==(const ScheduleKey& other) const
      {
        return m_hash == other.m_hash;
      }

    private:
      std::string m_hash;
    };

    class Schedule
    {
    public:
      Schedule(const ScheduleKey& key, double frequency):
        m_key(key),
        m_frequency(frequency)
      {
        setFrequency(frequency);
      }

      void
      setFrequency(double frequency)
      {
        if (frequency == 0)
        {
          m_frequency = 0;
          m_period = 0;
          m_deadline = -1;
        }
        else
        {
          m_frequency = frequency;
          m_period = 1.0 / frequency;
          reload(Clock::get());
        }
      }

      double
      getDeadline(void) const
      {
        return m_deadline;
      }

      double
      reload(double now)
      {
        m_deadline = now + m_period;
        return m_deadline;
      }

      const ScheduleKey&
      getKey(void) const
      {
        return m_key;
      }

      void
      setIterator(std::list<Schedule*>::iterator itr)
      {
        m_list_itr = itr;
      }

      std::list<Schedule*>::iterator
      getIterator(void) const
      {
        return m_list_itr;
      }

    private:
      //! Scheduler key.
      ScheduleKey m_key;
      //! Frequency.
      double m_frequency;
      //! Period.
      double m_period;
      //! Deadline.
      double m_deadline;
      //! Iterator to this element.
      std::list<Schedule*>::iterator m_list_itr;
    };

    class Scheduler
    {
    public:
      Scheduler(Tasks::Task* task):
        m_task(task)
      { }

      void
      setSchedule(const std::string& name, unsigned sensor_id, unsigned destination, double frequency)
      {
        ScheduleKey key(name, sensor_id, destination);
        removeSchedule(key);

        Schedule* sched = new Schedule(key, frequency);
        if (frequency > 0)
        {
          std::list<Schedule*>::iterator itr = insertSchedule(sched);
          sched->setIterator(itr);
          m_schedule_map[key] = sched;
          m_pending.push(sched->getKey());
        }
        else
        {
          m_pending.push(sched->getKey());
          delete sched;
        }
      }

      double
      getRemaining(void) const
      {
        if (m_schedule_list.empty())
          return -1;

        double now = Clock::get();
        double deadline = m_schedule_list.front()->getDeadline();

        return (now > deadline) ? 0 : deadline - now;
      }

      void
      update(void)
      {
        double now = Clock::get();

        std::list<Schedule*>::iterator itr = m_schedule_list.begin();
        for (; itr != m_schedule_list.end(); ++itr)
        {
          if ((*itr)->getDeadline() > now)
            break;

          m_pending.push((*itr)->getKey());
          (*itr)->reload(now);
        }
      }

      bool
      hasPending(void) const
      {
        return !m_pending.empty();
      }

      ScheduleKey
      dequeuePending(void)
      {
        ScheduleKey key = m_pending.front();
        m_pending.pop();
        return key;
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! Schedules ordered by deadline.
      std::list<Schedule*> m_schedule_list;
      //! Schedules map.
      std::map<ScheduleKey, Schedule*> m_schedule_map;
      //! Pending requests.
      std::queue<ScheduleKey> m_pending;

      std::list<Schedule*>::iterator
      insertSchedule(Schedule* sched)
      {
        // Insert in place.
        std::list<Schedule*>::iterator itr = m_schedule_list.begin();
        for (; itr != m_schedule_list.end(); ++itr)
        {
          if (sched->getDeadline() <= (*itr)->getDeadline())
          {
            return m_schedule_list.insert(itr, sched);
          }
        }

        return m_schedule_list.insert(m_schedule_list.end(), sched);
      }

      void
      removeSchedule(const ScheduleKey& key)
      {
        std::map<ScheduleKey, Schedule*>::iterator itr = m_schedule_map.find(key);

        // The key exists, remove from schedule map and list.
        if (itr != m_schedule_map.end())
        {
          std::list<Schedule*>::iterator litr = itr->second->getIterator();
          delete itr->second;
          m_schedule_map.erase(itr);
          m_schedule_list.erase(litr);
        }
      }
    };
  }
}

#endif
