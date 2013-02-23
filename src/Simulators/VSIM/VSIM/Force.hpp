//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_FORCES_HPP_INCLUDED_
#define SIMULATORS_VSIM_FORCES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

namespace Simulators
{
  namespace VSIM
  {
    //! %Force properties.
    //! This is the base class for engine and fin subclasses.
    class Force
    {
    public:
      //! Constructor.
      Force(void);

      //! Destructor.
      virtual
      ~Force(void)
      { }

      //! Defines force vector.
      //! @param[in] x force along x-axis.
      //! @param[in] y force along y-axis.
      //! @param[in] z force along z-axis.
      //! @param[in] is_inertial if force is in inertial referencial.
      //! @param[in] is_torque if force is a torque force.
      void
      setForce(double, double, double, bool, bool);

      //! Sets position vector.
      //! @param[in] x position of the force in the x-axis.
      //! @param[in] y position of the force in the y-axis.
      //! @param[in] z position of the force in the z-axis.
      //! @param[in] is_inertial if position is in inertial referencial.
      void
      setPosition(double, double, double, bool);

      //! Is force in inertial referencial.
      //! @return true if it is, false otherwise.
      bool
      isInertial(void);

      //! Is a torque.
      //! @return true if it is, false otherwise.
      bool
      isTorque(void);

      //! Is position in inertial referencial.
      //! @return true if it is, false otherwise.
      bool
      isPosInertial(void);

      //! Apply this force to body with id ident.
      //! @param[in] speed speed reference.
      //! @param[out] forces forces to be applied to body.
      virtual void
      applyForce(double speed, double forces[6]);

      //! Check force's id.
      //! @param[in] testid force id.
      //! @return true if id matches, false otherwise.
      virtual bool
      checkId(unsigned int testid);

      //! Update force's actuation.
      //! @param[in] value force actuation value.
      virtual void
      updateAct(double value);

      //! Retrieve current force actuation value.
      //! @return force actuation value.
      virtual double
      getActuation(void);

    protected:
      //! Max force.
      double m_max_force[3];
      //! Force application position.
      double m_act_position[3];

    private:
      //! Is force in inertial referential?
      bool m_fIsInertial;
      //! Is position in inertial referential?
      bool m_pIsInertial;
      //! Is a torque force?
      bool m_fIsTorque;
    };
  }
}

#endif
