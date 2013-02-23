//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
