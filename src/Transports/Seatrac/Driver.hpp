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
// Author: Maria Costa (small refactor and fix for iUSBL implementation)    *
//***************************************************************************

#ifndef TRANSPORTS_SEATRAC_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_SEATRAC_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "DebugMsg.hpp"
#include "Parser.hpp"

namespace Transports
{
  namespace Seatrac
  {
    class Driver
    {
    public:
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      //! @param[in] addr local modem address.
      //! @param[out] tstamp read timestamp.
      //! @param[out] last_input time of last received input.
      //! @param[out] preamble c_preambple detected.
      //! @param[out] hard_iron_x AHRS hard-iron calibration parameter (x).
      //! @param[out] hard_iron_y AHRS hard-iron calibration parameter (y).
      //! @param[out] hard_iron_z AHRS hard-iron calibration parameter (z).
      //! @param[out] data_seatrac seatrac data structure where to store received data.
      Driver(DUNE::Tasks::Task* task, DUNE::IO::Handle* handle,  Seatrac::DataSeatrac& data_seatrac, double& tstamp, double& last_input, bool& preamble, unsigned addr,
             float hard_iron_x, float hard_iron_y, float hard_iron_z):
        m_handle(handle),
        m_task(task),
        m_data_beacon(data_seatrac),
        m_tstamp(tstamp),
        m_last_input(last_input),
        m_preamble(preamble),
        m_addr(addr),
        m_hard_iron_x(hard_iron_x),
        m_hard_iron_y(hard_iron_y),
        m_hard_iron_z(hard_iron_z)
      {
        m_task->spew("creating driver");
        m_task->spew("flushing input");
      //! Constructor.
      //!
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
        DUNE::Time::Delay::wait(1.0);
        m_handle->flushInput();
      }

      //! Destructor.
      ~Driver()
      { }

      //! Seatrac Configuration
      //! @param[in] ahrs_mode true if AHRS mode enabled.
      //! @param[out] usbl_receiver true if USBL modem.
      //! @param[out] max_range maximum range.
      //! @return entity state after modem configuration.
      EntityStates
      configure(bool& usbl_receiver, bool ahrs_mode, uint16_t& max_range)
      {
        // Retrieve current settings and system information
        sendCommandAndWait(createCommand(CID_SETTINGS_GET, m_data_beacon), 1);
        sendCommandAndWait(createCommand(CID_SYS_INFO, m_data_beacon), 1);

        if (m_data_beacon.cid_sys_info.hardware.part_number == BT_X150)
          usbl_receiver = true;

        uint8_t output_flags = (ENVIRONMENT_FLAG | ATTITUDE_FLAG
                                | MAG_CAL_FLAG | ACC_CAL_FLAG
                                | AHRS_RAW_DATA_FLAG | AHRS_COMP_DATA_FLAG);

        uint8_t xcvr_flags = XCVR_FIX_MSGS_FLAG | XCVR_POSFLT_ENABLE_FLAG;

        if (usbl_receiver)
          xcvr_flags |= USBL_USE_AHRS_FLAG | XCVR_USBL_MSGS_FLAG;

        StatusMode_E status_mode = STATUS_MODE_1HZ;
        bool ahrs = true;
        EntityStates state;
        if (ahrs_mode)
        {
          status_mode = STATUS_MODE_10HZ;
          ahrs = isCalibrated();
        }

        // Verify modem settings
        if (!checkSettings(status_mode, output_flags, xcvr_flags, ahrs, max_range))
        {
          // Setting correct settings
          m_data_beacon.cid_settings_msg.status_flags = status_mode;
          m_data_beacon.cid_settings_msg.status_output = output_flags;
          m_data_beacon.cid_settings_msg.xcvr_flags = xcvr_flags;
          m_data_beacon.cid_settings_msg.xcvr_beacon_id = m_addr;
          m_data_beacon.cid_settings_msg.xcvr_range_tmo = max_range;

          if(!ahrs)
          {
            m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x = m_hard_iron_x;
            m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y = m_hard_iron_y;
            m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z = m_hard_iron_z;
          }

          // Saving settings
          m_task->inf("Saving settings to modem");
          sendCommandAndWait(createCommand(CID_SETTINGS_SET, m_data_beacon), 2);
          sendCommandAndWait(createCommand(CID_SETTINGS_SAVE, m_data_beacon), 2);
          m_task->inf("Rebooting modem");
          sendCommandAndWait(createCommand(CID_SYS_REBOOT, m_data_beacon), 6);
          sendCommandAndWait(createCommand(CID_SETTINGS_GET, m_data_beacon), 2);

          // Check modem settings again
          if (!checkSettings(status_mode, output_flags, xcvr_flags, ahrs, max_range))
          {
            state = STA_ERR_STP;
            m_task->war(DTR("Failed to configure device"));
          }

          // Configuration complete
          m_task->inf("Modem ready.");
          state = EntityStates::STA_IDLE;
        }
        else
        {
          // Configuration complete
          m_task->inf("Modem ready (settings successfully set).");
          state = EntityStates::STA_IDLE;
        }

        // Print system information
        m_task->inf(DTR("Beacon id=%d | HW P#%d (rev#%d) serial#%d | FW P#%d v%d.%d.%d  | App P#%d v%d.%d.%d |%s USBL beacon"),
            m_data_beacon.cid_settings_msg.xcvr_beacon_id,
            m_data_beacon.cid_sys_info.hardware.part_number,
            m_data_beacon.cid_sys_info.hardware.part_rev,
            m_data_beacon.cid_sys_info.hardware.serial_number,
            m_data_beacon.cid_sys_info.boot_firmware.part_number,
            m_data_beacon.cid_sys_info.boot_firmware.version_maj,
            m_data_beacon.cid_sys_info.boot_firmware.version_min,
            m_data_beacon.cid_sys_info.boot_firmware.version_build,
            m_data_beacon.cid_sys_info.main_firmware.part_number,
            m_data_beacon.cid_sys_info.main_firmware.version_maj,
            m_data_beacon.cid_sys_info.main_firmware.version_min,
            m_data_beacon.cid_sys_info.main_firmware.version_build,
            usbl_receiver ? "" : " Not");

        return state;
      }

      //! Routine to check if AHRS has matching hard-iron calibration parameters and set new values if needed.
      void
      runCalibration(void)
      {
        // Check if vehicle has matching hard-iron calibration parameters.
        if (!isCalibrated())
        {
          // Set hard-iron calibration parameters and reset device.
          if (!setHardIron())
          {
            throw RestartNeeded(DTR("failed to set hard-iron correction factors"), 5);
          }
        }
      }

      //! Read sentence from modem.
      void
      readSentence(void)
      {
        // Initialize received message parser
        char bfr[c_bfr_size];
        uint8_t type = 0;
        const char* msg_raw;

        if (!Poll::poll(*m_handle, 0.001))
          return;

        size_t rv = m_handle->readString(bfr, c_bfr_size);
        m_tstamp = Clock::getSinceEpoch();
        m_last_input = Clock::get();
        for (size_t i = 0; i < rv; ++i)
        {
          // Detected line termination.
          if (bfr[i] == '\n')
          {
            m_dev_data.value.assign(sanitize(m_data));
            m_task->dispatch(m_dev_data);
            if (m_preamble)
            {
              if (checkValidity())
              {
                msg_raw = m_datahex.data();
                std::memcpy(&type, msg_raw, 1);
                dataParser(type, msg_raw + 1, m_data_beacon);
                printDebugFunction(type, m_data_beacon, m_task);
                type = 0;
              }
            }
            m_preamble = false;
            m_data.clear();
          }
          else
          {
            if (bfr[i] == c_preamble)
            {
              m_data.clear();
              m_preamble = true;
            }
            else if (bfr[i] != '\r')
              m_data.push_back(bfr[i]);
          }
        }
      }

      //! Send command to the acoustic modem.
      //! @param[in] cmd command string.
      void
      sendCommand(const std::string& cmd)
      {
        m_handle->writeString(cmd.c_str());
        m_task->trace(DTR("Sent command to the acoustic modem: %s"), cmd.c_str());
        m_dev_data.value.assign(sanitize(cmd));
        m_task->dispatch(m_dev_data);
      }

    private:
      //! I/O handle.
      IO::Handle* m_handle;
      //! Parent task.
      Tasks::Task* m_task;
      //! Seatrac data structure.
      DataSeatrac& m_data_beacon;
      //! Read timestamp.
      double& m_tstamp;
      //! Time of last received input.
      double& m_last_input;
      //! c_preamble detected
      bool& m_preamble;
      //! Modem address.
      unsigned m_addr;
      //! Hard-iron calibration parameter (x).
      float m_hard_iron_x;
      //! Hard-iron calibration parameter (y).
      float m_hard_iron_y;
      //! Hard-iron calibration parameter (z).
      float m_hard_iron_z;
      //! Data buffer.
      std::string m_data;
      //! Converted data buffer.
      std::string m_datahex;
      //! Save modem commands.
      IMC::DevDataText m_dev_data;

      //! Verification of current settings
      //! @param[in] status_mode status output mode
      //! @param[in] output_flags status output flags
      //! @param[in] xcvr_flags control XCVR flags
      //! @param[in] ahrs AHRS hard-iron calibration parameters match (when AHRS mode enabled)
      //! @param[in] max_range maximum range
      //! @return true if settings match, false otherwise
      bool
      checkSettings(StatusMode_E status_mode, uint8_t output_flags, uint8_t xcvr_flags, bool ahrs, uint16_t max_range)
      {
        return ((m_data_beacon.cid_settings_msg.xcvr_beacon_id == m_addr)
                && (m_data_beacon.cid_settings_msg.status_flags == status_mode)
                && (m_data_beacon.cid_settings_msg.status_output == output_flags)
                && (m_data_beacon.cid_settings_msg.xcvr_flags == xcvr_flags)
                && (m_data_beacon.cid_settings_msg.xcvr_range_tmo == max_range)
                && ahrs);
      }

      //! Check if AHRS sensor has matching hard-iron calibration parameters.
      //! @return true if the parameters are the same, false otherwise.
      bool
      isCalibrated(void)
      {
        if( ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x*100)) != ((int32_t) (m_hard_iron_x*100))
            || ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y*100)) != ((int32_t) (m_hard_iron_y*100))
            || ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z*100)) != ((int32_t) (m_hard_iron_z*100)))
        {
          m_task->inf(DTR("AHRS has different calibration parameters."));
          return false;
        }

        m_task->inf("AHRS is calibrated (matching parameters).");
        return true;
      }

      //! Set new hard-iron calibration parameters.
      //! @return true if successful, false otherwise.
      bool
      setHardIron(void)
      {
        m_task->inf("Set new hard-iron calibration parameters and reset device.");
        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x = m_hard_iron_x;
        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y = m_hard_iron_y;
        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z = m_hard_iron_z;
        sendCommandAndWait(createCommand(CID_SETTINGS_SET, m_data_beacon), 2);
        sendCommandAndWait(createCommand(CID_SETTINGS_SAVE, m_data_beacon), 2);
        sendCommandAndWait(createCommand(CID_SETTINGS_GET, m_data_beacon), 2);

        if((m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x != m_hard_iron_x)
            || (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y != m_hard_iron_y)
            || (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z != m_hard_iron_z))
          return false;

        return true;
      }

      //! Process sentence to check validity (CRC and minimum length).
      //! @return true if message is valid, false otherwise.
      bool
      checkValidity(void)
      {
        bool msg_validity = false;
        uint16_t crc, crc2;
        if(m_data.size() >= MIN_MESSAGE_LENGTH)
        {
          std::string msg = String::fromHex(m_data.substr((m_data.size() - 4), 4));
          std::memcpy(&crc2, msg.data(), 2);
          m_datahex = String::fromHex(m_data.erase((m_data.size() - 4), 4));
          crc = CRC16::compute((uint8_t*) m_datahex.data(), m_datahex.size(),0);
          if (crc == crc2)
            msg_validity = true;
          else
            m_task->war("Received message not valid: %s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
        }
        else
          m_task->war(DTR("Received message not valid: insufficient message length"));
        return msg_validity;
      }

      //! Send command and waits for response.
      //! @param[in] cmd command string.
      //! @param[in] wait wait time for reply after sending command.
      void
      sendCommandAndWait(const std::string& cmd, double wait)
      {
        // Send command
        sendCommand(cmd);
        // Wait for reply
        processReply(wait);
      }

      //! Wait for reply and process it.
      //! @param[in] timeout time to wait for reply.
      void
      processReply(double timeout = 1.0)
      {
        double deadline = Clock::get() + timeout;
        do
        {
          readSentence();
        }
        while (Clock::get() <= deadline);
      }

    };
  }
}

#endif
