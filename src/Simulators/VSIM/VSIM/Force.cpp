//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

// VSIM headers.
#include <VSIM/Force.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Force::Force(void)
    {
      for (unsigned i = 0; i < 3; ++i)
      {
        m_max_force[i] = 0.0;
        m_act_position[i] = 0.0;
      }

      m_fIsInertial = false;
      m_pIsInertial = false;
      m_fIsTorque = false;
    }

    void
    Force::setForce(double x, double y, double z, bool is_inertial, bool is_torque)
    {
      m_max_force[0] = x;
      m_max_force[1] = y;
      m_max_force[2] = z;

      m_fIsInertial = is_inertial;
      m_fIsTorque = is_torque;
    }

    void
    Force::setPosition(double x, double y, double z, bool is_inertial)
    {
      m_act_position[0] = x;
      m_act_position[1] = y;
      m_act_position[2] = z;

      m_pIsInertial = is_inertial;
    }

    bool
    Force::isInertial(void)
    {
      return m_fIsInertial;
    }

    bool
    Force::isTorque(void)
    {
      return m_fIsTorque;
    }

    bool
    Force::isPosInertial(void)
    {
      return m_pIsInertial;
    }

    void
    Force::applyForce(double speed, double forces[6])
    {
      // do nothing.
      (void)speed;
      (void)forces;
    }

    bool
    Force::checkId(unsigned int testid)
    {
      // do nothing.
      (void)testid;
      return false;
    }

    void
    Force::updateAct(double value)
    {
      // do nothing.
      (void)value;
    }

    // return ASV actuation
    double
    Force::getActuation(void)
    {
      // do nothing.
      return 0;
    }
  }
}
