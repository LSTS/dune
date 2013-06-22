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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "IridiumMessageDefinitions.hpp"

namespace Transports
{
  namespace Iridium
  {
    using DUNE_NAMESPACES;

    std::map<std::string, IMC::Announce> m_last_announces;

    struct Task: public DUNE::Tasks::Task
    {

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::Announce>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage * m = IridiumMessage::deserialize(msg);

        if (m == NULL)
        {
          war("Error while parsing Iridium message.");
          return;
        }
        IridiumCommand * irCmd = NULL;
        DeviceUpdate * devUpt = NULL;
        std::vector<DevicePosition>::iterator it;

        switch(m->msg_id)
        {
          case (ID_ACTIVATESUB):
            war("Received an Iridium subscription request. WTF?");
            break;
          case (ID_DEACTIVATESUB):
            war("Received an Iridium subscription end request. WTF?");
            break;
          case (ID_IRIDIUMCMD):
            irCmd = dynamic_cast<IridiumCommand *>(m);
            inf("received this command via Iridium: %s.", irCmd->command.c_str());
            break;
          case (ID_DEVICEUPDATE):
            devUpt = dynamic_cast<DeviceUpdate *>(m);
            it = devUpt->positions.begin();
            inf("received Iridium device update with %ld updates.", devUpt->positions.size());
            for (; it != devUpt->positions.end(); it++)
            {
              DevicePosition p = *it;
              IMC::Announce ann;
              ann.services="";
              ann.lat = p.lat;
              ann.lon = p.lon;
              ann.setSource(p.id);
              ann.setTimeStamp(p.time);
              std::stringstream ss;
              ss << "Iridium_" << p.id;
              ann.sys_name = ss.str();
              dispatch(ann);
            }
            break;
          default:
            GenericIridiumMessage * irMsg = dynamic_cast<GenericIridiumMessage *>(m);
            dispatch(irMsg->msg);
            break;
        }
        delete m;
      }

      void
      consume(const IMC::Announce* msg)
      {
        m_last_announces[msg->sys_name] = *msg;
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
