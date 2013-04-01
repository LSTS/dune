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

// DUNE headers.
#include <DUNE/Algorithms/XORChecksum.hpp>
#include <DUNE/Hardware/UCTK/Interface.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      Interface::~Interface(void)
      {
        while (!m_queue.empty())
          delete m_queue.pop();
      }

      void
      Interface::open(void)
      {
        doOpen();

        UCTK::FirmwareName req;
        if (!request(req))
          throw std::runtime_error("failed to get name");
        m_name = req.name;
      }

      void
      Interface::enterBootloader(void)
      {
        UCTK::Boot req;
        if (!request(req))
          throw std::runtime_error("failed to jump to bootloader");

        open();

        if (getName() != "BOOT")
          throw std::runtime_error("failed to enter bootloader");
      }

      bool
      Interface::request(Message& msg, double timeout)
      {
        uint8_t csum = (c_sync ^ msg.getId()) | 0x80;
        uint8_t frame[] = {c_sync, 0, msg.getId(), csum};

        write(frame, sizeof(frame));

        return readReply(msg, timeout);
      }

      bool
      Interface::command(Message& msg, double timeout)
      {
        uint8_t size = msg.getSize();
        uint8_t idx_crc = 3 + msg.getSize();
        uint8_t frame[c_frame_overhead + c_max_payload] = {c_sync, size, msg.getId()};

        msg.serialize(frame + 3, c_max_payload);
        frame[idx_crc] = Algorithms::XORChecksum::compute(frame, idx_crc) | 0x80;

        write(frame, size + c_frame_overhead);

        if (timeout < 0)
          return true;

        return readReply(msg, timeout);
      }

      bool
      Interface::sendFrame(Frame& frame, double timeout)
      {
        frame.computeCRC();

        write(frame.getData(), frame.getSize());

        if (timeout < 0)
          return true;

        return readReply(frame, timeout);
      }

      bool
      Interface::readReply(Frame& frame, double timeout)
      {
        unsigned reply_id = frame.getId();

        Time::Counter<double> timer(timeout);
        while (!timer.overflow())
        {
          if (!poll(timer.getRemaining()))
            break;

          unsigned rv = read(m_buffer, sizeof(m_buffer));
          for (unsigned i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(m_buffer[i], frame))
              continue;

            if (frame.getId() == MSG_ERR)
            {
              Error error;
              error.deserialize(frame.getPayload(), frame.getPayloadSize());
              throw std::runtime_error(error.error);
            }

            if (frame.getId() == reply_id)
              return true;

            m_queue.push(new Frame(frame));
          }
        }

        return false;
      }

      bool
      Interface::readReply(Message& msg, double timeout)
      {
        Frame frame;

        Time::Counter<double> timer(timeout);
        while (!timer.overflow())
        {
          if (!poll(timer.getRemaining()))
            break;

          unsigned rv = read(m_buffer, sizeof(m_buffer));
          for (unsigned i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(m_buffer[i], frame))
              continue;

            if (frame.getId() == MSG_ERR)
            {
              Error error;
              error.deserialize(frame.getPayload(), frame.getPayloadSize());
              throw std::runtime_error(error.error);
            }

            if (frame.getId() == msg.getId())
            {
              msg.deserialize(frame.getPayload(), frame.getPayloadSize());
              return true;
            }

            m_queue.push(new Frame(frame));
          }
        }

        return false;
      }
    }
  }
}
