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
// Author: Jorge Estrela da Silva (original PID implementations)            *
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef DUNE_CONTROL_DISCRETE_PID_HPP_INCLUDED_
#define DUNE_CONTROL_DISCRETE_PID_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM DiscretePID;

    class DiscretePID
    {
    public:
      //! Constructor.
      DiscretePID(void);

      //! Destructor.
      ~DiscretePID(void);

      //! Set PID gains using vector.
      //! @param[in] gains pid gains vector in order p, i, d.
      void
      setGains(const std::vector<float>& gains);

      //! Set proportional gain.
      //! @param[in] gain proportional gain p.
      void
      setProportionalGain(float gain);

      //! Set integral gain.
      //! @param[in] gain integral gain i.
      void
      setIntegralGain(float gain);

      //! Set derivative gain.
      //! @param[in] gain derivative gain p.
      void
      setDerivativeGain(float gain);

      //! Set output upper and lower limit.
      //! @param[in] lower lower limit.
      //! @param[in] upper upper limit.
      void
      setOutputLimits(float lower, float upper);

      //! Set integral bounds (limits).
      //! @param[in] value absolute value of bound, lower bound will be
      //! negative.
      void
      setIntegralLimits(float value);

      //! Enable debug using control parcels logged using bus dispatch.
      //! @param[in] t pointer to a task object.
      //! @param[in] p pointer to control parcel message.
      void
      enableParcels(Tasks::Task* t, IMC::ControlParcel* p);

      //! Step forward, using an internal error derivative estimate.
      //! @param[in] timestep amount of time to be used in derivative and
      //! integral part.
      //! @param[in] error error between reference and measure.
      //! @return pid output.
      float
      step(double timestep, float error);

      //! Step forward, using the supplied error derivative.
      //! @param[in] timestep amount of time to be used in derivative and
      //! integral part.
      //! @param[in] error error between reference and measure.
      //! @param[in] err_derivative error derivative.
      //! @return pid output.
      float
      step(double timestep, float error, float err_derivative);

      //! Reset pid variables
      void
      reset(void);

    private:
      //! Proportional gain.
      float m_kp;
      //! Integral gain.
      float m_ki;
      //! Derivative gain.
      float m_kd;

      //! Integral error.
      float m_int_err;
      //! Boolean for limiting integral part or not.
      bool m_limit_int;
      //! Boolean for limiting output of pid.
      bool m_limit_out;
      //! Integral limits for anti windup.
      float m_max_int;
      //! Previous error sample.
      float m_prev_err;
      //! Windup lower limit.
      float m_lower_limit;
      //! Windup upper limit.
      float m_upper_limit;

      // Debug Parcels
      //! Debug flag
      bool m_debug;
      //! Pointer to task to call dispatch.
      Tasks::Task* m_task;
      //! Pointer to control parcel.
      IMC::ControlParcel* m_parcel;
    };
  }
}

#endif
