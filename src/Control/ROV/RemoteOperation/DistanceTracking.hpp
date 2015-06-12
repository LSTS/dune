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

#ifndef CONTROL_ROV_REMOTEOPERATION_DISTANCETRACKING_HPP_INCLUDED_
#define CONTROL_ROV_REMOTEOPERATION_DISTANCETRACKING_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Control.hpp>

namespace Control
{
  namespace ROV
  {
    namespace RemoteOperation
    {
      using namespace DUNE;
      using namespace DUNE::Control;

      struct DTArguments
      {
        //! Pointer to task
        DUNE::Tasks::Task* task;
        //! Distance PID controller gains
        std::vector<float> gains;
        //! Maximum speed output from PID
        float max_speed;
        //! PID Integral limit
        float int_limit;
        //! Absolute value of maximum error in distance
        float abs_max_dist;
      };

      //! Distance tracking algorithm for ROV
      class DistanceTracking
      {
      public:
        //! Constructor.
        //! @param[in] args pointer to arguments struct
        DistanceTracking(DTArguments* args):
          m_args(args),
          m_exec_time(-1.0f)
        {
          m_pid.setGains(m_args->gains);
          m_pid.setOutputLimits(-m_args->max_speed, m_args->max_speed);
          m_pid.setIntegralLimits(m_args->int_limit);
          m_pid.enableParcels(m_args->task, &m_parcels);
        }

        void
        setDesiredDistance(float desired_distance)
        {
          m_desired_distance = desired_distance;
        }

        float
        update(float distance)
        {
          float err = distance - m_desired_distance;

          if (m_exec_time < 0)
          {
            m_exec_time = Time::Clock::get();
            return 0.0;
          }

          // Limit error
          err = Math::trimValue(err, -m_args->abs_max_dist, m_args->abs_max_dist);

          return m_pid.step(Time::Clock::get() - m_exec_time, err);
        }

        //! Destructor.
        ~DistanceTracking(void)
        { }

      private:
        //! Pointer to arguments
        DTArguments* m_args;
        //! PID controller for distance
        DiscretePID m_pid;
        //! PID control parcels for debug
        IMC::ControlParcel m_parcels;
        //! Desired distance
        float m_desired_distance;
        //! Last control execution time
        float m_exec_time;
      };
    }
  }
}

#endif
