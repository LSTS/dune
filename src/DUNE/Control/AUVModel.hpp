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

#ifndef DUNE_CONTROL_AUV_MODEL_HPP_INCLUDED_
#define DUNE_CONTROL_AUV_MODEL_HPP_INCLUDED_

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
