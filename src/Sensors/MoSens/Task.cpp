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

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <modbus/modbus.h>

namespace Sensors
{
  namespace MoSens
  {
    using DUNE_NAMESPACES;

    //! Sensor serial number register.
    constexpr uint16_t c_reg_sensor_serial_number = 0x0001;
    //! Sensor software version register.
    constexpr uint16_t c_reg_sensor_sw_version = 0x0003;
    //! Sensor measurement period register.
    constexpr uint16_t c_reg_sensor_measurement_period = 0x00b0;
    //! Sensor channel data (float ABCD) register.
    constexpr uint16_t c_reg_sensor_abcd = 0x0101;
    //! Sensor name register.
    constexpr uint16_t c_reg_sensor_name = 0x0600;
    //! Sensor number of channels register.
    constexpr uint16_t c_reg_sensor_num_channels = 0x06b0;
    //! Sensor acquisition duration register.
    constexpr uint16_t c_reg_sensor_acq_dur = 0x06b1;
    //! Delay upon acquisition mode change.
    constexpr float c_delay_acquisition = 0.5f;
    //! Maximum number of channels supported by the sensor.
    constexpr uint16_t c_max_num_channels = 3;

    struct Arguments
    {
      //! Serial port device name.
      std::string serial_port_name;
      //! Serial port baud rate.
      int serial_port_baud_rate;
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
      //! Device number of channels.
      uint16_t m_device_num_chs;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_modbus_ctx(nullptr)
      {
        paramConfigurableSampling(CSM_PERIODIC_SINGLE_SAMPLING);

        param("Serial Port - Device Name", m_args.serial_port_name)
        .description("Serial port device name.");

        param("Serial Port - Baud Rate", m_args.serial_port_baud_rate)
        .description("Serial port baud rate.");

        param("IMC Messages", m_args.chs_imc)
        .minimumSize(1)
        .maximumSize(3)
        .description("IMC messages to be published for each channel. "
                     "The number of messages must match the number of "
                     "channels supported by the sensor.");

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

        if (paramChanged(m_args.serial_port_name) || paramChanged(m_args.serial_port_baud_rate))
          throw RestartNeeded("Serial port parameters changed.", 5);
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
      
      bool
      onConnect(void) override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);

        clearModbusCtx();

        m_modbus_ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        if (modbus_set_slave(m_modbus_ctx, 0x80) == -1)
        {
          clearModbusCtx();
          throw RestartNeeded("Failed to set Modbus slave id.", 5);
        }

        modbus_set_response_timeout(m_modbus_ctx, 1, 0);

        if (modbus_connect(m_modbus_ctx) == -1)
        {
          const char* error = modbus_strerror(errno);
          clearModbusCtx();
          throw RestartNeeded(String::str("connection failed: %s", error), 5);
        }

        return true;
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

      void
      readHoldingRegisters(uint16_t addr, uint16_t count, uint16_t* regs)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        int rc = modbus_read_registers(m_modbus_ctx, addr, count, regs);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          throw RestartNeeded(String::str("connection failed: %s", error), 5);
        }
      }

      void
      readInputRegisters(uint16_t addr, uint16_t count, uint16_t* regs)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        int rc = modbus_read_input_registers(m_modbus_ctx, addr, count, regs);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          throw RestartNeeded(String::str("connection failed: %s", error), 5);
        }
      }

      void
      writeHoldingRegister(uint16_t addr, const uint16_t value)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        int rc = modbus_write_register(m_modbus_ctx, addr, value);

        if (rc == -1)
        {
          const char* error = modbus_strerror(errno);
          throw RestartNeeded(String::str("connection failed: %s", error), 5);
        }
      }

      void
      readSensorSerialNumber(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[2];
        readInputRegisters(c_reg_sensor_serial_number, 2, regs);
        m_device_info.serial_number = ((uint32_t)regs[0] << 16) | regs[1];
        trace("serial number: 0x%08x", m_device_info.serial_number);
      }

      void
      readSensorSWVersion(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[2];
        readInputRegisters(0x0003, 2, regs);
        uint32_t version = ((uint32_t)regs[0] << 16) | regs[1];
        m_device_info.sw_version.major = (version >> 24) & 0xFF;
        m_device_info.sw_version.minor = (version >> 16) & 0xFF;
        m_device_info.sw_version.revision = version & 0xFFFF;
        trace("SW version: %u.%u.%u", m_device_info.sw_version.major,
                                      m_device_info.sw_version.minor,
                                      m_device_info.sw_version.revision);
      }

      void
      readSensorName(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[4];
        readHoldingRegisters(0x0600, 4, regs);
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
      }

      void
      readSensorNumChannels(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[1];
        readHoldingRegisters(c_reg_sensor_num_channels, 1, regs);
        m_device_num_chs = regs[0];
        trace("device number of channels: %u", m_device_num_chs);
      }

      void
      readSensorAcquisitionDuration(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[1];
        readHoldingRegisters(c_reg_sensor_acq_dur, 1, regs);
        trace("device acquisition duration: %u ms", regs[0]);
      }

      void
      readMeasurementPeriod(void)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        uint16_t regs[1];
        readHoldingRegisters(c_reg_sensor_measurement_period, 1, regs);
        trace("measurement period: %u s", regs[0]);
      }

      void
      setMeasurementPeriod(uint16_t period)
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        writeHoldingRegister(c_reg_sensor_measurement_period, period);
        trace("set measurement period: %u s", period);
      }

      void
      readSensorData(void)
      {
        std::vector<uint16_t> regs(2 * m_device_num_chs);
        readInputRegisters(c_reg_sensor_abcd, regs.size(), regs.data());
        for (uint16_t channel = 0; channel < m_device_num_chs; ++channel)
        {
          float value = modbus_get_float_abcd(&regs[channel * 2]);
          digestData(value, channel);
        }
      }

      void
      onInitializeDevice(void) override
      {
        stopAcquisition();

        readSensorSerialNumber();
        readSensorSWVersion();
        readSensorName();

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

        readSensorNumChannels();
        readSensorAcquisitionDuration();
        readMeasurementPeriod();

        uint16_t period = static_cast<uint16_t>(getSamplePeriodicity());
        startAcquisition(period);
      }

      void
      stopAcquisition(void)
      {
        setMeasurementPeriod(0);
        waitForMessages(c_delay_acquisition, true);
      }

      void
      startAcquisition(uint16_t period)
      {
        setMeasurementPeriod(period);
        waitForMessages(c_delay_acquisition, true);
      }

      void
      digestData(float value, uint16_t channel)
      {
        if (channel >= m_args.chs_imc.size())
        {
          war("channel %u: no IMC message configured", channel);
          return;
        }

        IMC::Message* msg = IMC::Factory::produce(m_args.chs_imc[channel]);
        msg->setValueFP(value);
        dispatch(msg);
        Memory::clear(msg);
        trace("channel %u: %.3f", channel, value);
      }

      bool
      onReadData(void) override
      {
        if (m_modbus_ctx == nullptr)
          throw RestartNeeded("Failed to create Modbus context.", 5);

        readSensorData();
        return true;
      }
    };
  }
}

DUNE_TASK
