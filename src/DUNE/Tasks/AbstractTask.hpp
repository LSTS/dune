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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_ABSTRACT_TASK_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_TASK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AbstractTask;

    class AbstractTask: public Concurrency::Thread
    {
    public:
      AbstractTask(void)
      { }

      //! Destructor.
      virtual
      ~AbstractTask(void)
      { }

      //! Queue a message for later consumption.
      //! @param msg message object.
      virtual void
      receive(const IMC::Message* msg) = 0;

      //! Retrieve task name.
      //! @return task name.
      virtual const char*
      getName(void) const = 0;

      //! Send an human-readable informational message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      inf(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send an human-readable warning message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      war(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send an human-readable error message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      err(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send an human-readable critical error message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      cri(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send an human-readable debug message to all configured
      //! output channels and files. The message will only be
      //! processed if the configured log level is DEBUG_LEVEL_DEBUG
      //! or greater.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      debug(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send a verbose or frequent human-readable debug message to
      //! all configured output channels and files. The message will
      //! only be processed if the configured log level is
      //! DEBUG_LEVEL_TRACE or greater.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      trace(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;

      //! Send a very verbose or frequent human-readable debug message
      //! to all configured output channels and files. The message
      //! will only be processed if the configured log level is
      //! DEBUG_LEVEL_SPEW.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      virtual void
      spew(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3) = 0;
    };
  }
}

#endif
