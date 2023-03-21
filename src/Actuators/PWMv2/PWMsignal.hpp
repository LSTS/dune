#ifndef ACTUATORS_PWMSIGNAL_HPP_INCLUDED_
#define ACTUATORS_PWMSIGNAL_HPP_INCLUDED_

// DUNE headers
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace PWMv2
  {
    class PWMsignal: public DUNE::Concurrency::Thread
    {
    public:
      PWMsignal(DUNE::Tasks::Task* task, int gpio, double value):
        m_task(task), m_gpio(gpio), m_value(value)
      {
        m_task->inf("Hello");
      }

      ~PWMsignal(){}
    private:
      DUNE::Tasks::Task* m_task;
      int m_gpio;
      float m_value;
    };
    
  }
  
}

#endif