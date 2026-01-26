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
  //! Return contents (output: acceleration, angular velocity, magnetic field and euler angles).
  constexpr uint16_t c_return_contents = 0x001e;
  //! Command headers.
  constexpr uint8_t c_command_header_0 = 0xff;
  constexpr uint8_t c_command_header_1 = 0xaa;
  //! Command unlock bytes.
  constexpr uint8_t c_command_unlock_byteL = 0x88;
  constexpr uint8_t c_command_unlock_byteH = 0xb5;

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
    { PACKET_QUATERNION, 8 }     // Quaternion data packet
  };

  //! Command address map.
  enum CommandAddress : uint8_t
  {
    CMD_ADDR_SAVE = 0x00,
    CMD_ADDR_RSW = 0x02,
    CMD_ADDR_RRATE = 0x03,
    CMD_ADDR_HXOFFSET = 0x0b,
    CMD_ADDR_HYOFFSET = 0x0c,
    CMD_ADDR_HZOFFSET = 0x0d,
    CMD_ADDR_SLEEP = 0x22,
    CMD_ADDR_KEY = 0x69
  };

  //! Return rate map.
  const std::map<float, uint8_t> c_rate_map = {{ 0.2f, 0x01 },
                                               { 0.5f, 0x02 },
                                               { 1.0f, 0x03 },
                                               { 2.0f, 0x04 },
                                               { 5.0f, 0x05 },
                                               { 10.0f, 0x06 },
                                               { 20.0f, 0x07 },
                                               { 50.0f, 0x08 },
                                               { 100.0f, 0x09 },
                                               { 200.0f, 0x0b }};

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
      //! Output data rate in Hz.
      float odr;
      //! Compass Calibration entity label.
      std::string calib_elabel;
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

    class Command
    {
    public:
      Command(uint8_t address, uint8_t dataL = 0x00, uint8_t dataH = 0x00)
      {
        data[0] = c_command_header_0;
        data[1] = c_command_header_1;
        data[2] = address;
        data[3] = dataL;
        data[4] = dataH;
      }

      inline const uint8_t*
      cmd(void) const
      {
        return data.data();
      }

    private:
      std::array<uint8_t, 5> data;
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
      //! Compass Calibration entity id.
      unsigned m_calib_eid;
      //! Key to unlock commands.
      const Command c_key;
      //! Command to save configuration.
      const Command c_save;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(nullptr),
        m_freq_avg(10),
        m_calib_eid(AddressResolver::invalid()),
        c_key(CMD_ADDR_KEY, c_command_unlock_byteL, c_command_unlock_byteH),
        c_save(CMD_ADDR_SAVE)
      {
        // Define configuration parameters.
        param("IO Port - Device", m_args.io_handle)
        .editable("false")
        .description("I/O handle to use for communication with the device.");

        param("Output Data Rate", m_args.odr)
        .units(Units::Hertz)
        .defaultValue("10.0")
        .values("0.2, 0.5, 1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0")
        .description("Output data rate in Hz.");

        param("Compass Calibration - Entity Label", m_args.calib_elabel)
        .editable("false")
        .description("Entity label of Compass Calibration task to receive hard iron corrections from.");

        bind<IMC::MagneticField>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        DUNE::Hardware::BasicDeviceDriver::onUpdateParameters();

        if (!isActive())
          return;

        if (paramChanged(m_args.odr) && m_args.odr > 0)
          m_wdog.setTop(2 * 1 / m_args.odr);
      }

      void
      onEntityResolution(void) override
      {
        try
        {
          m_calib_eid = resolveEntity(m_args.calib_elabel);
        }
        catch(const std::exception& e)
        {
          war("failed to resolve Compass Calibration entity : %s", e.what());
        }
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        if (!isActive())
          return;

        if (!AddressResolver::isValid(m_calib_eid))
          return;

        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_calib_eid)
          return;

        setHardIronFactors(msg->x, msg->y, msg->z);
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
        setSleep();
        Memory::clear(m_handle);
      }

      //! Initialize device.
      void
      onInitializeDevice(void) override
      {
        setOutputContents();
        setOutputRate(m_args.odr);

        if (m_args.odr > 0)
          m_wdog.setTop(2 * 1 / m_args.odr);

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

        float f_ax = static_cast<float>(ax) / 32768.0f * 16.0f;
        float f_ay = static_cast<float>(ay) / 32768.0f * 16.0f;
        float f_az = static_cast<float>(az) / 32768.0f * 16.0f;

        Acceleration acc;
        acc.x = f_ax / 9.8f;
        acc.y = f_ay / 9.8f;
        acc.z = f_az / 9.8f;

        dispatchMessage(acc);

        trace("accel: x=%f, y=%f, z=%f (m/s/s)", acc.x, acc.y, acc.z);
      }

      void
      onGyroscope(void)
      {
        uint16_t gx, gy, gz;
        std::memcpy(&gx, &m_packet.input[0], 2);
        std::memcpy(&gy, &m_packet.input[2], 2);
        std::memcpy(&gz, &m_packet.input[4], 2);

        float f_gx = static_cast<float>(gx) / 32768.0f * 2000.0f;
        float f_gy = static_cast<float>(gy) / 32768.0f * 2000.0f;
        float f_gz = static_cast<float>(gz) / 32768.0f * 2000.0f;

        AngularVelocity gyro;
        gyro.x = Angles::radians(f_gx);
        gyro.y = Angles::radians(f_gy);
        gyro.z = Angles::radians(f_gz);

        dispatchMessage(gyro);

        trace("gyro: x=%f, y=%f, z=%f (rad/s)", gyro.x, gyro.y, gyro.z);
      }

      void
      onMagnetometer(void)
      {
        uint16_t mx, my, mz;
        std::memcpy(&mx, &m_packet.input[0], 2);
        std::memcpy(&my, &m_packet.input[2], 2);
        std::memcpy(&mz, &m_packet.input[4], 2);

        float f_mx = static_cast<float>(mx) * 0.15f;
        float f_my = static_cast<float>(my) * 0.15f;
        float f_mz = static_cast<float>(mz) * 0.15f;

        MagneticField mag;
        mag.x = f_mx * 0.01f;
        mag.y = f_my * 0.01f;
        mag.z = f_mz * 0.01f;

        dispatchMessage(mag);

        trace("mag: x=%f, y=%f, z=%f (G)", mag.x, mag.y, mag.z);
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

        trace("angles: roll=%f, pitch=%f, yaw=%f (deg)", Angles::degrees(euler.phi),
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

      void
      sendCommand(const Command& cmd, bool save = false)
      {
        m_handle->write(c_key.cmd(), 5);
        Delay::waitMsec(100);
        m_handle->write(cmd.cmd(), 5);
        Delay::waitMsec(100);

        if (save)
          m_handle->write(c_save.cmd(), 5);
      }

      void
      setOutputContents(void)
      {
        uint8_t valL = c_return_contents & 0x00FF;
        uint8_t valH = (c_return_contents >> 8) & 0x00FF;
        Command cmd(CMD_ADDR_RSW, valL, valH);
        sendCommand(cmd, true);
      }

      void
      setOutputRate(float rate)
      {
        if (c_rate_map.find(rate) == c_rate_map.end())
        {
          err("Invalid rate: %f Hz", rate);
          return;
        }

        uint8_t val = c_rate_map.at(rate);
        Command cmd(CMD_ADDR_RRATE, val);
        sendCommand(cmd, true);
      }

      void
      setHardIronFactors(float x, float y, float z)
      {
        int16_t aux = static_cast<int16_t>(x * 100 / 0.15f);
        uint8_t auxL = aux & 0x00FF;
        uint8_t auxH = (aux >> 8) & 0x00FF;
        Command cmd_x(CMD_ADDR_HXOFFSET, auxL, auxH);
        sendCommand(cmd_x);

        aux = static_cast<int16_t>(y * 100 / 0.15f);
        auxL = aux & 0x00FF;
        auxH = (aux >> 8) & 0x00FF;
        Command cmd_y(CMD_ADDR_HYOFFSET, auxL, auxH);
        sendCommand(cmd_y);

        aux = static_cast<int16_t>(z * 100 / 0.15f);
        auxL = aux & 0x00FF;
        auxH = (aux >> 8) & 0x00FF;
        Command cmd_z(CMD_ADDR_HZOFFSET, auxL, auxH);
        sendCommand(cmd_z);
      }

      void
      setSleep(void)
      {
        Command cmd(CMD_ADDR_SLEEP, 0x01);
        sendCommand(cmd);
      }

      bool
      onReadData(void) override
      {
        process();

        if (m_freq_counter.overflow())
        {
          m_freq_avg.update(m_msg_count);
          m_freq_counter.reset();
          std::string description = String::str("active | frequency: %.1f Hz", m_freq_avg.mean() / 4);
          setEntityState(IMC::EntityState::ESTA_NORMAL, description);
          m_msg_count = 0;
        }

        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }
    };
  }
}

DUNE_TASK
