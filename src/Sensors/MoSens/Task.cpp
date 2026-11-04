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

#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <modbus/modbus.h>

namespace Sensors
{
  namespace MoSens
  {
    using DUNE_NAMESPACES;

    //! Modbus default timeout, in seconds.
    constexpr uint32_t c_modbus_timeout = 1;
    //! Modbus timeout during initialization, in microseconds.
    constexpr uint32_t c_modbus_init_timeout = 50000;
    //! Device Modbus slave address register.
    constexpr uint16_t c_reg_device_slave_addr = 0x0000;
    //! Device serial number register.
    constexpr uint16_t c_reg_device_serial_number = 0x0001;
    //! Device type register.
    constexpr uint16_t c_reg_device_type = 0x0002;
    //! Device software version register.
    constexpr uint16_t c_reg_device_sw_version = 0x0003;
    //! Device state of ended resistor register.
    constexpr uint16_t c_reg_device_state_ended_resistor = 0x0005;
    //! Device link speed register.
    constexpr uint16_t c_reg_device_link_speed = 0x0006;
    //! Device measurement period register.
    constexpr uint16_t c_reg_device_measurement_period = 0x00b0;
    //! Device channel data (float ABCD) register.
    constexpr uint16_t c_reg_device_abcd = 0x0101;
    //! Device name register.
    constexpr uint16_t c_reg_device_name = 0x0600;
    //! Device number of channels register.
    constexpr uint16_t c_reg_device_num_channels = 0x06b0;
    //! Device acquisition duration register.
    constexpr uint16_t c_reg_device_acq_dur = 0x06b1;
    //! Default delay for sensor to stabilize.
    constexpr float c_delay_stabilize = 1.0f;
    //! Maximum number of channels supported by the device.
    constexpr uint16_t c_max_num_channels = 3;
    //! Maximum measurement period supported by the device.
    constexpr uint16_t c_max_measurement_period = 43200;
    //! Baud rate values supported by the device.
    const std::unordered_map<unsigned, uint16_t> c_supported_baud_rates = {{2400, 0x0},
                                                                           {4800, 0x1},
                                                                           {9600, 0x2},
                                                                           {19200, 0x3},
                                                                           {38400, 0x4},
                                                                           {57600, 0x5},
                                                                           {115200, 0x6}};

    struct Arguments
    {
      //! Allow to configure device during initialization.
      bool allow_configure;
      //! Auto detect device's baud rate and Modbus address.
      bool auto_detect;
      //! Serial port device name.
      std::string serial_port_name;
      //! Serial port baud rate.
      int serial_port_baud_rate;
      //! Device Modbus slave address.
      uint16_t device_addr;
      //! IMC messages to be published for each channel.
      std::vector<std::string> chs_imc;
    };

    //! @author Bernardo Gabriel
    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! Modbus context.
      modbus_t* m_modbus_ctx;
      //! IMC Messages to be published for each channel.
      std::array<std::unique_ptr<IMC::Message>, c_max_num_channels> m_chs_imc;
      //! Version Info Message.
      IMC::VersionInfo m_version;
      //! Device info.
      struct DeviceInfo
      {
        //! Name.
        std::string name;
        //! Serial number.
        uint32_t serial_number;
        //! Software version.
        struct SoftwareVersion
        {
          //! Major version.
          uint16_t major;
          //! Minor version.
          uint16_t minor;
          //! Revision version.
          uint16_t revision;
        } sw_version;
      } m_device_info;
      //! Device is initialized.
      bool m_device_initialized;
      //! Device number of channels.
      uint16_t m_device_num_chs;
      //! Device Modbus slave address.
      uint16_t m_device_addr;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_modbus_ctx(nullptr),
        m_device_initialized(false),
        m_device_num_chs(0),
        m_device_addr(0)
      {
        paramConfigurableSampling(CSM_PERIODIC_SINGLE_SAMPLING);

        param("Allow Configuration", m_args.allow_configure)
        .defaultValue("false")
        .description("Allow to configure device during initialization. "
                     "If enabled, the driver is allowed to set specified "
                     "Baud Rate and Modbus Address.");
        
        param("Auto Detect", m_args.auto_detect)
        .defaultValue("false")
        .description("Auto detect device's baud rate and Modbus address. "
                     "If enabled, the driver is allowed to attempt to detect the "
                     "device's baud rate and Modbus address, if they are set to 0 "
                     "or current configuration fails.");

        param("Serial Port - Device Name", m_args.serial_port_name)
        .description("Serial port device name.");

        param("Serial Port - Baud Rate", m_args.serial_port_baud_rate)
        .values("0, 2400, 4800, 9600, 19200, 38400, 57600, 115200")
        .defaultValue("9600")
        .description("Serial port baud rate. "
                     "If set to 0, the driver will discover the baud rate.");

        param("Modbus Address", m_args.device_addr)
        .minimumValue("0")
        .maximumValue("247")
        .defaultValue("128")
        .description("Device Modbus slave address. "
                     "If set to 0, the driver will discover the slave address.");

        param("IMC Messages", m_args.chs_imc)
        .minimumSize(1)
        .maximumSize(c_max_num_channels)
        .description("IMC messages to be published for each channel. "
                     "The number of messages must match the number of "
                     "channels supported by the device.");

        m_version.op = IMC::VersionInfo::OP_REPLY;

        bind<IMC::VersionInfo>(this);
      }

      ~Task() override
      {
        onDisconnect();
      }

      void
      onUpdateParameters(void) override
      {
        BasicDeviceDriver::onUpdateParameters();

        if (isActive() && (paramChanged(m_args.serial_port_name) ||
                           paramChanged(m_args.serial_port_baud_rate)))
          throw RestartNeeded("Serial port parameters changed.", 5);

        if (paramChanged(m_args.device_addr) && m_device_initialized)
        {
          if (m_args.device_addr == 0)
          {
            war("Setting Modbus address to 0 is not allowed, when the device is initialized. "
                "Returning to previous value: %u.", m_device_addr);
            applyEntityParameter(&m_args.device_addr, m_device_addr);
          }
          else if (m_args.allow_configure)
          {
            if (!configureModbusAddress(m_args.device_addr))
            {
              war("Failed to configure Modbus address. Returning to previous value: %u.", m_device_addr);
              applyEntityParameter(&m_args.device_addr, m_device_addr);
            }
            else
              inf("Modbus address parameter changed to %u.", m_args.device_addr);
          }
          else
          {
            war("Modbus address parameter changed, but configuration is not allowed. "
                "Returning to previous value: %u.", m_device_addr);
            applyEntityParameter(&m_args.device_addr, m_device_addr);
          }
        }

        if (paramChanged(m_args.chs_imc))
        {
          size_t chs = m_args.chs_imc.size();
          if (m_device_num_chs > 0)
            chs = std::min(chs, (size_t)m_device_num_chs);

          for (size_t i = 0; i < chs; ++i)
            m_chs_imc[i].reset(IMC::Factory::produce(m_args.chs_imc[i]));
        }
      }

      void
      clearModbusCtx(void)
      {
        if (m_modbus_ctx != nullptr)
        {
          modbus_close(m_modbus_ctx);
          modbus_free(m_modbus_ctx);
          m_modbus_ctx = nullptr;
        }
      }

      void
      connectModbus(const char* device, int baud)
      {
        clearModbusCtx();

        m_modbus_ctx = modbus_new_rtu(device, baud, 'N', 8, 1);

        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        if (modbus_connect(m_modbus_ctx) == -1)
        {
          const char* error = modbus_strerror(errno);
          clearModbusCtx();
          throw RestartNeeded(String::str("connection failed: %s", error), 5);
        }
      }

      void
      setMobdusTimeout(uint32_t seconds, uint32_t microseconds = 0)
      {
        if (modbus_set_response_timeout(m_modbus_ctx, seconds, microseconds) == -1)
        {
          const char* error = modbus_strerror(errno);
          clearModbusCtx();
          throw RestartNeeded(String::str("failed to set Modbus timeout: %s", error), 5);
        }
      }

      void
      setModbusAddress(uint16_t addr)
      {
        if (modbus_set_slave(m_modbus_ctx, addr) == -1)
        {
          const char* error = modbus_strerror(errno);
          clearModbusCtx();
          throw RestartNeeded(String::str("failed to set Modbus slave id: %s", error), 5);
        }
      }

      uint16_t
      detectAddress(unsigned baud)
      {
        for (uint16_t addr = 1; addr <= 247; ++addr)
        {
          spew("attempting to detect device at baud rate %u (%u)", baud, addr);
          setModbusAddress(addr);

          if (probeDevice())
          {
            trace("device detected at baud rate %u (%u)", baud, addr);
            return addr;
          }
        }

        return 0;
      }

      bool
      onConnect(void) override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);

        m_device_initialized = false;

        const char* device = m_args.serial_port_name.c_str();
        unsigned baud = m_args.serial_port_baud_rate;
        uint16_t addr = m_args.device_addr;

        if (baud != 0)
        {
          connectModbus(device, baud);
          setMobdusTimeout(0, c_modbus_init_timeout);

          if (addr != 0)
          {
            setModbusAddress(addr);
            spew("attempting to detect device at baud rate %u (%u)", baud, addr);

            if (probeDevice())
            {
              trace("device detected at baud rate %u (%u)", baud, addr);
              m_device_addr = addr;
              return true;
            }
          }

          if (!m_args.auto_detect)
            return false;
          
          m_device_addr = detectAddress(baud);
          if (m_device_addr != 0)
            return true;
        }

        if (addr != 0 && m_args.auto_detect)
        {
          for (const auto& baud_rate : c_supported_baud_rates)
          {
            if (baud_rate.first == baud)
              continue;

            baud = baud_rate.first;

            connectModbus(device, baud);
            setMobdusTimeout(0, c_modbus_init_timeout);
            setModbusAddress(addr);
            spew("attempting to detect device at baud rate %u (%u)", baud, addr);

            if (probeDevice())
            {
              trace("device detected at baud rate %u (%u)", baud, addr);
              m_device_addr = addr;
              applyEntityParameter(&m_args.serial_port_baud_rate, baud);
              return true;
            }

            waitForMessages(c_delay_stabilize, true);
          }
        }

        if (!m_args.auto_detect)
          return false;

        for (const auto& baud_rate : c_supported_baud_rates)
        {
          if (baud_rate.first == baud)
            continue;

          baud = baud_rate.first;

          connectModbus(device, baud);
          setMobdusTimeout(0, c_modbus_init_timeout);

          m_device_addr = detectAddress(baud);
          if (m_device_addr != 0)
          {
            applyEntityParameter(&m_args.serial_port_baud_rate, baud);
            return true;
          }

          waitForMessages(c_delay_stabilize, true);
        }

        return false;
      }

      void
      onDisconnect(void) override
      {
        stopAcquisition();
        clearModbusCtx();
      }

      void
      consume(const IMC::VersionInfo* msg)
      {
        if (msg->op != IMC::VersionInfo::OP_QUERY)
          return;

        dispatchReply(*msg, m_version);
      }

      bool
      readHoldingRegisters(uint16_t addr, uint16_t count, uint16_t* regs)
      {
        int rc = modbus_read_registers(m_modbus_ctx, addr, count, regs);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          spew("unable to read holding registers at %u (%u): %s", addr, count, error);
          return false;
        }

        return true;
      }

      bool
      readInputRegisters(uint16_t addr, uint16_t count, uint16_t* regs)
      {
        int rc = modbus_read_input_registers(m_modbus_ctx, addr, count, regs);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          spew("unable to read input registers at %u (%u): %s", addr, count, error);
          return false;
        }

        return true;
      }

      bool
      writeHoldingRegister(uint16_t addr, const uint16_t value)
      {
        int rc = modbus_write_register(m_modbus_ctx, addr, value);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          spew("unable to write holding register at %u: %s", addr, error);
          return false;
        }

        return true;
      }

      bool
      probeDevice(void)
      {
        modbus_flush(m_modbus_ctx);
        return stopAcquisition();
      }

      bool
      readDeviceSerialNumber(void)
      {
        uint16_t regs[2];
        if (!readInputRegisters(c_reg_device_serial_number, 2, regs))
        {
          trace("unable to read device serial number");
          return false;
        }

        m_device_info.serial_number = ((uint32_t)regs[0] << 16) | regs[1];
        trace("serial number: 0x%08x", m_device_info.serial_number);
        return true;
      }

      bool
      readDeviceSWVersion(void)
      {
        uint16_t regs[2];
        if (!readInputRegisters(c_reg_device_sw_version, 2, regs))
        {
          trace("unable to read device software version");
          return false;
        }

        uint32_t version = ((uint32_t)regs[0] << 16) | regs[1];
        m_device_info.sw_version.major = (version >> 24) & 0xFF;
        m_device_info.sw_version.minor = (version >> 16) & 0xFF;
        m_device_info.sw_version.revision = version & 0xFFFF;
        trace("SW version: %u.%u.%u", m_device_info.sw_version.major,
                                      m_device_info.sw_version.minor,
                                      m_device_info.sw_version.revision);
        return true;
      }

      bool
      readDeviceName(void)
      {
        uint16_t regs[4];
        if (!readHoldingRegisters(c_reg_device_name, 4, regs))
        {
          err("unable to read device name");
          return false;
        }

        char name[9];
        snprintf(name, sizeof(name), "%c%c%c%c%c%c%c%c", regs[0] >> 8 & 0xFF,
                                                         regs[0] & 0xFF,
                                                         regs[1] >> 8 & 0xFF,
                                                         regs[1] & 0xFF,
                                                         regs[2] >> 8 & 0xFF,
                                                         regs[2] & 0xFF,
                                                         regs[3] >> 8 & 0xFF,
                                                         regs[3] & 0xFF);
        m_device_info.name = std::string(name);
        trace("device name: %s", m_device_info.name.c_str());
        return true;
      }

      bool
      readDeviceNumChannels(void)
      {
        uint16_t regs[1];
        if (!readHoldingRegisters(c_reg_device_num_channels, 1, regs))
        {
          trace("unable to read device number of channels");
          return false;
        }

        m_device_num_chs = regs[0];
        trace("device number of channels: %u", m_device_num_chs);
        return true;
      }

      bool
      readDeviceAcquisitionDuration(void)
      {
        uint16_t regs[1];
        if (!readHoldingRegisters(c_reg_device_acq_dur, 1, regs))
        {
          trace("unable to read device acquisition duration");
          return false;
        }

        trace("device acquisition duration: %u ms", regs[0]);
        return true;
      }

      bool
      readMeasurementPeriod(void)
      {
        uint16_t regs[1];
        if (!readHoldingRegisters(c_reg_device_measurement_period, 1, regs))
        {
          trace("unable to read measurement period");
          return false;
        }

        trace("measurement period: %u s", regs[0]);
        return true;
      }

      bool
      readDeviceData(void)
      {
        std::vector<uint16_t> regs(2 * m_device_num_chs);
        if (!readInputRegisters(c_reg_device_abcd, regs.size(), regs.data()))
        {
          trace("unable to read device data");
          return false;
        }

        for (uint16_t channel = 0; channel < m_device_num_chs; ++channel)
        {
          float value = modbus_get_float_abcd(&regs[channel * 2]);
          digestData(value, channel);
        }

        return true;
      }

      bool
      writeSlaveAddress(uint16_t addr)
      {
        if (!writeHoldingRegister(c_reg_device_slave_addr, addr))
        {
          spew("unable to write slave address");
          return false;
        }

        spew("set slave address: %u", addr);
        return true;
      }

      bool
      writeMeasurementPeriod(uint16_t period)
      {
        if (!writeHoldingRegister(c_reg_device_measurement_period, period))
        {
          spew("unable to write measurement period");
          return false;
        }

        spew("set measurement period: %u s", period);
        return true;
      }

      bool
      writeLinkSpeed(uint16_t baud)
      {
        const auto it = c_supported_baud_rates.find(baud);
        if (it == c_supported_baud_rates.end())
        {
          war("unsupported baud rate: %u", baud);
          return false;
        }

        if (!writeHoldingRegister(c_reg_device_link_speed, it->second))
        {
          trace("unable to write link speed");
          return false;
        }

        trace("set link speed: %u", baud);
        return true;
      }

      bool
      configureModbusAddress(uint16_t addr)
      {
        if (!writeSlaveAddress(addr))
          return false;

        waitForMessages(c_delay_stabilize, true);
        setModbusAddress(addr);
        m_device_addr = addr;
        return true;
      }

      void
      onInitializeDevice(void) override
      {
        modbus_flush(m_modbus_ctx);

        stopAcquisition();

        if (m_args.device_addr != m_device_addr)
        {
          if (m_args.allow_configure && m_args.device_addr != 0)
          {
            if (!configureModbusAddress(m_args.device_addr))
              throw RestartNeeded("Failed to configure Modbus address.", 5);
          }
          else
            applyEntityParameter(&m_args.device_addr, m_device_addr);
        }

        setMobdusTimeout(c_modbus_timeout);

        if (!m_device_initialized)
        {
          if (readDeviceSerialNumber() &&
              readDeviceSWVersion() &&
              readDeviceName())
          {
            std::ostringstream version;
            version << "name: " << m_device_info.name
                    << ", serial number: 0x" << std::hex
                    << std::setw(8) << std::setfill('0')
                    << m_device_info.serial_number
                    << ", SW version: " << std::dec
                    << m_device_info.sw_version.major << "."
                    << m_device_info.sw_version.minor << "."
                    << m_device_info.sw_version.revision;

            
            m_version.version = version.str();
            dispatch(m_version);
            debug("device version info: %s", m_version.version.c_str());
          }
          else
            throw RestartNeeded("Failed to read device version information.", 5);

          if (!readDeviceNumChannels() ||
              !readDeviceAcquisitionDuration() ||
              !readMeasurementPeriod())
            throw RestartNeeded("Failed to read device information.", 5);
        }

        waitForMessages(c_delay_stabilize, true);

        uint16_t period = static_cast<uint16_t>(getSamplePeriodicity());
        startAcquisition(period);
        m_device_initialized = true;
      }

      bool
      stopAcquisition(void)
      {
        if (m_modbus_ctx == nullptr)
          return true;

        if (!writeMeasurementPeriod(0))
        {
          trace("unable to stop acquisition");
          return false;
        }

        waitForMessages(c_delay_stabilize, true);
        return true;
      }

      bool
      startAcquisition(uint16_t period)
      {
        period = trimValue(period, 0, c_max_measurement_period);
        if (!writeMeasurementPeriod(period))
        {
          trace("unable to start acquisition");
          return false;
        }

        waitForMessages(c_delay_stabilize, true);
        return true;
      }

      void
      digestData(float value, uint16_t channel)
      {
        if (channel >= m_args.chs_imc.size())
        {
          trace("channel %u: no IMC message configured", channel);
          return;
        }

        auto& msg = m_chs_imc[channel];
        msg->setValueFP(value);
        dispatch(*msg);
        debug("channel %u: %.3f", channel, value);
      }

      bool
      onReadData(void) override
      {
        readDeviceData();
        return true;
      }
    };
  }
}

DUNE_TASK
