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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MANEUVERS_ABSTRACT_LOITER_HPP_INCLUDED_
#define DUNE_MANEUVERS_ABSTRACT_LOITER_HPP_INCLUDED_

#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/IMC.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AbstractLoiter;

    //! Abstract Loiter behavior
    class AbstractLoiter
    {
    public:
      //! Constructor
      //! @param[in] task pointer to Maneuver task.
      AbstractLoiter(Maneuvers::Maneuver* task):
        m_task(task)
      { }

      //! Destructor
      virtual
      ~AbstractLoiter(void)
      { }

      //! On PathControlState message.
      //! @param[in] pcs pointer to PathControlState message
      virtual void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        (void)pcs;
      }

      //! On EstimatedState message.
      //! @param[in] msg pointer to EstimatedState message
      virtual void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        (void)msg;
      }

      //! Are we loiterting already?
      //! @return true if loitering, false otherwise.
      virtual bool
      isLoitering(void) const = 0;

    protected:
      //! Pointer to task
      Maneuvers::Maneuver* m_task;
    };
  }
}

#endif
