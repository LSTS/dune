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
// Class to create the messages to be sent by the HumSat radio. It also     *
//  selects and stores the data to be sent.                                 *
//***************************************************************************

#ifndef TRANSPORTS_SATCOMMS_RADIOMSG_HPP_INCLUDED_
#define TRANSPORTS_SATCOMMS_RADIOMSG_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network/Fragments.hpp>

// Local headers
#include "HumSat.hpp"
#include "SatLink.hpp"

namespace Transports {
  namespace SatComms {
    using DUNE_NAMESPACES;

    /////////////
    //! VARIABLE TYPES DEFINITION
    /////////////

    //! Which data is to be sent
    enum DataToSend {
      DTS_ESTIMATED_STATE,     //! For now just EstimatedState
      //TODO Possibly other in the future...
      DTS_ALL                 //! All data allowed (!MUST BE THE LAST!)
    };

    //! Data to send to spacecraft
    struct UserData {
      //! Estimated state message.
      EstimatedState * vehicle_estate;
      ///////DUNE::Network::Fragments* vehicle_estate;
      //TODO Possibly other in the future...
    };

    //! Data check list
    struct DataCheckList {
      bool estimated_state_check;	//! Estimated state message.
      bool estimated_state_saved;	//! Control variable for displaying save messages
      //TODO Possibly other in the future...
      bool all_check;				//! All data allowed
    };

    //! Which data is to be sent
    enum SatCommsRetCode {
      SC_RETURN_OK,           //! Radio message function returns ok
      SC_RETURN_NET,          //! Radio message function returns not enougth time to transmitt
      SC_RETURN_COMMERROR,    //! Radio message function returns communications error
      SC_RETURN_WRONGOPTION  //! Radio message function returns communications error
                             //TODO Possibly other in the future...
    };

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

      DataCheckList data_check;       //! Check which data was set

      bool data_options[DTS_ALL];     //! Array with which data is to be sent (size equal to number of possibilities)

      /////////////////////
      //! Private Functions

      //! Divide and sends UserData
      //! @param[in]  msg             - IMC type message.
      //! @param[in]  HSradio         - Satellite radio link.
      //! @return     boolean         - If data was stored correctly or not.
      SatCommsRetCode cutSendUserData(IMC::Message* msg, SatelliteRadio* HSradio, unsigned int SID, unsigned int EID) { //DUNE::Network::Fragments* m_frag
        //! Debug message
        m_task->spew("cutSendUserData entered");

        //! Variable initialization
        bool msg_sent;              //! Check if message was sent or not
        const int n_attempts = 4;   //! Number of attempts to try to send a message
        int n_attempts_c;           //! Count number of attempts
        
        //! Create IMC message fragments
        DUNE::Network::Fragments* m_frag; //! IMC message fragment handling
        IMC::MessagePart* msg_frag;       //! IMC message fragment
        int n_frags;                      //! Number of fragments to be sent

        //! Fragment the IMC message to be sent
        msg->setSourceEntity(EID);
        //msg->setSourceEntity(123);
        m_frag = new Fragments(msg, 32);
        n_frags = m_frag->getNumberOfFragments();

        ////m_task->debug("WRN: NUM OF MESSAGE FRAG = %d", n_frags);

        //////
        //! Send Data
        for (int i = 0; i < n_frags; i++) {
          //////
          //! Send message
          //! Initialise cylce
          msg_sent = false;
          n_attempts_c = 0;

          //! Check if Satellite is still within Communication Window
          if(m_wdog.overflow())
          {
        	  m_task->war(DTR("WARNING: CommWindow passed! Satellite no longer in view."));
        	  m_wdog.reset();
        	  return SC_RETURN_NET;
          }

          //! Get the current fragment to be sent
          msg_frag = m_frag->getFragment(i);

          msg_frag->setSource(SID);
          msg_frag->setTimeStamp();
          msg_frag->setSourceEntity(EID);

          ///m_task->debug("WRN: sOURCE eNTITY = %u", msg_frag->getSourceEntity());
          ///m_task->debug("WRN: time stamp = %f", msg_frag->getTimeStamp());

          static const int c_bfr_size = 32;
          uint8_t bfr[c_bfr_size];
          
          int n = msg_frag->getSerializationSize();
          
          uint16_t rv = IMC::Packet::serialize(msg_frag, bfr, c_bfr_size);
          
          /*DUNE::IMC::serialize(&msg_frag->data, bfr);

          Utils::ByteBuffer buff;
          IMC::Packet::serialize(msg_frag, buff);
          uint8_t* bfr = buff.getBuffer();*/
          
          /*if (i < 3) {
            char *bfr_aux = &msg_frag->data[0];
            m_task->debug("WRN: MESSAGE FRAG = %x %x %x %x %x",
              bfr_aux[0], bfr_aux[1], bfr_aux[2], bfr_aux[3], bfr_aux[4]);
            m_task->debug("WRN: MESSAGE FRAG SIZE = %d", msg_frag->data.size());
            m_task->debug("WRN: MESSAGE BFR = %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x",
              bfr[0], bfr[1], bfr[2], bfr[3], bfr[4], bfr[5], bfr[6], bfr[7], bfr[8], bfr[9], bfr[10], bfr[11], bfr[12], bfr[13], bfr[14], bfr[15], bfr[16], bfr[17], bfr[18], bfr[19], bfr[20], bfr[21],
              bfr[22], bfr[23], bfr[24], bfr[25], bfr[26], bfr[27], bfr[28], bfr[29], bfr[30], bfr[31]);
            m_task->debug("WRN: MESSAGE BFR SIZE = %d", sizeof(*bfr));
            m_task->debug("WRN: MESSAGE N SIZE = %d", n);
            m_task->debug("WRN: MESSAGE RV SIZE = %d", rv);
          }*/

          do {
            //! Sends message to terminal
            msg_sent = HSradio->sendMessage(bfr, rv);
            //////m_task->dispatch(msg_frag); //TEMPORARY: For debug purposes only

        	  //! Counts attempt
            n_attempts_c++;
            //! Check number of attempts
            if (n_attempts_c == n_attempts) {
              m_task->err(DTR("ERROR: Number of attempts to send message to terminal exceeded."));
              return SC_RETURN_COMMERROR;
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
            //TODO Verificar watch dog na comm window

            //! Transmits message
            msg_sent = HSradio->transmitMessage();
            //! Counts attempt
            n_attempts_c++;
            //! Check number of attempts
            if (n_attempts_c == n_attempts) {
              m_task->err(DTR("ERROR: Number of attempts to transmit message exceeded."));
              return SC_RETURN_COMMERROR;
            }
          } while (!msg_sent);

          // Delay cycle
          Time::Delay::wait(2);
          // !!!!WRN: Example function waits for 90 seconds
        }

        //! Debug message
        m_task->spew("cutSendUserData left");
        return SC_RETURN_OK;
      }


      ///////////////////////////////////////
      //! PUBLIC ACCESS
    public:
      //! Constructor
      RadioMessage(Tasks::Task* task) :
        m_task(task) {
        //! Initialise which data is to be sent (None for now)
        for (int i = 0; i < DTS_ALL; i++) {
          data_options[i] = false;
        }
        //! Initialise the state of the warning messages
        resetWarningsMesg();
      }
      /////////////////////
      //! Public Variables
      UserData u_data;                  //! Data to be sent to the satellite
      ////DUNE::Network::Fragments* m_frag; //! IMC message fragment handling

      /////////////////////
      //! Public Functions

      //! Reset warning messages
      void resetWarningsMesg(void) {
        //! Reset all warnings
        data_check.estimated_state_saved = false;
        //TODO Possibly other in the future...
      }

      //! Stores user data
      //! @param[in]  msg_data        - IMC general type variable.
      //! @param[in]  msg_option      - Type of IMC message to be stored.
      //! @return     boolean         - If data was stored correctly or not.
      SatCommsRetCode storeData(IMC::Message* msg_data, DataToSend msg_option) { /// DUNE::Network::Fragments*
        //! Debug message
        m_task->spew("store Data entered.");

        switch (msg_option) {
        case DTS_ESTIMATED_STATE:
          //! Set data variable
          u_data.vehicle_estate = (EstimatedState *)msg_data;;//// msg_data

          //! Check item of data checklist
          data_check.estimated_state_check = true;   //! EstimatedState was set

          //! Inform the user it was saved only the first time
          //TODO Check se a mensagem so sai uma vez ou mais
          if (data_check.estimated_state_saved == false) {
            m_task->inf(DTR("SAVEVAR: Saving EstimatedState OK."));
            data_check.estimated_state_saved = true;    //! Updated state
          }
          break;
        default:
          //! Debug message
          m_task->trace("ERROR: STOREDATA: An option for storing data has to be selected.");
          return SC_RETURN_WRONGOPTION;
        }
        return SC_RETURN_OK;
      }

      //! Selectes which data is to be sent
      //! @param[in]  msg_option      - Option of data to be sent.
      //! @param[in]  option_value    - Value of the option.
      void selectData(DataToSend msg_option, bool option_value) {
        //! Debug message
        m_task->spew("select Data entered.");

        switch (msg_option) {
        case DTS_ESTIMATED_STATE: //! Send EstimatedState data
          //! Debug message
          m_task->trace("Estimated State option.");
          m_task->spew("Option value = %d.", option_value);

          data_options[DTS_ESTIMATED_STATE] = option_value;
          break;
        case DTS_ALL:             //! All data is to be sent
          //! Debug message
          m_task->trace("All data option.");
          m_task->spew("Option value = %d.", option_value);

          if(option_value)
            for (int i = 0; i < DTS_ALL; i++) {
              data_options[i] = option_value;
            }
          break;
        default:
          m_task->trace("ERROR: SELECTDATA: Invalid option for selecting data.");
          break;
        }

        //! Debug message
        m_task->spew("select Data left.");

        return;
      }

      //! Get if any data is to be sent
      //! @return     boolean         - If any data was selected to be sent.
      bool checkDataOptions(void) {
        //! Check if any element of data_options are true
        for (int i = 0; i < DTS_ALL; i++) {
          if (data_options[i]) {
            return true;
          }
        }
        return false;
      }

      //! Sends data to the HumSat radio to be transmitted
      //! @param[in]  HSradio         - Satellite radio link.
      //! @return     boolean         - If data was sent correctly or not.
      SatCommsRetCode sendData(SatelliteRadio* HSradio, unsigned int SID, unsigned int EID) {
        //! Debug message
        m_task->spew("send Data entered");

        //! Run through data options
        for (int i = 0; i < DTS_ALL; i++) {
          //! Debug messages
          m_task->trace("Run through data options.");
          m_task->trace("Option I = %d", i);

          if (data_options[i] == true) { //! Check if this data is to be sent
            //! Debug message
            m_task->spew("Option true.");

            switch (i) {
            case DTS_ESTIMATED_STATE:   //! Send EstimatedState data
              //! Debug message
              m_task->trace("Process and send Estimated State");

              if (data_check.estimated_state_check == true) {
                
                if (cutSendUserData(u_data.vehicle_estate, HSradio, SID, EID) == SC_RETURN_COMMERROR) {
                  m_task->war(DTR("EstimatedState has not been sent/transmitted."));
                  return SC_RETURN_COMMERROR;
                }
                //! Check item of data checklist
                data_check.estimated_state_check = false;   //! EstimatedState was sent and now has to be set again
                data_check.estimated_state_saved = false;   //! Reset warning for saving EstimatedState
              }
              else {
                m_task->inf(DTR("EstimatedState has to be stored before sending."));
                return SC_RETURN_WRONGOPTION;
              }
              break;
              //TODO Possibly other in the future...
            default:
              m_task->trace(DTR("ERROR: SENDVAR: Not a valid option."));
              return SC_RETURN_WRONGOPTION;
            }
          }
        }

        //! Debug message
        m_task->spew("send Data left");

        return SC_RETURN_OK;
      }
    };
  }
}

#endif
