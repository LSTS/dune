//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luis Venancio (adapted from BottomTracker)                       *
//***************************************************************************

// ISO C++ 98 headers.
// #include <limits>
// #include <cmath>

// DUNE headers.
#include <DUNE/Control/ClimbMonitor.hpp>
// #include <DUNE/Math/Angles.hpp>
// #include <DUNE/Memory.hpp>
// #include <DUNE/Utils/String.hpp>
// #include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Tasks/Task.hpp>

//! Depth hysteresis.
static const float c_depth_hyst = 0.5;
//! Altitude hysteresis.
static const float c_alt_hyst = 0.2;

//! State to string for debug messages
static const std::string c_str_states[] = {DTR_RT("Ascending"),
                                           DTR_RT("Descending")};

//! Climb monitor name
static const std::string c_cm_name = DTR_RT("ClimbMonitor");

namespace DUNE
{
  namespace Control
  {
    ClimbMonitor::ClimbMonitor(const Arguments* args):
      m_args(args),
      m_active(false)
    {
      reset();
    }

    ClimbMonitor::~ClimbMonitor(void)
    {
    }

    void
    ClimbMonitor::reset(void)
    {
      m_z_ref.clear();
      m_estate.clear();
      m_got_data = false;
    }

    void
    ClimbMonitor::activate(void)
    {
      m_active = true;
      reset();

      debug("enabling");
    }

    void
    ClimbMonitor::deactivate(void)
    {
      m_active = false;
      debug("disabling");
    }

    void
    ClimbMonitor::onDesiredZ(const IMC::DesiredZ* msg)
    {
      if (!m_active)
        return;
      
      m_z_ref = *msg;
    }

    void
    ClimbMonitor::onEstimatedState(const IMC::EstimatedState* msg)
    {
      if (!m_active)
        return;

      m_estate = *msg;
    }

    void
    ClimbMonitor::updateStateMachine(void)
    {
      if (!m_active)
        return;

      if (!m_got_data)
      {
        // Check data
        return;
      }

      m_got_data = true;

      // Run state machine
      switch (m_cstate)
      {
        case SM_DESCENDING:
          onIdle();
          break;
        case SM_ASCENDING:
          onTracking();
          break;
      }
    }

    void
    ClimbMonitor::info(const std::string& msg) const
    {
      m_args->task->inf("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                        DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }

    void
    ClimbMonitor::debug(const std::string& msg) const
    {
      m_args->task->debug("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                          DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }

    void
    ClimbMonitor::war(const std::string& msg) const
    {
      m_args->task->war("[%s.%s] >> %s", DTR(c_cm_name.c_str()),
                        DTR(c_str_states[m_cstate].c_str()), msg.c_str());
    }
  }
}
