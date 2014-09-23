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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DB.hpp"

namespace Plan
{
  namespace DB
  {
    using DUNE_NAMESPACES;

    static const char* c_table_stmt[] = {"create table if not exists Plan ( plan_id varchar2 primary key,change_time real not null, change_sid integer not null,"
                                         "change_sname varchar2 not null, md5 blob not null, data blob not null )" ,
                                         "create table if not exists Memento ( plan_id varchar2 primary key, change_time real not null, change_sid integer not null,"
                                         " change_sname varchar2 not null, md5 blob not null, data blob not null )"};

    static const char* c_insert_stmt[] = { "insert into Plan values(?,?,?,?,?,?)",
                                           "insert into Memento values(?,?,?,?,?,?)"};

    static const char* c_delete_stmt[] = {"delete from Plan where plan_id=?",
                                          "delete from Memento where plan_id=?"};

    static const char* c_iterator_stmt[] = {"select plan_id, change_time, change_sid, change_sname, md5, length(data) from Plan order by plan_id",
                                            "select plan_id, change_time, change_sid, change_sname, md5, length(data) from Memento order by plan_id"};

    static const char* c_query_stmt[] ={"select change_time, change_sid, change_sname, md5, length(data) from Plan where plan_id=?",
                                        "select change_time, change_sid, change_sname, md5, length(data) from Memento where plan_id=?"};

    static const char* c_get_stmt[] = {"select data from Plan where plan_id=?",
                                       "select data from Memento where plan_id=?"};

    static const char* c_delete_all_stmt[] = {"delete from Plan",
                                              "delete from Memento"};

    static const char* c_lastchange_table_stmt[] = { "create table if not exists LastChange ( change_time real not null, change_sid integer not null,"
                                                     "change_sname varchar2 not null )",
                                                     "create table if not exists LastChange_Memento ( change_time real not null, change_sid integer not null,"
                                                     " change_sname varchar2 not null )"};

    static const char* c_lastchange_initial_insert_stmt[] = {"insert into LastChange values(?,?,?)",
                                                             "insert into LastChange_Memento values(?,?,?)"};

    static const char* c_lastchange_update_stmt[] = {"update LastChange set change_time=?, change_sid=?, change_sname=?",
                                                     "update LastChange_Memento set change_time=?, change_sid=?, change_sname=?"};

    static const char* c_lastchange_query_stmt[] = {"select change_time, change_sid, change_sname from LastChange",
                                                    "select change_time, change_sid, change_sname from LastChange_Memento"};

    static const char* c_op_desc[] = {DTR_RT("set plan"), DTR_RT("delete plan"),
                                      DTR_RT("get plan"), DTR_RT("get plan info"),
                                      DTR_RT("clear plan tables"), DTR_RT("database state"),
                                      DTR_RT("database initialization"),
                                      DTR_RT("set memento"), DTR_RT("delete memento"),
                                      DTR_RT("get memento"), DTR_RT("get memento info"),
                                      DTR_RT("clear memento table"), DTR_RT("memento table state")};

    struct Arguments
    {
      //! Path to DB file
      std::string db_path;
    };

    enum TotalTables
    {
      TT_LastChange = 2,
      TT_Plans = 2
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
      Database::Statement* m_insert_stmt[2];
      Database::Statement* m_delete_stmt[2];
      Database::Statement* m_iterator_stmt[2];
      Database::Statement* m_query_stmt[2];
      Database::Statement* m_get_stmt[2];
      Database::Statement* m_delete_all_stmt[2];
      Database::Statement* m_lastchange_initial_insert_stmt[2];
      Database::Statement* m_lastchange_update_stmt[2];
      Database::Statement* m_lastchange_query_stmt[2];

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_db(NULL)
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
        m_reply.setDestination(getSystemId());

        inProgress("initializing");

        Path db_file;
        if (m_args.db_path.empty())
          db_file = m_ctx.dir_db / "Plan.db";
        else
          db_file = m_args.db_path;

        inf(DTR("database file: '%s'"), db_file.c_str());

        m_db = new Database::Connection(db_file.c_str(), true);

        // Create tables and initialize associated statements
        for (int i = 0; i<TT_Plans; i++)
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

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        onSuccess(DTR("initialization complete"));
      }

      void
      onResourceRelease(void)
      {
        if (m_db == NULL)
          return;

        for(int i = 0; i<TT_Plans; i++)
        {
          delete m_insert_stmt[i];
          delete m_delete_stmt[i];
          delete m_iterator_stmt[i];
          delete m_query_stmt[i];
          delete m_get_stmt[i];
          delete m_delete_all_stmt[i];
          delete m_lastchange_initial_insert_stmt[i];
          delete m_lastchange_update_stmt[i];
          delete m_lastchange_query_stmt[i];
        }

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

        if(m->getId() != DUNE_IMC_PLANSPECIFICATION && m->getId() != DUNE_IMC_PLANMEMENTO)
          return;

        const IMC::Message* arg = 0;
        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;

        if(m->getId() == DUNE_IMC_PLANSPECIFICATION)
        {
          const IMC::PlanSpecification* ps;
          pc->arg.get(ps);

          if (ps->plan_id != pc->plan_id)
            return;

          PlanMementoflag = 0;
          arg = static_cast<const IMC::Message*>(ps);

          war(DTR("storing plan '%s' issued through a PlanControl request"), ps->plan_id.c_str());
        }

        if(m->getId() == DUNE_IMC_PLANMEMENTO)
        {
          const IMC::PlanMemento* pm;
          pc->arg.get(pm);

          if (pm->plan_id != pc->plan_id)
            return;

          PlanMementoflag = 1;
          arg = static_cast<const IMC::Message*>(pm);

          war("storing memento '%s' issued through a PlanControl request", pm->plan_id.c_str());
        }

        if(PlanMementoflag == -1)
          return;

        if(PlanMementoflag == 0)
          storeInDB(arg,PlanMementoflag);

        if(PlanMementoflag == 1)
          storeInDB(arg,PlanMementoflag);
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
        printf("teste %d | %d\n",IMC::PlanDB::DBT_REQUEST, req->op);

        // Setup fields to echo in reply message
        m_reply.setDestination(req->getSource());
        m_reply.setDestinationEntity(req->getSourceEntity());
        m_reply.ot = req->ot;
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
      onChange(double time, uint16_t sid, const std::string& sname, int& PlanMementoflag)
      {
        // Update LastChange table information.
        int count = 0;

        *m_lastchange_update_stmt[PlanMementoflag] << time
                                                   << sid
                                                   << sname;
        m_lastchange_update_stmt[PlanMementoflag]->execute(&count);
        m_lastchange_update_stmt[PlanMementoflag]->reset();

        if (count == 0)
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

        if(req.arg.isNull())
          return;

        const IMC::Message* m;
        req.arg.get(m);

        const IMC::Message* arg = 0;
        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;

        if (m->getId() != DUNE_IMC_PLANSPECIFICATION)
        {
          onFailure(DTR("no plan specification given"));
          return;
        }

        if(m->getId() == DUNE_IMC_PLANSPECIFICATION)
        {
          const IMC::PlanSpecification* ps;
          req.arg.get(ps);

          if (ps->plan_id != req.plan_id)
          {
            onFailure(DTR("plan id mismatch"));
            return;
          }
          PlanMementoflag = 0;
          arg = static_cast<const IMC::Message*>(ps);
        }
        if(m->getId() == DUNE_IMC_PLANMEMENTO)
        {
          const IMC::PlanSpecification* pm;
          req.arg.get(pm);

          if (pm->plan_id != req.plan_id)
          {
            onFailure(DTR("plan id mismatch"));
            return;
          }
          PlanMementoflag = 1;
          arg = static_cast<const IMC::Message*>(pm);
        }

        if(PlanMementoflag == -1)
          return;
        PlanMementoflag = 1;
        inProgress();
        if(PlanMementoflag == 0)
          storeInDB(arg,PlanMementoflag);

        if(PlanMementoflag == 1)
          storeInDB(arg,PlanMementoflag);
      }

      void
      storeInDB(const IMC::Message* arg, int& PlanMementoflag)
      {
        const IMC::PlanSpecification* plan_spec = 0;
        const IMC::PlanMemento* plan_mem = 0;

        if(PlanMementoflag == 0)
        {
          plan_spec = static_cast<const IMC::PlanSpecification*>(arg);
          PlanInfoParser(plan_spec, m_plan_info, resolveSystemId(plan_spec->getSource()));
        }

        if(PlanMementoflag == 1)
        {
          plan_mem = static_cast<const IMC::PlanMemento*>(arg);
          PlanInfoParser(plan_mem, m_plan_info, resolveSystemId(plan_mem->getSource()));
        }

        Database::Blob plan_data(m_plan_info.plan_size);
        if(PlanMementoflag == 0)
          DataParser(plan_spec, m_plan_info, plan_data);

        if(PlanMementoflag == 1)
          DataParser(plan_mem, m_plan_info, plan_data);

        m_db->beginTransaction();

        int count = 0;
        try
        {
          *m_delete_stmt[PlanMementoflag] << m_plan_info.plan_id;
          m_delete_stmt[PlanMementoflag]->execute(&count);
          m_delete_stmt[PlanMementoflag]->reset();

          *m_insert_stmt[PlanMementoflag] << m_plan_info.plan_id
                                          << m_plan_info.change_time
                                          << m_plan_info.change_sid
                                          << m_plan_info.change_sname
                                          << m_plan_info.md5
                                          << plan_data;
          m_insert_stmt[PlanMementoflag]->execute();
          m_insert_stmt[PlanMementoflag]->reset();
          onChange(m_plan_info.change_time, m_plan_info.change_sid, m_plan_info.change_sname, PlanMementoflag);
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
        }

        m_db->commit();

        m_reply.arg.set(m_plan_info);
        if(PlanMementoflag == 0)
          onSuccess(count ? DTR("OK Plan (updated)") : DTR("OK Plan (new entry)"), PlanMementoflag);

        if(PlanMementoflag == 1)
          onSuccess(count ? DTR("OK Memento (updated)") : DTR("OK Memento (new entry)"), PlanMementoflag);

      }

      void
      checkOperationType(const IMC::PlanDB& req, int& PlanMementoflag)
      {
        if(req.ot == IMC::PlanDB::DBOT_PLAN)
          PlanMementoflag = 0;

        if(req.ot == IMC::PlanDB::DBOT_MEMENTO)
          PlanMementoflag = 1;
      }

      bool
      checkAssociatedMemento(const IMC::PlanDB& req)
      {
        int memento_table = 1;
        *m_get_stmt[memento_table] << req.plan_id;

        bool found = m_get_stmt[memento_table]->execute();

        return found;
      }

      void
      deletePlan(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;
        checkOperationType(req,PlanMementoflag);

        if(PlanMementoflag == -1)
        {
          inf("undefined operation type");
          return;
        }

        inProgress();
        m_db->beginTransaction();

        int count = 0;
        uint16_t sid = req.getSource();
        try
        {
          // If delete plan, also delete memento associated (if exists)
          if(PlanMementoflag == 0 && checkAssociatedMemento(req))
          {
            for(int i = 0; i<TT_Plans; i++)
            {
              *m_delete_stmt[i] << req.plan_id;
              m_delete_stmt[i]->execute(&count);
              if(count>0)
                onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), i);
            }
          }
          else if(PlanMementoflag == 0 && !checkAssociatedMemento(req))
          {
            *m_delete_stmt[PlanMementoflag] << req.plan_id;
            m_delete_stmt[PlanMementoflag]->execute(&count);
            if(count>0)
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), PlanMementoflag);
          }
          // If delete memento, only delete memento
          if(PlanMementoflag == 1)
          {
            *m_delete_stmt[PlanMementoflag] << req.plan_id;
            m_delete_stmt[PlanMementoflag]->execute(&count);
            if(count>0)
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), PlanMementoflag);
          }
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
          onSuccess(DTR("OK"), PlanMementoflag);
      }

      void
      getPlan(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;
        checkOperationType(req,PlanMementoflag);

        if(PlanMementoflag == -1)
        {
          inf("undefined operation type");
          return;
        }

        *m_get_stmt[PlanMementoflag] << req.plan_id;

        bool found = m_get_stmt[PlanMementoflag]->execute();


        if (!found)
        {
          onFailure(DTR("undefined plan"));
        }
        else
        {
          Database::Blob data;
          *m_get_stmt[PlanMementoflag] >> data;

          IMC::PlanSpecification* spec = new IMC::PlanSpecification;
          IMC::PlanMemento* mem = new IMC::PlanMemento;
          if(PlanMementoflag == 0)
          {
            spec->deserializeFields((const uint8_t*)&data[0], data.size());
            m_reply.arg.set(spec);
          }
          if(PlanMementoflag == 1)
          {
            mem->deserializeFields((const uint8_t*)&data[0], data.size());
            m_reply.arg.set(mem);
          }

          onSuccess(DTR("OK"), PlanMementoflag);
          delete spec;
          delete mem;
        }
        m_get_stmt[PlanMementoflag]->reset();
      }

      void
      getPlanInfo(const IMC::PlanDB& req)
      {
        if (req.plan_id.empty())
        {
          onFailure(DTR("undefined plan id"));
          return;
        }

        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;
        checkOperationType(req,PlanMementoflag);

        if(PlanMementoflag == -1)
        {
          inf("undefined operation type");
          return;
        }

        *m_query_stmt[PlanMementoflag] << req.plan_id;

        bool found = m_query_stmt[PlanMementoflag]->execute();

        if (!found)
        {
          onFailure(DTR("undefined plan"));
          return;
        }

        m_plan_info.plan_id = req.plan_id;
        *m_query_stmt[PlanMementoflag] >> m_plan_info.change_time
                                       >> m_plan_info.change_sid
                                       >> m_plan_info.change_sname
                                       >> m_plan_info.md5
                                       >> m_plan_info.plan_size;

        m_reply.arg.set(m_plan_info);

        for(int i = 0; i<TT_Plans; i++)
          m_query_stmt[i]->reset();

        onSuccess(DTR("OK"), PlanMementoflag);
      }

      void
      clearDatabase(const IMC::PlanDB& req)
      {
        inProgress();
        m_db->beginTransaction();

        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;
        checkOperationType(req,PlanMementoflag);

        if(PlanMementoflag == -1)
        {
          inf("undefined operation type");
          return;
        }

        int count;
        uint16_t sid = req.getSource();
        try
        {
          if(checkAssociatedMemento(req))
          {
            for(int i = 0; i<TT_Plans; i++)
            {
              m_delete_all_stmt[i]->execute(&count);
              if(count>0)
                onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), i);
            }
          }
          else if(!checkAssociatedMemento(req))
          {
            int plan_table = 0;
            m_delete_all_stmt[plan_table]->execute(&count);
            if(count>0)
              onChange(Clock::getSinceEpoch(), sid, resolveSystemId(sid), plan_table);
          }
        }
        catch (std::runtime_error& e)
        {
          onFailure(e.what());
          m_db->rollback();
          return;
        }

        m_db->commit();
        onSuccess(DTR("OK"), PlanMementoflag);
      }

      void
      getDatabaseState(const IMC::PlanDB& req)
      {

        // flag = -1 - Plan Invalid
        // flag = 0 - Plan specification parsed
        // flag = 1 - Plan memento parsed
        int PlanMementoflag = -1;
        checkOperationType(req,PlanMementoflag);

        if(PlanMementoflag == -1)
        {
          inf("undefined operation type");
          return;
        }


        (void)req;
        IMC::PlanDBState* state = new IMC::PlanDBState;

        state->plan_size = 0;
        state->plan_count = 0;

        MD5 md5sum;

        IMC::MessageList<PlanDBInformation>* plandbinfo = &state->plans_info;

        while (m_iterator_stmt[PlanMementoflag]->execute())
        {
          IMC::PlanDBInformation* pinfo = new IMC::PlanDBInformation;

          *m_iterator_stmt[PlanMementoflag] >> pinfo->plan_id
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
        m_iterator_stmt[PlanMementoflag]->reset();

        // Finalized MD5 digest
        state->md5.resize(16);
        md5sum.finalize((uint8_t*)&state->md5[0]);

        m_lastchange_query_stmt[PlanMementoflag]->execute();
        *m_lastchange_query_stmt[PlanMementoflag] >> state->change_time
                                                  >> state->change_sid
                                                  >> state->change_sname;
        m_lastchange_query_stmt[PlanMementoflag]->reset();

        m_reply.arg.set(*state);
        onSuccess(DTR("OK"), PlanMementoflag);

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
              else
                debug("%s (%s) -- %s", DTR(c_op_desc[m_reply.op]),
                      m_reply.plan_id.c_str(), desc);
            }
        }
      }

      void
      answer(uint8_t type, const char* desc, int& PlanMementoflag)
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
              if (type == IMC::PlanDB::DBT_SUCCESS && PlanMementoflag == 0)
                inf("%s (%s) -- %s", DTR(c_op_desc[m_reply.op]),
                    m_reply.plan_id.c_str(), desc);
              else if (type == IMC::PlanDB::DBT_SUCCESS && PlanMementoflag == 1)
                inf("%s (%s) -- %s", DTR(c_op_desc[m_reply.op + 7]),
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
      onSuccess(const char* msg)
      {
        answer(IMC::PlanDB::DBT_SUCCESS, msg);
      }

      void
      onSuccess(const char* msg, int& PlanMementoflag )
      {
        answer(IMC::PlanDB::DBT_SUCCESS, msg, PlanMementoflag);
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
