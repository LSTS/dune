//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Message.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef USER_INTERFACES_LEDS_MESSAGE_HPP_INCLUDED_
#define USER_INTERFACES_LEDS_MESSAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AbstractOutput.hpp"

namespace UserInterfaces
{
  namespace LEDs
  {
    using DUNE_NAMESPACES;

    class Message: public AbstractOutput
    {
    public:
      Message(unsigned nr, Tasks::Task& task):
        m_task(task)
      {
        m_msg.id = nr;
      }

      void
      setValue(bool value)
      {
        if (value)
          m_msg.op = IMC::LedControl::LC_ON;
        else
          m_msg.op = IMC::LedControl::LC_OFF;

        m_task.dispatch(m_msg);
      }

    private:
      IMC::LedControl m_msg;
      Tasks::Task& m_task;
    };
  }
}

#endif
