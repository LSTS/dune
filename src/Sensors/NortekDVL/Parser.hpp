//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda         *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_NORTEK_DVL_PARSER_HPP_INCLUDED_
#define SENSORS_NORTEK_DVL_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace NortekDVL
  {
    using DUNE_NAMESPACES;

    //! Number of distance measurements.
    static const unsigned c_beam_count = 4;
    //! Beam width.
    static const float c_beam_width = 1.0f;
    //! Beam offset.
    static const float c_beam_offset = 0.45f;
    //! Beam angle.
    static const float c_beam_angle = 22.0f;
    //! Current profile angle scale.
    static const float c_ang_scale = 0.01f;
    //! Current profile cell size and blanking scale.
    static const float c_m_to_mm = 1000.0f;

    //! Parser class to interpret Nortek DVL's incoming data.
    class Parser
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle io handle.
      //! @param[in] pos device position.
      //! @param[in] ang device orientation.
      //! @param[in] entities beam entities.
      //! @param[in] entity filtered dvl entity.
      Parser(Tasks::Task* task, IO::Handle* handle, std::vector<float>& pos,
             std::vector<float>& ang, std::vector<unsigned>& entities, unsigned entity):
        m_task(task),
        m_handle(handle),
        m_filter(NULL),
        m_state(ST_SYNC),
        m_timestamp(-1),
        m_index(0),
        m_data_size(0),
        m_checksum(0),
        m_status(0),
        m_water(false),
        m_type(RT_NONE)
      {
        m_filter = new BeamFilter(m_task, c_beam_count, c_beam_width, c_beam_offset,
                                  c_beam_angle, pos, ang, BeamFilter::STANDARD);

        m_filter->setSourceEntities(entities);
        m_filt_distance.setSourceEntity(entity);
        m_bfr.resize(c_max_size);
        m_profile.beam_count = c_beam_count;
      }

      //! Destructor.
      ~Parser(void)
      {
        Memory::clear(m_filter);
      }

      //! Read data.
      //! @param[in] timeout polling timeout.
      //! @return true if valid data was parsed, false otherwise.
      bool
      readData(double timeout = 1.0)
      {
        uint8_t bfr[c_max_size];
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (Poll::poll(*m_handle, timer.getRemaining()))
          {
            size_t rv = m_handle->read(bfr, sizeof(bfr));

            m_raw_data.value.assign(bfr, bfr + rv);
            m_task->dispatch(m_raw_data);

            for (size_t i = 0; i < rv; ++i)
            {
              if (!parse(bfr[i]))
                continue;

              return true;
            }
          }
        }

        return false;
      }

      //! Indicate to the parser if device is in a water environment.
      //! @param[in] status true if device is in water, false otherwise.
      void
      setWater(bool status)
      {
        m_water = status;
      }

    private:
      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @return true if a message was parsed, false otherwise.
      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case ST_SYNC:
            if (byte == c_sync)
            {
              m_timestamp = Clock::getSinceEpoch();
              m_index = 0;
              m_bfr[m_index++] = byte;
              m_state = ST_HEADER;
            }
            break;

          case ST_HEADER:
            if (byte == c_hdr_size)
            {
              m_bfr[m_index++] = byte;
              m_state = ST_ID;
            }
            else
            {
              m_state = ST_SYNC;
            }
            break;

          case ST_ID:
            if (byte == c_bt_type)
            {
              m_bfr[m_index++] = byte;
              m_state = ST_FAMILY;
              m_type = RT_BT;
            }
            else if (byte == c_wt_type)
            {
              m_bfr[m_index++] = byte;
              m_state = ST_FAMILY;
              m_type = RT_WT;
            }
            else
            {
              m_task->err(DTR("unexpected type"));
              m_state = ST_SYNC;
            }
            break;

          case ST_FAMILY:
            if (byte == c_family)
            {
              m_bfr[m_index++] = byte;
              m_state = ST_DATA_SIZE_LSB;
            }
            else
            {
              m_state = ST_SYNC;
            }
            break;

          case ST_DATA_SIZE_LSB:
            m_bfr[m_index++] = byte;
            m_data_size = (uint16_t)byte;
            m_state = ST_DATA_SIZE_MSB;
            break;
          case ST_DATA_SIZE_MSB:
            m_bfr[m_index++] = byte;
            m_data_size |= byte << 8;
            m_state = ST_DATA_CSUM_LSB;
            break;
          case ST_DATA_CSUM_LSB:
            m_bfr[m_index++] = byte;
            m_checksum = (uint16_t)byte;
            m_state = ST_DATA_CSUM_MSB;
            break;
          case ST_DATA_CSUM_MSB:
            m_bfr[m_index++] = byte;
            m_checksum |= byte << 8;
            m_state = ST_HDR_CSUM_LSB;
            break;
          case ST_HDR_CSUM_LSB:
            m_bfr[m_index++] = byte;
            m_state = ST_HDR_CSUM_MSB;
            break;
          case ST_HDR_CSUM_MSB:
            m_bfr[m_index++] = byte;
            m_state = ST_DATA;
            break;
          case ST_DATA:
            m_bfr[m_index++] = byte;

            if (m_index == (unsigned)(m_data_size + c_hdr_size))
            {
              m_state = ST_SYNC;

              // failed checksum.
              if (checksumFailed())
                return false;

              if (m_type == RT_CP)
                decodeCurrentProfile();
              else
                decodeBottomTrack();

              m_type = RT_NONE;
              return true;
            }

          default:
            break;
        }

        return false;
      }

      //! Check if checksum matches.
      //! @return true if checksum does not match, false otherwise.
      bool
      checksumFailed(void)
      {
        uint16_t checksum = c_csum_start;
        unsigned size = m_index + 1 - c_hdr_size;

        for (unsigned i = c_hdr_size; i <= m_index; i += 2)
        {
          uint16_t nb;
          std::memcpy(&nb, &m_bfr[i], 2);
          checksum += nb;
          size -= 2;
        }

        if (size > 0)
          checksum += (uint16_t)m_bfr[m_index] << 8;


        if (checksum == m_checksum)
          return false;

        m_task->debug("checking failed (computed: %d | received: %d)", checksum, m_checksum);
        return true;
      }

      //! Interpret bottom track data received from device.
      void
      decodeBottomTrack(void)
      {
        processStatus();
        processDistance();
        processVelocity();
      }

      //! Interpret current profile data received from device.
      void
      decodeCurrentProfile(void)
      {
        // Data types.
        uint16_t u16;
        int16_t i16;
        uint8_t u8;
        int8_t i8;
        size_t data_bytes = 0;

        // Validity.
        m_profile.validity = 0;
        std::memcpy(&u16, &m_bfr[c_hdr_size + CP_IND_CONFIG], 2);

        if (!(u16 & CP_BIT_VEL))
          return;

        m_profile.validity |= IMC::CurrentProfile::VAL_VELOCITY;
        data_bytes += 2;

        if (u16 & CP_BIT_AMP)
        {
          m_profile.validity |= IMC::CurrentProfile::VAL_AMPLITUDE;
          data_bytes += 1;
        }

        if (u16 & CP_BIT_COR)
        {
          m_profile.validity |= IMC::CurrentProfile::VAL_CORRELATION;
          data_bytes += 1;
        }

        // Angles
        if (u16 & CP_BIT_EUL)
        {
          std::memcpy(&u16, &m_bfr[c_hdr_size + CP_IND_HEADING], 2);
          m_profile.psi = Angles::normalizeRadian(Angles::radians((float)u16 / c_ang_scale));

          std::memcpy(&i16, &m_bfr[c_hdr_size + CP_IND_PITCH], 2);
          m_profile.theta = Angles::radians((float)i16 / c_ang_scale);

          std::memcpy(&i16, &m_bfr[c_hdr_size + CP_IND_ROLL], 2);
          m_profile.phi = Angles::radians((float)i16 / c_ang_scale);
        }
        else
        {
          m_profile.phi = 0;
          m_profile.theta = 0;
          m_profile.psi = 0;
        }

        // Number of cells
        std::memcpy(&u16, &m_bfr[c_hdr_size + CP_IND_CELLS], 2);
        m_profile.cell_count = (uint16_t)(c_ncells_mask & u16);

        // Check if data return size is as expected.
        size_t payload_size = m_profile.beam_count * m_profile.cell_count * data_bytes;
        if (m_data_size != CP_IND_VELOCITY + payload_size)
        {
          m_task->err(DTR("size mismatch"));
          return;
        }

        // Cell size.
        std::memcpy(&u16, &m_bfr[c_hdr_size + CP_IND_CELLSIZE], 2);
        m_profile.cell_size = (float)u16 / c_m_to_mm;

        // Blanking distance.
        std::memcpy(&u16, &m_bfr[c_hdr_size + CP_IND_BLANKING], 2);
        m_profile.blanking_distance = (float)u16 / c_m_to_mm;

        // Nominal correlation.
        std::memcpy(&u8, &m_bfr[c_hdr_size + CP_IND_CORRELAT], 1);
        m_profile.correlation = u8;

        // Velocity scaling.
        std::memcpy(&i8, &m_bfr[c_hdr_size + CP_IND_SCALING], 1);
        m_vscale = std::pow(10.0, (float)i8);

        // Assemble full message and dispatch to bus.
        m_profile.points.clear();
        IMC::CurrentProfilePoint cpp;
        for (size_t i = 0; i < payload_size; i += data_bytes)
        {
          unsigned j = 2;
          std::memcpy(&i16, &m_bfr[c_hdr_size + CP_IND_VELOCITY + i], 2);
          cpp.velocity = (float)i16 / m_vscale;

          if (m_profile.validity & IMC::CurrentProfile::VAL_AMPLITUDE)
          {
            std::memcpy(&u8, &m_bfr[c_hdr_size + CP_IND_VELOCITY + i + j], 1);
            cpp.amplitude = (float)u8;
            j += 1;
          }

          if (m_profile.validity & IMC::CurrentProfile::VAL_CORRELATION)
          {
            std::memcpy(&u8, &m_bfr[c_hdr_size + CP_IND_VELOCITY + i + j], 1);
            cpp.correlation = (float)u8;
          }

          m_profile.points.push_back(cpp);
        }

        dispatch(m_profile);
      }

      //! Parse status and sensor data.
      void
      processStatus(void)
      {
        uint8_t bits_old = (uint8_t)((c_wake_mask & m_status) >> SB_WAKE_ST);

        float pres;
        IMC::SoundSpeed sspe;
        IMC::Temperature temp;

        std::memcpy(&m_status, &m_bfr[c_hdr_size + IND_STATUS], 4);
        std::memcpy(&sspe.value, &m_bfr[c_hdr_size + IND_SSPEED], 4);
        std::memcpy(&temp.value, &m_bfr[c_hdr_size + IND_TEMPER], 4);
        std::memcpy(&pres, &m_bfr[c_hdr_size + IND_PRESSU], 4);

        // check if pressure data is valid.
        if (pres > 0.0)
        {
          IMC::Pressure pre;
          IMC::Depth dep;
          pre.value = pres * c_pascal_per_bar;
          dep.value = ((pre.value - Math::c_sea_level_pressure) /
                       (Math::c_gravity * c_seawater_density));

          pre.setTimeStamp(m_timestamp);
          dep.setTimeStamp(m_timestamp);
          m_task->dispatch(pre, DF_KEEP_TIME);
          m_task->dispatch(dep, DF_KEEP_TIME);

          m_task->spew("pressure: %0.1f, depth: %0.1f", pre.value, dep.value);
        }

        sspe.setTimeStamp(m_timestamp);
        temp.setTimeStamp(m_timestamp);

        // Sound speed measurements are correctly only in water.
        if (m_water)
          m_task->dispatch(sspe, DF_KEEP_TIME);

        m_task->dispatch(temp, DF_KEEP_TIME);

        m_task->spew("status bits: %08X | sound: %0.1f | temperature: %0.1f",
                     m_status, sspe.value, temp.value);

        // verify wake up status bits.
        uint8_t bits_new = (uint8_t)((c_wake_mask & m_status) >> SB_WAKE_ST);

        if (bits_old != bits_new)
          processBits(bits_new);
      }

      //! Process Wake Up Bits
      //! @param[in] bits status bitmask.
      void
      processBits(uint8_t bits)
      {
        switch (bits)
        {
          case (WS_BAD_POWER):
            m_task->err(DTR("power is not good"));
            break;
          case (WS_POWER_APP):
            break;
          case (WS_BREAK):
            m_task->trace("break");
            break;
          case (WS_RTC_ALARM):
            m_task->err(DTR("RTC alarm"));
          default:
            break;
        }
      }

      //! Parse distance data.
      void
      processDistance(void)
      {
        // Water track data seems to carry no valid distance measurements.
        if (m_type != RT_BT)
          return;

        for (unsigned i = 0; i < c_beam_count; i++)
        {
          float altitude;
          std::memcpy(&altitude, &m_bfr[c_hdr_size + IND_BEAM_D + i * 4], 4);
          m_filter->update(i, altitude);

          if (m_status & (1 << (SB_VAL_DIS + i)))
            m_filter->setValidity(i, IMC::Distance::DV_VALID);
          else
            m_filter->setValidity(i, IMC::Distance::DV_INVALID);

          m_task->spew("beam #%d: %0.1f (m)", i, altitude);
        }

        m_filter->dispatch(m_timestamp);

        // get filtered distance.
        float alt = m_filter->get();
        m_filt_distance.setTimeStamp(m_timestamp);
        m_filt_distance.value = alt;
        m_filt_distance.validity = (alt > 0.0 ? IMC::Distance::DV_VALID :
                                    IMC::Distance::DV_INVALID);
        m_task->dispatch(m_filt_distance, DF_KEEP_TIME);
      }

      //! Parse velocity data.
      void
      processVelocity(void)
      {
        // z1 comes from beams 1 and 3, z2 comes from beams 2 and 4.
        float x, y, z, z1, z2;
        std::memcpy(&x, &m_bfr[c_hdr_size + IND_VEL_XX], 4);
        std::memcpy(&y, &m_bfr[c_hdr_size + IND_VEL_YY], 4);
        std::memcpy(&z1, &m_bfr[c_hdr_size + IND_VEL_Z1], 4);
        std::memcpy(&z2, &m_bfr[c_hdr_size + IND_VEL_Z2], 4);

        // Verify validity of z-axis velocities.
        bool z1valid = m_status & (1 << (SB_VAL_VEL + 2));
        bool z2valid = m_status & (1 << (SB_VAL_VEL + 3));

        // Average if both valid/invalid, or just use valid velocity.
        if ((z1valid && z2valid) || (!z1valid && !z2valid))
          z = (z1 + z2) / 2;
        else if (z1valid)
          z = z1;
        else
          z = z2;

        m_gvel.x = x;
        m_gvel.y = y;
        m_gvel.z = z;
        m_wvel.x = x;
        m_wvel.y = y;
        m_wvel.z = z;

        // Validity flags.
        m_gvel.validity = 0;
        m_wvel.validity = 0;

        if (m_status & (1 << SB_VAL_VEL))
        {
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_X;
          m_wvel.validity |= IMC::WaterVelocity::VAL_VEL_X;
        }

        if (m_status & (1 << (SB_VAL_VEL + 1)))
        {
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_Y;
          m_wvel.validity |= IMC::WaterVelocity::VAL_VEL_Y;
        }

        if (z1valid || z2valid)
        {
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_Z;
          m_wvel.validity |= IMC::WaterVelocity::VAL_VEL_Z;
        }

        m_gvel.setTimeStamp(m_timestamp);
        m_wvel.setTimeStamp(m_timestamp);

        if (m_type == RT_BT)
          m_task->dispatch(m_gvel, DF_KEEP_TIME);
        else if (m_type == RT_WT)
          m_task->dispatch(m_wvel, DF_KEEP_TIME);

        m_task->spew("speed: %0.1f, %0.1f, %0.1f (m/s)", x, y, z);
      }

      //! Parser state machine.
      enum State
      {
        ST_SYNC,
        ST_HEADER,
        ST_ID,
        ST_FAMILY,
        ST_DATA_SIZE_LSB,
        ST_DATA_SIZE_MSB,
        ST_DATA_CSUM_LSB,
        ST_DATA_CSUM_MSB,
        ST_HDR_CSUM_LSB,
        ST_HDR_CSUM_MSB,
        ST_DATA
      };

      //! Data format indices.
      enum Index
      {
        // Status index.
        IND_STATUS = 20,
        // Sound speed.
        IND_SSPEED = 24,
        // Temperature.
        IND_TEMPER = 28,
        // Pressure.
        IND_PRESSU = 32,
        // Beam's distances.
        IND_BEAM_D = 52,
        // Velocity in the x-axis.
        IND_VEL_XX = 132,
        // Velocity in the y-axis.
        IND_VEL_YY = 136,
        // Velocity in the z-axis.
        IND_VEL_Z1 = 140,
        // Velocity in the z-axis.
        IND_VEL_Z2 = 144
      };

      //! Current profile data index.
      enum CurrentProfileIndex
      {
        //! Config index.
        CP_IND_CONFIG = 2,
        //! Heading index.
        CP_IND_HEADING = 24,
        //! Pitch index.
        CP_IND_PITCH = 26,
        //! Roll index.
        CP_IND_ROLL = 28,
        //! Number of beams and cells.
        CP_IND_CELLS = 30,
        //! Cell size.
        CP_IND_CELLSIZE = 32,
        //! Blanking distance.
        CP_IND_BLANKING = 34,
        //! Nominal correlation.
        CP_IND_CORRELAT = 36,
        //! Velocity scaling.
        CP_IND_SCALING = 58,
        //! Velocity data.
        CP_IND_VELOCITY = 76
      };

      //! Current Profile bits.
      enum CurrentProfileBits
      {
        CP_BIT_EUL = 0x0004,
        CP_BIT_VEL = 0x0010,
        CP_BIT_AMP = 0x0020,
        CP_BIT_COR = 0x0040
      };

      //! Status bits
      enum StatusBits
      {
        SB_VAL_DIS = 4,
        SB_VAL_VEL = 12,
        SB_WAKE_ST = 28
      };

      //! Wake Up State
      enum WakeUpState
      {
        WS_BAD_POWER = 0x00,
        WS_POWER_APP = 0x01,
        WS_BREAK = 0x10,
        WS_RTC_ALARM = 0x11
      };

      //! Return type
      enum ReturnType
      {
        RT_NONE,
        RT_BT,
        RT_WT,
        RT_CP
      };

      //! Maximum packet size.
      static const unsigned c_max_size = 256;
      //! Sync number.
      static const uint8_t c_sync = 0xa5;
      //! Size of header.
      static const uint8_t c_hdr_size = 10;
      //! Data record bottom track identifier.
      static const uint8_t c_bt_type = 0x1b;
      //! Data record water track identifier.
      static const uint8_t c_wt_type = 0x1d;
      //! Instrument family.
      static const uint8_t c_family = 0x10;
      //! Wake Up status bitmask.
      static const uint32_t c_wake_mask = 0xf0000000;
      //! Initial checksum mask.
      static const uint16_t c_csum_start = 0xb58c;
      //! Current profile number of cells bitmask.
      static const uint16_t c_ncells_mask = 0x03ff;
      //! Parent task.
      Tasks::Task* m_task;
      //! IO Handle.
      IO::Handle* m_handle;
      //! Beam Filter.
      Navigation::BeamFilter* m_filter;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Ground velocity message.
      IMC::GroundVelocity m_gvel;
      //! Water velocity message.
      IMC::WaterVelocity m_wvel;
      //! Filtered distance.
      IMC::Distance m_filt_distance;
      //! Current Profile.
      IMC::CurrentProfile m_profile;
      //! Raw messages.
      IMC::DevDataBinary m_raw_data;
      //! Parser state.
      State m_state;
      //! Timestamp of received data.
      double m_timestamp;
      //! Received data index.
      unsigned m_index;
      //! Data size.
      uint16_t m_data_size;
      //! Data checksum.
      uint16_t m_checksum;
      //! Status bits.
      uint32_t m_status;
      //! Current profile velocity scaler.
      float m_vscale;
      //! Device is in water.
      bool m_water;
      //! Return data type.
      ReturnType m_type;
    };
  }
}

#endif
