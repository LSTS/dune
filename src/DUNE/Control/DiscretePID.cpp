//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
