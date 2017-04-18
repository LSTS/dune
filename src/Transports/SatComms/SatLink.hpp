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
// Author: André Guerra                                                     *
//***************************************************************************
// Class for working with the satellite by setting its orbital parameters   *
//  and knowing when it is in view of the vehicle                           *
//***************************************************************************

#ifndef TRANSPORTS_SATCOMMS_SATLINK_HPP_INCLUDED_
#define TRANSPORTS_SATCOMMS_SATLINK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include <cmath>        // std::abs
#include <algorithm>    // std::min


namespace Transports {
  namespace SatComms {
    using DUNE_NAMESPACES;

    /////////////
    //! VARIABLE TYPES DEFINITION
    /////////////

    //! Spacecraft orbit parameters
    struct OrbitalParametersValue {
      double orbit_period;        //! Satellite orbital period
      double comm_window;         //! Satellite communications window
      double last_passage;        //! Last time satellite was in view
      //TODO Add other parameters if other methods to locate the satellite are used
    };

    //! Orbital parameters check list
    struct OrbitCheckList {
      bool orbit_period_check;        //! Orbital period set
      bool comm_window_check;         //! Communications window set
      bool last_passage_check;        //! Last passage set
      //TODO Add other parameters if other methods to locate the satellite are used
    };

    //! Orbital parameters available
    enum OrbitalParameter {
      ORB_PARAM_ORB_PERIOD,
      ORB_PARAM_COMM_WINDOW,
      ORB_PARAM_LAST_PASSAGE,
      ORB_PARAM_ALL
    };

    //! Watchdog
	Counter<double> m_wdog;

    /////////////
    //! Satellite Link Class
    /////////////
    class SatelliteLink {
      ///////////////////////////////////////
      //! PRIVATE ACCESS
    private:
      /////////////////////
      //! Private Variables
      Tasks::Task* m_task;            //! Pointer to task

      bool sat_in_view;               //! Satellite is in view/or not (1/0)
      double time_stamp;              //! Timer to control passage of time for satellite

      OrbitalParametersValue orbit_param;	//! Orbit parameters
      OrbitCheckList orbit_check;			//! Orbit check list

      //! Control variables
      bool m_wwar_count;               //! Number of warning messages for waiting for satellite

      ///////////////////////////////////////
      //! PUBLIC ACCESS
    public:
      //! Constructor
      SatelliteLink(Tasks::Task* task) :
        m_task(task) {
        //! Initialise variables
        sat_in_view = false;
        time_stamp = Clock::getSinceEpoch();
        m_wwar_count = false;
        resetOrbitalParam(ORB_PARAM_ALL);
      }

      /////////////////////
      //! Public Functions

      //! Set orbital parameters
      //! @param[in]  orbit_param_op	- Orbital parameter to be set.
      //! @param[in]  param_val			- Orbital parameter value.
      //! @return     boolean			- If orbital parameter was set correctly or not.
      bool setOrbitalParam(int orbit_param_op, double param_val) {
        switch (orbit_param_op) {
        case ORB_PARAM_ORB_PERIOD:
          //! Check agreement with comm window
          if (orbit_check.comm_window_check == true && param_val <= orbit_param.comm_window) {
            resetOrbitalParam(ORB_PARAM_COMM_WINDOW);
            m_task->inf(DTR("SETPARAM: Re-set communications window value."));
          }

          //! If last passage was set before, it has to be reset
          if (orbit_check.last_passage_check == true) {
            resetOrbitalParam(ORB_PARAM_LAST_PASSAGE);
            m_task->inf(DTR("SETPARAM: Re-set last passage value."));
          }

          //! Set satellite orbital period
          orbit_param.orbit_period = param_val;

          //! Check item of orbit checklist
          orbit_check.orbit_period_check = true;      //! Orbital period was set

          //! Inform the user
          m_task->inf(DTR("SETPARAM: Orbital period set OK."));
          break;
        case ORB_PARAM_COMM_WINDOW:
          //! Check if it can be set correctly
          if (orbit_check.orbit_period_check == true && param_val > orbit_param.orbit_period) {
            m_task->war(DTR("WARNING: SETORB: Communications window cannot be higher to orbital period."));
            return false;
          }

          //! Set satellite communications window
          orbit_param.comm_window = param_val;

          //! Check item of orbit checklist
          orbit_check.comm_window_check = true;       //! Orbital period was set

          //! Inform the user
          m_task->inf(DTR("SETPARAM: Communications window set OK."));
          break;
        case ORB_PARAM_LAST_PASSAGE:
          //! Check if it can be set correctly
          if (orbit_check.orbit_period_check == true && param_val > orbit_param.orbit_period) {
            m_task->war(DTR("WARNING: SETORB: Last passage has to be less than the orbital period."));
            return false;
          }

          //! Reset timer
          time_stamp = Clock::getSinceEpoch() - param_val;
          m_task->inf(DTR("Satellite last appear %.1f seconds ago"), Clock::getSinceEpoch() - time_stamp);

          //! Set last time satellite was in view
          orbit_param.last_passage = param_val;

          //! Check item of orbit checklist
          orbit_check.last_passage_check = true;      //! Orbital period was set

          //! Inform the user
          m_task->inf(DTR("SETPARAM: Last passage set OK."));
          break;
        default:
          m_task->trace("ERROR: SETPARAM: An orbital parameter must be choosen.");
          break;
        }
        return true;
      }

      //! Get orbital parameter
      //! @param[in]  orbit_param_op	- Orbital parameter to check
      //! @return     param_val			- Orbital parameter value.
      double getOrbitalParam(int orbit_param_op) {
        switch (orbit_param_op) {
        case ORB_PARAM_ORB_PERIOD:
          return orbit_param.orbit_period;
        case ORB_PARAM_COMM_WINDOW:
          return orbit_param.comm_window;
        case ORB_PARAM_LAST_PASSAGE:
          return orbit_param.last_passage;
        default:
          m_task->trace("ERROR: GETPARM: An orbital parameter must be choosen.");
          return 0;
        }
      }

      //! Check if orbital parameter was set
      //! @param[in]  orbit_param_op	- Orbital parameter to check
      //! @return     boolean			- If parameter was set or not.
      bool checkOrbitalParam(int orbit_param_op) {
        switch (orbit_param_op) {
        case ORB_PARAM_ORB_PERIOD:
          return orbit_check.orbit_period_check;
        case ORB_PARAM_COMM_WINDOW:
          return orbit_check.comm_window_check;
        case ORB_PARAM_LAST_PASSAGE:
          return orbit_check.last_passage_check;
        case ORB_PARAM_ALL:
          return (orbit_check.orbit_period_check && orbit_check.comm_window_check && orbit_check.last_passage_check);
        default:
          m_task->trace("ERROR: CHECKPARM: An orbital parameter must be choosen.");
          return false;
        }
      }

      //! Reset orbital parameter
      //! @param[in]  orbit_param_op	- Orbital parameter to reset
      void resetOrbitalParam(int orbit_param_op) {
        switch (orbit_param_op) {
        case ORB_PARAM_ORB_PERIOD:
          orbit_check.orbit_period_check = false;
          break;
        case ORB_PARAM_COMM_WINDOW:
          orbit_check.comm_window_check = false;
          break;
        case ORB_PARAM_LAST_PASSAGE:
          orbit_check.last_passage_check = false;
          break;
        case ORB_PARAM_ALL:
          orbit_check.orbit_period_check = false;
          orbit_check.comm_window_check = false;
          orbit_check.last_passage_check = false;
          break;
        }
        return;
      }

      //! Check if satellite is in view
      //! @return     boolean         - If satellite is in view.
      bool reachSatellite(void) {
        return sat_in_view;
      }

      //! Locate satellite and return if it is in view
      //! @param[in]  quite_state	    - Quiet state or not
      //! @return     boolean         - If satellite is in view.
      bool locateSatellite(bool quite_state) {
        //! This function will need to know if a satellite is present
        //! Maybe it could have a orbit propagator? Is it too heavy?
        //! For now it just simulates the presence of the satellite with a time counter

        if (!checkOrbitalParam(ORB_PARAM_ALL)) {
          m_task->war(DTR("WARNING: Set orbital parameters before asking for satellite position."));
          return false;
        }

        double c_orbit_period = orbit_param.orbit_period;   //! Satellite Orbital Period
        double c_comm_window = orbit_param.comm_window;     //! Satellite Communication Window

        //! Remove extra orbital periods that have passed
        while (Clock::getSinceEpoch() - time_stamp > c_orbit_period) {
          time_stamp = time_stamp + c_orbit_period;
        }

        //! Time since last passage
        orbit_param.last_passage = Clock::getSinceEpoch() - time_stamp;
        double c_last_passage = orbit_param.last_passage;   //! Satellite Last Passage Time

        if (!sat_in_view) {     //! If satellite was not in view
            //! If it is still within the communications window
          if (c_last_passage < c_comm_window) {
            //! Reset timer
            time_stamp = Clock::getSinceEpoch();

            //! And return that the satellite is in view
            sat_in_view = true;

            //! Set watchdog
            m_wdog.setTop(c_comm_window);

            //! Inform the user
            if (!quite_state) {
              m_task->inf(DTR("Satellite is here!"));
            }

            //! Reset warnings
            m_wwar_count = false;
          }
          else {
            if (!quite_state) {
              if (!m_wwar_count) {    //! Show warning just for the first time
                m_task->inf(DTR("Waiting for satellite to appear! ​Should reappear in %f minutes..."), (c_orbit_period - c_last_passage) / 60);
                m_wwar_count = true;
              }
            }

            //! Delay execution for satellite to appear again
            ////////////Concurrency::Scheduler::yield();
            ////////////Time::Delay::wait(1.0);
          }
        }
        else {              //! If satellite was in view
          if (c_last_passage > c_comm_window) {       //! If the communications window has passed
              //! Return that the satellite is no longer in view
            sat_in_view = false;

            //! Inform the user
            if (!quite_state) {
              m_task->inf(DTR("Satellite has gone away!"));
            }

            //! Reset warnings
            m_wwar_count = false;
          }
          else {
            if (!quite_state) {
              if (!m_wwar_count) {    //! Show warning just for the first time
                m_task->inf(DTR("Satellite still in view for the next %f minutes!"), (c_comm_window - c_last_passage) / 60);
                m_wwar_count = true;
              }
            }

            //! Delay execution for satellite to go away
            ////////////Concurrency::Scheduler::yield();   // !!!!WRN:
            ////////////Time::Delay::wait(1.0);
          }
        }
        return sat_in_view;
      }

    };
  }
}

#endif
