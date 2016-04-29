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
            //! Satellite orbit
            SatOrbitParameters sat_orbparm;     //! Parameters of spacecraft

            /////////////
            //! User data
            DataCheckList data_to_send;         //! Data to be sent

            /////////////
            //! HumSat radio
            bool radio_state;                   //! Radio connected (true or false)

            uint16_t radio_power;               //! Radio transmission Power
            int32_t radio_freq;                 //! Radio transmission Frequency
            char radio_id[6];                   //! User amateur call id
            uint16_t sensor_id;                 //! Internal terminal id

            std::string device;                 //! Serial port device
            uint16_t baud_rate;                 //! Serial port baud rate
            double input_timeout;               //! Input timeout
        };

        struct Task : public DUNE::Tasks::Task {
            //! Task arguments.
            Arguments m_args;

            //! Global variables
            SatelliteLink* satellite;   //! Satellite variable
            SatelliteRadio* HSradio;    //! Radio transmitter
            RadioMessage* msg_radio;    //! Radio messages

            //! Auxiliary variables
            char aux_str[100];          //! For auxiliar strings (convert variables to string)
            char aux_str2[100];         //! For auxiliar strings (convert double to string)


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
                    //! Satellite parameters

                    //! Set/change orbital period
                    param("Satellite Orbital Period", m_args.sat_orbparm.orbit_period)
                        .minimumValue("0")  // !!!!WRN: Has to be change for 86		(simultation is less)
                        .defaultValue("0")  // !!!!WRN: Has to be changed to 5400	(simultation is less)
                        .units(Units::Second)
                        .description("Satellite Orbital Period");

                    //! Set/change last time it was seen
                    sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
                    param("Satellite Last Pass", m_args.sat_orbparm.last_passage)
                        .minimumValue("0")
                        .maximumValue(aux_str)
                        .defaultValue("-1") //  !!!!WRN: Has to be deleted		(simultation is less)
                        .units(Units::Second)
                        .description("Satellite Last Pass");

                    //! Set/change communication window
                    sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
                    param("Satellite Comm Window", m_args.sat_orbparm.comm_window)
                        .minimumValue("0")
                        .maximumValue(aux_str)
                        .defaultValue("0")  //  !!!!WRN: Has to be deleted		(simultation is less)
                        .units(Units::Second)
                        .description("Satellite Communications Window");

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
                        .description("Radio Connected?");

                    //! Output Power
                    sprintf(aux_str, "%.2f", HUMSAT_MINPOWER);
                    sprintf(aux_str2, "%.2f", HUMSAT_MAXPOWER);
                    param("Radio Power", m_args.radio_power)
                        .minimumValue(aux_str)  // !!!!WRN: Has to be changed!!!!
                        .maximumValue(aux_str2) // !!!!WRN: Has to be changed!!!!
                        .defaultValue("2768")   // !!!!WRN: Has to be changed!!!!
                        .units(Units::Watt)
                        .description("Sat comms output power");

                    //! Output Frequency
                    sprintf(aux_str, "%.2f", HUMSAT_MINFREQ);
                    sprintf(aux_str2, "%.2f", HUMSAT_MAXFREQ);
                    param("Radio Frequency", m_args.radio_freq)
                        .minimumValue(aux_str)      // !!!!WRN: Has to be changed!!!!
                        .maximumValue(aux_str2)     // !!!!WRN: Has to be changed!!!!
                        .defaultValue("458782720")  // !!!!WRN: Has to be changed!!!!
                        .units(Units::Hertz)
                        .description("Sat comms output frequency");

                    ////!!!!WRN: ERROR WHEN COMPILED!!!!
                    //! Radio Device ID
                    //param("Radio ID", m_args.HSradio.radio_id)
                    //	.defaultValue("EA1RCT")     // !!!!WRN: Has to be changed!!!!
                    //	.description("User amateur call id");

                    //! Sensor ID
                    param("Sensor ID", m_args.sensor_id)
                        .defaultValue("17920")      // !!!!WRN: Has to be changed!!!!
                        .description("Internal terminal id");

                    //! Serial port
                    param("Serial Port - Device", m_args.device)
                        .defaultValue("")
                        .description("Serial port device (radio)");

                    //! Serial port baud rate
                    param("Serial Port - Baud Rate", m_args.baud_rate)
                        .defaultValue("9600")
                        .description("Serial port baud rate");

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
                /////////////
                //! Satellite parameters
                
                //! Changes to orbital period
                if (paramChanged(m_args.sat_orbparm.orbit_period)) {
                    if (!satellite->setOrbitalParam(OrbitalParam::Orbital_Period, m_args.sat_orbparm.orbit_period)) {
                        m_args.sat_orbparm.orbit_period = satellite->getOrbitalParm(OrbitalParam::Orbital_Period);
                    }
                }

                //! Changes to the time from last satellite pass
                if (paramChanged(m_args.sat_orbparm.last_passage)) {
                    if (!satellite->setOrbitalParam(OrbitalParam::Last_Passage, m_args.sat_orbparm.last_passage)) {
                        m_args.sat_orbparm.last_passage = satellite->getOrbitalParm(OrbitalParam::Last_Passage);
                    }
                }

                //! Changes to communication window
                if (paramChanged(m_args.sat_orbparm.comm_window)) {
                    if (!satellite->setOrbitalParam(OrbitalParam::Communication_Window, m_args.sat_orbparm.comm_window)) {
                        m_args.sat_orbparm.comm_window = satellite->getOrbitalParm(OrbitalParam::Communication_Window);
                    }
                }

                /////////////
                //! Data parameters

                //! Changes the option of sending EstimatedState
                if (paramChanged(m_args.data_to_send.estimated_state)) {
                    msg_radio->selectData(DataToSend::Estimated_State);
                }

                //! Changes the option of sending All data
                if (paramChanged(m_args.data_to_send.all)) {
                    msg_radio->selectData(DataToSend::All);
                }

                /////////////
                //! Radio parameters

                //! If it is connected/disconnected
                if (paramChanged(m_args.radio_state)) {
                    if (m_args.radio_state) {   //! Acquire resources (radio) if it was previously disconnected
                        inf(DTR("Connecting HumSat radio..."));
                        ///////onResourceAcquisition(); // !!!!WRN: Has to be changed!!!!
                    }
                    else {                      //! Release resources (radio) if it was previously connected
                        inf(DTR("Disconnecting HumSat radio..."));
                        ///////onResourceRelease(); // !!!!WRN: Has to be changed!!!!
                    }
                }

                //! If output power is changed
                if (paramChanged(m_args.radio_power)) {
                    if (m_args.radio_state) {
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
                    if (m_args.radio_state) {
                        // Set Output Frequency
                        if (m_args.radio_freq >= HUMSAT_MINFREQ && m_args.radio_freq <= HUMSAT_MAXFREQ) {
                            if (HSradio->setFreq(m_args.radio_freq) == false) {
                                m_args.radio_freq = HSradio->getFreq();
                            }
                        }
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
                    inf(DTR("Satellite is not present to send data!"));
                    return;
                }
            }

            //! Reserve entity identifiers.
            void
                onEntityReservation(void) {
                }

            //! Resolve entity names.
            void
                onEntityResolution(void) {
                }

            //! Acquire resources.
            void
                onResourceAcquisition(void) {
                    //! Debug message
                    debug("HUMSAT RADIO onResourceAcquisition");

                    if (m_args.radio_state) {
                        HSradio = new SatelliteRadio(this);        //! Radio transmitter
                    }
                }

            //! Initialize resources.
            void
                onResourceInitialization(void) {
                    if (m_args.radio_state) {
                        // Set Radio Output Power
                        if (m_args.radio_power >= HUMSAT_MINPOWER && m_args.radio_power <= HUMSAT_MAXPOWER) {
                            if (HSradio->setPower(m_args.radio_power) == false) {
                                m_args.radio_power = HSradio->getPower();
                            }
                        }

                        // Set Output Frequency
                        if (m_args.radio_freq >= HUMSAT_MINFREQ && m_args.radio_freq <= HUMSAT_MAXFREQ) {
                            if (HSradio->setFreq(m_args.radio_freq) == false) {
                                m_args.radio_freq = HSradio->getFreq();
                            }
                        }
                    }
                }

            //! Release resources.
            void
                onResourceRelease(void) {
                    //! Debug message
                    debug("HUMSAT RADIO onResourceRelease");

                    if (!m_args.radio_state) {
                        Memory::clear(HSradio);
                    }
                }

            //! Main loop.
            void
                onMain(void) {
                    //! To delay the operation (in seconds?)
                    Time::Delay::wait(5);  // Remove when deploying

                    //! Reset orbital parameters
                    satellite->resetOrbitalParm(OrbitalParam::All);

                    //! Wait for user to input the satellite parameters
                    while (!satellite->checkOrbitalParm(OrbitalParam::All)) {
                        //! Now in simulation we just set ourselves
                        m_args.sat_orbparm.orbit_period = 60; // !!!!WRN: Has to be changed!!!!
                        satellite->setOrbitalParam(OrbitalParam::Orbital_Period, m_args.sat_orbparm.orbit_period);
                        m_args.sat_orbparm.last_passage = 20;
                        satellite->setOrbitalParam(OrbitalParam::Last_Passage, m_args.sat_orbparm.last_passage);
                        m_args.sat_orbparm.comm_window = 10;
                        satellite->setOrbitalParam(OrbitalParam::Communication_Window, m_args.sat_orbparm.comm_window);

                        //! Check if radio is connected before beginning operations
                        if (!m_args.radio_state && satellite->checkOrbitalParm(OrbitalParam::All)) {
                            war(DTR("Radio is not connected! Connect first and re-set satellite last pass"));

                            //! Reset satellite last passage
                            satellite->resetOrbitalParm(OrbitalParam::Last_Passage);
                            m_args.sat_orbparm.last_passage = satellite->getOrbitalParm(OrbitalParam::Last_Passage);

                            // Simulate
                            m_args.radio_state = 1;  // !!!!WRN: Has to be changed!!!!
                        }
                    }
                    // Simulate 
                    m_args.radio_state = 0; // !!!!WRN: Has to be changed!!!!


                    while (!stopping()) {
                        //! Verify if satellite is present
                        if (satellite->locateSatellite()) {
                            //! If satellite is present consume messages and send them via the HumSat radio
                            waitForMessages(0.1);
                            consumeMessages();

                            //! Just to see it has consumed
                            inf("Consumed EstimatedState"); // !!!!WRN: Has to be changed!!!!
                            /////inf("Consumed EstimatedState - %s", user_data.vehicle_estate->getName());

                            //! Send Data to HumSat terminal and transmit it
                            if (m_args.radio_state) {
                                msg_radio->sendData(HSradio);
                            }
                            inf(DTR("Data sent to satellite!")); // !!!!WRN: Has to be changed!!!!

                            //! After sending all messages sent new messages in the next satellite path
                            while (satellite->locateSatellite()) { //! Verify if satellite is still present
                                //! To delay the operation (in seconds?)
                                //Time::Delay::wait(1.0);
                            }
                        }
                    }
                }
        };
    }
}

DUNE_TASK
