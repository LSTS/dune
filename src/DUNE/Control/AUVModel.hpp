//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: AUVModel.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef DUNE_CONTROL_AUVMODEL_HPP_INCLUDED_
#define DUNE_CONTROL_AUVMODEL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Math.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AUVModel;

    struct ModelParameters
    {
      double mass;
      double density;
      double volume;
      double motor_friction;
      double max_thrust;
      Math::Matrix cog;
      Math::Matrix addedmass;
      Math::Matrix inertia;
      Math::Matrix linear_drag;
      Math::Matrix quadratic_drag;
      Math::Matrix lift;
      Math::Matrix fin_lift;
    };

    class AUVModel
    {
    public:
      //! Constructor
      AUVModel(const ModelParameters& param);

      //! Destructor
      ~AUVModel();

      //! Routine to compute the next step
      Math::Matrix
      step(const Math::Matrix& nu_dot, const Math::Matrix& nu, const Math::Matrix& eta);

      //! Routine to compute the next step, yet compute the acceleration instead of forces
      Math::Matrix
      stepInv(const Math::Matrix& tau, const Math::Matrix& nu, const Math::Matrix& eta);

      //! Routine to compute the next step, yet compute the acceleration instead of forces
      //! this time using fin deflections and xyz forces
      Math::Matrix
      stepInv(const Math::Matrix& xyz, const Math::Matrix& deflections, const Math::Matrix& nu, const Math::Matrix& eta);

      //! Routine to compute the next step, yet compute the acceleration instead of forces
      //! this time using the thruster actuation and servo positions
      Math::Matrix
      stepInv(double thruster_act, const Math::Matrix& servo_pos, const Math::Matrix& nu, const Math::Matrix& eta);

      //! Get the roll fin lift coefficient
      inline double
      getRollFinLift(void)
      {
        return m_fin_lift(2);
      }

      //! Get the pitch fin lift coefficient
      inline double
      getPitchFinLift(void)
      {
        return m_fin_lift(3);
      }

      //! Get the yaw fin lift coefficient
      inline double
      getYawFinLift(void)
      {
        return m_fin_lift(4);
      }

    private:
      //! Computes added mass and inertia
      Math::Matrix
      computeM(void);

      //! Computes quadratic damping matrix
      Math::Matrix
      computeD(const Math::Matrix& nu);

      //! Computes lift matrix
      Math::Matrix
      computeL(const Math::Matrix& nu);

      //! Computes vector of restoring forces g
      Math::Matrix
      computeG(const Math::Matrix& eta);

      //! Computes rigid body coriolis and centripetal matrix
      Math::Matrix
      computeC(const Math::Matrix& nu);

      //! Compute the resulting tau using thruster actuation and servo positions
      Math::Matrix
      computeTau(double speed_u, double thruster_act, const Math::Matrix& servo_pos);

      //! Members
      //! Model's mass
      double m_mass;
      //! Model's density
      double m_density;
      //! Model's volume
      double m_volume;
      //! Model's motor friction coefficient
      double m_motor_friction;
      //! Model's max thrust force
      double m_max_thrust;
      //! Center of gravity's coordinates
      Math::Matrix m_cog;
      //! Added mass coeficients
      Math::Matrix m_addedmass;
      //! Intertia coeficients
      Math::Matrix m_inertia;
      //! Model's matrix of mass moments and added inertia
      Math::Matrix m_matrix_mass;
      //! Model's linear damping coefficients
      Math::Matrix m_ldrag;
      //! Model's quadratic drag
      Math::Matrix m_qdrag;
      //! Model's lift coefficients
      Math::Matrix m_lift;
      //! Model's fin lift coefficients
      Math::Matrix m_fin_lift;
    };
  }
}
#endif
