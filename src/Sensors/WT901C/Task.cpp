//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
  //! Packet header.
  static uint8_t c_packet_header = 0x55;

  enum PacketType
  {
    PACKET_ACCELEROMETER = 0x51,
    PACKET_GYROSCOPE = 0x52,
    PACKET_ANGLE = 0x53,
    PACKET_MAGNETOMETER = 0x54,
    PACKET_QUATERNION = 0x59
  };

  //! Map of packet types to their sizes.
  static std::map<uint8_t, size_t> c_packet_sizes = {
    { PACKET_ACCELEROMETER, 8 },  // Accelerometer data packet
    { PACKET_GYROSCOPE, 8 },      // Gyroscope data packet
    { PACKET_ANGLE, 8 },          // Angle data packet
    { PACKET_MAGNETOMETER, 8 },   // Magnetometer data packet
    { PACKET_QUATERNION, 8 },     // Quaternion data packet
  };

  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace WT901C
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! I/O device handle.
      std::string io_handle;
      //! Input timeout.
      float inp_tout;
      //! Read frequency.
      float read_freq;
    };

    class WaitingForHeader: public std::exception
    {
    public:
      WaitingForHeader(void):
        std::exception()
      { }
    };

    class FormattedError: public std::runtime_error
    {
    public:
      template <typename... Args>
      FormattedError(const char* fmt, Args... args):
        std::runtime_error(format(fmt, args...))
      { }

    private:
      static std::string
      format(const char* fmt, ...)
      {
        char buf[256];
        va_list ap;
        va_start(ap, fmt);
        vsnprintf(buf, sizeof(buf), fmt, ap);
        va_end(ap);
        return std::string(buf);
      }
    };

    struct Packet
    {
      uint8_t header;
      uint8_t type;

      //! Input data buffer.
      std::vector<uint8_t> input;

      uint8_t checksum;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! I/O handle.
      IO::Handle* m_handle;
      //! Input watchdog.
      Counter<double> m_wdog;
      //! Current packet.
      Packet m_packet;
      //! Timestamp of last packet received.
      double m_ts;
      //! Frequency counter for dispatching data.
      Counter<double> m_freq_counter;
      //! Average frequency of data received.
      MovingAverage<double> m_freq_avg;
      //! Packet parsed count.
      unsigned m_msg_count;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(nullptr),
        m_freq_avg(10)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("IO Port - Device", m_args.io_handle)
          .defaultValue("uart://ttyUSB0:115200")
          .description("I/O handle to use for communication with the device.");

        param("Input Timeout", m_args.inp_tout)
          .units(Units::Second)
          .defaultValue("4.0")
          .minimumValue("0.0")
          .description("Input timeout");

        param("Read Frequency", m_args.read_freq)
          .units(Units::Hertz)
          .defaultValue("0.0")
          .description("Frequency at which to read data from the device.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.read_freq))
        {
          setReadFrequency(m_args.read_freq);
          inf("Setting read frequency to %f Hz", m_args.read_freq);
        }

        if (paramChanged(m_args.inp_tout))
          m_wdog.setTop(m_args.inp_tout);
      }

      //! Connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void) override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_handle);
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect(void) override
      {
        Memory::clear(m_handle);
      }

      //! Initialize device.
      void
      onInitializeDevice(void) override
      {
        m_wdog.setTop(m_args.inp_tout);
        m_msg_count = 0;
        m_freq_counter.setTop(1.0);
      }

      //! Wait for header byte.
      void
      waitHeader(void)
      {
        uint8_t byte;
        m_ts = readFromDevice(&byte, 1);

        // Wait for header byte.
        if (byte != c_packet_header)
          throw WaitingForHeader();

        m_packet.header = byte;
      }

      //! Read packet type.
      void
      readType(void)
      {
        uint8_t byte;
        readFromDevice(&byte, 1);

        // Check if the type is valid.
        auto it = c_packet_sizes.find(byte);
        if (it == c_packet_sizes.end())
          throw FormattedError("Invalid packet type: %02X", byte);

        m_packet.type = byte;
        m_packet.input.resize(it->second);
      }

      void
      readInput(void)
      {
        readFromDevice(m_packet.input.data(), m_packet.input.size());
      }

      //! Read data from the device.
      //! @param[in] data buffer to store read data.
      //! @param[in] size number of bytes to read.
      //! @param[in] timeout timeout in seconds.
      //! @return timestamp of the read operation.
      //! @throws FormattedError if reading fails or times out.
      double
      readFromDevice(uint8_t* data, size_t size, double timeout = 0.1)
      {
        double ts = -1.0;
        Counter<float> timer(timeout);
        size_t bytes_read = 0;

        while (bytes_read < size)
        {
          if (!Poll::poll(*m_handle, timer.getRemaining()))
            throw FormattedError("Timeout while reading from device");

          uint8_t byte;
          size_t n = m_handle->read(&byte, 1);
          if (n == 0)
            throw FormattedError("Failed to read from device");

          if (ts < 0.0)
            ts = Clock::get();

          // Store in main buffer
          data[bytes_read++] = byte;
        }

        return ts;
      }

      void
      onChecksum(void)
      {
        readFromDevice(&m_packet.checksum, 1);

        uint32_t checksum = m_packet.header + m_packet.type;
        for (size_t i = 0; i < m_packet.input.size(); ++i)
          checksum += m_packet.input[i];

        checksum = checksum % 256;  // Ensure checksum is within byte range

        if (checksum != m_packet.checksum)
          throw FormattedError("Checksum mismatch: expected %02X, got %02X", checksum,
                               m_packet.checksum);

        // Extract roll, pitch, and yaw.

        switch (m_packet.type)
        {
          case PACKET_ACCELEROMETER:
            onAcceleration();
            break;

          case PACKET_GYROSCOPE:
            onGyroscope();
            break;

          case PACKET_ANGLE:
            onEulerAngles();
            break;

          case PACKET_MAGNETOMETER:
            onMagnetometer();
            break;

          case PACKET_QUATERNION:
            m_msg_count++;
            break;

          default:
            break;
        }

        // Reset state to wait for next header.
        m_wdog.reset();

        // Print packet in hex format.
        std::ostringstream oss;
        oss << std::hex << std::uppercase << std::setfill('0');
        oss << "Packet: " << std::setw(2) << (int)m_packet.header << " ";
        oss << std::setw(2) << (int)m_packet.type << " ";
        for (size_t i = 0; i < m_packet.input.size(); ++i)
          oss << std::setw(2) << (int)m_packet.input[i] << " ";
        oss << std::setw(2) << (int)m_packet.checksum;

        spew("Hex: %s", oss.str().c_str());
      }

      void
      onAcceleration(void)
      {
        uint16_t ax, ay, az;
        std::memcpy(&ax, &m_packet.input[0], 2);
        std::memcpy(&ay, &m_packet.input[2], 2);
        std::memcpy(&az, &m_packet.input[4], 2);

        float f_ax = ax / 32768.0f * 16.0f;
        float f_ay = ay / 32768.0f * 16.0f;
        float f_az = az / 32768.0f * 16.0f;

        Acceleration acc;
        acc.x = Angles::normalizeRadian(Angles::radians(f_ax));
        acc.y = Angles::normalizeRadian(Angles::radians(f_ay));
        acc.z = Angles::normalizeRadian(Angles::radians(f_az));

        dispatchMessage(acc);

        trace("angles: roll=%f, pitch=%f, yaw=%f", Angles::degrees(acc.x), Angles::degrees(acc.y),
              Angles::degrees(acc.z));
      }

      void
      onGyroscope(void)
      {
        uint16_t gx, gy, gz;
        std::memcpy(&gx, &m_packet.input[0], 2);
        std::memcpy(&gy, &m_packet.input[2], 2);
        std::memcpy(&gz, &m_packet.input[4], 2);

        float f_gx = gx / 32768.0f * 2000.0f;  // Scale factor for gyroscope
        float f_gy = gy / 32768.0f * 2000.0f;
        float f_gz = gz / 32768.0f * 2000.0f;

        AngularVelocity gyro;
        gyro.x = Angles::normalizeRadian(Angles::radians(f_gx));
        gyro.y = Angles::normalizeRadian(Angles::radians(f_gy));
        gyro.z = Angles::normalizeRadian(Angles::radians(f_gz));

        dispatchMessage(gyro);

        trace("gyroscope: x=%f, y=%f, z=%f", Angles::degrees(gyro.x), Angles::degrees(gyro.y),
              Angles::degrees(gyro.z));
      }

      void
      onMagnetometer(void)
      {
        uint16_t mx, my, mz;
        std::memcpy(&mx, &m_packet.input[0], 2);
        std::memcpy(&my, &m_packet.input[2], 2);
        std::memcpy(&mz, &m_packet.input[4], 2);

        MagneticField mag;
        mag.x = mx;
        mag.y = my;
        mag.z = mz;

        dispatchMessage(mag);

        trace("magnetometer: x=%f, y=%f, z=%f (uT)", mag.x, mag.y, mag.z);
      }

      void
      onEulerAngles(void)
      {
        uint16_t roll, pitch, yaw;
        std::memcpy(&roll, &m_packet.input[0], 2);
        std::memcpy(&pitch, &m_packet.input[2], 2);
        std::memcpy(&yaw, &m_packet.input[4], 2);

        float f_roll = roll / 32768.0f * 180.0f;
        float f_pitch = pitch / 32768.0f * 180.0f;
        float f_yaw = yaw / 32768.0f * 180.0f;

        EulerAngles euler;
        euler.phi = Angles::normalizeRadian(Angles::radians(f_roll));
        euler.theta = Angles::normalizeRadian(Angles::radians(f_pitch));
        euler.psi = Angles::normalizeRadian(Angles::radians(f_yaw));
        euler.psi_magnetic = euler.psi;

        dispatchMessage(euler);

        trace("angles: roll=%f, pitch=%f, yaw=%f", Angles::degrees(euler.phi),
              Angles::degrees(euler.theta), Angles::degrees(euler.psi));
      }

      void
      dispatchMessage(IMC::Message& msg)
      {
        // msg.setTimeStamp(m_ts);
        dispatch(msg);
        m_msg_count++;
      }

      void
      process(void)
      {
        try
        {
          waitHeader();
          readType();
          readInput();
          onChecksum();
        }
        catch (const WaitingForHeader&)
        {
          spew("Waiting for header byte...");
          return;
        }
        catch (const std::exception& e)
        {
          err("Err: %s", e.what());
        }
      }

      bool
      onReadData(void) override
      {
        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        // If read frequency != 0, this value will not be very accurate.
        if (m_freq_counter.overflow())
        {
          m_freq_avg.update(m_msg_count);
          m_freq_counter.reset();
          debug("Frequency: %f Hz : Last second %d", m_freq_avg.mean(), m_msg_count);
          m_msg_count = 0;
        }

        process();

        return true;
      }
    };
  }
}

DUNE_TASK
