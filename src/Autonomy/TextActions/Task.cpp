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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  namespace TextActions
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Task(const std::string & name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::TextMessage>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      handlePlanCommand(const std::string& origin, const std::string& args)
      {
        // Plan control message!
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        char plan_id[32];
        std::sscanf(args.c_str(), "%s", plan_id);
        pc.plan_id = plan_id;

        inf(DTR("received SMS request to start plan '%s'"),
            sanitize(pc.plan_id).c_str());

        // Send the plan start request
        dispatch(pc);
        (void)origin;
      }

      void
      handleAbortCommand(const std::string& origin, const std::string& args)
      {
        err(DTR("got abort request from '%s'"), origin.c_str());
        IMC::Abort abort;
        abort.setDestination(getSystemId());
        dispatch(abort);
        (void)args;
      }

      void
      handlePlanGeneratorCommand(const std::string& origin, const std::string& args)
      {
        IMC::PlanGeneration pg;
        std::istringstream iss(args);
        std::string temp, tlist;
        getline(iss, temp, ' ');
        if (iss.str().size() > temp.size())
          tlist = std::string(iss.str(), temp.size()+1, iss.str().size() - temp.size()+1);

        //TupleList tlist(msg->params, "=", ";", true);
        //TupleList t(tlist, "=", ",", true);

        pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
        pg.op = IMC::PlanGeneration::OP_REQUEST;
        pg.params = tlist;
        pg.plan_id = temp;
        dispatch(pg);
        (void)origin;
      }

      void
      consume(const IMC::TextMessage* msg)
      {
        spew("processing text message from %s: \"%s\"", msg->origin.c_str(), sanitize(msg->text).c_str());
        std::istringstream iss(msg->text);
        std::string cmd, args = "";
        getline(iss, cmd, ' ');
        if (iss.str().size() > cmd.size())
          args = std::string(iss.str(), cmd.size()+1, iss.str().size() - cmd.size()+1);

        //std::transform(cmd, cmd, cmd, ::tolower);

        spew("command is %s, args are %s", cmd.c_str(), args.c_str());

        if (cmd == "plan")
        {
          handlePlanCommand(msg->origin, args);
        }
        else if (cmd == "abort")
        {
          handleAbortCommand(msg->origin, args);
        }
        else
        {
          handlePlanGeneratorCommand(msg->origin, msg->text);
        }
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
