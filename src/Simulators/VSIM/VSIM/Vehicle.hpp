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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_VEHICLE_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_VEHICLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>

// VSIM headers.
#include <VSIM/Engine.hpp>
#include <VSIM/Force.hpp>
#include <VSIM/Object.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! %Vehicle general properties.
    class Vehicle: public virtual Object
    {
    public:
      //! Constructor.
      Vehicle(void);

      //! Destructor
      virtual
      ~Vehicle(void);

      //! Add a force.
      //! @param[in] force new force.
      void
      addForce(Force* force);

      //! Add Engine
      //! @param[in] engine new engine.
      void
      addEngine(Engine* engine);

      //! Applies vehicle commands forces.
      void
      applyControlForces(void);

      //! Applies all vehicle's forces.
      void
      applyForces(void);

      //! Updates actuation.
      //! @param[in] id actuation id.
      //! @param[in] act new actuation value.
      void
      updateact(unsigned int id, double act);

      //! Updates a engine's actuation.
      //! @param[in] id engine id.
      //! @param[in] act new engine actuation value.
      void
      updateEngine(unsigned int id, double act);

      //! Set added mass coefficient (for UUVs).
      //! @param[in] coefs added mass matrix coefficients.
      virtual void
      setAddedMassCoef(double coefs[6]);

      //! Set body lift matrix (for UUVs).
      //! @param[in] coefs body lift matrix coefficients.
      virtual void
      setBodyLiftCoef(double coefs[8]);

      //! Engines/Fins vector.
      std::list<Force*> m_vehicle_forces;
    };
  }
}

#endif
