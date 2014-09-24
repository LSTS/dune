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

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace LoggingURR4OS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Program path
      std::string prog;
      //! Output file name
      std::string outfile;
      //! Log directory
      std::string log_dir;
    };

    struct Task: public Tasks::Task
    {
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Program Path", m_args.prog)
        .defaultValue("/opt/lsts/dune/bin/urr4os_format");

        param("Output File Name", m_args.outfile)
        .defaultValue("Bio.csv");

        param("Log Directory", m_args.log_dir)
        .defaultValue("");

        bind<IMC::LoggingControl>(this);
      }

      void
      onResourceInitialization(void)
      {
        // check if file exists
        if (!fileExists(m_args.prog))
        {
          err("program not found");
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IDLE);
          requestDeactivation();
          return;
        }

        requestActivation();

        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      { }

      bool
      fileExists(const std::string& name)
      {
        if (FILE *file = fopen(name.c_str(), "r"))
        {
          fclose(file);
          return true;
        }
        else
        {
          return false;
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (!isActive())
          return;

        if (msg->op != IMC::LoggingControl::COP_STOPPED)
          return;

        std::stringstream cmd;
        cmd << m_args.prog << " "
            << "-s Cyclops7" << " "
            << "-d Rhodamine" << " "
            << "-o " << msg->name << "/" << m_args.outfile << " "
            << m_args.log_dir << "/" << msg->name << "/Data.lsf.gz"
            << " 2>/dev/null";

        inf("running command %s", cmd.str().c_str());

        int rc = std::system(cmd.str().c_str());

        if (rc == 0)
          inf("saved file: %s/%s", msg->name.c_str(), m_args.outfile.c_str());
        else
          err("failed to run the command");
      }

      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
