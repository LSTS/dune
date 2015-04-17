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
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DB.hpp"

#define TABLE_PLAN                                      \
  "plan_id varchar2 primary key, change_time"           \
  " real not null, change_sid integer not null,"        \
  " change_sname varchar2 not null,"                    \
  " md5 blob not null, data blob not null"              \

#define TABLE_MEMENTO                                   \
  "id varchar2 primary key, change_time"                \
  " real not null, change_sid integer not null,"        \
  " change_sname varchar2 not null,"                    \
  " md5 blob not null, data blob not null,"             \
  " plan_id varchar2 not null"                          \

#define TABLE_STATEMENT(type, table)                    \
  "create table if not exists " type " ( " table " )"
#define INSERT_STATEMENT(type, variables) "insert into " type " values( " variables " )"
#define DELETE_STATEMENT(type, field) "delete from " type " where " field "=?"
#define ITERATOR_STATEMENT(type, field) "select " field ", change_time, change_sid," \
  " change_sname, md5, length(data) from " type " order by " field
#define QUERY_STATEMENT(type, field) "select change_time, change_sid, change_sname, " \
  "md5, length(data) from " type " where " field "=?"
#define GET_STATEMENT(type, field) "select data from " type " where " field "=?"
#define DELETE_ALL_STATEMENT(type) "delete from " type
#define LCHANGE_TABLE(name) "create table if not exists " name " ( change_time " \
  "real not null, change_sid integer not null, change_sname varchar2 not null )"
#define LCHANGE_INSERT(name) "insert into " name " values(?,?,?)"
#define LCHANGE_UPDATE(name) "update " name " set change_time=?, change_sid=?, change_sname=?"
#define LCHANGE_QUERY(name) "select change_time, change_sid, change_sname from " name

namespace Plan
{
  namespace DB
  {
    using DUNE_NAMESPACES;

    static const char* c_table_stmt[] = { TABLE_STATEMENT("Plan", TABLE_PLAN),
                                          TABLE_STATEMENT("Memento", TABLE_MEMENTO) };

    static const char* c_insert_stmt[] = { INSERT_STATEMENT("Plan", "?,?,?,?,?,?"),
                                           INSERT_STATEMENT("Memento", "?,?,?,?,?,?,?") };

    static const char* c_delete_stmt[] = { DELETE_STATEMENT("Plan", "plan_id"),
                                           DELETE_STATEMENT("Memento", "id")};

    static const char* c_iterator_stmt[] = { ITERATOR_STATEMENT("Plan", "plan_id"),
                                             ITERATOR_STATEMENT("Memento", "id") };

    static const char* c_query_stmt[] = { QUERY_STATEMENT("Plan", "plan_id"),
                                          QUERY_STATEMENT("Memento", "id") };

    static const char* c_get_stmt[] = { GET_STATEMENT("Plan", "plan_id"),
                                        GET_STATEMENT("Memento", "id")};

    static const char* c_delete_all_stmt[] = { DELETE_ALL_STATEMENT("Plan"),
                                               DELETE_ALL_STATEMENT("Memento") };

    static const char* c_cross_operations_stmt[] = { GET_STATEMENT("Memento", "plan_id"),
                                                     DELETE_STATEMENT("Memento", "plan_id")};

    static const char* c_lastchange_table_stmt[] = { LCHANGE_TABLE("LastChange"),
                                                     LCHANGE_TABLE("LastChange_Memento") };

    static const char* c_lastchange_initial_insert_stmt[] = { LCHANGE_INSERT("LastChange"),
                                                              LCHANGE_INSERT("LastChange_Memento") };

    static const char* c_lastchange_update_stmt[] = { LCHANGE_UPDATE("LastChange"),
                                                      LCHANGE_UPDATE("LastChange_Memento") };

    static const char* c_lastchange_query_stmt[] = { LCHANGE_QUERY("LastChange"),
                                                     LCHANGE_QUERY("LastChange_Memento") };

    static const char* c_op_plan_desc[] = {DTR_RT("set plan"), DTR_RT("delete plan"),
                                           DTR_RT("get plan"), DTR_RT("get plan info"),
                                           DTR_RT("clear plan tables"), DTR_RT("plan table state"),
                                           DTR_RT("plan table state detailed"), DTR_RT("database initialization") };

    static const char* c_op_memento_desc[] = {DTR_RT("set memento"), DTR_RT("delete memento"),
                                              DTR_RT("get memento"), DTR_RT("get memento info"),
                                              DTR_RT("clear memento table"), DTR_RT("memento table state"),
                                              DTR_RT("memento table state detailed") };

    struct Arguments
    {
      //! Path to DB file
      std::string db_path;
    };

    enum DataType
    {
      //! Invalid data type
      DT_NONE = -1,
      //! Plan data type
      DT_PLAN = 0,
      //! Memento data type
      DT_MEMENTO = 1,
      //! Total tables
      DT_TOTAL = 2
    };

    enum CrossOperations
    {
      //! Get Memento from plan_id
      CO_GET = 0,
      //! Delete Memento from plan_id
      CO_DELETE = 1,
      //! Total Cross Operations
      CO_TOTAL = 2
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments
      Arguments m_args;
      // Database handle.
      Database::Connection* m_db;
      // In progress reply message.
      IMC::PlanDB m_reply;
      // In progress reply message.
      IMC::PlanDBInformation m_object_info;
      // Statements
      Database::Statement* m_insert_stmt[DT_TOTAL];
      Database::Statement* m_delete_stmt[DT_TOTAL];
      Database::Statement* m_iterator_stmt[DT_TOTAL];
      Database::Statement* m_query_stmt[DT_TOTAL];
      Database::Statement* m_get_stmt[DT_TOTAL];
      Database::Statement* m_delete_all_stmt[DT_TOTAL];
      Database::Statement* m_cross_operations_stmt[CO_TOTAL];
      Database::Statement* m_lastchange_initial_insert_stmt[DT_TOTAL];
      Database::Statement* m_lastchange_update_stmt[DT_TOTAL];
      Database::Statement* m_lastchange_query_stmt[DT_TOTAL];

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_db(NULL)
      {
        param("DB Path", m_args.db_path)
        .defaultValue("")
        .description("Path to DB file");

        bind<IMC::PlanDB>(this);
        bind<IMC::PowerOperation>(this);
      }

      void
      onResourceAcquisition(void)
      {
        if (m_db != NULL)
          return;

        m_reply.clear();
        m_reply.op = IMC::PlanDB::DBOP_BOOT;
        m_reply.setDestination(getSystemId());

        inProgress("initializing");

        Path db_file;
        if (m_args.db_path.empty())
          db_file = m_ctx.dir_db / "Plan.db";
        else
          db_file = m_args.db_path;

        inf(DTR("database file: '%s'"), db_file.c_str());

        try
        {
          m_db = new Database::Connection(db_file.c_str(), true);

          // Create tables and initialize associated statements
          for (int i = 0; i < DT_TOTAL; i++)
          {
            m_db->execute(c_table_stmt[i]);
            m_insert_stmt[i] = new Database::Statement(c_insert_stmt[i], *m_db);
            m_delete_stmt[i] = new Database::Statement(c_delete_stmt[i], *m_db);
            m_iterator_stmt[i] = new Database::Statement(c_iterator_stmt[i], *m_db);
            m_query_stmt[i] = new Database::Statement(c_query_stmt[i], *m_db);
            m_get_stmt[i] = new Database::Statement(c_get_stmt[i], *m_db);
            m_delete_all_stmt[i] = new Database::Statement(c_delete_all_stmt[i], *m_db);

            m_db->execute(c_lastchange_table_stmt[i]);
            m_lastchange_initial_insert_stmt[i] = new Database::Statement(c_lastchange_initial_insert_stmt[i], *m_db);
            m_lastchange_update_stmt[i] = new Database::Statement(c_lastchange_update_stmt[i], *m_db);
            m_lastchange_query_stmt[i] = new Database::Statement(c_lastchange_query_stmt[i], *m_db);
            if (!m_lastchange_query_stmt[i]->execute())
            {
              double now = Clock::getSinceEpoch();
              *m_lastchange_initial_insert_stmt[i] << now
                                                   << getSystemId()
                                                   << getSystemName();
              m_lastchange_initial_insert_stmt[i]->execute();
            }

            m_lastchange_query_stmt[i]->reset();
          }

          // Initilialize statements for cross operations
          for (int i = 0; i < CO_TOTAL; i++)
            m_cross_operations_stmt[i] = new Database::Statement(c_cross_operations_stmt[i], *m_db);

        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          return;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        onSuccess(DTR("initialization complete"));
      }

      void
      onResourceRelease(void)
      {
        if (m_db == NULL)
          return;

        for (int i = 0; i < DT_TOTAL; i++)
        {
          delete m_insert_stmt[i];
          delete m_delete_stmt[i];
          delete m_iterator_stmt[i];
          delete m_query_stmt[i];
          delete m_get_stmt[i];
          delete m_delete_all_stmt[i];
          delete m_cross_operations_stmt[i];
          delete m_lastchange_initial_insert_stmt[i];
          delete m_lastchange_update_stmt[i];
          delete m_lastchange_query_stmt[i];
        }

        delete m_db;

        m_db = NULL;
      }

      void
      consume(const IMC::PowerOperation* po)
      {
        if (po->getDestination() != getSystemId())
          return;

        switch (po->op)
        {
          case IMC::PowerOperation::POP_PWR_DOWN_IP:
            onResourceRelease();
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_POWER_DOWN);
            break;
          case IMC::PowerOperation::POP_PWR_DOWN_ABORTED:
            onResourceAcquisition();
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::PlanDB* req)
      {
        if (req->type != IMC::PlanDB::DBT_REQUEST)
        {
          war(DTR("unexpected message"));
          return;
        }

        // Setup fields to echo in reply message
        m_reply.setDestination(req->getSource());
        m_reply.setDestinationEntity(req->getSourceEntity());
        m_reply.dt = req->dt;
        m_reply.op = req->op;
        m_reply.request_id = req->request_id;
        m_reply.object_id = req->object_id;

        if (!m_db)
        {
          onFailure(DTR("not active"));
          return;
        }

        try
        {
          // Handle requested operation
          switch (req->op)
          {
            case IMC::PlanDB::DBOP_SET:
              setPlan(*req);
              break;
            case IMC::PlanDB::DBOP_DEL:
              deletePlan(*req);
              break;
            case IMC::PlanDB::DBOP_GET:
              getPlan(*req);
              break;
            case IMC::PlanDB::DBOP_GET_INFO:
              getPlanInfo(*req);
              break;
            case IMC::PlanDB::DBOP_CLEAR:
              m_reply.object_id.clear();
              clearDatabase(*req);
              break;
            case IMC::PlanDB::DBOP_GET_STATE:
              m_reply.object_id.clear();
              getDatabaseState(*req);
              break;
            default:
              throw std::runtime_error(DTR("unsupported operation"));
          }
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
        }

        // Cleanup 'arg' field
        m_reply.arg.clear();
      }

      void
      onChange(double time, uint16_t sid, const std::string& sname, int index)
      {
        // Update LastChange table information.
        int count = 0;
        try
        {
          *m_lastchange_update_stmt[index] << time
                                           << sid
                                           << sname;
          m_lastchange_update_stmt[index]->execute(&count);
          m_lastchange_update_stmt[index]->reset();
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          return;
        }

        if (count == 0)
          throw std::runtime_error(DTR("database is corrupt"));
      }

      int
      checkOperationType(const IMC::PlanDB& req)
      {
        switch (req.dt)
        {
          case IMC::PlanDB::DBDT_PLAN:
            return DT_PLAN;
            break;
          case IMC::PlanDB::DBDT_MEMENTO:
            return DT_MEMENTO;
            break;
          default:
            return DT_NONE;
            break;
        }
      }

      void
      setPlan(const IMC::PlanDB& req)
      {
        if (req.object_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        if (req.arg.isNull())
          return;

        const IMC::Message* m;
        req.arg.get(m);

        const IMC::Message* arg = 0;

        if (m->getId() != DUNE_IMC_PLANSPECIFICATION && m->getId() != DUNE_IMC_PLANMEMENTO)
        {
          onFailure(DTR("no plan specification given"));
          return;
        }

        if (m->getId() == DUNE_IMC_PLANSPECIFICATION)
        {
          const IMC::PlanSpecification* ps;
          req.arg.get(ps);

          if (ps->plan_id != req.object_id)
          {
            onFailure(DTR("plan id mismatch"));
            return;
          }
          arg = static_cast<const IMC::Message*>(ps);
          storeInDB(arg, DT_PLAN);
        }

        if (m->getId() == DUNE_IMC_PLANMEMENTO)
        {
          const IMC::PlanMemento* pm;
          req.arg.get(pm);

          if (pm->id != req.object_id)
          {
            onFailure(DTR("memento id mismatch"));
            return;
          }
          arg = static_cast<const IMC::Message*>(pm);
          storeInDB(arg, DT_MEMENTO);
        }

      }

      void
      storeInDB(const IMC::Message* arg, int data_type)
      {
        const IMC::PlanSpecification* plan_spec = 0;
        const IMC::PlanMemento* plan_mem = 0;

        switch (data_type)
        {
          case DT_PLAN:
            plan_spec = static_cast<const IMC::PlanSpecification*>(arg);
            m_object_info.object_id = plan_spec->plan_id;
            PlanInfoParser(plan_spec, m_object_info, resolveSystemId(plan_spec->getSource()));
            break;
          case DT_MEMENTO:
            plan_mem = static_cast<const IMC::PlanMemento*>(arg);
            m_object_info.object_id = plan_mem->id;
            PlanInfoParser(plan_mem, m_object_info, resolveSystemId(plan_mem->getSource()));
            break;
          default:
            break;
        }

        Database::Blob plan_data(m_object_info.object_size);
        switch (data_type)
        {
          case DT_PLAN:
            DataParser(plan_spec, m_object_info, plan_data);
            break;
          case DT_MEMENTO:
            DataParser(plan_mem, m_object_info, plan_data);
            break;
          default:
            break;
        }

        m_db->beginTransaction();

        int count = 0;
        try
        {
          *m_delete_stmt[data_type] << m_object_info.object_id;
          m_delete_stmt[data_type]->execute(&count);
          m_delete_stmt[data_type]->reset();

          *m_insert_stmt[data_type] << m_object_info.object_id
                                    << m_object_info.change_time
                                    << m_object_info.change_sid
                                    << m_object_info.change_sname
                                    << m_object_info.md5
                                    << plan_data;
          if (data_type == DT_MEMENTO)
            *m_insert_stmt[data_type] << plan_mem->plan_id;

          m_insert_stmt[data_type]->execute();
          m_insert_stmt[data_type]->reset();
          onChange(m_object_info.change_time, m_object_info.change_sid, m_object_info.change_sname, data_type);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
        }

        m_db->commit();

        m_reply.arg.set(m_object_info);
        switch (data_type)
        {
          case DT_PLAN:
            onSuccess(count ? DTR("OK Plan (updated)") : DTR("OK Plan (new entry)"));
            break;
          case DT_MEMENTO:
            onSuccess(count ? DTR("OK Memento (updated)") : DTR("OK Memento (new entry)"));
            break;
          default:
            break;
        }
      }

      void
      deletePlan(const IMC::PlanDB& req)
      {
        if (req.object_id.empty())
        {
          onFailure(DTR("undefined object id"));
          return;
        }

        int data_type = checkOperationType(req);

        if (data_type == DT_NONE)
        {
          inf("undefined operation type");
          return;
        }

        inProgress();
        m_db->beginTransaction();

        int count = 0;
        int flag = 0;
        uint16_t sid = req.getSource();
        try
        {
          // If delete plan, also delete memento associated (if exists)
          if (data_type == DT_PLAN)
          {
            // Delete Plan
            *m_delete_stmt[DT_PLAN] << req.object_id;
            m_delete_stmt[DT_PLAN]->execute(&count);

            if (count > 0)
            {
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_PLAN);
              flag = 1;
              count = 0;
            }

            // Delete associated Mementos if exists
            *m_cross_operations_stmt[CO_GET] << req.object_id;
            *m_cross_operations_stmt[CO_DELETE] << req.object_id;

            while (m_cross_operations_stmt[CO_GET]->execute())
              m_cross_operations_stmt[CO_DELETE]->execute(&count);

            if (count > 0)
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_MEMENTO);

          }
          // If delete memento, only delete memento
          if (data_type == DT_MEMENTO)
          {
            *m_delete_stmt[DT_MEMENTO] << req.object_id;
            m_delete_stmt[DT_MEMENTO]->execute(&count);

            if (count > 0)
            {
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_MEMENTO);
              flag = 1;
            }
          }
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_db->commit();

        if (!flag)
          onFailure(DTR("undefined object id"));
        else
          onSuccess(DTR("OK"));
      }

      void
      getPlan(const IMC::PlanDB& req)
      {
        if (req.object_id.empty())
        {
          onFailure(DTR("undefined object id"));
          return;
        }

        int data_type = checkOperationType(req);

        if (data_type == DT_NONE)
        {
          inf("undefined operation type");
          return;
        }
        try
        {
          *m_get_stmt[data_type] << req.object_id;

          bool found = m_get_stmt[data_type]->execute();

          if (!found)
          {
            std::string desc = DTR("unable to find object: ") + req.object_id;
            onFailure(desc.c_str());
          }
          else
          {
            Database::Blob data;
            *m_get_stmt[data_type] >> data;

            IMC::PlanSpecification* spec = new IMC::PlanSpecification;
            IMC::PlanMemento* mem = new IMC::PlanMemento;
            switch (data_type)
            {
              case DT_PLAN:
                spec->deserializeFields((const uint8_t*)&data[0], data.size());
                m_reply.arg.set(spec);
                break;
              case DT_MEMENTO:
                mem->deserializeFields((const uint8_t*)&data[0], data.size());
                m_reply.arg.set(mem);
                break;
              default:
                break;
            }

            onSuccess(DTR("OK"));
            delete spec;
            delete mem;
          }
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_get_stmt[data_type]->reset();
      }

      void
      getPlanInfo(const IMC::PlanDB& req)
      {
        if (req.object_id.empty())
        {
          onFailure(DTR("undefined object id"));
          return;
        }

        int data_type = checkOperationType(req);

        if (data_type == DT_NONE)
        {
          inf("undefined operation type");
          return;
        }
        try
        {
          *m_query_stmt[data_type] << req.object_id;

          bool found = m_query_stmt[data_type]->execute();

          if (!found)
          {
            onFailure(DTR("undefined plan"));
            return;
          }

          m_object_info.object_id = req.object_id;
          *m_query_stmt[data_type] >> m_object_info.change_time
                                   >> m_object_info.change_sid
                                   >> m_object_info.change_sname
                                   >> m_object_info.md5
                                   >> m_object_info.object_size;
          m_reply.arg.set(m_object_info);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        for(int i = 0; i < DT_TOTAL; i++)
          m_query_stmt[i]->reset();

        onSuccess(DTR("OK"));
      }

      void
      clearDatabase(const IMC::PlanDB& req)
      {
        inProgress();
        m_db->beginTransaction();

        int data_type = checkOperationType(req);

        if (data_type == DT_NONE)
        {
          inf("undefined operation type");
          return;
        }

        int count = 0;
        uint16_t sid = req.getSource();
        try
        {
          switch (data_type)
          {
            // If delete plan database, also delete memento database
            case DT_PLAN:
              m_delete_all_stmt[DT_PLAN]->execute(&count);

              if (count > 0)
                onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_PLAN);
              count = 0;

              m_delete_all_stmt[DT_MEMENTO]->execute(&count);

              if (count > 0)
                onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_MEMENTO);
              count = 0;

              break;
              // If delete memento database, only delete memento database
            case DT_MEMENTO:
              m_delete_all_stmt[DT_MEMENTO]->execute(&count);

              if (count > 0)
                onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), DT_MEMENTO);

              count = 0;
              break;
            default:
              break;
          }
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_db->commit();
        onSuccess(DTR("OK"));
      }

      void
      getDatabaseState(const IMC::PlanDB& req)
      {
        int data_type = checkOperationType(req);

        if (data_type == DT_NONE)
        {
          inf("undefined operation type");
          return;
        }

        (void)req;
        IMC::PlanDBState* state = new IMC::PlanDBState;

        state->object_size = 0;
        state->object_count = 0;

        MD5 md5sum;

        IMC::MessageList<PlanDBInformation>* plandbinfo = &state->object_info;
        try
        {
          while (m_iterator_stmt[data_type]->execute())
          {
            IMC::PlanDBInformation* pinfo = new IMC::PlanDBInformation;

            *m_iterator_stmt[data_type] >> pinfo->object_id
                                        >> pinfo->change_time
                                        >> pinfo->change_sid
                                        >> pinfo->change_sname
                                        >> pinfo->md5
                                        >> pinfo->object_size;
 
            md5sum.update((const uint8_t*)&pinfo->md5[0], 16); // the MD5 of all MD5s ordered by id
            state->object_size += pinfo->object_size;
            state->object_count++;

            plandbinfo->push_back(*pinfo);

            delete pinfo;
          }

          m_iterator_stmt[data_type]->reset();

          // Finalized MD5 digest
          state->md5.resize(16);
          md5sum.finalize((uint8_t*)&state->md5[0]);

          m_lastchange_query_stmt[data_type]->execute();
          *m_lastchange_query_stmt[data_type] >> state->change_time
                                              >> state->change_sid
                                              >> state->change_sname;
          m_lastchange_query_stmt[data_type]->reset();
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_reply.arg.set(*state);
        onSuccess(DTR("OK"));

        delete state;
      }

      void
      answer(uint8_t type, const char* desc)
      {
        m_reply.type = type;
        m_reply.info = desc;
        dispatch(m_reply);

        switch (m_reply.op)
        {
          case IMC::PlanDB::DBOP_SET:
          case IMC::PlanDB::DBOP_DEL:
          case IMC::PlanDB::DBOP_CLEAR:
              if (type == IMC::PlanDB::DBT_FAILURE && m_reply.dt == IMC::PlanDB::DBDT_PLAN)
                err("%s (%s) -- %s", DTR(c_op_plan_desc[m_reply.op]),
                    m_reply.object_id.c_str(), desc);
              else if (type == IMC::PlanDB::DBT_FAILURE && m_reply.dt == IMC::PlanDB::DBDT_MEMENTO)
                err("%s (%s) -- %s", DTR(c_op_memento_desc[m_reply.op]),
                    m_reply.object_id.c_str(), desc);

              else if (type == IMC::PlanDB::DBT_SUCCESS && m_reply.dt == IMC::PlanDB::DBDT_PLAN)
                inf("%s (%s) -- %s", DTR(c_op_plan_desc[m_reply.op]),
                    m_reply.object_id.c_str(), desc);
              else if (type == IMC::PlanDB::DBT_SUCCESS && m_reply.dt == IMC::PlanDB::DBDT_MEMENTO)
                inf("%s (%s) -- %s", DTR(c_op_memento_desc[m_reply.op]),
                    m_reply.object_id.c_str(), desc);

              else if (m_reply.dt == IMC::PlanDB::DBDT_PLAN)
                debug("%s (%s) -- %s", DTR(c_op_plan_desc[m_reply.op]),
                      m_reply.object_id.c_str(), desc);
              else if (m_reply.dt == IMC::PlanDB::DBDT_MEMENTO)
                debug("%s (%s) -- %s", DTR(c_op_memento_desc[m_reply.op]),
                m_reply.object_id.c_str(), desc);
              break;

          case IMC::PlanDB::DBOP_BOOT:
              if (type == IMC::PlanDB::DBT_FAILURE)
                 err("%s -- %s", DTR(c_op_plan_desc[m_reply.op]), desc);

              if (type == IMC::PlanDB::DBT_SUCCESS)
                inf("%s -- %s", DTR(c_op_plan_desc[m_reply.op]), desc);
              break;
        }
      }

      void
      inProgress(const char* msg = "in progress")
      {
        answer(IMC::PlanDB::DBT_IN_PROGRESS, msg);
      }

      void
      onFailure(const char* errmsg)
      {
        answer(IMC::PlanDB::DBT_FAILURE, errmsg);
      }

      void
      onSuccess(const char* msg)
      {
        answer(IMC::PlanDB::DBT_SUCCESS, msg);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
