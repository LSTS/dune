//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#pragma once

#include <DUNE/IMC.hpp>

#include <stdint.h>
#include <string>

namespace Actuators
{
  //! @author Bernardo Gabriel
  namespace WASABi
  {
    using DUNE::IMC::PowerChannelState;

    //! Default command timeout (seconds).
    static constexpr uint8_t c_cmd_timeout = 2;
    //! Max no reply count before reporting error.
    static constexpr uint8_t c_max_no_rpl_cnt = 5;
    //! Command poll timeout (seconds).
    static constexpr double c_cmd_poll_tmt = 1.0;
    //! Default data timeout (seconds).
    static constexpr double c_default_data_tmt = 5.0;
    //! Hearbeat period (seconds).
    static constexpr uint8_t c_hb_period = 2;
    //! Max expected hearbeat timeout (seconds).
    static constexpr uint8_t c_hb_max_tmt = 5;
    //! Data command id.
    static constexpr const char* c_cmd_data = "DATA";
    //! Control power channel command id.
    static constexpr const char* c_cmd_power_ctl = "POWER";
    //! Acknowledge command id.
    static constexpr const char* c_cmd_ack = "ACKN";
    //! Not acknowledge command id.
    static constexpr const char* c_cmd_nack = "NACK";
    //! Synchronize command id.
    static constexpr const char* c_cmd_sync = "SYNC";
    //! Heartbeat command id.
    static constexpr const char* c_cmd_hb = "HEART";
    //! Valve command id.
    static constexpr const char* c_cmd_valve_ctl = "VALVE";
    //! Step command id.
    static constexpr const char* c_cmd_step_ctl = "STEP";
    //! Number of power channels.
    static constexpr uint8_t c_num_pwr_chs = 8;
    //! Maximum voltage for water level low.
    static constexpr float c_max_wl_low_voltage = 0.5;
    //! Minimum voltage for water level high.
    static constexpr float c_min_wl_high_voltage = 2.5;
    //! Total of water level sensors.
    static constexpr uint8_t c_num_wl_sensors = 2;
    //! Total of water flow sensors.
    static constexpr uint8_t c_num_wf_sensors = 2;
    //! Convert L/min to m*m*m/s.
    static constexpr double c_lmin_to_m3s = 1.0f / 60000.0f;
    //! OSLO number of valves.
    constexpr uint8_t c_oslo_num_pwr_chs = 3;
    //! Total of endpoints.
    constexpr uint8_t c_num_endpoints = 2;

    //! WASABi arguments.
    struct WASABiArguments
    {
      //! IO port device.
      std::string io_dev;
      //! Output data rate.
      uint8_t odr;
      //! Power channel labels.
      std::string pwr_ch_names[c_num_pwr_chs];
      //! Power channel states.
      bool pwr_ch_states[c_num_pwr_chs];
      //! OSLO Power channel labels.
      std::string oslo_pwr_ch_names[c_oslo_num_pwr_chs];
      //! OSLO Power channel states.
      bool oslo_pwr_ch_states[c_oslo_num_pwr_chs];
      //! Water Level gpio labels.
      std::string wl_gpios_labels[c_num_wl_sensors];
      //! Water Flow entity labels.
      std::string wf_elabels[c_num_wf_sensors];
      //! Endpoint labels.
      std::string endpoint_labels[c_num_endpoints];
      //! Warning for water level sensors malfunction.
      bool wl_malfunction_warning;
      //! OSLO entity label.
      std::string oslo_elabel;
    };

    //! OSLO arguments.
    struct OSLOArguments
    {
      //! Power channel labels.
      std::string pwr_ch_names[c_oslo_num_pwr_chs];
      //! Power channel states.
      bool pwr_ch_states[c_oslo_num_pwr_chs];
      //! Endpoint labels.
      std::string endpoint_labels[c_num_endpoints];
      //! Step id.
      uint8_t step_id;
    };

    struct PowerChannel
    {
      //! Power channel id.
      uint8_t id;
      //! Power channel state.
      PowerChannelState pcs;
      //! Initial state.
      bool init_state;
    };
  }
}
