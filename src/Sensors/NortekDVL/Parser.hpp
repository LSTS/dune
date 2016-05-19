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

    //! Parser class to interpret Nortek DVL's incoming data.
    class Parser
    {
    public:
      //! Constructor.
      Parser(Tasks::Task* task, const Address& addr, unsigned port):
        m_task(task),
        m_state(ST_SYNC),
        m_timestamp(-1),
        m_index(0),
        m_data_size(0),
        m_checksum(0)
      {
        m_sock.setNoDelay(true);
        m_sock.setSendTimeout(1.0);
        m_sock.setReceiveTimeout(1.0);
        m_sock.connect(addr, port);
        m_bfr.resize(c_max_size);

        // @todo beamconfig and devicestate.
      }

      //! Destructor.
      ~Parser(void)
      { }

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
          if (Poll::poll(m_sock, timer.getRemaining()))
          {
            size_t rv = m_sock.read(bfr, sizeof(bfr));

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
              m_task->err("parse #1");
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
            }
            else
            {
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

              if (checksumFailed())
                return false;

              interpret();
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

        m_task->spew("checking checksum: %d == %d ?", checksum, m_checksum);
        if (checksum != m_checksum)
          return true;

        return false;
      }

      //! Interpret data received from device.
      void
      interpret(void)
      {
        processStatus();
        processDistance();
        processVelocity();
      }

      //! Parse status and sensor data.
      void
      processStatus(void)
      {
        uint8_t bits_old = (uint8_t)((c_wake_mask & m_status) >> SB_WAKE_ST);

        IMC::Depth dept;
        IMC::Pressure pres;
        IMC::SoundSpeed sspe;
        IMC::Temperature temp;

        std::memcpy(&m_status, &m_bfr[c_hdr_size + IND_STATUS], 4);
        std::memcpy(&sspe.value, &m_bfr[c_hdr_size + IND_SSPEED], 4);
        std::memcpy(&temp.value, &m_bfr[c_hdr_size + IND_TEMPER], 4);
        std::memcpy(&pres.value, &m_bfr[c_hdr_size + IND_PRESSU], 4);

        pres.value *= c_pascal_per_bar;
        dept.value = ((pres.value - Math::c_sea_level_pressure) /
                      (Math::c_gravity * c_seawater_density));

        sspe.setTimeStamp(m_timestamp);
        temp.setTimeStamp(m_timestamp);
        pres.setTimeStamp(m_timestamp);
        dept.setTimeStamp(m_timestamp);

        m_task->dispatch(sspe, DF_KEEP_TIME);
        m_task->dispatch(temp, DF_KEEP_TIME);
        m_task->dispatch(pres, DF_KEEP_TIME);
        m_task->dispatch(dept, DF_KEEP_TIME);

        m_task->spew("status: %08X", m_status);
        m_task->spew("sound: %0.2f, temperature: %0.2f, pressure: %0.2f, depth: %0.2f",
                     sspe.value, temp.value, pres.value, dept.value);

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
        for (unsigned i = 0; i < c_beam_count; i++)
        {
          std::memcpy(&m_distance[i].value, &m_bfr[c_hdr_size + IND_BEAM_D + i * 4], 4);

          m_filter.updateBeam(i, m_distance[i]);
          m_distance[i].setTimeStamp(m_timestamp);
          m_distance[i].validity = m_status & (1 << (SB_VAL_DIS + i));
          m_task->dispatch(m_distance[i], DF_KEEP_TIME);

          m_task->spew("beam %d: %0.2f (m)", i, m_distance[i].value);
        }

        // get filtered distance.
        float alt = m_filter.getDistance();
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
        float z1, z2;

        std::memcpy(&m_gvel.x, &m_bfr[c_hdr_size + IND_VEL_XX], 4);
        std::memcpy(&m_gvel.y, &m_bfr[c_hdr_size + IND_VEL_YY], 4);
        std::memcpy(&z1, &m_bfr[c_hdr_size + IND_VEL_Z1], 4);
        std::memcpy(&z2, &m_bfr[c_hdr_size + IND_VEL_Z2], 4);

        // Verify validity of z-axis velocities.
        bool z1valid = m_status & (1 << (SB_VAL_VEL + 2));
        bool z2valid = m_status & (1 << (SB_VAL_VEL + 3));

        // Average if both valid/invalid, or just use valid velocity.
        if ((z1valid && z2valid) || (!z1valid && !z2valid))
          m_gvel.z = (z1 + z2) / 2;
        else if (z1valid)
          m_gvel.z = z1;
        else
          m_gvel.z = z2;

        // Validity flags.
        if (m_status & (1 << SB_VAL_VEL))
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_X;

        if (m_status & (1 << (SB_VAL_VEL + 1)))
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_Y;

        if (z1valid || z2valid)
          m_gvel.validity |= IMC::GroundVelocity::VAL_VEL_Z;

        m_task->dispatch(m_gvel, DF_KEEP_TIME);

        m_task->spew("velocity: %0.2f, %0.2f, %0.2f", m_gvel.x, m_gvel.y, m_gvel.z);
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

      //! Maximum packet size.
      static const unsigned c_max_size = 256;
      //! Sync number.
      static const uint8_t c_sync = 0xa5;
      //! Size of header.
      static const uint8_t c_hdr_size = 10;
      //! Data record bottom track identifier.
      static const uint8_t c_bt_type = 0x1b;
      //! Instrument family.
      static const uint8_t c_family = 0x10;
      //! Number of distance measurements.
      static const unsigned c_beam_count = 4;
      //! Wake Up status bitmask.
      static const uint32_t c_wake_mask = 0xf0000000;
      //! Initial checksum mask.
      static const uint16_t c_csum_start = 0xb58c;
      //! Parent task.
      Tasks::Task* m_task;
      //! TCP socket.
      TCPSocket m_sock;
      //! Read buffer.
      std::vector<uint8_t> m_bfr;
      //! Ground velocity message.
      IMC::GroundVelocity m_gvel;
      //! Distances.
      IMC::Distance m_distance[c_beam_count];
      //! Filtered distance.
      IMC::Distance m_filt_distance;
      //! Beam Filter.
      Navigation::BeamFilter m_filter;
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
    };
  }
}

#endif
