//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>

// DUNE headers.
//#include <DUNE/Utils/String.hpp>
#include <DUNE/Simulation/UAV.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/Angles.hpp>
//#include <DUNE/Math/General.hpp>

namespace DUNE
{
  namespace Simulation
  {
    UAVSimulation::UAVSimulation(const double& bank_time_cst, const double& speed_time_cst):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0),
          //! - Airspeed
          m_airspeed_cmd(0),
          //! - Altitude
          m_altitude_cmd(0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(0)
    {
      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      m_velocity = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0),
          //! - Airspeed
          m_airspeed_cmd(0),
          //! - Altitude
          m_altitude_cmd(0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(0)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size != 3 && i_vel_size != 6)
        throw Error("Invalid velocity vector dimension");

      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      /* Rever e implementar
      if (i_vel_size == 3)
        vel.vertCat(DUNE::Math::Matrix(3, 1, 0.0));
       */
      m_velocity = vel;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0),
          //! - Airspeed
          m_airspeed_cmd(0),
          //! - Altitude
          m_altitude_cmd(0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(0)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size != 3 && i_pos_size != 6)
        throw Error("Invalid position vector dimension");

      int i_vel_size = vel.rows();
      if (i_vel_size != 3 && i_vel_size != 6)
        throw Error("Invalid velocity vector dimension");

      //! Vehicle position
      /* Rever e implementar
      if (i_pos_size == 3)
        pos.vertCat(DUNE::Math::Matrix(3, 1, 0.0));
       */
      m_position = pos;
      //! Vehicle velocity vector
      /* Rever e implementar
      if (i_vel_size == 3)
        vel.vertCat(DUNE::Math::Matrix(3, 1, 0.0));
       */
      m_velocity = vel;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep)
    {

      if (m_sim_type == "4DOF_bank")
      {
        update4DOF_Bank(timestep);
      }
      return *this;
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Computed the updated state
      return update(timestep);
    }

    /*
    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& wind)
    {
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& wind)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& wind)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd, const double& wind)
    {
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
    }
    */

    void
    UAVSimulation::update4DOF_Bank(const double& timestep)
    {
      //! Optimization variables
      double cos_yaw = std::cos(m_position(5));
      double sin_yaw = std::sin(m_position(5));

      //! Wind effects
      m_velocity(2) = m_wind(2);
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0) - m_wind;
      double airspeed = m_uav2wind_gnd_frm.norm_2();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================
      //! Command effect
      //! - Horizontal acceleration command
      double d_speed_rate = (m_airspeed_cmd - airspeed)/m_speed_time_cst;
      airspeed += d_speed_rate*timestep;
      //! - Roll rate command
      double d_bank_rate = (m_bank_cmd - m_position(3))/m_bank_time_cst;
      m_position(3) += d_bank_rate*timestep;

      //! UAV velocity components relative to the wind over the ground reference frame
      m_uav2wind_gnd_frm(0) = airspeed * cos_yaw;
      m_uav2wind_gnd_frm(1) = airspeed * sin_yaw;
      // UAV velocity components relative to the ground over the ground reference frame
      m_velocity.set(0, 2, 0, 0, m_uav2wind_gnd_frm + m_wind);
      // Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/airspeed;

      // State vector update
      m_position += m_velocity*timestep;

      //==========================================================================
      // Output
      //==========================================================================

      m_position(5) = DUNE::Math::Angles::normalizeRadian(m_position(5));
    }

    void
    UAVSimulation::model(const double& bank_time_cst, const double& speed_time_cst)
    {
      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
    }
  }
}
