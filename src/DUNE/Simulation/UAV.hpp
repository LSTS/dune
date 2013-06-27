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

      //! Constructor.
      //! Create a simulated state with null initial state and the vehicle model parameters
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(const double& bank_time_cst, const double& speed_time_cst);

      //! Constructor.
      //! Create a simulated state based on the initial state.
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst);

      //! Constructor.
      //! Create a simulated state based on the initial state.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      UAVSimulation(const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel, const double& bank_time_cst, const double& speed_time_cst);

      //! This methods updates the simulated state with the defined time step.
      //! @param[in] d_t time step for the update
      //! @return the updated state
      UAVSimulation
      update(const double& timestep);

      //! This methods updates the simulated state with the defined time step and controls.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd);


      //! This methods updates the simulated state with the defined time step and controls.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd);

      //! This methods updates the simulated state with the defined time step and controls.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] altitude_cmd - applied altitude command
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd);

      /*
      //! This methods updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& wind);

      //! This methods updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& wind);

      //! This methods updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& wind);

      //! This methods updates the simulated state with the defined time step, controls, and wind state.
      //! @param[in] d_t - time step for the update
      //! @param[in] bank_cmd - applied bank command
      //! @param[in] airspeed_cmd - applied airspeed command
      //! @param[in] altitude_cmd - applied altitude command
      //! @param[in] vd_wind - vector of the wind state to be applied
      //! @return the updated state
      UAVSimulation
      update(const double& timestep, const double& bank_cmd, const double& airspeed_cmd, const double& altitude_cmd, const double& wind);
      */

      //! This methods updates the vehicle model parameters.
      //! @param[in] bank_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - airspeed time constant
      void
      model(const double& bank_time_cst, const double& speed_time_cst);

      //! Simulation type
      std::string m_sim_type;
      //! Control commands
      //! - Bank
      double m_bank_cmd;
      //! - Airspeed
      double m_airspeed_cmd;
      //! - Altitude
      double m_altitude_cmd;
      //! Wind state vector
      DUNE::Math::Matrix m_wind;
      //! Gravity acceleration
      double m_g;

    private:
      //! Vehicle position
      DUNE::Math::Matrix m_position;
      //! Vehicle velocity vector
      DUNE::Math::Matrix m_velocity;
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      DUNE::Math::Matrix m_uav2wind_gnd_frm;
      //! Vehicle model parameters
      //! - Bank time constant
      double m_bank_time_cst;
      //! - Airspeed time constant
      double m_speed_time_cst;

      void
      update4DOF_Bank(const double& timestep);

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
