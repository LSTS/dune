//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef POWER_POOL_THREAD_HPP_INCLUDED_
#define POWER_POOL_THREAD_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

#include "Driver.hpp"

namespace Sensors
{
  namespace WT901C
  {
    //! Mutex lock/unlock
    static Concurrency::Mutex m_mutex;
    //! Size of buffer to read data from IO handle.
    static const size_t c_bfr_size = 2048;
    //! Timeout for reading data from IO handle.
    static const double c_timeout_read = 0.2;

    class PollThread : public Concurrency::Thread
    {
      public:
        //! Constructor.
        //! @param[in] task parent task.
        PollThread(DUNE::Tasks::Task* task, IO::Handle* handle, Driver* driver):
          m_task(task),
          m_handle(handle),
          m_driver(driver)
        {
        }

        //! Destructor.
        ~PollThread(void)
        {
        }

        void
        run(void)
        {
          while(!isStopping())
          {
            uint8_t bfr[c_bfr_size];
            if(Poll::poll(*m_handle, c_timeout_read))
            {
              size_t rv = m_handle->read(bfr, c_bfr_size);
              if(rv > 0)
              {
                for(size_t i = 0; i < rv; i++)
                {
                  if(m_driver != NULL)
                    m_driver->addByte(bfr[i]);

                  m_task->spew("[PollThread]:byte received 0x%02x", bfr[i]);
                }
              }
              else
              {
                m_task->spew("[PollThread]:No data");
              }
            }
          }
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! IO handle.
        IO::Handle* m_handle;
        //! Driver of CPC.
        Driver* m_driver;
    };
  }
}

#endif


