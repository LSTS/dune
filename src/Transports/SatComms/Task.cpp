//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Andre Guerra                                                     *
//***************************************************************************
// This function deals with the communications with the HumSat system       *
// from UVigo.                                                              *
// 1 - Determines when a satellite is in view to transmit                   *
// 2 - It consumes messages from the bus                                    *
// 3 - Makes the division of the message (HumSat only accepts messages      *
//     with 32 bytes maximum                                                *
// 4 - It sends the messages to the radio                                   *
// 5 - Waits for the next satellite                                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Include headers
#include "SatLink.hpp"
#include "HumSat.hpp"
#include "RadioMsg.hpp"

namespace Transports {
    namespace SatComms {
        using DUNE_NAMESPACES;

        //! %Task arguments.
        struct Arguments {
            /////////////
            //! Debug parameters
            bool debug_w_neptus = false;        //! If the tast is being debuged with neptus or not

            /////////////
            //! Satellite orbit
            bool sat_state;                     //! Satellite connected (true or false)
            // !!!!WRN: Grey out satellite options for sat_state = false!
            SatOrbitParameters sat_orbparm;     //! Parameters of spacecraft

            /////////////
            //! User data
            DataCheckList data_to_send;         //! Data to be sent

            /////////////
            //! HumSat radio
            bool radio_state;                   //! Radio connected (true or false)
            // !!!!WRN: Grey out radio options for radio_state = false!

            uint16_t radio_power;               //! Radio transmission Power
            int32_t radio_freq;                 //! Radio transmission Frequency
            char radio_id[6];                   //! User amateur call id ////!!!!WRN: Can it be done in other way? ->  = {'E','A','1','R','C','T'}
            std::string radio_id_aux;			//! User amateur call id (auxiliary variable)
            bool radio_id_state = false;		//! User amateur call id (check status)
            uint16_t sensor_id;                 //! Internal terminal id
            bool sensor_id_state = false;       //! Internal terminal id (check status)

            std::string device;                 //! Serial port device
            bool device_state;                  //! Serial port device (check status)
            uint16_t baud_rate;                 //! Serial port baud rate
            bool baud_rate_state;               //! Serial port baud rate (check status)
            double input_timeout;               //! Input timeout
            bool input_timeout_state;           //! Input timeout (check status)
        };

        struct Task : public DUNE::Tasks::Task {
            //! Task arguments.
            Arguments m_args;

            //! Global variables
            SatelliteLink* satellite;   //! Satellite variable
            SatelliteRadio* HSradio;    //! Radio transmitter
            RadioMessage* msg_radio;    //! Radio messages

            //! Control variables
            int m_rwar_count = 0;       //! Number of warning messages of radio not connected
            int m_dwar_count = 0;       //! Number of warning messages of data to be sent not selected
            int m_swar_count = 0;       //! Number of warning messages of satellite not connected
            int m_spOPwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Orbital_Period not set
            int m_spCWwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Communication_Window not set
            int m_spLPwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Last_Passage not set

            //! Auxiliary variables
            char aux_str[100];          //! For auxiliar strings (convert variables to string)
            char aux_str2[100];         //! For auxiliar strings (convert double to string)

            //! Debug variables
            int deg_parm_opt_rs = 0;        //! Debug control of parameter m_args.radio_state
            int deg_parm_opt_ds = 0;        //! Debug control of parameter m_args.data_to_send.estimated_state
            int deg_parm_opt_ss = 0;        //! Debug control of parameter m_args.sat_state
            int deg_parm_opt_OP = 0;        //! Debug control of parameter m_args.sat_orbparm.orbit_period
            int deg_parm_opt_CW = 0;        //! Debug control of parameter m_args.sat_orbparm.comm_window
            int deg_parm_opt_LP = 0;        //! Debug control of parameter m_args.sat_orbparm.last_passage


            //! Constructor.
            //! @param[in] name task name.
            //! @param[in] ctx context.
            Task(const std::string& name, Tasks::Context& ctx) :
                DUNE::Tasks::Task(name, ctx),
                HSradio(NULL) {
                /////////////
                //! Initialise Variables
                satellite = new SatelliteLink(this);    //! Satellite variable
                msg_radio = new RadioMessage(this);     //! Radio messages

                /////////////
                //! Debug parameters
                param("Neptus Debug", m_args.debug_w_neptus)
                    .minimumValue("0")
                    .maximumValue("1")
                    .defaultValue("0")
                    .description("Are you debuging with neptus?");

                /////////////
                //! Satellite parameters

                //! Connected Parameter (true or false)
                param("Satellite Connected", m_args.sat_state)
                    .minimumValue("0")
                    .maximumValue("1")
                    .defaultValue("0")
                    .description("Is the satellite connected?");

                //! Set/change orbital period
                param("Satellite Orbital Period", m_args.sat_orbparm.orbit_period)
                    .minimumValue("1")
                    .defaultValue("7200")
                    .units(Units::Second)
                    .description("Satellite orbital period value?");

                //! Set/change last time it was seen
                sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
                param("Satellite Last Pass", m_args.sat_orbparm.last_passage)
                    .minimumValue("0")
                    //.maximumValue(aux_str)        // !!!!WRN:
                    .defaultValue("0")
                    .units(Units::Second)
                    .description("When satellite last appeared?");

                //! Set/change communication window
                sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
                param("Satellite Comm Window", m_args.sat_orbparm.comm_window)
                    .minimumValue("1")
                    //.maximumValue(aux_str)        // !!!!WRN:
                    .defaultValue("600")
                    .units(Units::Second)
                    .description("Satellite communications window value?");

                /////////////
                //! Data parameters

                //! Send EstimatedState (true or false)
                param("Data Options - EstimatedState", m_args.data_to_send.estimated_state)
                    .minimumValue("0")
                    .maximumValue("1")
                    .defaultValue("0")
                    .description("Send EstimatedState information?");

                //! Send All data (true or false)
                param("Data Options - All", m_args.data_to_send.all)
                    .minimumValue("0")
                    .maximumValue("1")
                    .defaultValue("0")
                    .description("Send all information possible?");

                /////////////
                //! Radio parameters

                //! Connected Parameter (true or false)
                param("Radio Connected", m_args.radio_state)
                    .minimumValue("0")
                    .maximumValue("1")
                    .defaultValue("0")
                    .description("Is the HumSat radio connected?");

                //! Output Power
                sprintf(aux_str, "%d", HUMSAT_MINPOWER);
                sprintf(aux_str2, "%d", HUMSAT_MAXPOWER);
                param("Radio Power", m_args.radio_power)
                    .minimumValue(aux_str)
                    .maximumValue(aux_str2)         // !!!!WRN: Might need to be changed!!!!
                    .defaultValue("0x0AD0")
                    .units(Units::Watt)
                    .description("Satellite communication output power value?");

                //! Output Frequency
                sprintf(aux_str, "%d", HUMSAT_MINFREQ);
                sprintf(aux_str2, "%d", HUMSAT_MAXFREQ);
                param("Radio Frequency", m_args.radio_freq)
                    .minimumValue(aux_str)
                    .maximumValue(aux_str2)         // !!!!WRN: Might need to be changed!!!!
                    .defaultValue("0x1B5880F7")
                    .units(Units::Hertz)
                    .description("Satellite communication output frequency value?");

                //! Radio Device ID
                param("Radio ID", m_args.radio_id_aux)
                    .defaultValue("EA1RCT")         // !!!!WRN: Might need to be changed!!!!
                    .description("User amateur radio call id?");

                //! Sensor ID
                param("Sensor ID", m_args.sensor_id)
                    .defaultValue("4600")           // !!!!WRN: Might need to be changed!!!!
                    .description("Internal terminal id?");

                //! Serial port
                param("Serial Port - Device", m_args.device)
                    .defaultValue("/dev/ttyO0")
                    .description("Serial port device for the radio?");

                //! Serial port baud rate
                param("Serial Port - Baud Rate", m_args.baud_rate)
                    .defaultValue("9600")
                    .description("Serial port baud rate value?");

                //! Communications Timeout
                param("Radio Timeout", m_args.input_timeout)
                    .minimumValue("1")
                    .defaultValue("5")
                    .units(Units::Second)
                    .description("Amount of seconds to wait for radio to respond before reporting an error");


                /////////////
                //! Message binding

                //! Setup processing of IMC messages
                bind<IMC::EstimatedState>(this);
            }


            //! Update internal state with new parameter values.
            void onUpdateParameters(void) {
                //! Debug message
                debug("Update Parameters");

                /////////////
                //! Debug parameters
                //! If it is being debuged from netpus or not
                if (paramChanged(m_args.debug_w_neptus)) {
                    deg_parm_opt_rs = 0;        //! Reset debug control of parameter m_args.radio_state
                    deg_parm_opt_ds = 0;        //! Reset debug control of parameter m_args.data_to_send.estimated_state
                    deg_parm_opt_ss = 0;        //! Reset debug control of parameter m_args.sat_state
                    deg_parm_opt_OP = 0;        //! Reset debug control of parameter m_args.sat_orbparm.orbit_period
                    deg_parm_opt_CW = 0;        //! Reset debug control of parameter m_args.sat_orbparm.comm_window
                    deg_parm_opt_LP = 0;        //! Reset debug control of parameter m_args.sat_orbparm.last_passage

                    m_rwar_count = 0;       //! Reset number of warning messages of radio not connected
                    m_dwar_count = 0;       //! Reset number of warning messages of data to be sent not selected
                    m_swar_count = 0;       //! Reset number of warning messages of satellite not connected
                    m_spOPwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Orbital_Period not set
                    m_spCWwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Communication_Window not set
                    m_spLPwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Last_Passage not set
                }

                /////////////
                //! Satellite parameters

                //! If it is connected/disconnected
                if (paramChanged(m_args.sat_state) || deg_parm_opt_ss > 10) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Satellite Connected Parameter");

                    if (m_args.sat_state) {   //! Acquire resources (satellite) if it was previously disconnected
                        if (m_args.radio_state) {   //! If radio is connected orbital parameters can be set
                            //! Reset orbital parameters
                            satellite->resetOrbitalParm(ORB_All);

                            //! Information message
                            inf(DTR("Satellite option active. All orbital parameters have been reset."));
                        }
                        else {
                            //! Warning message
                            war(DTR("Radio is not connected yet! Connect before setting satellite option active."));
                            m_args.sat_orbparm.orbit_period = 7200;
                            m_args.sat_orbparm.last_passage = 0;
                            m_args.sat_orbparm.comm_window = 600;
                        }
                    }

                    m_swar_count = 0;       //! Reset number of warnings messages of satellite not connected
                    m_spOPwar_count = 0;    //! Reset number of warnings messages of satellite parameter ORB_Orbital_Period not set
                    m_spCWwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Communication_Window not set
                    m_spLPwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Last_Passage not set
                }

                //! Changes to orbital period
                if (paramChanged(m_args.sat_orbparm.orbit_period) || deg_parm_opt_OP > 10) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Orbital Period Parameter");

                    // !!!!WRN: Red option while not set?
                    if (m_args.sat_state) {   //! If satellite is connected
                        if (!satellite->setOrbitalParam(ORB_Orbital_Period, m_args.sat_orbparm.orbit_period)) {
                            m_args.sat_orbparm.orbit_period = satellite->getOrbitalParm(ORB_Orbital_Period);
                        }
                    }

                    m_spOPwar_count = 0;    //! Reset number of warnings messages of satellite parameter ORB_Orbital_Period not set
                    m_spCWwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Communication_Window not set
                    m_spLPwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Last_Passage not set
                }

                //! Changes to communication window
                if (paramChanged(m_args.sat_orbparm.comm_window) || deg_parm_opt_CW > 20) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Communication Window Parameter");

                    if (m_args.sat_state) {   //! If satellite is connected
                        if (!satellite->setOrbitalParam(ORB_Communication_Window, m_args.sat_orbparm.comm_window)) {
                            m_args.sat_orbparm.comm_window = satellite->getOrbitalParm(ORB_Communication_Window);
                        }
                    }

                    m_spOPwar_count = 0;    //! Reset number of warnings messages of satellite parameter ORB_Orbital_Period not set
                    m_spCWwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Communication_Window not set
                    m_spLPwar_count = 0;    //! Reset number of warning messages of satellite parameter ORB_Last_Passage not set
                }

                //! Changes to the time from last satellite pass
                if (paramChanged(m_args.sat_orbparm.last_passage) || deg_parm_opt_LP > 30) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Last Passage Parameter");

                    if (m_args.sat_state) {   //! If satellite is connected
                        if (!satellite->setOrbitalParam(ORB_Last_Passage, m_args.sat_orbparm.last_passage)) {
                            m_args.sat_orbparm.last_passage = satellite->getOrbitalParm(ORB_Last_Passage);
                        }
                    }

                    m_spOPwar_count = 0;    //! Reset number of warnings messages of satellite parameter ORB_Orbital_Period not set
                    m_spCWwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Communication_Window not set
                    m_spLPwar_count = 0;    //! Number of warning messages of satellite parameter ORB_Last_Passage not set
                }

                /////////////
                //! Data parameters

                //! Changes the option of sending EstimatedState
                if (paramChanged(m_args.data_to_send.estimated_state) || deg_parm_opt_ds > 10) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Estimated State Parameter");

                    msg_radio->selectData(DTS_Estimated_State);

                    m_dwar_count = 0;       //! Reset number of warning messages of data to be sent not selected
                }

                //! Changes the option of sending All data
                if (paramChanged(m_args.data_to_send.all)) {
                    //! Debug message
                    debug("All Data Parameter");

                    msg_radio->selectData(DTS_All);

                    m_dwar_count = 0;       //! Reset number of warning messages of data to be sent not selected
                }

                /////////////
                //! Radio parameters

                //! If it is connected/disconnected
                if (paramChanged(m_args.radio_state) || deg_parm_opt_rs > 10) {   //! Change parameter either by user or when debuging
                    //! Debug message
                    debug("Radio Connected Parameter");

                    if (m_args.radio_state) {   //! Acquire resources (radio) if it was previously disconnected
                        //! Information message
                        inf(DTR("Connecting HumSat..."));

                        onResourceAcquisition();    //! Acquire resources

                        if (m_args.radio_state) {	//! If radio (resources) was acquired correctly
                            onResourceInitialization();
                        }
                    }
                    else {                      //! Release resources (radio) if it was previously connected
                        //! Information message
                        inf(DTR("Disconnecting HumSat..."));

                        onResourceRelease();    //! Release resources
                    }

                    m_rwar_count = 0;   //! Reset number of warnings messages of radio not connected
                }

                //! If output power is changed
                if (paramChanged(m_args.radio_power)) {
                    if (m_args.radio_state) {   //! If radio is connected
                        // Set Radio Output Power
                        if (m_args.radio_power >= HUMSAT_MINPOWER && m_args.radio_power <= HUMSAT_MAXPOWER) {
                            if (HSradio->setPower(m_args.radio_power) == false) {
                                m_args.radio_power = HSradio->getPower();
                            }
                        }
                    }
                }

                //! If output frequency is changed
                if (paramChanged(m_args.radio_freq)) {
                    if (m_args.radio_state) {   //! If radio is connected
                        // Set Output Frequency
                        if (m_args.radio_freq >= HUMSAT_MINFREQ && m_args.radio_freq <= HUMSAT_MAXFREQ) {
                            if (HSradio->setFreq(m_args.radio_freq) == false) {
                                m_args.radio_freq = HSradio->getFreq();
                            }
                        }
                    }
                }

                //! Radio Device ID
                if (paramChanged(m_args.radio_id_aux)) {
                    if (m_args.radio_id_aux.length() == 6) {
                        strncpy(m_args.radio_id, m_args.radio_id_aux.c_str(), sizeof(m_args.radio_id));
                        m_args.radio_id_state = true;
                    }
                    else {
                        //! Error message
                        err(DTR("ERROR: Amateur call id - Maximum number of characters is 6!"));
                        m_args.radio_id_aux = "EA1RCT";
                        m_args.radio_id_state = false;
                    }

                    if (m_args.radio_state && (m_args.radio_id_state && m_args.sensor_id_state)) {   //! If radio is connected
                        // Set Amateur call id
                        HSradio->setRadioArgs(m_args.radio_id, m_args.sensor_id);
                    }
                }

                //! Sensor ID
                if (paramChanged(m_args.sensor_id)) {
                    m_args.sensor_id_state = true;
                    if (m_args.radio_state && (m_args.radio_id_state && m_args.sensor_id_state)) {   //! If radio is connected
                        // Set terminal id
                        HSradio->setRadioArgs(m_args.radio_id, m_args.sensor_id);
                    }
                }

                //! Serial port device
                if (paramChanged(m_args.device)) {
                    m_args.device_state = true;
                    if (m_args.radio_state && (m_args.device_state && m_args.baud_rate_state && m_args.input_timeout_state)) {   //! If radio is connected
                        // Set Serial port device
                        HSradio->setSerialDevice(m_args.device, m_args.baud_rate, m_args.input_timeout);
                    }
                }

                //! Serial port baud rate
                if (paramChanged(m_args.baud_rate)) {
                    m_args.baud_rate_state = true;
                    if (m_args.radio_state && (m_args.device_state && m_args.baud_rate_state && m_args.input_timeout_state)) {   //! If radio is connected
                        // Set Serial port baud rate
                        HSradio->setSerialDevice(m_args.device, m_args.baud_rate, m_args.input_timeout);
                    }
                }

                //! Communications Timeout
                if (paramChanged(m_args.input_timeout)) {
                    m_args.input_timeout_state = true;
                    if (m_args.radio_state && (m_args.device_state && m_args.baud_rate_state && m_args.input_timeout_state)) {   //! If radio is connected
                        // Set Serial port Communications Timeout
                        HSradio->setSerialDevice(m_args.device, m_args.baud_rate, m_args.input_timeout);
                    }
                }
            }

            //! Consume EstimatedState message
            void consume(const IMC::EstimatedState * msg) {

                //! This function consumes EstimatedState message and updates UserData
                if (satellite->reachSatellite()) { // ! Check if satellite cab be reached
                    //! Update UserData
                    msg_radio->storeData((EstimatedState *)msg->clone());
                    return;
                }
                else {
                    //! Information message
                    inf(DTR("Satellite is not present to send data!"));
                    return;
                }
            }

            //! Reserve entity identifiers.
            void
                onEntityReservation(void) {}

            //! Resolve entity names.
            void
                onEntityResolution(void) {}

            //! Acquire resources.
            void onResourceAcquisition(void) {
                //! Debug message
                debug(DTR("ResourceAcquisition: Initiated"));

                if (m_args.radio_state) {
                    HSradio = new SatelliteRadio(this);     //! Radio transmitter

                    //! Debug message
                    debug(DTR("ResourceAcquisition: Acquiring HumSat......"));

                    //! Set serial device
                    HSradio->setSerialDevice(m_args.device, m_args.baud_rate, m_args.input_timeout);

                    if (!HSradio->activateRadio()) {
                        //! Error message
                        err(DTR("Error activating HumSat. Try again."));          //! Information message
                        m_args.radio_state = 0;
                    }
                }
            }

            //! Initialize resources.
            void onResourceInitialization(void) {
                //! Debug message
                debug(DTR("ResourceInitialization: Initiated"));

                if (m_args.radio_state) {
                    //! Debug message
                    debug(DTR("ResourceInitialization: Seting radio parameters"));

                    // Set Radio main parameters
                    HSradio->setRadioArgs(m_args.radio_id, m_args.sensor_id);

                    // Set Radio Output Power
                    if (m_args.radio_power >= HUMSAT_MINPOWER && m_args.radio_power <= HUMSAT_MAXPOWER) {
                        //! Debug message
                        debug(DTR("ResourceInitialization: Setting HumSat Power."));
                        if (!HSradio->setPower(m_args.radio_power)) {
                            //! Warning message
                            war("Error setting power! Getting current power settings.");
                            m_args.radio_power = HSradio->getPower();
                        }
                    }

                    // Set Output Frequency
                    if (m_args.radio_freq >= HUMSAT_MINFREQ && m_args.radio_freq <= HUMSAT_MAXFREQ) {
                        //! Debug message
                        debug(DTR("ResourceInitialization: Setting HumSat Frequency."));
                        if (!HSradio->setFreq(m_args.radio_freq)) {
                            //! Warning message
                            war("Error setting frequency! Getting current frequency settings.");
                            m_args.radio_freq = HSradio->getFreq();
                        }
                    }
                }
            }

            //! Release resources.
            void onResourceRelease(void) {
                //! Debug message
                debug(DTR("ResourceRelease: Initiated"));

                //! Debug message
                debug(DTR("ResourceRelease: Releasing HumSat......"));
                Memory::clear(HSradio);
            }

            //! Main loop.
            void onMain(void) {
                //! Start by understanding if it is in debug mode
                if (getDebugLevel() > DEBUG_LEVEL_NONE) {       //! Task in a debug mode
                    int m_count_time = 0;
                    war("ATTENTION: If debuging with neptus select that option in neptus!");
                    while (m_count_time <= 120) {               //! Determine if debuging with neptus
                        //! Delay the operation
                        Time::Delay::wait(1.0);
                        Concurrency::Scheduler::yield();
                        //! Count turn
                        m_count_time++;
                        if (m_args.debug_w_neptus == true) {
                            break;
                        }
                    }

                    //! Information message
                    if (m_args.debug_w_neptus == true) {
                        inf(DTR("SatComms Starting (Debug - Neptus)...."));
                    }
                    else {
                        inf(DTR("SatComms Starting (Debug - Dune)...."));
                    }
                }
                else {
                    //! Information message
                    inf(DTR("SatComms Starting...."));
                }

                //! Main cycle
                while (!stopping()) {

                    //! Check if radio is connected before starting operations
                    if (m_args.radio_state) {   //! Radio is connected

                        //! Check if any data was selected to be sent before starting operations
                        if (msg_radio->getDataOptions()) {   //! Data to be sent is selected

                            //! Check if satellite is connected and all orbital parameters have been set before starting operations
                            if (m_args.sat_state && satellite->checkOrbitalParm(ORB_All)) {     //! Satellite is connected and all orbital parameters have been set

                                //! Check if satellite is in view of the vehicle
                                if (satellite->locateSatellite()) {     //! Satellite is in view
                                    //! Consume messages
                                    msg_radio->saved_EstimatedState = false;    //! Update state of control variable
                                    waitForMessages(0.1);
                                    consumeMessages();

                                    //! Debug message
                                    debug(DTR("EstimatedState has been consumed."));

                                    //! Sent test message in debug
                                    if (getDebugLevel() > DEBUG_LEVEL_NONE) { //! Test a simple message
                                        //! Move Data to HumSat terminal and transmit it
                                        uint8_t payload[10] = {1,2,3,4,5,6,7,8,9,0};
                                        HSradio->sendMessage(payload, sizeof(payload));
                                        HSradio->transmitMessage();
                                    }

                                    //! Debug message
                                    debug(DTR("Send Estimated state tryout."));

                                    //! Send messages via the HumSat radio
                                    msg_radio->sendData(HSradio);

                                    //! Information message
                                    inf(DTR("Data has been processed and transmitted to satellite!"));

                                    //! Afterwards sent new messages only in the next satellite pass
                                    while (satellite->locateSatellite()) { //! Verify if satellite is still present
                                        //! Wait for satellite to go away
                                        // !!!!WRN: New messages only in the next satellite pass. Can be changed!
                                    }
                                }
                            }
                            else {      //! Satellite is not connected or all orbital parameters have not been set
                                //! Warning messages
                                if (!m_args.sat_state) {
                                    if (m_swar_count == 0) {
                                        //! Warning message
                                        war(DTR("Satellite option not active! Activate to start satellite radio operations"));
                                        m_swar_count++;
                                    }
                                }
                                else {
                                    if (!satellite->checkOrbitalParm(ORB_Orbital_Period) && m_spOPwar_count == 0) {
                                        //! Warning message
                                        war(DTR("Satellite Orbital Period not set! Set it to start satellite radio operations"));
                                        m_spOPwar_count++;
                                    }
                                    if (!satellite->checkOrbitalParm(ORB_Communication_Window) && m_spCWwar_count == 0) {
                                        //! Warning message
                                        war(DTR("Satellite Communication Window not set! Set it to start satellite radio operations"));
                                        m_spCWwar_count++;
                                    }
                                    if (!satellite->checkOrbitalParm(ORB_Last_Passage) && m_spLPwar_count == 0) {
                                        //! Warning message
                                        war(DTR("Satellite Last Passage not set! Set it to start satellite radio operations"));
                                        m_spLPwar_count++;
                                    }
                                }

                                //! Delay execution for user to input data
                                // !!!!WRN: Is there a Wait for param changed?
                                Time::Delay::wait(0.1);

                                //! DEBUG CODE: Code for when debuging task
                                //! Satellite State debug
                                if (deg_parm_opt_ss > 10 && !m_args.sat_state) {
                                    m_args.sat_state = 1;
                                    debug("m_args.sat_state = %d", m_args.sat_state);
                                    onUpdateParameters();
                                    deg_parm_opt_ss = 0;
                                }
                                else if (!m_args.sat_state && m_args.debug_w_neptus == false) {
                                    deg_parm_opt_ss++;
                                }
                                else {
                                    //! Orbital Period debug
                                    if (deg_parm_opt_OP > 10 && !satellite->checkOrbitalParm(ORB_Orbital_Period)) {
                                        m_args.sat_orbparm.orbit_period = 60;
                                        debug("ORB_Orbital_Period = %f", m_args.sat_orbparm.orbit_period);
                                        onUpdateParameters();
                                        deg_parm_opt_OP = 0;
                                    }
                                    else if (!satellite->checkOrbitalParm(ORB_Orbital_Period) && m_args.debug_w_neptus == false) {
                                        deg_parm_opt_OP++;
                                    }

                                    //! Communication Window debug
                                    if (deg_parm_opt_CW > 20 && !satellite->checkOrbitalParm(ORB_Communication_Window)) {
                                        m_args.sat_orbparm.comm_window = 10;
                                        debug("ORB_Communication_Window = %f", m_args.sat_orbparm.comm_window);
                                        onUpdateParameters();
                                        deg_parm_opt_CW = 0;
                                    }
                                    else if (!satellite->checkOrbitalParm(ORB_Communication_Window) && m_args.debug_w_neptus == false) {
                                        deg_parm_opt_CW++;
                                    }

                                    //! Last Passage debug
                                    if (deg_parm_opt_LP > 30 && !satellite->checkOrbitalParm(ORB_Last_Passage)) {
                                        m_args.sat_orbparm.last_passage = 30;
                                        debug("ORB_Last_Passage = %f", m_args.sat_orbparm.last_passage);
                                        onUpdateParameters();
                                        deg_parm_opt_LP = 0;
                                    }
                                    else if (!satellite->checkOrbitalParm(ORB_Last_Passage) && m_args.debug_w_neptus == false) {
                                        deg_parm_opt_LP++;
                                    }
                                }
                            }
                        }
                        else {      //! Data to be sent is not selected
                            //! Warning messages
                            if (m_dwar_count == 0) {
                                //! Warning message
                                war(DTR("Data to be sent not selected! Select data to start satellite radio operations"));
                                m_dwar_count++;
                            }

                            //! Delay execution for user to input data
                            // !!!!WRN: Is there a Wait for param changed?
                            Time::Delay::wait(0.1);

                            //! DEBUG CODE: Code for when debuging task
                            //! Messages to be sent debug
                            if (deg_parm_opt_ds > 10 && !msg_radio->getDataOptions()) {
                                debug("Estimated state selected to be sent (debug)");
                                onUpdateParameters();
                                deg_parm_opt_ds = 0;
                            }
                            else if (!msg_radio->getDataOptions() && m_args.debug_w_neptus == false) {
                                deg_parm_opt_ds++;
                            }
                        }
                    }
                    else {      //! Radio is not connected
                        //! Warning messages
                        if (m_rwar_count == 0) {
                            //! Warning message
                            war(DTR("Radio is not connected! Connect to start satellite radio operations"));
                            m_rwar_count++;
                        }

                        //! Delay execution for user to input data
                        // !!!!WRN: Is there a Wait for param changed?
                        Time::Delay::wait(0.1);

                        //! DEBUG CODE: Code for when debuging task
                        //! Radio State debug
                        if (deg_parm_opt_rs > 10 && !m_args.radio_state) {
                            m_args.radio_state = 1;
                            debug("m_args.radio_state = %d", m_args.radio_state);
                            onUpdateParameters();
                            deg_parm_opt_rs = 0;
                        }
                        else if (!m_args.radio_state && m_args.debug_w_neptus == false) {
                            deg_parm_opt_rs++;
                        }
                    }
                }
            }
        };
    }
}

DUNE_TASK
