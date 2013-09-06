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

#ifndef TRANSPORTS_EVOLOGICS_LISTENER_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <cctype>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Reply.hpp"
#include "Parser.hpp"

namespace Transports
{
  namespace Evologics
  {
    void
    printHex(const char* msg, const char* data, unsigned data_size)
    {
      char bfr[5];
      std::string str(msg);
      str.append(": ");

      for (unsigned i = 0; i < data_size; ++i)
      {
        if (isprint(data[i]))
          str.push_back(data[i]);
        else if (data[i] == '\r')
          str.append("\\r");
        else if (data[i] == '\n')
          str.append("\\n");
        else
        {
          std::sprintf(bfr, "[%02X]", data[i] & 0xff);
          str.append(bfr);
        }
      }

      DUNE_MSG("Evologics Listener", str);
    }

    class Listener: public DUNE::Concurrency::Thread
    {
    public:
      Listener(DUNE::Network::TCPSocket* sock):
        m_socket(sock)
      { }

      ~Listener(void)
      {
        clearReplyQueue();

        while (!m_bdat_queue.empty())
        {
          Reply* reply = m_bdat_queue.pop();
          if (reply == NULL)
            continue;
          delete reply;
        }
      }

      void
      writeString(const std::string& str)
      {
        printHex("to modem", str.data(), str.size());
        m_socket->write(str.c_str(), str.size());
      }

      void
      clearCommandQueue(void)
      {
        while (!m_cmd_queue.empty())
        {
          Reply* cmd = m_cmd_queue.pop();
          delete cmd;
        }
      }

      bool
      queueMessage(unsigned address, const char* data, unsigned data_size)
      {
        std::string cmd = DUNE::Utils::String::str("AT*SEND,%u,%u,", data_size, address);
        cmd.append(data, data_size);
        cmd.append("\n");

        clearCommandQueue();
        writeString(cmd);

        if (!m_cmd_queue.waitForItems(1.5))
        {
          DUNE_ERR("Evologics Listener", "reply timeout");
        }
        else
          clearReplyQueue();

        return false;
      }

      bool
      queueInstantMessage(unsigned address, const char* data, unsigned data_size)
      {
        std::string cmd = DUNE::Utils::String::str("AT*SENDIM,%u,%u,noack,", data_size, address);
        cmd.append(data, data_size);
        cmd.append("\n");

        clearCommandQueue();
        writeString(cmd);

        if (!m_cmd_queue.waitForItems(1.5))
        {
          DUNE_ERR("Evologics Listener", "instant message reply timeout");
        }
        else
          clearReplyQueue();


        return false;
      }

      void
      clearReplyQueue(void)
      {
        while (!m_cmd_queue.empty())
        {
          Reply* reply = m_cmd_queue.pop();
          if (reply == NULL)
            continue;
          delete reply;
        }
      }

      Reply*
      dequeueReply(void)
      {
        return m_cmd_queue.pop();
      }

      Reply*
      dequeueMessage(void)
      {
        return m_bdat_queue.pop();
      }

      Reply*
      dequeueInstantMessage(void)
      {
        return m_idat_queue.pop();
      }

      void
      run(void)
      {
        char bfr[2048];

        while (!isStopping())
        {
          if (!DUNE::IO::Poll::poll(*m_socket, 1.0))
            continue;

          size_t rv = m_socket->read(bfr, sizeof(bfr));
          printHex("from modem", bfr, rv);

          for (size_t i = 0; i < rv; ++i)
          {
            Reply* reply = m_parser.parse(bfr[i]);
            if (reply == NULL)
              continue;

            switch (reply->type)
            {
              case Reply::RPL_RECV:
                m_bdat_queue.push(reply);
                break;

              case Reply::RPL_RECVIM:
                m_idat_queue.push(reply);
                break;

              default:
                m_cmd_queue.push(reply);
            }
          }
        }
      }

    private:
      DUNE::Network::TCPSocket* m_socket;
      Parser m_parser;
      DUNE::Concurrency::TSQueue<Reply*> m_cmd_queue;
      DUNE::Concurrency::TSQueue<Reply*> m_bdat_queue;
      DUNE::Concurrency::TSQueue<Reply*> m_idat_queue;
    };
  }
}

#endif
