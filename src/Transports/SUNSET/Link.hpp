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

#ifndef TRANSPORTS_SUNSET_LINK_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_LINK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SUNSET
  {
    using DUNE_NAMESPACES;

    class Link: public Concurrency::Thread
    {
    public:
      Link(Tasks::Task* task, const Network::Address& addr, unsigned port):
        m_task(task)
      {
        m_sock.setNoDelay(true);
        m_sock.setSendTimeout(1.0);
        m_sock.setReceiveTimeout(1.0);
        m_sock.connect(addr, port);
      }

      void
      write(const std::string& cmd)
      {
        IMC::DevDataText text;
        text.value = cmd;
        m_task->dispatch(text);
        m_task->spew("sending: %s", sanitize(cmd).c_str());
        m_sock.write(cmd.c_str(), cmd.size());
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      Network::TCPSocket m_sock;

      void
      read(double timeout, IMC::DevDataText& text, uint8_t* bfr, size_t bfr_size)
      {
        if (!Poll::poll(m_sock, timeout))
          return;

        size_t rv = m_sock.read(bfr, bfr_size);
        for (size_t i = 0; i < rv; ++i)
        {
          text.value.push_back((char)bfr[i]);
          if (bfr[i] == '\n')
          {
            m_task->dispatch(&text, DF_LOOP_BACK);
            text.value.clear();
          }
        }
      }

      void
      run(void)
      {
        uint8_t bfr[128];
        IMC::DevDataText text;
        text.setDestinationEntity(m_task->getEntityId());

        while (!isStopping())
        {
          try
          {
            read(1.0, text, bfr, sizeof(bfr));
          }
          catch (...)
          {
            IMC::IoEvent iov;
            iov.setSource(m_task->getSystemId());
            iov.setSourceEntity(m_task->getEntityId());
            iov.setDestinationEntity(m_task->getEntityId());
            iov.type = IMC::IoEvent::IOV_TYPE_INPUT_ERROR;
            m_task->receive(&iov);
            break;
          }
        }
      }
    };
  }
}

#endif
