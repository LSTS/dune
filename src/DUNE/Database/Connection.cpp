//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Database/General.hpp>
#include <DUNE/Database/Connection.hpp>
#include <DUNE/Database/Statement.hpp>

// SQLITE3 headers.
#include <sqlite3/sqlite3.h>

namespace DUNE
{
  namespace Database
  {
    Connection::Connection(int flags)
    {
      open(":memory:", flags);
    }

    Connection::Connection(const char* path, int flags)
    {
      open(path, flags);
    }

    void
    Connection::open(const char* path, int flags)
    {
      m_handle = NULL;

      sqlite3_enable_shared_cache(1);

      int sl_flags = SQLITE_OPEN_SHAREDCACHE;
      if (flags & CF_RDONLY)
        sl_flags |= SQLITE_OPEN_READONLY;
      else
        sl_flags |= SQLITE_OPEN_READWRITE;

      if (flags & CF_CREATE)
        sl_flags |= SQLITE_OPEN_CREATE;

      if (sqlite3_open_v2(path, &m_handle, sl_flags, 0) != SQLITE_OK)
      {
        Error e(lastError());
        sqlite3_close(m_handle);
        m_handle = NULL;
        throw e;
      }

      m_tbegin_stmt = new Statement("begin transaction", *this);
      m_tcommit_stmt = new Statement("commit", *this);
      m_trollback_stmt = new Statement("rollback", *this);
    }

    Connection::~Connection(void)
    {
      if (m_handle)
      {
        delete m_tbegin_stmt;
        delete m_tcommit_stmt;
        delete m_trollback_stmt;
        sqlite3_close(m_handle);
      }
    }

    void
    Connection::execute(const char* sql_stmt, int* count)
    {
      char* errmsg = 0;

      if (sqlite3_exec(m_handle, sql_stmt, 0, 0, &errmsg) != SQLITE_OK)
      {
        Error e(errmsg);
        sqlite3_free(errmsg);
        throw e;
      }

      if (count)
        *count = sqlite3_changes(m_handle);
    }

    const char*
    Connection::lastError(void)
    {
      return sqlite3_errmsg(m_handle);
    }

    void
    Connection::beginTransaction(void)
    {
      m_tbegin_stmt->execute();
    }

    void
    Connection::commit(void)
    {
      m_tcommit_stmt->execute();
    }

    void
    Connection::rollback(void)
    {
      m_trollback_stmt->execute();
    }
  }
}
