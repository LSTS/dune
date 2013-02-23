//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
