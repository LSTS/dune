//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                      *
//***************************************************************************

// ISO C++ headers.
#include <cstdint>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "CoMapper.hpp"

namespace Autonomy
{
  //! CoMap task is reponsible for implementing CoMap API
  //! Know more in https://comap.pt
  namespace CoMap
  {
    using DUNE_NAMESPACES;

    //! %Task arguments
    struct Arguments
    {
      double nominal_speed;
      bool has_klein;
      bool has_837B;
    };
    
    struct Task : public DUNE::Tasks::Task
    {

      Arguments m_args;
      CoMapper m_mapper;
      IMC::WorldModel* m_world_model;
      bool m_holding;

      Task(const std::string& name, Tasks::Context& ctx) : DUNE::Tasks::Task(name, ctx), 
      m_mapper(1.0), 
      m_world_model(nullptr),
      m_holding(true)
      {
        param("Nominal Speed", m_args.nominal_speed)
        .defaultValue("1.25")
        .description("Speed to be used for moving the vehicle");

        bind<IMC::SynchAdmin>(this);
        bind<IMC::TaskAdim>(this);
        bind<IMC::WorldModel>(this);
      }

      void
      onUpdateParameters() override
      {
        m_mapper.setMovingSpeed(m_args.nominal_speed);        
        m_mapper.clearSensorCapabilities();
        if (m_args.has_837B)
          m_mapper.addDeltaTCapabilities();
        if (m_args.has_klein)
          m_mapper.addKleinCapabilities();

        onPublishCapabilities();       
      }

      /**
       * @brief Commands sent by the C2 for starting / stopping execution
       *
       * @param msg The command
       */
      void
      consume(const IMC::SynchAdmin* msg)
      {
        debug("Received SynchAdmin message.");
        switch (msg->op)
        {
          case SynchAdmin::SYNCOP_HOLD:
            m_holding = true;
            break;
          case SynchAdmin::SYNCOP_INTERRUPT:
            m_holding = true;
            break;
          case SynchAdmin::SYNCOP_RESUME:
            m_holding = false;
            break;
          default:
            war("SynchAdmin operation not implemented: %d", msg->op);
            break;
        }
      }

      /**
       * @brief Commands sent by the C2 to assign / unassign tasks
       * and also to request execution status
       *
       * @param msg The command sent by the C2
       */
      void
      consume(const IMC::TaskAdim* msg)
      {
        if (msg->getDestination() != getSystemId())
        {
          debug("Received TaskAdmin message for another system (%d).", msg->getDestination());
          return;
        }

        IMC::TaskAdim response;
        response.tid = msg->tid;

        switch (msg->op)
        {
          case IMC::TaskAdim::TAOP_ASSIGN:
            if (onAssign(msg->arg.get()))
              response.op = IMC::TaskAdim::TAOP_ACCEPT;
            else
              response.op = IMC::TaskAdim::TAOP_REJECT;
            reply(msg, response);
            break;
          case IMC::TaskAdim::TAOP_UNASSIGN:
            onUnassign(msg->arg.get());
            response.op = IMC::TaskAdim::TAOP_ACCEPT;
            reply(msg, response);
            break;
          case IMC::TaskAdim::TAOP_STATUS_REQUEST:
            onStatusRequest();
          default:
            break;
        }
      }

      void
      consume(const IMC::WorldModel* msg)
      {
        debug("Received WorldModel message.");
        Memory::clear(m_world_model);
        m_world_model = msg->clone();
        m_mapper.setWorldModel(msg);        
      }

      /**
       * @brief Send a reply back to a message sender
       *
       * @param original The original message (received)
       * @param reply The reply to send, destination will be filled in
       */
      void
      reply(const IMC::Message* original, IMC::Message& reply)
      {
        reply.setDestination(original->getSource());
        reply.setDestinationEntity(original->getSourceEntity());
        dispatch(reply);
      }

      /**
       * @brief TaskAssignment, sent by the C2
       *
       * @param t The task being assigned to this vehicle
       * @return true In case the task is feasible (accepted)
       * @return false In case the task cannot be accepted.
       */
      bool
      onAssign(const IMC::TaskAdminArgs* t)
      {
        debug("onAssign()");
        if (t->getId() == IMC::SurveyTask::getIdStatic())
          return m_mapper.addSurveyTask((IMC::SurveyTask*)t);
        else if (t->getId() == IMC::MoveTask::getIdStatic())
          return m_mapper.addMoveTask((IMC::MoveTask*)t);
        else
        {
          war("Task type not understood: %s", t->getName());
          return false;
        }
      }

      /**
       * @brief Recall the assignment of a task
       *
       * @param task The task being unassigned
       * @return true If the task belonged to this vehicle and got removed
       * @return false If the task was not part of this vehicle's tasks
       */
      bool
      onUnassign(const IMC::TaskAdminArgs* task)
      {
        int id = getTaskId(task);
        inf("onUnassign()");
        return true;
      }

      void
      onStatusRequest()
      {
        inf("onStatusRequest()");
      }

      void
      onPublishCapabilities()
      {
        inf("Publish Capabilities");
        IMC::VehicleCapabilities capabilities = m_mapper.generateCapabilities();
        dispatch(capabilities);
      }

      void
      onMain()
      {
      }
    };
  }
}

DUNE_TASK
