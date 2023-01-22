//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: João Teixeira                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Supervisors/Reporter/Client.hpp>

// Local headers
#include "RadioDriver.hpp"
#include "Telemetry.hpp"
#include "3DR.hpp"
#include "RadioRFDXXXxPtP.hpp"

namespace Transports
{
  namespace Radio
  {
    using DUNE_NAMESPACES;

    //! Task arguments.

        //! States of the internal SM.

    //! Finite state machine states.
    enum StateMachineStates
    {
      //! Waiting for activation.
      SM_IDLE,
      //! Start activation sequence.
      SM_ACT_BEGIN,
      //! Turn modem power on.
      SM_ACT_POWER_ON,
      //! Wait for power to be turned on.
      SM_ACT_POWER_WAIT,
      //! Wait for serial port device to become available.
      SM_ACT_MODEM_WAIT,
      //! Connect to device
      SM_ACT_CONNECT,
      //! Start modem configuration session.
      SM_ACT_CONFIG,
      //! Activation sequence is complete.
      SM_ACT_DONE,
      //! Start deactivation sequence.
      SM_DEACT_BEGIN,
      //! Close connection port
      SM_DEACT_DISCONNECT,
      //! Switch power off.
      SM_DEACT_POWER_OFF,
      //! Wait for power to be turned off.
      SM_DEACT_POWER_WAIT,
      //! Deactivation sequence is complete.
      SM_DEACT_DONE
    };


    struct Arguments
    {
      //! Radio driver data
      RadioConfParam radioParams;
      //! Power channel name.
      std::string power_channel;
      //! Name of the section with vehicle addresses.
      std::string addr_section;
      //! Name of the Communication mode
      std::string coms_mode;
      //! Enable Telemetry report
      bool report_enable;
      //! Enable Telemetry report
      bool high_speed_report;
      //! IMU entity label.
      std::string elabel_voltage;
      //! Radio reports periodicity.
      double radio_period;

    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      //! Task arguments.
      Arguments m_args;
      //! Current state machine state.
      StateMachineStates m_sm_state;

      RadioDriver* m_radio;
      //! Map of radio modems by name.
      MapName m_radio_names;
      //! Map of radio modems by address.
      MapAddr m_radio_addrs;
      //! True if modem is powered on.
      bool m_powered;
      //! Reporter API.
      Supervisors::Reporter::Client* m_reporter;
      //! Telemetry communication manager
      Telemetry* m_telemetry;
      //! timrer to config modem
      Time::Counter<double> m_conn_watchdog;
      //! Data collected by radio
      std::string m_rxData;
      //! IMU entity id.
      unsigned m_voltage_eid;
      //! Driver configuration
      IMC::CommSystemsQuery* m_comm_systems_query;
      //! System ID
      uint16_t m_systemID;
      //! Higth speed radio report
      Time::Counter<double> m_fast_treport_counter;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sm_state(SM_IDLE),
        m_radio(NULL),
        m_powered(false),
        m_reporter(NULL),
        m_telemetry(NULL)
      {

        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.radioParams.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.radioParams.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        param("Power Channel", m_args.power_channel)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .description("Power channel name");

        param("Address Section", m_args.addr_section)
        .defaultValue("Radio Addresses")
        .description("Name of the configuration section with vehicle addresses");

        param("Radio Model", m_args.radioParams.radio_model)
        .defaultValue("3DR")
        .values("3DR, RDFXXXxPtP")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Radio Model");

        param("Mode of communication", m_args.coms_mode)
        .defaultValue("Client")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .values("Server, Client")
        .description("Coms mode");

        param("Vehicle to bind",  m_args.radioParams.vehicle_name)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Vehicle to bind");

        param("Radio power level", m_args.radioParams.power_level)
        .defaultValue("8")
        .values("1, 2, 4, 8, 11, 14, 17, 20, 30")
        .description("Radio power level (dBm)");

        param("Number of channels", m_args.radioParams.mum_channels)
        .defaultValue("10")
        .description("number of frequency hopping channels");

        param("Duty cycle", m_args.radioParams.duty_cycle)
        .defaultValue("10")
        .description("Duty cycle - the percentage of time to allow transmit");

        param("Air speed", m_args.radioParams.air_speed)
        .defaultValue("64")
        .values("2, 4, 8, 16, 19, 24, 32, 48, 64, 96, 128, 192, 250")
        .description("Air speed (Air data rate)");

         param("Radio Error correction", m_args.radioParams.error_correction)
         .defaultValue("true")
         .description("Radio Error correction - this reduces bandwidth");

         param("Mavlink framing", m_args.radioParams.mavlink_framing)
         .defaultValue("true")
         .description("Mavlink framing");


         param("Radio rssi report", m_args.radioParams.rssi_report)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
         .defaultValue("true")
         .description("Radio rssi report");

         param("Radio TDM report", m_args.radioParams.tdm_report)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
         .defaultValue("true")
         .description("Radio TDM sync time report");

        param("Enable telemetry report", m_args.report_enable)
        .defaultValue("false")
        .description("Enable system state telemetry reporting. When enabled, systems"
                     " shall acknowledge reception of requests to broadcast Reports"
                     " messages containing the overall state of the system."
                     " When disabled, those requests shall be ignored");

        param("Enable UAV high speed report", m_args.high_speed_report)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Enable system state telemetry reporting.");

        param(DTR_RT("UAV high speed Reports Periodicity"), m_args.radio_period)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("0.3")
        .minimumValue("0.3")
        .maximumValue("600")
        .description("Reports periodicity");

        param("Entity Label - Voltage", m_args.elabel_voltage)
        .defaultValue("Autopilot")
          .description("Entity label for battery Voltage");


        m_conn_watchdog.setTop(30);

        bind<IMC::PowerChannelState>(this);
        bind<IMC::ReportControl>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::IndicatedSpeed>(this);
        bind<IMC::Voltage>(this);
        bind<IMC::CommSystemsQuery>(this);
        bind<IMC::TelemetryMsg>(this);
        bind<IMC::VtolState>(this);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if ( (m_telemetry != NULL) && (msg->getSourceEntity()  ==  m_voltage_eid))
        {
          m_telemetry->consume(msg);
        }
      }


      void
      consume(const IMC::TelemetryMsg* msg)
      {
        if ( (m_telemetry != NULL))
        {
          m_telemetry->consume(msg);
        }
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        m_powered = (msg->state == IMC::PowerChannelState::PCS_ON);
      }

      void
      consume(const IMC::ReportControl* msg)
      {
        if (m_reporter != NULL)
          m_reporter->consume(msg);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }

      void
      consume(const IMC::VtolState* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }

      //! Consume air Speed messages.
      //! @param[in] msg IndicatedSpeed message.
      void
      consume(const IMC::IndicatedSpeed* msg)
      {
        if (m_telemetry != NULL)
          m_telemetry->consume(msg);
      }
      void
      consume(const IMC::CommSystemsQuery *msg)
      {
        if (msg->getDestination() !=  getSystemId())
          return;
        if(msg->type != IMC::CommSystemsQuery::CIQ_QUERY)
          return;
        if(msg->comm_interface != IMC::CommSystemsQuery::CIQ_RADIO)
          return;

        std::string list;
        for (unsigned i = 0; i < m_radio_names.size(); ++i)
        {
          list += m_radio_addrs[i];
          list += ";" ;
        }
        if( m_sm_state != SM_ACT_DONE)
          m_comm_systems_query->model = IMC::CommSystemsQuery::CIQ_UNKNOWN;

        m_comm_systems_query->setDestination(msg->getSource());
        m_comm_systems_query->setDestinationEntity(msg->getSourceEntity());
        m_comm_systems_query->list = list;
        dispatch(m_comm_systems_query);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
         if (m_args.power_channel.empty())
          m_powered = true;

      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
          try
          {
            m_voltage_eid = resolveEntity(m_args.elabel_voltage);
          }
          catch (...)
          {
            m_voltage_eid = std::numeric_limits<unsigned>::max();
          }
      }
      //! Open TCP socket.
      //! @return true if socket was opened, false otherwise.

      void
      onRequestActivation(void)
      {

        int m_addr = 0;
        m_systemID =0;
        if(m_args.coms_mode.compare("Client")==0)
        {
          // Process modem addresses.
          std::string agent = getSystemName();

          m_ctx.config.get(m_args.addr_section, agent, "1024", m_addr);
          if (m_addr < 1 || m_addr > 256)
          {
            throw RestartNeeded(String::str(DTR("modem address for agent '%s' is invalid"), agent.c_str()), 5.0, true);
          }
          m_ctx.config.get(m_args.addr_section, agent, "1024", m_args.radioParams.net_id);
          debug("MY_NET_ID IS: %s", m_args.radioParams.net_id.c_str());
          castLexical(m_args.radioParams.net_id, m_systemID);
        }
        else if(m_args.coms_mode.compare("Server")==0)
        {
          if(m_args.radioParams.vehicle_name.empty())
          {
             throw RestartNeeded(String::str(DTR("Vehicle to bind is not define")), 5.0, true);
          }

          m_ctx.config.get(m_args.addr_section, m_args.radioParams.vehicle_name, "1024", m_addr);
          if (m_addr < 1 || m_addr > 256)
          {
            throw RestartNeeded(String::str(DTR("modem address for agent '%s' is invalid"), m_args.radioParams.vehicle_name.c_str()), 5.0, true);
          }
          m_ctx.config.get(m_args.addr_section, m_args.radioParams.vehicle_name, "1024", m_args.radioParams.net_id);
          debug("MY_NET_ID for vehicle %s is : %s",  m_args.radioParams.vehicle_name.c_str(), m_args.radioParams.net_id.c_str() );
        }
        else
        {
         throw RestartNeeded(String::str(DTR("Invalid communication mode")), 5.0, true);
        }

        if (m_args.radioParams.radio_model.compare("3DR") == 0)
        {
          m_args.radioParams.max_frequency= "415000";
          m_args.radioParams.min_frequency= "414000";
          m_radio = new Radio3dr(m_args.radioParams, this);
          m_comm_systems_query->model = IMC::CommSystemsQuery::CIQ_M3DR;
        }
        else if (m_args.radioParams.radio_model.compare("RDFXXXxPtP") == 0)
        {
          m_args.radioParams.max_frequency= "870000";
          m_args.radioParams.min_frequency= "868000";
          m_radio = new RadioRFDXXXxPtP(m_args.radioParams, this);
          m_comm_systems_query->model = IMC::CommSystemsQuery::CIQ_RDFXXXXPTP;
        }
        else
        {
         throw RestartNeeded(String::str(DTR("Invalid radio model")), 5.0, true);
        }

        m_sm_state = SM_ACT_BEGIN;
        hardwareUpdateStateMachine();
      }

      void
      onRequestDeactivation(void)
      {
        m_sm_state = SM_DEACT_BEGIN;
        hardwareUpdateStateMachine();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_reporter = new Supervisors::Reporter::Client(this, Supervisors::Reporter::IS_RADIO,
                                                       0.1, false);
       m_comm_systems_query = new  IMC::CommSystemsQuery();
       m_comm_systems_query->type= IMC::CommSystemsQuery::CIQ_REPLY;
       m_comm_systems_query->comm_interface = IMC::CommSystemsQuery::CIQ_RADIO;
       m_comm_systems_query->model = IMC::CommSystemsQuery::CIQ_UNKNOWN;
      }

      void
      controlPower(IMC::PowerChannelControl::OperationEnum op)
      {
        if (m_args.power_channel.empty())
          return;

        IMC::PowerChannelControl pcc;
        pcc.op = op;
        pcc.name = m_args.power_channel;
        dispatch(pcc);
      }

      //! Turn power channel on.
      void
      turnPowerOn(void)
      {
        debug("switching power on");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_ON);
      }

      //! Turn power channel off.
      void
      turnPowerOff(void)
      {
        debug("switching power off");
        controlPower(IMC::PowerChannelControl::PCC_OP_TURN_OFF);
      }

      //! Test if power channel is on.
      //! @return true if power channel is on, false otherwise.
      bool
      isPowered(void)
      {
        return m_powered;
      }

      void
      failActivation(const std::string& message)
      {

        Memory::clear(m_radio);
        Memory::clear(m_telemetry);
        activationFailed(message);
        if (!m_args.power_channel.empty())
            {
              turnPowerOff();
            }
        m_sm_state =  SM_IDLE;
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      hardwareUpdateStateMachine(void)
      {
        switch (m_sm_state)
        {
          case SM_IDLE:
            break;

          case SM_ACT_BEGIN:
            debug("starting activation sequence");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
            if (!m_args.power_channel.empty())
            {
              m_sm_state = SM_ACT_POWER_ON;
            }
            else
            {
              m_sm_state = SM_ACT_MODEM_WAIT;
              m_conn_watchdog.reset();
            }
            /* Falls through */

          case SM_ACT_POWER_ON:
            turnPowerOn();
            m_sm_state = SM_ACT_POWER_WAIT;
            /* Falls through */

          case SM_ACT_POWER_WAIT:
            if (isPowered())
            {
              debug("power is on");
              debug("waiting for modem");
              m_sm_state = SM_ACT_MODEM_WAIT;
              m_conn_watchdog.reset();
            }
            else
            {
              break;
            }
            /* Falls through */

          case SM_ACT_MODEM_WAIT:

            if (Path(m_args.radioParams.uart_dev).isDevice() || Path(m_args.radioParams.uart_dev).isLink())
            {
              debug("Device detected: %s", m_args.radioParams.uart_dev.c_str());
              m_sm_state = SM_ACT_CONNECT;
            }
            else
            {
              debug("No radio detected in %s, retrying...", m_args.radioParams.uart_dev.c_str());
              if(m_conn_watchdog.overflow())
              {
                std::string error = "No Radio device on port: " + m_args.radioParams.uart_dev;
                err(DTR("No Radio device on port: %s"), m_args.radioParams.uart_dev.c_str());
                failActivation(error);
              }
              break;
            }

          case SM_ACT_CONNECT:
            m_radio->connectToDevice();
            spew("done: connectToDevice");
            activate();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_sm_state = SM_ACT_CONFIG;
            break;

          case SM_ACT_CONFIG:

            if(!m_radio->configDevice())
              {
                err(DTR("Radio configuration failed. Wrong parameter or device on port %s is not a radio ")
                    ,m_args.radioParams.uart_dev.c_str());
                requestDeactivation();
                break;
              }
            debug("configuration completed");
            m_radio->clearNewRxData();
            m_telemetry = new Telemetry(this, (uint8_t) m_systemID, m_radio_names, m_radio_addrs, m_radio->maxDataPacket());
             m_fast_treport_counter.setTop(m_args.radio_period);
            m_sm_state = SM_ACT_DONE;
            /* Falls through */

          case SM_ACT_DONE:
             break;

          case SM_DEACT_BEGIN:
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_DEACTIVATING);
            m_sm_state = SM_DEACT_DISCONNECT;
            /* Falls through */

          case SM_DEACT_DISCONNECT:
            if (m_args.power_channel.empty())
              m_sm_state = SM_DEACT_DONE;
            else
              m_sm_state = SM_DEACT_POWER_OFF;
            Memory::clear(m_radio);
            Memory::clear(m_telemetry);
            break;

          case SM_DEACT_POWER_OFF:
            turnPowerOff();
            m_sm_state = SM_DEACT_POWER_WAIT;
            /* Falls through */

          case SM_DEACT_POWER_WAIT:
            if (!isPowered())
            {
              debug("device is no longer powered");
              m_sm_state = SM_DEACT_DONE;
            }
            else
            {
              break;
            }
            /* Falls through */

          case SM_DEACT_DONE:

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            deactivate();
            m_sm_state = SM_IDLE;
            debug("deactivation complete");
            break;
        }
      }
      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
         std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned addr = 0;
          m_ctx.config.get(m_args.addr_section, addrs[i], "0", addr);
          m_radio_names[addrs[i]] = addr;
          m_radio_addrs[addr] = addrs[i];
        }
        if(m_args.coms_mode.compare("Server")==0)
        {
          IMC::AnnounceService announce;
          announce.service = std::string("imc+any://radio/telemetry/")
          + URL::encode(getEntityLabel());
          dispatch(announce);
        }

      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_reporter);
        Memory::clear(m_telemetry);
      }

      void
      radioReport(void)
      {
        //report creation
        if (m_args.report_enable)
        {
          if (m_reporter != NULL && m_reporter->trigger() && m_telemetry!=NULL)
          {
           if(m_telemetry->isIdle())
           {
             m_telemetry->createReport();
           }
          }
        }
      }
      void
      highSpeedReport(void)
      {

        //report creation
        if (m_args.high_speed_report)
        {
          if (m_reporter != NULL && m_telemetry!=NULL && m_fast_treport_counter.overflow())
          {
            m_fast_treport_counter.setTop(m_args.radio_period);
           if(m_telemetry->isIdle())
           {
             m_telemetry->createReport();
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
          if(!isActive())
          {
            waitForMessages(1.0);
          }

          if( isActive()  && m_sm_state == SM_ACT_DONE)
          {
            consumeMessages();
            //uart/ip
            m_radio->processInput();
            //RXdata
            if(m_radio->newRxData(m_rxData))
            {
               m_telemetry->recivedDataToDecode(m_rxData);
            }
            m_telemetry->recivedDataTimeOut();
            // RxData
            m_telemetry->anyDataToProcess();
            //report
            radioReport();
            highSpeedReport();
            //Txdata
            std::string txData;
            if(m_telemetry->anyDatatosend(txData))
            {
              m_radio->sendData(txData);
              m_telemetry->updateTxState();
            }
          }
          hardwareUpdateStateMachine();
        }
        Memory::clear(m_radio);
        Memory::clear(m_telemetry);
      }
    };
  }
}

DUNE_TASK
