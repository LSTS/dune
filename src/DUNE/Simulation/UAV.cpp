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
#include <DUNE/DUNE.hpp>
#include <DUNE/Simulation/UAV.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/General.hpp>

namespace DUNE
{
  namespace Simulation
  {
    UAVSimulation::UAVSimulation(Tasks::Task& task):
      m_task(task),
      //! Simulation type
      m_sim_type("3DOF")
    {
      resetModel();
    }

    UAVSimulation::UAVSimulation(const UAVSimulation& model):
      m_task(model.m_task)
    {
      *this = model;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_alt")
    {
      resetModel();

      //! Vehicle model parameters
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const double& bank_time_cst, const double& speed_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_bank")
    {
      resetModel();

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("5DOF")
    {
      resetModel();

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
      //! - Airspeed time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel):
      m_task(task),
      //! Simulation type
      m_sim_type("3DOF")
    {
      resetModel();

      //! Vehicle velocity vector
      setVelocity(vel);
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_alt")
    {
      resetModel();

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_bank")
    {
      resetModel();

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel,
                                 const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("5DOF")
    {
      resetModel();

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst,
                                 const double& airspeed_cmd, const double& bank_cmd):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_bank")
    {
      resetModel();

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;

      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel):
      m_task(task),
      //! Simulation type
      m_sim_type("3DOF")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
                                 const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_alt")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
                                 const double& bank_time_cst, const double& speed_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_bank")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
                                 const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst):
      m_task(task),
      //! Simulation type
      m_sim_type("5DOF")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
                                 const double& bank_time_cst, const double& speed_time_cst,
                                 const double& airspeed_cmd, const double& bank_cmd):
      m_task(task),
      //! Simulation type
      m_sim_type("4DOF_bank")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;

      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
    }

    UAVSimulation::UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
                                 const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst,
                                 const double& altitude_cmd, const double& airspeed_cmd, const double& bank_cmd):
      m_task(task),
      //! Simulation type
      m_sim_type("5DOF")
    {
      resetModel();

      //! Vehicle position
      setPosition(pos);

      //! Vehicle velocity vector
      setVelocity(vel);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;

      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
      //! - Altitude
      commandAlt(altitude_cmd);
    }

    UAVSimulation&
    UAVSimulation::operator=(const UAVSimulation& model)
    {
      //! Motion simulation type
      m_sim_type = model.m_sim_type;

      //! Environment parameters
      //! Wind state vector
      m_wind = model.m_wind;
      //! - Gravity acceleration
      m_g = model.m_g;

      //! Time step control
      m_timestep_lim = 1.0;

      //! Vehicle position
      m_position = model.m_position;
      //! Vehicle velocity vector
      m_velocity = model.m_velocity;
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = model.m_uav2wind_gnd_frm;

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = model.m_bank_time_cst;
      m_bank_time_cst_f = model.m_bank_time_cst_f;
      //! - Airspeed time constant
      m_speed_time_cst = model.m_speed_time_cst;
      m_speed_time_cst_f = model.m_speed_time_cst_f;
      //! - Altitude time constant
      m_alt_time_cst = model.m_alt_time_cst;
      m_alt_time_cst_f = model.m_alt_time_cst_f;
      //! Vehicle operation limits and respective initialization flags
      //! - Bank rate
      m_bank_rate_lim = model.m_bank_rate_lim;
      m_bank_rate_lim_f = model.m_bank_rate_lim_f;
      //! - Longitudinal acceleration
      m_lon_accel_lim = model.m_lon_accel_lim;
      m_lon_accel_lim_f = model.m_lon_accel_lim_f;
      //! - Vertical slope
      m_vert_slope_lim = model.m_vert_slope_lim;
      m_vert_slope_lim_f = model.m_vert_slope_lim_f;

      //! Control commands
      //! - Bank
      m_bank_cmd = model.m_bank_cmd;
      //! - Airspeed
      m_airspeed_cmd = model.m_airspeed_cmd;
      //! - Altitude
      m_altitude_cmd = model.m_altitude_cmd;
      //! - Flight path angle
      m_fpa_cmd = model.m_fpa_cmd;
      //! - Pitch
      m_pitch_cmd = model.m_pitch_cmd;
      //! Control commands initialization flags
      //! - Airspeed
      m_airspeed_cmd_ini = model.m_airspeed_cmd_ini;
      //! - Altitude
      m_altitude_cmd_ini = model.m_altitude_cmd_ini;
      //! - Flight path angle
      m_fpa_cmd_ini = model.m_fpa_cmd_ini;
      //! - Pitch
      m_pitch_cmd_ini = model.m_pitch_cmd_ini;

      //! Simulation variables
      m_airspeed = model.m_airspeed;
      m_ang_attack = model.m_ang_attack;
      m_sideslip = model.m_sideslip;
      m_cos_yaw = model.m_cos_yaw;
      m_sin_yaw = model.m_sin_yaw;
      m_cos_pitch = model.m_cos_pitch;
      m_sin_pitch = model.m_sin_pitch;
      m_cos_roll = model.m_cos_roll;
      m_sin_roll = model.m_sin_roll;
      m_cos_course = model.m_cos_course;
      m_sin_course = model.m_sin_course;
      m_cos_fl_path_ang = model.m_cos_fl_path_ang;
      m_sin_fl_path_ang = model.m_sin_fl_path_ang;

      return *this;
    }

    void
    UAVSimulation::resetModel(void)
    {
      //! Environment parameters
      //! Wind state vector
      m_wind = Math::Matrix(3, 1, 0.0);
      //! - Gravity acceleration
      m_g = 9.8066;
      //! Time step control
      m_timestep_lim = 1.0;

      //! Vehicle position
      m_position = Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector
      m_velocity = Math::Matrix(6, 1, 0.0);
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = Math::Matrix(3, 1, 0.0);

      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = 0.0;
      m_bank_time_cst_f = false;
      //! - Airspeed time constant
      m_speed_time_cst = 0.0;
      m_speed_time_cst_f = false;
      //! - Altitude time constant
      m_alt_time_cst = 0.0;
      m_alt_time_cst_f = false;
      //! Vehicle operation limits and respective initialization flags
      //! - Bank rate
      m_bank_rate_lim = 0.0;
      m_bank_rate_lim_f = false;
      //! - Longitudinal acceleration
      m_lon_accel_lim = 0.0;
      m_lon_accel_lim_f = false;
      //! - Vertical slope
      m_vert_slope_lim = 0.0;
      m_vert_slope_lim_f = false;

      //! Control commands
      //! - Bank
      m_bank_cmd = 0.0;
      //! - Airspeed
      m_airspeed_cmd = 0.0;
      //! - Altitude
      m_altitude_cmd = 0.0;
      //! - Flight path angle
      m_fpa_cmd = 0.0;
      //! - Pitch
      m_pitch_cmd = 0.0;
      //! Control commands initialization flags
      //! - Airspeed
      m_airspeed_cmd_ini = false;
      //! - Altitude
      m_altitude_cmd_ini = false;
      //! - Flight path angle
      m_fpa_cmd_ini = false;
      //! - Pitch
      m_pitch_cmd_ini = false;

      //! Simulation variables
      m_airspeed = 0.0;
      m_ang_attack = 0.0;
      m_sideslip = 0.0;
      m_cos_yaw = 1.0;
      m_sin_yaw = 0.0;
      m_cos_pitch = 1.0;
      m_sin_pitch = 0.0;
      m_cos_roll = 1.0;
      m_sin_roll = 0.0;
      m_cos_course = 1.0;
      m_sin_course = 0.0;
      m_cos_fl_path_ang = 1.0;
      m_sin_fl_path_ang = 0.0;
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep)
    {
      //! Check if model has the required commands
      //! - Airspeed
      if (!m_airspeed_cmd_ini)
      {
        //throw Error("Airspeed command missing! The state was not updated.");
        m_task.war("Airspeed command missing! The state was not updated.");
        return *this;
      }

      //! Time step control
      double d_timestep;
      if (m_timestep_lim > 0.0 && timestep > m_timestep_lim)
        d_timestep = m_timestep_lim;
      else
        d_timestep = timestep;

      if (m_sim_type.compare("4DOF_bank") == 0)
        update4DOF_Bank(d_timestep);
      else if (m_sim_type.compare("5DOF") == 0)
      {
        if (m_altitude_cmd_ini || m_fpa_cmd_ini)
          update5DOF(d_timestep);
        else
          //throw Error("Altitude command missing! The state was not updated.");
          m_task.war("Altitude command missing! The state was not updated.");
      }
      else if (m_sim_type.compare("4DOF_alt") == 0)
      {
        if (m_altitude_cmd_ini || m_fpa_cmd_ini)
          update4DOF_Alt(d_timestep);
        else
          //throw Error("Altitude command missing! The state was not updated.");
          m_task.war("Altitude command missing! The state was not updated.");
      }
      else if (m_sim_type.compare("3DOF") == 0)
        update3DOF(d_timestep);
      //else if (m_sim_type.compare("6DOF_stab") == 0)
      //  update6DOF_Stab(d_timestep);

      return *this;
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd)
    {
      //! - Bank
      commandBank(bank_cmd);

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd)
    {
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);

      //! Computed the updated state
      return update(timestep);
    }

    UAVSimulation
    UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd)
    {
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
      //! - Altitude
      commandAlt(altitude_cmd);

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
      commandBank(bank_cmd);
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
      }

      UAVSimulation
      UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& wind)
      {
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
      }

      UAVSimulation
      UAVSimulation::update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd, const double& wind)
      {
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
      //! - Altitude
      commandAlt(altitude_cmd);
      //! Wind state vector
      m_wind = wind;

      //! Computed the updated state
      return update(timestep);
      }
    */

    void
    UAVSimulation::integratePosition(const double& timestep)
    {
      /*
      //for debug
      double vt_position1[6] = {m_position(0), m_position(1), m_position(2), m_position(3), m_position(4), m_position(5)};
      */

      double d_initial_yaw = m_position(5);
      //! Vertical position and Euler angles state update
      m_position.set(2, 5, 0, 0, m_position.get(2, 5, 0, 0) + m_velocity.get(2, 5, 0, 0)*timestep);
      m_position(3) = DUNE::Math::Angles::normalizeRadian(m_position(3));
      m_position(5) = DUNE::Math::Angles::normalizeRadian(m_position(5));
      // Optimization variables
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
      if (m_sim_type.compare("5DOF") == 0 || m_sim_type.compare("4DOF_alt") == 0)
      {
        m_cos_pitch = std::cos(m_position(4));
        m_sin_pitch = std::sin(m_position(4));
      }
      else if (m_sim_type.compare("6DOF_stab") == 0)
      {
        m_cos_roll = std::cos(m_position(3));
        m_sin_roll = std::sin(m_position(3));
      }

      //! Horizontal position state update
      if (std::abs(m_position(3)) < 0.1)
      {
        m_position.set(0, 1, 0, 0, m_position.get(0, 1, 0, 0) + m_velocity.get(0, 1, 0, 0)*timestep);
      }
      else
      {
        double d_turn_radius = m_airspeed/m_velocity(5);
        m_position(0) += d_turn_radius*(m_sin_yaw - std::sin(d_initial_yaw))+m_wind(0)*timestep;
        m_position(1) += d_turn_radius*(std::cos(d_initial_yaw) - m_cos_yaw)+m_wind(1)*timestep;
      }

      /*
      //for debug
      double vt_position2[6] = {m_position(0), m_position(1), m_position(2), m_position(3), m_position(4), m_position(5)};
      if (std::abs(vt_position1[0] - vt_position2[0]) > 2*m_airspeed*timestep || std::abs(vt_position1[1] - vt_position2[1]) > 2*m_airspeed*timestep)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Position difference: " << vt_position1[0]-vt_position2[0] << ", " << vt_position1[1]-vt_position2[1] << std::endl;
      }
      if (std::abs(vt_position1[0] - vt_position2[0]) > 100 || std::abs(vt_position1[1] - vt_position2[1]) > 100)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Position difference: " << vt_position1[0]-vt_position2[0] << ", " << vt_position1[1]-vt_position2[1] << std::endl;
      std::cout << "Heading: " << DUNE::Math::Angles::degrees(vt_position1[5]) << "º" << std::endl;
      }
      */

      /*
      //for debug
      double vt_position2[6] = {m_position(0), m_position(1), m_position(2), m_position(3), m_position(4), m_position(5)};
      std::cout << "Prev position: " << vt_position1[0] << ", " << vt_position1[1] << std::endl;
      std::cout << "New position: " << vt_position2[0] << ", " << vt_position2[1] << std::endl;
      */
    }

    void
    UAVSimulation::calcUAV2AirData()
    {
      //! Vehicle velocity vector, relative to the wind, in the ground reference frame
      m_uav2wind_gnd_frm = m_velocity.get(0, 2, 0, 0) - m_wind;
      //! Airspeed
      m_airspeed = m_uav2wind_gnd_frm.norm_2();
      //! Angle-of-Attack
      m_ang_attack = std::atan(m_uav2wind_gnd_frm(2)/m_uav2wind_gnd_frm(0));
      //! Sideslip
      m_sideslip = std::asin(m_uav2wind_gnd_frm(1)/m_airspeed);
    }

    void
    UAVSimulation::updateVelocity(void)
    {
      //! UAV velocity components relative to the wind over the ground reference frame
      m_uav2wind_gnd_frm(0) = m_airspeed * m_cos_yaw*m_cos_pitch;
      m_uav2wind_gnd_frm(1) = m_airspeed * m_sin_yaw*m_cos_pitch;
      m_uav2wind_gnd_frm(2) = -m_airspeed * m_sin_pitch;
      //! UAV velocity components relative to the ground over the ground reference frame
      m_velocity.set(0, 2, 0, 0, m_uav2wind_gnd_frm + m_wind);
    }

    void
    UAVSimulation::update3DOF(const double& timestep)
    {
      if (timestep <= 0)
        return;

      //! Wind effects
      m_velocity(2) = m_wind(2);
      calcUAV2AirData();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================

      integratePosition(timestep);

      /*
      //for debug
      double vt_velocity1[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      //! Command effect
      //! - Airspeed command
      m_airspeed = m_airspeed_cmd;
      //! - Roll command
      m_position(3) = m_bank_cmd;

      //! Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/m_airspeed;

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      updateVelocity();

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      if (std::abs(vt_velocity1[0] - vt_velocity2[0]) > 0.5*m_airspeed*timestep/m_speed_time_cst ||
      std::abs(vt_velocity1[1] - vt_velocity2[1]) > 0.5*m_airspeed*timestep/m_speed_time_cst)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Velocity difference: " << vt_velocity1[0]-vt_velocity2[0] << ", " << vt_velocity1[1]-vt_velocity2[1] << std::endl;
      std::cout << "Heading: " << DUNE::Math::Angles::degrees(vt_position1[5]) << "º" << std::endl;
      }
      */
      /*
      //for debug
      double vt_velocity3[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      std::cout << "Prev velocity: " << vt_velocity1[0] << ", " << vt_velocity1[1] << std::endl;
      std::cout << "Int velocity: " << vt_velocity2[0] << ", " << vt_velocity2[1] << std::endl;
      std::cout << "New velocity: " << vt_velocity3[0] << ", " << vt_velocity3[1] << std::endl;
      */
    }

    void
    UAVSimulation::update4DOF_Alt(const double& timestep)
    {
      //! Check if model has the required parameters
      //! - Model control time constants
      if (!m_alt_time_cst_f)
      {
        //throw Error("Model parameter missing (Altitude time constant)! The state was not updated.");
        m_task.war("Model parameter missing (Altitude time constant)! The state was not updated.");
        return;
      }

      if (timestep <= 0)
        return;

      //! Wind effects
      calcUAV2AirData();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================

      integratePosition(timestep);

      /*
      //for debug
      double vt_velocity1[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      //! Command effect
      //! - Airspeed command
      m_airspeed = m_airspeed_cmd;
      //! - Roll command
      m_position(3) = m_bank_cmd;
      //! - Vertical rate command
      if (m_altitude_cmd_ini)
        m_velocity(2) = (-m_altitude_cmd - m_position(2))/m_alt_time_cst;
      else
        m_velocity(2) = -std::sin(m_fpa_cmd)*m_airspeed;
      if (m_vert_slope_lim_f)
      {
        double d_vert_rate_lim = m_vert_slope_lim*m_airspeed;
        m_velocity(2) = DUNE::Math::trimValue(m_velocity(2), -d_vert_rate_lim, d_vert_rate_lim);
      }
      else
        //! The vertical speed should not exceed the airspeed, even if there is no specified vertical slope limit
        m_velocity(2) = DUNE::Math::trimValue(m_velocity(2), -m_airspeed, m_airspeed);

      //! - Computing flight path angle
      m_sin_pitch = -m_velocity(2)/m_airspeed;
      m_cos_pitch = std::sqrt(1 - m_sin_pitch*m_sin_pitch);
      m_position(4) = Angles::normalizeRadian(std::asin(m_sin_pitch)*2)/2;

      //! Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/m_airspeed;

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      updateVelocity();

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      if (std::abs(vt_velocity1[0] - vt_velocity2[0]) > 0.5*m_airspeed*timestep/m_speed_time_cst ||
      std::abs(vt_velocity1[1] - vt_velocity2[1]) > 0.5*m_airspeed*timestep/m_speed_time_cst)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Velocity difference: " << vt_velocity1[0]-vt_velocity2[0] << ", " << vt_velocity1[1]-vt_velocity2[1] << std::endl;
      std::cout << "Heading: " << DUNE::Math::Angles::degrees(vt_position1[5]) << "º" << std::endl;
      }
      */
      /*
      //for debug
      double vt_velocity3[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      std::cout << "Prev velocity: " << vt_velocity1[0] << ", " << vt_velocity1[1] << std::endl;
      std::cout << "Int velocity: " << vt_velocity2[0] << ", " << vt_velocity2[1] << std::endl;
      std::cout << "New velocity: " << vt_velocity3[0] << ", " << vt_velocity3[1] << std::endl;
      */
    }

    void
    UAVSimulation::update4DOF_Bank(const double& timestep)
    {
      //! Check if model has the required parameters
      //! - Model control time constants
      if (!m_bank_time_cst_f)// && !m_speed_time_cst_f)
      {
        //throw Error("No model parameters defined! The state was not updated.");
        m_task.war("No model parameters defined! The state was not updated.");
        return;
      }

      if (timestep <= 0)
        return;

      calcUAV2AirData();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================

      integratePosition(timestep);

      /*
      //for debug
      double vt_velocity1[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      //! Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/m_airspeed;

      //! Command effect
      //! - Horizontal acceleration command
      double d_lon_accel = (m_airspeed_cmd - m_airspeed)/m_speed_time_cst;
      if (m_lon_accel_lim_f)
        d_lon_accel = DUNE::Math::trimValue(d_lon_accel, -m_lon_accel_lim, m_lon_accel_lim);
      m_airspeed += d_lon_accel*timestep;
      //! - Roll rate command
      m_velocity(3) = (m_bank_cmd - m_position(3))/m_bank_time_cst;
      if (m_bank_rate_lim_f)
        m_velocity(3) = DUNE::Math::trimValue(m_velocity(3), -m_bank_rate_lim, m_bank_rate_lim);

      //! Wind effects
      m_velocity(2) = m_wind(2);

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */
      updateVelocity();

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      if (std::abs(vt_velocity1[0] - vt_velocity2[0]) > 0.5*m_airspeed*timestep/m_speed_time_cst ||
      std::abs(vt_velocity1[1] - vt_velocity2[1]) > 0.5*m_airspeed*timestep/m_speed_time_cst)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Velocity difference: " << vt_velocity1[0]-vt_velocity2[0] << ", " << vt_velocity1[1]-vt_velocity2[1] << std::endl;
      std::cout << "Heading: " << DUNE::Math::Angles::degrees(vt_position1[5]) << "º" << std::endl;
      }
      */
      /*
      //for debug
      double vt_velocity3[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      std::cout << "Prev velocity: " << vt_velocity1[0] << ", " << vt_velocity1[1] << std::endl;
      std::cout << "Int velocity: " << vt_velocity2[0] << ", " << vt_velocity2[1] << std::endl;
      std::cout << "New velocity: " << vt_velocity3[0] << ", " << vt_velocity3[1] << std::endl;
      */
    }

    void
    UAVSimulation::update5DOF(const double& timestep)
    {
      //! Check if model has the required parameters
      //! - Model control time constants
      if (!m_bank_time_cst_f && !m_speed_time_cst_f && !m_alt_time_cst_f)
      {
        //throw Error("No model parameters defined! The state was not updated.");
        m_task.war("No model parameters defined! The state was not updated.");
        return;
      }
      else if (!m_alt_time_cst_f)
      {
        //throw Error("Model parameter missing (Altitude time constant)! The state was not updated.");
        m_task.war("Model parameter missing (Altitude time constant)! The state was not updated.");
        return;
      }

      if (timestep <= 0)
        return;

      //! Wind effects
      calcUAV2AirData();

      //==========================================================================
      //! Aircraft Dynamics
      //==========================================================================

      integratePosition(timestep);

      /*
      //for debug
      double vt_velocity1[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      */

      //! Turn rate
      m_velocity(5) = m_g * std::tan(m_position(3))/m_airspeed;

      //! Command effect
      //! - Horizontal acceleration command
      double d_lon_accel = (m_airspeed_cmd - m_airspeed)/m_speed_time_cst;
      if (m_lon_accel_lim_f)
        d_lon_accel = DUNE::Math::trimValue(d_lon_accel, -m_lon_accel_lim, m_lon_accel_lim);
      m_airspeed += d_lon_accel*timestep;
      //! - Roll rate command
      m_velocity(3) = (m_bank_cmd - m_position(3))/m_bank_time_cst;
      if (m_bank_rate_lim_f)
        m_velocity(3) = DUNE::Math::trimValue(m_velocity(3), -m_bank_rate_lim, m_bank_rate_lim);
      //! - Vertical rate command
      if (m_altitude_cmd_ini)
        m_velocity(2) = (-m_altitude_cmd - m_position(2))/m_alt_time_cst;
      else
        m_velocity(2) = -std::sin(m_fpa_cmd)*m_airspeed;
      if (m_vert_slope_lim_f)
      {
        double d_vert_rate_lim = m_vert_slope_lim*m_airspeed;
        m_velocity(2) = DUNE::Math::trimValue(m_velocity(2), -d_vert_rate_lim, d_vert_rate_lim);
      }
      else
        //! The vertical speed should not exceed the airspeed, even if there is no specified vertical slope limit
        m_velocity(2) = DUNE::Math::trimValue(m_velocity(2), -m_airspeed, m_airspeed);

      //! - Computing flight path angle
      m_sin_pitch = -m_velocity(2)/m_airspeed;
      m_cos_pitch = std::sqrt(1 - m_sin_pitch*m_sin_pitch);
      m_position(4) = Angles::normalizeRadian(std::asin(m_sin_pitch)*2)/2;

      updateVelocity();

      /*
      //for debug
      double vt_velocity2[6] = {m_velocity(0), m_velocity(1), m_velocity(2), m_velocity(3), m_velocity(4), m_velocity(5)};
      if (std::abs(vt_velocity1[0] - vt_velocity2[0]) > 0.5*m_airspeed*timestep/m_speed_time_cst ||
      std::abs(vt_velocity1[1] - vt_velocity2[1]) > 0.5*m_airspeed*timestep/m_speed_time_cst)
      {
      std::cout << "Time step: " << timestep << std::endl;
      std::cout << "Velocity difference: " << vt_velocity1[0]-vt_velocity2[0] << ", " << vt_velocity1[1]-vt_velocity2[1] << std::endl;
      std::cout << "Heading: " << DUNE::Math::Angles::degrees(m_position(5)) << "º" << std::endl;
      }
      */
    }

    void
    UAVSimulation::setPosition(const DUNE::Math::Matrix& pos)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size < 2 && i_pos_size > 6)
        //throw Error("Invalid position vector dimension. Vector size must be between 2 and 6.");
        m_task.war("Invalid position vector dimension. Vector size must be between 2 and 6.");

      // Vehicle position
      m_position.set(0, i_pos_size-1, 0, 0, pos);
      // Reset the pitch angle for the simulations that do not update it
      if (m_sim_type.compare("3DOF") == 0 || m_sim_type.compare("4DOF_bank") == 0)
        m_position(4) = 0;
      // Simulation variables
      m_cos_course = std::cos(m_position(5));
      m_sin_course = std::sin(m_position(5));
      m_cos_pitch = std::cos(m_position(4));
      m_sin_pitch = std::sin(m_position(4));
      m_cos_roll = std::cos(m_position(3));
      m_sin_roll = std::sin(m_position(3));
    }

    void
    UAVSimulation::setVelocity(const DUNE::Math::Matrix& vel)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size < 2 && i_vel_size > 6)
        //throw Error("Invalid velocity vector dimension. Vector size must be between 2 and 6.");
        m_task.war("Invalid velocity vector dimension. Vector size must be between 2 and 6.");

      //! Vehicle velocity vector, relative to the ground, in the ground reference frame
      m_velocity.set(0, i_vel_size-1, 0, 0, vel);
      // Reset the vertical velocity for the simulations that do not update it
      if (m_sim_type.compare("3DOF") == 0 || m_sim_type.compare("4DOF_bank") == 0)
        m_velocity(2) = 0;
      // Reset the pitch angular rate for the simulations that do not update it
      if (m_sim_type.compare("6DOF_dyn") != 0)
        m_velocity(4) = 0;

      calcUAV2AirData();
    }

    void
    UAVSimulation::setCtrl(const double& bank_time_cst, const double& speed_time_cst)
    {
      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
    }

    void
    UAVSimulation::setCtrl(const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst)
    {
      //! Vehicle model parameters
      //! - Bank time constant
      m_bank_time_cst = bank_time_cst;
      m_bank_time_cst_f = true;
      //! - Airspeed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
      //! - Altitude time constant
      m_alt_time_cst = alt_time_cst;
      m_alt_time_cst_f = true;
    }

    void
    UAVSimulation::setBankRateLim(const double& bank_rate_lim)
    {
      //! Vehicle operation bank rate limit and respective initialization flag
      m_bank_rate_lim = bank_rate_lim;
      if (bank_rate_lim > 0)
        m_bank_rate_lim_f = true;
      else
        m_bank_rate_lim_f = false;
    }

    void
    UAVSimulation::setAccelLim(const double& lon_accel_lim)
    {
      //! Vehicle operation longitudinal acceleration limit and respective initialization flag
      m_lon_accel_lim = lon_accel_lim;
      if (lon_accel_lim > 0)
        m_lon_accel_lim_f = true;
      else
        m_lon_accel_lim_f = false;
    }

    void
    UAVSimulation::setVertSlopeLim(const double& vert_slope_lim)
    {
      //! Vehicle operation vertical slope limit and respective initialization flag
      m_vert_slope_lim = vert_slope_lim;
      if (vert_slope_lim > 0)
        m_vert_slope_lim_f = true;
      else
        m_vert_slope_lim_f = false;
    }

    DUNE::Math::Matrix
    UAVSimulation::getPosition(void)
    {
      //! Vehicle position
      return m_position;
    }

    DUNE::Math::Matrix
    UAVSimulation::getVelocity(void)
    {
      //! Vehicle velocity vector, relative to the ground, in the ground reference frame
      return m_velocity;
    }

    double
    UAVSimulation::getAirspeed(void)
    {
      //! Aircraft total airspeed
      return m_airspeed;
    }

    double
    UAVSimulation::getBankCmd(void)
    {
      //! Aircraft Bank
      return m_bank_cmd;
    }

    double
    UAVSimulation::getAirspeedCmd(void)
    {
      //! Aircraft airspeed
      return m_airspeed_cmd;
    }

    double
    UAVSimulation::getAltCmd(void)
    {
      //! Aircraft altitude
      return m_altitude_cmd;
    }

    void
    UAVSimulation::command(const double& bank_cmd)
    {
      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
    }

    void
    UAVSimulation::command(const double& bank_cmd, const double& airspeed_cmd)
    {
      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
    }

    void
    UAVSimulation::command(const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd)
    {
      //! Control commands
      //! - Bank
      commandBank(bank_cmd);
      //! - Airspeed
      commandAirspeed(airspeed_cmd);
      //! - Altitude
      commandAlt(altitude_cmd);
    }

    void
    UAVSimulation::commandBank(const double& bank_cmd)
    {
      if (Math::isNaN(bank_cmd)) // Check if the command is a real value
        m_task.war("UAV Simulation - Bank command rejected - Commanded value is not a number!\n");
      else
        m_bank_cmd = bank_cmd;
    }

    void
    UAVSimulation::commandAirspeed(const double& airspeed_cmd)
    {
      if (Math::isNaN(airspeed_cmd)) // Check if the command is a real value
        m_task.war("UAV Simulation - Speed command rejected - Commanded value is not a number!\n");
      else
      {
        m_airspeed_cmd = airspeed_cmd;
        m_airspeed_cmd_ini = true;
      }
    }

    void
    UAVSimulation::commandAlt(const double& altitude_cmd)
    {
      if (Math::isNaN(altitude_cmd)) // Check if the command is a real value
        m_task.war("UAV Simulation - Altitude command rejected - Commanded value is not a number!\n");
      else
      {
        //! Altitude command
        m_altitude_cmd = altitude_cmd;
        if (m_sim_type.compare("3DOF") == 0 || m_sim_type.compare("4DOF_bank") == 0)
          m_position(2) = -altitude_cmd;
        //! Altitude command initialization flags
        m_altitude_cmd_ini = true;
        //! Disallow flight path angle reference
        m_fpa_cmd_ini = false;
        //! Disallow pitch reference
        m_pitch_cmd_ini = false;
      }
    }

    void
    UAVSimulation::commandFPA(const double& fpa_cmd)
    {
      if (Math::isNaN(fpa_cmd)) // Check if the command is a real value
        m_task.war("UAV Simulation - Flight path angle command rejected - Commanded value is not a number!\n");
      else
      {
        //! Flight path angle command
        m_fpa_cmd = fpa_cmd;
        //! Disallow altitude reference
        m_altitude_cmd_ini = false;
        //! Flight path angle command initialization flags
        m_fpa_cmd_ini = true;
        //! Disallow pitch reference
        m_pitch_cmd_ini = false;
      }
    }

    void
    UAVSimulation::commandPitch(const double& pitch_cmd)
    {
      if (Math::isNaN(pitch_cmd)) // Check if the command is a real value
        m_task.war("UAV Simulation - Pitch command rejected - Commanded value is not a number!\n");
      else
      {
        //! Flight path angle command
        m_pitch_cmd = pitch_cmd;
        //! Disallow altitude reference
        m_altitude_cmd_ini = false;
        //! Disallow flight path angle reference
        m_fpa_cmd_ini = false;
        //! Pitch command initialization flags
        m_pitch_cmd_ini = true;
      }
    }
  }
}
