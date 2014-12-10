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

#ifndef DUNE_SIMULATION_UAV_HPP_INCLUDED_
#define DUNE_SIMULATION_UAV_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  // Forward declarations.
  namespace Math {class Matrix; }

  namespace Simulation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM UAVSimulation;

    class UAVSimulation
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("UAV simulation error: " + msg)
        { }
      };

      /*
      class Warning: public std::warn
      {
        Warning(const std::string& msg):
          std::warn("UAV simulation warning: " + msg)
        { }
      };
      */

      //! Constructor.
      //! Create a simulation model with null initial state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      UAVSimulation(Tasks::Task& task);

      //! Constructor.
      //! Create a simulation model as a copy of another
      //! @param[in] simul - simulation model to be replicated
      UAVSimulation(const UAVSimulation& simul);

      //! Constructor.
      //! Create a simulation model with null initial state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model with null initial state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with bank and speed dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(Tasks::Task& task, const double& bank_time_cst, const double& speed_time_cst);

      //! Constructor.
      //! Create a simulation model with null initial state
      //! and the vehicle model parameters.
      //! 5 DOF simulation with bank, speed, and altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with bank and speed dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state
      //! and the vehicle model parameters.
      //! 5 DOF simulation with bank, speed, and altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel,
          const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state,
      //! the vehicle model parameters, and initial commands.
      //! 4 DOF simulation with bank and speed dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] bank_cmd - applied bank command
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst,
          const double& airspeed_cmd, const double& bank_cmd);

      //! Constructor.
      //! Create a simulation model based on the initial state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel);

      //! Constructor.
      //! Create a simulation model based on the initial state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial state
      //! and the vehicle model parameters.
      //! 4 DOF simulation with bank and speed dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial state
      //! and the vehicle model parameters.
      //! 5 DOF simulation with bank, speed, and altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] alt_time_cst - altitude time constant
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
          const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst);

      //! Constructor.
      //! Create a simulation model based on the initial state,
      //! the vehicle model parameters, and initial commands.
      //! 4 DOF simulation with bank and speed dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] bank_cmd - applied bank command
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
          const double& bank_time_cst, const double& speed_time_cst,
          const double& airspeed_cmd, const double& bank_cmd);

      //! Constructor.
      //! Create a simulation model based on the initial state,
      //! the vehicle model parameters, and initial commands.
      //! 5 DOF simulation with bank, speed, and altitude dynamics.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] alt_time_cst - altitude time constant
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] altitude_cmd - applied altitude command
      UAVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel,
          const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst,
          const double& airspeed_cmd, const double& bank_cmd, const double& altitude_cmd);

      //! This method assigns a UAVSimulation with another UAVSimulation.
      //! @param[in] model reference to UAV simulation model to be assigned
      //! @return reference to resultant UAV simulation model
      UAVSimulation&
      operator=(const UAVSimulation& model);

      //! This method resets all the vehicle model variables.
      void
      resetModel(void);

      //! This method updates the simulated state with the defined time step.
      //! @param[in] timestep - time step for the update
      //! @return the updated state
      UAVSimulation
      update(const double& timestep);

      //! This method updates the simulated state with the defined time step and controls.
      //! @param[in] timestep - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd);

      //! This method updates the simulated state with the defined time step and controls.
      //! @param[in] timestep - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd);

      //! This method updates the simulated state with the defined time step and controls.
      //! @param[in] timestep - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] altitude_cmd - applied altitude command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd);

      /*
      //! This method updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& wind);

      //! This method updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& wind);

      //! This method updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& wind);

      //! This method updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] altitude_cmd - applied altitude command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd, const double& wind);
      */

      //! This method sets the vehicle model control parameters.
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      void
      setCtrl(const double& bank_time_cst, const double& speed_time_cst);

      //! This method sets the vehicle model control parameters.
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      //! @param[in] alt_time_cst - altitude time constant
      void
      setCtrl(const double& bank_time_cst, const double& speed_time_cst, const double& alt_time_cst);

      //! This method sets the vehicle model bank rate operation constraint.
      //! @param[in] bank_rate_lim - bank rate limit
      void
      setBankRateLim(const double& bank_rate_lim);

      //! This method sets the vehicle model longitudinal acceleration operation constraint.
      //! @param[in] lon_accel_lim - longitudinal acceleration limit
      void
      setAccelLim(const double& lon_accel_lim);

      //! This method sets the vehicle model vertical slope operation constraint.
      //! @param[in] vert_slope_lim - vertical slope limit
      void
      setVertSlopeLim(const double& vert_slope_lim);

      //! This method gets the vehicle state.
      //! @returns pos - current position vector
      DUNE::Math::Matrix
      getPosition(void);

      //! This method gets the vehicle state.
      //! @returns vel - current velocity vector
      DUNE::Math::Matrix
      getVelocity(void);

      //! This method gets the vehicle state.
      //! @returns airspeed - current aircraft total airspeed
      double
      getAirspeed(void);

      //! This method gets the vehicle bank command.
      //! @returns bank command
      double
      getBankCmd(void);

      //! This method gets the vehicle airspeed command.
      //! @returns airspeed command
      double
      getAirspeedCmd(void);

      //! This method gets the vehicle altitude command.
      //! @returns altitude command
      double
      getAltCmd(void);

      //! This method sets the vehicle state.
      //! @param[in] pos - new position vector
      void
      setPosition(const DUNE::Math::Matrix& pos);

      //! This method sets the vehicle state.
      //! @param[in] vel - new velocity vector
      void
      setVelocity(const DUNE::Math::Matrix& vel);

      //! This method sets the vehicle control commands.
      //! @param[in] bank_cmd - applied bank command
      void
      command(const double& bank_cmd);

      //! This method sets the vehicle control commands.
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      void
      command(const double& bank_cmd, const double& airspeed_cmd);

      //! This method sets the vehicle control commands.
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] altitude_cmd - applied altitude command
      void
      command(const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd);

      //! This method sets the vehicle bank command.
      //! @param[in] bank_cmd - applied bank command
      void
      commandBank(const double& bank_cmd);

      //! This method sets the vehicle airspeed command.
      //! @param[in] airspeed_cmd - applied airspeed command
      void
      commandAirspeed(const double& airspeed_cmd);

      //! This method sets the vehicle altitude command.
      //! @param[in] altitude_cmd - applied altitude command
      void
      commandAlt(const double& altitude_cmd);

      //! This method sets the vehicle flight path angle command.
      //! @param[in] fpa_cmd - applied flight path angle command
      void
      commandFPA(const double& fpa_cmd);

      //! This method sets the vehicle pitch command.
      //! @param[in] pitch_cmd - applied pitch command
      void
      commandPitch(const double& pitch_cmd);

      // Parent task.
      Tasks::Task& m_task;

      //! Simulation type
      std::string m_sim_type;

      //! Wind state vector
      DUNE::Math::Matrix m_wind;
      //! Gravity acceleration
      double m_g;

      //! Time step control
      //! - If negative, the time step limitation is disabled
      double m_timestep_lim;

    private:
      //! Vehicle position
      DUNE::Math::Matrix m_position;
      //! Vehicle velocity vector
      DUNE::Math::Matrix m_velocity;
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      DUNE::Math::Matrix m_uav2wind_gnd_frm;

      //! Kinematic models' variables
      //! Vehicle model parameters and respective initialization flags
      //! - Bank time constant
      double m_bank_time_cst;
      bool m_bank_time_cst_f;
      //! - Airspeed time constant
      double m_speed_time_cst;
      bool m_speed_time_cst_f;
      //! - Altitude time constant
      double m_alt_time_cst;
      bool m_alt_time_cst_f;
      //! Vehicle operation limits and respective initialization flags
      //! - Bank rate
      double m_bank_rate_lim;
      bool m_bank_rate_lim_f;
      //! - Longitudinal acceleration
      double m_lon_accel_lim;
      bool m_lon_accel_lim_f;
      //! - Vertical slope
      double m_vert_slope_lim;
      bool m_vert_slope_lim_f;

      //! Control commands
      //! - Bank
      double m_bank_cmd;
      //! - Airspeed
      double m_airspeed_cmd;
      //! - Altitude
      double m_altitude_cmd;
      //! - Flight path angle
      double m_fpa_cmd;
      //! - Pitch
      double m_pitch_cmd;
      //! Control commands initialization flags
      //! - Airspeed
      bool m_airspeed_cmd_ini;
      //! - Altitude
      bool m_altitude_cmd_ini;
      //! - Flight path angle
      bool m_fpa_cmd_ini;
      //! - Pitch
      bool m_pitch_cmd_ini;

      //! Airstream data
      double m_airspeed;
      double m_ang_attack;
      double m_sideslip;

      //! Simulation optimization variables
      double m_cos_yaw;
      double m_sin_yaw;
      double m_cos_pitch;
      double m_sin_pitch;
      double m_cos_roll;
      double m_sin_roll;
      double m_cos_course;
      double m_sin_course;
      double m_cos_fl_path_ang;
      double m_sin_fl_path_ang;

      //! Simulation update functions
      void
      integratePosition(const double& timestep);

      void
      calcUAV2AirData(void);

      void
      updateVelocity(void);

      void
      update3DOF(const double& timestep);

      void
      update4DOF_Bank(const double& timestep);

      void
      update4DOF_Alt(const double& timestep);

      void
      update5DOF(const double& timestep);

      /*
      //! This method acts as destructor.
      void
      erase(void);

      //! This method creates a unique copy of the data of a Matrix.
      void
      split(void);
      */
    };
  }
}

#endif
