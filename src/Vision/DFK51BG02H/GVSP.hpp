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

#ifndef VISION_DFK51BG02H_GVSP_HPP_INCLUDED_
#define VISION_DFK51BG02H_GVSP_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Frame.hpp"

// Import namespaces.
using DUNE_NAMESPACES;

namespace Vision
{
  namespace DFK51BG02H
  {
    //! GigE %Vision Stream Protocol (%GVSP).
    class GVSP: public Thread
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] port UDP listening port.
      //! @param[in] buffer_capacity packet buffer capacity.
      GVSP(DUNE::Tasks::Task* task, uint16_t port, unsigned buffer_capacity = 16384):
        m_task(task),
        m_buffer_capacity(buffer_capacity),
        m_count(0)
      {
        m_buffer = new uint8_t[buffer_capacity];
        m_socket.bind(port);
      }

      //! Destructor.
      ~GVSP(void)
      {
        delete [] m_buffer;
      }

      //! Enqueue dirty frame.
      //! @param[in] frame dirty frame.
      void
      enqueueDirty(Frame* frame)
      {
        m_lock.lock();
        m_dirty.push(frame);
        m_lock.unlock();
        m_cond.broadcast();
      }

      //! Dequeue dirty frame.
      //! @return frame dirty frame or NULL if none is available.
      Frame*
      dequeueDirty(void)
      {
        ScopedMutex l(m_lock);
        if (m_dirty.empty())
          return NULL;

        Frame* frame = m_dirty.front();
        m_dirty.pop();
        return frame;
      }

      //! Wait for a dirty frame to be available.
      //! @param[in] timeout maximum amount of time to wait.
      void
      waitDirty(double timeout)
      {
        m_cond.lock();
        m_cond.wait(timeout);
        m_cond.unlock();
      }

      //! Enqueue clean frame.
      //! @param[in] frame clean frame.
      void
      enqueueClean(Frame* frame)
      {
        m_lock.lock();
        m_clean.push(frame);
        m_lock.unlock();
      }

      //! Dequeue clean frame.
      //! @return clean frame or NULL if none is available.
      Frame*
      dequeueClean(void)
      {
        ScopedMutex l(m_lock);
        if (m_clean.empty())
          return NULL;

        Frame* frame = m_clean.front();
        m_clean.pop();
        return frame;
      }

    private:
      //! GVSP header size.
      static const size_t c_header_size = 44;
      //! GVSP footer size.
      static const size_t c_footer_size = 16;
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Internal packet buffer.
      uint8_t* m_buffer;
      //! Internal packet buffer capacity.
      unsigned m_buffer_capacity;
      //! Listening UDP socket.
      UDPSocket m_socket;
      //! Number of packets captured in current frame.
      unsigned m_count;
      //! Condition to notify of queue changes.
      Condition m_cond;
      //! Lock to protect concurrent access to queues.
      Mutex m_lock;
      //! Queue of captured but not yet processed frames.
      std::queue<Frame*> m_dirty;
      //! Queue of frames that can be used for new captures.
      std::queue<Frame*> m_clean;

      void
      run(void)
      {
        Frame* frame = NULL;

        while (!isStopping())
        {
          if (!Poll::poll(m_socket, 1.0))
            continue;

          size_t rv = m_socket.read(m_buffer, m_buffer_capacity);

          if (rv == c_header_size)
          {
            m_count = 0;
            frame = dequeueClean();
            if (frame == NULL)
            {
              m_task->err(DTR("buffer overrun"));
              break;
            }

            frame->setTimeStamp();
          }
          else if (rv == c_footer_size)
          {
            enqueueDirty(frame);
            frame = NULL;
          }
          else
          {
            if (frame != NULL)
            {
              uint16_t packet_number = 0;
              ByteCopy::fromBE(packet_number, m_buffer + 6);
              m_count += frame->writePacket(packet_number, m_buffer + 8, rv - 8);
            }
            else
            {
              m_task->err(DTR("null frame"));
            }
          }
        }
      }
    };
  }
}

#endif
