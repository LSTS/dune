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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Rsync
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Source system
      std::string src_sys;
      //! Source module
      std::string src_mod;
      //! Destination dir
      std::string dst_dir;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Already synced
      bool synced;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        synced(false)
      {
        param("System", m_args.src_sys)
        .description("Source system name");

        param("Module", m_args.src_mod)
        .description("Source module name");

        param("Destination", m_args.dst_dir)
        .description("Destination path");

        bind<IMC::Announce>(this);
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }


      void
      consume(const IMC::Announce* msg)
      {
        if(strcmp(msg->sys_name.c_str(), m_args.src_sys.c_str()) || synced)
          return;

        std::vector<std::string> services;
        String::split(msg->services, ";", services);

        for(int i = 0; i < (int)services.size(); i++)
        {
          if(services[i].find("udp") != std::string::npos)
          {
            int start_pos = services[i].find("//") + 2;
            int length = services[i].find(":", start_pos) - start_pos;
            std::string address = services[i].substr(start_pos, length);
            rsync(address);
          }
        }
      }

      void
      rsync(std::string address)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCING);
        std::string command = "rsync -az root@" + address + "::" + m_args.src_mod + " " + m_args.dst_dir + " < /dev/null > /dev/null 2>&1";
        system(command.c_str());
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
        synced = true;
        debug("Synced module %s", m_args.src_mod.c_str());
      }

      //! Main loop.
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
