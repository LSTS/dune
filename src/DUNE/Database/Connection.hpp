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

#ifndef DUNE_DATABASE_CONNECTION_HPP_INCLUDED_
#define DUNE_DATABASE_CONNECTION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Forward declaration
struct sqlite3;

namespace DUNE
{
  namespace Database
  {
    typedef sqlite3 DB_HANDLE;

    // Forward declaration.
    class Statement;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Connection;

    //! Database connection.
    class Connection
    {
    public:
      //! Identifier to use for temporary, memory-only based databases.
      static const char* c_memory_db;

      //! Constructor.
      //! @param path database file
      //! @param create create database if it does not exist
      Connection(const char* path, bool create = false);

      //! Destructor.
      ~Connection();

      //! Execute an SQL statement directly
      //! and optionally obtain the number of affected rows
      //! for (INSERT, UPDATE, and DELETE statements).
      //! @param sql_stmt SQL statement
      //! @param count optional argument to get number of affected rows
      void
      execute(const char* sql_stmt, int* count = 0);

      //! Begin transaction.
      void
      beginTransaction(void);

      //! Commit (end) current transaction.
      void
      commit(void);

      //! Rollback current transaction.
      void
      rollback(void);

      //! Get description of last error.
      //! @return description of last database error.
      const char*
      lastError(void);

      //! Get internal database connection handle.
      //! This is for use by other classes in the package.
      inline DB_HANDLE*
      handle(void)
      {
        return m_handle;
      }

    private:
      //! Database connection handle.
      DB_HANDLE* m_handle;
      Statement* m_tbegin_stmt;
      Statement* m_tcommit_stmt;
      Statement* m_trollback_stmt;
    };
  }
}

#endif
