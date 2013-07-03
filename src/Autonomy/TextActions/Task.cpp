//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  //! %TREX is responsible to interact with MBARI's T-REX
  namespace TextActions
  {
    using DUNE_NAMESPACES;

    struct Task : public DUNE::Tasks::Task
    {

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::TextMessage>(this);
      }

      void
      handlePlanCommand(std::string origin, std::string args)
      {
        // Plan control message!
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        char plan_id[32];
        sscanf(args.c_str(), "%s", plan_id);
        pc.plan_id = plan_id;

        inf("%s (%s = %s)", DTR("Received SMS request to start plan"), DTR("id"), sanitize(pc.plan_id).c_str());

        // Send the plan start request
        dispatch(pc);
      }

      void
      handleAbortCommand(std::string origin, std::string args)
      {
        err("Received abort via text from %s", origin.c_str());
        IMC::Abort abort;
        dispatch(abort);
      }

      void
      handlePlanGeneratorCommand(std::string origin, std::string args)
      {
        IMC::PlanGeneration pg;
        pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
        pg.op = IMC::PlanGeneration::OP_REQUEST;
        // use only the last part of the message
        char plan_id[32];
        sscanf(args.c_str(), "%s", plan_id);
        pg.plan_id = plan_id;
        dispatch(pg);
      }

      void
      consume(const IMC::TextMessage * msg)
      {
        char cmd[100], args[500];
        spew("Processing text message from %s: \"%s\"", msg->origin.c_str(), sanitize(msg->text).c_str());

        sscanf(msg->text.c_str(), cmd, args);

        std::transform(cmd, cmd+strlen(cmd), cmd, ::tolower);

        if (cmd == "plan")
        {
          handlePlanCommand(msg->origin, args);
        }
        else if (cmd == "abort")
        {
          handleAbortCommand(msg->origin, args);
        }
        else if (cmd == "gen")
        {
          handlePlanGeneratorCommand(msg->origin, args);
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
