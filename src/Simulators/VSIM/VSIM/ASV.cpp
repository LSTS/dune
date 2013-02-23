//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>

// VSIM headers.
#include <VSIM/ASV.hpp>

namespace Simulators
{
  namespace VSIM
  {
    ASV::ASV(void):
      m_volume(NULL)
    { }

    ASV::ASV(double dimensions[3])
    {
      double x = 0;
      double y = 0;
      double z = 0;

      x = dimensions[0] <= 0 ? 1 : dimensions[0];
      y = dimensions[1] <= 0 ? 1 : dimensions[1];
      z = dimensions[2] <= 0 ? 1 : dimensions[2];

      m_actuation[0] = 0.0;
      m_actuation[1] = 0.0;

      m_volume = new Volume(x, y, z);
    }

    ASV::~ASV(void)
    {
      if (m_volume != NULL)
      {
        delete m_volume;
        m_volume = NULL;
      }
    }

    void
    ASV::applyForces(void)
    {
      applyDragForces();
      applyAsvActuation();
    }

    void
    ASV::updateActuation(int id)
    {
      std::list<Force*>::iterator itr = m_vehicle_forces.begin();

      while (itr != m_vehicle_forces.end() && !(*itr)->checkId(id))
        ++itr;

      if (itr != m_vehicle_forces.end())
        m_actuation[id - c_asv_base_id] = (*itr)->getActuation();
    }

    void
    ASV::applyAsvActuation(void)
    {
      // Original parameters.
      double T2CLeft[] = {-0.7428, 1.6420, 4.0325, -0.769};
      double T2CRight[] = {-0.7428, 1.6420, 4.0325, -0.769};

      updateActuation(c_asv_base_id);
      updateActuation(c_asv_base_id + 1);

      double Tl = m_actuation[0];
      double Tr = m_actuation[1];

      double turnLeft_i[4] = {m_asvm.turnLeft_k_2, m_asvm.turnLeft_k_1, Tl * std::fabs(Tl), Tl};
      double turnRight_i[4] = {m_asvm.turnRight_k_2, m_asvm.turnRight_k_1, Tr * std::fabs(Tr), Tr};

      double turnLeft = std::inner_product(turnLeft_i, turnLeft_i + 4, T2CLeft, 0.0);
      double turnRight = std::inner_product(turnRight_i, turnRight_i + 4, T2CRight, 0.0);

      double curL = 0.0;
      double curR = 0.0;

      if (m_asvm.turnLeft_k_1)
        curL = std::sqrt(std::fabs(m_asvm.turnLeft_k_1)) * (std::fabs(m_asvm.turnLeft_k_1) / m_asvm.turnLeft_k_1);

      if (m_asvm.turnRight_k_1)
        curR = std::sqrt(std::fabs(m_asvm.turnRight_k_1)) * (std::fabs(m_asvm.turnRight_k_1) / m_asvm.turnRight_k_1);

      double Xf = 0.1200 * (curL + curR);
      double Nf = 0.00088667 * (curL - curR);

      addForces(Xf, 0, 0, 0, 0, Nf);

      // Set auxiliary memory.
      m_asvm.turnLeft_k_2 = m_asvm.turnLeft_k_1;
      m_asvm.turnLeft_k_1 = turnLeft;
      m_asvm.turnRight_k_2 = m_asvm.turnRight_k_1;
      m_asvm.turnRight_k_1 = turnRight;
    }
  }
}
