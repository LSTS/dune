//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
      //! @param[in] port UDP listening port.
      //! @param[in] buffer_capacity packet buffer capacity.
      GVSP(uint16_t port, unsigned buffer_capacity = 16384):
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
      static const int c_header_size = 44;
      //! GVSP footer size.
      static const int c_footer_size = 16;
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
        IOMultiplexing iom;
        m_socket.addToPoll(iom);

        while (!isStopping())
        {
          if (!iom.poll(1.0))
            continue;

          int rv = m_socket.read((char*)m_buffer, m_buffer_capacity);

          if (rv == c_header_size)
          {
            m_count = 0;
            frame = dequeueClean();
            if (frame == NULL)
            {
              DUNE_ERR("GVSP", "buffer overrun");
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
              DUNE_ERR("GVSP", "null frame");
            }
          }
        }
      }
    };
  }
}

#endif
