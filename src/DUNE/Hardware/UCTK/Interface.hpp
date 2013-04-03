//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Hardware/UCTK/Message.hpp>
#include <DUNE/Hardware/UCTK/Parser.hpp>
#include <DUNE/Hardware/UCTK/Factory.hpp>
#include <DUNE/Hardware/UCTK/Frame.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Interface
      {
      public:
        virtual
        ~Interface(void);

        void
        open(void);

        bool
        poll(double timeout)
        {
          return doPoll(timeout);
        }

        void
        write(const uint8_t* data, unsigned data_size)
        {
          doWrite(data, data_size);
        }

        unsigned
        read(uint8_t* data, unsigned data_size)
        {
          return doRead(data, data_size);
        }

        void
        flush(void)
        {
          while (!m_queue.empty())
            delete m_queue.pop();
          doFlush();
        }

        std::string
        getName(void) const
        {
          return m_name;
        }

        bool
        request(UCTK::Message& msg, double timeout = 1.0);

        bool
        command(UCTK::Message& msg, double timeout = 1.0);

        bool
        sendFrame(Frame& frame, double timeout = 1.0);

        void
        enterBootloader(void);

        Frame*
        pop(void)
        {
          return m_queue.pop();
        }

        unsigned
        consume(void)
        {
          unsigned frame_count = 0;
          unsigned rv = read(m_buffer, sizeof(m_buffer));
          for (unsigned i = 0; i < rv; ++i)
          {
            if (m_parser.parse(m_buffer[i], m_frame))
            {
              m_queue.push(new Frame(m_frame));
              ++frame_count;
            }
          }

          return frame_count;
        }

      protected:
        virtual void
        doOpen(void) = 0;

        virtual bool
        doPoll(double timeout) = 0;

        virtual void
        doWrite(const uint8_t* data, unsigned data_size) = 0;

        virtual unsigned
        doRead(uint8_t* data, unsigned data_size) = 0;

        virtual void
        doFlush(void) = 0;

      private:
        //! Buffer frame.
        UCTK::Frame m_frame;
        UCTK::Parser m_parser;
        UCTK::Factory m_factory;
        uint8_t m_buffer[128];
        std::string m_name;
        //! Frame queue.
        Concurrency::TSQueue<UCTK::Frame*> m_queue;

        bool
        readReply(Message& msg, double timeout);

        bool
        readReply(Frame& msg, double timeout);
      };
    }
  }
}

#endif
