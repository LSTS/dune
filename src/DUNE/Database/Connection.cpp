//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Connection.cpp 12667 2013-01-22 02:44:42Z rasm                   $:*
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
    const char*
    Connection::c_memory_db = ":memory:";

    Connection::Connection(const char* path, bool create):
      m_handle(0)
    {
      sqlite3_enable_shared_cache(1);

      int flags = create ? SQLITE_OPEN_CREATE : 0;
      flags |= SQLITE_OPEN_READWRITE | SQLITE_OPEN_SHAREDCACHE;

      if (sqlite3_open_v2(path, &m_handle, flags, 0) != SQLITE_OK)
      {
        Error e(lastError());
        sqlite3_close(m_handle);
        m_handle = 0;
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
