//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef LCB_FILTERS_FILTER_HPP_INCLUDED_
#define LCB_FILTERS_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// SQLite headers.
#include <sqlite3/sqlite3.h>

#define LCB_FILTER_EXPORT(class)                        \
  extern "C" LCB::Filters::Filter*                      \
  lcb_filter_create(sqlite3* db)                        \
  {                                                     \
    return new class(db);                               \
  }

namespace LCB
{
  namespace Filters
  {
    class Filter
    {
    public:
      Filter(sqlite3* db):
        m_db(db),
        m_count(0),
        m_db_active(false)
      { }

      virtual
      ~Filter(void)
      { }

      bool
      filter(int64_t msec, uint8_t byte)
      {
        doFilter(msec, byte);
        ++m_count;
      }

      uint64_t
      getCount(void) const
      {
        return m_count;
      }

      virtual int64_t
      getTime(void) const
      {
        return -1;
      }

      void
      dbSetActive(bool active)
      {
        m_db_active = active;
      }

    protected:
      virtual bool
      doFilter(int64_t msec, uint8_t byte) = 0;

      void
      dbCreate(const std::string& sql)
      {
        sqlite3_exec(m_db, sql.c_str(), NULL, NULL, NULL);
      }

      void
      dbPrepare(const std::string& sql)
      {
        sqlite3_prepare_v2(m_db, sql.c_str(), sql.size() + 1, &m_db_ins, NULL);
      }

      void
      dbBindInt(int index, int value)
      {
        sqlite3_bind_int(m_db_ins, index, value);
      }

      void
      dbBindInt64(int index, int64_t value)
      {
        sqlite3_bind_int64(m_db_ins, index, value);
      }

      void
      dbBindDouble(int index, double value)
      {
        sqlite3_bind_double(m_db_ins, index, value);
      }

      void
      dbStep(void)
      {
        sqlite3_step(m_db_ins);
        sqlite3_clear_bindings(m_db_ins);
        sqlite3_reset(m_db_ins);
      }

      bool
      dbIsActive(void) const
      {
        return m_db_active;
      }

    private:
      //! Database connection.
      sqlite3* m_db;
      //! Insert statement.
      sqlite3_stmt* m_db_ins;
      //! True if DB is active.
      bool m_db_active;
      uint64_t m_count;
    };

    typedef Filter* (*Creator)(sqlite3* db);
  }
}

#endif
