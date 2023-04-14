//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Nikolai Lauvås (NTNU, Department of Engineering Cybernetics)     *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Hardware/SocketCAN.hpp>

#define ADDR_SOURCE 0xfe
#define ADDR_TQIF 0xab
namespace Actuators
{
  //! This task acts as a bridge between the Maritime Robotics(MR) Interface card to Torqeedo motors and batteries, and DUNE with IMC messages
  //! Messages are sent to the motors periodically, at least once per/second, or else motors stops(see msg_tq_motor_set in mr_can.h from MR)
  //! 
  //! Reads and writes CAN frames to a buffer that is sent to Hardware::SocketCAN.
  //! @author Nikolai Lauvås
  namespace Torqeedo
  {
    using DUNE_NAMESPACES;
    //! Maximum number of batteries connected to the Torqeedo board
    static const unsigned c_num_batteries = 4;
    //! Number of power channels
    static const unsigned c_pwrs_count = 10;
    //! Number of power rails
    static const unsigned c_pwr_rails_count = 5;
    //! Number of motors
    static const unsigned c_motors = 2;
    enum torqeedo_msg_identifiers_t
    {
      MSG_TEXT = 0,
      MSG_CAP_AMP = 1,
      MSG_CAP_WATT = 2,
      MSG_RAIL = 3,
      MSG_HOUSEKEEPING = 4,
      MSG_TEMPERATURE = 5,
      MSG_ID = 6,
      MSG_BATCELLS = 7,
      MSG_OUTPUTS = 8,
      MSG_OUTPUT_SET = 9,
      MSG_UPTIME = 10,
      MSG_BOOTLOADER = 11,
      MSG_TQ_MOTOR_DRIVE = 12,
      MSG_TQ_MOTOR_SET = 13,
      MSG_TQ_BAT_STATUS = 14,
      MSG_TQ_BATCTL = 15,
      MSG_TQ_MOTOR_STATUS_BITS = 16,
      MSG_RESET = 17,
      MSG_WINCH_TELEMETRY = 18,
      MSG_WINCH_COMMAND = 19,
      MSG_WINCH_MOVING = 20,
      MSG_ID_V2 = 21
    };

    enum torqeedo_power_rails_t
    {
      R_H_MOT0 = 0,
      R_H_MOT1 = 1,
      R_H_AUX0 = 2,
      R_H_AUX1 = 2,
      R_H_12V1 = 3,
      R_H_12V2 = 3,
      R_H_12V3 = 3,
      R_H_VR0 = 3,
      R_H_VR1 = 3,
      R_H_5V = 4
    };
    enum torqeedo_power_channels_t
    {
      CH_H_MOT0 = 0,
      CH_H_MOT1 = 0,
      CH_H_AUX0 = 0,
      CH_H_AUX1 = 1,
      CH_H_12V1 = 0,
      CH_H_12V2 = 1,
      CH_H_12V3 = 2,
      CH_H_VR0 = 3,
      CH_H_VR1 = 4,
      CH_H_5V = 0
    };
    struct Arguments
    {
      //! CAN bus device name
      std::string can_dev;
      //! Power channels names.
      std::string pwr_names[c_pwrs_count];
      //! Initial power channels states.
      unsigned pwr_states[c_pwrs_count];
      //! Write to motor every motor_write_divider times task is run
      unsigned int motor_write_divider;
      //! Motor labels
      std::string motor_labels[c_motors];
      //! Rails labels
      std::string rail_labels[c_pwr_rails_count];
    };
    //! Power Channel data structure.
    struct PowerChannel
    {
      torqeedo_power_rails_t rail;
      torqeedo_power_channels_t channel;
      IMC::PowerChannelState::StateEnum state;
    };
    struct Task: public DUNE::Tasks::Periodic
    {
      //! Is there unsent power control messages
      bool m_unsent_power_parameters;
      //! Most recent throttle values.
      unsigned int motor_send_counter;
      // Datatype for storing power lines and states
      typedef std::map<std::string, PowerChannel> PowerChannelMap;
      //! Power channels by name.
      PowerChannelMap m_pwr_chs;
      //! Batteries Entities
      unsigned m_battery_eid[c_num_batteries];
      //! Motors Entities
      unsigned m_motor_eid[c_motors];
      //! Power Rail Entities
      unsigned m_power_rail_eid[c_pwr_rails_count];
      //! Most recent throttle values.
      int16_t motor0_throttle, motor1_throttle;
      //! CAN connection variable
      Hardware::SocketCAN* m_can;
      //! CAN buffer used for storing and sending messages
      char m_can_bfr[9];
      //! Task arguments.
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_unsent_power_parameters(false),
        motor_send_counter(0),
        motor0_throttle(0),
        motor1_throttle(0),
        m_can(NULL)
      {
        param("CAN Port - Device", m_args.can_dev)
        .defaultValue("")
        .description("CAN port used to communicate with the Torqeedo board.");

        param("Motor write divider", m_args.motor_write_divider)
        .defaultValue("20")
        .description("Write to motor every motor_write_divider times task is run");

        char power_channel_pcb_labels[c_pwrs_count][8] = {"H_MOT0\0","H_MOT1\0","H_AUX0\0","H_AUX1\0","H_12V1\0","H_12V2\0","H_12V3\0","H_VR0\0","H_VR1\0","H_5V\0"};
        for (unsigned i= 0; i < c_pwrs_count; i++)
        {
          std::string option = String::str("Power Channel %s - Name", power_channel_pcb_labels[i]);
          param(option, m_args.pwr_names[i]);

          option = String::str("Power Channel %s - State", power_channel_pcb_labels[i]);
          param(option, m_args.pwr_states[i])
          .defaultValue("0");
        }

        for (unsigned i= 0; i < c_motors; i++)
        {
          std::string option = String::str("Motor %d - Label", i);
          param(option, m_args.motor_labels[i]);
        }

        for (unsigned i= 0; i < c_pwr_rails_count; i++)
        {
          std::string option = String::str("Rail %d - Label", i);
          param(option, m_args.rail_labels[i]);
        }

        // Register handler routines.
        bind<IMC::QueryPowerChannelState>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::PowerChannelControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        inf(DTR("Update parameters"));
        if(m_pwr_chs.size() != 0) {
          m_pwr_chs.clear();
          m_unsent_power_parameters = true;
        }
        // Set up powerchannels
        PowerChannel pcs[c_pwrs_count];
        pcs[0] = {R_H_MOT0, CH_H_MOT0, IMC::PowerChannelState::PCS_OFF};
        pcs[1] = {R_H_MOT1, CH_H_MOT1, IMC::PowerChannelState::PCS_OFF};
        pcs[2] = {R_H_AUX0, CH_H_AUX0, IMC::PowerChannelState::PCS_OFF};
        pcs[3] = {R_H_AUX1, CH_H_AUX1, IMC::PowerChannelState::PCS_OFF};
        pcs[4] = {R_H_12V1, CH_H_12V1, IMC::PowerChannelState::PCS_OFF};
        pcs[5] = {R_H_12V2, CH_H_12V2, IMC::PowerChannelState::PCS_OFF};
        pcs[6] = {R_H_12V3, CH_H_12V3, IMC::PowerChannelState::PCS_OFF};
        pcs[7] = {R_H_VR0, CH_H_VR0, IMC::PowerChannelState::PCS_OFF};
        pcs[8] = {R_H_VR1, CH_H_VR1, IMC::PowerChannelState::PCS_OFF};
        pcs[9] = {R_H_5V, CH_H_5V, IMC::PowerChannelState::PCS_OFF};
        for (unsigned i = 0; i < c_pwrs_count; i++)
        {
          if(m_args.pwr_states[i]) {
            pcs[i].state = IMC::PowerChannelState::PCS_ON;
          }
          if(!(m_args.pwr_names[i].empty())) {
            m_pwr_chs[m_args.pwr_names[i]] = pcs[i];
          }
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        std::string label = getEntityLabel();

        for (unsigned i = 0; i < c_motors; i++)
        {
          m_motor_eid[i] = getEid(m_args.motor_labels[i]);
        }

        for (unsigned i = 0; i < c_num_batteries; i++)
        {
          m_battery_eid[i] = getEid(label + " - Battery " + std::to_string(i));
        }

        for (unsigned i = 0; i < c_pwr_rails_count; i++)
        {
          m_power_rail_eid[i] = getEid(m_args.rail_labels[i]);
        }
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }

        return eid;
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try {
          m_can = new Hardware::SocketCAN(m_args.can_dev, SocketCAN::CAN_BASIC_EFF);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        catch(std::runtime_error& e) {
          cri(DTR("Could not open CAN: %s"), e.what());
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IO_ERROR);
        }
      }

      void sendPowerChannelMessages() {
        for (PowerChannelMap::iterator itr = m_pwr_chs.begin(); itr != m_pwr_chs.end(); ++itr)
        {
          sendSetPower(itr->second);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        spew(DTR("Init resources"));
        if(m_can != NULL) {
          sendPowerChannelMessages();
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        try {
         Memory::clear(m_can);
        }
        catch(std::runtime_error& e) {
          err(DTR("Could not clear CAN: %s"), e.what());
        }
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        (void)msg;

        IMC::PowerChannelState m_pwr_ch;

        for (PowerChannelMap::iterator itr = m_pwr_chs.begin(); itr != m_pwr_chs.end(); ++itr)
        {
          if(!(itr->first.empty()))
          {
            m_pwr_ch.name = itr->first;
            m_pwr_ch.state = itr->second.state;
            dispatch(m_pwr_ch);
          }
        }
      }

      //! Consume SetThrusterActuation messages
      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        switch (msg->id)
        {
        case 0:
          motor0_throttle = int16_t(1000 * msg->value);
          break;
        case 1:
          motor1_throttle = int16_t(1000 * msg->value);
          break;
        }
      }

      //! Consume PowerChannelControl messages, forward them to CAN bus
      void
      consume(const IMC::PowerChannelControl* msg)
      {
        PowerChannelMap::const_iterator itr = m_pwr_chs.find(msg->name);
        if (itr == m_pwr_chs.end())
          return;

        IMC::PowerChannelControl::OperationEnum op = static_cast<IMC::PowerChannelControl::OperationEnum>(msg->op);
        if (op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
          m_pwr_chs[msg->name].state = IMC::PowerChannelState::PCS_ON;
        else if (op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
          m_pwr_chs[msg->name].state = IMC::PowerChannelState::PCS_OFF;
        else
          war("Chosen power state not implemented.");
        sendSetPower(m_pwr_chs[msg->name]);
      }

      //! Convenience/readability function for combining two char inputs to one uint16_t
      uint16_t
      combine2charToUint16(char most_significant, char least_significant)
      {
        return (uint16_t)(most_significant << 8) | least_significant;
      }

      //! Convenience/readability function for combining two char inputs to one int16_t
      int16_t 
      combine2charToInt16(char most_significant, char least_significant) 
      {
        return (int16_t)(most_significant << 8) | least_significant;
      }

      //! Parses a received MSG_TQ_BAT_STATUS from CAN bus buffer and sends relevant data to IMC
      void 
      parseMSG_TQ_BAT_STATUS() 
      {
        uint8_t bat_idx = m_can_bfr[0];
        uint8_t temp_C = m_can_bfr[1];
        uint16_t voltage_raw = combine2charToUint16(m_can_bfr[3], m_can_bfr[2]);
        uint16_t current_raw = combine2charToUint16(m_can_bfr[5], m_can_bfr[4]);
        uint8_t soc = m_can_bfr[6];  // State of charge
        uint8_t err_code = m_can_bfr[7];

        fp32_t voltage = fp32_t(voltage_raw) * 0.01;
        fp32_t current = fp32_t(current_raw) * 0.1;
        trace("MSG_TQ_BAT_STATUS: Batt#%d - Charge: %d; Voltage %0.2fV; Current: %0.1fA; Temp: %d, Error: %d",
              bat_idx, soc, voltage, current, temp_C, err_code);

        IMC::Temperature temp_msg;
        temp_msg.setSourceEntity(m_battery_eid[bat_idx]);
        temp_msg.value = fp32_t(temp_C);
        dispatch(temp_msg);
        
        IMC::Voltage voltage_msg;
        voltage_msg.setSourceEntity(m_battery_eid[bat_idx]);
        voltage_msg.value = voltage;
        dispatch(voltage_msg);
        
        IMC::Current current_msg;
        current_msg.setSourceEntity(m_battery_eid[bat_idx]);
        current_msg.value = current;
        dispatch(current_msg);
        
        IMC::FuelLevel level_msg;
        level_msg.setSourceEntity(m_battery_eid[bat_idx]);
        level_msg.value = fp32_t(soc);
        dispatch(level_msg);
      }

      //! Parses a received MSG_RAIL from CAN bus buffer and sends relevant data to IMC
      void
      parseMSG_RAIL(uint32_t id)
      {
        if(id == 0x0030abff)
        {
          uint8_t rail_idx = m_can_bfr[0];
          ///Voltage (mV)
          uint16_t voltage_mV = combine2charToUint16(m_can_bfr[2], m_can_bfr[1]);
          ///Current (mA) TODO: Should this be int32_t? signed in mrcan
          int32_t current_mA = (int32_t)0 | (m_can_bfr[5] << 16) | (m_can_bfr[4] << 8) | m_can_bfr[3];
          ///Electronic fuse trip current (A*2)
          uint8_t fuse_halfamps = m_can_bfr[6];
          char flags = m_can_bfr[7];

          fp32_t voltage_V = fp32_t(voltage_mV) * 0.001;
          fp32_t current_A = fp32_t(current_mA) * 0.001;
          trace("MSG_RAIL: Rail#%d - Voltage: %0.3fV, Current: %f A, fuse_halfamps: %u, flags: %02X", rail_idx, voltage_V, current_A, fuse_halfamps, flags);

          IMC::Voltage voltage_msg;
          voltage_msg.setSourceEntity(m_power_rail_eid[rail_idx]);
          voltage_msg.value = voltage_V;
          dispatch(voltage_msg);
          
          IMC::Current current_msg;
          current_msg.setSourceEntity(m_power_rail_eid[rail_idx]);
          current_msg.value = current_A;
          dispatch(current_msg);
        }
        else
        {
          debug("Wrong message index: %08x", id);
        }
      }

      //! Parses a received MSG_TQ_MOTOR_DRIVE from CAN bus buffer and sends relevant data to IMC
      void
      parseMSG_TQ_MOTOR_DRIVE()
      {
        uint8_t mot_idx = m_can_bfr[0];
        /// Power in whole watts
        uint16_t power = combine2charToUint16(m_can_bfr[2], m_can_bfr[1]);
        /// PCB temperature in tenths of degrees celsius
        int16_t temp_raw = combine2charToInt16(m_can_bfr[4], m_can_bfr[3]);
        /// Divide by 7 (gear ratio) to get propeller RPM
        uint16_t rpm_raw = combine2charToUint16(m_can_bfr[6], m_can_bfr[5]);
        
        fp32_t temp = fp32_t(temp_raw) * 0.1;
        int16_t rpm = (int16_t)rpm_raw / 7; // Rounds down to nearest whole number

        inf("MSG_TQ_MOTOR_DRIVE: Motor#%d - Power: %dW; Temp %0.1fC; RPM: %d",
              mot_idx, power, temp, rpm);

        IMC::Temperature temp_msg;
        temp_msg.setSourceEntity(m_motor_eid[mot_idx]);
        temp_msg.value = temp;
        dispatch(temp_msg);
        
        IMC::Rpm rpm_msg;
        rpm_msg.setSourceEntity(m_motor_eid[mot_idx]);
        rpm_msg.value = rpm;
        dispatch(rpm_msg);
      }

      //! Parses a received MSG_TEXT and displays it
      void
      parseMSG_TEXT()
      {
        spew("MSG_TEXT: %s", m_can_bfr);
      }

      //! Parses a received MSG_TQ_BATCTL from CAN bus buffer and makes it available for spew debug
      void
      parseMSG_TQ_BATCTL()
      {
        uint8_t motor_index = m_can_bfr[0]; // MAY need to be masked, only 4 last bits id, rest reserved
        uint8_t master_error = m_can_bfr[1];
        uint8_t error_count = m_can_bfr[2];
        uint8_t firmware_ver = m_can_bfr[3];
        spew(DTR("MSG_TQ_BATCTL: Motor#%u - Master error: %u; Error count %u; Firmware version: %u"),
              motor_index, master_error, error_count, firmware_ver);
      }

      //! Parses a received MSG_OUTPUTS from CAN bus buffer and makes it available for spew debug
      void
      parseMSG_OUTPUTS()
      {
        uint8_t rail_index = m_can_bfr[0];
        uint32_t states = (m_can_bfr[4] << 24) | (m_can_bfr[3] << 16) | (m_can_bfr[2] << 8) | m_can_bfr[1];
        spew(DTR("MSG_OUTPUTS: Rail#%u - Master error: %08X;"),
              rail_index, states);
      }

      //! Parses a received MSG_UPTIME from CAN bus buffer and makes it available for spew debug
      void
      parseMSG_UPTIME()
      {
        uint32_t uptime_s = (uint32_t)0 | (m_can_bfr[2] << 16) | (m_can_bfr[1] << 8) | m_can_bfr[0];
        uint8_t last_reset_case = m_can_bfr[3];
        spew(DTR("MSG_UPTIME: Uptime#%ds; Last reset case: %01X;"),
              uptime_s, last_reset_case);
      }

      //! Parses a received MSG_ID_V2 from CAN bus buffer and makes it available for spew debug
      void
      parseMSG_ID_V2()
      {
        uint16_t company = combine2charToUint16(m_can_bfr[1], m_can_bfr[0]);
        uint16_t product = combine2charToUint16(m_can_bfr[3], m_can_bfr[2]);
        uint16_t serial_number = combine2charToUint16(m_can_bfr[5], m_can_bfr[4]);
        uint16_t firmware_version = combine2charToUint16(m_can_bfr[7], m_can_bfr[6]);
        spew(DTR("MSG_ID_V2: Company#%d; Product: %d; Serial number: %d; Firmware: %d;"),
              company, product, serial_number, firmware_version);
      }

      //! Parses a received MSG_TQ_MOTOR_STATUS_BITS from CAN bus buffer and makes it available for spew debug
      void
      parseMSG_TQ_MOTOR_STATUS_BITS()
      {
        uint8_t motor_index = m_can_bfr[0];
        uint16_t errors = combine2charToUint16(m_can_bfr[2], m_can_bfr[1]);
        uint8_t status = m_can_bfr[3];
        spew(DTR("MSG_TQ_MOTOR_STATUS_BITS: Motor#%u - Errors: %u; Status %u"),
              motor_index, errors, status);
      }
      //! Tries to read a message from CAN bus, if successful, call relevant parser
      void
      readCanMessage() 
      {
        // Read message
        uint32_t id;
        if (Poll::poll(*m_can, 0.01)) {
          m_can->readString(m_can_bfr, sizeof(m_can_bfr));
          id = m_can->getRXID();
        } else {
          return;
        }
        
        // Extract message identifier
        uint8_t msg_id = uint8_t(id >> 20);
        // Parse message
        switch(msg_id) {
          case MSG_TEXT:
            parseMSG_TEXT();
            break;
          case MSG_RAIL:
            parseMSG_RAIL(id);
            break;
          case MSG_TQ_MOTOR_DRIVE:
            parseMSG_TQ_MOTOR_DRIVE();
            break;
          case MSG_TQ_BAT_STATUS:
            parseMSG_TQ_BAT_STATUS();
            break;
          case MSG_TQ_BATCTL:
            parseMSG_TQ_BATCTL();
            break;
          case MSG_OUTPUTS:
            parseMSG_OUTPUTS();
            break;
          case MSG_UPTIME:
            parseMSG_UPTIME();
            break;
          case MSG_ID_V2:
            parseMSG_ID_V2();
            break;
          case MSG_TQ_MOTOR_STATUS_BITS:
            parseMSG_TQ_MOTOR_STATUS_BITS();
            break;
          case MSG_CAP_AMP:
          case MSG_CAP_WATT:
          case MSG_HOUSEKEEPING:
          case MSG_TEMPERATURE:
          case MSG_ID:
          case MSG_BATCELLS:
          case MSG_OUTPUT_SET:
          case MSG_BOOTLOADER:
          case MSG_TQ_MOTOR_SET:
          case MSG_RESET:
          case MSG_WINCH_TELEMETRY:
          case MSG_WINCH_COMMAND:
          case MSG_WINCH_MOVING:
          
            debug(DTR("Known unimplemented MSG type received: %08X"), id);
            break;
          default:
            inf(DTR("Unknown CAN MSG received: %08X"), id);
        }
      }

      //! Compiles a CAN id in a format supported by the Torqeedo interface board
      uint32_t
      prepareTorqeedoCANID(torqeedo_msg_identifiers_t msg_id)
      {
        return uint32_t(ADDR_TQIF | (ADDR_SOURCE << 8) | (msg_id << 20));
      }

      //! Sends MSG_OUTPUT_SET to CAN bus
      void
      sendSetPower(PowerChannel pc)
      { // Dont send struct, send pointer or something
        m_can_bfr[0] = pc.rail;
        m_can_bfr[1] = pc.channel;
        if(pc.state == IMC::PowerChannelState::PCS_OFF) {
          m_can_bfr[2] = 0;
        } else {
          m_can_bfr[2] = 1;
        }
        m_can->setTXID(prepareTorqeedoCANID(MSG_OUTPUT_SET));
        m_can->write(m_can_bfr, 3);
      }

      //! Sends MSG_TQ_MOTOR_SET to CAN bus
      void
      sendSetMotorThrottle( int16_t motor0, int16_t motor1)
      {
        m_can_bfr[0] = (char)(motor0 & 0x00FF);
        m_can_bfr[1] = (char)((motor0 & 0xFF00) >> 8);
        m_can_bfr[2] = (char)(motor1 & 0x00FF);
        m_can_bfr[3] = (char)((motor1 & 0xFF00) >> 8);

        inf(DTR("CAN_MOTOR_MSG_SENT: %d, %d"), motor0, motor1);

        m_can->setTXID(prepareTorqeedoCANID(MSG_TQ_MOTOR_SET));
        m_can->write(m_can_bfr, 4);
      }

      //! Main loop.
      void
      task(void)
      {
        if(m_can != NULL) {
          waitForMessages(0.005);
          motor_send_counter++;
          if(motor_send_counter >= m_args.motor_write_divider) {
            sendSetMotorThrottle(motor0_throttle, motor1_throttle);
            motor_send_counter = 0;
          } else if(m_unsent_power_parameters) {
            sendPowerChannelMessages();
            m_unsent_power_parameters = false;
          } else {
            readCanMessage();
          }
        }
      }
    };
  }
}

DUNE_TASK
