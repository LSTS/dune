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
// Author: André Guerra                                                     *
//***************************************************************************
// This function deals with the communications with the HumSat system       *
// from UVigo.                                                              *
// 1 - Determines when a satellite is in view to transmit                   *
// 2 - Consumes messages from the bus                                       *
// 3 - Makes the division of the message (HumSat only accepts messages      *
//     with a maximum of 32 bytes)                                          *
// 4 - Sends the messages to the HumSat radio                               *
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
      bool sat_comms_state;						    //! Satellite comms link state (enable/disable)
      //TODO Grey out satellite options for sat_state = false!
      OrbitalParametersValue sat_orbparm;	//! Parameters of spacecraft

      /////////////
      //! User data
      bool send_state;            //! Transmit data or not
      DataCheckList data_to_send; //! Data to be sent

      /////////////
      //! HumSat radio
      bool radio_state;           //! Radio connected (true or false)
      //TODO Grey out radio options for radio_state = false!

      uint16_t radio_power;       //! Radio transmission Power
      int32_t radio_freq;         //! Radio transmission Frequency
      std::string radio_id;       //! User amateur call id
      uint16_t sensor_id;         //! Internal terminal id

      std::string device_name;    //! Serial port device
      uint16_t baud_rate;         //! Serial port baud rate
      double input_timeout;       //! Input timeout
    };

    //! Serial device parameters checklist
    struct SerialDeviceCheckList {
      bool device_state;        //! Serial port device (check status)
      bool baud_rate_state;     //! Serial port baud rate (check status)
      bool input_timeout_state; //! Input timeout (check status)
    };

    //! Radio device paramenters checklist
    struct RadioDeviceCheckList {
      bool radio_id_state;        //! User amateur call id (check status)
      bool sensor_id_state;       //! Internal terminal id (check status)
    };

    struct Task : public DUNE::Tasks::Task {
      //! Task arguments.
      Arguments m_args;

      //! Global variables
      SatelliteLink* sat_operation; //! Satellite variable
      SatelliteRadio* humsat_radio; //! Radio transmitter
      RadioMessage* msg_radio;      //! Radio messages

      //! Power variables
      IMC::PowerChannelControl humsat_pcc;        //! Power channel control

      //! Control variables
      SerialDeviceCheckList serial_device_ready;  //! Serial device configurations ready
      RadioDeviceCheckList humsat_radio_ready;    //! HumSat radio configurations ready

      //! Warning variables
      bool m_rwar_count;      //! Warning messages of radio not connected
      bool m_dwar_count;      //! Warning messages of data to be sent not selected
      bool m_dswar_count;     //! Warning messages of data to be sent now
      bool m_swar_count;      //! Warning messages of satellite not connected
      bool m_spOPwar_count;   //! Warning messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
      bool m_spCWwar_count;   //! Warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
      bool m_spLPwar_count;   //! Warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set

      //! Auxiliary variables
      char aux_str[100];      //! For auxiliar strings (convert variables to string)
      char aux_str2[100];     //! For auxiliar strings (convert double to string)
      char aux_radio_id[6];   //! User amateur call id (auxiliary variable)


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        humsat_radio(NULL) {
        /////////////
        //! Initialise Variables
        //! Global variables
        sat_operation = new SatelliteLink(this);  //! Satellite variable
        msg_radio = new RadioMessage(this);       //! Radio messages

        //! Power variables
        humsat_pcc.name = "5V C.2";               //! Power channel control

        //! Control variables
        humsat_radio_ready.radio_id_state = false;        //! User amateur call id status
        humsat_radio_ready.sensor_id_state = false;       //! Internal terminal id status
        serial_device_ready.device_state = false;         //! Serial port device status
        serial_device_ready.baud_rate_state = false;      //! Serial port baud rate status
        serial_device_ready.input_timeout_state = false;  //! Input timeout status

        //! Warning variables
        m_rwar_count = false;       //! Warning messages of radio not connected
        m_dwar_count = false;       //! Warning messages of data to be sent not selected
        m_dswar_count = false;      //! Warning messages of data to be sent now
        m_swar_count = false;       //! Warning messages of satellite not connected
        m_spOPwar_count = false;    //! Warning messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
        m_spCWwar_count = false;    //! Warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
        m_spLPwar_count = false;    //! Warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set

        //! Auxiliary Variables
        strncpy(aux_radio_id, "EA1RCT", sizeof(aux_radio_id));

        /////////////
        //! Data parameters

        //! Send EstimatedState (true or false)
        param("Data Options - EstimatedState", m_args.data_to_send.estimated_state_check)
          .minimumValue("0")
          .maximumValue("1")
          .defaultValue("0")
          .description("Send EstimatedState information?");

        //! Send All data (true or false)
        param("Data Options - All", m_args.data_to_send.all_check)
          .minimumValue("0")
          .maximumValue("1")
          .defaultValue("0")
          .description("Send all information possible?");

        //! Start sending data (true or false)
        param("Send Data State", m_args.send_state)
          .minimumValue("0")
          .maximumValue("1")
          .defaultValue("0")
          .description("Start/Stop sending data?");

        /////////////
        //! Radio parameters

        //! Connected Parameter (true or false)
        param("Radio Connected", m_args.radio_state)
          .minimumValue("0")
          .maximumValue("1")
          .defaultValue("0")
          .description("Power up HumSat radio?");

        //! Output Power
        sprintf(aux_str, "%d", HUMSAT_MINPOWER);
        sprintf(aux_str2, "%d", HUMSAT_MAXPOWER);
        param("Radio Power", m_args.radio_power)
          .minimumValue(aux_str)
          .maximumValue(aux_str2)         // !!!!WRN: Might need to be changed!!!!
          .defaultValue("0x0AD0")
          .units(Units::Watt)
          .description("HumSat radio output power value?");

        //! Output Frequency
        sprintf(aux_str, "%d", HUMSAT_MINFREQ);
        sprintf(aux_str2, "%d", HUMSAT_MAXFREQ);
        param("Radio Frequency", m_args.radio_freq)
          .minimumValue(aux_str)
          .maximumValue(aux_str2)         // !!!!WRN: Might need to be changed!!!!
          .defaultValue("0x1B5880F7")
          .units(Units::Hertz)
          .description("HumSat radio output frequency value?");

        //! Radio Device ID
        param("Radio ID", m_args.radio_id)
          .defaultValue("EA1RCT")
          .description("Amateur radio user call id?");

        //! Sensor ID
        param("Sensor ID", m_args.sensor_id)
          .defaultValue("4600")
          .description("Internal HumSat terminal id?");

        //! Serial port
        param("Serial Port - Device", m_args.device_name)
          .defaultValue("/dev/ttyO0")
          .description("Serial port device for the HumSat radio?");

        //! Serial port baud rate
        param("Serial Port - Baud Rate", m_args.baud_rate)
          .defaultValue("9600")
          .description("Serial port baud rate value?");

        //! Communications Timeout
        param("Radio Timeout", m_args.input_timeout)
          .minimumValue("1")
          .defaultValue("5")      //TODO Think about a realistic value
          .units(Units::Second)
          .description("Amount of seconds to wait for HumSat radio to respond.");


        /////////////
        //! Satellite parameters

        //! Connected Parameter (true or false)
        param("Satellite Comms State", m_args.sat_comms_state)
          .minimumValue("0")
          .maximumValue("1")
          .defaultValue("0")
          .description("Enable/Disable satellite comms link?");

        //! Set/change orbital period
        param("Satellite Orbital Period", m_args.sat_orbparm.orbit_period)
          .minimumValue("1")      //TODO minimum value should really be 5000
          .defaultValue("7200")
          .units(Units::Second)
          .description("Satellite orbital period value?");
        //TODO Mensagem "Orbital period has to be positive."

        //! Set/change communication window
        //sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
        param("Satellite Comm Window", m_args.sat_orbparm.comm_window)
          .minimumValue("1")      //TODO determine the minimum value for the comm window
                                  //.maximumValue(aux_str)  //TODO determine maximum value for the comm window dependent on orbital period
          .defaultValue("600")
          .units(Units::Second)
          .description("Satellite communications window value?");
        //TODO Mensagem "Communications window has to be positive."

        //! Set/change last time it was seen
        //sprintf(aux_str, "%.2f", m_args.sat_orbparm.orbit_period);
        param("Satellite Last Pass", m_args.sat_orbparm.last_passage)
          .minimumValue("0")
          //.maximumValue(aux_str)  //TODO determine a maximum value for the last time seen dependent on orbital period
          .defaultValue("0")
          .units(Units::Second)
          .description("When did satellite last appear?");
        //TODO Mensagem "Last passage has to be zero or positive."


        /////////////
        //! Message binding

        //! Setup processing of IMC messages
        bind<IMC::EstimatedState>(this);
      }


      //! Update internal state with new parameter values.
      void onUpdateParameters(void) {
        //! Debug message
        trace("Update Parameters");

        /////////////
        //! Data parameters

        //! Changes the option of sending EstimatedState
        if (paramChanged(m_args.data_to_send.estimated_state_check)) {
          //! Debug message
          spew("Estimated State Parameter");

          msg_radio->selectData(DTS_ESTIMATED_STATE, m_args.data_to_send.estimated_state_check);

          m_dwar_count = false;       //! Reset warning messages of data to be sent not selected
        }

        //! Changes the option of sending All data
        if (paramChanged(m_args.data_to_send.all_check)) {
          //! Debug message
          spew("All Data Parameter");

          msg_radio->selectData(DTS_ALL, m_args.data_to_send.all_check);

          m_dwar_count = false;       //! Reset warning messages of data to be sent not selected
        }

        if (paramChanged(m_args.send_state)) {
          //! Debug message
          spew("Send Data Parameter");

          if (m_args.send_state) {
            inf(DTR("Data will be sent as soon as satellite is here (and all parameters have been configured correctly)"));
          }
          else {
            inf(DTR("Data will not be sent for the time being"));
          }

          m_dswar_count = false;      //! Reset warning messages of data to be sent now
        }

        /////////////
        //! Radio parameters

        //! If it is connected/disconnected
        if (paramChanged(m_args.radio_state)) {
          //! Debug message
          spew("Radio Connected Parameter");

          if (m_args.radio_state) {   //! Acquire resources (radio) if it was previously disconnected
            //! Information message
            inf(DTR("Connecting HumSat..."));

            //! Power on humsat radio
            humsat_pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
            dispatch(humsat_pcc);
            Delay::wait(0.2);

            onResourceAcquisition();  //! Acquire resources

            if (m_args.radio_state) {	//! If radio (resources) was acquired correctly
              onResourceInitialization();
            }
          }

          if (!m_args.radio_state) {  //! Release resources (radio) if it was previously connected (or not acquired correctly)
              //! Information message
            inf(DTR("Disconnecting HumSat..."));

            onResourceRelease();      //! Release resources

            //! Power off humsat radio
            humsat_pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            dispatch(humsat_pcc);
          }

          m_rwar_count = false;       //! Reset warnings messages of radio not connected
        }

        //! If output power is changed
        if (paramChanged(m_args.radio_power)) {
          if (m_args.radio_state) {   //! If radio is connected
              // Set Radio Output Power
            if (humsat_radio->setPower(m_args.radio_power) == false) {
              m_args.radio_power = humsat_radio->getPower();
            }
          }
        }

        //! If output frequency is changed
        if (paramChanged(m_args.radio_freq)) {
          if (m_args.radio_state) {   //! If radio is connected
              // Set Output Frequency
            if (humsat_radio->setFreq(m_args.radio_freq) == false) {
              m_args.radio_freq = humsat_radio->getFreq();
            }
          }
        }

        //! Radio Device ID
        if (paramChanged(m_args.radio_id)) {
          if (!m_args.radio_id.length() == 6) {
            //! Error message
            err(DTR("ERROR: Amateur call id - Maximum number of characters is 6!"));
            m_args.radio_id = "EA1RCT";
            humsat_radio_ready.radio_id_state = false;
          }
          else {
            humsat_radio_ready.radio_id_state = true;
            //TODO Problem with using directy "m_args.radio_id.c_str()" on humsat_radio->setRadioArgs
            strncpy(aux_radio_id, m_args.radio_id.c_str(), sizeof(aux_radio_id));
          }

          if (m_args.radio_state && (humsat_radio_ready.radio_id_state && humsat_radio_ready.sensor_id_state)) {   //! If radio is connected
            // Set Amateur call id
            humsat_radio->setRadioArgs(aux_radio_id, m_args.sensor_id);
          }
        }

        //! Sensor ID
        if (paramChanged(m_args.sensor_id)) {
          humsat_radio_ready.sensor_id_state = true;
          if (m_args.radio_state && (humsat_radio_ready.radio_id_state && humsat_radio_ready.sensor_id_state)) {   //! If radio is connected
              // Set terminal id
            humsat_radio->setRadioArgs(aux_radio_id, m_args.sensor_id);
          }
        }

        //! Serial port device
        if (paramChanged(m_args.device_name)) {
          serial_device_ready.device_state = true;
          if (m_args.radio_state && (serial_device_ready.device_state && serial_device_ready.baud_rate_state && serial_device_ready.input_timeout_state)) {   //! If radio is connected
              // Set Serial port device
            humsat_radio->setSerialDevice(m_args.device_name, m_args.baud_rate, m_args.input_timeout);
          }
        }

        //! Serial port baud rate
        if (paramChanged(m_args.baud_rate)) {
          serial_device_ready.baud_rate_state = true;
          if (m_args.radio_state && (serial_device_ready.device_state && serial_device_ready.baud_rate_state && serial_device_ready.input_timeout_state)) {   //! If radio is connected
              // Set Serial port baud rate
            humsat_radio->setSerialDevice(m_args.device_name, m_args.baud_rate, m_args.input_timeout);
          }
        }

        //! Communications Timeout
        //TODO possible future use of a watchdog on serial comms
        if (paramChanged(m_args.input_timeout)) {
          serial_device_ready.input_timeout_state = true;
          if (m_args.radio_state && (serial_device_ready.device_state && serial_device_ready.baud_rate_state && serial_device_ready.input_timeout_state)) {   //! If radio is connected
              // Set Serial port Communications Timeout
            humsat_radio->setSerialDevice(m_args.device_name, m_args.baud_rate, m_args.input_timeout);
          }
        }

        /////////////
        //! Satellite parameters

        //! Satellite comms link
        if (paramChanged(m_args.sat_comms_state)) {
          //! Debug message
          spew("Satellite Comms Link Parameter");

          if (m_args.sat_comms_state) {   //! Enable satellite comms link if it was previously disable
            if (m_args.radio_state) {   //! If radio is connected orbital parameters can be set
                                        //! Reset orbital parameters


              ///// WRN CHECK!!!
              sat_operation->resetOrbitalParam(ORB_PARAM_LAST_PASSAGE);
              




              //! Information message
              inf(DTR("Satellite comms link enable. All orbital parameters have been reset."));
            }
            else {
              //! Warning message
              war(DTR("HumSat radio is not connected yet! Connect before enabling satellite comms link."));
              m_args.sat_orbparm.orbit_period = 7200;
              m_args.sat_orbparm.last_passage = 0;
              m_args.sat_orbparm.comm_window = 600;
            }
          }

          m_swar_count = false;       //! Reset warnings messages of satellite not connected
          m_spOPwar_count = false;    //! Reset warnings messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
          m_spCWwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
          m_spLPwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set
        }

        //! Changes to orbital period
        if (paramChanged(m_args.sat_orbparm.orbit_period)) {
          //! Debug message
          spew("Orbital Period Parameter");

          sat_operation->setOrbitalParam(ORB_PARAM_ORB_PERIOD, m_args.sat_orbparm.orbit_period);
          //if (m_args.sat_comms_state) {   //! If satellite comms link is enable
          //  sat_operation->setOrbitalParam(ORB_PARAM_ORB_PERIOD, m_args.sat_orbparm.orbit_period);
          //}
          //else {
          //  m_args.sat_orbparm.orbit_period = sat_operation->getOrbitalParam(ORB_PARAM_ORB_PERIOD);
          //  war(DTR("Enabel satellite comms link before setting an orbital parameter."));
          //}

          m_spOPwar_count = false;    //! Reset warnings messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
          m_spCWwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
          m_spLPwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set
        }

        //! Changes to communication window
        if (paramChanged(m_args.sat_orbparm.comm_window)) {
          //! Debug message
          spew("Communication Window Parameter");

          sat_operation->setOrbitalParam(ORB_PARAM_COMM_WINDOW, m_args.sat_orbparm.comm_window);
          //if (m_args.sat_comms_state) {   //! If satellite comms link is enable
          //  if (!sat_operation->setOrbitalParam(ORB_PARAM_COMM_WINDOW, m_args.sat_orbparm.comm_window)) {
          //    m_args.sat_orbparm.comm_window = sat_operation->getOrbitalParam(ORB_PARAM_COMM_WINDOW);
          //  }
          //}
          //else {
          //  m_args.sat_orbparm.comm_window = sat_operation->getOrbitalParam(ORB_PARAM_COMM_WINDOW);
          //  war(DTR("Enabel satellite comms link before setting an orbital parameter."));
          //}

          m_spOPwar_count = false;    //! Reset warnings messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
          m_spCWwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
          m_spLPwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set
        }

        //! Changes to the time from last satellite pass
        if (paramChanged(m_args.sat_orbparm.last_passage)) {
          //! Debug message
          spew("Last Passage Parameter");

          if (m_args.sat_comms_state) {   //! If satellite comms link is enable
            if (!sat_operation->setOrbitalParam(ORB_PARAM_LAST_PASSAGE, m_args.sat_orbparm.last_passage)) {
              m_args.sat_orbparm.last_passage = sat_operation->getOrbitalParam(ORB_PARAM_LAST_PASSAGE);
            }
          }
          else {
            m_args.sat_orbparm.last_passage = sat_operation->getOrbitalParam(ORB_PARAM_LAST_PASSAGE);
            war(DTR("Enabel satellite comms link before setting an orbital parameter."));
          }

          m_spOPwar_count = false;    //! Reset warnings messages of satellite parameter ORB_PARAM_ORB_PERIOD not set
          m_spCWwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_COMM_WINDOW not set
          m_spLPwar_count = false;    //! Reset warning messages of satellite parameter ORB_PARAM_LAST_PASSAGE not set
        }
      }

      //! Consume EstimatedState message
      void consume(const IMC::EstimatedState * msg) {
        //! This function consumes EstimatedState message and updates UserData
        msg_radio->storeData(msg->clone(), DTS_ESTIMATED_STATE);

        //DUNE::Network::Fragments* m_frag; //! IMC message fragment handling
        //m_frag = new Fragments((IMC::Message*) msg, 32);
        //msg_radio->storeData(m_frag, DTS_ESTIMATED_STATE);

        return;
      }

      //! Acquire resources.
      void onResourceAcquisition(void) {
        //! Debug message
        debug(DTR("ResourceAcquisition: Initiated"));

        if (m_args.radio_state) {
          humsat_radio = new SatelliteRadio(this);     //! Radio transmitter

          //! Debug message
          trace(DTR("ResourceAcquisition: Acquiring HumSat......"));

          //! Set serial device
          humsat_radio->setSerialDevice(m_args.device_name, m_args.baud_rate, m_args.input_timeout);

          if (!humsat_radio->activateRadio()) {
            m_args.radio_state = 0;
            //! Set task entity state
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            //! Error message
            err(DTR("Error activating HumSat. Try again."));          //! Information message
          }
        }
      }

      //! Initialize resources.
      void onResourceInitialization(void) {
        //! Debug message
        debug(DTR("ResourceInitialization: Initiated"));

        if (m_args.radio_state) {
          //! Debug message
          trace(DTR("ResourceInitialization: Seting radio parameters"));

          // Set Radio main parameters
          humsat_radio->setRadioArgs(aux_radio_id, m_args.sensor_id);

          // Set Radio Output Power
          //! Debug message
          spew(DTR("ResourceInitialization: Setting HumSat Power."));
          if (!humsat_radio->setPower(m_args.radio_power)) {
            //! Warning message
            war("Error setting power! Getting current power settings.");
            m_args.radio_power = humsat_radio->getPower();
            //! Set task entity state
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            return;
          }
          else {
            //! Set task entity state
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          // Set Output Frequency
            //! Debug message
          spew(DTR("ResourceInitialization: Setting HumSat Frequency."));
          if (!humsat_radio->setFreq(m_args.radio_freq)) {
            //! Warning message
            war("Error setting frequency! Getting current frequency settings.");
            m_args.radio_freq = humsat_radio->getFreq();
            //! Set task entity state
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
          else {
            //! Set task entity state
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
        }
      }

      //! Release resources.
      void onResourceRelease(void) {
        //! Debug message
        debug(DTR("ResourceRelease: Releasing HumSat......"));
        Memory::clear(humsat_radio);
      }

      //! Main loop.
      void
        onMain(void) {
        //! Information message
        inf(DTR("SatComms Starting...."));

        SatCommsRetCode return_result;

        //! Main cycle
        while (!stopping()) {

          //! Delay execution
          //Time::Delay::wait(1.0);
          waitForMessages(1.0);

          //! Check if radio is connected before starting operations
          if (!m_args.radio_state) {
            //! Radio is not connected

            //! Warning message
            if (!m_rwar_count) {
              war(DTR("Radio is not connected! Connect to start satellite radio operations"));
              m_rwar_count = true;
              //! Set task entity state
              if (getEntityState() != IMC::EntityState::ESTA_ERROR) {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
              }
            }

            //! Restart cycle
            continue;
          }

          //! Check if any data was selected to be sent before starting operations
          if (!msg_radio->checkDataOptions()) {
            //! Data to be sent is not selected

            //! Warning message
            if (!m_dwar_count) {
              war(DTR("Data to be sent not selected! Select data to start satellite radio operations"));
              m_dwar_count = true;
            }

            //! Restart cycle
            continue;
          }


          //! Check if satellite comms link is enable and all orbital parameters have been set before starting operations
          if (!m_args.sat_comms_state || !sat_operation->checkOrbitalParam(ORB_PARAM_ALL)) {
            //! Satellite is not connected or all orbital parameters have not been set

            //! Warning messages
            if (!m_args.sat_comms_state) {
              if (!m_swar_count) {
                //! Warning message
                war(DTR("Satellite option not active! Activate to start satellite radio operations"));
                m_swar_count = true;
              }
            }
            else {
              if (!sat_operation->checkOrbitalParam(ORB_PARAM_ORB_PERIOD) && !m_spOPwar_count) {
                //! Warning message
                war(DTR("Satellite Orbital Period not set! Set it to start satellite radio operations"));
                m_spOPwar_count = true;
              }
              if (!sat_operation->checkOrbitalParam(ORB_PARAM_COMM_WINDOW) && !m_spCWwar_count) {
                //! Warning message
                war(DTR("Satellite Communication Window not set! Set it to start satellite radio operations"));
                m_spCWwar_count = true;
              }
              if (!sat_operation->checkOrbitalParam(ORB_PARAM_LAST_PASSAGE) && !m_spLPwar_count) {
                //! Warning message
                war(DTR("Satellite Last Passage not set! Set it to start satellite radio operations"));
                m_spLPwar_count = true;
              }
            }

            //! Restart cycle
            continue;
          }

          if (!m_args.send_state) {
            //! Data is not to be sent for now

            //! Warning message
            if (!m_dswar_count) {
              war(DTR("Data is not to be sent for now! Activate option to start transmitting"));
              m_dswar_count = true;
            }

            //! Still check if satellite is present
            sat_operation->locateSatellite(true);

            //! Restart cycle
            continue;
          }

          if (getEntityState() == IMC::EntityState::ESTA_ERROR) {
            //! Still check if satellite is present
            sat_operation->locateSatellite(true);

            //! Restart cycle
            continue;
          }

          //! Check if satellite is in view of the vehicle
          if (sat_operation->locateSatellite(false)) {
            //! Satellite is in view

            //! Consume messages
            waitForMessages(1.0);

            //! Debug message
            //debug(DTR("EstimatedState has been consumed."));

            /*
            //! Sent test message in debug
            if (getDebugLevel() > DEBUG_LEVEL_NONE) { //! Test a simple message
                                                      //! Move Data to HumSat terminal and transmit it
              uint8_t payload[10] = {1,2,3,4,5,6,7,8,9,0};
              humsat_radio->sendMessage(payload, sizeof(payload));
              humsat_radio->transmitMessage();
            }
            */
            //! Debug message
            debug(DTR("Send Estimated state tryout."));


            //! Send messages via the HumSat radio
            return_result = msg_radio->sendData(humsat_radio, getSystemId(), getEntityId());
            if (return_result != SC_RETURN_OK) {
              err(DTR("Data was not transmitted! Check possible warnings."));

              if (return_result == SC_RETURN_COMMERROR) {
                setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              }
            }
            else {
              //! Information message
              inf(DTR("Data has been processed and transmitted to the satellite!"));

              //! Set task entity state
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

            //! Reset warnings of the messages saved
            msg_radio->resetWarningsMesg();
          }
        }
      }
    };
  }
}

DUNE_TASK
