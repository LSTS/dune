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
//***************************************************************************
// Author: João Teixeira                                                    *
//***************************************************************************

#ifndef DUNE_TRANSPORTS_RADIO_TELEMETRY_HPP_INCLUDED_
#define DUNE_TRANSPORTS_RADIO_TELEMETRY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <queue>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

// Local headers
#include "TelemetryTypes.hpp"

namespace Transports
{
  namespace Radio
  {
    using DUNE_NAMESPACES;

    //! This class is a communication manager for telemetry
    //!
    //! @author João Teixeira

    class Telemetry
    {
    public:
      //! Constructor.
      Telemetry(Tasks::Task* task, uint8_t system, MapName radio_names, MapAddr radio_addrs, int max_packet_size):
        m_task(task),
        m_tx_telemetry_State(IDLE),
        m_rx_telemetry_State(IDLE),
        local_tx_sync(0),
        local_rx_sync(0),
        systemID(system)
      {
      	m_tx_mesg.state = MSG_TRANSMIT;
        m_radio_names= radio_names;
        m_radio_addrs = radio_addrs;
        m_max_packet_size = (int) max_packet_size * MAX_MESSAGE_PERIOD;
        m_task->debug("Telemetry max_packet_size %d", m_max_packet_size);
      }

       //! Consume Estimated State messages.
       //! @param[in] msg EstimatedState message.
       void
       consume(const IMC::EstimatedState* msg)
       {
         if (msg->getSource() != m_task->getSystemId())
           return;

         m_repotdata.estate = *msg;
       }

       //! Consume VehicleState  messages.
       //! @param[in] msg VehicleState message.
       void
       consume(const IMC::VehicleState* msg)
       {
         if (msg->getSource() != m_task->getSystemId())
         	return;
         m_repotdata.vehicle_state = *msg;
       }

       //! Consume Plan Control State messages.
       //! @param[in] msg PlanControlState message.
       void
       consume(const IMC::PlanControlState* msg)
       {
       	 if (msg->getSource() !=  m_task->getSystemId())
       	 	return;
          m_repotdata.plan_progress = *msg;
       }

       //! Consume Fuel Level messages.
       //! @param[in] msg FuelLevel message.
       void
       consume(const IMC::FuelLevel* msg)
       {
       	 if (msg->getSource() !=  m_task->getSystemId())
           return;
          m_repotdata.fuel_level= *msg;
       }

       void
       consume(const IMC::Voltage* msg)
       {
         if (msg->getSource() !=  m_task->getSystemId())
           return;
          m_repotdata.batt_voltage= *msg;
       }

       //! Consume air Speed messages.
       //! @param[in] msg IndicatedSpeed message.
       void
       consume(const IMC::IndicatedSpeed* msg)
       {
       	 if (msg->getSource() !=  m_task->getSystemId())
          return;
       	 m_repotdata.air_speed= *msg;
       }

              void
       consume(const IMC::VtolState* msg)
       {
         if (msg->getSource() !=  m_task->getSystemId())
          return;
         m_repotdata.vtolstate= *msg;
       }


       //! Consume TelemetryMsg messages.
       //! @param[in] msg TelemetryMsg message.
       void
       consume(const IMC::TelemetryMsg* msg)
       {
          m_task->debug("consume Telemetry tx");
          imc_TelemetryMsg_queue.push( * msg);
          imc_time.push(Time::Clock::get());
       }
       bool
       imc_TelemetryMsg_tx()
       {
         if(!imc_TelemetryMsg_queue.empty())
         {
           IMC::TelemetryMsg msg;
           msg = imc_TelemetryMsg_queue.front();
           imc_TelemetryMsg_queue.pop();
           double valid = imc_time.front()+ msg.ttl;

           imc_time.pop();
           if( (Time::Clock::get()) > valid )
           {
            m_task->inf("IMC Radio msg %d discarded due to ttl timeout", msg.req_id);
            return false;
           }


           if (msg.getDestination() !=  m_task->getSystemId())
             return false;
           if(msg.type != IMC::TelemetryMsg::TM_TX)
             return false;
           unsigned dst, src;
           if( !lookupSystemAddress(msg.destination, dst))
           {
             m_task->err("Invalid Tx destination %s",msg.destination.c_str());
            return false;
           }
           if( !lookupSystemAddress(m_task->getSystemName(),src))
           {
            m_task->err("This src system is not in the Radio system list");
            return false;
           }
           uint16_t msgtype = (msg.data[1] << 8) + msg.data[0];

           m_task->debug("IMC type to tx %d , size %d ",msgtype, (int) msg.data.size());
           XxMesg TxFrame;
           if(TxFrame.imc_to_tx_msg(&msg,src, dst))
           {
            updateTxSync();
            TxFrame.encodeHeader(local_tx_sync, m_max_packet_size, msg.ttl );
            m_tx_msg_queue.push(TxFrame);
           }
           else
           {
            m_task->err("Invalid Tx code type");
            return false;
           }
           m_task->dispatch(TxFrame.telemetry_imc_status);
           return true;
         }
         return false;
       }

       //! update the Tx synchronization number
       void
       updateTxSync(void)
       {
          if(local_tx_sync == 255)
            local_tx_sync = 0;
          else
            local_tx_sync++;
       }

       //! update the local Rx synchronization number to detect data loss
       void
       updateRxSync(int value = -1)
       {
         if(value < 0)
         {

           if(local_rx_sync == 255)
             local_rx_sync = 0;
           else
             local_rx_sync++;
         }
         else
         {
          local_rx_sync= (uint8_t) value;
         }
       }

       //! verifies if TX channel is busy
       bool
       isIdle(void)
       {
         if(m_tx_telemetry_State == IDLE)
           return true;
         return false;
       }

       void
       createReport(void)
       {
         m_task->trace("create Report");
    	   XxMesg ReportFrame;
       	 double lat = 0;
         double lon = 0;
         Coordinates::toWGS84(m_repotdata.estate, lat, lon);

         Report dat;
         dat.lat = lat;
         dat.lon = lon;
         dat.depth =  abs(Math::round(m_repotdata.estate.depth));
         dat.roll =  Math::round((m_repotdata.estate.phi * 100.0));
         dat.pitch = Math::round((m_repotdata.estate.theta * 100.0));
         dat.yaw = Math::round((m_repotdata.estate.psi * 100.0));
         dat.alt = Math::round((m_repotdata.estate.alt * 10.0));
         dat.height =  Math::round((m_repotdata.estate.height * 10.0));
         dat.fuel_level = Math::round(m_repotdata.fuel_level.value);
         dat.fuel_conf = Math::round(m_repotdata.fuel_level.confidence);
         dat.progress = m_repotdata.plan_progress.plan_progress;
         dat.air_speed  =  Math::round((m_repotdata.air_speed.value*100));
         dat.vehicle_state =  m_repotdata.vehicle_state.op_mode;
         dat.vehicle_state_ent =  m_repotdata.vehicle_state.getSourceEntity();
         dat.vtolstate = m_repotdata.vtolstate.state;
         dat.voltage= m_repotdata.batt_voltage.value*10;

         std::vector<char> data(29,0);
         std::memcpy(&data[0], &dat.lat, 4);
         std::memcpy(&data[4], &dat.lon, 4);
         std::memcpy(&data[8], &dat.depth, 1);
         std::memcpy(&data[9], &dat.roll, 2 );
         std::memcpy(&data[11], &dat.pitch, 2 );
         std::memcpy(&data[13], &dat.yaw, 2 );
         std::memcpy(&data[15], &dat.alt, 2 );
         std::memcpy(&data[17], &dat.height, 2 );
         std::memcpy(&data[19], &dat.fuel_level, 1 );
         std::memcpy(&data[20], &dat.fuel_conf, 1 );
         std::memcpy(&data[21], &dat.progress, 1);
         std::memcpy(&data[22], &dat.air_speed, 2);
         std::memcpy(&data[24], &dat.vehicle_state, 1);
         std::memcpy(&data[25], &dat.vehicle_state_ent, 1);
         std::memcpy(&data[26], &dat.voltage, 2);
         std::memcpy(&data[28], &dat.vtolstate, 1);
         std::string str(data.begin(),data.end());

         ReportFrame.setMsgData(str);
         updateTxSync();
         ReportFrame.encodeHeader(CODE_REPORT,systemID, 0 ,
                                  local_tx_sync, false, m_max_packet_size, MAX_MESSAGE_PERIOD*4);
         ReportFrame.state = MSG_QUEUE;
         ReportFrame.telemetry_imc_status.type = IMC::TelemetryMsg::TM_TXSTATUS;
         ReportFrame.telemetry_imc_status.code = CODE_REPORT ;
         ReportFrame.telemetry_imc_status.req_id= local_tx_sync;

         m_tx_msg_queue.push(ReportFrame);
         m_task->debug("Report to queue");

       }

       bool
       reportDecode(XxMesg & rxmsg)
       {

         const char* data= rxmsg.msg.data();
         int size = rxmsg.msg.size();
         m_task->debug("RX: reportDecode : size %d", size);
       	 if(size == 29)
       	 {
       	    RepotImcData report_imc;
       	    Report dat;
       	    std::memcpy(&dat.lat, data + 0, 4);
            std::memcpy(&dat.lon, data + 4, 4);
            std::memcpy(&dat.depth, data + 8, 1);
            std::memcpy(&dat.roll, data + 9, 2 );
            std::memcpy(&dat.pitch, data + 11, 2 );
            std::memcpy(&dat.yaw, data + 13, 2 );
            std::memcpy(&dat.alt, data + 15, 2 );
            std::memcpy(&dat.height, data + 17, 2 );
            std::memcpy(&dat.fuel_level, data + 19, 1 );
            std::memcpy(&dat.fuel_conf, data + 20, 1 );
            std::memcpy(&dat.progress, data + 21, 1);
            std::memcpy(&dat.air_speed, data + 22, 2);
            std::memcpy(&dat.vehicle_state, data + 24, 1);
            std::memcpy(&dat.vehicle_state_ent, data + 25, 1);
            std::memcpy(&dat.voltage, data + 26, 2);
            std::memcpy(&dat.vtolstate, data + 28, 2);
            report_imc.estate.lat = (double) (dat.lat);
            report_imc.estate.lon =  (double) (dat.lon);
            report_imc.estate.depth = dat.depth;
            report_imc.estate.phi = ((double)dat.roll) /100.0;
            report_imc.estate.theta = ((double)dat.pitch ) /100.0;
            report_imc.estate.psi = ((double)dat.yaw) /100.0;
            report_imc.estate.alt = ((double)dat.alt) /10;
            report_imc.estate.height = ((double)dat.height) /10.0;
            report_imc.fuel_level.value = (double)dat.fuel_level;
            report_imc.fuel_level.confidence = (double)dat.fuel_conf;
            report_imc.plan_progress.plan_progress = (double) (dat.progress);
            report_imc.air_speed.value =  ((double)(dat.air_speed)) /100.0;
            report_imc.vehicle_state.op_mode = dat.vehicle_state;
            report_imc.vehicle_state.setSourceEntity(dat.vehicle_state_ent);
            report_imc.batt_voltage.value = ((double)dat.voltage)/10;
            report_imc.vtolstate.state = dat.vtolstate;

            std::string src_system = safeLookup(rxmsg.src_id);
            uint16_t imc_src = m_task->resolveSystemName(src_system);

            report_imc.estate.setSource(imc_src);
            report_imc.plan_progress.setSource(imc_src);
            report_imc.fuel_level.setSource(imc_src);
            report_imc.air_speed.setSource(imc_src);
            report_imc.vehicle_state.setSource(imc_src);
            report_imc.batt_voltage.setSource(imc_src);
            report_imc.vtolstate.setSource(imc_src);
            m_task->dispatch(report_imc.estate);
            m_task->dispatch(report_imc.plan_progress);
            m_task->dispatch(report_imc.fuel_level);
            m_task->dispatch(report_imc.air_speed);
            m_task->dispatch(report_imc.vehicle_state);
            m_task->dispatch(report_imc.batt_voltage);
            m_task->dispatch(report_imc.vtolstate);
            rxmsg.state = MSG_PROCESSED;
            return true;
       	 }
         rxmsg.state = MSG_ERROR;
       	 return false;
       }
       void
       recivedDataTimeOut()
       {
        if (acquisition_Rx_Frame.state == MSG_IN_PARTS && acquisition_Rx_Frame.msg_timer.overflow())
        {
           m_task->war("Time for message reception timeout");
           acquisition_Rx_Frame.clear();
        }
       }
       void
       recivedDataToDecode(std::string& rxData)
       {
         updateRxSync();

         XxMesg rx_test;
         if (!rx_test.testDecodeHeader(rxData))
         {
            m_task->err("RxData decoe error  %s ", rx_test.error_msg.c_str());
            return;
         }
          m_task->trace("RX header ak:%d code:%d src:%d des:%d npart: %d sync:%d n_parts: %d, first_part: %d ",
           (int)rx_test.acknowledge, (int) rx_test.code, rx_test.src_id, rx_test.des_id,
           (int) rx_test.npart , rx_test.sync, (int) rx_test.n_parts, rx_test.start_part);

         if(!rx_test.npart)
         {
          // new msg clean garbage
          acquisition_Rx_Frame.clear();
         }

         if(local_rx_sync != rx_test.sync && rx_test.code != CODE_AK)
         {
          m_task->trace("local_rx_sync % d rx_test.sync %d",local_rx_sync,rx_test.sync);
          updateRxSync(rx_test.sync);
          m_task->inf("previous message(s) lost or first sync");
         }

         if(rx_test.npart && rx_test.start_part)
         {
          // begin of a multiple part msg
          acquisition_Rx_Frame.clear();
          m_task->debug("RX start multiple  clear buffer");
         }

         if (rx_test.npart && !rx_test.start_part && !acquisition_Rx_Frame.start_part )
         {
           m_task->inf("Rx Part of message ignored because start was not detected");
          return ;
         }

         acquisition_Rx_Frame.decodeHeader(rxData);

         if(!acquisition_Rx_Frame.npart)
         {
          m_rx_msg_queue.push(acquisition_Rx_Frame);
          acquisition_Rx_Frame.clear();
         }
         else if (acquisition_Rx_Frame.start_part)
         {
          m_task->debug("RX multiple msg, state: %d  end_sync; %d error_mmessage: %s", (int)acquisition_Rx_Frame.state,
            (int) acquisition_Rx_Frame.n_parts_end_sync, acquisition_Rx_Frame.error_msg.c_str() );

           if(acquisition_Rx_Frame.state == MSG_IN_PARTS_ERR)
           {
             //parts was lost
            if (acquisition_Rx_Frame.sync == acquisition_Rx_Frame.n_parts_end_sync)
            {
              acquisition_Rx_Frame.clear();
               m_task->debug("RX multiple parts was lost  clear buffer");
              return;
            }
           }
           if(acquisition_Rx_Frame.state == MSG_IN_PARTS &&
            acquisition_Rx_Frame.sync == acquisition_Rx_Frame.n_parts_end_sync)
           {
            //last part and msg state is ok
             std::string tmphex = String::toHex( acquisition_Rx_Frame.msg);
             m_task->debug("new RX message queue: %s",tmphex.c_str());

             m_rx_msg_queue.push(acquisition_Rx_Frame);
             acquisition_Rx_Frame.clear();
           }
         }
       }

       bool
       anyDataToProcess(void)
       {
         //verify  queue to read
         if(m_rx_msg_queue.empty())
             return false;

         m_task->trace("Rx queue size %d:", (int) m_rx_msg_queue.size() );
         m_rx_msg = m_rx_msg_queue.front();
         m_rx_msg_queue.pop();
       	 switch (m_rx_msg.code)
       	 {
       	 	  case CODE_REPORT:
       	 	   if ( !reportDecode(m_rx_msg))
       	 	 	  m_task->err("rxData is invalid wrong size");
              break;
            case CODE_IMC:
                recvImcMessage(m_rx_msg);
              break;
            case CODE_AK:
              // data transmition reciver side
              m_task->debug("AK to message trasmition");
              if(m_rx_msg.sync== m_tx_mesg.sync)
              {
                m_tx_telemetry_State = IDLE;
                m_tx_mesg.state = MSG_AK;
                m_tx_mesg.telemetry_imc_status.status= IMC::TelemetryMsg::TM_DONE;
                m_tx_mesg.telemetry_imc_status.acknowledge = IMC::TelemetryMsg::TM_AK;
                m_task->dispatch(m_tx_mesg.telemetry_imc_status);
                m_task->debug("AK  dispatch");
              }

              break;

             default: return false;
         }
         //data reciver side
         if(m_rx_msg.state == MSG_PROCESSED && m_rx_msg.acknowledge)
         {
           sendAKtoRXMsg();
         }

         return true;
       }


       bool
       buzyStateMachine(std::string& txData)
       {
        bool new_part= false;
          m_task->trace("m_tx_mesg state %d ", (int) m_tx_mesg.state);
         if( (m_tx_mesg.state == WAITING_ACKN && m_tx_mesg.acknowledge ) || m_tx_mesg.state == MSG_IN_PARTS)
         {

           if (m_tx_mesg.msg_timer.overflow())
           {
             m_tx_mesg.state = MSG_NAK;
             m_tx_telemetry_State = IDLE;
             m_tx_mesg.telemetry_imc_status.status= IMC::TelemetryMsg::TM_EXPIRED;
             m_task->dispatch(m_tx_mesg.telemetry_imc_status);
             m_task->war("TX msg not AK");
             return false;
           }

         }

         if(m_tx_mesg.state == MSG_IN_PARTS)
         {

           if(m_tx_mesg.msg_multi_timer.overflow())
           {

             m_tx_mesg.msg_multi_timer.setTop(MAX_MESSAGE_PERIOD*4);
             //send next part
             updateTxSync();
             m_tx_mesg.encodeHeader(local_tx_sync, m_max_packet_size);
             txData = m_tx_mesg.str_header + m_tx_mesg.msg;
             new_part = true;
             m_task->trace("TX Next msg part m_tx_mesg.n_parts_status %d m_tx_mesg.n_parts %d local_tx_sync %d",
              (int) m_tx_mesg.n_parts_status, (int) m_tx_mesg.n_parts, (int) local_tx_sync);
           }

           if(m_tx_mesg.n_parts_status == m_tx_mesg.n_parts)
           {
             if (m_tx_mesg.acknowledge)
             {
               m_tx_mesg.state = WAITING_ACKN;
             }
             else
             {
               m_tx_telemetry_State = IDLE;
               m_tx_mesg.state = MSG_TRANSMIT;
             }
           }
           if (new_part)
           {
            return true;
           }
         }
         else if(m_tx_mesg.state == MSG_TRANSMIT)
         {
           m_tx_telemetry_State = IDLE;
         }
         return false;
       }
       void
       sendAKtoRXMsg(void)
       {
         XxMesg tx_ak_mesg;
         updateTxSync();
         tx_ak_mesg.encodeHeader(CODE_AK,systemID, m_rx_msg.src_id, m_rx_msg.sync, false, m_max_packet_size,-1);
         tx_ak_mesg.state = MSG_QUEUE;
         m_tx_msg_queue.push(tx_ak_mesg);
         //for debug only
         std::string tmp0 =String::toHex(tx_ak_mesg.str_header);
         m_task->trace("AK header : %s", tmp0.c_str());
       }

       int
       anyDatatosend(std::string& txData)
       {
         // check Tx current msg
         if(m_tx_telemetry_State == BUZY)
         {
          m_task->trace("TX BUZY");
           if(buzyStateMachine(txData))
           {
             return true;
           }
           else
           {
             return false;
           }

         }

         if( m_tx_telemetry_State == IDLE)
         {
           //if last trasmition is done
           if(m_tx_mesg.state == MSG_TRANSMIT || m_tx_mesg.state == MSG_NAK ||
              m_tx_mesg.state == MSG_AK || m_tx_mesg.state == MSG_ERROR)
           {
             //verify queue to send
             if(m_tx_msg_queue.empty())
             {
               imc_TelemetryMsg_tx();
               return false;
             }
             //something in the queue
             m_task->trace("tx queue sixe %d:", (int) m_tx_msg_queue.size() );
             m_tx_mesg = m_tx_msg_queue.front();
             m_tx_msg_queue.pop();
             if (m_tx_mesg.error)
             {
               m_task->err("%s",m_tx_mesg.error_msg.c_str());
               return false;
             }

             //for debug only
             m_task->trace("TX header ak:%d code:%d src:%d des:%d npart: %d sync:%d n_parts: %d first_part: %d " ,
                           (int)m_tx_mesg.acknowledge, (int) m_tx_mesg.code,
                           m_tx_mesg.src_id, m_tx_mesg.des_id, (int) m_tx_mesg.npart
                           , m_tx_mesg.sync, m_tx_mesg.n_parts, (int)  m_tx_mesg.start_part);
             std::string tmp = String::toHex(m_tx_mesg.str_header);
             std::string tmp2 = String::toHex(m_tx_mesg.msg_compl);
             std::string tmp3 = String::toHex(m_tx_mesg.msg);
             m_task->trace("header : %s \n\r msg_compl: %s , msg: %s",
                           tmp.c_str(), tmp2.c_str(), tmp3.c_str());
             //end debug

             //telemetry msg to send
             txData = m_tx_mesg.str_header + m_tx_mesg.msg;
             m_tx_telemetry_State = BUZY;
             //request to send
             return true;
           }
         }
        	return false;
       }


       void
       updateTxState()
       {
          if (m_tx_mesg.state == WAITING_ACKN)
            return;

          if(m_tx_mesg.acknowledge &&  !m_tx_mesg.npart)
          {
            //if single msg and nead to waite for AK
             m_tx_mesg.state = WAITING_ACKN;
          }
          else if (m_tx_mesg.state == MSG_QUEUE && !m_tx_mesg.npart)
          { //if is single msg and sent for radio Driver
            m_tx_mesg.state = MSG_TRANSMIT;
            m_tx_mesg.telemetry_imc_status.status= IMC::TelemetryMsg::TM_DONE ;
            m_task->dispatch(m_tx_mesg.telemetry_imc_status);
          }
          if(m_tx_mesg.npart)
          {
            m_tx_mesg.state = MSG_IN_PARTS;
            m_tx_mesg.telemetry_imc_status.status= IMC::TelemetryMsg::TM_TRANSMIT ;
            m_task->dispatch(m_tx_mesg.telemetry_imc_status);
          }
       }

       void
       recvImcMessage(XxMesg& rxmsg)
       {
          m_task->debug("Parsing message received via Telemetry message.");
          m_task->debug(" RX IMC SIZE %d", (int) m_rx_msg.msg.size());
         try
         {

           uint16_t msg_type;
            const char* data = rxmsg.msg.data();
           std::memcpy(&msg_type, data, sizeof(uint16_t));
           m_task->debug(" RX IMC TYPE %d", (int) msg_type);
           Message *m = IMC::Factory::produce(msg_type);
           if (m == NULL)
           {
             m_task->err("Invalid message type received: %d", msg_type);
             rxmsg.state = MSG_ERROR;
              m_tx_mesg.telemetry_imc_status.status= IMC::TelemetryMsg::TM_INV_SIZE;
             return;
           }

           std::string src_system = safeLookup(rxmsg.src_id);
           uint16_t imc_src = m_task->resolveSystemName(src_system);
           src_system = safeLookup(rxmsg.des_id);
           uint16_t imc_dst =  m_task->resolveSystemName(src_system);
           m->setSource(imc_src);
           m->setDestination(imc_dst);
           m->setTimeStamp(rxmsg.timestamp);
           m->deserializeFields((const unsigned char *) &data[2], rxmsg.msg.size()-2);
           m_task->dispatch(m, DF_KEEP_TIME | DF_LOOP_BACK);
           m_task->debug("Telemetry IMC message successfully parsed as '%s'.", m->getName());
           rxmsg.state = MSG_PROCESSED;
         }
         catch (std::exception& ex) {
           m_task->err("Error parsing raw Rx message from Telemetry : %s.", ex.what());
         }
       }

       unsigned
       lookupSystemAddress(const std::string& name ,unsigned& adrr)
       {
         MapName::iterator itr = m_radio_names.find(name);
         if (itr == m_radio_names.end())
           return false;

         adrr =itr->second;
         return true;
       }

       std::string
       lookupSystemName(unsigned addr)
       {
         MapAddr::iterator itr = m_radio_addrs.find(addr);
         if (itr == m_radio_addrs.end())
           throw std::runtime_error("unknown system address");
         return itr->second;
       }

       std::string
       safeLookup(unsigned addr)
       {
         try
         {
           return lookupSystemName(addr);
         }
         catch (...)
         { }

         return "unknown";
       }
    private:

      //! Pointer to task.
      Tasks::Task* m_task;
      RepotImcData m_repotdata;
      XxMesg acquisition_Rx_Frame;
      XxMesg m_tx_mesg;
      XxMesg m_rx_msg;
      std::queue<XxMesg> m_tx_msg_queue;
      std::queue<XxMesg> m_rx_msg_queue;
      std::queue<IMC::TelemetryMsg>  imc_TelemetryMsg_queue;
      std::queue<double> imc_time;
      TelemetryState m_tx_telemetry_State;
      TelemetryState m_rx_telemetry_State;
      uint8_t local_tx_sync;
      uint8_t local_rx_sync;
      uint8_t systemID;
      int m_max_packet_size;
      //! Map of radio modems by name.
      MapName m_radio_names;
      //! Map of radio modems by address.
      MapAddr m_radio_addrs;

    };
  }
}

#endif
