//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// Copyright 2023 OceanScan - Marine Systems & Technology, Lda.             *
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
// http://ec.europa.eu/idabc/eupl.hhtml.                                    *
//***************************************************************************
// Author: João Teixeira                                                    *
// Author: Raúl Sáez                                                        *
// Author: Paulo Dias                                                       *
// Author: Maria Costa (small refactor and fix for iUSBL implementation)    *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <iterator>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"

namespace Transports
{
  //! Blueprint Subsea's Seatrac acoustic modem driver.
  //! Tested for AppFW v1.5.2041, v1.9.2132, v2.2.2191
  //!
  //! @author João Teixeira.
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Transmit only when medium is suitable.
      bool honour_medium;
      //! Transmit only underwater.
      bool only_underwater;
      //! Addresses Number - modem
      std::string addr_section;
      //! Enable AHRS mode
      bool ahrs_mode;
      //! Enable pressure sensor
      bool pressure_sensor_mode;
      //! Enable pressure sensor use for checking if underwater
      bool pressure_as_medium;
      //! Enable usbl mode
      bool usbl_mode;
      //! Hard-iron calibration.
      std::vector<float> hard_iron;
      //! Enhanced usbl information will be requested.
      bool enhanced_usbl;
      //! Rotation matrix values.
      std::vector<double> rotation_mx;
      //! Calibration threshold.
      double calib_threshold;
      //! Maximum range.
      uint16_t max_range;
      //! Transponder turn around time.
      uint16_t turn_around_time;
      //! Sound speed on water.
      double sound_speed_def;
      //! Entity label of sound speed provider.
      std::string sound_speed_elabel;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Driver.
      Driver* m_driver;
      //! Task arguments.
      Arguments m_args;
      //! Config Status.
      bool m_config_status;
      //! c_preamble detected
      bool m_preamble;
      //! Current state.
      EntityStates m_state_entity;
      //! Entity states.
      IMC::EntityState m_states[STA_MAX];
      //! True if the beacon has an USBL receiver.
      bool m_usbl_receiver;
      //! Modem address.
      unsigned m_addr;
      //! Seatrac data structure.
      DataSeatrac m_data_beacon;
      //! Time of last received input.
      double m_last_input;
      //! Read timestamp.
      double m_tstamp;
      //! Timer to manage the fragmentation of OWAY messages.
      Time::Counter<double> m_oway_timer;
      //! Hard-iron calibration parameters (after rotation).
      float m_hard_iron[3];
      //! Node map.
      NodeMap<unsigned> m_node_map;
      //! Current transmission ticket.
      Ticket* m_ticket;
      //! Vehicle Medium.
      IMC::VehicleMedium m_medium;
      //! Euler angles message.
      IMC::EulerAngles m_euler;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Angular velocity message.
      IMC::AngularVelocity m_agvel;
      //! Magnetometer Vector message.
      IMC::MagneticField m_magfield;
      //! Sound speed entity id.
      int m_sound_speed_eid;
      //! Modem sound speed.
      IMC::SoundSpeed m_sspeed;
      //! Modem depth.
      IMC::Depth m_depth;
      //! Modem measured pressure.
      IMC::Pressure m_pressure;
      //! Modem measured temperature.
      IMC::Temperature m_temperature;
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;
      //! Timer.
      Time::Counter<double> m_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        m_handle(nullptr),
        m_driver(nullptr),
        m_config_status(false),
        m_preamble(false),
        m_usbl_receiver(false),
        m_addr(0),
        m_tstamp(0),
        m_ticket(nullptr),
        m_sound_speed_eid(-1)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor. "
                     "For TCP connection use in the form of 'tcp://xxx.xxx.xxx.xxx:xxxx'.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Honour Medium", m_args.honour_medium)
        .defaultValue("false")
        .description("Set to true to transmit only when the medium is suitable");

        param("Transmit Only Underwater", m_args.only_underwater)
        .defaultValue("false")
        .description("Do not transmit when at surface (if modem installed upright on the vehicle, for instance)");

        param("Address Section", m_args.addr_section)
        .defaultValue("Seatrac Addresses")
        .description("Name of the configuration section with modem addresses");

        param("AHRS Mode", m_args.ahrs_mode)
        .defaultValue("false")
        .description("Enable the AHRS information to be used in navigation (not recommended to be used with USBL receivers).");

        param("Pressure Sensor Mode", m_args.pressure_sensor_mode)
        .defaultValue("false")
        .description("Enables pressure sensor, depth, sound velocity and temperature information");

        param("Use Internal Pressure Sensor as Medium", m_args.pressure_as_medium)
        .defaultValue("false")
        .description("Enable internal pressure sensor use for honour medium");

        param("USBL Mode", m_args.usbl_mode)
        .defaultValue("false")
        .description("Enable USBL mode. USBL receivers can obtain position information.");

        param("Enhanced USBL", m_args.enhanced_usbl)
        .defaultValue("false")
        .description("Request Enhanced USBL information. USBL receivers request enhanced "
                     "information in transmissions. This parameter is useful only when "
                     "the beacon has an USBL receiver.");

        param("AHRS Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("AHRS rotation matrix which is dependent of the mounting position");

        param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_number_axis)
        .description("Hard-Iron calibration parameters");

        param("Calibration Threshold", m_args.calib_threshold)
        .defaultValue("0.1")
        .units(Units::Gauss)
        .minimumValue("0.0")
        .description("Minimum magnetic field calibration values to reset hard-iron parameters");

        param("Max Range", m_args.max_range)
        .defaultValue("1000")
        .minimumValue("100")
        .maximumValue("3000")
        .description("Range timeout that specifies a distance beyond which replies are ignored and the remote beacon is considered to have timed out.");

        param("Turn Around Time", m_args.turn_around_time)
        .units( Units::Millisecond)
        .defaultValue("10")
        .minimumValue("10")
        .maximumValue("1000")
        .description("Specifies how long the beacon will wait between receiving a request message and starting transmission of the response message."
                         "All beacons communicating must have the same value.");

        param("Sound Speed - Default Value", m_args.sound_speed_def)
        .units(Units::MeterPerSecond)
        .defaultValue("1500")
        .description("Default sound speed value to be used when computing ranges.");

        param("Sound Speed - Entity Label", m_args.sound_speed_elabel)
        .description("Entity label of sound speed provider");

        // Initialize state messages.
        m_states[STA_BOOT].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_BOOT].description = DTR("initializing");
        m_states[STA_IDLE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_IDLE].description = DTR("idle");
        m_states[STA_ACTIVE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_ACTIVE].description = DTR("active");
        m_states[STA_ERR_COM].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_COM].description = DTR("serial port communication error, modem not responding");
        m_states[STA_ERR_STP].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_STP].description = DTR("failed to configure modem, possible serial port communication error");

        // Initialize medium.
        m_medium.medium = IMC::VehicleMedium::VM_UNKNOWN;

        bind<IMC::EulerAngles>(this);
        bind<IMC::MagneticField>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::UamTxFrame>(this);
      }

      //! Set entity state.
      //! @param[in] state new entity state.
      void
      setState(EntityStates state)
      {
        m_state_entity = state;
        setEntityState((IMC::EntityState::StateEnum) m_states[m_state_entity].state,
                       m_states[m_state_entity].description);
      }

      //! Open TCP socket.
      //! @return true if socket was opened, false otherwise.
      bool
      openSocket(void)
      {
        char socket_addr[128] = { 0 };
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", socket_addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(socket_addr, port);
        m_handle = sock;
        return true;
      }

      void
      onEntityResolution() override
      {
        try
        {
          m_sound_speed_eid = resolveEntity(m_args.sound_speed_elabel);
        }
        catch (...)
        {
          debug("Dynamic sound speed corrections are disabled (using default sound speed value).");
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setState(STA_BOOT);
        try
        {
          if (openSocket())
            return;

          SerialPort* port = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          port->setCanonicalInput(true);
          port->flush();
          m_handle = port;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources and configure modem
      void
      onResourceInitialization(void)
      {
        m_node_map.readConfigSection(m_ctx.config, m_args.addr_section);
        if (!m_node_map.lookupAddress(getSystemName(), m_addr))
          throw std::runtime_error(DTR("no modem address for current system"));

        if (m_addr < 1 || m_addr > 15)
          throw std::runtime_error(String::str(DTR("modem address for agent '%s' is invalid"), getSystemName()));

        try
        {
          // Initialize driver
          m_driver = new Driver(this, m_handle, m_data_beacon, m_tstamp, m_last_input, m_preamble, m_addr,
                                m_hard_iron[0], m_hard_iron[1], m_hard_iron[2]);
        }
        catch (std::runtime_error& e)
        {
          err("%s: %s", DTR(Status::getString(CODE_COM_ERROR)), e.what());
          setState(STA_ERR_COM);
          throw std::runtime_error(m_states[m_state_entity].description);
        }

        try
        {
          // Configure modem
          setState(m_driver->configure(m_usbl_receiver, m_args.ahrs_mode, m_args.max_range, m_args.turn_around_time, m_args.sound_speed_def));
          m_config_status = true;
        }
        catch (...)
        {
          err("%s", DTR(Status::getString(CODE_COM_ERROR)));
          setState(STA_ERR_STP);
          throw std::runtime_error(m_states[m_state_entity].description);
        }

        m_timer.setTop(c_att_interval);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);

        // Rotate hard-iron calibration parameters.
        Math::Matrix data(3, 1);

        for (unsigned i = 0; i < 3; i++)
          data(i) = m_args.hard_iron[i];
        data = transpose(m_rotation) * data;
        for (unsigned i = 0; i < 3; i++)
          m_hard_iron[i] = data(i);

        if (m_handle != nullptr)
        {
          if (paramChanged(m_args.hard_iron) && m_args.ahrs_mode)
            m_driver->runCalibration();
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        Memory::clear(m_handle);
        Memory::clear(m_driver);
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        if (m_args.ahrs_mode || !m_timer.overflow())
          return;

        // Rotate attitude values to transponder reference frame.
        Math::Matrix data(3, 1);
        data(0) = msg->phi;
        data(1) = msg->theta;
        data(2) = msg->psi;
        data = transpose(m_rotation) * data;

        // Change to seatrac defined intervals (Roll: -180.0:180.0º | Pitch: -90.0:90.0º | Yaw: 0.0:359.9º)
        for (size_t i=0; i<3; i++)
          data(i) = Angles::degrees(data(i));
        if (data(2) < 0)
          data(2) = 360 + data(2);

        // Set current attitude on transponder
        m_data_beacon.cid_settings_msg.xcvr_roll = (uint16_t)(data(0) * 10);
        m_data_beacon.cid_settings_msg.xcvr_pitch = (uint16_t)(data(1) * 10);
        m_data_beacon.cid_settings_msg.xcvr_yaw = (uint16_t)(data(2) * 10);
        m_driver->sendCommand(createCommand(CID_SETTINGS_SET, m_data_beacon));

        m_timer.reset();
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        if(!m_args.ahrs_mode)
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        // Reject if it is small adjustment.
        if ((std::abs(msg->x) < m_args.calib_threshold) &&
            (std::abs(msg->y) < m_args.calib_threshold))
          return;

        double hi_x = m_args.hard_iron[0] + msg->x;
        double hi_y = m_args.hard_iron[1] + msg->y;

        IMC::EntityParameter hip;
        hip.name = c_hard_iron_param;
        hip.value = String::str("%f, %f, 0.0", hi_x, hi_y);

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (m_state_entity != STA_ACTIVE)
          return;

        if ((int)msg->getSourceEntity() != m_sound_speed_eid)
          return;

        if (msg->value < 0)
          return;

        // Do not change if new value difference to current value is below c_sspeed_window (m/s).
        if (std::abs(m_data_beacon.cid_settings_msg.env_vos/10 - msg->value) < c_sspeed_window)
          return;

        // Set water sound speed on transponder
        m_data_beacon.cid_settings_msg.env_vos = (uint16_t) msg->value * 10;
        m_driver->sendCommand(createCommand(CID_SETTINGS_SET, m_data_beacon));
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_medium = *msg;
      }

      //! Check if communications are restricted by medium.
      //! @return true if medium is not suitable for communications to happen.
      bool
      isRestricted(void)
      {
        bool restricted = false;
        float pressure = (((fp32_t) (m_data_beacon.cid_status_msg.environment_pressure)) / 1000.0) * Math::c_pascal_per_bar;

        if (m_args.honour_medium)
        {
          if ((m_medium.medium < IMC::VehicleMedium::VM_WATER) || (m_medium.medium == IMC::VehicleMedium::VM_UNKNOWN))
            restricted = true;
          if (m_args.pressure_as_medium)
            restricted = (pressure <= 0) ? true : false;
          if (m_args.only_underwater && (m_medium.medium != IMC::VehicleMedium::VM_UNDERWATER))
            restricted = true;
        }

        return restricted;
      }

      //! Send command if the modem has conditions to operate.
      //! @param[in] cmd command string.
      void
      sendProtectedCommand(const std::string& cmd)
      {
        if (isRestricted())
        {
          war(DTR("Send stopped: Communications out of water forbidden."));
          clearTicket(IMC::UamTxStatus::UTS_FAILED);
          m_data_beacon.cid_dat_send_msg.lock_flag = 0;
          return;
        }
        m_driver->sendCommand(cmd);
      }

      //! Checks if the modem is working.
      //! @return true if modem has a new message.
      bool
      hasConnection(void)
      {
        // Throw runtime error if connection problem persists
        if (Clock::get() > (m_last_input + c_input_tout + 30))
          throw std::runtime_error(m_states[STA_ERR_COM].description);

        return (Clock::get() < (m_last_input + c_input_tout));
      }

      //! Processing incoming data.
      void
      handleBinaryMessage(void)
      {
        if (m_data_beacon.cid_dat_receive_msg.ack_flag != 0)
        {
          // if msg has more than 1 packet, send next part
          if (m_ticket != nullptr)
          {
            trace(DTR("Success transmission complete (part %d of %d) for ticket %d (in %f s)"),
                m_data_beacon.cid_dat_send_msg.message_index,
                m_data_beacon.cid_dat_send_msg.n_sub_messages,
                m_ticket->seq,
                m_oway_timer.getElapsed());
          }

          if (m_ticket != nullptr && m_data_beacon.cid_dat_send_msg.packetDataNextPart(1) != -1)
          {
            resetOneWayTimer();
            trace(DTR("Sending (handleBinaryMessage) part %d of %d for ticket %d will take up to %f s for %d bytes"),
                m_data_beacon.cid_dat_send_msg.message_index,
                m_data_beacon.cid_dat_send_msg.n_sub_messages,
                m_ticket == nullptr ? -1 : m_ticket->seq,
                m_oway_timer.getTop(),
                m_data_beacon.cid_dat_send_msg.packet_len);
            sendProtectedCommand(createCommand(CID_DAT_SEND, m_data_beacon));
          }
          else
          {
            // Last packet sent.
            // Acoustic information can be computed when the target beacon replies with ACK.
            handleAcousticInformation(m_data_beacon.cid_dat_receive_msg.aco_fix);

            if (m_data_beacon.cid_dat_receive_msg.packet_len > 0)
              handleRxData(false);

            // Data communication done
            if (m_ticket != nullptr)
            {
              trace(DTR("Msg transmission complete  for ticket %d (in %f s)"),
                  m_ticket->seq, 
                  m_oway_timer.getElapsed());
              clearTicket(IMC::UamTxStatus::UTS_DONE);
            }
          }
          return;
        }
        else
          handleRxData();
      }

      void
      handleRxData(bool acoustic=true)
      {
        int data_rec_flag = m_data_beacon.cid_dat_receive_msg.packetDataDecode();
        if (data_rec_flag == 1)
        {
          std::string msg;
          m_data_beacon.cid_dat_receive_msg.getFullMsg(msg);
          handleRxMessage(msg, acoustic);
          trace("new data");
        }

        if (data_rec_flag == -1)
          war(DTR("wrong message order"));
        if (data_rec_flag == 0)
          trace("collecting data");
        if(data_rec_flag == -2)
          trace("no data size");
      }

      //! Publish received acoustic message.
      //! @param[in] str received message.
      //! @param[in] acoustic handle acoustic information.
      void
      handleRxMessage(const std::string& str, bool acoustic)
      {
        IMC::UamRxFrame msg;
        msg.data.assign((uint8_t*) &str[0], (uint8_t*) &str[str.size()]);

        // Lookup source system name.
        try
        {
          m_node_map.lookupName(m_data_beacon.cid_dat_receive_msg.aco_fix.src_id, msg.sys_src);
        }
        catch (...)
        {
          msg.sys_src = "unknown";
        }

        // Lookup destination system name.
        try
        {
          m_node_map.lookupName(m_data_beacon.cid_dat_receive_msg.aco_fix.dest_id, msg.sys_dst);
        }
        catch (...)
        {
          msg.sys_dst = "unknown";
        }

        // Fill flags.
        if (m_addr != m_data_beacon.cid_dat_receive_msg.aco_fix.dest_id)
          msg.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;

        msg.flags |= IMC::UamRxFrame::URF_DELAYED;
        dispatch(msg);
        if (acoustic)
          handleAcousticInformation(m_data_beacon.cid_dat_receive_msg.aco_fix);
      }

      //! Handle acoustic information from received data.
      //! param[in] aco_fix Acoustic information field of the received message.
      void
      handleAcousticInformation(const Acofix_t& aco_fix)
      {
        std::string sys_src = "unknown";
        // Lookup source system name.
        try
        {
          m_node_map.lookupName(aco_fix.src_id, sys_src);
        }
        catch (...)
        { }

        // Compute range from received data;
        if (aco_fix.outputflags_list[0])
        {
          double range_dist = (double) aco_fix.range_dist;
          range_dist /= 10;

          if (range_dist > 0)
          {
            IMC::UamRxRange range;
            range.sys = sys_src;
            if (m_ticket != nullptr)
              range.seq = m_ticket->seq;

            range.value = range_dist;
            dispatch(range);
          }
        }

        // Compute USBL position from received data;
        if (aco_fix.outputflags_list[2])
        {
          IMC::UsblPositionExtended usblPosition;
          usblPosition.target = sys_src;
          usblPosition.phi = Angles::radians(aco_fix.attitude_roll / 10.0);
          usblPosition.theta = Angles::radians(aco_fix.attitude_pitch / 10.0);
          usblPosition.psi = Angles::radians(aco_fix.attitude_yaw / 10.0);
          usblPosition.e = aco_fix.position_easting / 10.0;
          usblPosition.n = aco_fix.position_northing / 10.0;
          usblPosition.d = aco_fix.position_depth / 10.0;

          if (aco_fix.outputflags_list[4])
            debug("Position received with filter error flag set!");

          dispatch(usblPosition);
        }
        else // Mimics Evologic: Only if position is not computed, compute angles.
        {
          // Compute USBL angles from received data only if the beacon has an USBL receiver.
          // Seatrac X110/X010 set this flag but it hasn't an USBL able to calculate
          // all angles appropriately.
          if (aco_fix.outputflags_list[1] && m_usbl_receiver)
          {
            IMC::UsblAnglesExtended usblAnglesMsg;
            usblAnglesMsg.target = sys_src;
            usblAnglesMsg.lbearing = Angles::radians(aco_fix.usbl_azimuth / 10.0);
            usblAnglesMsg.lelevation = Angles::radians(aco_fix.usbl_elevation / 10.0);
            usblAnglesMsg.phi = Angles::radians(aco_fix.attitude_roll / 10.0);
            usblAnglesMsg.theta = Angles::radians(aco_fix.attitude_pitch / 10.0);
            usblAnglesMsg.psi = Angles::radians(aco_fix.attitude_yaw / 10.0);

            dispatch(usblAnglesMsg);
          }
        }
      }

      //! Handle errors of communication with both local and remote beacon.
      //! The method tries to send the packet again until it reaches the maximum
      //! number of retries. @see MAX_MESSAGE_ERRORS.
      void
      handleCommunicationError(void)
      {
        if( !(m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAY ||
              m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAYU))
        {
          int next_part_code = m_ticket == nullptr ? -1 : m_data_beacon.cid_dat_send_msg.packetDataNextPart(0);
          if (next_part_code < MAX_MESSAGE_ERRORS && next_part_code > 0)
          {
            resetOneWayTimer();
            debug(DTR("Error sending (handleCommunicationError) part %d of %d for ticket %d, resending"), 
                m_data_beacon.cid_dat_send_msg.message_index,
                m_data_beacon.cid_dat_send_msg.n_sub_messages,
                m_ticket == nullptr ? -1 : m_ticket->seq);
            sendProtectedCommand(createCommand(CID_DAT_SEND, m_data_beacon));
          }
          else
          {
            war(DTR("Communication failed for ticket %d %d"), 
                m_ticket == nullptr ? -1 : m_ticket->seq,
                next_part_code);
            clearTicket(IMC::UamTxStatus::UTS_FAILED);
          }
        }
        else
          war(DTR("Next msg or part send to son for ticket %d with ERROR"), m_ticket == nullptr ? -1 : m_ticket->seq);
      }

      //! Correct data according with mounting position.
      void
      rotateData(void)
      {
        Math::Matrix data(3, 1);

        // Acceleration.
        data(0) = m_accel.x;
        data(1) = m_accel.y;
        data(2) = m_accel.z;
        data = m_rotation * data;
        m_accel.x = data(0);
        m_accel.y = data(1);
        m_accel.z = data(2);

        // Angular Velocity.
        data(0) = m_agvel.x;
        data(1) = m_agvel.y;
        data(2) = m_agvel.z;
        data = m_rotation * data;
        m_agvel.x = data(0);
        m_agvel.y = data(1);
        m_agvel.z = data(2);

        // Magnetic Field.
        data(0) = m_magfield.x;
        data(1) = m_magfield.y;
        data(2) = m_magfield.z;
        data = m_rotation * data;
        m_magfield.x = data(0);
        m_magfield.y = data(1);
        m_magfield.z = data(2);
      }

      //! Handle AHRS data send by local beacon.
      //! The method tries to dispatch all the necessary information for navigation
      void
      handleAhrsData(void)
      {
        if(m_data_beacon.cid_status_msg.outputflags_list[5])
        {
          //Time Stamp
          m_euler.setTimeStamp(m_tstamp);
          m_accel.setTimeStamp(m_tstamp);
          m_agvel.setTimeStamp(m_tstamp);
          m_magfield.setTimeStamp(m_tstamp);

          // Acceleration.
          m_accel.x  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_x / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_x) * Math::c_gravity;
          m_accel.y  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_y / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_y) * Math::c_gravity;
          m_accel.z  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_z / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_z) * Math::c_gravity;
          // Magnetic Field.
          m_magfield.x = (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_mag_x;
          m_magfield.y = (fp32_t)m_data_beacon.cid_status_msg.ahrs_comp_mag_y;
          m_magfield.z = (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_mag_z;
          //Euler angles.
          m_euler.theta = Angles::radians( ((fp32_t) m_data_beacon.cid_status_msg.attitude_roll)/10);
          m_euler.psi = Angles::radians(((fp32_t) m_data_beacon.cid_status_msg.attitude_pitch)/10);
          m_euler.psi_magnetic = m_euler.psi;
          m_euler.phi = Angles::radians(((fp32_t) m_data_beacon.cid_status_msg.attitude_yaw)/10);
          // Angular Velocity.
          m_agvel.x = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_x);
          m_agvel.y = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_y);
          m_agvel.z = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_z);

          m_euler.time = ((fp32_t) m_data_beacon.cid_status_msg.timestamp)/1000;
          m_accel.time = m_euler.time;
          m_agvel.time = m_euler.time;
          m_magfield.time = m_euler.time;
          rotateData();

          // Dispatch messages.
          dispatch(m_euler, DF_KEEP_TIME);
          dispatch(m_accel, DF_KEEP_TIME);
          dispatch(m_agvel, DF_KEEP_TIME);
          dispatch(m_magfield, DF_KEEP_TIME);
        }
      }

      //! Handle Pressure, Depth, Temperature and Sound Speed data and dispatch.
      //! The method tries to dispatch data prom sensors: Pressure, Depth, Temperature, and Sound Speed data
      void
      handlePressureSensor(void)
      {
        m_depth.value = ((fp32_t) (m_data_beacon.cid_status_msg.environment_depth)) / 10.0;
        m_pressure.value = (((fp32_t) (m_data_beacon.cid_status_msg.environment_pressure)) / 1000.0) * Math::c_pascal_per_bar;
        m_temperature.value = ((fp32_t) (m_data_beacon.cid_status_msg.environment_temperature)) / 10.0;
        m_sspeed.value = ((fp32_t) (m_data_beacon.cid_status_msg.environment_vos)) / 10.0;
        dispatch(m_depth);
        dispatch(m_pressure);
        dispatch(m_temperature);
        dispatch(m_sspeed);
        trace("Received from modem: Depth %f m | Pressure %f P | Temperature %f \u00B0C | SoundSpeed %f m/s",
            m_depth.value,
            m_pressure.value,
            m_temperature.value,
            m_sspeed.value);
      }

      //! Handle the response to a CID_Data_Send command.
      //! If the acknowledged message is an OWAY and it is compound
      //! by more than one packet, the method sends the following packet.
      //! If the sending fails, it tries to send the packet again.
      //! If the modem is busy, the packet to be sent is queued.
      void
      handleDatSendResponse(void)
      {
        if (m_data_beacon.cid_dat_send_msg.status != CST_OK)
        {
          if (m_data_beacon.cid_dat_send_msg.status != CST_XCVR_BUSY)
            handleCommunicationError();
          else
          {
            inf("Modem is Busy! Queuing message.");
            sendProtectedCommand(createCommand(CID_DAT_QUEUE_SET, m_data_beacon));
          }
        }
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        debug(DTR("Received UamTxFrame with dst=0x%04X. Msg for system '%s'"), msg->getDestination(), msg->sys_dst.c_str());

        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != 255 && msg->getDestinationEntity() != getEntityId())
          return;

        std::string hex = String::toHex(msg->data);
        std::vector<char> data_t;
        std::copy(hex.begin(), hex.end(), std::back_inserter(data_t));

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid = msg->getSource();
        ticket.imc_eid = msg->getSourceEntity();
        ticket.seq = msg->seq;
        ticket.ack = (msg->flags & IMC::UamTxFrame::UTF_ACK) != 0;

        trace(DTR("Creating ticket %d"), ticket.seq);

        if (msg->sys_dst == getSystemName())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          debug(DTR("Sending UamTxStatus::UTS_INV_ADDR. Ticket %d died"), ticket.seq);
          return;
        }

        unsigned dst = 0;
        if (!m_node_map.lookupAddress(msg->sys_dst, dst))
        {
          war(DTR("invalid system name: %s"), msg->sys_dst.c_str());
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }
        ticket.addr = dst;

        // Fail if busy.
        if (m_data_beacon.cid_dat_send_msg.packetDataSendStatus())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_BUSY);
          debug(DTR("Sending UamTxStatus::UTS_BUSY. Ticket %d died"), ticket.seq);
          return;
        }

        // Replace ticket and transmit.
        replaceTicket(ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);
        trace(DTR("Sending UamTxStatus::UTS_IP. Ticket %d being processed"), ticket.seq);

        // Fill the message type.
        if ((ticket.addr != 0) && ticket.ack)
        {
          if (m_args.usbl_mode)
          {
            if (m_args.enhanced_usbl)
              m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQX;
            else
              m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQU;
          }
          else
          {
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQ;
          }
          trace(DTR("Configuration as %s %s"), m_args.usbl_mode ? "USBL" : "MSG_ONLY", m_args.usbl_mode && m_args.enhanced_usbl ? "enhanced" : "");
        }
        else
        {
          if (m_args.usbl_mode)
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_OWAYU;
          else
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_OWAY;
          trace(DTR("Configuration as ONEWAY %s"), m_args.usbl_mode ? "USBL" : "MSG_ONLY");
        }

        int code;
        code = m_data_beacon.cid_dat_send_msg.packetDataBuild(data_t, ticket.addr);

        switch (code)
        {
          case 1:
            inf(DTR("device is busy"));
            break;
          case 2:
            err(DTR("previous message failed, timeout detected"));
            break;
          case 3:
            err(DTR("size mismatch"));
            break;
          default:
            resetOneWayTimer();
            trace(DTR("Sending package %f s"), m_oway_timer.getTop());
            debug(DTR("Sending (consume UamTxFrame) part %d of %d for ticket %d will take up to %f s for %d bytes"),
                m_data_beacon.cid_dat_send_msg.message_index,
                m_data_beacon.cid_dat_send_msg.n_sub_messages,
                ticket.seq,
                m_oway_timer.getTop(),
                m_data_beacon.cid_dat_send_msg.packet_len);
            sendProtectedCommand(createCommand(CID_DAT_SEND, m_data_beacon));
            break;
        }
      }

      //! Updates transmission status.
      //! @param[in] ticket ticket status to be transmitted.
      //! @param[in] value status index.
      //! @param[in] error error message.
      void
      sendTxStatus(const Ticket& ticket, IMC::UamTxStatus::ValueEnum value,
                   const std::string& error = "")
      {
        IMC::UamTxStatus status;
        status.setDestination(ticket.imc_sid);
        status.setDestinationEntity(ticket.imc_eid);
        status.seq = ticket.seq;
        status.value = value;
        status.error = error;
        dispatch(status);
      }

      //! Clear ticket.
      //! @param[in] reason reason value.
      //! @param[in] error error message.
      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason, const std::string& error = "")
      {
        if (m_ticket != nullptr)
        {
          sendTxStatus(*m_ticket, reason, error);
          delete m_ticket;
          m_ticket = nullptr;
        }
      }

      //! Replace ticket.
      //! @param[in] ticket new ticket to replace previous one.
      void
      replaceTicket(const Ticket& ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(ticket);
      }

      //! Process new data.
      void
      processNewData(void)
      {
        if (m_data_beacon.newDataAvailable(CID_DAT_RECEIVE))
          handleBinaryMessage();

        if (m_data_beacon.newDataAvailable(CID_DAT_SEND))
          handleDatSendResponse();

        if (m_data_beacon.newDataAvailable(CID_DAT_ERROR))
          handleCommunicationError();

        if(m_data_beacon.newDataAvailable(CID_STATUS))
        {
          if(m_args.ahrs_mode)
            handleAhrsData();
          if(m_args.pressure_sensor_mode)
            handlePressureSensor();
        }
      }

      //! Check for incoming data.
      //! @param[in] timeout timeout time.
      void
      processInput(double timeout = 1.0)
      {
        double deadline = Clock::get() + timeout;
        do
        {
          consumeMessages();
          m_driver->readSentence();
          processNewData();
          checkTxOWAY();

          if ((m_state_entity != STA_ERR_STP) && hasConnection())
          {
            if (!isRestricted())
              setState(STA_ACTIVE);
            else
              setState(STA_IDLE);
          }
        }
        while (Clock::get() <= deadline);
      }

      void
      resetOneWayTimer(void)
      {
        int multiplier = 2;
        if(!(m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAY ||
              m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAYU))
          multiplier = c_ack_timeout_multiplier;

        m_oway_timer.setTop((m_data_beacon.cid_dat_send_msg.packet_len * 8 
            * 1.0/c_acoustic_bitrate + (m_args.max_range * 1.0 / MIN_SOUND_SPEED))
            * multiplier );
        trace(DTR("Calc new timer (bytes %d | bit-rate %f | max-range %d m | multiplier %d) calculated to %f s"), 
            m_data_beacon.cid_dat_send_msg.packet_len,
            c_acoustic_bitrate,
            m_args.max_range,
            multiplier,
            m_oway_timer.getTop());
      }

      //! Checks if an OWAY message is waiting to be sent.
      void
      checkTxOWAY(void)
      {
        if (m_data_beacon.cid_dat_send_msg.packetDataSendStatus())
        {
          if (m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAY ||
              m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAYU)
          {
            if (m_oway_timer.overflow())
            {
              trace(DTR("NOACK Success transmission complete (part %d of %d) for ticket %d (in %f s)"),
                  m_data_beacon.cid_dat_send_msg.message_index,
                  m_data_beacon.cid_dat_send_msg.n_sub_messages,
                  m_ticket == nullptr ? -1 : m_ticket->seq,
                  m_oway_timer.getElapsed());

              if (m_data_beacon.cid_dat_send_msg.packetDataNextPart(1) != -1)
              {
                resetOneWayTimer();
                trace(DTR("Sending (checkTxOWAY) part %d of %d for ticket %d will take up to %f s for %d bytes"),
                    m_data_beacon.cid_dat_send_msg.message_index,
                    m_data_beacon.cid_dat_send_msg.n_sub_messages,
                    m_ticket == nullptr ? -1 : m_ticket->seq,
                    m_oway_timer.getTop(),
                    m_data_beacon.cid_dat_send_msg.packet_len);
                sendProtectedCommand(createCommand(CID_DAT_SEND, m_data_beacon));
              }
              else
              {
                trace(DTR("Msg transmission complete  for ticket %d (in %f s)"),
                    m_ticket == nullptr ? -1 : m_ticket->seq,
                    m_oway_timer.getElapsed());
                clearTicket(IMC::UamTxStatus::UTS_DONE);
              }
            }
          }
          else
          {
            // is with ack
            if (m_ticket != nullptr && m_oway_timer.overflow())
            {
              //Took too long, lets bail with error
              war(DTR("ACK TIMEOUT: Msg transmission with ack for ticket %d timeout ACK. Lets bail with error!! (%f s > %f s)"),
                  m_ticket->seq,
                  m_oway_timer.getElapsed(),
                  m_oway_timer.getTop());
              m_data_beacon.cid_dat_send_msg.lock_flag = 0;
              clearTicket(IMC::UamTxStatus::UTS_FAILED);
            }
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Wait for modem configuration
          if(!m_config_status)
            break;

          // Check for incoming data.
          processInput();
          waitForMessages(1.0);

          // Check modem connection
          if (!hasConnection())
          {
            setState(STA_ERR_COM);
            err("%s", DTR(Status::getString(CODE_COM_ERROR)));
          }
        }
      }
    };
  }
}

DUNE_TASK
