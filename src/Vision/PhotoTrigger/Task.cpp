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
// Author: João Fortuna                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace PhotoTrigger
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Trigger name.
//      std::string trigger_name;
      //! Shooting Period.
      float period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

//        param("Trigger Name", m_args.trigger_name)
//        .description("Name of the trigger channel");

        param("Shooting Period", m_args.period)
        .defaultValue("1.0")
        .units(Units::Second)
        .description("Period for shots");
      }

      void
      sendPulse(void)
      {
        IMC::PowerChannelControl pcc;
//        pcc.name = m_args.trigger_name;
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc);
        Delay::wait(0.10);
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(pcc);
        Delay::wait(m_args.period);
        inf("Triggered");
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            consumeMessages();
            sendPulse();
          }
          else
          {
            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
