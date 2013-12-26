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
    UAVSimulation::UAVSimulation(void):
              //! Simulation type
              m_sim_type("4DOF_bank"),
              //! Control commands
              //! - Bank
              m_bank_cmd(0.0),
              //! - Airspeed
              m_airspeed_cmd(0.0),
              //! - Altitude
              m_altitude_cmd(0.0),
              //! Environment parameters
              //! - Gravity acceleration
              m_g(9.8066),
              //! Vehicle model parameters
              //! - Bank time constant
              m_bank_time_cst(0.0),
              //! - Airspeed time constant
              m_speed_time_cst(0.0),
              //! - Model parameters definition flag
              m_model_time_cst(0),
              //! Control commands initialization flags
              //! - Bank
              m_bank_cmd_ini(0),
              //! - Airspeed
              m_airspeed_cmd_ini(0),
              //! - Altitude
              m_altitude_cmd_ini(0),
              //! Simulation variables
              m_airspeed(0.0),
              m_cos_yaw(1.0),
              m_sin_yaw(0.0)
        {
          //! Vehicle position
          m_position = DUNE::Math::Matrix(6, 1, 0.0);
          //! Vehicle velocity vector
          m_velocity = DUNE::Math::Matrix(6, 1, 0.0);
          //! Vehicle velocity vector relative to the wind, in the ground reference frame
          m_uav2wind_gnd_frm = DUNE::Math::Matrix(3, 1, 0.0);

          //! Wind state vector
          m_wind = DUNE::Math::Matrix(3, 1, 0.0);
    }

    UAVSimulation::UAVSimulation(const UAVSimulation& model)
    {
      //! Vehicle position
      m_position = model.m_position;
      //! Vehicle velocity vector
      m_velocity = model.m_velocity;
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = model.m_uav2wind_gnd_frm;

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = model.m_bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = model.m_speed_time_cst;
      //! - Model parameters definition flag
      m_model_time_cst = model.m_model_time_cst;

      //! modelation type
      m_sim_type = model.m_sim_type;

      //! Control commands
      //! - Bank
      m_bank_cmd = model.m_bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = model.m_airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = model.m_altitude_cmd;
      //! Control commands initialization flags
      //! - Bank
      m_bank_cmd_ini = model.m_bank_cmd_ini;
      //! - Airspeed
      m_airspeed_cmd_ini = model.m_airspeed_cmd_ini;
      //! - Altitude
      m_altitude_cmd_ini = model.m_altitude_cmd_ini;

      //! Environment parameters
      //! Wind state vector
      m_wind = model.m_wind;
      //! - Gravity acceleration
      m_g = model.m_g;

      //! Simulation variables
      m_airspeed = model.m_airspeed;
      m_cos_yaw = model.m_cos_yaw;
      m_sin_yaw = model.m_sin_yaw;
    }

    UAVSimulation::UAVSimulation(const double& bank_time_cst, const double& speed_time_cst):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! - Airspeed
          m_airspeed_cmd(0.0),
          //! - Altitude
          m_altitude_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(0),
          //! - Altitude
          m_altitude_cmd_ini(0),
          //! Simulation variables
          m_airspeed(0.0),
          m_cos_yaw(1.0),
          m_sin_yaw(0.0)
    {
      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      m_velocity = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = DUNE::Math::Matrix(3, 1, 0.0);

      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

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
          m_bank_cmd(0.0),
          //! - Airspeed
          m_airspeed_cmd(0.0),
          //! - Altitude
          m_altitude_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(0),
          //! - Altitude
          m_altitude_cmd_ini(0),
          //! Simulation variables
          m_airspeed(0.0),
          m_cos_yaw(1.0),
          m_sin_yaw(0.0)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      DUNE::Math::Matrix tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst,
        const double& altitude_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! - Airspeed
          m_airspeed_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(0),
          //! - Altitude
          m_altitude_cmd_ini(1),
          //! Simulation variables
          m_airspeed(0.0),
          m_cos_yaw(1.0),
          m_sin_yaw(0.0)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      DUNE::Math::Matrix tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst,
        const double& altitude_cmd, const double& airspeed_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(1),
          //! - Altitude
          m_altitude_cmd_ini(1),
          //! Simulation variables
          m_airspeed(0.0),
          m_cos_yaw(1.0),
          m_sin_yaw(0.0)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      DUNE::Math::Matrix tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst,
        const double& altitude_cmd, const double& airspeed_cmd, const double& bank_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(1),
          //! - Airspeed
          m_airspeed_cmd_ini(1),
          //! - Altitude
          m_altitude_cmd_ini(1),
          //! Simulation variables
          m_airspeed(0.0),
          m_cos_yaw(1.0),
          m_sin_yaw(0.0)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position = DUNE::Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      DUNE::Math::Matrix tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
        const double& bank_time_cst, const double& speed_time_cst):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! - Airspeed
          m_airspeed_cmd(0.0),
          //! - Altitude
          m_altitude_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(0),
          //! - Altitude
          m_altitude_cmd_ini(0)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      DUNE::Math::Matrix tmp = pos;
      if (i_pos_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_pos_size-6, 1, 0.0));
      m_position = tmp;
      //! Vehicle velocity vector
      tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
        const double& bank_time_cst, const double& speed_time_cst, const double& altitude_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! - Airspeed
          m_airspeed_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(0),
          //! - Altitude
          m_altitude_cmd_ini(1)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      DUNE::Math::Matrix tmp = pos;
      if (i_pos_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_pos_size-6, 1, 0.0));
      m_position = tmp;
      //! Vehicle velocity vector
      tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
        const double& bank_time_cst, const double& speed_time_cst,
        const double& altitude_cmd, const double& airspeed_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Control commands
          //! - Bank
          m_bank_cmd(0.0),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(0),
          //! - Airspeed
          m_airspeed_cmd_ini(1),
          //! - Altitude
          m_altitude_cmd_ini(1)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      DUNE::Math::Matrix tmp = pos;
      if (i_pos_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_pos_size-6, 1, 0.0));
      m_position = tmp;
      //! Vehicle velocity vector
      tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
    }

    UAVSimulation::UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
        const double& bank_time_cst, const double& speed_time_cst,
        const double& altitude_cmd, const double& airspeed_cmd, const double& bank_cmd):
          //! Simulation type
          m_sim_type("4DOF_bank"),
          //! Environment parameters
          //! - Gravity acceleration
          m_g(9.8066),
          //! Vehicle model parameters
          //! - Model parameters definition flag
          m_model_time_cst(1),
          //! Control commands initialization flags
          //! - Bank
          m_bank_cmd_ini(1),
          //! - Airspeed
          m_airspeed_cmd_ini(1),
          //! - Altitude
          m_altitude_cmd_ini(1)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      DUNE::Math::Matrix tmp = pos;
      if (i_pos_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_pos_size-6, 1, 0.0));
      m_position = tmp;
      //! Vehicle velocity vector
      tmp = vel;
      if (i_vel_size < 6)
        tmp.vertCat(DUNE::Math::Matrix(i_vel_size-6, 1, 0.0));
      m_velocity = tmp;
      //! Wind state vector
      m_wind = DUNE::Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;

      //! Control commands
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0);
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
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
      //! Check if model has the required parameters
      //! - Model control time constants
      if (!m_model_time_cst)
      {
        throw Error("No model parameters defined! The state was not updated.");
        //inf("No model parameters defined! The state was not updated.");
        return;
      }

      //! Wind effects
      m_velocity(2) = m_wind(2);
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0) - m_wind;
      m_airspeed = m_uav2wind_gnd_frm.norm_2();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================

      double d_initial_yaw = m_position(5);
      //! Vertical position and Euler angles state update
      m_position.set(2, 5, 0, 0, m_position.get(2, 5, 0, 0) + m_velocity.get(2, 5, 0, 0)*timestep);
      // Optimization variables
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));

      //! Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/m_airspeed;
      //! Horizontal position state update
      if (m_position(3) == 0)
      {
        m_position.set(0, 1, 0, 0, m_position.get(0, 1, 0, 0) + m_velocity.get(0, 1, 0, 0)*timestep);
      }
      else
      {
        double d_turn_radius = m_airspeed/m_velocity(5);
        m_position(0) += d_turn_radius*(m_sin_yaw - std::sin(d_initial_yaw));
        m_position(1) += d_turn_radius*(std::cos(d_initial_yaw) - m_cos_yaw);
      }


      //! Command effect
      //! - Horizontal acceleration command
      double d_speed_rate = (m_airspeed_cmd - m_airspeed)/m_speed_time_cst;
      m_airspeed += d_speed_rate*timestep;
      //! - Roll rate command
      m_velocity(3) = (m_bank_cmd - m_position(3))/m_bank_time_cst;

      //! UAV velocity components relative to the wind over the ground reference frame
      m_uav2wind_gnd_frm(0) = m_airspeed * m_cos_yaw;
      m_uav2wind_gnd_frm(1) = m_airspeed * m_sin_yaw;
      //! UAV velocity components relative to the ground over the ground reference frame
      m_velocity.set(0, 2, 0, 0, m_uav2wind_gnd_frm + m_wind);

      //==========================================================================
      // Output
      //==========================================================================

      m_position(5) = DUNE::Math::Angles::normalizeRadian(m_position(5));
    }

    void
    UAVSimulation::setCtrl(const double& bank_time_cst, const double& speed_time_cst)
    {
      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      //! Vehicle model parameters
      //! - Model parameters definition flag
      m_model_time_cst = 1;
    }

    void
    UAVSimulation::get(DUNE::Math::Matrix& pos, DUNE::Math::Matrix& vel)
    {
      //! Vehicle position
      pos = m_position;
      //! Vehicle velocity vector, relative to the ground, in the ground reference frame
      vel = m_velocity;
    }

    void
    UAVSimulation::set(const DUNE::Math::Matrix& pos)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position.set(0, i_pos_size-1, 0, 0, pos);
    }

    void
    UAVSimulation::set(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");

      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle position
      m_position.set(0, i_pos_size-1, 0, 0, pos);
      /*
      //! Vehicle velocity vector, relative to the ground, in the ground reference frame
      m_velocity.set(0, i_vel_size-1, 0, 0, vel);
      //! Vehicle velocity vector, relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0) - m_wind;
      //! Simulation variables
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
       */
    }

    void
    UAVSimulation::command(const double& bank_cmd)
    {
      //! Control commands
      //! - Bank
      m_bank_cmd = bank_cmd;

      //! Control commands initialization flags
      //! - Bank
      m_bank_cmd_ini = 1;
    }

    void
    UAVSimulation::command(const double& bank_cmd, const double& airspeed_cmd)
    {
      //! Control commands
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;

      //! Control commands initialization flags
      //! - Bank
      m_bank_cmd_ini = 1;
      //! - Airspeed
      m_airspeed_cmd_ini = 1;
    }

    void
    UAVSimulation::command(const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd)
    {
      //! Control commands
      //! - Bank
      m_bank_cmd = bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = altitude_cmd;

      //! Control commands initialization flags
      //! - Bank
      m_bank_cmd_ini = 1;
      //! - Airspeed
      m_airspeed_cmd_ini = 1;
      //! - Altitude
      m_altitude_cmd_ini = 1;
    }
  }
}
