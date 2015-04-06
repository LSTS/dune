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

// DUNE headers.
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>
#include <DUNE/Hardware/UCTK/Interface.hpp>
#include <DUNE/Hardware/UCTK/Errors.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      Interface::Interface(IO::Handle* handle):
        m_handle(handle)
      { }

      Interface::~Interface(void)
      {
        while (!m_queue.empty())
          delete m_queue.pop();
      }

      FirmwareInfo
      Interface::getFirmwareInfo(void)
      {
        FirmwareInfo info;
        getFirmwareName(info);
        getFirmwareVersion(info);
        return info;
      }

      void
      Interface::resetDevice(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_RESET);
        frame.setPayloadSize(0);

        if (!sendFrame(frame))
          throw std::runtime_error(DTR("failed to reset device"));
      }

      void
      Interface::setBootStop(bool value)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_BOOT);
        frame.setPayloadSize(1);
        frame.set<uint8_t>(value, 0);

        if (!sendFrame(frame))
          throw std::runtime_error(DTR("failed to set bootloader parameters"));
      }

      bool
      Interface::sendFrame(Frame& frame, double timeout)
      {
        frame.computeCRC();

        m_handle->write(frame.getData(), frame.getSize());

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
          if (!IO::Poll::poll(*m_handle, timer.getRemaining()))
            break;

          size_t rv = m_handle->read(m_buffer, sizeof(m_buffer));
          for (size_t i = 0; i < rv; ++i)
          {
            if (!m_parser.parse(m_buffer[i], frame))
              continue;

            if (frame.getId() == PKT_ID_ERR)
            {
              uint8_t code = 0;
              frame.get(code, 0);
              throw std::runtime_error(Errors::translate(code));
            }

            if (frame.getId() == reply_id)
              return true;

            m_queue.push(new Frame(frame));
          }
        }

        return false;
      }

      void
      Interface::getFirmwareName(FirmwareInfo& info)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_NAME);
        frame.setPayloadSize(0);

        if (!sendFrame(frame))
          throw std::runtime_error(DTR("failed to get firmware name"));

        info.name.assign((const char*)frame.getPayload(), frame.getPayloadSize());
      }

      void
      Interface::getFirmwareVersion(FirmwareInfo& info)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_VERSION);
        frame.setPayloadSize(0);

        if (!sendFrame(frame))
          throw std::runtime_error(DTR("failed to get firmware version"));

        if (frame.getPayloadSize() != 3)
          throw std::runtime_error(DTR("invalid firmware version"));

        frame.get(info.major, 0);
        frame.get(info.minor, 1);
        frame.get(info.patch, 2);
      }
    }
  }
}
