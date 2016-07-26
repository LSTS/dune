//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laborat�rio de Sistemas e Tecnologia Subaqu�tica (LSTS)                  *
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
            DTS_Estimated_State,     //! For now just EstimatedState
            //! Possibly other in the future...
            DTS_All                 //! All data allowed (!MUST BE THE LAST!)
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

        //! Buffer for data (28 bytes)
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
            Tasks::Task* m_task;            //! Pointer to task

            UserData u_data;                //! Data to be sent to the satellite
            DataCheckList data_check;       //! Check which data was set

            bool data_options[DTS_All];     //! Array with which data is to be sent (size equal to number of possibilities)

            DataBuffer data_buffer;         //! Buffer for the data to be sent

            int8_t msg_count;               //! Counter for the number of messages sent

            /////////////////////
            //! Private Functions

            //! Initialise data buffer with zeros
            void initialiseBuffer(void) {
                data_buffer.dim_64[0] = 0;
                data_buffer.dim_64[1] = 0;
                data_buffer.dim_64[2] = 0;
            }

            //! Gives the current time in a predetermined format
            //! @return     int8_t         - current time in specific format.
            int8_t * format_Time(void) {
                //! The format of the time returned is
                //! [Day of the year (001-366)][Hour in 24h format (00-23)][Minute (00-59)][Second (00-61)]

                time_t raw_time;            //! Raw time of clock
                struct tm * time_info;      //! Struct with time fields
                char time_buffer[10];       //! Time buffer for format conversion
                int8_t *time_formated;   //! Return variable in specific format and type
                
                //! Get current time
                time(&raw_time);

                //! Convert it to a local time struct
                time_info = localtime(&raw_time);

                //! Format time string
                strftime(time_buffer, 10, "%j%H%M%S", time_info);

                //! Cast from char to int8_t
                time_formated = (int8_t *)(time_buffer);

                //! Debug messages
                m_task->debug("The time is now %s", time_buffer);
                m_task->debug("The day is %c%c%c, hours %c%c, minutes %c%c, seconds %c%c", 
                    time_buffer[0], time_buffer[1], time_buffer[2],     //! Day of the year (001-366)
                    time_buffer[3], time_buffer[4],                     //! Hour in 24h format (00-23)
                    time_buffer[5], time_buffer[6],                     //! Minute (00-59)
                    time_buffer[7], time_buffer[8]);                    //! Second (00-61)
                m_task->debug("OR the day is %c%c%c, hours %c%c, minutes %c%c, seconds %c%c",
                    time_formated[0], time_formated[1], time_formated[2],     //! Day of the year (001-366)
                    time_formated[3], time_formated[4],                     //! Hour in 24h format (00-23)
                    time_formated[5], time_formated[6],                     //! Minute (00-59)
                    time_formated[7], time_formated[8]);                    //! Second (00-61)

                return time_formated;
            }

            //! Divide and sends EstimatedState
            //! @param[in]  HSradio         - Satellite radio link.
            //! @return     boolean         - If data was stored correctly or not.
            bool cutSend_EstimatedState(SatelliteRadio* HSradio) {
                //! Debug message
                m_task->debug("cutSend_EstimatedState entered");

                const int n_msg = 4;        //! Number of messages to sent
                bool msg_sent;              //! Check if message was sent or not
                const int n_attempts = 4;   //! Number of attempts to try to send a message
                int n_attempts_c;           //! Count number of attempts

                //! Create messages buffer
                uint8_t *msg;               //! Message buffer
                int8_t msg_length = 0;      //! Message buffer length

                int8_t *time_stamp = format_Time();  //! Current time stamp

                //! Initialise messages 
                /*for (size_t i = 0; i < n_msg; i++) {
                    msg[0][i] = 'E';
                    msg[1][i] = 'S';
                    msg[2][i] = i;
                    msg[3][i] = ' ';
                    }*/
                uint8_t msg1[4 + 16 + 11] = {'E', 'S', '1', ' ',};  //! Message 1 (31 bytes)
                int8_t msg1_length = 4 + 16 + 11;
                uint8_t msg2[4 + 28] = {'E', 'S', '2', ' ',};       //! Message 2 (32 bytes)
                int8_t msg2_length = 4 + 28;
                uint8_t msg3[4 + 28] = {'E', 'S', '3', ' ',};       //! Message 3 (32 bytes)
                int8_t msg3_length = 4 + 28;
                uint8_t msg4[4 + 16 + 11] = {'E', 'S', '4', ' ',};  //! Message 4 (31 bytes)
                int8_t msg4_length = 4 + 16 + 11;

                ////////////
                //! Message 1 (two fp64_t = 16 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();

                //! Move values to data buffer
                data_buffer.dim_64[0] = u_data.vehicle_estate->lat;

                //! Debug message
                m_task->debug("Move value vehicle estate lat = %f (ORIGIN)", u_data.vehicle_estate->lat);
                m_task->debug("Move value vehicle estate lat = %f (COPY - 8 bytes)", data_buffer.dim_64[0]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 1)", data_buffer.access_p[0]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 2)", data_buffer.access_p[1]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 3)", data_buffer.access_p[2]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 4)", data_buffer.access_p[3]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 5)", data_buffer.access_p[4]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 6)", data_buffer.access_p[5]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 7)", data_buffer.access_p[6]);
                m_task->debug("Move value vehicle estate lat = %02x (COPY - HEX - 8)", data_buffer.access_p[7]);

                data_buffer.dim_64[1] = u_data.vehicle_estate->lon;
                //! Copy to message buffer
                memcpy(msg1 + 4, data_buffer.access_p, 2 * sizeof(fp64_t));
                //memcpy(msg[4][1], data_buffer.access_p, 2 * sizeof(fp64_t));

                //! Give time stamp and message count
                initialiseBuffer();
                data_buffer.dim_8[0] = time_stamp[0];   //! Day of the year
                data_buffer.dim_8[1] = time_stamp[1];   //! Day of the year
                data_buffer.dim_8[2] = time_stamp[2];   //! Day of the year
                data_buffer.dim_8[3] = time_stamp[3];   //! Hours
                data_buffer.dim_8[4] = time_stamp[4];   //! Hours
                data_buffer.dim_8[5] = time_stamp[5];   //! Minutes
                data_buffer.dim_8[6] = time_stamp[6];   //! Minutes
                data_buffer.dim_8[7] = time_stamp[7];   //! Seconds
                data_buffer.dim_8[8] = time_stamp[8];   //! Seconds
                data_buffer.dim_8[9] = ' ';             //! Space
                data_buffer.dim_8[10] = msg_count;      //! Counter

                //! Copy to message buffer
                memcpy(msg1 + 4 + 16, data_buffer.access_p, 11 * sizeof(int8_t));

                //! Debug messages
                m_task->debug("Msg 1 = %02x (COPY - HEX - 1)", msg1[0]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 2)", msg1[1]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 3)", msg1[2]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 4)", msg1[3]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 5)", msg1[4]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 6)", msg1[5]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 7)", msg1[6]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 8)", msg1[7]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 9)", msg1[8]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 10)", msg1[9]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 11)", msg1[10]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 12)", msg1[11]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 13)", msg1[12]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 14)", msg1[13]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 15)", msg1[14]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 16)", msg1[15]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 17)", msg1[16]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 18)", msg1[17]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 19)", msg1[18]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 20)", msg1[19]);

                m_task->debug("Msg 1 = %02x (COPY - HEX - 21)", msg1[20]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 22)", msg1[21]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 23)", msg1[22]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 24)", msg1[23]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 25)", msg1[24]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 26)", msg1[25]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 27)", msg1[26]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 28)", msg1[27]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 29)", msg1[28]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 30)", msg1[29]);
                m_task->debug("Msg 1 = %02x (COPY - HEX - 31)", msg1[30]);

                ////////////
                //! Message 2 (seven fp32_t = 28 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();

                //! Move values to data buffer
                data_buffer.dim_32[0] = u_data.vehicle_estate->height;

                //! Debug message
                m_task->debug("Move value vehicle estate height = %f (ORIGIN)", u_data.vehicle_estate->height);
                m_task->debug("Move value vehicle estate height = %f (COPY - 8 bytes)", data_buffer.dim_32[0]);
                m_task->debug("Move value vehicle estate height = %02x (COPY - HEX - 1)", data_buffer.access_p[0]);
                m_task->debug("Move value vehicle estate height = %02x (COPY - HEX - 2)", data_buffer.access_p[1]);
                m_task->debug("Move value vehicle estate height = %02x (COPY - HEX - 3)", data_buffer.access_p[2]);
                m_task->debug("Move value vehicle estate height = %02x (COPY - HEX - 4)", data_buffer.access_p[3]);
                m_task->debug("Move value vehicle estate height = %02x (COPY - HEX - 5)", data_buffer.access_p[4]);

                data_buffer.dim_32[1] = u_data.vehicle_estate->x;
                data_buffer.dim_32[2] = u_data.vehicle_estate->y;
                data_buffer.dim_32[3] = u_data.vehicle_estate->z;
                data_buffer.dim_32[4] = u_data.vehicle_estate->phi;
                data_buffer.dim_32[5] = u_data.vehicle_estate->theta;
                data_buffer.dim_32[6] = u_data.vehicle_estate->psi;

                //! Copy to message buffer
                memcpy(msg2 + 4, data_buffer.access_p, 7 * sizeof(fp32_t));

                ////////////
                //! Message 3 (seven fp32_t = 28 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();

                //! Move values to data buffer
                data_buffer.dim_32[0] = u_data.vehicle_estate->u;
                data_buffer.dim_32[1] = u_data.vehicle_estate->v;
                data_buffer.dim_32[2] = u_data.vehicle_estate->w;
                data_buffer.dim_32[3] = u_data.vehicle_estate->vx;
                data_buffer.dim_32[4] = u_data.vehicle_estate->vy;
                data_buffer.dim_32[5] = u_data.vehicle_estate->vz;
                data_buffer.dim_32[6] = u_data.vehicle_estate->p;

                //! Copy to message buffer
                memcpy(msg3 + 4, data_buffer.access_p, 7 * sizeof(fp32_t));

                ////////////
                //! Message 4 (four fp32_t = 16 bytes plus msg start)
                //! Initialise data buffer
                initialiseBuffer();

                //! Move values to data buffer
                data_buffer.dim_32[0] = u_data.vehicle_estate->q;
                data_buffer.dim_32[1] = u_data.vehicle_estate->r;
                data_buffer.dim_32[2] = u_data.vehicle_estate->depth;
                data_buffer.dim_32[3] = u_data.vehicle_estate->alt;

                //! Copy to message buffer
                memcpy(msg4 + 4, data_buffer.access_p, 4 * sizeof(fp32_t));

                //! Give time stamp and message count
                initialiseBuffer();
                data_buffer.dim_8[0] = time_stamp[0];   //! Day of the year
                data_buffer.dim_8[1] = time_stamp[1];   //! Day of the year
                data_buffer.dim_8[2] = time_stamp[2];   //! Day of the year
                data_buffer.dim_8[3] = time_stamp[3];   //! Hours
                data_buffer.dim_8[4] = time_stamp[4];   //! Hours
                data_buffer.dim_8[5] = time_stamp[5];   //! Minutes
                data_buffer.dim_8[6] = time_stamp[6];   //! Minutes
                data_buffer.dim_8[7] = time_stamp[7];   //! Seconds
                data_buffer.dim_8[8] = time_stamp[8];   //! Seconds
                data_buffer.dim_8[9] = ' ';             //! Space
                data_buffer.dim_8[10] = msg_count;      //! Counter

                //! Copy to message buffer
                memcpy(msg4 + 4 + 16, data_buffer.access_p, 11 * sizeof(int8_t));

                //! Update message counter
                if (msg_count == 127) { //! If maximum reached start over
                    msg_count = -128;
                }
                else {                  //! Else just add one more
                    msg_count++;
                }

                //////
                //! Send Data
                for (size_t i = 0; i < n_msg; i++) {
                    //////
                    //! Select message
                    switch (i) {
                    case 0:
                        msg = msg1;
                        msg_length = msg1_length;
                        break;
                    case 1:
                        msg = msg2;
                        msg_length = msg2_length;
                        break;
                    case 2:
                        msg = msg3;
                        msg_length = msg3_length;
                        break;
                    case 3:
                        msg = msg4;
                        msg_length = msg4_length;
                        break;
                    }

                    //////
                    //! Send message
                    //! Initialise cylce
                    msg_sent = false;
                    n_attempts_c = 0;

                    do {
                        //! Sends message to terminal
                        msg_sent = HSradio->sendMessage(msg, msg_length);
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
                    Time::Delay::wait(2);
                    // !!!!WRN: Example function waits for 90 seconds
                }

                //! Debug message
                m_task->debug("cutSend_EstimatedState left");
                return true;
            }


            ///////////////////////////////////////
            //! PUBLIC ACCESS
        public:
            //! Constructor
            RadioMessage(Tasks::Task* task) :
                m_task(task) {
                //! Initialise which data is to be sent (None for now)
                for (size_t i = 0; i < DTS_All; i++) {
                    data_options[i] = false;
                }
                //! Initialise the buffer
                initialiseBuffer();
                //! Initialise the number of messages sent
                msg_count = -128;
                //! Initialise the state of the warning messages
                saved_EstimatedState = false;
            }

            /////////////////////
            //! Public Variables
            bool saved_EstimatedState;       //! Control variable for displaying save messages

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

                //! Inform the user it was saved only the first time
                if (saved_EstimatedState == false) {
                    m_task->inf(DTR("SAVEVAR: Saving EstimatedState OK."));
                    saved_EstimatedState = true;    //! Updated state
                }
                

                return true;
            }

            //! Selectes which data is to be sent
            //! @param[in]  msg_option      - Option of data to be sent.
            void selectData(DataToSend msg_option) {
                //! Debug message
                m_task->debug("select Data entered.");
                
                //! Auxiliary value
                bool all_true_false = true;

                if (msg_option == DTS_All) {                    //! All data is to be sent
                    //! Debug message
                    m_task->debug("All data option.");

                    //! Check if all elements of data_options are true or false
                    for (size_t i = 0; i < DTS_All - 1; i++) {
                        if (data_options[i] != data_options[i + 1]) {
                            all_true_false = false;
                            break;
                        }
                    }
                    //std::all_of(data_options[0], data_options[DataToSend::All - 1], [](bool val) {return val == false; }) || std::all_of(data_options[0], data_options[DataToSend::All - 1], [](bool val) {return val == true; })
                    if (all_true_false) {   //! If all ellements are equal
                        for (size_t i = 0; i < DTS_All; i++) {
                            data_options[i] = !data_options[i];
                        }
                    }
                    else {  //! If just a few are true -> turn all true
                        for (size_t i = 0; i < DTS_All; i++) {
                            data_options[i] = true;
                        }
                    }
                }
                else if (msg_option == DTS_Estimated_State) {   //! Send EstimatedState data
                    //! Debug message
                    m_task->debug("Estimated State option.");

                    data_options[DTS_Estimated_State] = !data_options[DTS_Estimated_State];
                }

                //! Debug message
                m_task->debug("select Data left.");

                return;
            }

            //! Get if any data is to be sent
            //! @return     boolean         - If data was stored correctly or not.
            bool getDataOptions(void) {
                //! Auxiliary value
                bool any_true = false;

                //! Check if any element of data_options are true
                for (size_t i = 0; i < DTS_All; i++) {
                    if (data_options[i] == true) {
                        any_true = data_options[i];
                        break;
                    }
                }

                return any_true;
            }

            //! Selectes which data is to be sent
            //! @param[in]  HSradio         - Satellite radio link.
            //! @return     boolean         - If data was sent correctly or not.
            bool sendData(SatelliteRadio* HSradio) {
                //! Debug message
                m_task->debug("send Data entered");

                //! Run through data options
                for (size_t i = 0; i < DTS_All; i++) {
                    //! Debug messages
                    m_task->debug("Run through data options.");
                    m_task->debug("Option I = %d", i);

                    if (data_options[i] == true) { //! Check if this data is to be sent
                        //! Debug message
                        m_task->debug("Option true.");

                        switch (i) {
                        case DTS_Estimated_State:   //! Send EstimatedState data
                            //! Debug message
                            m_task->debug("Process and send Estimated State");

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
                    else {
                        switch (i) {
                        case DTS_Estimated_State:   //! Send EstimatedState data
                            //! Debug message
                            m_task->inf("Estimated State option false");

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

                //! Debug message
                m_task->debug("send Data left");

                return true;
            }
        };
    }
}

#endif
