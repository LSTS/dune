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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_MUXED_MANEUVER_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_MUXED_MANEUVER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "AbstractMux.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    //! Multiplexed maneuver
    template <typename Msg, typename Arg>
    class MuxedManeuver: public AbstractMux
    {
    public:
      //! Constructor
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args pointer to arguments
      MuxedManeuver(Maneuvers::Maneuver* task, Arg* args):
        AbstractMux(task),
        m_args(args)
      { }

      //! Constructor
      //! @param[in] task pointer to Maneuver task
      MuxedManeuver(Maneuvers::Maneuver* task):
        AbstractMux(task)
      { }

      //! Destructor
      virtual
      ~MuxedManeuver(void)
      { }

      //! Start maneuver function
      //! @param[in] maneuver rows maneuver message
      void
      start(const IMC::Maneuver* maneuver)
      {
        onStart(static_cast<const Msg*>(maneuver));
      }

      //! Maneuver start
      virtual void
      onStart(const Msg* maneuver) = 0;

    protected:
      //! Pointer to arguments
      Arg* m_args;
    };
  }
}

#endif
