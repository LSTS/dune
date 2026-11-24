//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef CONTROL_AUV_ATTITUDE_DISTURBANCE_OBSERVER_HPP_INCLUDED_
#define CONTROL_AUV_ATTITUDE_DISTURBANCE_OBSERVER_HPP_INCLUDED_

namespace Control
{
  namespace AUV
  {
    namespace Attitude
    {
      //! Extended state observer of one rotation axis. Model:
      //!   rate_dot = -a v rate + b u + d
      //! u is the actuation the allocator delivered, in the units of the
      //! desired torque, v the speed and d lumps every moment the model
      //! leaves out (trim, restoring, lift). The damping is part of the
      //! model, so the compensation of d leaves it in place. The observer
      //! estimates the rate and d with both poles at -bandwidth.
      class DisturbanceObserver
      {
      public:
        DisturbanceObserver(void):
          m_b(1.0f),
          m_a(0.0f),
          m_l1(0.0f),
          m_l2(0.0f),
          m_rate(0.0f),
          m_d(0.0f),
          m_active(false)
        { }

        //! Set the model and the observer bandwidth.
        //! @param[in] b angular acceleration per unit of actuation.
        //! @param[in] a damping, angular acceleration per unit of rate and
        //! of speed (1/m).
        //! @param[in] bandwidth observer bandwidth (rad/s).
        void
        setParameters(float b, float a, float bandwidth)
        {
          m_b = b;
          m_a = a;
          m_l1 = 2.0f * bandwidth;
          m_l2 = bandwidth * bandwidth;
        }

        //! Forget the estimate. The next update starts from the measured rate.
        void
        reset(void)
        {
          m_active = false;
          m_d = 0.0f;
        }

        //! Update the estimate.
        //! @param[in] dt time step (s).
        //! @param[in] rate measured rate (rad/s).
        //! @param[in] u actuation delivered over the last time step.
        //! @param[in] speed speed through the water (m/s).
        void
        update(float dt, float rate, float u, float speed)
        {
          if (!m_active)
          {
            m_rate = rate;
            m_d = 0.0f;
            m_active = true;
            return;
          }

          const float e = rate - m_rate;
          m_rate += dt * (-m_a * speed * rate + m_b * u + m_d + m_l1 * e);
          m_d += dt * m_l2 * e;
        }

        //! Actuation that cancels the estimated disturbance.
        float
        compensation(void) const
        {
          return -m_d / m_b;
        }

      private:
        //! Angular acceleration per unit of actuation.
        float m_b;
        //! Damping per unit of speed.
        float m_a;
        //! Observer gains.
        float m_l1;
        float m_l2;
        //! Estimated rate.
        float m_rate;
        //! Estimated disturbance (rad/s^2).
        float m_d;
        //! True once the estimate has started.
        bool m_active;
      };
    }
  }
}

#endif
