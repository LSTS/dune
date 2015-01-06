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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_UTILS_STATE_MACHINE_HPP_INCLUDED_
#define DUNE_UTILS_STATE_MACHINE_HPP_INCLUDED_

namespace DUNE
{
  namespace Utils
  {
    //! State machine with very lightweight infrastructure,
    //! and requiring also very little for instantiation.
    //! States are defined merely by instance methods
    //! of an object, that return pointers
    //! to other instance methods ie the state to execute in the next step.
    //!
    //! See http://www.gotw.ca/gotw/057.htm for
    //! the motivation for this type of design.
    //! and programs/test/test_StateMachine.cpp for a mock example of use.
    template <typename Class, typename Data>
    class StateMachine
    {
    public:
      struct STATE;
      typedef STATE (Class::* STATE_)(Data& data);
      typedef void (Class::* OnStateChange)(STATE old_s, STATE new_s, Data& data);

      struct STATE
      {
        inline
        STATE(STATE_ f):
          m_func(f)
        { }

        inline
        operator STATE_()
        {
          return m_func;
        }

        STATE_ m_func;
      };

      //! Constructor.
      //! @param initial initial state.
      //! @param osc optional state change handler.
      inline
      StateMachine(STATE initial, OnStateChange osc = 0):
        m_state(initial),
        m_onStateChange(osc)
      { }

      //! Perform one step in the state machine.
      //! It calls the current state handler.
      //! Then, if the state changes and the state-change handler is defined,
      //! the latter will be invoked.
      //! @param obj object handle.
      //! @param data data handle.
      void
      step(Class& obj, Data& data)
      {
        STATE_ next = (obj.*m_state)(data);

        if (next && m_state != next)
        {
          if (m_onStateChange)
            (obj.*m_onStateChange)(m_state, next, data);
          m_state = next;
        }
      }

      //! Get current state.
      //! @return current state.
      inline STATE
      current(void)
      {
        return m_state;
      }

      //! Reset to given state.
      //! @param s state to set.
      inline void
      reset(STATE s)
      {
        m_state = s;
      }

    private:
      STATE_ m_state; //!< Current state.
      OnStateChange m_onStateChange; //! Handler for change of state.
    };
  }
}

#endif
