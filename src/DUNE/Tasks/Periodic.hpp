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
