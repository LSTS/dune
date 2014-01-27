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
// Author: Kristian Klausen                                                 *
//***************************************************************************


#ifndef DUNE_SIMULATOR_MULTICOPTER_MODEL_HPP_INCLUDED_
#define DUNE_SIMULATOR_MULTICOPTER_MODEL_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace Multicopter
  {

    // Needed?
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM MulticopterModel;

    static const double gravity = 9.80665; // m/ss

    enum Frame
    {
      Frame_quad,
      Frame_hexa
    };

    enum Configuration
    {
      Configuration_x,
      Configuration_plus
    };

    struct CopterMotor
    {
      CopterMotor(double _angle, bool _clockwise, unsigned int _servo_id):
          angle(_angle),
          clockwise(_clockwise),
          servo_id(_servo_id),
          speed(0.0)
      {
        // Intentionally empty.
      };
      //! Angle (deg) from front
      double angle;
      //! Is clockwise rotation
      bool clockwise;
      //! which servo number is this
      unsigned int servo_id;
      //! Current speed of this motor
      double speed;
    };

    struct MulticopterModelParameters
    {
      double mass;
      double hover_throttle;        // 0.45;
      double k;                     // pitch/roll motor gain
      double l;                     // Length from centre of multicopter to motor
      double b;                     // Yaw coefficient

      bool linear_actuator_dynamics;

      Frame frame;                  // Frame configuratin
      Configuration configuration;

      Math::Matrix cog;
      Math::Matrix inertia;
      Math::Matrix ldrag;
    };


    //k = 2.9e-6*1e6;
    //b = 1.1e-7*1e6;
    //double l = 0.25;


    class MulticopterModel
    {
    private:

      //! Model's mass
      double m_mass;
      //! Models hover throttle
      double m_hover_throttle;
      //! Models pitch/roll motor coefficient
      double m_k;
      //! Models length from centre to motor
      double m_l;
      //! Models yaw motor coefficient
      double m_b;
      //! True if actuator dynamics are modeled as linear (as opposed to quadratic)
      bool m_linear_actuator_dynamics;
      //! Models frame type
      Frame m_frame;
      //! Models frame configuration;
      Configuration m_configuration;
      //! Center of gravity's coordinates
      Math::Matrix m_cog;
      //! Inertia coeficients
      Math::Matrix m_inertia;
      //! Model's linear damping coefficients
      Math::Matrix m_ldrag;

      //! Calculated in constructor.
      //! From input to newton.
      double m_thrust_scale;
      //! Model's matrix of mass moments and added inertia
      Math::Matrix m_matrix_mass;
      //! Holds information about helicopters motors.
      CopterMotor* m_motors;
      unsigned int m_n_motors;

    public:
      MulticopterModel(const MulticopterModelParameters& param);
      virtual ~MulticopterModel();

      //! Routine to compute the next step, yet compute the acceleration instead of forces
      Math::Matrix
      stepInv(const Math::Matrix& servo_speed, const Math::Matrix& nu, const Math::Matrix& eta);


      double getThrustScale() { return m_thrust_scale; };
      unsigned int getNMotors() { return m_n_motors; };

    private:
      //! Sets up motor configuration for the different frame and configuration types. (quad/hexa, plus/x).
      void
      generateMotors(Frame frame, Configuration configuration);

      //! Computes added mass and inertia
      Math::Matrix
      computeM(void);

      //! Computes vector of gravitational forces
      Math::Matrix
      computeG(const Math::Matrix& eta);

      //! Computes rigid body coriolis and centripetal matrix
      Math::Matrix
      computeC(const Math::Matrix& nu);

      //! Compute the resulting tau using thruster actuation and servo positions
      Math::Matrix
      computeTau(const Math::Matrix& servo_pos);

      //! Computes linear damping matrix
      Math::Matrix
      computeD(const Math::Matrix& nu);

    };

  }
}

#endif /* AIRCRAFT_H_ */
