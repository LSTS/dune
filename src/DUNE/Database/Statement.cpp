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
// Author: Eduardo Marques                                                  *
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
