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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Joao teixeira                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "parser_seatrac.hpp"

namespace Transports
{
  namespace Seatrac
  {
    using DUNE_NAMESPACES;
  

  //! Default command reply timeout.
    static const double c_cmd_reply_tout = 2.0;
    //! Cycle Init Timeout (s).
    static const unsigned c_cto = 10;
    //! Input Timeout (s).
    static const double c_input_tout = c_cto + 5;
        //! Restart system code.
    static const unsigned c_code_sys_restart = 0x01a6;
        //! Restart system ack code.
    static const unsigned c_code_sys_restart_ack = 0x01a7;
        //! Abort code.
    static const unsigned c_code_abort = 0x000a;
        //! Abort acked code.
    static const unsigned c_code_abort_ack = 0x000b;
        //! Start plan acknowledge code.
    static const unsigned c_code_plan_ack = 0x000c;

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

    //
        //Modelo do beacon
    enum BeaconType
    {
      BT_X110,
      BT_X150
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
      //! Report types.
      std::string report;
      //! Time between reports.
      double report_period;
      //! Addresses Number - modem .
      uint8_t addr;
      // Beacon Type
      std::string Beacon_Type;

      BeaconType Beacon;
      // Abort timeout.
      double tout_abort;

    };


    enum Operation
    {
      // No operation is in progress.
      OP_NONE,
      // Narrow band pinging in progress.
      OP_PING_NB,
      // Micro-Modem pinging in progress.
      OP_PING_MM,
      // Abort in progress.
      OP_ABORT
    };


    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;

    struct Task: public DUNE::Tasks::Task
    {
      //VARIAVEIS da tarefa 

   
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments.
      Arguments m_args;
      int flagteste; //todo remover apenas para teste

      //! Current state.
      EntityStates m_state_Entity;        
      //! Report timer.
      Time::Counter<double> m_report_timer;  
       //! Pinger.
      Time::Counter<float> m_pinger;  
      
      //DADOS recebidos por IMC todo remover este comentario
      // Last acoustic operation.
      IMC::AcousticOperation m_acop;
      // Outgoing acoustic operation.
      IMC::AcousticOperation m_acop_out;
      //! Entity states.
      IMC::EntityState m_states[STA_MAX];
      //! Estimated state.
      IMC::EstimatedState m_estate;  
      //! Current sound speed (m/s).
      double m_sound_speed;
      //! Sound speed entity id.
      int m_sound_speed_eid;
      //! Last progress.
      float m_progress;  //State of plan control.
      //! Stop reports on the ground.
      bool m_stop_comms;  // variavel de activação de reportar info ou desacitvar info
      //! Last fuel level.
      float m_fuel_level;
      //! Last fuel level confidence.
      float m_fuel_conf;
      // Current SM state.
      ParserStates m_state_rs;
      // Message preamble
      static const char c_preamble = '$';
      static const int max_msg_size =10000;
      static const int overflow = 10;
      //! Maximum buffer size.
      static const int c_bfr_size = 2;
      char m_bfr[c_bfr_size];
      //  reader state
      bool reader_state;
      // Initialize serial buffer reader
      std::string * data ;
      // Initialize serial buffer conversion
      std::string datahex;
      //data buffer parser initialization
      cid message_R;
      data_Seatrac Data_Beacon;
      //! Time of last serial port input.
      double m_last_input;
      // Map of micro-modem to IMC addresses.
      AddressMap m_mimap;
      // Current operation.
      Operation m_op;
      // Timestamp of last operation.
      double m_op_deadline;
      // Saved Plan Control.
      IMC::PlanControl* m_pc;
    


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

         param(DTR_RT("Acoustic Feedback"), m_args.report)
        .values(DTR_RT("None, Full"))
        .defaultValue("None")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Data to be reported acoustically");

         param(DTR_RT("Reports Periodicity"), m_args.report_period) 
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("60")
        .minimumValue("30")
        .maximumValue("600")
        .description("Reports periodicity");

         param("Beacon Address", m_args.addr)
        .defaultValue("1")
        .minimumValue("1")
        .maximumValue("15")
        .description("Name of the configuration section with modem addresses");

        param("Beacon Type", m_args.Beacon_Type)
        .defaultValue("BT_X110")
        .description("Name of the configuration section with modem addresses");
        if (m_args.Beacon_Type.compare("BT_X150") == 0) m_args.Beacon=BT_X150;
        else m_args.Beacon=BT_X110;
        
        param("Timeout - Abort", m_args.tout_abort)
        .units(Units::Second)
        .defaultValue("5.0")
        .minimumValue("0");


        // Initialize state messages.  //todo teste verificar os varios estados
        m_states[STA_BOOT].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_BOOT].description = DTR("initializing");
        m_states[STA_NO_BEACONS].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_NO_BEACONS].description = DTR("waiting beacons configuration");
        m_states[STA_IDLE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_IDLE].description = DTR("idle");
        m_states[STA_ACTIVE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_ACTIVE].description = DTR("active");
        m_states[STA_ERR_COM].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_COM].description = DTR("serial port communication error, modem not responding");
        m_states[STA_ERR_STP].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_STP].description = DTR("failed to configure modem, possible serial port communication error");
        m_states[STA_ERR_SRC].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_SRC].description = DTR("failed to set modem address");


        m_stop_comms = true;
        bind<IMC::EstimatedState>(this);  
        bind<IMC::FuelLevel>(this);
        //bind<IMC::LblConfig>(this);  //modificar esta entrada  verificar quais os tipos de msg necessarios//todo
        bind<IMC::PlanControlState>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::Temperature>(this); //todo remover apenas para teste
        bind<IMC::AcousticOperation>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void) 
      {


        if (paramChanged(m_args.report_period))
          m_report_timer.setTop(m_args.report_period);
        if (paramChanged(m_args.ping_period))
          m_pinger.setTop(m_args.ping_period);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

    
      
      void
      setAndSendState(EntityStates state)
      {
        m_state_Entity = state;
        setEntityState((IMC::EntityState::StateEnum)m_states[m_state_Entity].state, m_states[m_state_Entity].description);  //todo modificar os estados de forma a estar adaptado ao Seatrac
      }
    
    
      char
      parse( )
      {
        char msg_validity=false;
        switch (m_state_rs)
        {

         
          case PS_PRE:// Parse preamble.
            if (m_bfr[0] == c_preamble)
              m_state_rs = PS_DATA;
            // Clear parser variables
            data->clear();
            break;
          case PS_DATA: // Parse message data
            // Parse data till find '*'
            if (m_bfr[0] == c_preamble)
              data->clear();
            else
            if (m_bfr[0] !=  '\r')
              data->push_back(m_bfr[0]);
            else
              m_state_rs = PS_COMPLETE;
            break;
          case PS_COMPLETE: // Check message validity
              if (m_bfr[0] !=  '\n')
              m_state_rs = PS_PRE;
              else
              {
                m_state_rs = PS_PRE;
                uint16_t crc,crc2;
                const char* msg_raw2;
                const char* msg_raw;
                //copia do check

                std::string bufer_ckecksum = data->substr ((data->size()-4),4); 
                data->erase((data->size()-4),4);
                std::string msg= bufer_ckecksum;
                //std::cout << *data << std::endl;
                //converter para hexa
                msg= String::fromHex(msg);
                msg_raw2 = msg.data();
                std::memcpy(&crc2,msg_raw2,2);//atribuir crc da mmensaguem 
                datahex = String::fromHex(*data);
                msg_raw = datahex.data();
                crc =CRC16::compute((uint8_t*) msg_raw ,datahex.size() ,0);

                if(crc==crc2 )
                  {
                    msg_validity=true;
                    m_state_rs = PS_NONE;
                  }
                else
                  {
                    //std::cout << "invalid ckecksum" << std::endl;
                    msg_validity=false;
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
      parserManager( )  
      { 
        // Initialize received message parser
        uint16_t typemes=0;
        const char* msg_raw;
        m_state_rs = PS_PRE;
        size_t rv;
        // Initialize overflow timer
        m_last_input = Clock::get();

        while(m_state_rs != PS_NONE && !stopping()) 
        {
          // Check if passed
          // to long to read
          if( Clock::get() >= (m_last_input + (double) overflow) )
          return false;
          if (!Poll::poll(*m_uart, 0.001))
            continue;
          rv=m_uart->readString(m_bfr, c_bfr_size);
          m_last_input = Clock::get();
          // Parse all received characters
          
          // If parsed a valid message
          // Extract data values
          if (rv > 0 && parse() == true)
          {
            msg_raw=datahex.data();
            std::memcpy(&typemes, msg_raw,1);
            //std::cout << "valid ckecksum-  :" ;
            dataParser(typemes,msg_raw+1, Data_Beacon);
            print_seatrac_function(typemes, Data_Beacon);
            IMC::DevDataText text;
            text.value.assign(sanitize(*data));
            dispatch(text);
            // Initialize message validity flag
            typemes=0;
            data->clear();
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

      //! Initialize resources.
      void
      onResourceInitialization(void) 
      {

        /* todo verificar o que isto significa
            // Process micro-modem addresses.
        std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned mid = 0;
          m_ctx.config.get(m_args.addr_section, addrs[i], "0", mid);
          m_smap[addrs[i]] = mid;
          m_amap[mid] = addrs[i];
        }

        // Get modem address.
        std::string agent = getSystemName(); //endereço do proprio dune 
        m_ctx.config.get(m_args.addr_section, agent, "1024", m_addr);
        if (m_addr == 1024)
          throw std::runtime_error(String::str(DTR("modem address for agent '%s' is invalid"), agent.c_str()));

        */

        //todo efectuar a inicialização do equipamento com as suas definições
        // Create a mensagem Send to Modem. //configureModem()  //todo
        
        /* exemplo para cada comando
        sendCommand(Comand_create_seatrac(cid cid_m , data_Seatrac& Data_Beacon ));
        processInput(); //define timeout
        // verificar recepção
             if (!consumeResult(RS_SRC_ACKD))
          {
            setAndSendState(STA_ERR_SRC);
            throw std::runtime_error(m_states[m_state].description);
          }
        }
      
        //no fim verifica como está esta parte
        if (m_lbl.empty())
          setAndSendState(STA_NO_BEACONS);
        else
          setAndSendState(STA_IDLE);
       */
      
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      sendDelayedCommand(const std::string& cmd, double delay_bef, double delay_aft)
      {
        processInput(delay_bef);
        sendCommand(cmd);
        processInput(delay_aft);
      }

      //! Send command to modem and log it.
      //! @param[in] cmd NMEA message to be transmitted.
      void
      sendCommand(const std::string& cmd)
      {

        
        m_uart->writeString(cmd.c_str());
        logCommand(cmd);
      }

      //! Log NMEA message.
      //! @param[in] cmd NMEA message to be logged.
      void
      logCommand(const std::string& cmd)
      {
        // Log sent message.
        IMC::DevDataText text;
        text.value.assign(sanitize(cmd));
        dispatch(text);
      }


      void
      ping( uint8_t DEST_ID) 
      {
        
        Data_Beacon.type_CID_PING_SEND_m.DEST_ID=DEST_ID;
        Data_Beacon.type_CID_PING_SEND_m.MSG_TYPE=MSG_REQU;
        sendCommand(Comand_create_seatrac( CID_PING_SEND , Data_Beacon )); 

      }

      void
      fullAcousticReport(void)  //todo 
      {   

       
        //todo remover variaveis 
        int  c_binary_size =25 , msg_code_report=1;
        
        double lat;
        double lon;
        Coordinates::toWGS84(m_estate, lat, lon);
       
        float f_lat = lat;
        float f_lon = lon;
        uint8_t u_depth = (uint8_t)m_estate.depth;
        int16_t i_yaw = (int16_t)(m_estate.psi * 100.0);
        int16_t i_alt = (int16_t)(m_estate.alt * 10.0);
        uint16_t ranges[2] = {0};
        uint8_t fuel = (uint8_t)m_fuel_level;  // obetido pelo IMC::FuelLevel
        uint8_t conf = (uint8_t)m_fuel_conf;  // obetido pelo IMC::FuelLevel
        int8_t prog = (int8_t)m_progress;     //IMC::PlanControlState
        // todo devovia os ranges que tem idade curta
        // tera de der bubestituido pelos dados de localização do Seatrac  //m_lbl(i).range;
        //todo adicionar localização ou fazer o necessario para garantir que há localuização dos dois lados
        std::vector<char> msg(c_binary_size, 0);
        //dados copia para a sring 
        std::memcpy(&msg[1], &f_lat, 4);
        std::memcpy(&msg[5], &f_lon, 4);
        std::memcpy(&msg[9], &u_depth, 1);
        std::memcpy(&msg[10], &i_yaw, 2);
        std::memcpy(&msg[12], &i_alt, 2);
        std::memcpy(&msg[14], &ranges[0], 2);
        std::memcpy(&msg[16], &ranges[1], 2);
        std::memcpy(&msg[18], &prog, 1);
        std::memcpy(&msg[19], &fuel, 1);
        std::memcpy(&msg[20], &conf, 1);
        //converter data para string 
        std::string hex = String::toHex(msg);
        if (Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string( hex, msg_code_report, 0x01)) 
        {
          sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  
          IMC::UamTxStatus tx_status;
          tx_status.value = IMC::UamTxStatus::UTS_IP;
          dispatch(tx_status);
        }
        
    
      }


      void
      handle_fullAcousticReport(std::string& msg)
      {

        const char* msg_raw = msg.data();

        //uint8_t code = static_cast<uint8_t>(msg_raw[0]);

          float lat;
          float lon;
          uint8_t depth;
          int16_t yaw;
          int16_t alt;
          uint16_t ranges[2];

          int8_t progress;
          uint8_t fuel_level;
          uint8_t fuel_conf;

          std::memcpy(&lat, msg_raw + 1, 4);
          std::memcpy(&lon, msg_raw + 5, 4);
          std::memcpy(&depth, msg_raw + 9, 1);
          std::memcpy(&yaw, msg_raw + 10, 2);
          std::memcpy(&alt, msg_raw + 12, 2);
          std::memcpy(&ranges[0], msg_raw + 14, 2);
          std::memcpy(&ranges[1], msg_raw + 16, 2);
          std::memcpy(&progress, msg_raw + 18, 1);
          std::memcpy(&fuel_level, msg_raw + 19, 1);
          std::memcpy(&fuel_conf, msg_raw + 20, 1);
          /*
          for (int i = 0; i < 2; ++i)
          {
            if (ranges[i] == 0)
              continue;

            IMC::LblRangeAcceptance lmsg;
            lmsg.setSource(m_mimap[src]);
            lmsg.id = i;
            lmsg.range = ranges[i];
            lmsg.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
            dispatch(lmsg);
            inf("%s %u: %f", DTR("range to"), lmsg.id, lmsg.range);
          }

          IMC::EstimatedState es;
          es.setSource(m_mimap[src]);
          es.lat = lat;
          es.lon = lon;
          es.depth = (float)depth;
          es.psi = (float)yaw / 100.0;
          es.alt = (float)alt / 10.0;
          dispatch(es);
       
          IMC::PlanControlState pcs;
          pcs.setSource(m_mimap[src]);
          pcs.plan_progress = (float)progress;
          dispatch(pcs);

          // Inform if progress is valid.
          if (pcs.plan_progress >= 0)
            inf(DTR("plan progress is %f"), pcs.plan_progress);
     
          IMC::FuelLevel fuel;
          fuel.setSource(m_mimap[src]);
          fuel.value = (float)fuel_level;
          fuel.confidence = (float)fuel_conf;
          dispatch(fuel);

          trace("lat %f | lon %f | depth %f | alt %f | yaw %f", es.lat, es.lon, es.depth, es.alt, es.psi);
          trace("fuel %f | conf %f | plan progress %f", fuel.value, fuel.confidence, pcs.plan_progress);
          */

      }

      //todo recebe mensagem de restart e mensagem de abort e da conhecimento da sua recepção  
      void
      handle_abort_restart(std::string& msg)
      {

        int msg_code_report=2;
       //para o sub case BT_X110 
        //todo este valor tem de ser dado pelos dados seatrack
        // value=0;

        if(m_args.Beacon==BT_X110)
        {
          unsigned value = 0;
          std::sscanf(msg.c_str(), "%04X", &value);
  
          if (value == c_code_sys_restart)
          {
            war(DTR("received system restart request"));
  
            std::string msg2= "";
            //todo inserir codigo para restart 
            std::string hex = String::toHex(msg2);
            if (Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string( hex, msg_code_report, 0x01)) 
            {
            sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  
            }
  
            IMC::RestartSystem restart;
            dispatch(restart);
            
          }
          else if (value == c_code_abort)
          {
            war(DTR("acoustic abort detected"));
            
            IMC::Abort abort;
            abort.setDestination(getSystemId());
            dispatch(abort);
  
            std::string msg2= "";
            //todo inserir codigo para abort 
            std::string hex = String::toHex(msg2);
            if (Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string( hex, msg_code_report, 0x01)) 
            {
            sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  
            }
          }

        }
          else if (m_args.Beacon==BT_X150) // para a manta
          { 
          

            unsigned src = 0;
            *stn >> src;
            unsigned dst = 0;
            *stn >> dst;

            // Get value.
            std::string val;
            *stn >> val;

            unsigned value = 0;
            std::sscanf(val.c_str(), "%04X", &value);

            if (value == c_code_abort_ack)
            {
              m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_ACKED;
              m_acop_out.system = m_acop.system;
              dispatch(m_acop_out);
              resetOp();
            }
            if (value == c_code_plan_ack)
            {
              inf(DTR("plan started"));
              m_pc->setSource(m_mimap[src]);
              m_pc->type = IMC::PlanControl::PC_SUCCESS;
              m_pc->flags = 0;
              dispatchReply(*m_pc, *m_pc, DF_KEEP_SRC_EID);
            }
            else if (value & c_mask_qtrack)
            {
              unsigned beacon = (value & c_mask_qtrack_beacon) >> 10;
              unsigned range = (value & c_mask_qtrack_range);
              IMC::LblRangeAcceptance msg;
              msg.setSource(m_mimap[src]);
              msg.id = beacon;
              msg.range = range;
              msg.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
              dispatch(msg);
              inf("%s %u: %u", DTR("range to"), beacon, range);

            }
            
      }
        
      }
      void
      abort_restart(const std::string& sys) //todo executar o envio de um abort ou restart 
      {

       int msg_code_report=3;
        if (!hasTransducer())
          return;
        /*
        NarrowBandMap::iterator nitr = m_nbmap.find(sys);
        if (nitr != m_nbmap.end())
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          dispatch(m_acop_out);
          return;
        }

        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end())
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          dispatch(m_acop_out);
          return;
        }
        */

        std::string msg2= ""; //todo enviar estes dados m_address, itr->second, c_code_abort);
        std::string hex = String::toHex(msg2);
        if (Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string( hex, msg_code_report, 0x01)) 
        {
        sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  
        }
        m_op = OP_ABORT;
        m_op_deadline = Clock::get() + m_args.tout_abort;
        

      }
      
      bool
      hasTransducer(void) // todo verificar se existe transdutor 
      {
          //todo verificar se recebe mensagem de status de x em x tempo
        return true;
        /*
        if (m_ignore_gpio)
          return true;

        if (m_gpio_txd == NULL)
          return true;

        if (m_gpio_txd->getValue() == false)
          return true;

        err("%s", DTR("transducer not connected"));
        m_acop_out.op = IMC::AcousticOperation::AOP_NO_TXD;
        dispatch(m_acop_out);
        return false;
        */
      }
       void
      handle_PingReply(cid Cid_data) //originalmente enviava a distancia de cada um dos beaons para IMC 
      {
        /*  historico 
            lrange.id = m_lbl(i).id;
            lrange.range = range;
            dispatch(lrange);
        */


        if(Cid_data == CID_PING_ERROR)  
        {
          war(DTR("No ping replay")) ;
          return;
        }

        if(Cid_data == CID_PING_RESP)  
        {
         
         //todo what to do information of fing
          return;
        }

           /*  historico 
            lrange.id = m_lbl(i).id;
            lrange.range = range;
            dispatch(lrange);
        */


       }

       void
       plan_acknowledged(const std::string& sys, const InlineMessage<IMC::Message>& imsg) // original transmitMessage
       {
       

        static const uint8_t  c_binary_size=32;
        if (!hasTransducer())
          return;
        /*
        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end())
          return;
        */
        const IMC::Message* msg = NULL;
        std::string command;

        try
        {
          msg = imsg.get();
        }
        catch (...)
        {
          return;
        }

        if (msg->getId() == DUNE_IMC_PLANCONTROL)
        {
          const IMC::PlanControl* pc = static_cast<const IMC::PlanControl*>(msg);
          Memory::replace(m_pc, new IMC::PlanControl(*pc));

          if (pc->op == IMC::PlanControl::PC_START)
          {
            std::vector<char> pmsg(c_binary_size, 0);

            if (pc->plan_id.size() > c_binary_size - 1)
            {
              err(DTR("unable to send plan %s"), pc->plan_id.c_str());
              return;
            }


            /* //todo substituir isto
            // Make packet.
            pmsg[0] = (char)c_code_plan;
            std::memcpy(&pmsg[1], &pc->plan_id[0], std::min(c_binary_size - 1, (int)pc->plan_id.size()));

            std::string hex = String::toHex(pmsg);
            std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n",
                                          m_address, itr->second, hex.c_str());
            sendCommand(cmd);

            std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_address, itr->second);
            sendCommand(cyc);
            */

          }
        }

        if (command.empty())
          return;

        sendCommand(command);
       
       }

      void
      handle_plan_acknowledged(std::string& msg) //originalmente enviava a distancia de cada um dos beaons para IMC 
      {
        /*
           unsigned src;
        unsigned dst;
        unsigned ack;
        unsigned fnr;
        std::string hex;

        try
        {
          *stn >> src >> dst >> ack >> fnr >> hex;
        }
        catch (...)
        {
          return;
        }

        // not for me.
        if (dst != m_addr)
          return;

        std::string msg = String::fromHex(hex);
        const char* msg_raw = msg.data();

        uint8_t code = static_cast<uint8_t>(msg_raw[0]);

        if (code == c_code_plan)
        {
          IMC::OperationalLimits ol;
          ol.mask = 0;
          dispatch(ol);

          Delay::wait(1.0);

          // Get plan name.
          char plan_name[c_binary_size - 1];
          std::memcpy(&plan_name[0], msg_raw + 1, c_binary_size - 1);

          IMC::PlanControl pc;
          pc.type = IMC::PlanControl::PC_REQUEST;
          pc.op = IMC::PlanControl::PC_START;
          pc.plan_id.assign(plan_name);
          pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
          dispatch(pc);

          war(DTR("start plan detected"));

          std::string cmd = String::str("$CCMUC,%u,%u,%04x\r\n", m_addr, src, c_code_plan_ack);
          sendDelayedCommand(cmd, m_args.mpk_delay_bef, m_args.mpk_delay_aft);

          if (consumeResult(RS_MPK_ACKD) && consumeResult(RS_MPK_STAR) && consumeResult(RS_MPK_SENT))
            inf(DTR("plan acknowledged"));
          else
            inf(DTR("failed to acknowledge plan start"));
        }
        else if (code == c_code_report)
        {
          debug("ignore acoustic report");
        }
        else
        {
          debug("wrong code id");
        }
        */

      }

      void
      handle_BinaryMessage()
      {
         if (Data_Beacon.type_CID_DAT_RECEIVE_m.ACK_FLAG !=0) 
          {
            Data_Beacon.type_CID_DAT_RECEIVE_m.ACK_FLAG =0;
             if(Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string_recall(1)!=-1)  
              sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  
            else
              {
              IMC::UamTxStatus tx_status; 
              tx_status.value = IMC::UamTxStatus::UTS_DONE;
              dispatch(tx_status);

              }
            return;
          }
          else 
          {
            int data_rec_flag=Data_Beacon.type_CID_DAT_RECEIVE_m.PACKET_DATA_();
            if (data_rec_flag==0)
            {  
              std::string msg;
              uint8_t type =Data_Beacon.type_CID_DAT_RECEIVE_m.get_full_msg(msg);

              if (type== 1 )
                handle_fullAcousticReport(msg);
              else if (type ==2)
               handle_abort_restart(msg);
              else if (type ==3)
                handle_plan_acknowledged(msg);
            }
            else if(data_rec_flag ==-1)
              war(DTR(" Second msg send before 1st finish ")) ;
             else if(data_rec_flag ==1)
               war(DTR(" Colecting data ")) ;
          } 
      }

      void
      processInput(double timeout = c_cmd_reply_tout) 
      {
     
        double deadline = Clock::get() + timeout;

        do
        {
            consumeMessages();
            if ( parserManager()== true )  
           {
               if (Data_Beacon.new_data_available(CID_PING_RESP))
                 handle_PingReply(CID_PING_RESP);        
               if(Data_Beacon.new_data_available(CID_PING_ERROR))  
                 handle_PingReply(CID_PING_ERROR);   
               if(Data_Beacon.new_data_available(CID_DAT_RECEIVE))  
                  handle_BinaryMessage();
               if(Data_Beacon.new_data_available(CID_DAT_ERROR))
                {
                  if(Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string_recall(0)<Max_message_errors)
                  sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon )); 
                }
           }

           if (m_state_Entity != STA_NO_BEACONS) 
           {
             if (isActive())
               setAndSendState(STA_ACTIVE);
             else
               setAndSendState(STA_IDLE);
            }


        } while (Clock::get() <= deadline && !stopping());
  
     
      }
      void
      consume(const IMC::Temperature* msg)
      {
        
        if ( msg->value != 0)
        {
          flagteste= (int ) msg->value;
        }
        else 
        {
          flagteste=0;
        }

      }

      void
      consume(const IMC::LblConfig* msg) //todo verificar os comsumes necessarios  //no caso origunal serve para dizer quanto beacons estão na "rede" e atualiza o estado local do sistema
      {
          //TODO
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if ((int)msg->getSourceEntity() != m_sound_speed_eid)
          return;

        if (msg->value < 0)
          return;

        m_sound_speed = msg->value;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

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

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_progress = msg->plan_progress;
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel_level = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {

        
        if (m_op != OP_NONE)
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_BUSY;
          dispatch(m_acop_out);
          return;
        }
      

        m_acop = *msg;

        switch (msg->op)
        {
          case IMC::AcousticOperation::AOP_ABORT:
            abort_restart(msg->system);
            break;
          case IMC::AcousticOperation::AOP_RANGE:
            //ping(msg->system); //todo modificar para devolver localização
            break;
          case IMC::AcousticOperation::AOP_MSG:
            plan_acknowledged(msg->system, msg->msg);
            break;
        }
      }

      void
      resetOp(void)
      {
        m_op = OP_NONE;
        m_op_deadline = -1.0;
      }

        void
      checkTimeouts(void)
      {
        if (m_op == OP_NONE)
          return;

        double now = Clock::get();

        if (now > m_op_deadline)
        {
          m_acop_out.system = m_acop.system;

          if ((m_op == OP_PING_NB) || (m_op == OP_PING_MM))
            m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_TIMEOUT;
          else if (m_op == OP_ABORT)
            m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_TIMEOUT;

          dispatch(m_acop_out);
          resetOp();
        }
      }


      //! Main loop.
      void
      onMain(void)
      {    flagteste=0; //todo remover apenas para teste
           data = new std::string("");
           ping(0x1);//todo remover 
          m_report_timer.reset();
          while (!stopping()) 
            {


             // Report.
              if (m_args.report != "None" && !m_stop_comms)  // todo Algum tipo de report esta activado  &&  tem condições fisicas para comunicar falta destar
              {
                if (m_report_timer.overflow())  
                {
                  m_report_timer.reset();
    
                  if (m_args.report == "Full") 
                    fullAcousticReport();
                }
              }

              processInput(0);
              if (flagteste==1)
              {
                flagteste=0; 
                 ping(0x1);
              }
              else if(flagteste==2)
              {
                  flagteste=0;
                  std::string msg= " ver ser envia uma string com mais de 28 caracteres ";
                  std::string hex = String::toHex(msg);
                  if (Data_Beacon.type_CID_DAT_SEND_t.PACKET_DATA_string( hex, 15, 0x01)) 
                  sendCommand(Comand_create_seatrac( CID_DAT_SEND , Data_Beacon ));  

              }
              else if (flagteste==3)
              {
                flagteste=0;
                //fullAcousticReport();
              }
              //todo falta verificar como se comporta com o isAcivated
              if (isActive() && !m_stop_comms &&  m_pinger.overflow())
              {
                ping(0x1);
                m_pinger.reset(); 
              }
              
              if (Clock::get() >= (m_last_input + c_input_tout))   
                setAndSendState(STA_ERR_COM);

              checkTimeouts();
              
           }
      }

    };
  }
}
DUNE_TASK