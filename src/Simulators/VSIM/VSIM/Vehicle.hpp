//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Vehicle.hpp 12303 2013-01-01 02:14:25Z jbraga                    $:*
//***************************************************************************

#ifndef SIMULATORS_VSIM_VEHICLE_HPP_INCLUDED_
#define SIMULATORS_VSIM_VEHICLE_HPP_INCLUDED_

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
