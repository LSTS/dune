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

#ifndef DUNE_TASKS_CREATOR_HPP_INCLUDED_
#define DUNE_TASKS_CREATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/System/DynamicLoader.hpp>

namespace DUNE
{
  namespace Tasks
  {
    typedef DUNE::Tasks::Task* (*task_creator_t)(const std::string&, DUNE::Tasks::Context&);

    struct Creator
    {
      Creator(void):
        m_creator(0)
      { }

      Creator(const task_creator_t& c):
        m_creator(c)
      { }

      void
      fromDDT(const char* file)
      {
        try
        {
          m_loader.load(file);
          m_creator = castUnsafe<task_creator_t, void*>(m_loader.getSymbol("dune_task_create"));
        }
        catch (System::Error& e)
        {
          DUNE_ERR("Task Creator", e.what());
        }
      }

      void
      fromCreatorPointer(const task_creator_t& ptr)
      {
        m_creator = ptr;
      }

      task_creator_t
      getCreatorPointer(void)
      {
        return m_creator;
      }

      private:
        task_creator_t m_creator;
        DUNE::System::DynamicLoader m_loader;
    };
  }
}

#endif
