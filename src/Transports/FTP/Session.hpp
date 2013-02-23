//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Session.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef TRANSPORTS_FTP_SESSION_HPP_INCLUDED_
#define TRANSPORTS_FTP_SESSION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "CommandParser.hpp"

namespace Transports
{
  namespace FTP
  {
    class Session: public DUNE::Concurrency::Thread
    {
    public:
      Session(DUNE::Tasks::Context& ctx, DUNE::Network::TCPSocket* sock, const DUNE::Network::Address& local_addr);

      ~Session(void);

    private:
      //! Current context.
      DUNE::Tasks::Context& m_ctx;
      //! Control socket.
      DUNE::Network::TCPSocket* m_sock;
      //! Address of the local interface.
      const DUNE::Network::Address m_local_addr;
      //! Data socket.
      DUNE::Network::TCPSocket* m_sock_data;
      //! Root folder of the FTP server.
      DUNE::FileSystem::Path m_root;
      //! Current working folder (relative to root folder).
      DUNE::FileSystem::Path m_path;
      //! Command parser.
      CommandParser m_parser;
      //! True if data connection is passive, false otherwise.
      bool m_data_pasv;
      //! Destination address of data connection.
      DUNE::Network::Address m_data_addr;
      //! Destination port of data connection.
      uint16_t m_data_port;
      //! Scratch buffer.
      char m_bfr[1024];
      //! File offset (used by REST/RETR commands).
      int64_t m_rest_offset;

      DUNE::FileSystem::Path
      getAbsolutePath(const std::string& path);

      void
      sendReply(unsigned number, const std::string& message);

      void
      sendOK(void);

      void
      sendFileInfo(const DUNE::FileSystem::Path& path, DUNE::Network::TCPSocket* sock, DUNE::Time::BrokenDown& time_ref);

      void
      closeControlConnection(void);

      DUNE::Network::TCPSocket*
      openDataConnection(void);

      void
      closeDataConnection(DUNE::Network::TCPSocket* sock);

      void
      handleUSER(const std::string& arg);

      void
      handleNOOP(const std::string& arg);

      void
      handleLIST(const std::string& arg);

      void
      handleSIZE(const std::string& arg);

      void
      handleCWD(const std::string& arg);

      void
      handlePASV(const std::string& arg);

      void
      handleRETR(const std::string& arg);

      void
      handleREST(const std::string& arg);

      void
      handlePWD(const std::string& arg);

      void
      handleTYPE(const std::string& arg);

      void
      handlePORT(const std::string& arg);

      void
      handleMODE(const std::string& arg);

      void
      handleDELE(const std::string& arg);

      void
      handleRMD(const std::string& arg);

      void
      handleSYST(const std::string& arg);

      void
      handleQUIT(const std::string& arg);

      void
      handleNotImplemented(const std::string& arg);

      void
      handleCommand(const std::string& cmd, const std::string& arg);

      void
      handleCommandSocket(void);

      void
      run(void);
    };
  }
}

#endif
