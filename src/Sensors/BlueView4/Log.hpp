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

#ifndef SENSORS_BLUEVIEW4_LOG_HPP_INCLUDED_
#define SENSORS_BLUEVIEW4_LOG_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace BlueView4
  {
    using DUNE_NAMESPACES;

    class Log: public Concurrency::Thread
    {
    public:
      Log(Tasks::Task* parent, const std::string& prefix, const Path& path, BVTSonar sonar, int sound_speed):
        m_parent(parent),
        m_prefix(prefix),
        m_path(path),
        m_ping_count(0)
      {
        m_file = BVTSonar_Create();
        BVTSonar_CreateFile(m_file, path.c_str(), sonar, "");
        BVTSonar_GetHead(m_file, 0, &m_file_head);
        BVTHead_SetSoundSpeed(m_file_head, sound_speed);
        m_parent->trace("opened log file: %s", path.c_str());
      }

      ~Log(void)
      {
        processPings();
        BVTHead_Destroy(m_file_head);
        BVTSonar_Destroy(m_file);
      }

      Path
      getPath(void)
      {
        return m_path;
      }

      std::string
      getPrefix(void)
      {
        ScopedMutex l(m_mutex);
        return m_prefix;
      }

      void
      put(BVTPing ping)
      {
        m_queue.push(ping);
      }

      unsigned
      getPingCount(void)
      {
        ScopedMutex l(m_mutex);
        return m_ping_count;
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! Log file.
      BVTSonar m_file;
      //! Sonar file head.
      BVTHead m_file_head;
      //! Ping queue.
      Concurrency::TSQueue<BVTPing> m_queue;
      //! Log prefix.
      std::string m_prefix;
      //! Log path.
      Path m_path;
      //! Mutex.
      Mutex m_mutex;
      //! Number of recorded pings.
      unsigned m_ping_count;

      void
      incrementPingCount(void)
      {
        ScopedMutex l(m_mutex);
        ++m_ping_count;
      }

      void
      processPings(void)
      {
        while (!m_queue.empty())
        {
          BVTPing ping = m_queue.pop();
          if (ping != NULL)
          {
            BVTHead_PutPing(m_file_head, ping);
            BVTPing_Destroy(ping);
            incrementPingCount();
          }
        }
      }

      void
      run(void)
      {
        while (isRunning())
        {
          if (m_queue.waitForItems(1.0))
            processPings();
        }
      }
    };
  }
}

#endif
