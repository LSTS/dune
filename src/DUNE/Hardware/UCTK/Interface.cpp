//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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

        return readReply(msg, timeout);
      }

      bool
      Interface::readReply(Message& msg, double timeout)
      {
        Time::Counter<double> timer(timeout);
        while (!timer.overflow())
        {
          if (!hasNewData(timer.getRemaining()))
            break;

          unsigned rv = read(m_buffer, sizeof(m_buffer));
          for (unsigned i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(m_buffer[i]))
              continue;

            if (m_parser.getId() == MSG_ERR)
            {
              Error error;
              error.deserialize(m_parser.getPayload(), m_parser.getPayloadSize());
              throw std::runtime_error(error.error);
            }

            if (m_parser.getId() == msg.getId())
            {
              msg.deserialize(m_parser.getPayload(), m_parser.getPayloadSize());
              return true;
            }
          }
        }

        return false;
      }
    }
  }
}
