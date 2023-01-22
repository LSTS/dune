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
// Author: Raúl Sáez                                                        *
//***************************************************************************

#ifndef TRANSPORTS_SEATRAC_DEBUG_MSG_HPP_INCLUDED_
#define TRANSPORTS_SEATRAC_DEBUG_MSG_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "MsgTypes.hpp"

namespace Transports
{
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    //! Ecofix data type debug print.
    //! @param[in] msg_name string with name of message.
    //! @param[in] aco_fix data pointer.
    //! @param[in] task parent task.
    void
    printAcoFixData(std::string msg_name, Acofix_t* aco_fix, Tasks::Task* task = NULL)
    {
      task->debug("data_Beacon.%s.aco_fix.dest_id        %d ",
                  msg_name.c_str(), aco_fix->dest_id);
      task->debug("data_Beacon.%s.aco_fix.src_id         %d ",
                  msg_name.c_str(), aco_fix->src_id);
      task->debug("data_Beacon.%s.aco_fix.flags          %d ",
                  msg_name.c_str(), aco_fix->flags);
      task->debug("data_Beacon.%s.aco_fix.amsgtype_e     %d ",
                  msg_name.c_str(), aco_fix->amsgtype_e);
      task->debug("data_Beacon.%s.aco_fix.attitude_yaw   %d ",
                  msg_name.c_str(), aco_fix->attitude_yaw);
      task->debug("data_Beacon.%s.aco_fix.attitude_pitch %d ",
                  msg_name.c_str(), aco_fix->attitude_pitch);
      task->debug("data_Beacon.%s.aco_fix.attitude_roll  %d ",
                  msg_name.c_str(), aco_fix->attitude_roll);
      task->debug("data_Beacon.%s.aco_fix.depth_local    %d ",
                  msg_name.c_str(), aco_fix->depth_local);
      task->debug("data_Beacon.%s.aco_fix.vos            %d ",
                  msg_name.c_str(), aco_fix->vos);
      task->debug("data_Beacon.%s.aco_fix.rssi           %d ",
                  msg_name.c_str(), aco_fix->rssi);

      // Range fields.
      if (aco_fix->outputflags_list[0])
      {
        task->debug("data_Beacon.%s.aco_fix.range_count  %d ",
                    msg_name.c_str(), aco_fix->range_count);
        task->debug("data_Beacon.%s.aco_fix.range_time   %d ",
                    msg_name.c_str(), aco_fix->range_time);
        task->debug("data_Beacon.%s.aco_fix.range_dist   %d ",
                    msg_name.c_str(), aco_fix->range_dist);
      }

      // USBL fields.
      if (aco_fix->outputflags_list[1])
      {
        task->debug("data_Beacon.%s.aco_fix.usbl_channels %d",
                    msg_name.c_str(), aco_fix->usbl_channels);

        for (int i = 0; i < aco_fix->usbl_channels; i++)
          task->debug("data_Beacon.%s.aco_fix.usbl_rssi[i]  %d",
                      msg_name.c_str(), aco_fix->usbl_rssi[i]);

        task->debug("data_Beacon.%s.aco_fix.usbl_azimuth    %d",
                    msg_name.c_str(), aco_fix->usbl_azimuth);
        task->debug("data_Beacon.%s.aco_fix.usbl_elevation  %d",
                    msg_name.c_str(), aco_fix->usbl_elevation);
        task->debug("data_Beacon.%s.aco_fix.usbl_fit_error  %d",
                    msg_name.c_str(), aco_fix->usbl_fit_error);
      }

      // Position fields.
      if (aco_fix->outputflags_list[2])
      {
        task->debug("data_Beacon.%s.aco_fix.position_easting  %ld",
                    msg_name.c_str(), (long int) aco_fix->position_easting);
        task->debug("data_Beacon.%s.aco_fix.position_northing %ld",
                    msg_name.c_str(), (long int) aco_fix->position_northing);
        task->debug("data_Beacon.%s.aco_fix.position_depth    %ld",
                    msg_name.c_str(), (long int) aco_fix->position_depth);
      }
    }

    //! Msg Debug print
    //! @param[in] message_type type of message.
    //! @param[in] data_Beacon data structure.
    //! @param[in] task parent task.
    void
    printDebugFunction(unsigned message_type, DataSeatrac& data_Beacon,
                       Tasks::Task* task = NULL)
    {
      switch(message_type)
      {
        case CID_STATUS:
          task->spew(" MESSAGE CID_STATUS");
          task->spew("data_Beacon.cid_status_msg.output_flags %d",
                     data_Beacon.cid_status_msg.output_flags);
          task->spew("data_Beacon.cid_status_msg.timestamp    %f",
                     (float)((int)data_Beacon.cid_status_msg.timestamp) / 1000);

          // Environment.
          if (data_Beacon.cid_status_msg.outputflags_list[0])
          {
            task->spew("data_Beacon.cid_status_msg.environment_supply %d",
                       data_Beacon.cid_status_msg.environment_supply);
            task->spew("data_Beacon.cid_status_msg.environment_temperature/10 %f \u00B0C",
                       data_Beacon.cid_status_msg.environment_temperature / 10.0);
            task->spew("data_Beacon.cid_status_msg.environment_pressure %d mbar",
                       data_Beacon.cid_status_msg.environment_pressure);
            task->spew("data_Beacon.cid_status_msg.environment_depth/10 %f m",
                       data_Beacon.cid_status_msg.environment_depth / 10.0);
            task->spew("data_Beacon.cid_status_msg.environmentVos/10 %f m/s",
                       data_Beacon.cid_status_msg.environment_vos / 10.0);
          }

          // Attitude.
          if (data_Beacon.cid_status_msg.outputflags_list[1])
          {
            task->spew("data_Beacon.cid_status_msg.attitude_yaw/10 %d",
                       data_Beacon.cid_status_msg.attitude_yaw / 10);
            task->spew("data_Beacon.cid_status_msg.attitude_pitch/10 %d",
                       data_Beacon.cid_status_msg.attitude_pitch / 10);
            task->spew("data_Beacon.cid_status_msg.attitude_roll/10 %d",
                       data_Beacon.cid_status_msg.attitude_roll / 10);
          }

          // Mag cal.
          if (data_Beacon.cid_status_msg.outputflags_list[2])
          {
            task->spew("data_Beacon.cid_status_msg.mag_cal_buf %d",
                       (int) data_Beacon.cid_status_msg.mag_cal_buf);
            task->spew("data_Beacon.cid_status_msg.mag_cal_valid %d",
                       data_Beacon.cid_status_msg.mag_cal_valid);
            task->spew("data_Beacon.cid_status_msg.mag_cal_age %d",
                       data_Beacon.cid_status_msg.mag_cal_age);
            task->spew("data_Beacon.cid_status_msg.mag_cal_fit %d",
                       (int) data_Beacon.cid_status_msg.mag_cal_fit);
          }

          // Acc cal.
          if (data_Beacon.cid_status_msg.outputflags_list[3])
          {
            task->spew("data_Beacon.cid_status_msg.acc_lim_min_y %d",
                       data_Beacon.cid_status_msg.acc_lim_min_y);
            task->spew("data_Beacon.cid_status_msg.acc_lim_min_z %d",
                       data_Beacon.cid_status_msg.acc_lim_min_z);
            task->spew("data_Beacon.cid_status_msg.acc_lim_min_x %d",
                       data_Beacon.cid_status_msg.acc_lim_min_x);
            task->spew("data_Beacon.cid_status_msg.acc_lim_max_x %d",
                       data_Beacon.cid_status_msg.acc_lim_max_x);
            task->spew("data_Beacon.cid_status_msg.acc_lim_max_y %d",
                       data_Beacon.cid_status_msg.acc_lim_max_y);
            task->spew("data_Beacon.cid_status_msg.acc_lim_max_z %d",
                       data_Beacon.cid_status_msg.acc_lim_max_z);
          }

          // AHRS raw data.
          if (data_Beacon.cid_status_msg.outputflags_list[4])
          {
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_acc_x %d",
                       data_Beacon.cid_status_msg.ahrs_raw_acc_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_acc_y %d",
                       data_Beacon.cid_status_msg.ahrs_raw_acc_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_acc_z %d",
                       data_Beacon.cid_status_msg.ahrs_raw_acc_z);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_mag_x %d",
                       data_Beacon.cid_status_msg.ahrs_raw_mag_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_mag_y %d",
                       data_Beacon.cid_status_msg.ahrs_raw_mag_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_mag_z %d",
                       data_Beacon.cid_status_msg.ahrs_raw_mag_z);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_gyro_x %d",
                       data_Beacon.cid_status_msg.ahrs_raw_gyro_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_gyro_y %d",
                       data_Beacon.cid_status_msg.ahrs_raw_gyro_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_raw_gyro_z %d",
                       data_Beacon.cid_status_msg.ahrs_raw_gyro_z);
          }

          // AHRS computed data.
          if (data_Beacon.cid_status_msg.outputflags_list[5])
          {
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_acc_x %f",
                       data_Beacon.cid_status_msg.ahrs_comp_acc_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_acc_y %f",
                       data_Beacon.cid_status_msg.ahrs_comp_acc_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_acc_z %f",
                       data_Beacon.cid_status_msg.ahrs_comp_acc_z);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_mag_x %f",
                       data_Beacon.cid_status_msg.ahrs_comp_mag_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_mag_y %f",
                       data_Beacon.cid_status_msg.ahrs_comp_mag_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_mag_z %f",
                       data_Beacon.cid_status_msg.ahrs_comp_mag_z);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_gyro_x %f",
                       data_Beacon.cid_status_msg.ahrs_comp_gyro_x);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_gyro_y %f",
                       data_Beacon.cid_status_msg.ahrs_comp_gyro_y);
            task->spew("data_Beacon.cid_status_msg.ahrs_comp_gyro_z %f",
                       data_Beacon.cid_status_msg.ahrs_comp_gyro_z);
          }
          break;

        case CID_PING_REQ:
          task->debug("MESSAGE  CID_PING_REQ");
          printAcoFixData("cid_ping_req_msg %d",
                          &data_Beacon.cid_ping_req_msg.aco_fix, task);
          break;

        case CID_PING_RESP:  //Message sent when a PING response is received
          task->debug("MESSAGE  CID_PING_RESP");
          printAcoFixData("cid_ping_resp_msg %d",
                          &data_Beacon.cid_ping_resp_msg.aco_fix, task);
          break;

        case CID_PING_ERROR:  //Message sent when a PING response error/timeout
          task->debug("MESSAGE CID_PING_ERROR");
          task->debug("data_Beacon.cid_ping_error_msg.status 0x%02X",
                      (unsigned) data_Beacon.cid_ping_error_msg.status);
          switch(data_Beacon.cid_ping_error_msg.status)
          {
            case CST_XCVR_RESP_TIMEOUT:
              task->debug("CST_XCVR_RESP_TIMEOUT");
              break;
            case CST_XCVR_RESP_WRONG:
              task->debug("CST_XCVR_RESP_WRONG");
              break;
            case CST_XCVR_RESP_ERROR:
              task->debug("CST_XCVR_RESP_ERROR");
              break;
            default:
              break;
          }
          task->debug("data_Beacon.cid_ping_error_msg.beacon_id %d",
                      (int)data_Beacon.cid_ping_error_msg.beacon_id);
          break;

        case CID_PING_SEND:
          task->debug("MESSAGE  CID_PING_SEND ACK");
          task->debug("data_Beacon.cid_ping_send_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_ping_send_msg.status);
          task->debug("data_Beacon.cid_ping_send_msg.beacon_id %d",
                      (int)data_Beacon.cid_ping_send_msg.beacon_id);
          break;

        case CID_DAT_SEND: // Report of CID_DAT_SEND operation
          task->debug("MESSAGE  CID_DAT_SEND ACK ");
          task->debug("data_Beacon.cid_dat_send_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_dat_send_msg.status);
          task->debug("data_Beacon.cid_dat_send_msg.beacon_id %d",
                      (int)data_Beacon.cid_dat_send_msg.beacon_id);
          break;
        case CID_DAT_RECEIVE: //8.3. DAT Protocol Messages

          task->debug("MESSAGE  CID_DAT_RECEIVE ");
          printAcoFixData("cid_dat_receive_msg",
                          &data_Beacon.cid_dat_receive_msg.aco_fix, task);
          task->debug("data_Beacon.cid_dat_receive_msg.ack_flag %d",
                      (int)data_Beacon.cid_dat_receive_msg.ack_flag);
          task->debug("data_Beacon.cid_dat_receive_msg.packet_len %d",
                      (int)data_Beacon.cid_dat_receive_msg.packet_len);
          for (int i = 0; i < (int)data_Beacon.cid_dat_receive_msg.packet_len; i++)
            task->debug("data_Beacon.cid_dat_receive_msg.packet_data[%02d] 0x%02X ", i,
                        (unsigned)(data_Beacon.cid_dat_receive_msg.packet_data[i] & 0xFF));
          break;

        case CID_DAT_ERROR:
          task->debug("MESSAGE  CID_DAT_ERROR ");
          task->debug("data_Beacon.cid_dat_send_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_dat_send_msg.status);
          task->debug("data_Beacon.cid_dat_send_msg.beacon_id %d",
                      data_Beacon.cid_dat_send_msg.beacon_id);
          break;

        case CID_NAV_ERROR :
          task->debug("MESSAGE  CID_NAV_ERROR (msg not decoded) ");
          break;

        case CID_SETTINGS_GET:
          task->debug("MESSAGE  CID_SETTINGS_GET ");
          task->debug("data_Beacon.cid_settings_msg.status_flags %d",
                      data_Beacon.cid_settings_msg.status_flags);
          task->debug("data_Beacon.cid_settings_msg.status_output %d",
                      data_Beacon.cid_settings_msg.status_output);
          task->debug("data_Beacon.cid_settings_msg.uart_main_baud %d",
                      data_Beacon.cid_settings_msg.uart_main_baud);
          task->debug("data_Beacon.cid_settings_msg.uart_aux_baud %d",
                      data_Beacon.cid_settings_msg.uart_aux_baud);
          task->debug("data_Beacon.cid_settings_msg.net_tcp_port %d",
                      data_Beacon.cid_settings_msg.net_tcp_port);
          task->debug("data_Beacon.cid_settings_msg.env_flags %d",
                      data_Beacon.cid_settings_msg.env_flags);
          task->debug("data_Beacon.cid_settings_msg.env_pressure_ofs %d",
                      data_Beacon.cid_settings_msg.env_pressure_ofs);
          task->debug("data_Beacon.cid_settings_msg.env_salinity %d",
                      data_Beacon.cid_settings_msg.env_salinity);
          task->debug("data_Beacon.cid_settings_msg.env_vos %d",
                      data_Beacon.cid_settings_msg.env_vos);
          task->debug("data_Beacon.cid_settings_msg.ahrs_flags %d",
                      data_Beacon.cid_settings_msg.ahrs_flags);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_min_x %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_min_x);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_min_y %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_min_y);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_min_z %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_min_z);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_max_x %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_max_x);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_max_y %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_max_y);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.acc_max_z %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.acc_max_z);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_valid %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_valid);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_x %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_x);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_y %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_y);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_z %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_hard_z);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_x %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_x);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_y %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_y);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_z %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_soft_z);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_field %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_field);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.mag_error %f",
                      data_Beacon.cid_settings_msg.ahrs_cal.mag_error);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_x %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_x);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_y %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_y);
          task->debug("data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_z %d",
                      data_Beacon.cid_settings_msg.ahrs_cal.gyro_offset_z);
          task->debug("data_Beacon.cid_settings_msg.ahrs_yaw_ofs %d",
                      data_Beacon.cid_settings_msg.ahrs_yaw_ofs);
          task->debug("data_Beacon.cid_settings_msg.ahrs_pitch_ofs %d",
                      data_Beacon.cid_settings_msg.ahrs_pitch_ofs);
          task->debug("data_Beacon.cid_settings_msg.ahrs_roll_ofs %d",
                      data_Beacon.cid_settings_msg.ahrs_roll_ofs);
          task->debug("data_Beacon.cid_settings_msg.xcvr_flags %d",
                      data_Beacon.cid_settings_msg.xcvr_flags);
          task->debug("data_Beacon.cid_settings_msg.xcvr_beacon_id %d",
                      data_Beacon.cid_settings_msg.xcvr_beacon_id);
          task->debug("data_Beacon.cid_settings_msg.xcvr_range_tmo %d",
                      data_Beacon.cid_settings_msg.xcvr_range_tmo);
          task->debug("data_Beacon.cid_settings_msg.xcvr_resp_time %d",
                      data_Beacon.cid_settings_msg.xcvr_resp_time);
          task->debug("data_Beacon.cid_settings_msg.xcvr_yaw %d",
                      data_Beacon.cid_settings_msg.xcvr_yaw);
          task->debug("data_Beacon.cid_settings_msg.xcvr_pitch %d",
                      data_Beacon.cid_settings_msg.xcvr_pitch);
          task->debug("data_Beacon.cid_settings_msg.xcvr_roll %d",
                      data_Beacon.cid_settings_msg.xcvr_roll);
          task->debug("data_Beacon.cid_settings_msg.xcvr_posflt_vel %d",
                      data_Beacon.cid_settings_msg.xcvr_posflt_vel);
          task->debug("data_Beacon.cid_settings_msg.xcvr_posflt_ang %d",
                      data_Beacon.cid_settings_msg.xcvr_posflt_ang);
          task->debug("data_Beacon.cid_settings_msg.xcvr_posflt_tmo %d",
                      data_Beacon.cid_settings_msg.xcvr_posflt_tmo);
          break;

        case  CID_NAV_QUERY_REQ:
          task->debug("MESSAGE  CID_NAV_QUERY_REQ");
          printAcoFixData("cid_nav_query_req_msg",
                          &data_Beacon.cid_nav_query_req_msg.aco_fix, task);
          task->debug("data_Beacon.cid_nav_query_req_msg.nav_query_t %d",
                      data_Beacon.cid_nav_query_req_msg.nav_query_t);
          break;

        case CID_XCVR_FIX:
          task->debug("MESSAGE  CID_XCVR_FIX");
          printAcoFixData("cid_xcvr_fix_msg",
                          &data_Beacon.cid_xcvr_fix_msg.aco_fix, task);
          break;

        case CID_SYS_REBOOT:
          task->debug("MESSAGE  CID_SYS_REBOOT");
          task->debug("data_Beacon.cid_sys_reboot_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_sys_reboot_msg.status);
          break;

        case CID_SETTINGS_SET:
          task->debug("MESSAGE  CID_SETTINGS_SET");
          task->debug("data_Beacon.cid_sys_settings_set_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_sys_settings_set_msg.status);
          break;

        case  CID_SETTINGS_SAVE:
          task->debug("MESSAGE  CID_SETTINGS_SAVE");
          task->debug("data_Beacon.cid_settings_save_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_settings_save_msg.status);
          break;

        case CID_NAV_QUERY_SEND:
          task->debug("MESSAGE  CID_NAV_QUERY_SEND");
          task->debug("data_Beacon.cid_settings_save_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_nav_query_send_msg.status);
          break;

        case CID_NAV_QUERY_RESP:
          task->debug("MESSAGE  CID_NAV_QUERY_RESP");
          printAcoFixData("cid_nav_querry_resp_msg",
                          &data_Beacon.cid_nav_querry_resp_msg.aco_fix, task);
          task->debug("data_Beacon.cid_nav_querry_resp_msg.query_flags %d ",
                      data_Beacon.cid_nav_querry_resp_msg.query_flags);
          if (data_Beacon.cid_nav_querry_resp_msg.query_flags_list[0])
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_depth %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_depth);

          if (data_Beacon.cid_nav_querry_resp_msg.query_flags_list[1])
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_supply %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_supply);

          if (data_Beacon.cid_nav_querry_resp_msg.query_flags_list[2])
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_temp %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_temp);

          if (data_Beacon.cid_nav_querry_resp_msg.query_flags_list[3])
          {
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_yaw %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_yaw);
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_pitch %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_pitch);
            task->debug("data_Beacon.cid_nav_querry_resp_msg.remote_roll %d",
                        data_Beacon.cid_nav_querry_resp_msg.remote_roll);
          }
          break;

        case CID_NAV_BEACON_POS_UPDATE:
          task->debug("CID_NAV_BEACON_POS_UPDATE");
          printAcoFixData("cid_nav_beacon_pos_update_msg",
                          &data_Beacon.cid_nav_beacon_pos_update_msg.aco_fix, task);
          task->debug("data_Beacon.cid_nav_beacon_pos_update_msg.beacon_id %d ",
                      data_Beacon.cid_nav_beacon_pos_update_msg.beacon_id);
          task->debug("data_Beacon.cid_nav_beacon_pos_update_msg.position_easting %d ",
                      data_Beacon.cid_nav_beacon_pos_update_msg.position_easting);
          task->debug("data_Beacon.cid_nav_beacon_pos_update_msg.position_northing %d ",
                      data_Beacon.cid_nav_beacon_pos_update_msg.position_northing);
          task->debug("data_Beacon.cid_nav_beacon_pos_update_msg.position_depth %d ",
                      data_Beacon.cid_nav_beacon_pos_update_msg.position_depth);
          break;

        case CID_NAV_BEACON_POS_SEND:
          task->debug("CID_NAV_BEACON_POS_SEND");
          task->debug("data_Beacon.cid_nav_beacon_pos_send_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_nav_beacon_pos_send_msg.status);
          break;

        case CID_NAV_REF_POS_SEND:
          task->debug("CID_NAV_REF_POS_SEND");
          task->debug("data_Beacon.cid_nav_ref_pos_send_msg.status 0x%02X",
                      (unsigned)data_Beacon.cid_nav_ref_pos_send_msg.status);
          break;

        case CID_NAV_REF_POS_UPDATE:
          task->debug("CID_NAV_REF_POS_UPDATE");
          printAcoFixData("cid_nav_ref_pos_update_msg",
                          &data_Beacon.cid_nav_ref_pos_update_msg.aco_fix, task);
          task->debug("data_Beacon.cid_nav_ref_pos_update_msg.beacon_id %d",
                      data_Beacon.cid_nav_ref_pos_update_msg.beacon_id);
          task->debug("data_Beacon.cid_nav_ref_pos_update_msg.position_latitude %d",
                      data_Beacon.cid_nav_ref_pos_update_msg.position_latitude);
          task->debug("data_Beacon.cid_nav_ref_pos_update_msg.position_longitude %d",
                      data_Beacon.cid_nav_ref_pos_update_msg.position_longitude);
          break;

        case CID_SYS_INFO:
          task->debug("CID_SYS_INFO");
          task->debug("data_Beacon.cid_sys_info.seconds %d",
                      data_Beacon.cid_sys_info.seconds);
          task->debug("data_Beacon.cid_sys_info.section %d",
                      data_Beacon.cid_sys_info.section);
          task->debug("data_Beacon.cid_sys_info.hardware.part_number %d",
                      data_Beacon.cid_sys_info.hardware.part_number);
          task->debug("data_Beacon.cid_sys_info.hardware.part_rev %d",
                      data_Beacon.cid_sys_info.hardware.part_rev);
          task->debug("data_Beacon.cid_sys_info.hardware,serial_number %d",
                      data_Beacon.cid_sys_info.hardware.serial_number);
          task->debug("data_Beacon.cid_sys_info.hardware.flags_sys %d",
                      data_Beacon.cid_sys_info.hardware.flags_sys);
          task->debug("data_Beacon.cid_sys_info.hardware.flags_user %d",
                      data_Beacon.cid_sys_info.hardware.flags_user);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.valid %d",
                      data_Beacon.cid_sys_info.boot_firmware.valid);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.part_number %d",
                      data_Beacon.cid_sys_info.boot_firmware.part_number);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.version_maj %d",
                      data_Beacon.cid_sys_info.boot_firmware.version_maj);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.version_min %d",
                      data_Beacon.cid_sys_info.boot_firmware.version_min);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.version_build %d",
                      data_Beacon.cid_sys_info.boot_firmware.version_build);
          task->debug("data_Beacon.cid_sys_info.boot_firmware.checksum %d",
                      data_Beacon.cid_sys_info.boot_firmware.checksum);
          task->debug("data_Beacon.cid_sys_info.main_firmware.valid %d",
                      data_Beacon.cid_sys_info.main_firmware.valid);
          task->debug("data_Beacon.cid_sys_info.main_firmware.part_number %d",
                      data_Beacon.cid_sys_info.main_firmware.part_number);
          task->debug("data_Beacon.cid_sys_info.main_firmware.version_maj %d",
                      data_Beacon.cid_sys_info.main_firmware.version_maj);
          task->debug("data_Beacon.cid_sys_info.main_firmware.version_min %d",
                      data_Beacon.cid_sys_info.main_firmware.version_min);
          task->debug("data_Beacon.cid_sys_info.main_firmware.version_build %d",
                      data_Beacon.cid_sys_info.main_firmware.version_build);
          task->debug("data_Beacon.cid_sys_info.main_firmware.checksum %d",
                      data_Beacon.cid_sys_info.main_firmware.checksum);
          break;

        case CID_XCVR_USBL:
          task->debug("CID_XCVR_USBL");
          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_sig_peak %f",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_sig_peak);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_threshold %f",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_threshold);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_cross_point %d",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_cross_point);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_cross_mag %f",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_cross_mag);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_detect %d",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_detect);

          task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_length %d",
                      data_Beacon.cid_xcvr_usbl_msg.xcor_length);
          for(uint16_t i = 0; i < data_Beacon.cid_xcvr_usbl_msg.xcor_length; i++)
          {
            task->debug("data_Beacon.cid_xcvr_usbl_msg.xcor_data[%d] %f", i,
                        data_Beacon.cid_xcvr_usbl_msg.xcor_data[i]);
          }

          task->debug("data_Beacon.cid_xcvr_usbl_msg.channels %d",
                      data_Beacon.cid_xcvr_usbl_msg.channels);
          for(uint16_t i = 0; i < data_Beacon.cid_xcvr_usbl_msg.channels; i++)
          {
            task->debug("data_Beacon.cid_xcvr_usbl_msg.channel_rssi[%d] %d", i,
                        data_Beacon.cid_xcvr_usbl_msg.channel_rssi[i]);
          }

          task->debug("data_Beacon.cid_xcvr_usbl_msg.baselines %d",
                      data_Beacon.cid_xcvr_usbl_msg.baselines);
          for(uint16_t i = 0; i < data_Beacon.cid_xcvr_usbl_msg.baselines; i++)
          {
            task->debug("data_Beacon.cid_xcvr_usbl_msg.phase_angle[%d] %f", i,
                        data_Beacon.cid_xcvr_usbl_msg.phase_angle[i]);
          }

          task->debug("data_Beacon.cid_xcvr_usbl_msg.signal_azimuth %d",
                      data_Beacon.cid_xcvr_usbl_msg.signal_azimuth);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.signal_elevation %d",
                      data_Beacon.cid_xcvr_usbl_msg.signal_elevation);
          task->debug("data_Beacon.cid_xcvr_usbl_msg.signal_fit_error %f",
                      data_Beacon.cid_xcvr_usbl_msg.signal_fit_error);
          break;

        default:
          task->debug("Beacon MESSAGE  unknown ID: %d", message_type);
          break;
      }
    }

  }
}

#endif
