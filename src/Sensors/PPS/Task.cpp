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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace PPS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // PPS device.
      std::string pps_dev;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;
      // PPS object.
      Hardware::PPS* m_pps;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pps(NULL)
      {
        param("PPS Device", m_args.pps_dev)
        .defaultValue("")
        .description("Platform specific PPS device");

        bind<IMC::PulseDetectionControl>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_pps = new Hardware::PPS(m_args.pps_dev);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_pps);
      }

      void
      consume(const IMC::PulseDetectionControl* msg)
      {
        if (msg->op == IMC::PulseDetectionControl::POP_ON)
          requestActivation();
        else
          requestDeactivation();
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!isActive())
          {
            waitForMessages(0.1);
            continue;
          }
          else
            consumeMessages();

          int64_t time = m_pps->fetch(0.5);
          if (time < 0)
            continue;

          IMC::Pulse msg;
          msg.setTimeStamp(time / 1000000000.0);
          dispatch(msg, DF_KEEP_TIME);
        }
      }
    };
  }
}

DUNE_TASK
