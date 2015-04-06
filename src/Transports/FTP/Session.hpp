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
      Session(DUNE::Tasks::Task* task,
              const DUNE::FileSystem::Path& root,
              DUNE::Network::TCPSocket* sock,
              const DUNE::Network::Address& local_addr,
              double timeout);

      ~Session(void);

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
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
      //! Idle timer.
      DUNE::Time::Counter<double> m_timer;

      DUNE::FileSystem::Path
      getAbsolutePath(const std::string& path);

      void
      sendReply(unsigned number, const std::string& message);

      void
      sendOK(void);

      void
      sendFileInfo(const DUNE::FileSystem::Path& path, DUNE::Network::TCPSocket* sock, DUNE::Time::BrokenDown& time_ref);

      void
      sendFileInfoMLSD(const DUNE::FileSystem::Path& path, DUNE::Network::TCPSocket* sock);

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
      handleMLSD(const std::string& arg);

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
