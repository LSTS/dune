//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_CONSUMER_HPP_INCLUDED_
#define DUNE_TASKS_CONSUMER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks/AbstractConsumer.hpp>

namespace DUNE
{
  namespace Tasks
  {
    template <typename T, typename M>
    class Consumer: public AbstractConsumer
    {
    public:
      typedef void (T::* Routine)(const M*);

      //! Constructor.
      Consumer(T& o, Routine f):
        m_obj(o),
        m_fun(f)
      { }

      void
      consume(const IMC::Message* msg)
      {
        ((m_obj).*(m_fun))(reinterpret_cast<const M*>(msg));
      }

      ~Consumer(void)
      { }

    private:
      T& m_obj;
      Routine m_fun;
    };
  }
}

#endif
