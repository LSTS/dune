//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: UUV.cpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>

// VSIM headers.
#include <VSIM/UUV.hpp>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace VSIM
  {
    UUV::UUV(void):
      m_volume(NULL)
    {
      setBuoyancyPosition(0, 0, 0);
      std::memset(m_added_mass_coef, 0, sizeof(m_added_mass_coef));
      std::memset(m_body_lift_coef, 0, sizeof(m_body_lift_coef));
    }

    UUV::UUV(double p[3], double dimensions[3])
    {
      std::memset(m_added_mass_coef, 0, sizeof(m_added_mass_coef));
      std::memset(m_body_lift_coef, 0, sizeof(m_body_lift_coef));

      double x = 0;
      double y = 0;
      double z = 0;

      setBuoyancyPosition(p[0], p[1], p[2]);

      x = dimensions[0] <= 0 ? 1 : dimensions[0];
      y = dimensions[1] <= 0 ? 1 : dimensions[1];
      z = dimensions[2] <= 0 ? 1 : dimensions[2];

      m_volume = new Volume(x, y, z);
    }

    UUV::~UUV(void)
    {
      if (m_volume != NULL)
      {
        delete m_volume;
        m_volume = NULL;
      }
    }

    void
    UUV::setBuoyancyPosition(double x, double y, double z)
    {
      m_buoyancy_position[0] = x;
      m_buoyancy_position[1] = y;
      m_buoyancy_position[2] = z;
    }

    void
    UUV::setAddedMassCoef(double coefs[6])
    {
      std::memcpy(m_added_mass_coef, coefs, sizeof(double) * 6);
    }

    void
    UUV::setBodyLiftCoef(double coefs[8])
    {
      std::memcpy(m_body_lift_coef, coefs, sizeof(double) * 8);
    }

    void
    UUV::addFin(Fin* f)
    {
      addForce(f);
    }

    void
    UUV::updateFin(unsigned int id, double act)
    {
      id = Fin::encodeId(id);
      updateact(id, act);
    }

    void
    UUV::applyRestoringForcesMoments(void)
    {
      double B = (DUNE::Math::c_gravity * DUNE::Math::c_water_density * m_volume->sub_volume(m_position[2]));

      double W = m_mass * DUNE::Math::c_gravity;
      double xb = -(W - B) * std::sin(m_orientation[1]);
      double yb = (W - B) * std::cos(m_orientation[1]) * std::sin(m_orientation[0]);
      double zb = (W - B) * std::cos(m_orientation[1]) * std::cos(m_orientation[0]);
      double pb = m_buoyancy_position[2] * W * std::cos(m_orientation[1]) * std::sin(m_orientation[0]);
      double qb = m_buoyancy_position[2] * W * std::sin(m_orientation[1]);
      double rb = 0;

      addForces(xb, yb, zb, pb, qb, rb);
    }

    void
    UUV::applyCoriolisForce(void)
    {
      // Vehicle center of gravity relative to center of buoyancy.
      double zg = -m_buoyancy_position[2];
      double m = m_mass;

      double xf = (-m * zg * m_angular_velocity[2] * m_angular_velocity[0] +
                   -(m - m_added_mass_coef[2]) * m_linear_velocity[2] * m_angular_velocity[1] +
                   +(m - m_added_mass_coef[1]) * m_linear_velocity[1] * m_angular_velocity[2]);

      double yf = ((m - m_added_mass_coef[2]) * m_linear_velocity[2] * m_angular_velocity[0] +
                   -m * zg * m_angular_velocity[2] * m_angular_velocity[1] +
                   -(m - m_added_mass_coef[0]) * m_linear_velocity[0] * m_angular_velocity[2]);

      double zf = (m * zg * (m_angular_velocity[0] * m_angular_velocity[0] + m_angular_velocity[1] * m_angular_velocity[1]) +
                   -(m - m_added_mass_coef[1]) * m_linear_velocity[1] * m_angular_velocity[0] +
                   +(m - m_added_mass_coef[0]) * m_linear_velocity[0] * m_angular_velocity[1]);

      double pf = (m * zg * m_angular_velocity[2] * m_linear_velocity[0] +
                   -(m - m_added_mass_coef[2]) * m_linear_velocity[2] * m_linear_velocity[1] +
                   -(m * zg * m_angular_velocity[0] - (m - m_added_mass_coef[1])
                     * m_linear_velocity[1]) * m_linear_velocity[2] +
                   -(m_inertia[2] - m_added_mass_coef[5]) * m_angular_velocity[2] * m_angular_velocity[1] +
                   +(m_inertia[1] - m_added_mass_coef[4]) * m_angular_velocity[1] * m_angular_velocity[2]);

      double qf = ((m - m_added_mass_coef[2]) * m_linear_velocity[2] * m_linear_velocity[0] +
                   +m * zg * m_angular_velocity[2] * m_linear_velocity[1] +
                   -(m * zg * m_angular_velocity[1] + (m - m_added_mass_coef[0])
                     * m_linear_velocity[0]) * m_linear_velocity[2] +
                   +(m_inertia[2] - m_added_mass_coef[5]) * m_angular_velocity[2] * m_angular_velocity[0] +
                   -(m_inertia[0] - m_added_mass_coef[3]) * m_angular_velocity[0] * m_angular_velocity[2]);

      double rf = (-(m - m_added_mass_coef[1]) * m_linear_velocity[1] * m_linear_velocity[0] +
                   +(m - m_added_mass_coef[0]) * m_linear_velocity[0] * m_linear_velocity[1] +
                   -(m_inertia[1] - m_added_mass_coef[4]) * m_angular_velocity[1] * m_angular_velocity[0] +
                   +(m_inertia[0] - m_added_mass_coef[3]) * m_angular_velocity[0] * m_angular_velocity[1]);

      addForces(xf, yf, zf, pf, qf, rf);

      xf = 0;
      yf = (m_body_lift_coef[0] * m_linear_velocity[1] +
            m_body_lift_coef[1] * m_angular_velocity[2]) * m_linear_velocity[0];
      zf = (m_body_lift_coef[2] * m_linear_velocity[2] +
            m_body_lift_coef[3] * m_angular_velocity[1]) * m_linear_velocity[0];

      pf = 0;
      qf = (m_body_lift_coef[4] * m_linear_velocity[2] +
            m_body_lift_coef[5] * m_angular_velocity[1]) * m_linear_velocity[0];
      rf = (m_body_lift_coef[6] * m_linear_velocity[1] +
            m_body_lift_coef[7] * m_angular_velocity[2]) * m_linear_velocity[0];

      addForces(xf, yf, zf, pf, qf, rf);
    }

    void
    UUV::applyForces(void)
    {
      applyDragForces();
      applyControlForces();
      applyRestoringForcesMoments();
      applyCoriolisForce();
    }
  }
}
