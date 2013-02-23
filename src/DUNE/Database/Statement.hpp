//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Statement.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_DATABASE_STATEMENT_HPP_INCLUDED_
#define DUNE_DATABASE_STATEMENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <utility>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Database/General.hpp>
#include <DUNE/Database/Connection.hpp>

// Forward declaration
struct sqlite3_stmt;

namespace DUNE
{
  namespace Database
  {
    typedef sqlite3_stmt STMT_HANDLE;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Statement;

    //! SQL statement.
    class Statement
    {
    public:
      //! Constructor.
      //! @param sql_stmt SQL statement.
      //! @param conn Database connection.
      Statement(const char* sql_stmt, Connection& conn);

      //! Destructor.
      ~Statement();

      //! Execute statement.
      //! All statement arguments must be bound when this
      //! method is called using operator<<() in order
      //! of the statement wildcards.
      //! It will return true if  there are more rows to process,
      //! false otherwise.
      //! When it returns true, the results can be obtained
      //! using operator>>() in order of the column results.
      //! When it returns false, reset() will have been called internally,
      //! so there is no need to call it subsequently.
      //! @param count for INSERT, UPDATE or DELETE statements, may return
      //! the number of rows affected by the operation
      //! @return true if there are more rows to process.
      bool
      execute(int* count = 0);

      //! Reset.
      //! The statement will not be bound to any arguments
      //! nor have any available results afterwards.
      void
      reset(void);

      //! Bind an argument to NULL.
      //! @param null Null datum.
      Statement&
      operator<<(Null null);

      //! Bind an argument to an integer value.
      //! @param value argument value.
      Statement&
      operator<<(int value);

      //! Bind an argument to a double value.
      //! @param value argument value.
      Statement&
      operator<<(double value);

      //! Bind an argument to a string value.
      //! @param value argument value.
      Statement&
      operator<<(const std::string& value);

      //! Bind an argument to a string value.
      //! @param value argument value.
      Statement&
      operator<<(const char* value);

      //! Bind an argument to a blob value.
      //! @param value argument value.
      Statement&
      operator<<(const Blob& value);

      //! Bind an argument to an integer value (template version for other integral types).
      //! @param value argument value.
      template <typename T>
      inline Statement&
      operator<<(T value)
      {
        int ivalue = (int)value;
        return *this << ivalue;
      }

      //! Get a column result of INTEGER type (queries only).
      //! @param value result reference.
      Statement&
      operator>>(int& value);

      //! Get a column result of REAL type (queries only).
      //! @param value result reference.
      Statement&
      operator>>(double& value);

      //! Get a column result of VARCHAR type (queries only).
      //! @param value result reference.
      Statement&
      operator>>(std::string& value);

      //! Get a column result of BLOB type (queries only).
      //! @param value result reference.
      Statement&
      operator>>(Blob& value);

      //! Get a column result of INTEGER type (queries only) -- template version.
      //! @param value result reference.
      template <typename T>
      inline Statement&
      operator>>(T& value)
      {
        int ivalue;
        *this >> ivalue;
        value = (T)ivalue;
        return *this;
      }

      //! Get a possibly NULL result of a given type.
      //! The first pair element will be set to 'true' if result is defined
      //! (i.e. not NULL), and in that case the second pair element
      //! @param r result reference.
      template <typename T>
      Statement&
      operator>>(std::pair<bool, T>& r)
      {
        r.first = !nullColumn();

        if (!r.first)
        {
          ++m_idx;
          return *this;
        }
        return *this >> r.second;
      }

    private:
      STMT_HANDLE* m_handle;
      Connection& m_conn;
      int m_idx;

      void
      throwError(void);

      bool
      nullColumn(void);
    };
  }
}

#endif
