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
// Author: Andre Guerra                                                     *
//***************************************************************************
// Class for working with satellite                                         *
//***************************************************************************

#ifndef TRANSPORTS_SATCOMMS_SATLINK_HPP_INCLUDED_
#define TRANSPORTS_SATCOMMS_SATLINK_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers


namespace Transports {
    namespace SatComms {
        using DUNE_NAMESPACES;

        /////////////
        //! VARIABLE TYPES DEFINITION
        /////////////

        //! Spacecraft orbit parameters
        struct SatOrbitParameters {
            double orbit_period;        //! Satellite orbital period
            double comm_window;         //! Satellite communications window
            double last_passage;        //! Last time satellite was in view
            //! There may be other parameters if other methods to locate the satellite are used
        };

        //! Orbital parameters check list
        struct OrbitCheckList {
            bool orbit_period_c;        //! Orbital period set
            double comm_window_c;       //! Communications window set
            double last_passage_c;      //! Last passage set
            //! There may be other parameters if other methods to locate the satellite are used
        };

        //! Orbital parameters available
        enum class OrbitalParam {
            Orbital_Period,
            Communication_Window,
            Last_Passage,
            All
        };

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
            double time_stamp;                   //! Timer to control passage of time for satellite

            SatOrbitParameters orbit;       //! Orbit parameters
            OrbitCheckList orbit_check;     //! Orbit check list

            /////////////////////
            //! Private Functions


            ///////////////////////////////////////
            //! PUBLIC ACCESS
        public:
            //! Constructor
            SatelliteLink(Tasks::Task* task) :
                m_task(task) {
                //! Initialise variables
                sat_in_view = false;
                time_stamp = Clock::getSinceEpoch();
                resetOrbitalParm(OrbitalParam::All);
            }

            /////////////////////
            //! Public Variables


            /////////////////////
            //! Public Functions


            //! Set orbital parameters
            //! @param[in]  param_val       - Orbital parameter value.
            //! @return     boolean         - If orbital parameter was set correctly or not.
            bool setOrbitalParam(OrbitalParam orbit_param, double param_val) {
                switch (orbit_param) {
                    ////////////
                case OrbitalParam::Orbital_Period:
                    if (param_val <= 0) {
                        m_task->err(DTR("ERROR: SETORB: Error, communications window has to be positive."));
                        return false;
                    }

                    //! Set satellite orbital period
                    orbit.orbit_period = param_val;

                    //! Check agreement with other values
                    if (orbit_check.comm_window_c == true && orbit.orbit_period <= orbit.comm_window) {
                        resetOrbitalParm(OrbitalParam::Communication_Window);
                        m_task->inf(DTR("SETPARM: Re-set communications window value."));
                    }
                    if (orbit_check.last_passage_c == true) {
                        orbit_check.last_passage_c = false;     //! Last passage has to be reset
                        m_task->inf(DTR("SETPARM: Re-set last passage value."));
                    }

                    //! Check item of orbit checklist
                    orbit_check.orbit_period_c = true;      //! Orbital period was set

                    //! Inform the user
                    m_task->inf(DTR("SETPARM: Orbital period set OK."));
                    break;
                    ////////////
                case OrbitalParam::Communication_Window:
                    //! Check if it can be set correctly
                    if (orbit_check.orbit_period_c == true && param_val > orbit.orbit_period) {
                        m_task->err(DTR("ERROR: SETORB: Error, communications window cannot be higher to orbital period."));
                        return false;
                    }
                    else if (param_val <= 0) {
                        m_task->err(DTR("ERROR: SETORB: Error, communications window has to be positive."));
                        return false;
                    }
                    else {
                        //! Set satellite communications window
                        orbit.comm_window = param_val;
                    }

                    //! Check item of orbit checklist
                    orbit_check.comm_window_c = true;       //! Orbital period was set

                    //! Inform the user
                    m_task->inf(DTR("SETPARM: Communications window set OK."));
                    break;
                    ////////////
                case OrbitalParam::Last_Passage:
                    //! Check if it can be set correctly
                    if (orbit_check.orbit_period_c == true && param_val > orbit.orbit_period) {
                        m_task->err(DTR("ERROR: SETORB: Error, last passage has to be less than the orbital period."));
                        return false;
                    }
                    else if (param_val < 0) {
                        m_task->err(DTR("ERROR: SETORB: Error, last passage has to be zero or positive."));
                        return false;
                    }
                    else {
                        //! Set last time satellite was in view
                        orbit.last_passage = param_val;

                        //! Reset timer
                        time_stamp = Clock::getSinceEpoch() - orbit.last_passage;
                        m_task->inf("Satellite last appear %.f seconds ago", Clock::getSinceEpoch() - time_stamp);
                    }

                    //! Check item of orbit checklist
                    orbit_check.last_passage_c = true;      //! Orbital period was set

                    //! Inform the user
                    m_task->inf(DTR("SETPARM: Last passage set OK."));
                    break;
                    ////////////
                default:
                    m_task->err(DTR("ERROR: SETPARM: An orbital parameter must be choosen."));
                    break;
                }
                return true;
            }

            //! Get orbital parameter
            //! @param[in]  orbit_param     - Orbital parameter to check
            //! @return     param_val       - Orbital parameter value.
            double getOrbitalParm(OrbitalParam orbit_param) {
                switch (orbit_param) {
                case OrbitalParam::Orbital_Period:
                    return orbit.orbit_period;
                    break;
                case OrbitalParam::Communication_Window:
                    return orbit.comm_window;
                    break;
                case OrbitalParam::Last_Passage:
                    return orbit.last_passage;
                    break;
                    ////////////
                default:
                    m_task->err(DTR("ERROR: GETPARM: An orbital parameter must be choosen."));
                    return 0;
                    break;
                }
            }

            //! Check if orbital parameter was set
            //! @param[in]  orbit_param     - Orbital parameter to check
            //! @return     boolean         - If parameter was set or not.
            bool checkOrbitalParm(OrbitalParam orbit_param) {
                switch (orbit_param) {
                case OrbitalParam::Orbital_Period:
                    return orbit_check.orbit_period_c;
                    break;
                case OrbitalParam::Communication_Window:
                    return orbit_check.comm_window_c;
                    break;
                case OrbitalParam::Last_Passage:
                    return orbit_check.last_passage_c;
                    break;
                case OrbitalParam::All:
                    return (orbit_check.orbit_period_c && orbit_check.comm_window_c && orbit_check.last_passage_c);
                    break;
                }
                return false;
            }

            //! Reset orbital parameter
            //! @param[in]  orbit_param     - Orbital parameter to reset
            void resetOrbitalParm(OrbitalParam orbit_param) {
                switch (orbit_param) {
                case OrbitalParam::Orbital_Period:
                    orbit.orbit_period = 0;
                    orbit_check.orbit_period_c = false;
                    break;
                case OrbitalParam::Communication_Window:
                    orbit.comm_window = 0;
                    orbit_check.comm_window_c = false;
                    break;
                case OrbitalParam::Last_Passage:
                    orbit.last_passage = -1;
                    orbit_check.last_passage_c = false;
                    break;
                case OrbitalParam::All:
                    orbit.orbit_period = 0;
                    orbit_check.orbit_period_c = false;
                    orbit.comm_window = 0;
                    orbit_check.comm_window_c = false;
                    orbit.last_passage = -1;
                    orbit_check.last_passage_c = false;
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
            //! @return     boolean         - If satellite is in view.
            bool locateSatellite(void) {
                //! This function will need to know if a satellite is present
                //! Maybe it could have a orbit propagator? Is it too heavy?
                //! For now it just simulates the presence of the satellite with a time counter
                
                if (checkOrbitalParm(OrbitalParam::All)) {
                    //! Time since last passage
                    orbit.last_passage = Clock::getSinceEpoch() - time_stamp;
                    //Use difftime(time(NULL), m_args.sat.time_stamp); if ctime is used

                    if (!sat_in_view) {     //! If satellite was not in view
                        //! If one orbital period has passed and it is still within the communications window
                        if (orbit.last_passage >= orbit.orbit_period && orbit.last_passage < orbit.orbit_period + orbit.comm_window) {
                            //! Reset timer
                            time_stamp = Clock::getSinceEpoch();  // = time(NULL) if ctime is used
                            //! And return that the satellite is in view
                            sat_in_view = true;
                            m_task->inf(DTR("Satellite is here!"));
                        }
                        //! Remove extra orbital periods that have passed
                        else if (orbit.last_passage > orbit.orbit_period + orbit.comm_window) {
                            do {
                                time_stamp = time_stamp + orbit.orbit_period;
                            } while (Clock::getSinceEpoch() - time_stamp > orbit.orbit_period);
                        }
                    }
                    else {              //! If satellite was in view
                        if (orbit.last_passage > orbit.comm_window) {       //! If the communications window has passed
                            sat_in_view = false;
                            m_task->inf(DTR("Satellite has gone away!"));
                        }
                    }
                    return sat_in_view;
                }
                else {
                    m_task->inf(DTR("WARNING: Set orbital parameters before asking for satellite position."));
                }
                return false;
            }

        };
    }
}

#endif