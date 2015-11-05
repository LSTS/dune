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
    static const double c_cmd_reply_tout = 4.0;

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
    };
    //Modelo do beacon
    enum BeaconType
    {
      BT_X110,
      BT_X150
    };
    //! Narrow-Band Beacon
    struct Beacon
    {
      // Beacon name.
      std::string name;
      // Beacon Type.
      BeaconType type;
      // Beacon id.
      unsigned id;

      Beacon(void):
        id(0)
      { }
    };

        //! Complete Micro-USBL.
    struct Micro_USBL
    {
      // Beacons.
      std::vector<Beacon> beacons;

      Micro_USBL(void):
        index(0)
      { }

      unsigned
      next(void)
      {
        unsigned it = index;
        if (++index >= beacons.size())
          index = 0;

        return it;
      }

      bool
      empty(void) const
      {
        return beacons.empty();
      }

      void
      clear(void)
      {
        beacons.clear();
      }

      unsigned
      size(void)
      {
        return beacons.size();
      }

      bool
      isModem(unsigned ix) const
      {
        if (beacons[ix].type == BT_X110)
          return true;

        return false;
      }

      void
      push_back(Beacon beacon)
      {
        beacons.push_back(beacon);
      }

      Beacon
      operator()(unsigned i) const
      {
        return beacons[i];
      }

      Beacon&
      operator()(unsigned i)
      {
        return beacons[i];
      }

    private:
      // Iterator index.
      unsigned index;
    };


    struct Task: public DUNE::Tasks::Task
    {
      //VARIAVEIS da tarefa 

       //! Micro_USBL setup.
      Micro_USBL m_Micro_USBL;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments.
      Arguments m_args;  // Estrutura de argumentos que estão definidos no ini de forma a executar a tarefa 
      //! Current state.
      EntityStates m_state_Entity;  // Define o estado em que se encontra o equipamento         
      //! Report timer.
      Time::Counter<double> m_report_timer;  //classe de timer para controlar tempos 
       //! Pinger.
      Time::Counter<float> m_pinger;   // verificar os tempos de pinger

 
      //DADOS recebidos por IMC
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


      //todo novas variaveis 

      // Current SM state.
      ParserStates m_state;
       // Message preamble
      static const char c_preamble = '$';
      static const int max_msg_size =10000;
      static const int overflow = 10;
      //! Maximum buffer size.
      static const int c_bfr_size = 2;
      //  reader state
      bool reader_state;
      //! Time of last serial port input.
      double m_last_input;
      int x;
      // Initialize serial buffer reader
      std::string * data ;
      std::string datahex;
      size_t rv;
      char m_bfr[c_bfr_size];
      char msg_validity;
      cid message_R;
      data_Seatrac Data_Beacon;


    


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

         param(DTR_RT("Reports Periodicity"), m_args.report_period)  //todo cofirm funcionalidade
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("60")
        .minimumValue("30")
        .maximumValue("600")
        .description("Reports periodicity");


        m_stop_comms = true;
        // Initialize state messages.  
        //todo

        bind<IMC::EstimatedState>(this);  // serve para criar as funções de resposta a comunicações do tipo das que se querem subescrever //todod verificar quais os tipos de msg necessarios
        bind<IMC::FuelLevel>(this);
        //bind<IMC::LblConfig>(this);  //modificar esta entrada //todo 
        bind<IMC::PlanControlState>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::VehicleMedium>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void) //todo
      {


        if (paramChanged(m_args.report_period))
          m_report_timer.setTop(m_args.report_period);

          //todo verificar os parametros que mudam e caso seja necessario mudar outros
          if (paramChanged(m_args.ping_period))
          m_pinger.setTop(m_args.ping_period);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)  //todo verificar isto 
      {
        /*
        try
        {
          m_sound_speed_eid = resolveEntity(m_args.sound_speed_elabel);
        }
        catch (...)
        {
          inf(DTR("dynamic sound speed corrections are disabled"));
          m_sound_speed = m_args.sound_speed_def;
        }
        */
      }
      
      void
      setAndSendState(EntityStates state)
      {
        m_state_Entity = state;
        //setEntityState((IMC::EntityState::StateEnum)m_states[m_state_Entity].state, m_states[m_state_Entity].description);
      }
    
    
      char
      parse( )
      {
         
        switch (m_state)
        {

          
          case PS_PRE:// Parse preamble.
            if (m_bfr[0] == c_preamble)
            {
              m_state = PS_DATA;
              x=0;
            }
            // Clear parser variables
            data->clear();
            break;
          case PS_DATA: // Parse message data
            // Parse data till find '*'
            if (m_bfr[0] !=  '\r')
              data->push_back(m_bfr[0]);
            else
              m_state = PS_COMPLETE;
            break;
          case PS_COMPLETE: // Check message validity
              if (m_bfr[0] !=  '\n')
              m_state = PS_PRE;
              else
              {
                m_state = PS_PRE;
                uint16_t crc,crc2;
                const char* msg_raw2;
                const char* msg_raw;
                //copia do check

                std::string bufer_ckecksum = data->substr ((data->size()-4),4); 
                data->erase((data->size()-4),4);
                std::string msg= bufer_ckecksum;

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
                    m_state = PS_NONE;
                  }
                else
                  {
                    std::cout << "invalid ckecksum" << std::endl;
                    msg_validity=false;
                  }
                std::cout << *data << std::endl;
              }
            break;
            // End parser
          case PS_NONE:
            m_state = PS_NONE;
            break;
            // Should never get here.
          default:
            m_state = PS_PRE;
            break;
        }
        return msg_validity;
      }
      bool
      parserManager( )
      { 
        // Initialize received message parser
        uint16_t typemes;
        const char* msg_raw;
        m_state = PS_PRE;
        // Initialize overflow timer
        m_last_input = Clock::get();

        while(m_state != PS_NONE) 
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
          if (parse() == true)
          {
            msg_raw=datahex.data();
            std::memcpy(&typemes, msg_raw,1);
            //std::cout << *data << std::endl;
            std::cout << "valid ckecksum- type message  :" <<  std::hex << typemes << std::endl;
            //std::string msg = String::fromHex(*data);
            dataParser(typemes,msg_raw+1, Data_Beacon);
            // Initialize message validity flag
            msg_validity = false;
            data->clear();
         }

        }
        
       return true;
      }
      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {

        setAndSendState(STA_BOOT);// todo verificar o que isto faz

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
      onResourceInitialization(void) //todo verificar o que foi feito
      {

      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
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
      logCommand(const std::string& cmd)//todo verificar isto
      {
        // Log sent message.
        IMC::DevDataText text;
        text.value.assign(sanitize(cmd));
        dispatch(text);
      }


      void
      ping(uint8_t index) //todo
      {
        
      
      }





      void
      fullAcousticReport(void) // verificar o que é enviado no outro mas sim escreve na usart //todo
      {

        /*
        double lat;
        double lon;
        Coordinates::toWGS84(m_estate, lat, lon);

        float f_lat = lat;
        float f_lon = lon;
        uint8_t u_depth = (uint8_t)m_estate.depth;
        int16_t i_yaw = (int16_t)(m_estate.psi * 100.0);
        int16_t i_alt = (int16_t)(m_estate.alt * 10.0);
        uint16_t ranges[2] = {0};
        uint8_t fuel = (uint8_t)m_fuel_level;
        uint8_t conf = (uint8_t)m_fuel_conf;
        int8_t prog = (int8_t)m_progress;

        for (uint8_t i = 0; i < std::min(2, (int)m_lbl.size()); i++)
        {
          if (m_args.good_range_age > (Clock::get() - m_lbl(i).range_time))
            ranges[i] = m_lbl(i).range;
          else
            ranges[i] = 0;
        }

        std::vector<char> msg(c_binary_size, 0);
        std::memcpy(&msg[0], &c_code_report, 1);
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

        std::string hex = String::toHex(msg);
        std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n",
                                      m_addr, 0, hex.c_str());
        sendCommand(cmd);

        std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_addr, 0);
        sendCommand(cyc);

        IMC::UamTxStatus tx_status;
        tx_status.value = IMC::UamTxStatus::UTS_IP;
        dispatch(tx_status);

        for (int i = 0; i < 7; ++i)
        {
          consumeMessages();
          Delay::wait(1.0);
        }

        tx_status.value = IMC::UamTxStatus::UTS_DONE;
        dispatch(tx_status);
        */
      }

    
      
    


      void
      processInput(double timeout = c_cmd_reply_tout) // equivalente ao parser //todo
      {
        /*
        double deadline = Clock::get() + timeout;

        while (Clock::get() <= deadline)
        {
          consumeMessages();

          if (!Poll::poll(*m_uart, 0.01))
            continue;

          m_uart->readString(m_bfr, c_bfr_size);
          m_last_input = Clock::get();

          if (m_state_Entity != STA_NO_BEACONS)
          {
            if (isActive())
              setAndSendState(STA_ACTIVE);
            else
              setAndSendState(STA_IDLE);
          }

          IMC::DevDataText text;
          text.value.assign(sanitize(m_bfr));
          dispatch(text);

          try
          {
            std::auto_ptr<NMEAReader> stn = std::auto_ptr<NMEAReader>(new NMEAReader(m_bfr));
            if (std::strcmp(stn->code(), "CAMUA") == 0)
              handleMiniPacket(stn);
            else if (std::strcmp(stn->code(), "SNTTA") == 0)
              handleTransponderTravelTimes(stn);
            else if (std::strcmp(stn->code(), "SNPNT") == 0)
              addResult(RS_PNG_ACKD);
            else if (std::strcmp(stn->code(), "CAMUC") == 0)
              addResult(RS_MPK_ACKD);
            else if (std::strcmp(stn->code(), "CATXP") == 0)
              addResult(RS_MPK_STAR);
            else if (std::strcmp(stn->code(), "CATXF") == 0)
              addResult(RS_MPK_SENT);
            else if (std::strcmp(stn->code(), "CACFG") == 0)
              handleConfigParam(stn);
            else if (std::strcmp(stn->code(), "CARXD") == 0)
              handleBinaryMessage(stn);
            else if (std::strcmp(stn->code(), "CAMPR") == 0)
              handlePingReply(stn);
          }
          catch (std::exception& e)
          {
            err("%s", e.what());
          }
        }
        */
      }

        void
      configureModem()  //todo
      {

        /*
        pingMicroModem
        fullAcousticReport
        processInput  //é o meu parser 
        configureModem
        */
      }

      void
      consume(const IMC::LblConfig* msg) //todo verificar os comsumes necessarios 
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
      consume(const IMC::VehicleMedium* msg) // todo verificar isto  faz com que o sistema comunique ou não dependedo de estar na agua ou não ou a opeção estar desactivada 
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


      //! Main loop.
      void
      onMain(void)
      {
           data = new std::string("");
        
          m_report_timer.reset();
          while (!stopping()) //todo alterar como é executado o main
            {


              //todo verificar como isto estava a funcionar
             // Report.
              if (m_args.report != "None" && !m_stop_comms)  // todo Algum tipo de report esta activado  &&  tem condições fisicas para comunicar 
              {
                if (m_report_timer.overflow())
                {
                  m_report_timer.reset();
    
                  if (m_args.report == "Full") // esterar X tempo até fazer um report 
                    fullAcousticReport();
                }
              }
               
        
    
              if ( parserManager()== false)  //se não tem mensagem volta a repetir proceesso de report caso contrario passa a efectuar o passo seguite 
                    continue;
              inf(DTR("Nova mensaguem")); 

              /*//todo verificar como isto estava a funcionar
              if (isActive() && !m_stop_comms &&  m_pinger.overflow()) // navegação esta activa? reportar info? o tempo de pinger como está?
              {
                m_pinger.reset();
               // ping(); //todo 
              }
              else
              {
                processInput(1.0);
              }

               inf(DTR("passou aqui 4"));

               */
              /*
              if (Clock::get() >= (m_last_input + c_input_tout))   // caso não cumpra os tempos estipulados muda o status para ERRO
                setAndSendState(STA_ERR_COM);


              */
           }
      }

    };
  }
}
DUNE_TASK