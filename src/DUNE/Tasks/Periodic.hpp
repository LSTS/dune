//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_PERIODIC_HPP_INCLUDED_
#define DUNE_TASKS_PERIODIC_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <list>
#include <vector>
#include <string>

// Local headers.
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Periodic;

    // Forward declarations
    struct Context;

    //! Periodic task.
    class Periodic: public Task
    {
    public:
      //! Constructor.
      Periodic(const std::string& name, Context& ctx);

      //! Destructor.
      virtual
      ~Periodic(void)
      { }

      //! Set the task frequency programmatically. The frequency of a
      //! task might change when configuration parameters are updated.
      //! @param freq task frequency in Hertz.
      inline void
      setFrequency(double freq)
      {
        m_frequency = freq;
      }

      //! Get frequency of the task. The frequency of a task might
      //! change when configuration parameters are updated.
      //! @return task frequency in Hertz.
      inline double
      getFrequency(void) const
      {
        return m_frequency;
      }

      //! Retrieve the time of the last run (monotonic clock).
      //! @return time of last run.
      inline double
      getRunTime(void) const
      {
        return m_run_time;
      }

      //! Retrieve the number of times the task ran.
      //! @return run count.
      inline unsigned
      getRunCount(void) const
      {
        return m_run_count;
      }

      //! The task to be executed on each cycle.
      virtual void
      task(void) = 0;

    private:
      //! Number of executions thus far.
      unsigned m_run_count;
      //! Time of last run.
      double m_run_time;
      //! Task frequency (Hz).
      double m_frequency;

      //! Task entry point.
      void
      onMain(void);
    };
  }
}

#endif
