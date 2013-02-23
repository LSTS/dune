//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Statement.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>
#include <cstdio>

// DUNE headers.
#include <DUNE/Database/General.hpp>
#include <DUNE/Database/Statement.hpp>

// SQLITE3 headers
#include <sqlite3/sqlite3.h>

namespace DUNE
{
  namespace Database
  {
    Statement::Statement(const char* sql_stmt, Connection& conn):
      m_handle(0),
      m_conn(conn),
      m_idx(0)
    {
      if (sqlite3_prepare_v2(m_conn.handle(), sql_stmt, std::strlen(sql_stmt), &m_handle, 0) != SQLITE_OK)
      {
        throwError();
      }
    }

    Statement::~Statement(void)
    {
      if (m_handle)
        sqlite3_finalize(m_handle);
    }

    void
    Statement::throwError(void)
    {
      throw Error(m_conn.lastError());
    }

    void
    Statement::reset(void)
    {
      m_idx = 0;

      if (sqlite3_reset(m_handle) != SQLITE_OK)
        throwError();
    }

    bool
    Statement::execute(int* count)
    {
      m_idx = 0;
      switch (sqlite3_step(m_handle))
      {
        case SQLITE_DONE:
          if (count)
            *count = sqlite3_changes(m_conn.handle());
          reset();
          return false;
        case SQLITE_ROW:
          return true;
        default:
          throwError();
      }
      return false;
    }

    Statement&
    Statement::operator<<(int value)
    {
      int err = sqlite3_bind_int(m_handle, ++m_idx, value);

      if (err != SQLITE_OK)
        throwError();

      return *this;
    }

    Statement&
    Statement::operator<<(Null dummy)
    {
      (void)dummy;
      sqlite3_bind_null(m_handle, ++m_idx);
      return *this;
    }

    Statement&
    Statement::operator<<(double value)
    {
      int err = sqlite3_bind_double(m_handle, ++m_idx, value);

      if (err != SQLITE_OK)
        throwError();

      return *this;
    }

    Statement&
    Statement::operator<<(const char* value)
    {
      int err = sqlite3_bind_text(m_handle, ++m_idx, value, std::strlen(value), SQLITE_TRANSIENT);

      if (err != SQLITE_OK)
        throwError();

      return *this;
    }

    Statement&
    Statement::operator<<(const std::string& value)
    {
      int err = sqlite3_bind_text(m_handle, ++m_idx, value.c_str(), value.length(), SQLITE_TRANSIENT);

      if (err != SQLITE_OK)
        throwError();

      return *this;
    }

    Statement&
    Statement::operator<<(const Blob& value)
    {
      int err = sqlite3_bind_blob(m_handle, ++m_idx, &value[0], value.size(), SQLITE_TRANSIENT);

      if (err != SQLITE_OK)
        throwError();

      return *this;
    }

    Statement&
    Statement::operator>>(int& value)
    {
      if (sqlite3_column_type(m_handle, m_idx) != SQLITE_INTEGER)
        throw Error("column result is not of INTEGER type");

      value = sqlite3_column_int(m_handle, m_idx++);

      return *this;
    }

    bool
    Statement::nullColumn(void)
    {
      return sqlite3_column_type(m_handle, m_idx) == SQLITE_NULL;
    }

    Statement&
    Statement::operator>>(double& value)
    {
      if (sqlite3_column_type(m_handle, m_idx) != SQLITE_FLOAT)
        throw Error("column result is not of FLOAT type");

      value = sqlite3_column_double(m_handle, m_idx++);
      return *this;
    }

    Statement&
    Statement::operator>>(std::string& value)
    {
      if (sqlite3_column_type(m_handle, m_idx) != SQLITE_TEXT)
        throw Error("column result is not of TEXT type");

      int len = sqlite3_column_bytes(m_handle, m_idx);
      value.assign((const char*)sqlite3_column_text(m_handle, m_idx), len);
      m_idx++;
      return *this;
    }

    Statement&
    Statement::operator>>(Blob& value)
    {
      if (sqlite3_column_type(m_handle, m_idx) != SQLITE_BLOB)
        throw Error("column result is not of BLOB type");

      int len = sqlite3_column_bytes(m_handle, m_idx);
      value.resize(len);
      std::memcpy(&value[0], sqlite3_column_blob(m_handle, m_idx), len);
      m_idx++;

      return *this;
    }
  }
}
