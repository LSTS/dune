//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Paulo Dias                                                       *
//***************************************************************************

#ifndef CONTROL_PIONEER_LOGGER_HPP_INCLUDED_
#define CONTROL_PIONEER_LOGGER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Config.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Control
{
  namespace Pioneer
  {
    namespace Logger
    {
      class Logger: public Concurrency::Thread
      {
        public:
        Logger(DUNE::Tasks::Task* task,
          std::string logNamePrefix,
          float flushIntervalSecs = 10.0):
        m_task(task),
        m_log(NULL),
        m_log_name_prefix(logNamePrefix),
        m_log_folder(""),
        m_flush_interval_secs(flushIntervalSecs)
        {
        }

        //! Destructor.
        ~Logger(void)
        {
          stopLog();
        }

        void
        startLog(std::string logFolder)
        {
          stopLog();

          m_task->inf("Log start %s", logFolder.c_str());

          m_log_folder = logFolder;

          if (!m_log_folder.empty())
          {
            Path(m_log_folder).create();
            Path path = m_log_folder / (m_log_name_prefix + "_" + Format::getDateSafe()
              + "_" + Format::getTimeSafe() + ".p2log.gz");
            m_log = new Compression::FileOutput(path.c_str(), Compression::METHOD_GZIP);
          }

          start();
        }

        void
        stopLog(void)
        {
          stop();
          if (m_log)
          {
            m_log->flush();
            Memory::clear(m_log);
          }
        }
        
        void
        write(const uint8_t* buf, int startIndex, int length)
        {
          m_task->spew("Test log write %d bytes", length);
          if (m_log != NULL || length <= 0)
            return;

          try
          {
            m_log->write(reinterpret_cast<const char*>(&buf[startIndex]), length);
            m_task->spew("Log write %d bytes", length);
          }
          catch(const std::exception& e)
          {
            m_task->err("%s", e.what());
          }
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Log file.
        Compression::FileOutput* m_log;
        //! Flush timer.
        Counter<double> m_flush_timer;
        //! Serialization buffer.
        ByteBuffer m_buffer;
        //! Log file name.
        std::string m_log_name_prefix;
        //! Log file folder.
        std::string m_log_folder;
        //! Flush interval seconds.
        float m_flush_interval_secs;
        //! Has data written
        bool m_has_data_written;

        void
        flush(void)
        {
          if (m_log == NULL)
            return;

          if (!m_flush_timer.overflow())
            return;

          m_flush_timer.reset();
          if (m_has_data_written)
          {
            m_has_data_written = false;
            m_log->flush();
          }
        }

        void
        run(void)
        {
          while (!isStopping())
          {
            try
            {
              flush();
            }
            catch(std::exception& e)
            {
              m_task->err("%s", e.what());
            }
            Time::Delay::waitMsec(500);
          }
        }
      };
    }
  }
}

#endif
