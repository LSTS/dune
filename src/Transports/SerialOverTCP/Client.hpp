//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Joao Fortuna                                                     *
//***************************************************************************

#ifndef TRANSPORTS_SERIALOVERTCP_CLIENT_HPP_INCLUDED_
#define TRANSPORTS_SERIALOVERTCP_CLIENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SerialOverTCP
  {
    class Client: public DUNE::Concurrency::Thread
    {
    public:
      Client(DUNE::Network::TCPSocket* sock);

      ~Client(void);

      int
      read(char* bfr);

      void
      write(char* bfr, unsigned bfr_len);

    private:

      class Buffer
      {
        char data[1024];
        unsigned size;

      public:
        Buffer(const Buffer& other)
        {
          size = other.size;
          std::memcpy(data, other.data, size);
        }

        Buffer(char bfr[], unsigned bfr_len)
        {
          setData(bfr, bfr_len);
        }

        ~Buffer()
        { }

        unsigned
        getData(char bfr[])
        {
          std::memcpy(bfr, data, size);
          return size;
        }

        void
        setData(char bfr[], unsigned bfr_len)
        {
          std::memcpy(data, bfr, bfr_len);
          size = bfr_len;
        }

        Buffer&
        operator= (const Buffer& other)
        {
          if (this != &other)
          {
            std::memcpy(data, other.data, other.size);
            size = other.size;
          }
          return *this;
        }
      };

      // I/O Multiplexer.
      DUNE::IO::Poll m_poll;
      //! Control socket.
      DUNE::Network::TCPSocket* m_sock;
      //! Idle timer.
      DUNE::Time::Counter<double> m_timer;
      //! Buffer queue
      std::queue<Buffer> m_out_data, m_in_data;
      //! Queue access mutex
      DUNE::Concurrency::Mutex m_mtx;

      void
      closeConnection(void);

      void
      run(void);
    };
  }
}

#endif
