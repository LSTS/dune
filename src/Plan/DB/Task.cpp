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

namespace Plan
{
  namespace DB
  {
    using DUNE_NAMESPACES;

    static const char* c_plan_table_stmt =
    "create table if not exists Plan ( "
    " plan_id varchar2 primary key,"
    " change_time real not null,"
    " change_sid integer not null,"
    " change_sname varchar2 not null,"
    " md5 blob not null,"
    " data blob not null"
    " )"
    ;
    static const char* c_insert_plan_stmt = "insert into Plan values(?,?,?,?,?,?)";
    static const char* c_delete_plan_stmt = "delete from Plan where plan_id=?";
    static const char* c_plan_iterator_stmt =
    "select plan_id, change_time, change_sid, change_sname, md5, length(data)"
    "from Plan order by plan_id";
    static const char* c_query_plan_stmt =
    "select change_time, change_sid, change_sname, md5, length(data)"
    "from Plan where plan_id=?";
    static const char* c_get_plan_stmt = "select data from Plan where plan_id=?";
    static const char* c_delete_all_plans_stmt = "delete from Plan";

    static const char* c_lastchange_table_stmt =
    "create table if not exists LastChange ("
    " change_time real not null,"
    " change_sid integer not null,"
    " change_sname varchar2 not null )";

    static const char* c_lastchange_update_stmt
    = "update LastChange set change_time=?, change_sid=?, change_sname=?";

    static const char* c_lastchange_query_stmt
    = "select change_time, change_sid, change_sname from LastChange";

    static const char* c_op_desc[] = {DTR_RT("set plan"), DTR_RT("delete plan"),
                                      DTR_RT("get plan"), DTR_RT("get plan info"),
                                      DTR_RT("clear database"), DTR_RT("database state"),
                                      DTR_RT("database initialization")};

    struct Arguments
    {
      //! Path to DB file
      std::string db_path;
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
      IMC::PlanDBInformation m_plan_info;
      // Statements
      Database::Statement* m_insert_plan_stmt;
      Database::Statement* m_delete_plan_stmt;
      Database::Statement* m_plan_iterator_stmt;
      Database::Statement* m_query_plan_stmt;
      Database::Statement* m_get_plan_stmt;
      Database::Statement* m_delete_all_plans_stmt;
      Database::Statement* m_lastchange_update_stmt;
      Database::Statement* m_lastchange_query_stmt;
      // Local request counter
      uint16_t m_local_reqid;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_db(NULL),
        m_local_reqid(0)
      {
        param("DB Path", m_args.db_path)
        .defaultValue("")
        .description("Path to DB file");

        bind<IMC::PlanControl>(this);
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
        m_reply.request_id = m_local_reqid++;
        m_reply.setDestination(getSystemId());

        inProgress("initializing");

        Path db_file;
        if (m_args.db_path.empty())
          db_file = m_ctx.dir_db / "Plan.db";
        else
          db_file = m_args.db_path;

        inf(DTR("database file: '%s'"), db_file.c_str());

        m_db = new Database::Connection(db_file.c_str(), true);

        // Create Plan table and initialize associated statements
        m_db->execute(c_plan_table_stmt);
        m_insert_plan_stmt = new Database::Statement(c_insert_plan_stmt, *m_db);
        m_delete_plan_stmt = new Database::Statement(c_delete_plan_stmt, *m_db);
        m_plan_iterator_stmt = new Database::Statement(c_plan_iterator_stmt, *m_db);
        m_query_plan_stmt = new Database::Statement(c_query_plan_stmt, *m_db);
        m_get_plan_stmt = new Database::Statement(c_get_plan_stmt, *m_db);
        m_delete_all_plans_stmt = new Database::Statement(c_delete_all_plans_stmt, *m_db);

        // Create Plan table and initialize associated statements
        m_db->execute(c_lastchange_table_stmt);
        m_lastchange_update_stmt = new Database::Statement(c_lastchange_update_stmt, *m_db);
        m_lastchange_query_stmt = new Database::Statement(c_lastchange_query_stmt, *m_db);

        if (!m_lastchange_query_stmt->execute())
        {
          Database::Statement initial_insert("insert into LastChange values(?,?,?)", *m_db);
          double now = Clock::getSinceEpoch();
          initial_insert << now << getSystemId() << getSystemName();
          initial_insert.execute();
        }

        m_lastchange_query_stmt->reset();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        onSuccess(DTR("initialization complete"));
      }

      void
      onResourceRelease(void)
      {
        if (m_db == NULL)
          return;

        delete m_insert_plan_stmt;
        delete m_delete_plan_stmt;
        delete m_plan_iterator_stmt;
        delete m_query_plan_stmt;
        delete m_get_plan_stmt;
        delete m_delete_all_plans_stmt;
        delete m_lastchange_update_stmt;
        delete m_lastchange_query_stmt;
        delete m_db;

        m_db = NULL;
      }

      void
      consume(const IMC::PlanControl* pc)
      {
        // Handle case where modules do not interface with plan DB
        // and specify plans through PlanControl alone
        if (pc->type != IMC::PlanControl::PC_REQUEST)
          return;

        if (pc->op != IMC::PlanControl::PC_START && pc->op != IMC::PlanControl::PC_LOAD)
          return;

        if (pc->arg.isNull())
          return;

        const IMC::Message* m;
        pc->arg.get(m);

        if (m->getId() != DUNE_IMC_PLANSPECIFICATION)
          return;

        const IMC::PlanSpecification* ps;
        pc->arg.get(ps);

        if (ps->plan_id != pc->plan_id)
          return;

        m_reply.clear();
        m_reply.op = IMC::PlanDB::DBOP_SET;
        m_reply.plan_id = pc->plan_id;
        m_reply.request_id = m_local_reqid++;
        m_reply.setDestination(0xFFFF);
        m_reply.setDestinationEntity(getEntityId());
        war(DTR("storing plan '%s' issued through a PlanControl request"), ps->plan_id.c_str());

        storeInDB(ps);
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
        m_reply.op = req->op;
        m_reply.request_id = req->request_id;
        m_reply.plan_id = req->plan_id;

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
              m_reply.plan_id.clear();
              clearDatabase(*req);
              break;
            case IMC::PlanDB::DBOP_GET_STATE:
              m_reply.plan_id.clear();
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
      onChange(const IMC::PlanDB& req)
      {
        uint16_t sid = req.getSource();
        onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid));
      }

      void
      onChange(double time, uint16_t sid, const std::string& sname)
      {
        // Update LastChange table information.
        int count = 0;

        *m_lastchange_update_stmt << time << sid << sname;
        m_lastchange_update_stmt->execute(&count);

        if (count != 1)
          throw std::runtime_error(DTR("database is corrupt"));
      }

      void
      setPlan(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        const IMC::PlanSpecification* spec = 0;

        if (!req.arg.get(spec))
        {
          onFailure(DTR("no plan specification given"));
          return;
        }

        if (spec->plan_id != req.plan_id)
        {
          onFailure(DTR("plan id mismatch"));
          return;
        }

        inProgress();

        storeInDB(spec);
      }

      void
      storeInDB(const IMC::PlanSpecification* spec)
      {
        m_plan_info.plan_size = spec->getPayloadSerializationSize();
        m_plan_info.plan_id = spec->plan_id;
        m_plan_info.change_time = Clock::getSinceEpoch();
        m_plan_info.change_sid = spec->getSource();
        m_plan_info.change_sname = resolveSystemId(m_plan_info.change_sid);

        Database::Blob plan_data(m_plan_info.plan_size);
        spec->serializeFields((uint8_t*)&plan_data[0]);

        m_plan_info.md5.resize(16);
        MD5::compute((uint8_t*)&plan_data[0], m_plan_info.plan_size, (uint8_t*)&m_plan_info.md5[0]);

        m_db->beginTransaction();

        int count = 0;
        try
        {
          *m_delete_plan_stmt << m_plan_info.plan_id;
          m_delete_plan_stmt->execute(&count);
          m_delete_plan_stmt->reset();

          *m_insert_plan_stmt << m_plan_info.plan_id
                              << m_plan_info.change_time
                              << m_plan_info.change_sid
                              << m_plan_info.change_sname
                              << m_plan_info.md5
                              << plan_data;
          m_insert_plan_stmt->execute();
          onChange(m_plan_info.change_time, m_plan_info.change_sid, m_plan_info.change_sname);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
        }

        m_db->commit();

        m_reply.arg.set(m_plan_info);
        onSuccess(count ? DTR("OK (updated)") : DTR("OK (new entry)"));
      }

      void
      deletePlan(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        inProgress();
        m_db->beginTransaction();

        int count = 0;
        try
        {
          *m_delete_plan_stmt << req.plan_id;
          m_delete_plan_stmt->execute(&count);
          if (count)
            onChange(req);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_db->commit();

        if (!count)
          onFailure(DTR("undefined plan"));
        else
          onSuccess();
      }

      void
      getPlan(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        *m_get_plan_stmt << req.plan_id;

        bool found = m_get_plan_stmt->execute();

        if (!found)
        {
          onFailure(DTR("undefined plan"));
        }
        else
        {
          Database::Blob data;
          *m_get_plan_stmt >> data;

          IMC::PlanSpecification spec;
          spec.deserializeFields((const uint8_t*)&data[0], data.size());
          m_reply.arg.set(&spec);

          onSuccess();
        }
        m_get_plan_stmt->reset();
      }

      void
      getPlanInfo(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        *m_query_plan_stmt << req.plan_id;

        bool found = m_query_plan_stmt->execute();

        if (!found)
        {
          onFailure(DTR("undefined plan"));
          return;
        }

        m_plan_info.plan_id = req.plan_id;
        *m_query_plan_stmt >> m_plan_info.change_time
                           >> m_plan_info.change_sid
                           >> m_plan_info.change_sname
                           >> m_plan_info.md5
                           >> m_plan_info.plan_size;

        m_reply.arg.set(m_plan_info);
        m_query_plan_stmt->reset();

        onSuccess();
      }

      void
      clearDatabase(const IMC::PlanDB& req)
      {
        inProgress();
        m_db->beginTransaction();

        try
        {
          m_delete_all_plans_stmt->execute();
          onChange(req);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_db->commit();
        onSuccess();
      }

      void
      getDatabaseState(const IMC::PlanDB& req)
      {
        (void)req;
        IMC::PlanDBState* state = new IMC::PlanDBState;

        state->plan_size = 0;
        state->plan_count = 0;

        MD5 md5sum;

        IMC::MessageList<PlanDBInformation>* plandbinfo = &state->plans_info;

        while (m_plan_iterator_stmt->execute())
        {
          IMC::PlanDBInformation* pinfo = new IMC::PlanDBInformation;

          *m_plan_iterator_stmt >> pinfo->plan_id
                                >> pinfo->change_time
                                >> pinfo->change_sid
                                >> pinfo->change_sname
                                >> pinfo->md5
                                >> pinfo->plan_size;

          md5sum.update((const uint8_t*)&pinfo->md5[0], 16); // the MD5 of all MD5s ordered by plan_id
          state->plan_size += pinfo->plan_size;
          state->plan_count++;

          plandbinfo->push_back(*pinfo);

          delete pinfo;
        }
        m_plan_iterator_stmt->reset();

        // Finalized MD5 digest
        state->md5.resize(16);
        md5sum.finalize((uint8_t*)&state->md5[0]);

        m_lastchange_query_stmt->execute();
        *m_lastchange_query_stmt >> state->change_time
                                 >> state->change_sid
                                 >> state->change_sname;
        m_lastchange_query_stmt->reset();

        m_reply.arg.set(*state);
        onSuccess();

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
            {
              if (type == IMC::PlanDB::DBT_FAILURE)
                err("%s (%s) -- %s", DTR(c_op_desc[m_reply.op]),
                    m_reply.plan_id.c_str(), desc);
              else if (type == IMC::PlanDB::DBT_SUCCESS)
                inf("%s (%s) -- %s", DTR(c_op_desc[m_reply.op]),
                    m_reply.plan_id.c_str(), desc);
              else
                debug("%s (%s) -- %s", DTR(c_op_desc[m_reply.op]),
                      m_reply.plan_id.c_str(), desc);
            }
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
      onSuccess(const char* msg = DTR("OK"))
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
