//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.hhtml.                                    *
//***************************************************************************
// Author: Joao teixeira                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <map>
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Parser.hpp"
#include "MsgTypes.hpp"
#include "DataTypes.hpp"
#include "DebugMsg.hpp"

namespace Transports
{
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    enum EntityStates
    {
      STA_BOOT,
      STA_NO_BEACONS,
      STA_IDLE,
      STA_ACTIVE,
      STA_ERR_COM,
      STA_ERR_SRC,
      STA_ERR_STP,
      STA_MAX
    };

    //Model do beacon
    enum BeaconType
    {
      BT_X110,
      BT_X150,
      BT_NONE
    };

    // Configuration parameters.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Ping Period.
      double ping_period;
      //! Transmit only underwater.
      bool only_underwater;
      //! Addresses Number - modem
      uint8_t addr;
      //Addresses Number - modem
      std::string addr_section;
      //System origin
      std::string origin;
      // Model do beacon
      BeaconType beacon;
    };

    struct Ticket
    {
      //! IMC source address.
      uint16_t imc_sid;
      //! IMC source entity.
      uint8_t imc_eid;
      //! Sequence number.
      uint16_t seq;
      //! Destination modem address.
      uint16_t addr;
      //! Wait for ack.
      bool ack;
      //! Piggyback message.
      bool pbm;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments.
      Arguments m_args;
      //! Current state.
      EntityStates m_state_entity;
      //! Pinger.
      Time::Counter<float> m_pinger;
      //! Entity states.
      IMC::EntityState m_states[STA_MAX];
      //! Stop reports on the ground.
      bool m_stop_comms;
      //! Modem address.
      unsigned m_addr;
      // modem address cordinate system
      unsigned m_origin_number_adrr;
      std::string m_modem_system_origin;
      // Current SM state.
      ParserStates m_state_rs;
      // Message preamble
      static const char c_preamble = '$';
      //! Maximum buffer size.
      static const int c_bfr_size = 2;
      char m_bfr[c_bfr_size];
      // Initialize serial buffer reader
      std::string  m_data;
      // Initialize serial buffer conversion
      std::string m_datahex;
      //seatrac Memory Allocation
      DataSeatrac data_Beacon;
      //! Time of last serial port input.
      double m_last_input;
      typedef std::map<std::string, unsigned> MapName;
      typedef std::map<unsigned, std::string> MapAddr;
      //! Map of seatrac modems by name.
      MapName m_modem_names;
      //! Map of seatrac modems by address.
      MapAddr m_modem_addrs;
      //! Current transmission ticket.
      Ticket* m_ticket;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Ping Periodicity", m_args.ping_period)
        .units(Units::Second)
        .defaultValue("2")
        .minimumValue("2");

        param("Transmit Only Underwater", m_args.only_underwater)
        .defaultValue("false")
        .description("Do not transmit when at water surface");

        param("Address Section", m_args.addr_section)
        .defaultValue("Seatrac Addresses")
        .description("Name of the configuration section with modem addresses");

        param("Seatrac Localization", m_args.origin)
        .defaultValue("Seatrac Localization")
        .description(" Defines the reference coordinate system");

        // Initialize state messages.
        m_states[STA_BOOT].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_BOOT].description = DTR("initializing");
        m_states[STA_NO_BEACONS].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_NO_BEACONS].description = DTR("waiting beacons configuration");
        m_states[STA_IDLE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_IDLE].description = DTR("idle");
        m_states[STA_ACTIVE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_ACTIVE].description = DTR("active");
        m_states[STA_ERR_COM].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_COM].description =
        DTR("serial port communication error, modem not responding");
        m_states[STA_ERR_STP].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_STP].description =
        DTR("failed to configure modem, possible serial port communication error");
        m_states[STA_ERR_SRC].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_SRC].description = DTR("failed to set modem address");

        bind<IMC::VehicleMedium>(this);
        bind<IMC::UamTxFrame>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.ping_period))
          m_pinger.setTop(m_args.ping_period);
      }

      void
      setAndSendState(EntityStates state)
      {
        m_state_entity = state;
        setEntityState((IMC::EntityState::StateEnum)m_states[m_state_entity].state,
                       m_states[m_state_entity].description);
      }

      char
      parse(void)
      {
        char msg_validity=false;

        switch (m_state_rs)
        {
          case PS_PRE:// Parse preamble.
            if (m_bfr[0] == c_preamble)
              m_state_rs = PS_DATA;

            // Clear parser variables
            m_data.clear();
            break;
          case PS_DATA: // Parse message data
            // Parse data till find '*'
            if (m_bfr[0] == c_preamble)
            {
              m_data.clear();
            }
            else
            {
              if (m_bfr[0] !=  '\r')
                m_data.push_back(m_bfr[0]);
              else
                m_state_rs = PS_COMPLETE;
            }
            break;
          case PS_COMPLETE: // Check message validity
            if (m_bfr[0] != '\n')
            {
              m_state_rs = PS_PRE;
            }
            else
            {
              m_state_rs = PS_PRE;
              uint16_t crc,crc2;
              std::string bufer_ckecksum = m_data.substr ((m_data.size()-4),4);
              m_data.erase((m_data.size()-4),4);
              std::string msg= bufer_ckecksum;
              msg= String::fromHex(msg);
              std::memcpy(&crc2,msg.data(),2);
              m_datahex = String::fromHex(m_data);
              crc =CRC16::compute((uint8_t*) m_datahex.data(),m_datahex.size(),0);
              if(crc == crc2)
              {
                msg_validity=true;
                m_state_rs = PS_NONE;
              }
              else
              {
                war(DTR("invalid ckecksum"));
                msg_validity=false;
                m_state_rs = PS_NONE;
              }
            }
            break;
            // End parser
          case PS_NONE:
            m_state_rs = PS_NONE;
            break;
            // Should never get here.
          default:
            m_state_rs = PS_PRE;
            break;
        }

        return msg_validity;
      }

      bool
      parserManager(void)
      {
        // Initialize received message parser
        uint16_t typemes=0;
        const char* msg_raw;
        m_state_rs = PS_PRE;
        size_t rv;

        // Initialize overflow timer
        while(m_state_rs != PS_NONE)
        {
          // Check if passed
          if (Clock::get() >= (m_last_input + (double) c_input_tout))
            return false;

          if (!Poll::poll(*m_uart, 0.001))
            continue;

          rv = m_uart->readString(m_bfr, c_bfr_size);
          m_last_input = Clock::get();
          if (rv > 0 && parse())
          {
            msg_raw = m_datahex.data();
            std::memcpy(&typemes, msg_raw,1);

            dataParser(typemes, msg_raw+1, data_Beacon);
            printDebugFunction(typemes, data_Beacon, this);
            // Initialize message validity flag
            typemes = 0;
            m_data.clear();
          }
        }

        return true;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setAndSendState(STA_BOOT);
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
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
        // Process modem addresses.
        m_stop_comms = true;
        std::string agent = getSystemName();
        std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);

        // verify modem local addres value.
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned addr = 0;
          m_ctx.config.get("Seatrac Addresses", addrs[i], "0", addr);
          m_modem_names[addrs[i]] = addr;
          m_modem_addrs[addr] = addrs[i];
        }

        m_ctx.config.get(m_args.addr_section, agent, "1024", m_addr);
        if (m_addr < 1 || m_addr > 15)
        {
          throw std::runtime_error(String::str(DTR("modem address for agent '%s' is invalid"),
                                               agent.c_str()));
        }

        //verify system condinates  name
        m_ctx.config.get(m_args.origin, "BT_X150", "1024", m_modem_system_origin);
        if (m_modem_system_origin.compare("1024")==0)
        {
          war(DTR("Localization disable - no system origin "));
          m_origin_number_adrr=0;
        }
        else
        {
          m_ctx.config.get(m_args.addr_section, m_modem_system_origin, "1024",
                           m_origin_number_adrr);
          if (m_origin_number_adrr < 1 || m_origin_number_adrr > 15)
          {
            war(DTR("Localization disable - address of origin not valid "));
            m_origin_number_adrr=0;
          }
          else
          {
            inf(DTR("Coordinate system origin - %s - address - %d"),
                m_modem_system_origin.c_str(), m_origin_number_adrr);
          }
        }

        //verify if i am origin
        if (m_modem_system_origin.compare(agent) == 0)
        {
          m_args.beacon=BT_X150;
          inf(DTR("This is the reference coordinate system BT_X150"));
        }
        else // verify if my adds is not iqual
        {
          if (m_origin_number_adrr == m_addr)
          {
            war(DTR("No localization activated - address conflict"));
            m_origin_number_adrr=0;
          }
          else
          {
            inf(DTR("Modem type  BT_X110 - address - %d"), m_addr);
            m_args.beacon=BT_X110;
          }
        }

        m_last_input = Clock::get();
        processInput(1);
        if (hasTransducer())
        {
          do
          {
            sendCommand(commandCreateSeatrac(CID_SETTINGS_GET, data_Beacon));
            processInput(1);
          }
          while (data_Beacon.newDataAvailable(CID_SETTINGS_GET) == 0);

          if (!((data_Beacon.cid_settings_msg.xcvr_beacon_id == m_addr) &&
                (data_Beacon.cid_settings_msg.status_flags == 0x1) &&
                (data_Beacon.cid_settings_msg.status_output == 63)))
          {
            setAndSendState(STA_NO_BEACONS);
            data_Beacon.cid_settings_msg.status_flags = 0x1;
            data_Beacon.cid_settings_msg.status_output = 63;
            data_Beacon.cid_settings_msg.xcvr_beacon_id = m_addr;

            sendDelayedCommand(commandCreateSeatrac(CID_SETTINGS_SET, data_Beacon), 0, 2);
            sendDelayedCommand(commandCreateSeatrac(CID_SETTINGS_SAVE, data_Beacon), 0, 2);
            sendDelayedCommand(commandCreateSeatrac(CID_SYS_REBOOT, data_Beacon), 0, 6);
            sendDelayedCommand(commandCreateSeatrac(CID_SETTINGS_GET, data_Beacon), 0, 2);

            if (data_Beacon.cid_settings_msg.xcvr_beacon_id != m_addr)
            {
              setAndSendState(STA_ERR_STP);
              war(DTR("Seatrac change of configuration failed"));
            }
            inf(DTR("Seatrac ready"));
            m_stop_comms = m_args.only_underwater;
            setAndSendState(STA_IDLE);
          }
          else
          {
            inf(DTR("Seatrac ready"));
            m_stop_comms = m_args.only_underwater;
            setAndSendState(STA_IDLE);
          }
        }
        else
        {
          war(DTR("NO transducer"));
          setAndSendState(STA_ERR_SRC);
          throw std::runtime_error(m_states[m_state_entity].description);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        Memory::clear(m_uart);
      }

      //! send command and waits for response
      //! @param[in] cmd command string
      //! @param[in] delay_bef delay before send comamnd
      //! @param[in] delay_aft delay after send comamnd
      void
      sendDelayedCommand(const std::string& cmd, double delay_bef, double delay_aft)
      {
        processInput(delay_bef);
        sendCommand(cmd);
        processInput(delay_aft);
      }

      //!send command if the modem has conditions to operate
      //! @param[in] cmd command string
      void
      sendProtectedCommand(const std::string& cmd)
      {
        if (m_stop_comms)
        {
          war(DTR(" NOT UNDERWATER or Configuration is not ready"));
          data_Beacon.cid_dat_send_msg.lock_flag=0;
          return;
        }
        sendCommand(cmd);
      }
      //! send command to the acoustic modem
      //! @param[in] cmd command string
      void
      sendCommand(const std::string& cmd)
      {
        m_uart->writeString(cmd.c_str());
      }

      //!checks if the modem is working
      //! @return true if have a new message
      bool
      hasTransducer(void)
      {
        return data_Beacon.new_message[CID_STATUS];
      }

      //!processing data received by acoustic modem
      void
      handleBinaryMessage(void)
      {
        if (data_Beacon.cid_dat_receive_msg.ack_flag != 0)
        {
          // ACK message that the message was successfully delivered
          data_Beacon.cid_dat_receive_msg.ack_flag = 0;

          //if msg have more than 1 packet, send next part
          if (data_Beacon.cid_dat_send_msg.packetDataNextPart(1) != -1)
          {
            sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, data_Beacon));
          }
          else
          {
            //Last paket has send
            //range can be computed when the target beacon respond  with ACK Msg
            double range_dist = (double)data_Beacon.cid_dat_receive_msg.aco_fix.range_dist;
            range_dist /= 10;

            if (range_dist > 0)
            {
              IMC::UamRxRange range;
              range.sys = lookupSystemName(data_Beacon.cid_dat_receive_msg.aco_fix.dest_id);
              if (m_ticket != NULL)
                range.seq = m_ticket->seq;

              range.value = range_dist;
              dispatch(range);
            }

            // Data comunicaton Done
            clearTicket(IMC::UamTxStatus::UTS_DONE);
          }
          return;
        }
        else
        {
          int data_rec_flag = data_Beacon.cid_dat_receive_msg.packetDataDecode();
          if (data_rec_flag == 1)
          {
            std::string msg;
            data_Beacon.cid_dat_receive_msg.getFullMsg(msg);
            handleInstantMessage(msg);
            debug("New Data");
          }

          if (data_rec_flag == -1)
            war(DTR("Previous msg Fail - Wrong msg order"));

          if (data_rec_flag == 0)
            debug("Colecting data");
        }
      }

      //!publish received acoustic message
      //! @param[in] string whith new acoustic message
      void
      handleInstantMessage(const std::string& str)
      {

        IMC::UamRxFrame msg;
        msg.data.assign((uint8_t*)&str[0], (uint8_t*)&str[str.size()]);
        // Lookup source system name.
        try
        {
          msg.sys_src = lookupSystemName(data_Beacon.cid_dat_receive_msg.aco_fix.src_id);
        }
        catch (...)
        {
          msg.sys_src = "unknown";
        }
        // Lookup destination system name.
        try
        {
          msg.sys_dst = lookupSystemName(data_Beacon.cid_dat_receive_msg.aco_fix.dest_id);
        }
        catch (...)
        {
          msg.sys_dst = "unknown";
        }
        // Fill flags.
        if (m_addr != data_Beacon.cid_dat_receive_msg.aco_fix.dest_id)
        {
          msg.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;
        }
        msg.flags |= IMC::UamRxFrame::URF_DELAYED;
        dispatch(msg);
      }

      //!checks for messages to transmit
      void
      consume(const IMC::UamTxFrame* msg)
      {
        std::string hex = String::toHex(msg->data);
        std::vector<char> data_t;
        std::copy(hex.begin(), hex.end(), std::back_inserter(data_t));
        if (msg->getDestination() != getSystemId())
          return;

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid = msg->getSource();
        ticket.imc_eid = msg->getSourceEntity();
        ticket.seq = msg->seq;
        ticket.ack = (msg->flags & IMC::UamTxFrame::UTF_ACK) != 0;
        ticket.pbm = (msg->flags & IMC::UamTxFrame::UTF_DELAYED) != 0;

        if (msg->sys_dst == getSystemName())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        try
        {
          ticket.addr = lookupSystemAddress(msg->sys_dst);
        }
        catch (...)
        {
          war(DTR("invalid system name %s"), msg->sys_dst.c_str());
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        // Fail if busy.
        if (data_Beacon.cid_dat_send_msg.packetDataSendStatus())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_BUSY);
          return;
        }

        // Replace ticket and transmit.
        replaceTicket(ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);

        if (ticket.addr != 0)
          data_Beacon.cid_dat_send_msg.msg_type=MSG_REQ;
        else
          data_Beacon.cid_dat_send_msg.msg_type=MSG_OWAY;

        int error_code = data_Beacon.cid_dat_send_msg.packetDataBuild(data_t, ticket.addr);

        switch (error_code)
        {
          case 1:
            err(DTR("channel is busy"));
            break;
          case 2:
            err(DTR("Previous message Failed timeout detected"));
            break;
          case 3:
            err(DTR("IMC DATA do not have the correct SIZE"));
            break;
          default:
            sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, data_Beacon));
        }
      }

      //! updates UamTxStatus
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

      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason, const std::string& error = "")
      {
        if (m_ticket != NULL)
        {
          sendTxStatus(*m_ticket, reason, error);
          delete m_ticket;
          m_ticket = NULL;
        }
      }

      void
      replaceTicket(const Ticket& ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(ticket);
      }

      //!searching the system address
      unsigned
      lookupSystemAddress(const std::string& name)
      {
        MapName::iterator itr = m_modem_names.find(name);
        if (itr == m_modem_names.end())
        {
          throw std::runtime_error("unknown system name");
        }
        return itr->second;
      }
      //!Search the system name
      std::string
      lookupSystemName(unsigned addr)
      {
        MapAddr::iterator itr = m_modem_addrs.find(addr);
        if (itr == m_modem_addrs.end())
        {
          throw std::runtime_error("unknown system address");
        }
        return itr->second;
      }

      //! processes all task inputs
      void
      processInput(double timeout)
      {
        double deadline = Clock::get() + timeout;
        do
        {
          consumeMessages();
          if (parserManager())
          {
            if (data_Beacon.newDataAvailable(CID_DAT_RECEIVE))
              handleBinaryMessage();

            if (data_Beacon.newDataAvailable(CID_DAT_SEND))
            {
              if(data_Beacon.cid_dat_send_msg.msg_type == MSG_OWAY)
                data_Beacon.cid_dat_send_msg.lock_flag=0;
            }

            if (data_Beacon.newDataAvailable(CID_DAT_ERROR))
            {
              if(data_Beacon.cid_dat_send_msg.packetDataNextPart(0)<MAX_MESSAGE_ERRORS)
              {
                sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, data_Beacon));
              }
              else
              {
                war(DTR("Part of msg failed"));
                clearTicket(IMC::UamTxStatus::UTS_FAILED);
              }
            }
          }

          if (m_state_entity != STA_NO_BEACONS)
          {
            if (isActive())
              setAndSendState(STA_ACTIVE);
            else
              setAndSendState(STA_IDLE);
          }
        } while (Clock::get() <= deadline );
      }

      //! Verifies the medium in which it is to operate
      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (m_args.only_underwater)
        {
          if (msg->medium == IMC::VehicleMedium::VM_UNDERWATER)
            m_stop_comms = false;
          else
            m_stop_comms = true;

          return;
        }

        if (msg->medium == IMC::VehicleMedium::VM_GROUND)
          m_stop_comms = true;
        else
          m_stop_comms = false;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Modem
          processInput(0);

          // @todo: USBL
          if (isActive() && !m_stop_comms &&  m_pinger.overflow())
            m_pinger.reset();

          if (Clock::get() >= (m_last_input + c_input_tout))
            setAndSendState(STA_ERR_COM);
        }
      }
    };
  }
}
DUNE_TASK
