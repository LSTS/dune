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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    static Concurrency::Mutex s_amask_lock;
    static uint32_t s_amask;
    static uint32_t s_scope_ref;

    Maneuver::Maneuver(const std::string& name, Tasks::Context& ctx):
      Tasks::Task(name, ctx)
    {
      bind<IMC::StopManeuver>(this);
    }

    Maneuver::~Maneuver(void)
    { }

    void
    Maneuver::onActivation(void)
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      onManeuverActivation();
    }

    void
    Maneuver::onDeactivation(void)
    {
      onManeuverDeactivation();
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      debug("disabling");
    }

    void
    Maneuver::updateLoops(const IMC::ControlLoops* cl)
    {
      while (1)
      {
        try
        {
          Concurrency::ScopedMutex l(s_amask_lock);

          if (cl->enable == IMC::ControlLoops::CL_ENABLE)
            s_amask |= cl->mask;
          else
            s_amask &= ~ cl->mask;

          break;
        }
        catch (...)
        {

        }
      }
    }

    uint32_t
    Maneuver::changeScopeRef(void)
    {
      while (1)
      {
        try
        {
          Concurrency::ScopedMutex l(s_amask_lock);

          s_scope_ref += 1;

          return s_scope_ref;
        }
        catch (...)
        {

        }
      }
    }

    void
    Maneuver::consume(const IMC::StopManeuver* sm)
    {
      (void)sm;

      if (isActive())
      {
        requestDeactivation();

        IMC::ManeuverControlState mcs;
        mcs.state = IMC::ManeuverControlState::MCS_STOPPED;
        mcs.info = "stopped";
        mcs.eta = 0;
        dispatch(mcs);
      }
    }

    void
    Maneuver::signalError(const std::string& msg)
    {
      err("%s", msg.c_str());
      requestDeactivation();
      m_mcs.state = IMC::ManeuverControlState::MCS_ERROR;
      m_mcs.info = msg;
      m_mcs.eta = 0;
      dispatch(m_mcs);
    }

    void
    Maneuver::signalInvalidZ(void)
    {
      signalError(DTR("unsupported vertical reference"));
    }

    void
    Maneuver::signalNoAltitude(void)
    {
      signalError(DTR("no valid value for altitude has been received yet,"
                      "maneuver will not proceed"));
    }

    void
    Maneuver::signalCompletion(const std::string& msg)
    {
      debug("%s", msg.c_str());
      requestDeactivation();
      m_mcs.state = IMC::ManeuverControlState::MCS_DONE;
      m_mcs.info = msg;
      m_mcs.eta = 0;
      dispatch(m_mcs);
    }

    void
    Maneuver::signalProgress(uint16_t time_left, const std::string& msg)
    {
      m_mcs.state = IMC::ManeuverControlState::MCS_EXECUTING;
      m_mcs.info = msg;
      m_mcs.eta = time_left;
      dispatch(m_mcs);
    }

    void
    Maneuver::setControl(uint32_t mask)
    {
      if (mask == s_amask)
        return;

      IMC::ControlLoops cloops;

      // Stop everything
      cloops.enable = IMC::ControlLoops::CL_DISABLE;
      cloops.mask = IMC::CL_ALL;
      cloops.scope_ref = changeScopeRef();
      dispatch(cloops);
      updateLoops(&cloops);

      if (mask)
      {
        // Enable controllers.
        cloops.enable = IMC::ControlLoops::CL_ENABLE;
        cloops.mask = mask;
        cloops.scope_ref = changeScopeRef();
        dispatch(cloops);
        updateLoops(&cloops);
      }
    }

    void
    Maneuver::onMain(void)
    {
      dispatch(m_rm);

      while (!stopping())
      {
        if (isActive())
          onStateReport();

        waitForMessages(1.0);
      }
    }
  }
}
