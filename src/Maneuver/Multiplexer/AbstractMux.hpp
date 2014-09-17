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

#ifndef MANEUVER_MULTIPLEXER_ABSTRACT_MUX_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_ABSTRACT_MUX_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    //! Abstract Multiplexed maneuver
    class AbstractMux
    {
    public:
      //! Constructor
      //! @param[in] task pointer to Maneuver task
      AbstractMux(Maneuvers::Maneuver* task):
        m_task(task)
      { }

      //! Destructor
      virtual
      ~AbstractMux(void)
      { }

      //! Start function
      virtual void
      start(const IMC::Maneuver* maneuver) = 0;

      //! On PathControlState message
      virtual void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        (void)pcs;
      }

      //! On EstimatedState message
      virtual void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        (void)msg;
      }

      //! On StateReport function
      virtual void
      onStateReport(void)
      { }

      //! On VehicleMedium message
      virtual void
      onVehicleMedium(const IMC::VehicleMedium* msg)
      {
        (void)msg;
      }

      //! On GpsFix message
      virtual void
      onGpsFix(const IMC::GpsFix* msg)
      {
        (void)msg;
      }

    protected:
      //! Pointer to task
      Maneuvers::Maneuver* m_task;
    };
  }
}

#endif
