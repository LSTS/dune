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

#ifndef DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Hardware/UCTK/Parser.hpp>
#include <DUNE/Hardware/UCTK/Frame.hpp>
#include <DUNE/Hardware/UCTK/FirmwareInfo.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Interface
      {
      public:
        Interface(IO::Handle* handle);

        virtual
        ~Interface(void);

        void
        flush(void)
        {
          while (!m_queue.empty())
            delete m_queue.pop();
          m_handle->flush();
        }

        FirmwareInfo
        getFirmwareInfo(void);

        void
        resetDevice(void);

        bool
        sendFrame(Frame& frame, double timeout = 1.0);

        void
        setBootStop(bool value);

        Frame*
        pop(void)
        {
          return m_queue.pop();
        }

        unsigned
        consume(void)
        {
          unsigned frame_count = 0;
          size_t rv = m_handle->read(m_buffer, sizeof(m_buffer));
          for (size_t i = 0; i < rv; ++i)
          {
            if (m_parser.parse(m_buffer[i], m_frame))
            {
              m_queue.push(new Frame(m_frame));
              ++frame_count;
            }
          }

          return frame_count;
        }

      private:
        //! I/O handle.
        IO::Handle* m_handle;
        //! Buffer frame.
        UCTK::Frame m_frame;
        UCTK::Parser m_parser;
        uint8_t m_buffer[128];
        //! Frame queue.
        Concurrency::TSQueue<UCTK::Frame*> m_queue;

        bool
        readReply(Frame& msg, double timeout);

        void
        getFirmwareName(FirmwareInfo& info);

        void
        getFirmwareVersion(FirmwareInfo& info);
      };
    }
  }
}

#endif
