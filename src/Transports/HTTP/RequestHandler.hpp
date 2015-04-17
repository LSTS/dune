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

#ifndef TRANSPORTS_HTTP_REQUEST_HANDLER_HPP_INCLUDED_
#define TRANSPORTS_HTTP_REQUEST_HANDLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace HTTP
  {
    using DUNE_NAMESPACES;

    class RequestHandler
    {
    public:
      typedef std::map<std::string, std::string> HeaderFieldsMap;

      RequestHandler(void)
      { }

      virtual
      ~RequestHandler(void)
      { }

      virtual void
      handleGET(TCPSocket* sock, Utils::TupleList& headers, const char* uri);

      virtual void
      handlePOST(TCPSocket* sock, Utils::TupleList& headers, const char* uri);

      virtual void
      handlePUT(TCPSocket* sock, Utils::TupleList& headers, const char* uri);

      void
      sendHeader(TCPSocket* sock, const char* status_line, int64_t length, HeaderFieldsMap* hdr_fields = 0);

      void
      sendResponse100(TCPSocket* sock);

      void
      sendResponse201(TCPSocket* sock);

      void
      sendResponse200(TCPSocket* sock);

      void
      sendResponse403(TCPSocket* sock);

      void
      sendResponse404(TCPSocket* sock, const std::string& message);

      inline void
      sendResponse404(TCPSocket* sock)
      {
        sendResponse404(sock, "Not Found");
      }

      void
      sendResponse416(TCPSocket* sock);

      void
      sendResponse500(TCPSocket* sock);

      void
      sendResponse503(TCPSocket* sock);

      void
      sendData(TCPSocket* sock, const char* data, int size, HeaderFieldsMap* hdr_fields = 0);

      inline void
      sendData(TCPSocket* sock, const std::string& data, HeaderFieldsMap* hdr_fields = 0)
      {
        sendData(sock, data.c_str(), (int)data.size(), hdr_fields);
      }

      void
      sendFile(TCPSocket* sock, const std::string& file, HeaderFieldsMap& hdr_fields, int64_t off_beg = -1, int64_t off_end = -1);

      void
      handleRequest(TCPSocket* sock);
    };
  }
}

#endif
