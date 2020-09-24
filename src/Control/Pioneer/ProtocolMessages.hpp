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
// Author: Paulo Dias                                                       *
//***************************************************************************

#ifndef CONTROL_PIONEER_PROTOCOL_MESSAGES_HPP_INCLUDED_
#define CONTROL_PIONEER_PROTOCOL_MESSAGES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Control
{
  namespace Pioneer
  {
    namespace ProtocolMessages
    {
      enum Pioneer_Msg_Version
      {
        PIONEER_MSG_VERSION_1 = 1,
        PIONEER_MSG_VERSION_2 = 2,
      };

      enum Pioneer_Msg_Version_1_Msg_Code
      {
        PIONEER_MSG_VERSION_1_TELEMETRY = 1,
      };

      enum Pioneer_Msg_Version_2_Msg_Code
      {
        PIONEER_MSG_VERSION_2_TELEMETRY = 1,
        PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION  = 2,
        PIONEER_MSG_VERSION_2_CUSTOM_IMU  = 9,
      };

      enum Pioneer_Msg_Version_Plus_Msg_Code
      {
        PIONEER_MSG_VERSION_1_TELEMETRY_CODE  = (PIONEER_MSG_VERSION_1 << 8) + PIONEER_MSG_VERSION_1_TELEMETRY,
        PIONEER_MSG_VERSION_2_TELEMETRY_CODE  = (PIONEER_MSG_VERSION_2 << 8) + PIONEER_MSG_VERSION_2_TELEMETRY,
        PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE =  (PIONEER_MSG_VERSION_2 << 8) + PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION,
        PIONEER_MSG_VERSION_2_CUSTOM_IMU_CODE =  (PIONEER_MSG_VERSION_2 << 8) + PIONEER_MSG_VERSION_2_CUSTOM_IMU,
      };

      //! "dtype": "uint8_t"
      enum Pioneer_Error_Flags_Bitmask
      {
        //! "component": "pmu",
        //! "description": "Did not receive ack from pmu"
        PIONEER_ERROR_FLAGS_ERR_PMU_COMM_ACK = 0x00000001,
        //! "component": "pmu",
        //! "description": "Pmu streaming timeout"
        PIONEER_ERROR_FLAGS_ERR_PMU_COMM_STREAM = 0x00000002,
        //! "component": "sensor_depth",
        //! "description": "Failed to read depth sensor"
        PIONEER_ERROR_FLAGS_ERR_DEPTH_READ = 0x00000004,
        //! "component": "sensor_depth",
        //! "description": "Depth read spike detected"
        PIONEER_ERROR_FLAGS_ERR_DEPTH_SPIKE = 0x00000008,
        //! "component": "sensor_inner_pressure",
        //! "description": "Failed to read inner pressure sensor"
        PIONEER_ERROR_FLAGS_ERR_INNER_PRESSURE_READ = 0x00000010,
        //! "component": "sensor_inner_pressure",
        //! "description": "Inner pressure read spike detected"
        PIONEER_ERROR_FLAGS_ERR_INNER_PRESSURE_SPIKE = 0x00000020,
        //! "component": "compass",
        //! "description": "Invalid compass calibration"
        PIONEER_ERROR_FLAGS_ERR_COMPASS_CALIBRATION = 0x00000040,
        //! "component": "tilt",
        //! "description": "Invalid tilt calibration"
        PIONEER_ERROR_FLAGS_ERR_TILT_CALIBRATION = 0x00000080,
      };

      struct __attribute__((__packed__)) DataVersion1Telemetry
      {
        uint8_t version = 1; // Protocol version []
        uint8_t command_type = 1; //  []
        uint32_t time; //  []
        double rt_clock; //  []
        uint64_t error_flags; //  []
        uint64_t debug_flags; //  []
        double user_lat; //  []
        double user_lon; //  []
        int64_t total_space; //  []
        int64_t free_space; //  []
        int16_t camera_record_time; //  []
        int16_t temp_bottom; //  []
        int16_t temp_water; //  []
        int16_t temp_top; //  []
        int16_t temp_cpu; //  []
        uint8_t lights_upper; //  []
        uint8_t lights_lower; //  []
        int16_t dive_time; //  []
        int16_t control_mode; //  []
        uint16_t pressure_top; //  []
        int32_t depth; //  []
        int32_t depth_reference; //  []
        float heading_reference; //  []
        float roll; //  []
        float pitch; //  []
        float yaw; //  []
        int16_t imucal_samples; //  []
        uint16_t battery_temp; //  []
        uint16_t battery_voltage; //  []
        int32_t battery_current; //  []
        int32_t battery_average_current; //  []
        uint8_t battery_state_of_charge_rel; //  []
        uint16_t battery_remaining_capacity; //  []
        uint16_t battery_full_charge_capacity; //  []
        uint16_t battery_run_time_to_empty; //  []
        uint16_t battery_avg_time_to_empty; //  []
        uint16_t battery_avg_time_to_full; //  []
        uint16_t battery_at_rate_time_to_full; //  []
        uint16_t battery_at_rate_time_to_empty; //  []
        uint16_t battery_charging_current; //  []
        uint16_t battery_charging_voltage; //  []
        uint16_t battery_status; //  []
        uint16_t battery_cell_voltage_1; //  []
        uint16_t battery_cell_voltage_2; //  []
        uint16_t battery_cell_voltage_3; //  []
        uint16_t battery_cell_voltage_4; //  []
        int16_t battery_cell_temperature_1; //  []
        int16_t battery_cell_temperature_2; //  []
        int16_t battery_cell_temperature_3; //  []
        int16_t battery_cell_temperature_4; //  []
        uint8_t battery_max_error; //  []
        uint8_t battery_state_of_charge_abs; //  []
        uint16_t battery_cycle_count; //  []
        uint16_t battery_design_capacity; //  []
        uint16_t battery_manufacture_date; //  []
        uint16_t battery_serial_number; //  []
      };

      struct __attribute__((__packed__)) DataVersion2Telemetry
      {
        uint8_t version = 2; // Protocol version []
        uint8_t command_type = 1; // Command type []
        uint32_t time; // Time [ms]
        double rt_clock; // Real-time clock [s]
        uint64_t error_flags; // Error flags (bitmask) []
        uint64_t debug_flags; // Debug flags (bitmask) []
        double user_lat; // Latitude [dec °]
        double user_lon; // Longitude [dec °]
        int64_t total_space; // Total space on data partition [bytes]
        int64_t free_space; // Free space on data partition [bytes]
        int16_t camera_record_time; // Record time (-1 if not recording) [s]
        int16_t temp_bottom; // Bottom temperature [0.1°C]
        int16_t temp_water; // Water temperature [0.1°C]
        int16_t temp_top; // Top canister temperature [0.1°C]
        int16_t temp_cpu; // cpu temperature [0.1°C]
        int16_t humidity_top; // Humidity in top canister [0.1%]
        int16_t humidity_bottom; // Humidity in bottom canister [0.1%]
        uint8_t lights_upper; // Status upper lights (0..255) []
        uint8_t lights_lower; // Status lower lights (0..255) []
        int16_t dive_time; // Dive time (-1 if not diving) [s]
        int16_t control_mode; // Control mode []
        uint16_t pressure_top; // Pressure in top canister [mbar]
        int32_t depth; // Depth [mm]
        int32_t reference_depth; // Depth reference [mm]
        float reference_heading; // Heading reference []
        float reference_surge; // Surge reference []
        float reference_sway; // Sway reference []
        float reference_heave; // Heave reference []
        float reference_yaw; // Yaw reference []
        float control_force_surge; // Surge control force []
        float control_force_sway; // Sway control force []
        float control_force_heave; // Heave control force []
        float control_force_yaw; // Yaw control force []
        float roll; // Roll []
        float pitch; // Pitch []
        float yaw; // Yaw []
        int16_t imucal_samples; // Numer of IMU calibration samples (-1 if not calibrating) []
        uint16_t battery_temp; // Battery temperature [0.1°C]
        uint16_t battery_voltage; // Battery voltage [mV]
        int32_t battery_current; // Battery current [mA]
        int32_t battery_average_current; // Battery average current [mA]
        uint8_t battery_state_of_charge_rel; // Battery relative state of charge [%]
        uint16_t battery_remaining_capacity; // Remaining battery capacity [mAh]
        uint16_t battery_full_charge_capacity; // Full charge battery capacity [mAh]
        uint16_t battery_run_time_to_empty; // Battery run time to empty [min]
        uint16_t battery_avg_time_to_empty; // Battery average time to empty [min]
        uint16_t battery_avg_time_to_full; // Battery average time to full [min]
        uint16_t battery_at_rate_time_to_full; // Battery at rate time to full [min]
        uint16_t battery_at_rate_time_to_empty; // Battery at rate time to empty [min]
        uint16_t battery_charging_current; // Battery charging current [mA]
        uint16_t battery_charging_voltage; // Battery charging voltage [mV]
        uint16_t battery_status; // Battery status []
        uint16_t battery_cell_voltage_1; // Battery cell voltage 1 [mV]
        uint16_t battery_cell_voltage_2; // Battery cell voltage 2 [mV]
        uint16_t battery_cell_voltage_3; // Battery cell voltage 3 [mV]
        uint16_t battery_cell_voltage_4; // Battery cell voltage 4 [mV]
        int16_t battery_cell_temperature_1; // Battery cell temperature 1 [0.1°C]
        int16_t battery_cell_temperature_2; // Battery cell temperature 2 [0.1°C]
        int16_t battery_cell_temperature_3; // Battery cell temperature 3 [0.1°C]
        int16_t battery_cell_temperature_4; // Battery cell temperature 4 [0.1°C]
        uint8_t battery_max_error; // Battery max error []
        uint8_t battery_state_of_charge_abs; // Battery absolute state of charge []
        uint16_t battery_cycle_count; // Battery cycle count []
        uint16_t battery_design_capacity; // Battery design capacity []
        uint32_t battery_manufacture_date; // Battery manufacture date []
        uint16_t battery_serial_number; // Battery serial number []
      };

      struct __attribute__((__packed__)) DataVersion2Compasscalibration
      {
        uint8_t version = 2; // Protocol version []
        uint8_t command_type = 2; // Command type []
        int8_t active_status; // Active Status []
        uint8_t progress_x_up; // Progress x up []
        uint8_t progress_x_down; // Progress x down []
        uint8_t progress_y_up; // Progress y up []
        uint8_t progress_y_down; // Progress y down []
        uint8_t progress_z_up; // Progress z up []
        uint8_t progress_z_down; // Progress z down []
        uint8_t progress_thruster; // Progress thruster []
      };

      struct __attribute__((__packed__)) DataVersion2CustomImu
      {
        uint8_t version = 2; // Protocol version []
        uint8_t command_type = 9; // Command type []
        uint8_t id; // The id of the IMU
        double accelerometer_x;
        double accelerometer_y;
        double accelerometer_z;
        double gyro_x;
        double gyro_y;
        double gyro_z;
        double compass_x;
        double compass_y;
        double compass_z;
      };
    }
  }
}

#endif