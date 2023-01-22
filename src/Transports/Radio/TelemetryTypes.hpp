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

#ifndef DUNE_TRANSPORTS_RADIO_TELEMETRYTYPES_HPP_INCLUDED_
#define DUNE_TRANSPORTS_RADIO_TELEMETRYTYPES_HPP_INCLUDED_

#define MAX_MESSAGE_PERIOD 0.1
#define HEADER_SIZE 5
// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <queue>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace Transports
{
  namespace Radio
  {
    using DUNE_NAMESPACES;

    //! This file defines all data structures for telemetry
    //!
    //! @author João Teixeira
    enum TelemetryState
    {
      IDLE,
      BUZY
    };

    enum MsgState
    {
      MSG_NONE,
      MSG_QUEUE,
      MSG_TO_DRIVER,
      MSG_IN_PARTS,
      MSG_IN_PARTS_ERR,
      WAITING_ACKN,
      MSG_TRANSMIT,
      MSG_RECIVING,
      MSG_RECIVED,
      MSG_PROCESSED,
      MSG_NAK,
      MSG_ERROR,
      MSG_AK
    };

    enum Codes
    {
      CODE_UNK = 0x00,
      CODE_REPORT = 0x01,
      CODE_IMC = 0x02,
      CODE_AK = 0x03,
      CODE_RAW = 0x04
    };

    struct RepotImcData
    {

      //! Estimated state.
      IMC::EstimatedState estate;
      //! Plan Progress
      IMC::PlanControlState plan_progress;
      //! Fuel level
      IMC::FuelLevel fuel_level;
      //! Air speed
      IMC::IndicatedSpeed air_speed;
       //!  VehicleState op_mode
      IMC::VehicleState vehicle_state;
      //!t  voltage (max 50v uma casa decimal )
      IMC::Voltage batt_voltage;

      IMC::VtolState vtolstate;

    };

    struct Report
    {
      float lat;
      float lon;
      uint8_t depth;
      int16_t roll;
      int16_t pitch;
      int16_t yaw;
      int16_t alt;
      int16_t height;
      int8_t progress;
      uint8_t fuel_level;
      uint8_t fuel_conf;
      int16_t air_speed;
      uint8_t vehicle_state;
      uint8_t vehicle_state_ent;
      uint16_t voltage;
      uint8_t vtolstate;
    };

     struct XxMesg
    {
      //Telemetry header
      Codes  code;
      bool acknowledge;
      bool npart;
      bool start_part;
      uint8_t sync;
      uint8_t src_id;
      uint8_t des_id;
      uint8_t n_parts;
      //Telemetry header vector
      std::vector<char> header;
      std::string str_header;
      //Telemetry payload
      std::string msg;
      std::string msg_compl;
      //Radio state machine status
      MsgState state;
      bool first_call;
      uint8_t past_sync;
      uint8_t n_parts_status;
      uint16_t n_parts_end_sync;
      bool error;
      double timestamp;
      uint16_t max_data_payload;
      std::string error_msg;
      Time::Counter<double> msg_timer;
      Time::Counter<double> msg_multi_timer;
      //imc dispatch
      IMC::TelemetryMsg telemetry_imc;
      IMC::TelemetryMsg telemetry_imc_status;
      //channel max data packaging

      XxMesg(void)
      {
        clear();
      }

      void
      clear(void)
      {
        first_call = true;
        state = MSG_NONE;
        acknowledge = 0;
        npart = false;
        start_part = false;
        n_parts = 1;
        sync=0;
        past_sync = 0;
        error = false;
        n_parts_status = 0;
        n_parts_end_sync =0;
        src_id = 0;
        des_id = 0;
        error_msg.clear();
        msg.clear();
        msg_compl.clear();
        str_header.clear();
        telemetry_imc.clear();
        max_data_payload=0;
        telemetry_imc_status.clear();
        header.clear();
      }

      void
      setMsgData(std::string msgData)
      {
        msg_compl = msgData;
      }

      void
      encodeHeader(Codes code_t, uint8_t src, uint8_t dst, uint8_t sync_n, bool ak, int max_data_packaging, double ttl)
      {
        code = code_t;
        src_id = src;
        des_id = dst;
        acknowledge = ak;
        encodeHeader(sync_n, max_data_packaging, ttl);
      }

      void
      encodeHeader(uint8_t sync_n, int max_data_packaging, double ttl = -1.0)
      {
        uint8_t tmp = 0;
        sync = sync_n;
        n_parts_status++;
        // bit 8 7 6 code; bit 5 ak ; bit 4 multiple parts; bit 3 first part   2 1 bis not defined
        tmp = (code << 5);
        tmp += (((uint8_t)acknowledge)<< 4);
        if(first_call==true)
        {
          header = std::vector<char>(HEADER_SIZE,0);
          max_data_payload = (max_data_packaging - (HEADER_SIZE*2+4));
          if ( msg_compl.size()*2  > max_data_payload)
          {
            tmp+= ((uint8_t) 1 << 3); // multiple parts
            npart= true;
            tmp+= ((uint8_t) 1 << 2); //1º part start_part
            start_part = true;

            int temp  = (msg_compl.size()*2) / max_data_payload;
            int n_sub_rest = (msg_compl.size()*2) % max_data_payload;
            msg_multi_timer.setTop(MAX_MESSAGE_PERIOD*4);
            if(temp <= 254)
            {
              n_parts = temp; // Header limit
            }
            else
            {
              error =1;
              error_msg = "txData is to big to encode";
            }
            if (n_sub_rest != 0)
            {
              n_parts++;
            }
          }
          else
          {
            n_parts=1;
          }
        }
        else
        {
          tmp+= ((uint8_t) 1 << 3);
          tmp = 0;
          tmp = (code << 5);
          tmp+= ((uint8_t) 1 << 3);
          if (n_parts_status == n_parts)
          {
            tmp += (((uint8_t)acknowledge)<< 4);
          }
        }
        first_call = false;

        if(ttl > 0.0)
         msg_timer.setTop(ttl);

        std::memcpy(&header[0], &tmp, 1);
        // sync number 1byte
        std::memcpy(&header[1], &sync, 1);
        // src  8 bit
        std::memcpy(&header[2], &src_id, 1);
        // des  8 bit
        std::memcpy(&header[3], &des_id, 1);
        // n_parts 8 bit
        std::memcpy(&header[4], &n_parts, 1);

        if(!npart)
        {
          msg = msg_compl;
          std::string header_str(header.begin(),header.end());
          str_header = header_str;
        }
        else
        {
          std::string header_str(header.begin(),header.end());
          str_header = header_str;

          if (n_parts_status == n_parts)
          {
            msg = msg_compl;
          }
          else
          {
            msg.clear();
            msg = msg_compl.substr( 0 ,(max_data_payload / 2 ));
            msg_compl.erase( 0 , (max_data_payload / 2 ));
          }
        }

      }

      bool
      testDecodeHeader(std::string rxData)
      {
       size_t size =  rxData.size();
        if (size < HEADER_SIZE)
        {
          error_msg= "RxData invalid size to read header";
          return false;
        }
        const char* data =rxData.data();
         uint8_t tmp = data[0];
        //code
         uint8_t code_t = ((tmp & 0xE0) >> 5);
        code = (Codes) code_t;
        //multiple parts
        npart =  (bool) ((tmp & 0xF) >> 3);
        //ak
        acknowledge = (bool)((tmp & 0x1F) >> 4);
        // start_part
        start_part = (bool) ((tmp & 0x7) >> 2);
        // sync number 1byte
        sync = data[1];
        // src  8 bit
        src_id = data[2];
        // des  8 bit
        des_id = data[3];
        // n_parts 8 bit
        n_parts = data[4];
       return true;
      }

      bool
      decodeHeader(std::string rxData)
      {
        size_t size =  rxData.size();
        if (size < HEADER_SIZE)
        {
          error_msg= "RxData invalid size to read header";
          return false;
        }
        const char* data =rxData.data();
        uint8_t tmp = data[0];
        //code
        uint8_t code_t = ((tmp & 0xE0) >> 5);
        code = (Codes) code_t;
        //multiple parts
        npart =  (bool) ((tmp & 0xF) >> 3);
        //ak
        if (!start_part)
        {
          acknowledge = (bool)((tmp & 0x1F) >> 4);
          // start_part
          start_part = (bool) ((tmp & 0x7) >> 2);
          msg_timer.setTop((MAX_MESSAGE_PERIOD*4) * data[4] + 1);
        }
        // sync number 1byte
        sync = data[1];
        // src  8 bit
        src_id = data[2];
        // des  8 bit
        des_id = data[3];
        // n_parts 8 bit
        n_parts = data[4];

        if (npart)
        {
          n_parts_status++;
          if(n_parts_status == 1)
          {
            // start of message reception im parts
            n_parts_end_sync = sync + n_parts-1;
            if (n_parts_end_sync > 255)
              n_parts_end_sync= n_parts_end_sync - 255;
            past_sync = sync;
            state = MSG_IN_PARTS;
            msg.clear();
            if (!start_part)
            {
              state = MSG_IN_PARTS_ERR;
              error_msg= "start was not detected";
              return false;
            }
          }
          else
          {
            past_sync = updateSync(past_sync);
            if (sync != past_sync || state == MSG_IN_PARTS_ERR )
            {
              state = MSG_IN_PARTS_ERR;
              error_msg = "MSG_IN_PARTS_ERR";
              //error igonre next msg until the end
              return true;
            }
          }
        }
        if(!npart)
        {
          n_parts_status = 1;
          msg.clear();
          msg = rxData;
          msg.erase(0,5);
        }
        else
        {
          //next part
          rxData.erase(0,5);
          msg += rxData;
        }

       return true;
      }

      uint8_t
      updateSync( uint8_t syncn)
      {
        if(syncn == 255)
           syncn = 0;
         else
           syncn++;
         return syncn;
      }

      void
      rx_to_imc_msg(void)
      {
        //todo
      }

      bool
      imc_to_tx_msg(const IMC::TelemetryMsg* tmsg, uint8_t src , uint8_t dst)
      {
        telemetry_imc= *tmsg;
        telemetry_imc_status.type = IMC::TelemetryMsg::TM_TXSTATUS;
        telemetry_imc_status.req_id = telemetry_imc.req_id;
        telemetry_imc_status.setSource(telemetry_imc.getDestination());
        telemetry_imc_status.setDestination(telemetry_imc.getSource());
        telemetry_imc_status.ttl = telemetry_imc.ttl;
        telemetry_imc_status.code =telemetry_imc.code;

        switch(telemetry_imc.code)
        {
          case IMC::TelemetryMsg::TM_CODE_IMC: code = CODE_IMC;
           break;
          case IMC::TelemetryMsg::TM_CODE_RAW : code =  CODE_RAW;
           break;
          default: code = CODE_UNK;
           break;
        }

        if(code == CODE_UNK)
        {
          telemetry_imc_status.status =  IMC::TelemetryMsg::TM_FAILED;
          return false;
        }

        if(telemetry_imc.acknowledge)
         acknowledge = true;
        else
         acknowledge = false;
        des_id = dst;
        src_id = src;

        std::string data_str(telemetry_imc.data.begin(),telemetry_imc.data.end());
        msg_compl = data_str;

        telemetry_imc_status.status =  IMC::TelemetryMsg::TM_QUEUED;
        return true;
      }

    };


    typedef std::map<std::string, unsigned> MapName;
    typedef std::map<unsigned, std::string> MapAddr;

  }
}

#endif
