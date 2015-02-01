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

#ifndef SENSORS_EDGETECH_2205_LOG_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_LOG_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Packet.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    class Log: public Concurrency::Thread
    {
    public:
      Log(Tasks::Task* parent, const Path& path, size_t buffer_count = 10):
        m_parent(parent)
      {
        for (size_t i = 0; i < buffer_count; ++i)
          m_clean.push(new Packet());

        m_stream.open(path.c_str(), std::ofstream::app | std::ios::binary);
        m_path = path;
      }

      ~Log(void)
      {
        processDirtyQueue();
        m_stream.close();
        clearCleanQueue();
      }

      Path
      getPath(void)
      {
        return m_path;
      }

      void
      put(Packet* packet)
      {
        m_dirty.push(packet);
      }

      Packet*
      get(void)
      {
        Packet* packet = m_clean.pop();
        if (packet == NULL)
          packet = new Packet();

        return packet;
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! Dirty packet queue.
      Concurrency::TSQueue<Packet*> m_dirty;
      //! Clean packet queue.
      Concurrency::TSQueue<Packet*> m_clean;
      //! Log path.
      Path m_path;
      //! Log output stream.
      std::ofstream m_stream;

      void
      processDirtyQueue(void)
      {
        while (!m_dirty.empty())
        {
          Packet* packet = m_dirty.pop();
          if (packet != NULL)
          {
            m_stream.write((const char*)packet->getData(), packet->getSize());
            m_clean.push(packet);
          }
        }
      }

      void
      clearCleanQueue(void)
      {
        while (!m_clean.empty())
        {
          Packet* packet = m_clean.pop();
          if (packet != NULL)
            delete packet;
        }
      }

      void
      run(void)
      {
        while (isRunning())
        {
          if (m_dirty.waitForItems(1.0))
          {
            processDirtyQueue();
          }
        }
      }
    };
  }
}

#endif
