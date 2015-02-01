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
// Author: Kristian Klausen                                                 *
//***************************************************************************

#ifndef DUNE_CONTROL_BASIC_UAV_AUTOPILOT_HPP_INCLUDED_
#define DUNE_CONTROL_BASIC_UAV_AUTOPILOT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Config.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Utils.hpp>

namespace DUNE
{
  namespace Control
  {

    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicUAVAutopilot;

    class BasicUAVAutopilot: public Tasks::Task
    {
    public:
      //! Constructor
      BasicUAVAutopilot(const std::string& name, Tasks::Context& ctx,
          const uint32_t controllable_loops, const uint32_t required_loops);

      //! Destructor.
      virtual
      ~BasicUAVAutopilot(void);

      virtual void
      onResourceInitialization(void);

      virtual void
      onResourceAcquisition(void)
      { }

      virtual void
      onResourceRelease(void)
      { }

      //! Reset to initial values
      virtual void
      reset(void);

      //! To be used by derived class when estimated state is received
      virtual void
      onEstimatedState(const double timestep, const IMC::EstimatedState* msg) = 0;

      void
      consume(const IMC::EstimatedState* msg);

      void
      consume(const IMC::ControlLoops* msg);

      void
      onMain(void);
    protected:

      //! On autopilot activation
      //! Does nothing by default
      virtual void
      onAutopilotActivation(void)
      { }

      //! On autopilot deactivation
      //! Does nothing by default
      virtual void
      onAutopilotDeactivation(void)
      { }

      //! On deactivation leave error or active entity state
      //! Method from parent class
      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        reset();
        onAutopilotDeactivation();
      }

      //! On activation enter active entity state
      //! Method from parent class
      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        reset();
        onAutopilotActivation();
      }

    private:
      //! Active loops.
      uint32_t m_aloops;
      //! Time of last Estimated State (Integration timer).
      Time::Delta m_last_estate;
      //! Last EstimatedState
      IMC::EstimatedState m_estate;
      //! Controllable loops in this controller
      const uint32_t m_controllable_loops;
      //! Required loops for this controller
      const uint32_t m_required_loops;
      //! Control loops last reference
      uint32_t m_scope_ref;
    };
  }
}

#endif
