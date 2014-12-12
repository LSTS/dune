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
// Author: Renato Caldas                                                    *
//***************************************************************************

// Local headers.
#include <DUNE/Control/DiscretePID.hpp>
#include <DUNE/Math.hpp>

namespace DUNE
{
  namespace Control
  {
    //! Constructor.
    DiscretePID::DiscretePID(void):
      m_kp(0),
      m_ki(0),
      m_kd(0),
      m_limit_int(false),
      m_limit_out(false),
      m_lower_limit(0),
      m_upper_limit(0),
      m_debug(false),
      m_task(NULL),
      m_parcel(NULL)
    {
      reset();
    }

    //! Destructor.
    DiscretePID::~DiscretePID(void)
    { }

    void
    DiscretePID::setGains(const std::vector<float>& gains)
    {
      m_kp = gains[0];
      m_ki = gains[1];
      m_kd = gains[2];
    }

    void
    DiscretePID::setProportionalGain(float gain)
    {
      m_kp = gain;
    }

    void
    DiscretePID::setIntegralGain(float gain)
    {
      m_ki = gain;
    }

    void
    DiscretePID::setDerivativeGain(float gain)
    {
      m_kd = gain;
    }

    void
    DiscretePID::setOutputLimits(float lower, float upper)
    {
      if ((lower == 0.0) && (upper == 0.0))
      {
        m_limit_out = false;
        return;
      }

      m_limit_out = true;
      m_lower_limit = lower;
      m_upper_limit = upper;
    }

    void
    DiscretePID::setIntegralLimits(float value)
    {
      if (value <= 0.0)
      {
        m_limit_int = false;
        return;
      }

      m_limit_int = true;
      m_max_int = value;
    }

    void
    DiscretePID::enableParcels(Tasks::Task* t, IMC::ControlParcel* p)
    {
      m_task = t;
      m_parcel = p;

      if ((t != NULL) && (p != NULL))
        m_debug = true;
    }

    float
    DiscretePID::step(double timestep, float error)
    {
      float deriv_err = (error - m_prev_err) / timestep;
      return step(timestep, error, deriv_err);
    }

    float
    DiscretePID::step(double timestep, float error, float err_derivative)
    {
      if (m_debug)
      {
        m_parcel->p = m_kp * error;
        m_parcel->i = m_int_err;
        m_parcel->d = m_kd * err_derivative;
        m_task->dispatch(m_parcel);
      }

      float cmd;

      cmd = m_kp * error + m_kd * err_derivative + m_int_err;

      if (m_limit_out)
        cmd = Math::trimValue(cmd, m_lower_limit, m_upper_limit);

      m_int_err += m_ki * error * timestep;

      if (m_limit_int)
        m_int_err = Math::trimValue(m_int_err, -m_max_int, m_max_int);

      m_prev_err = error;
      return cmd;
    }

    void
    DiscretePID::reset(void)
    {
      m_int_err = 0;
      m_prev_err = 0;
    }
  }
}
