//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <cstring>
#include <string>
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local header
#include "CaptureImage.hpp"

namespace Vision
{
  namespace Pioneer
  {
    using DUNE_NAMESPACES;

    static const std::string c_default_device_url = "rtsp://192.168.1.101:8554/test";

    //! %Task arguments.
    struct Arguments
    {
      //! Master Name.
      std::string system_name;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters
      Arguments m_args;
      //! Capture video frames of pioneer
      CaptureImage* m_cap;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);
      }

      void
      onUpdateParameters(void)
      {
      }

      void
      onResourceInitialization(void)
      {
        m_cap = new CaptureImage(this, c_default_device_url);
        m_cap->start();
      }

      void
      onResourceRelease(void)
      {
      }

      void
      onRequestActivation(void)
      {
        inf("received activation request");
        activate();
      }

      void
      onRequestDeactivation(void)
      {
        inf("received deactivation request");
        deactivate();
      }

      void
      onActivation(void)
      {
        inf("on Activation");
      }

      void
      onDeactivation(void)
      {
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.1);
        }
      }
    };
  }
}

DUNE_TASK
