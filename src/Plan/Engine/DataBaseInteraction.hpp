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
#include <DUNE/Utils.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/Time.hpp>

namespace Plan
{
  namespace Engine
  {
    //! Class to handle Database interactions
    class DataBaseInteraction
    {
    public:
      //! Constructor
      DataBaseInteraction(DUNE::Tasks::Task* task, double timeout):
        m_task(task),
        m_booted(false),
        m_id(0),
        m_timeout(timeout),
        m_valid_mem(false)
      { }

      ~DataBaseInteraction(void)
      { }

      //! Consuming PlanDB
      //! @param[in] pdb pointer to PlanDB message
      void
      onPlanDB(const IMC::PlanDB* pdb)
      {
        if ((pdb->op == IMC::PlanDB::DBOP_BOOT) &&
            (pdb->type == IMC::PlanDB::DBT_SUCCESS))
        {
          m_booted = true;
          return;
        }

        if (pdb->op == IMC::PlanDB::DBT_REQUEST)
          return;

        if ((pdb->getDestination() != m_task->getSystemId()) ||
            (pdb->getDestinationEntity() != m_task->getEntityId()))
          return;

        if (pdb->op == IMC::PlanDB::DBOP_GET)
        {
          handleGetReply(pdb);
          return;
        }

        // other requests just print error or success
        if ((pdb->type == IMC::PlanDB::DBT_SUCCESS) ||
            (pdb->type == IMC::PlanDB::DBT_IN_PROGRESS))
          m_task->inf(DTR("successful request to PlanDB: %s"), pdb->object_id.c_str());
        else
          m_task->err(DTR("got error on request to: %s"), pdb->object_id.c_str());
      }

      //! PlanDB has booted
      //! @return true if it has booted, false otherwise
      bool
      hasBooted(void)
      {
        return m_booted;
      }

      //! Check if the plan or memento must be fetched from DB
      //! @param[in] pc pointer to plancontrol message
      //! @return true if it must be fetched
      bool
      mustFetchFromDB(const IMC::PlanControl* pc)
      {
        int fetch_type = -1;
        std::string object_id = "";
        m_valid_mem = false;

        if (pc->arg.isNull())
        {
          object_id = pc->object_id;
          fetch_type = convertDataType(pc->dt);
        }
        else
        {
          switch (pc->dt)
          {
            case IMC::PlanControl::PCD_MEMENTO:
              if (pc->arg.get()->getId() != DUNE_IMC_PLANMEMENTO)
                break;

              m_pmem = *static_cast<const IMC::PlanMemento*>(pc->arg.get());
              object_id = m_pmem.plan_id;
              fetch_type = IMC::PlanDB::DBDT_PLAN;
              m_valid_mem = true;
              break;
            case IMC::PlanControl::PCD_PLAN:
            case IMC::PlanControl::PCD_MANEUVER:
              // fetch nothing
              break;
            case IMC::PlanControl::PCD_NONE:
            default:
              // assume plan is intended to be fetched
              object_id = pc->object_id;
              fetch_type = IMC::PlanDB::DBDT_PLAN;
              break;
          }
        }

        if (fetch_type >= 0)
          getFromDB(fetch_type, object_id);

        return (fetch_type >= 0);
      }

      //! Update DatabaseInteraction
      //! @return false if nothing new to report
      bool
      checkReplies(void)
      {
        switch (m_req_get.state)
        {
          case RS_SENT:
            if (Time::Clock::get() - m_req_get.time > m_timeout)
            {
              m_req_get.state = RS_TIMEOUT;
              return checkReplies();
            }

            return false;
          case RS_TIMEOUT:
          case RS_REPLIED:
            return true;
          default:
            return false;
        }
      }

      //! Check if the reply means a failed request
      //! @param[out] info message string for error, if any
      //! @return true if failed, false otherwise
      bool
      requestFailed(std::string& info)
      {
        if (requestTimeout())
        {
          info = DTR("database request timed out");
          return true;
        }

        const IMC::PlanDB* req = getReply();

        if (req->type == IMC::PlanDB::DBT_FAILURE)
        {
          info = DTR("database error: ") + req->info;
          return true;
        }
        else if (req->arg.isNull())
        {
          info = DTR("database error: empty argument");
          return true;
        }
        else if (((req->dt == IMC::PlanDB::DBDT_MEMENTO) &&
                  (m_req_get.pdb.dt != IMC::PlanDB::DBDT_MEMENTO)) ||
                 ((req->dt == IMC::PlanDB::DBDT_PLAN) &&
                  (m_req_get.pdb.dt != IMC::PlanDB::DBDT_PLAN)))
        {
          info = DTR("database error: unmatched argument");
          return true;
        }
        else
        {
          const IMC::Message* msg = req->arg.get();

          if (((req->dt == IMC::PlanDB::DBDT_PLAN) &&
               (msg->getId() != DUNE_IMC_PLANSPECIFICATION)) ||
              ((req->dt == IMC::PlanDB::DBDT_MEMENTO) &&
               (msg->getId() != DUNE_IMC_PLANMEMENTO)))
          {
            info = DTR("database error: invalid argument");
            return true;
          }
        }

        return false;
      }

      //! Send plan or memento to DB
      //! @param[in] dtype data type to store
      //! @param[in] id string id of the data type
      //! @param[in] msg pointer to message
      void
      sendToDB(unsigned dtype, const std::string& id, const IMC::Message* msg)
      {
        IMC::PlanDB plandb;
        plandb.type = IMC::PlanDB::DBT_REQUEST;
        plandb.dt = dtype;
        plandb.op = IMC::PlanDB::DBOP_SET;
        plandb.request_id = ++m_id;
        plandb.object_id = id;
        plandb.arg.set(*msg);
        m_task->dispatch(plandb);
      }

      //! Get a plan or memento from the database
      //! @param[in] dtype data type to get from DB
      //! @param[in] id name of the plan
      void
      getFromDB(unsigned dtype, const std::string& id)
      {
        IMC::PlanDB plandb;
        plandb.type = IMC::PlanDB::DBT_REQUEST;
        plandb.dt = dtype;
        plandb.op = IMC::PlanDB::DBOP_GET;
        plandb.request_id = ++m_id;
        plandb.object_id = id;
        m_task->dispatch(plandb);

        m_req_get.state = RS_SENT;
        m_req_get.id = plandb.request_id;
        m_req_get.time = Time::Clock::get();
      }

      //! Read GET request reply
      //! @return pointer to PlanDB message
      const IMC::PlanDB*
      getReply(void)
      {
        m_req_get.state = RS_NONE;
        return &m_req_get.pdb;
      }

      //! Check if data is ready
      //! @return true if data is ready, false otherwise
      bool
      dataIsReady(void)
      {
        const IMC::PlanDB* req = getReply();

        if (req->dt == IMC::PlanDB::DBDT_MEMENTO)
        {
          m_pmem = *static_cast<const IMC::PlanMemento*>(req->arg.get());
          m_valid_mem = true;
          getFromDB(IMC::PlanDB::DBDT_PLAN, m_pmem.plan_id);
          return false;
        }
        else if (req->dt == IMC::PlanDB::DBDT_PLAN)
        {
          m_spec = *static_cast<const IMC::PlanSpecification*>(req->arg.get());
          return true;
        }

        return false;
      }

      //! Get a pointer to plan specification
      //! @return pointer to PlanSpecification message
      const IMC::PlanSpecification*
      getPlanSpecification(void)
      {
        return &m_spec;
      }

      //! Get a pointer to plan memento if valid
      //! @return pointer to PlanMemento message
      const IMC::PlanMemento*
      getPlanMemento(void)
      {
        if (m_valid_mem)
          return &m_pmem;
        else
          return NULL;
      }

    private:
      enum RequestState
      {
        //! None
        RS_NONE = 0,
        //! Sent to db
        RS_SENT,
        //! Has been replied to
        RS_REPLIED,
        //! Reply timeout
        RS_TIMEOUT
      };

      struct Request
      {
        //! State of the request
        RequestState state;
        //! Request id
        uint16_t id;
        //! Request time
        double time;
        //! PlanDB message
        IMC::PlanDB pdb;

        Request(void):
          state(RS_NONE)
        { }
      };

      //! Check if a reply timed out
      //! @return true if it has timed out
      bool
      requestTimeout(void)
      {
        if (m_req_get.state == RS_TIMEOUT)
        {
          m_req_get.state = RS_NONE;
          return true;
        }

        return false;
      }

      //! Handle the reply of type GET
      //! @param[in] pdb pointer to PlanDB message
      void
      handleGetReply(const IMC::PlanDB* pdb)
      {
        if (pdb->request_id != m_req_get.id)
        {
          m_task->debug("invalid id");
          return;
        }

        if (m_req_get.state != RS_SENT)
        {
          m_task->debug("not waiting for reply");
          return;
        }

        m_req_get.pdb = *pdb;
        m_req_get.state = RS_REPLIED;
      }

      //! Convert PlanControl data type to PlanDB data type (-1 if unmatched)
      int
      convertDataType(uint8_t pcdt)
      {
        switch (pcdt)
        {
          case IMC::PlanControl::PCD_PLAN:
            return IMC::PlanDB::DBDT_PLAN;
          case IMC::PlanControl::PCD_MEMENTO:
            return IMC::PlanDB::DBDT_MEMENTO;
          default:
            return -1;
        }
      }

      //! Pointer to task
      DUNE::Tasks::Task* m_task;
      //! Request of type GET from the DB
      Request m_req_get;
      //! DB has booted
      bool m_booted;
      //! Request id
      unsigned m_id;
      //! Request timeout
      double m_timeout;
      //! True if memento is valid
      bool m_valid_mem;
      //! Received plan specification
      IMC::PlanSpecification m_spec;
      //! Received plan memento
      IMC::PlanMemento m_pmem;
    };
  }
}

#endif
