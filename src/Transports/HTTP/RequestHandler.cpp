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

// ISO C++ 98 headers.
#include <sstream>
#include <fstream>
#include <iostream>
#include <utility>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Utils/TupleList.hpp>
#include <DUNE/Network/Exceptions.hpp>
#include <DUNE/Network/URL.hpp>
#include <DUNE/Time/Format.hpp>
#include <DUNE/Utils/String.hpp>

// Local headers.
#include "RequestHandler.hpp"

#define SERVER_VERSION "Server: DUNE/" DUNE_VERSION_STR "\r\n"
#define STATUS_LINE_100 "HTTP/1.0 100 Continue\r\n"
#define STATUS_LINE_200 "HTTP/1.0 200 OK\r\n"
#define STATUS_LINE_201 "HTTP/1.0 201 Created\r\n"
#define STATUS_LINE_206 "HTTP/1.0 206 Partial Content\r\n"
#define STATUS_LINE_403 "HTTP/1.0 403 Forbidden\r\n"
#define STATUS_LINE_404 "HTTP/1.0 404 Not Found\r\n"
#define STATUS_LINE_416 "HTTP/1.0 416 Requested Range Not Satisfiable\r\n"
#define STATUS_LINE_500 "HTTP/1.0 500 Internal Server Error\r\n"
#define STATUS_LINE_503 "HTTP/1.0 503 Service Unavailable\r\n"

namespace Transports
{
  namespace HTTP
  {
    // Maximum size of a request.
    static const unsigned c_max_request_size = 2048;

    void
    RequestHandler::sendHeader(TCPSocket* sock, const char* status_line, int64_t length, HeaderFieldsMap* hdr_fields)
    {
      std::string now = Time::Format::getRFC1123();

      // Start header.
      std::stringstream ss;
      ss << status_line
         << SERVER_VERSION
         << "Content-Length: " << length << "\r\n"
         << "Cache-Control: " << "max-age=1, must-revalidate" << "\r\n"
         << "Last-Modified: " << now << "\r\n"
         << "Expires: " << now << "\r\n"
         << "Accept-Ranges: " << "bytes" << "\r\n";

      // Add extra header fields.
      if (hdr_fields)
      {
        HeaderFieldsMap::iterator itr = hdr_fields->begin();
        for (; itr != hdr_fields->end(); ++itr)
          ss << itr->first << ": " << itr->second << "\r\n";
      }

      // Terminate header.
      ss << "\r\n";

      std::string res = ss.str();
      sock->write(res.c_str(), res.size());
    }

    void
    RequestHandler::sendResponse100(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_100, 8);
      sock->write("Continue", 8);
    }

    void
    RequestHandler::sendResponse200(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_200, 2);
      sock->write("OK", 2);
    }

    void
    RequestHandler::sendResponse201(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_201, 7);
      sock->write("Created", 7);
    }

    void
    RequestHandler::sendResponse403(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_403, 9);
      sock->write("Forbidden", 9);
    }

    void
    RequestHandler::sendResponse404(TCPSocket* sock, const std::string& message)
    {
      sendHeader(sock, STATUS_LINE_404, message.size());
      sock->write(message.c_str(), message.size());
    }

    void
    RequestHandler::sendResponse416(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_416, 31);
      sock->write("Requested Range Not Satisfiable", 31);
    }

    void
    RequestHandler::sendResponse500(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_500, 21);
      sock->write("Internal Server Error", 21);
    }

    void
    RequestHandler::sendResponse503(TCPSocket* sock)
    {
      sendHeader(sock, STATUS_LINE_503, 19);
      sock->write("Service unavailable", 19);
    }

    void
    RequestHandler::sendData(TCPSocket* sock, const char* data, int size, HeaderFieldsMap* hdr_fields)
    {
      sendHeader(sock, STATUS_LINE_200, size, hdr_fields);

      int remaining = size;
      int rv = 0;

      while (remaining > 0)
      {
        rv = sock->write(data, size);

        if (rv < 0)
        {
          DUNE_ERR("RequestHandler", "error sending data: " << rv);
          return;
        }

        remaining -= rv;
      }
    }

    void
    RequestHandler::sendFile(TCPSocket* sock, const std::string& file, HeaderFieldsMap& hdr_fields, int64_t off_beg, int64_t off_end)
    {
      int64_t size = FileSystem::Path(file).size();

      // File doesn't exist or isn't accessible.
      if (size < 0)
      {
        sendResponse404(sock);
        return;
      }

      // Requested end offset is larger than file size.
      if (off_end > size)
      {
        sendResponse416(sock);
        return;
      }

      // Send full file.
      if ((off_beg < 0) && (off_end < 0))
      {
        sendHeader(sock, STATUS_LINE_200, size, &hdr_fields);
        if (!sock->writeFile(file.c_str(), size - 1))
          DUNE_ERR("HTTPHandle", "failed to send file: " << System::Error::getLastMessage());
        return;
      }

      // Send partial content.
      if (off_end < 0)
        off_end = size - 1;

      if (off_beg < 0)
        off_beg = 0;

      std::ostringstream os;
      os << "bytes "
         << off_beg << "-" << off_end
         << "/" << size;

      hdr_fields.insert(std::make_pair("Content-Range", os.str()));
      sendHeader(sock, STATUS_LINE_206, off_end - off_beg + 1, &hdr_fields);

      if (!sock->writeFile(file.c_str(), off_end, off_beg))
        DUNE_ERR("HTTPHandle", "failed to send file: " << System::Error::getLastMessage());
    }

    void
    RequestHandler::handleGET(TCPSocket* sock, Utils::TupleList& headers, const char* uri)
    {
      (void)headers;
      (void)uri;
      sendResponse404(sock);
    }

    void
    RequestHandler::handlePOST(TCPSocket* sock, Utils::TupleList& headers, const char* uri)
    {
      (void)headers;
      (void)uri;
      sendResponse404(sock);
    }

    void
    RequestHandler::handlePUT(TCPSocket* sock, Utils::TupleList& headers, const char* uri)
    {
      (void)headers;
      (void)uri;
      sendResponse404(sock);
    }

    void
    RequestHandler::handleRequest(TCPSocket* sock)
    {
      char mtd[16];
      char uri[512];
      char bfr[c_max_request_size] = {0};

      // Search for end of request.
      unsigned idx = 0;
      unsigned didx = 0;
      bool eor = false;
      while (!eor && (idx < (c_max_request_size - 1)))
      {
        int rv = sock->read(bfr + idx, 1);

        if (rv <= 0)
          throw ConnectionClosed();

        if (didx == 0 && bfr[idx] == '\r')
          didx = 1;
        else if (didx == 1 && bfr[idx] == '\n')
          didx = 2;
        else if (didx == 2 && bfr[idx] == '\r')
          didx = 3;
        else if (didx == 3 && bfr[idx] == '\n')
        {
          eor = true;
          didx = 0;
        }
        else
          didx = 0;

        ++idx;
      }

      // Get header.
      int size = idx - 4;
      if (size <= 0)
      {
        DUNE_WRN("HTTP", "request too short");
        return;
      }

      char* hdr = new char[size + 1];
      std::memcpy(hdr, bfr, size);
      hdr[size] = 0;

      Utils::TupleList headers(hdr, ":", "\r\n", true);

      // Parse request line.
      if (std::sscanf(hdr, "%s %s %*s", mtd, uri) == 2)
      {
        std::string uri_dec = URL::decode(uri);
        const char* uri_clean = uri_dec.c_str();

        if (std::strcmp(mtd, "GET") == 0)
        {
          handleGET(sock, headers, uri_clean);
        }
        else if (std::strcmp(mtd, "POST") == 0)
        {
          handlePOST(sock, headers, uri_clean);
        }
        else if (std::strcmp(mtd, "PUT") == 0)
        {
          handlePUT(sock, headers, uri_clean);
        }
      }

      delete[] hdr;
    }
  }
}
