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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLAN_ENGINE_DATABASE_INTERACTION_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_DATABASE_INTERACTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include <DUNE/Database.hpp>
#include <DUNE/Utils.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/FileSystem.hpp>

namespace Plan
{
  namespace Engine
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM DataBaseInteraction;

    //! DataBase statement
    static const char* c_get_stmt[] = {"select data from Plan where plan_id=?",
                                       "select data from Memento where id=?"};
    //! No connection to DB message
    static const char* c_no_conn = DTR("no database connection");
    
    //! Class to gather each maneuver's ETA
    class DataBaseInteraction
    {
    public:
      //! Constructor
      DataBaseInteraction(DUNE::Tasks::Task* task, const Path& db_file):
        m_task(task),
        m_conn(NULL),
        m_db_file(db_file),
        m_error(false)
      {
        for (unsigned i = 0; i < DB_TOTAL; i++)
          m_get_stmt[i] = NULL;
      }

      ~DataBaseInteraction(void)
      {
        close();
      }

      //! Close database
      void
      close(void)
      {
        for (unsigned i = 0; i < DB_TOTAL; i++)
          Memory::clear(m_get_stmt[i]);

        if (m_conn == NULL)
          return;

        Memory::clear(m_conn);

        m_task->debug("database connection closed");
      }

      //! Open database
      //! @return true if database opened successfully, false otherwise
      bool
      open(void)
      {
        try
        {
          m_task->debug("database file: '%s'", m_db_file.c_str());

          m_conn = new Database::Connection(m_db_file.c_str(), true);

          for (unsigned i = 0; i < DB_TOTAL; i++)
            m_get_stmt[i] = new Database::Statement(c_get_stmt[i], *m_conn);
        }
        catch (std::runtime_error& e)
        {
          m_task->err("failed to open DB: %s", e.what());
          m_error = true;
          return false;
        }

        m_error = false;
        return true;
      }

      //! Consuming PlanDB
      //! @param[in] pdb pointer to PlanDB message
      void
      onPlanDB(const IMC::PlanDB* pdb)
      {
        if ((pdb->op == IMC::PlanDB::DBOP_BOOT) &&
            pdb->type == IMC::PlanDB::DBT_SUCCESS)
        {
          open();
        }
        else if (pdb->op != IMC::PlanDB::DBT_REQUEST)
        {
          if ((pdb->getDestination() == m_task->getSystemId()) &&
              (pdb->getDestinationEntity() == m_task->getEntityId()))
          {
            if ((pdb->type == IMC::PlanDB::DBT_SUCCESS) ||
                (pdb->type == IMC::PlanDB::DBT_IN_PROGRESS))
              m_task->inf(DTR("successful request to PlanDB: %s"), pdb->object_id.c_str());
            else
              m_task->err(DTR("got error on request to: %s"), pdb->object_id.c_str());
          }
        }
      }

      //! Send plan or memento to DB
      //! @param[in] dtype data type to store
      //! @param[in] id string id of the data type
      //! @param[in] msg pointer to message
      void
      sendToDB(unsigned dtype, const std::string& id, const IMC::Message* msg)
      {
        if (m_conn == NULL)
        {
          m_task->err("%s", c_no_conn);
          return;
        }

        IMC::PlanDB plandb;
        plandb.type = IMC::PlanDB::DBT_REQUEST;
        plandb.dt = dtype;
        plandb.op = IMC::PlanDB::DBOP_SET;
        plandb.request_id = 0;
        plandb.object_id = id;
        plandb.arg.set(*msg);
        m_task->dispatch(plandb);
      }

      //! Look for a plan in the database
      //! @param[in] id name of the plan
      //! @param[out] spec plan specification message
      //! @param[out] info error info string
      //! @return true if plan is found
      bool
      searchInDB(const std::string& id, IMC::PlanSpecification& spec, std::string& info)
      {
        return searchInDB(id, DB_PLAN, spec, info);
      }

      //! Look for a memento in the database
      //! @param[in] id name of the memento
      //! @param[out] pmem plan memento message
      //! @param[out] info error info string
      //! @return true if memento is found
      bool
      searchInDB(const std::string& id, IMC::PlanMemento& pmem, std::string& info)
      {
        return searchInDB(id, DB_MEMENTO, pmem, info);
      }

      //! Check if DB is open
      //! @return true if open
      bool
      isOpen(void)
      {
        return (m_conn != NULL);
      }

      //! Check if DB is in error
      //! @return true if in error
      bool
      inError(void)
      {
        return m_error;
      }
      
    private:
      enum DBStatement
      {
        //! Plan
        DB_PLAN = 0,
        //! Memento
        DB_MEMENTO,
        //! Total number of db operations
        DB_TOTAL
      };

      //! Look for a plan or memento in the database
      //! @param[in] id name of the plan
      //! @param[in] op type of operation to perform in DB
      //! @param[out] msg plan specification or plan memento message
      //! @param[out] info error info string
      //! @return true if plan is found
      bool
      searchInDB(const std::string& id, unsigned op, IMC::Message& msg, std::string& info)
      {
        if (m_conn == NULL)
        {
          info = c_no_conn;
          return false;
        }

        std::string obj_op = (op == DB_PLAN) ? "plan" : "memento";

        if (id.empty())
        {
          info = String::str(DTR("undefined %s id"), obj_op.c_str());
          return false;
        }

        try
        {
          *m_get_stmt[op] << id;

          if (!m_get_stmt[op]->execute())
          {
            info = String::str(DTR("undefined %s"), obj_op.c_str());
            m_get_stmt[op]->reset();
            return false;
          }

          Database::Blob data;

          *m_get_stmt[op] >> data;

          msg.deserializeFields((const uint8_t*)&data[0], data.size());

          m_get_stmt[op]->reset();
        }
        catch (std::runtime_error& e)
        {
          info = DTR("failed loading from DB: %s"), e.what();
          return false;
        }

        return true;
      }

      //! Pointer to task
      DUNE::Tasks::Task* m_task;
      //! Database connection
      Database::Connection* m_conn;
      //! Database statement
      Database::Statement* m_get_stmt[DB_TOTAL];
      //! Path to db file
      Path m_db_file;
      //! True if in error
      bool m_error;
    };
  }
}

#endif
