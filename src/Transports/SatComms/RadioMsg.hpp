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
// Class for manipulate messages to work with HumSat radio                  *
//***************************************************************************

#ifndef TRANSPORTS_SATCOMMS_RADIOMSG_HPP_INCLUDED_
#define TRANSPORTS_SATCOMMS_RADIOMSG_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "HumSat.hpp"
//#include <algorithm>

namespace Transports {
    namespace SatComms {
        using DUNE_NAMESPACES;

        /////////////
        //! VARIABLE TYPES DEFINITION
        /////////////

        //! Which data is to be sent
        enum DataToSend {
            Estimated_State,     //! For now just EstimatedState
            //! Possibly other in the future...
            All                 //! All data allowed (!MUST BE THE LAST!)
        };

        //! Data to send to spacecraft
        struct UserData {
            //! Estimated state message.
            EstimatedState * vehicle_estate;
            //! Possibly other in the future...
        };

        //! Data check list
        struct DataCheckList {
            bool estimated_state;   //! Estimated state message.
            //! Possibly other in the future...
            bool all;               //! All data allowed
        };

        //! Buffer for data
        union DataBuffer {
            fp64_t dim_64[3];       //! 64 bit numbers = 8 bytes
            fp32_t dim_32[7];       //! 32 bit numbers = 4 bytes
            int16_t dim_16[14];     //! 16 bit numbers = 2 bytes
            int8_t dim_8[28];       //!  8 bit numbers = 1 bytes
            uint8_t access_p[28];   //! Access point (for sending char)
        };

        ////! Data treatment (division/concatenation)
        //struct DataTreatment {
        //    enum DataToDeal {           //! Which data is now under treatment
        //        EstimatedState          //! For now just EstimatedState
        //        //! Possibly other in the future...
        //    } data_to_deal;
        //};

        /////////////
        //! Radio Message Class
        /////////////
        class RadioMessage {
            ///////////////////////////////////////
            //! PRIVATE ACCESS
        private:
            /////////////////////
            //! Private Variables
            Tasks::Task* m_task;                //! Pointer to task

            UserData u_data;                    //! Data to be sent to the satellite
            DataCheckList data_check;           //! Check which data was set

            bool data_options[DataToSend::All];  //! Array with which data is to be sent (size equal to number of possibilities)

            DataBuffer data_buffer;

            /////////////////////
            //! Private Functions

            //! Initialise data buffer with zeros
            void initialiseBuffer(void) {
                data_buffer.dim_64[1] = 0;
                data_buffer.dim_64[2] = 0;
                data_buffer.dim_64[3] = 0;
            }

            //! Divide and sends EstimatedState
            //! @param[in]  HSradio         - Satellite radio link.
            //! @return     boolean         - If data was stored correctly or not.
            bool cutSend_EstimatedState(SatelliteRadio* HSradio) {
                const int n_msg = 4;        //! Number of messages to sent
                bool msg_sent;              //! Check if message was sent or not
                const int n_attempts = 4;   //! Number of attempts to try to send a message
                int n_attempts_c;           //! Count number of attempts

                //! Create messages buffer
                uint8_t *msg;
                //uint8_t msg[4 + 28][n_msg] = { };   

                //! Initialise messages 
                /*for (size_t i = 0; i < n_msg; i++) {
                    msg[0][i] = 'E';
                    msg[1][i] = 'S';
                    msg[2][i] = i;
                    msg[3][i] = ' ';
                    }*/
                uint8_t msg1[4 + 16] = { 'E', 'S', '1', ' ', };   //! Message 1 (20 bytes)
                uint8_t msg2[4 + 28] = { 'E', 'S', '2', ' ', };   //! Message 2 (32 bytes)
                uint8_t msg3[4 + 28] = { 'E', 'S', '3', ' ', };   //! Message 3 (32 bytes)
                uint8_t msg4[4 + 16] = { 'E', 'S', '4', ' ', };   //! Message 4 (20 bytes)

                //////
                //! Message 1 (two fp64_t = 16 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();
                //! Move values to data buffer
                data_buffer.dim_64[1] = u_data.vehicle_estate->lat;
                data_buffer.dim_64[2] = u_data.vehicle_estate->lon;
                //! Copy to message buffer
                memcpy(msg1 + 4, data_buffer.access_p, 2 * sizeof(fp64_t));
                //memcpy(msg[4][1], data_buffer.access_p, 2 * sizeof(fp64_t));

                //////
                //! Message 2 (seven fp32_t = 28 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();
                //! Move values to data buffer
                data_buffer.dim_32[1] = u_data.vehicle_estate->height;
                data_buffer.dim_32[2] = u_data.vehicle_estate->x;
                data_buffer.dim_32[3] = u_data.vehicle_estate->y;
                data_buffer.dim_32[4] = u_data.vehicle_estate->z;
                data_buffer.dim_32[5] = u_data.vehicle_estate->phi;
                data_buffer.dim_32[6] = u_data.vehicle_estate->theta;
                data_buffer.dim_32[7] = u_data.vehicle_estate->psi;
                //! Copy to message buffer
                memcpy(msg2 + 4, data_buffer.access_p, 7 * sizeof(fp32_t));

                //////
                //! Message 3 (seven fp32_t = 28 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();
                //! Move values to data buffer
                data_buffer.dim_32[1] = u_data.vehicle_estate->u;
                data_buffer.dim_32[2] = u_data.vehicle_estate->v;
                data_buffer.dim_32[3] = u_data.vehicle_estate->w;
                data_buffer.dim_32[4] = u_data.vehicle_estate->vx;
                data_buffer.dim_32[5] = u_data.vehicle_estate->vy;
                data_buffer.dim_32[6] = u_data.vehicle_estate->vz;
                data_buffer.dim_32[7] = u_data.vehicle_estate->p;
                //! Copy to message buffer
                memcpy(msg3 + 4, data_buffer.access_p, 7 * sizeof(fp32_t));

                //////
                //! Message 4 (four fp32_t = 16 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();
                //! Move values to data buffer
                data_buffer.dim_32[1] = u_data.vehicle_estate->q;
                data_buffer.dim_32[2] = u_data.vehicle_estate->r;
                data_buffer.dim_32[3] = u_data.vehicle_estate->depth;
                data_buffer.dim_32[4] = u_data.vehicle_estate->alt;
                //! Copy to message buffer
                memcpy(msg4 + 4, data_buffer.access_p, 4 * sizeof(fp32_t));

                //////
                //! Send Data
                for (size_t i = 0; i < n_msg; i++) {
                    //////
                    //! Select message
                    switch (i) {
                    case 0:
                        msg = msg1;
                        break;
                    case 1:
                        msg = msg2;
                        break;
                    case 2:
                        msg = msg3;
                        break;
                    case 3:
                        msg = msg4;
                        break;
                    }

                    //////
                    //! Send message
                    //! Initialise cylce
                    msg_sent = false;
                    n_attempts_c = 0;

                    do {
                        //! Sends message to terminal
                        msg_sent = HSradio->sendMessage(msg);
                        //! Counts attempt
                        n_attempts_c++;
                        //! Check number of attempts
                        if (n_attempts_c == n_attempts) {
                            m_task->err(DTR("ERROR: Number of attempts to send message to terminal exceeded."));
                            return false;
                        }
                    } while (!msg_sent);

                    // Delay transmitt message
                    Time::Delay::wait(0.1);

                    //////
                    //! Transmit message
                    //! Initialise cylce
                    msg_sent = false;
                    n_attempts_c = 0;

                    do {
                        //! Transmits message
                        msg_sent = HSradio->transmitMessage();
                        //! Counts attempt
                        n_attempts_c++;
                        //! Check number of attempts
                        if (n_attempts_c == n_attempts) {
                            m_task->err(DTR("ERROR: Number of attempts to transmit message exceeded."));
                            return false;
                        }
                    } while (!msg_sent);

                    // Delay cycle
                    Time::Delay::wait(1);
                    // !!!!WRN: What is this????!!!! EXAMPLE_TRANSMISSION_PERIOD_SECONDS
                }
                return true;
            }


            ///////////////////////////////////////
            //! PUBLIC ACCESS
        public:
            //! Constructor
            RadioMessage(Tasks::Task* task) :
                m_task(task) {
                //! Initialise which data is to be sent (None for now)
                for (size_t i = 0; i < sizeof(data_options); i++) {
                    data_options[i] = false;
                }
                initialiseBuffer();
            }

            /////////////////////
            //! Public Variables

            /////////////////////
            //! Public Functions

            //! Stores user data
            //! @param[in]  est_state       - Vehicles estimated state.
            //! @return     boolean         - If data was stored correctly or not.
            bool storeData(EstimatedState * est_state) {
                //! Save old value
                EstimatedState * old_val = u_data.vehicle_estate;

                //! Set data variable
                u_data.vehicle_estate = est_state;

                //! Check if it was set correctly
                if (u_data.vehicle_estate != est_state) {
                    u_data.vehicle_estate = old_val;
                    m_task->err(DTR("ERROR: SAVEVAR: Error saving EstimatedState."));
                    return false;
                }

                //! Check item of data checklist
                data_check.estimated_state = true;   //! EstimatedState was set

                //! Inform the user
                ////m_task->inf(DTR("SAVEVAR: Saving EstimatedState OK."));

                return true;
            }

            //! Selectes which data is to be sent
            //! @param[in]  msg_option      - Option of data to be sent.
            void selectData(DataToSend msg_option) {
                //! Auxiliary value
                bool all_true_false = true;

                if (msg_option == DataToSend::All) {                    //! All data is to be sent
                    //! Check if all elements of data_options are true or false
                    for (size_t i = 0; i < sizeof(data_options)-1; i++) {
                        if (data_options[i] != data_options[i + 1]) {
                            all_true_false = false;
                            break;
                        }
                    }
                    //std::all_of(data_options[0], data_options[DataToSend::All - 1], [](bool val) {return val == false; }) || std::all_of(data_options[0], data_options[DataToSend::All - 1], [](bool val) {return val == true; })
                    if (all_true_false) {   //! If all ellements are equal
                        for (size_t i = 0; i < sizeof(data_options); i++) {
                            data_options[i] = !data_options[i];
                        }
                    }
                    else {  //! If just a few are true -> turn all true
                        for (size_t i = 0; i < sizeof(data_options); i++) {
                            data_options[i] = true;
                        }
                    }
                }
                else if (msg_option == DataToSend::Estimated_State) {   //! Send EstimatedState data
                    data_options[DataToSend::Estimated_State] = !data_options[DataToSend::Estimated_State];
                }
                return;
            }

            //! Selectes which data is to be sent
            //! @param[in]  HSradio         - Satellite radio link.
            //! @return     boolean         - If data was sent correctly or not.
            bool sendData(SatelliteRadio* HSradio) {
                //! Run through data options
                for (size_t i = 0; i < sizeof(data_options); i++) {
                    if (data_options[i] == true) { //! Check if this data is to be sent
                        switch (i) {
                        case DataToSend::Estimated_State:   //! Send EstimatedState data
                            if (data_check.estimated_state == true) {
                                if (cutSend_EstimatedState(HSradio) == false) {
                                    m_task->inf(DTR("EstimatedState has not been sent/transmitted."));
                                    return false;
                                }
                                //! Check item of data checklist
                                data_check.estimated_state = false;   //! EstimatedState was sent and now has to be set again
                            }
                            else {
                                m_task->inf(DTR("EstimatedState has to be stored before sending."));
                                return false;
                            }
                            break;
                            //! Possibly other in the future...
                            // case DataToSend::....
                            // break;
                        default:
                            m_task->err(DTR("ERROR: SENDVAR: Not a valid option."));
                            return false;
                        }
                    }
                }
                return true;
            }
        };
    }
}

#endif