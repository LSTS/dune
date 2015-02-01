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
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef VISION_LUMENERA_HTTP_CLIENT_HPP_INCLUDED_
#define VISION_LUMENERA_HTTP_CLIENT_HPP_INCLUDED_

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

    class HTTPClient
    {
    public:
      HTTPClient(const char* request, Address address, unsigned port = 80) :
        m_bfr_len(0)
      {
        // FIXME: add exception handling
        m_socket.connect(address, port);
        m_socket.write(request, std::strlen(request));
      }

      void
      getHeader(std::vector<std::string>& dst, double timeout = 2.0)
      {
        std::string line;

        while (line != "\r\n")
        {
          line.clear();
          readLine(line, timeout);
          dst.push_back(line);
        }
      }

      void
      getBody(std::vector<std::string>& dst, double timeout = 2.0)
      {
        std::string line;

        while (true)
        {
          line.clear();
          readLine(line, timeout);
          dst.push_back(line);
        }
      }

      void
      skipToBoundary(std::string boundary, double timeout = 2.0)
      {
        std::string line;

        boundary = "--" + boundary + "\r\n";
        while (line != boundary)
        {
          line.clear();
          readLine(line, timeout);
        }
      }

      void
      getBinary(char* bfr, size_t len, double timeout = 2.0)
      {
        readBinary(bfr, len, timeout);
      }

    private:
      // Reception buffer length
      static const size_t c_bfrlen = 128;
      // TCP socket
      TCPSocket m_socket;
      // Incomming buffer
      char m_bfr[c_bfrlen];
      // Length of incomming buffer
      size_t m_bfr_len;

      void
      readLine(std::string& dst, double timeout = 2.0)
      {
        bool done = false;
        size_t rdlen;

        while (!done)
        {
          // if pending buffer is empty, read data from socket
          if (m_bfr_len == 0)
          {
            if (!Poll::poll(m_socket, timeout))
              throw std::runtime_error(DTR("timed out while waiting for reply"));

            // Read to buffer
            m_bfr_len = m_socket.read(m_bfr, c_bfrlen);
          }

          // Find the EOL character
          for (rdlen = 0; rdlen < m_bfr_len; rdlen++)
          {
            if (m_bfr[rdlen] == '\n')
            {
              done = true;
              // include the EOL character in the copy
              rdlen++;
              break;
            }
          }

          // copy data from the buffer to the line
          dst.append(m_bfr, rdlen);
          // remove parsed data from the buffer
          m_bfr_len -= rdlen;
          if (m_bfr_len)
            // move the remaining bytes to the start of the buffer
            std::memmove(m_bfr, m_bfr + rdlen, m_bfr_len);
        }
      }

      void
      readBinary(char* bfr, size_t len, double timeout = 2.0)
      {
        // read data from the pending buffer first
        size_t rdlen;

        if (len < m_bfr_len)
          rdlen = len;
        else
          rdlen = m_bfr_len;

        // memcpy
        std::memcpy(bfr, m_bfr, rdlen);

        // remove parsed data from the buffer
        m_bfr_len -= rdlen;
        if (m_bfr_len)
          // move the remaining bytes to the start of the buffer
          std::memmove(m_bfr, m_bfr + rdlen, m_bfr_len);

        // move forward
        len -= rdlen;
        bfr += rdlen;

        // read the rest of the data directly from the socket
        while (len > 0)
        {
          if (!Poll::poll(m_socket, timeout))
            throw std::runtime_error(DTR("timed out while waiting for reply"));

          rdlen = m_socket.read(bfr, len);

          // move forward
          len -= rdlen;
          bfr += rdlen;
        }
      }
    };
  }
}
#endif
