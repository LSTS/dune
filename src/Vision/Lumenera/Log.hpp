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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef VISION_LUMENERA_LOG_HPP_INCLUDED_
#define VISION_LUMENERA_LOG_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace Lumenera
  {
    using DUNE_NAMESPACES;

    //! Log file prefix.
    static const char* c_log_prefix = "Data_";
    //! Log file suffix.
    static const char* c_log_suffix = ".mjpg";

    class Log: public Concurrency::Thread
    {
    public:
      class Frame
      {
      public:
        Frame():
          m_timestamp(-1)
        {
          m_buffer.setSize(256 * 1024);
        }

        void
        setTimeStamp(double timestamp)
        {
          m_timestamp = timestamp;
        }

        double
        getTimeStamp(void) const
        {
          return m_timestamp;
        }

        ByteBuffer*
        getBuffer(void)
        {
          return &m_buffer;
        }

      private:
        ByteBuffer m_buffer;
        double m_timestamp;
      };

      Log(Tasks::Task* parent, const Path& folder, unsigned width, unsigned height, unsigned fps):
        m_parent(parent),
        m_frame_count(0)
      {
        m_path = getLogPath(folder);
        folder.create();
        m_parent->debug("starting file: %s", m_path.c_str());

        m_encoder = new MJPG::Encoder(m_path.c_str(), width, height, fps);
        preAllocateFrames();
      }

      ~Log(void)
      {
        while (!m_queue.empty())
        {
          Frame* frame = m_queue.pop();
          if (frame != NULL)
            delete frame;
        }

        while (!m_free_queue.empty())
        {
          Frame* frame = m_free_queue.pop();
          if (frame != NULL)
            delete frame;
        }

        delete m_encoder;
      }

      int64_t
      getSize(void)
      {
        return m_path.size();
      }

      size_t
      getFrameCount(void)
      {
        return m_frame_count;
      }

      void
      put(Frame* frame)
      {
        m_queue.push(frame);
      }

      void
      putFree(Frame* frame)
      {
        m_free_queue.push(frame);
      }

      Frame*
      getFreeFrame(void)
      {
        Frame* frame = m_free_queue.pop();
        if (frame == NULL)
          frame = new Frame();

        return frame;
      }

      ByteBuffer*
      getBuffer(void)
      {
        return NULL;
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! MJPEG/AVI file path.
      Path m_path;
      //! Queue with dirty frames.
      Concurrency::TSQueue<Frame*> m_queue;
      //! Queue with free frames.
      Concurrency::TSQueue<Frame*> m_free_queue;
      //! MJPEG/AVI encoder.
      Media::MJPG::Encoder* m_encoder;
      //! Number of frames written so far.
      size_t m_frame_count;

      static Path
      getLogPath(const Path& folder)
      {
        Path path;
        double now = Clock::getSinceEpoch();

        while (true)
        {
          std::string file_name(c_log_prefix);
          file_name.append(Format::getDateSafe(now) + Format::getTimeSafe(now));
          file_name.append(c_log_suffix);

          path = folder / file_name;
          if (!path.exists())
            break;

          now += 1.0;
        }

        return path;
      }

      void
      preAllocateFrames(void)
      {
        for (size_t i = 0; i < 10; ++i)
        {
          Frame* frame = new Frame();
          m_free_queue.push(frame);
        }
      }

      void
      processQueue(void)
      {
        while (!m_queue.empty())
        {
          Frame* frame = m_queue.pop();
          if (frame == NULL)
            continue;

          ByteBuffer* buffer = frame->getBuffer();

          m_encoder->encode(buffer->getBuffer(), buffer->getSize(), frame->getTimeStamp());
          m_free_queue.push(frame);
          ++m_frame_count;
        }
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          if (m_queue.waitForItems(1.0))
            processQueue();
        }
      }
    };
  }
}

#endif
