//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_MICROSTRAIN_MIP_DRIVER_HPP_INCLUDED_
#define SENSORS_MICROSTRAIN_MIP_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Constants.hpp"
#include "Parser.hpp"

namespace Sensors
{
  namespace MicrostrainMIP
  {
    class Driver
    {
    public:
      Driver(Tasks::Task* parent, const std::string& uart_dev, unsigned uart_baud):
        m_parent(parent),
        m_timeout_count(0),
        m_sample_count(0)
      {
        m_uart = new SerialPort(uart_dev, uart_baud);
        m_bfr[0] = c_sync0;
        m_bfr[1] = c_sync1;
        std::memset(m_hard_iron_offset, 0, sizeof(m_hard_iron_offset));
      }

      ~Driver(void)
      {
        delete m_uart;
      }

      bool
      setToIdleNoAck(void)
      {
        sendPacket(CMD_SET_BASE, CMD_BASE_SET_TO_IDLE, NULL, 0);
        Delay::wait(0.5);
        m_uart->flush();
        return true;
      }

      //! Place device into idle mode.
      //! @return true if command succeeded, false otherwise.
      bool
      setToIdle(void)
      {
        sendPacket(CMD_SET_BASE, CMD_BASE_SET_TO_IDLE, NULL, 0);
        if (readAck(CMD_SET_BASE, CMD_BASE_SET_TO_IDLE, 1.0))
          return true;

        ++m_timeout_count;
        return false;
      }

      bool
      getDeviceInfo(void)
      {
        char bfr[17] = {0};

        sendPacket(CMD_SET_BASE, CMD_BASE_GET_DEV_INFO, NULL, 0);
        if (readAck(CMD_SET_BASE, CMD_BASE_GET_DEV_INFO, 1.0))
        {
          std::memcpy(bfr, m_parser.getPayload() + 8, 16);
          m_model_name = String::trim(bfr);
          std::memcpy(bfr, m_parser.getPayload() + 24, 16);
          m_model_number = String::trim(bfr);
          std::memcpy(bfr, m_parser.getPayload() + 40, 16);
          m_serial_number = String::trim(bfr);
          return true;
        }

        ++m_timeout_count;
        return false;
      }

      bool
      getHardIronOffset(float& offset_x, float& offset_y, float& offset_z)
      {
        uint8_t bfr[13] = {0x02, 0x00};
        sendPacket(CMD_SET_3DM, CMD_3DM_HARD_IRON_OFFSET, bfr, sizeof(bfr));
        if (readAck(CMD_SET_3DM, CMD_3DM_HARD_IRON_OFFSET, 1.0))
        {
          ByteCopy::fromBE(offset_x, m_parser.getPayload() + 6);
          ByteCopy::fromBE(offset_y, m_parser.getPayload() + 10);
          ByteCopy::fromBE(offset_z, m_parser.getPayload() + 14);
          return true;
        }

        ++m_timeout_count;
        return false;
      }

      bool
      setHardIronOffset(float offset_x, float offset_y, float offset_z)
      {
        uint8_t bfr[13] = {0x01};
        ByteCopy::toBE(offset_x, bfr + 1);
        ByteCopy::toBE(offset_y, bfr + 5);
        ByteCopy::toBE(offset_z, bfr + 9);

        sendPacket(CMD_SET_3DM, CMD_3DM_HARD_IRON_OFFSET, bfr, sizeof(bfr));
        if (readAck(CMD_SET_3DM, CMD_3DM_HARD_IRON_OFFSET, 2.0))
          return true;

        ++m_timeout_count;
        return false;
      }

      bool
      enableContinuousStream(bool enabled)
      {
        uint8_t payload[] = {0x01, 0x01, (uint8_t)(enabled ? 0x01 : 0x00)};
        sendPacket(CMD_SET_3DM, CMD_3DM_CONT_STREAM, payload, sizeof(payload));
        if (readAck(CMD_SET_3DM, CMD_3DM_CONT_STREAM, 1.0))
          return true;

        ++m_timeout_count;
        return false;
      }

      bool
      setContinuousStreamFormat(uint16_t rate_decimation)
      {
        uint8_t rate_dec_msb = rate_decimation >> 8;
        uint8_t rate_dec_lsb = rate_decimation;
        uint8_t payload[] = {0x01, // Action.
                             0x05, // Number of descriptors.
                             0x0e, rate_dec_msb, rate_dec_lsb, // Timestamp.
                             0x04, rate_dec_msb, rate_dec_lsb, // Acceleration.
                             0x05, rate_dec_msb, rate_dec_lsb, // Angular Rates.
                             0x06, rate_dec_msb, rate_dec_lsb, // Magnetic Field.
                             0x09, rate_dec_msb, rate_dec_lsb  // Orientation Matrix.
        };

        sendPacket(CMD_SET_3DM, CMD_3DM_MSG_FORMAT, payload, sizeof(payload));
        if (readAck(CMD_SET_3DM, CMD_3DM_MSG_FORMAT, 2.0))
          return true;

        ++m_timeout_count;
        return false;
      }

      bool
      readSample(double timeout)
      {
        Counter<double> timer(timeout);

        if (consumeBacklog())
        {
          ++m_sample_count;
          return true;
        }

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            return false;

          if (consumeUART())
          {
            ++m_sample_count;
            return true;
          }
        }

        return false;
      }

      double
      getTimeStamp(void) const
      {
        return m_parser.getTimeStamp();
      }

      void
      setRotationMatrix(const Matrix& rotation_matrix)
      {
        m_rotation_matrix = rotation_matrix;
      }

      size_t
      getTimeoutCount(void) const
      {
        return m_timeout_count;
      }

      size_t
      getInvalidCount(void) const
      {
        return m_parser.getInvalidChecksumCount();
      }

      size_t
      getSampleCount(void) const
      {
        return m_sample_count;
      }

      void
      setSampleCount(size_t sample_count)
      {
        m_sample_count = sample_count;
      }

      std::string
      getModelName(void) const
      {
        return m_model_name;
      }

      std::string
      getModelNumber(void) const
      {
        return m_model_number;
      }

      std::string
      getSerialNumber(void) const
      {
        return m_serial_number;
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Command buffer.
      uint8_t m_bfr[256];
      //! Command parser.
      Parser m_parser;
      //! Model name.
      std::string m_model_name;
      //! Model number.
      std::string m_model_number;
      //! Serial number.
      std::string m_serial_number;
      //! Hard-Iron offset.
      float m_hard_iron_offset[3];
      //! Backlog.
      std::queue<uint8_t> m_backlog;
      //! Euler angles message.
      IMC::EulerAngles m_euler;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Angular velocity message.
      IMC::AngularVelocity m_agvel;
      //! Magnetometer Vector message.
      IMC::MagneticField m_magfield;
      //! Rotation matrix.
      Matrix m_rotation_matrix;
      //! Timeout count.
      size_t m_timeout_count;
      //! Sample count.
      size_t m_sample_count;

      void
      extractRotatedVector(const uint8_t* data, Matrix& vector)
      {
        float raw = 0;
        ByteCopy::fromBE(raw, data);
        vector(0) = raw;
        ByteCopy::fromBE(raw, data + 4);
        vector(1) = raw;
        ByteCopy::fromBE(raw, data + 8);
        vector(2) = raw;
        vector = m_rotation_matrix * vector;
      }

      bool
      interpretSample(void)
      {
        Math::Matrix data(c_axes_count, 1);
        const uint8_t* payload = m_parser.getPayload();

        // Device Timestamp.
        if (payload[1] == DD_INTERNAL_TIME)
        {
          uint32_t timer = 0;
          ByteCopy::fromBE(timer, payload + 2);
          m_euler.time = timer / 62500.0;
          m_accel.time = m_euler.time;
          m_agvel.time = m_euler.time;
          m_magfield.time = m_euler.time;
        }

        // Acceleration.
        if (payload[7] == DD_SCALED_ACCL_VEC)
        {
          extractRotatedVector(payload + 8, data);
          m_accel.setTimeStamp(m_parser.getTimeStamp());
          m_accel.x = Math::c_gravity * data(0);
          m_accel.y = Math::c_gravity * data(1);
          m_accel.z = Math::c_gravity * data(2);
        }

        // Extract angular rates.
        if (payload[21] == DD_SCALED_GYRO_VEC)
        {
          extractRotatedVector(payload + 22, data);
          m_agvel.setTimeStamp(m_parser.getTimeStamp());
          m_agvel.x = data(0);
          m_agvel.y = data(1);
          m_agvel.z = data(2);
        }

        // Extract magnetic field.
        if (payload[35] == DD_SCALED_MAGN_VEC)
        {
          extractRotatedVector(payload + 36, data);
          m_magfield.setTimeStamp(m_parser.getTimeStamp());
          m_magfield.x = data(0);
          m_magfield.y = data(1);
          m_magfield.z = data(2);
        }

        // Extract orientation matrix and compute Euler angles.
        if (payload[49] == DD_ORIENTATION_MATRIX)
        {
          Matrix rmat(3, 3);
          float r[9] = {0};
          double r8[9] = {0};

          for (unsigned i = 0; i < 9; ++i)
          {
            ByteCopy::fromBE(r[i], payload + 50 + 4 * i);
            r8[i] = r[i];
          }

          rmat.fill(3, 3, &r8[0]);
          rmat = transpose(m_rotation_matrix * rmat);

          m_euler.phi = std::atan2(rmat(2, 1), rmat(2, 2));
          m_euler.theta = std::asin(-rmat(2, 0));
          m_euler.psi = std::atan2(rmat(1, 0), rmat(0, 0));
          m_euler.psi_magnetic = m_euler.psi;
        }

        // Dispatch messages.
        if (m_parent != NULL)
        {
          m_parent->dispatch(m_euler, DF_KEEP_TIME);
          m_parent->dispatch(m_accel, DF_KEEP_TIME);
          m_parent->dispatch(m_agvel, DF_KEEP_TIME);
          m_parent->dispatch(m_magfield, DF_KEEP_TIME);
        }

        return true;
      }

      bool
      consumeBacklog(void)
      {
        while (!m_backlog.empty())
        {
          uint8_t byte = m_backlog.front();
          m_backlog.pop();
          if (m_parser.parse(byte))
            return interpretSample();
        }

        return false;
      }

      bool
      consumeUART(void)
      {
        uint8_t bfr[256];
        size_t size = receive(bfr, sizeof(bfr));

        for (size_t i = 0; i < size; ++i)
        {
          if (m_parser.parse(bfr[i]))
          {
            saveToBacklog(bfr, i + 1, size);
            return interpretSample();
          }
        }

        return false;
      }

      void
      saveToBacklog(const uint8_t* bfr, size_t start, size_t size)
      {
        for (size_t i = start; i < size; ++i)
          m_backlog.push(bfr[i]);
      }

      //! Create packet using command buffer.
      //! @param[in] cmd_set command set.
      //! @param[in] cmd command.
      //! @param[in] payload payload data.
      //! @param[in] payload_size payload data size.
      //! @return packet size.
      size_t
      createPacket(CommandSet cmd_set, uint8_t cmd, const uint8_t* payload, size_t payload_size)
      {
        m_bfr[2] = cmd_set;
        m_bfr[3] = payload_size + 2;
        m_bfr[4] = payload_size + 2;
        m_bfr[5] = cmd;
        if (payload_size > 0)
          std::memcpy(m_bfr + 6, payload, payload_size);

        m_bfr[payload_size + 6] = 0;
        m_bfr[payload_size + 7] = 0;
        Algorithms::FletcherChecksum::compute(m_bfr,
                                              6 + payload_size,
                                              m_bfr[payload_size + 6],
                                              m_bfr[payload_size + 7]);

        return 8 + payload_size;
      }

      size_t
      send(const uint8_t* data, size_t data_size)
      {
        return m_uart->write(data, data_size);
      }

      size_t
      receive(uint8_t* bfr, size_t bfr_size)
      {
        return m_uart->read(bfr, bfr_size);
      }

      bool
      sendPacket(CommandSet cmd_set, uint8_t cmd, const uint8_t* payload, size_t payload_size)
      {
        size_t size = createPacket(cmd_set, cmd, payload, payload_size);
        size_t rv = send(m_bfr, size);
        return rv == size;
      }

      bool
      readAck(CommandSet cmd_set, uint8_t cmd, double timeout)
      {
        uint8_t bfr[256];
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            return false;

          size_t size = receive(bfr, sizeof(bfr));
          for (size_t i = 0; i < size; ++i)
          {
            if (m_parser.parse(bfr[i]))
            {
              if (m_parser.getDescriptorSet() == cmd_set and m_parser.getFieldDescriptor() == 0xf1)
              {
                if (m_parser.getPayload()[2] == cmd and m_parser.getPayload()[3] == 0)
                {
                  return true;
                }
              }
            }
          }
        }

        return false;
      }
    };
  }
}

#endif
