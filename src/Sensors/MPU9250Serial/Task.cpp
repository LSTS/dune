//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Task interface to sensor data from the MPU9250 IMU.
  //!
  //! Expected format:
  //! "$<fusion_id>,<roll>,<pitch>,<yaw>*csum\r\n"
  //! @author João Bogas
  namespace MPU9250Serial
  {
    using DUNE_NAMESPACES;

    //! Line termination sequence.
    static constexpr const char* c_line_term = "\r\n";

    struct Input
    {
      char src;
      unsigned int fusion_id;
      float roll;
      float pitch;
      float yaw;
    };

    constexpr std::size_t
    strlen(const char* str)
    {
      std::size_t len = 0;
      while (str[len] != '\0')
        ++len;
      return len;
    }

    struct Arguments
    {
      //! IO device URI.
      std::string io_dev;
      //! Input timeout in seconds.
      float inp_tout;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Buffer for reading data.
      char m_buf[256];
      //! Line buffer for processing sentences.
      std::string m_line;
      //! Map of sensor fusion IDs.
      std::map<char, unsigned int> m_fusion_ids;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(nullptr)
      {
        paramActive(Parameter::SCOPE_GLOBAL, Parameter::VISIBILITY_USER, true);

        param("IO Port - Device", m_args.io_dev)
          .defaultValue("")
          .description("IO device URI (e.g., uart://dev/DEVICE:BAUD)");

        param("Input Timeout", m_args.inp_tout)
          .defaultValue("1.0")
          .units(Units::Second)
          .description("Input timeout in seconds");
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void) override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }

      void
      onEntityReservation(void) override
      {
        unsigned int eid = reserveEntity("MPU9250");
        m_fusion_ids['M'] = eid;  // Fusion ID for 'M'

        eid = reserveEntity("Fusion_F");
        m_fusion_ids['F'] = eid;  // Fusion ID for 'F'

        eid = reserveEntity("Fusion_S");
        m_fusion_ids['S'] = eid;  // Fusion ID for 'S'

        eid = reserveEntity("Raw_MPU9250");
        m_fusion_ids['R'] = eid;  // Fusion ID for 'R'
      }

      //! Disconnect from the device.
      void
      onDisconnect(void) override
      {
        Memory::clear(m_handle);
      }

      void
      onInitializeDevice(void) override
      {
        m_wdog.setTop(m_args.inp_tout);
      }

      void
      process(const std::string& str, double timestamp)
      {
        // Check for '$' at the start
        if (str.empty() || str[0] != '$')
        {
          war("Malformed line (missing $): %s", str.c_str());
          return;
        }

        // Find checksum separator '*'
        size_t csum_pos = str.find('*');
        if (csum_pos == std::string::npos)
        {
          war("Malformed line (missing *): %s", str.c_str());
          return;
        }
        std::string csum = str.substr(csum_pos + 1);

        // Validate checksum
        uint8_t checksum = 0;
        for (size_t i = 0; i < csum_pos; ++i)
          checksum ^= str[i];

        checksum |= 0x80;

        if (checksum != std::stoi(csum, nullptr, 16))
        {
          war("Invalid checksum: expected %02X, got %s", checksum, csum.c_str());
          return;
        }

        std::string data = str.substr(1, csum_pos - 1);  // skip '$'
        std::vector<std::string> tokens;
        String::split(data, ",", tokens);

        char fusion_id = tokens[0].empty() ? '?' : tokens[0][0];
        tokens.erase(tokens.begin());

        switch (fusion_id)
        {
          case 'M':
            // Process MPU9250 data
            onMPU9250Data(tokens, timestamp);
            break;
          case 'F':
            // Process Fusion data
            onFusionData(tokens, timestamp);
            break;
          case 'S':
            // Process Sensor Fusion data
            onSimpleFusionData(tokens, timestamp);
            break;

          case 'R':
            // Process Raw MPU9250 data
            onRawData(tokens, timestamp);
            break;
          default:
            break;
        }

        m_wdog.reset();
      }

      void
      onMPU9250Data(const std::vector<std::string>& data, double timestamp)
      {
        // Expecting: data[0]=roll, data[1]=pitch, data[2]=yaw
        if (data.size() != 3)
        {
          war("MPU9250: insufficient data fields");
          return;
        }

        float roll = std::stof(data[0]);
        float pitch = std::stof(data[1]);
        float yaw = std::stof(data[2]);

        IMC::EulerAngles euler;
        euler.phi = Angles::radians(roll);
        euler.theta = Angles::radians(pitch);
        euler.psi = Angles::radians(yaw);
        euler.setSourceEntity(m_fusion_ids['M']);
        euler.setTimeStamp(timestamp);

        dispatch(euler, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        spew("MPU9250: roll=%.4f, pitch=%.4f, yaw=%.4f", roll, pitch, yaw);
      }

      void
      onRawData(const std::vector<std::string>& data, double timestamp)
      {
        // Expecting: data[0]=ax, data[1]=ay, data[2]=az, data[3]=gx, data[4]=gy, data[5]=gz,
        // data[6]=mx, data[7]=my, data[8]=mz
        if (data.size() != 9)
        {
          war("Raw MPU9250: insufficient data fields");
          return;
        }

        float ax = std::stof(data[0]);
        float ay = std::stof(data[1]);
        float az = std::stof(data[2]);
        float gx = std::stof(data[3]);
        float gy = std::stof(data[4]);
        float gz = std::stof(data[5]);
        float mx = std::stof(data[6]);
        float my = std::stof(data[7]);
        float mz = std::stof(data[8]);

        IMC::Acceleration acc;
        acc.x = ax;
        acc.y = ay;
        acc.z = az;
        acc.setSourceEntity(m_fusion_ids['R']);
        acc.setTimeStamp(timestamp);

        dispatch(acc, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        IMC::MagneticField mag;
        mag.x = mx;
        mag.y = my;
        mag.z = mz;
        mag.setSourceEntity(m_fusion_ids['R']);
        mag.setTimeStamp(timestamp);

        dispatch(mag, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        IMC::AngularVelocity ang_vel;
        ang_vel.x = gx;
        ang_vel.y = gy;
        ang_vel.z = gz;
        ang_vel.setSourceEntity(m_fusion_ids['R']);
        ang_vel.setTimeStamp(timestamp);

        dispatch(ang_vel, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        spew("Raw MPU9250: ax=%.4f, ay=%.4f, az=%.4f, gx=%.4f, gy=%.4f, gz=%.4f, mx=%.4f, my=%.4f, "
             "mz=%.4f",
             ax, ay, az, gx, gy, gz, mx, my, mz);
      }

      void
      onFusionData(const std::vector<std::string>& data, double timestamp)
      {
        // Expecting: data[0]=roll, data[1]=pitch, data[2]=yaw
        if (data.size() != 3)
        {
          war("Fusion: insufficient data fields");
          return;
        }

        float roll = std::stof(data[0]);
        float pitch = std::stof(data[1]);
        float yaw = std::stof(data[2]);

        IMC::EulerAngles euler;
        euler.phi = Angles::radians(roll);
        euler.theta = Angles::radians(pitch);
        euler.psi = Angles::radians(yaw);
        euler.setSourceEntity(m_fusion_ids['F']);
        euler.setTimeStamp(timestamp);
        dispatch(euler, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        spew("Fusion: roll=%.4f, pitch=%.4f, yaw=%.4f", roll, pitch, yaw);
      }

      void
      onSimpleFusionData(const std::vector<std::string>& data, double timestamp)
      {
        // Expecting: data[0]=roll, data[1]=pitch, data[2]=yaw
        if (data.size() != 3)
        {
          war("Simple Fusion: insufficient data fields");
          return;
        }

        float roll = std::stof(data[0]);
        float pitch = std::stof(data[1]);
        float yaw = std::stof(data[2]);

        IMC::EulerAngles euler;
        euler.phi = Angles::radians(roll);
        euler.theta = Angles::radians(pitch);
        euler.psi = Angles::radians(yaw);
        euler.setSourceEntity(m_fusion_ids['S']);
        euler.setTimeStamp(timestamp);
        dispatch(euler, DF_KEEP_SRC_EID | DF_KEEP_TIME);

        spew("Simple Fusion: roll=%.4f, pitch=%.4f, yaw=%.4f", roll, pitch, yaw);
      }

      //! Main loop.
      bool
      onReadData(void)
      {
        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        if (!Poll::poll(*m_handle, 1.0))
          return false;

        size_t rv = m_handle->read(m_buf, sizeof(m_buf) - 1);
        if (rv == 0)
          throw std::runtime_error(DTR("failed to read data from device"));

        double ts = Clock::Clock::getSinceEpoch();

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(m_buf[i]);

          if (String::endsWith(m_line, c_line_term))
          {
            m_line.erase(m_line.end() - strlen(c_line_term), m_line.end());
            process(m_line, ts);
            m_line.clear();
          }
        }

        return true;
      }
    };
  }
}

DUNE_TASK
