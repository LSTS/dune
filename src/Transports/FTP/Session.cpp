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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Session.hpp"

namespace Transports
{
  namespace FTP
  {
    using DUNE_NAMESPACES;

    enum Codes
    {
#define REPLY(name, number, desc)               \
      name,
#include "Replies.def"
      CODE_LAST
    };

    static const std::string c_messages[] =
    {
#define REPLY(name, number, desc)               \
      #number desc "\r\n",
#include "Replies.def"
      ""
    };

    static const char* c_months[] =
    {
      "Jan", "Feb", "Mar", "Apr", "May", "Jun",
      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    //! File/directory permissions.
    enum Permissions
    {
      PERM_FILE = 0,
      PERM_FOLDER = 1,
      PERM_UNKNOWN = 2
    };

    static const char* c_perms[] =
    {
      "-rw-r--r--",
      "drwxr-xr-x",
      "----------"
    };

    Session::Session(Tasks::Task* task, const FileSystem::Path& root,
                     TCPSocket* sock, const Address& local_addr, double timeout):
      m_task(task),
      m_sock(sock),
      m_local_addr(local_addr),
      m_data_pasv(false),
      m_rest_offset(-1),
      m_timer(timeout)
    {
      m_root = root;
      m_path = "/";

      m_sock->setNoDelay(true);
      m_sock->setReceiveTimeout(5);
      m_sock->setSendTimeout(5);

      // Initialize passive data socket.
      m_sock_data = new TCPSocket;
      m_sock_data->setNoDelay(true);
      m_sock_data->setReceiveTimeout(5);
      m_sock_data->setSendTimeout(5);
      m_sock_data->bind(0, local_addr);
      m_sock_data->listen(5);
    }

    Session::~Session(void)
    {
      closeControlConnection();

      if (m_sock_data != NULL)
        delete m_sock_data;
    }

    Path
    Session::getAbsolutePath(const std::string& path)
    {
      if (path[0] == '/')
        return m_root / path;
      return m_root / m_path / path;
    }

    void
    Session::closeControlConnection(void)
    {
      if (m_sock == NULL)
        return;

      try
      {
        sendReply(221, "Service closing control connection.");
      }
      catch (...)
      { }

      delete m_sock;
      m_sock = NULL;
    }

    void
    Session::sendFileInfoMLSD(const Path& path, TCPSocket* sock)
    {
      Path::Type type = path.type();
      int64_t size = 0;
      std::ostringstream os;

      if (type == Path::PT_FILE)
      {
        size = path.size();
        os << "Type=file;Size=" << size << ";";
      }
      else if (type == Path::PT_DIRECTORY)
      {
        os << "Type=dir;";
      }
      else
      {
        return;
      }

      os << " " << path.basename() << "\r\n";
      sock->write(os.str().c_str(), os.str().size());
    }

    void
    Session::sendFileInfo(const Path& path, TCPSocket* sock, Time::BrokenDown& time_ref)
    {
      Path::Type type = path.type();
      int64_t size = 0;
      const char* perm = NULL;

      if (type == Path::PT_FILE)
      {
        perm = c_perms[PERM_FILE];
        size = path.size();
      }
      else if (type == Path::PT_DIRECTORY)
      {
        perm = c_perms[PERM_FOLDER];
      }
      else
      {
        perm = c_perms[PERM_UNKNOWN];
      }

      time_t mod_time = path.getLastModifiedTime();
      Time::BrokenDown time_mod(mod_time);
      std::string path_name = path.basename().str();

      m_bfr[0] = '\0';
      if (time_ref.year == time_mod.year)
      {
        String::format(m_bfr, sizeof(m_bfr),
                       "%s  0 %-10s %-10s %10lld %s %u %02u:%02u %s\r\n",
                       perm, "unknown", "unknown",
                       size,
                       c_months[time_mod.month - 1],
                       time_mod.day,
                       time_mod.hour,
                       time_mod.minutes,
                       path_name.c_str());
      }
      else
      {
        String::format(m_bfr, sizeof(m_bfr),
                       "%s  0 %-10s %-10s %10lld %s %u %u %s\r\n",
                       perm, "unknown", "unknown",
                       size,
                       c_months[time_mod.month - 1],
                       time_mod.day,
                       time_mod.year,
                       path_name.c_str());
                       }

      sock->write(m_bfr, strlen(m_bfr));
    }

    void
    Session::sendReply(unsigned number, const std::string& message)
    {
      std::string reply = String::str("%u %s\r\n", number, message.c_str());
      m_sock->write(reply.c_str(), reply.size());
    }

    void
    Session::sendOK(void)
    {
      sendReply(200, "OK");
    }

    TCPSocket*
    Session::openDataConnection(void)
    {
      TCPSocket* sock = NULL;

      if (m_data_pasv)
      {
        sock = m_sock_data->accept();
      }
      else
      {
        sock = new TCPSocket;
        sock->connect(m_data_addr, m_data_port);
        sock->setKeepAlive(true);
      }

      return sock;
    }

    void
    Session::closeDataConnection(DUNE::Network::TCPSocket* sock)
    {
      sendReply(226, "Closing data connection.");
      delete sock;
    }

    void
    Session::handleUSER(const std::string& arg)
    {
      (void)arg;
      sendReply(230, "User logged in, proceed.");
    }

    void
    Session::handleLIST(const std::string& arg)
    {
      Path path = m_root / m_path;

      // @fixme don't allow going below root.
      if (arg.size() > 0)
      {
        if (arg != "-aL" && arg != "-la")
        {
          path = getAbsolutePath(arg);
        }
      }

      // Check if we're trying to go below root.
      if (String::startsWith(m_root.str(), path.str()))
        path = m_root;

      Path::Type type = path.type();
      if (type == Path::PT_INVALID)
      {
        sendReply(450, "Requested file action not taken.");
        return;
      }

      sendReply(150, "File status okay; about to open data connection.");

      Time::BrokenDown time_ref;
      TCPSocket* data = openDataConnection();
      if (type == Path::PT_FILE)
      {
        sendFileInfo(path, data, time_ref);
      }
      else
      {
        Directory dir(path);
        const char* entry = NULL;
        while ((entry = dir.readEntry(Directory::RD_FULL_NAME)))
        {
          sendFileInfo(entry, data, time_ref);
        }
      }

      closeDataConnection(data);
    }

    void
    Session::handleCWD(const std::string& arg)
    {
      Path suffix;
      if (arg[0] == '/')
        suffix = arg;
      else
        suffix = m_path / arg;

      Path path = m_root / suffix;

      if (path.isDirectory())
      {
        m_path = suffix;
        sendReply(250, "Requested file action okay, completed.");
      }
      else
      {
        sendReply(550, "Requested action not taken.");
      }
    }

    void
    Session::handleSIZE(const std::string& arg)
    {
      Path path = getAbsolutePath(arg);

      if (path.isFile())
      {
        sendReply(212, String::str("%llu", path.size()));
      }
      else
      {
        sendReply(550, "Could not get file size.");
      }
    }

    void
    Session::handleRETR(const std::string& arg)
    {
      int64_t rest_offset = m_rest_offset;
      m_rest_offset = -1;

      Path path = getAbsolutePath(arg);
      if (!path.isFile())
      {
        sendReply(450, "Requested file action not taken.");
        return;
      }

      sendReply(150, "File status okay; about to open data connection.");

      TCPSocket* data = openDataConnection();

      if (!data->writeFile(path.c_str(), path.size() - 1, rest_offset))
        return;

      closeDataConnection(data);
      m_rest_offset = 0;
    }

    void
    Session::handleREST(const std::string& arg)
    {
      std::istringstream is(arg);
      is >> m_rest_offset;

      sendReply(350, "Requested file action pending further information.");
    }

    void
    Session::handlePWD(const std::string& arg)
    {
      (void)arg;
      sendReply(257, String::str("\"%s\"", m_path.c_str()));
    }

    void
    Session::handleTYPE(const std::string& arg)
    {
      if (arg == "I" || arg == "A")
        sendOK();
      else
        sendReply(504, "Command not implemented for that parameter.");
    }

    void
    Session::handlePORT(const std::string& arg)
    {
      unsigned parts[6];

      if (std::sscanf(arg.c_str(), "%u,%u,%u,%u,%u,%u",
                      parts, parts + 1, parts + 2, parts + 3,
                      parts + 4, parts + 5) != 6)
      {
        sendReply(504, "Command not implemented for that parameter.");
        return;
      }

      uint32_t addr = (parts[0] << 24) | (parts[1] << 16) | (parts[2] << 8) | parts[3];
      uint16_t port = (parts[4] << 8) | parts[5];

      m_data_addr = addr;
      m_data_port = port;
      m_data_pasv = false;

      sendOK();
    }

    void
    Session::handlePASV(const std::string& arg)
    {
      (void)arg;

      uint16_t port = m_sock_data->getBoundPort();
      std::string addr = m_local_addr.str();
      for (unsigned i = 0; i < addr.size(); ++i)
      {
        if (addr[i] == '.')
          addr[i] = ',';
      }

      sendReply(227, String::str("Entering Passive Mode (%s,%u,%u)",
                                 addr.c_str(),
                                 (port >> 8) & 0xff,
                                 port & 0xff));

      m_data_pasv = true;
    }

    void
    Session::handleMODE(const std::string& arg)
    {
      if (arg == "S")
        sendOK();
      else
        sendReply(504, "Command not implemented for that parameter.");
    }

    void
    Session::handleSYST(const std::string& arg)
    {
      (void)arg;
      sendReply(215, "UNIX Type: L8");
    }

    void
    Session::handleQUIT(const std::string& arg)
    {
      (void)arg;
      sendReply(221, "Service closing control connection");
      stop();
    }

    void
    Session::handleMLSD(const std::string& arg)
    {
      Path path = m_root / m_path;

      // @fixme don't allow going below root.
      if (arg.size() > 0)
      {
        path = getAbsolutePath(arg);
      }

      // Check if we're trying to go below root.
      if (String::startsWith(m_root.str(), path.str()))
        path = m_root;

      Path::Type type = path.type();
      if (type == Path::PT_INVALID)
      {
        sendReply(450, "Requested file action not taken.");
        return;
      }

      sendReply(150, "File status okay; about to open data connection.");

      Time::BrokenDown time_ref;
      TCPSocket* data = openDataConnection();
      if (type == Path::PT_FILE)
      {
        sendFileInfoMLSD(path, data);
      }
      else
      {
        Directory dir(path);
        const char* entry = NULL;
        while ((entry = dir.readEntry(Directory::RD_FULL_NAME)))
        {
          sendFileInfoMLSD(entry, data);
        }
      }

      closeDataConnection(data);
    }

    void
    Session::handleNOOP(const std::string& arg)
    {
      (void)arg;
      sendOK();
    }

    void
    Session::handleDELE(const std::string& arg)
    {
      try
      {
        Path path = getAbsolutePath(arg);
        path.remove(Path::MODE_RECURSIVE);
        sendReply(250, "Requested file action okay, completed.");
      }
      catch (...)
      {
        sendReply(550, "Requested file action not taken.");
      }
    }

    void
    Session::handleRMD(const std::string& arg)
    {
      handleDELE(arg);
    }

    void
    Session::handleNotImplemented(const std::string& arg)
    {
      (void)arg;
      sendReply(502, "Command not implemented");
    }

    void
    Session::handleCommand(const std::string& cmd, const std::string& arg)
    {
      if (cmd == "NOOP")
        handleNOOP(arg);
      else if (cmd == "USER")
        handleUSER(arg);
      else if (cmd == "PASS")
        handleNOOP(arg);
      else if (cmd == "REST")
        handleREST(arg);
      else if (cmd == "PWD")
        handlePWD(arg);
      else if (cmd == "PORT")
        handlePORT(arg);
      else if (cmd == "PASV")
        handlePASV(arg);
      else if (cmd == "LIST")
        handleLIST(arg);
      else if (cmd == "CWD")
        handleCWD(arg);
      else if (cmd == "TYPE")
        handleTYPE(arg);
      else if (cmd == "MODE")
        handleMODE(arg);
      else if (cmd == "SIZE")
        handleSIZE(arg);
      else if (cmd == "RETR")
        handleRETR(arg);
      else if (cmd == "SYST")
        handleSYST(arg);
      else if (cmd == "DELE")
        handleDELE(arg);
      else if (cmd == "RMD")
        handleRMD(arg);
      else if (cmd == "QUIT")
        handleQUIT(arg);
      else if (cmd == "MLSD")
        handleMLSD(arg);
      else
        handleNotImplemented(arg);
    }

    void
    Session::run(void)
    {
      try
      {
        Thread::setPriority(Concurrency::Scheduler::POLICY_RR, 1);
      }
      catch (...)
      { }

      sendReply(220, "DUNE FTP server ready.");

      Poll poll;
      poll.add(*m_sock);
      poll.add(*m_sock_data);

      while (!isStopping())
      {
        if (m_timer.overflow())
          break;

        try
        {
          if (!poll.poll(1.0))
            continue;

          if (!poll.wasTriggered(*m_sock))
            continue;

          int rv = m_sock->read(m_bfr, sizeof(m_bfr));
          if (rv <= 0)
            break;

          for (int i = 0; i < rv; ++i)
          {
            if (m_parser.parse(m_bfr[i]))
            {
              handleCommand(m_parser.getCode(), m_parser.getParameters());
              m_timer.reset();
            }
          }
        }
        catch (...)
        {
          break;
        }
      }

      closeControlConnection();
    }
  }
}
