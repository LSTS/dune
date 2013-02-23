//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_HTTP_REQUEST_HANDLER_HPP_INCLUDED_
#define DUNE_NETWORK_HTTP_REQUEST_HANDLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Utils/TupleList.hpp>

namespace DUNE
{
  namespace Network
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM HTTPRequestHandler;

    class HTTPRequestHandler
    {
    public:
      typedef std::map<std::string, std::string> HeaderFieldsMap;

      HTTPRequestHandler(void)
      { }

      virtual
      ~HTTPRequestHandler(void)
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
        sendData(sock, data.c_str(), data.size(), hdr_fields);
      }

      void
      sendFile(TCPSocket* sock, const std::string& file, HeaderFieldsMap& hdr_fields, int64_t off_beg = -1, int64_t off_end = -1);

      void
      handleRequest(TCPSocket* sock);
    };
  }
}

#endif
