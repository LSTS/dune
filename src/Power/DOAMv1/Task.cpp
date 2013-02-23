//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <string>
#include <cstring>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  //! %DOAMv1 is responsible to interact with
  //! first generation of the Digital Ocean
  //! Acquisition Module for capturing underwater
  //! images.
  //!
  //! @author Ricardo Martins
  namespace DOAMv1
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC derived messages.
    static const unsigned c_adcs_max = 6;

    //! Commands to device.
    enum Commands
    {
      CMD_STATE = 0x01,
      CMD_PWR_SET = 0x02,
      CMD_STROBE_SEL = 0x03,
      CMD_STROBE_SET = 0x04
    };

    //! Strobe modes.
    enum StrobeMode
    {
      STROBE_MODE_MCU = 0x00,
      STROBE_MODE_CAM = 0x01,
      STROBE_MODE_UNK = 0xff
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! ADC voltage reference.
      double ref_volt;
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_max];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_max];
      //! ADC messages.
      std::string adc_messages[c_adcs_max];
      //! Watchdog timeout.
      double wdog_tout;
    };

    struct Task: public Tasks::Task
    {
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! ADC Messages.
      Message* m_adcs[c_adcs_max];
      //! Watchdog.
      Time::Counter<double> m_wdog;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the device");

        param("ADC Reference Voltage", m_args.ref_volt)
        .units(Units::Volt)
        .defaultValue("1.1");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .description("Watchdog timeout");

        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          std::string label = String::str("ADC Channel %d - Message", i);
          param(label, m_args.adc_messages[i]);

          label = String::str("ADC Channel %d - Conversion", i);
          param(label, m_args.adc_factors[i])
          .defaultValue("1.0, 0.0")
          .size(2);

          label = String::str("ADC Channel %d - Entity Label", i);
          param(label, m_args.adc_elabels[i]);
        }

        // Register handler routines.
        bind<IMC::PowerOperation>(this);
        bind<IMC::EntityControl>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];
        }
      }

      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          if (m_adcs[i] != NULL)
            delete m_adcs[i];

          m_adcs[i] = IMC::Factory::produce(m_args.adc_messages[i]);
        }
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.adc_elabels[i]);
          }
          catch (...)
          {
            eid = reserveEntity(m_args.adc_elabels[i]);
          }
          m_adcs[i]->setSourceEntity(eid);
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_proto.setUART(m_args.uart_dev);
        m_proto.open();
      }

      void
      onResourceRelease(void)
      {
        if (m_proto.isOpen())
          setStrobeMode(STROBE_MODE_MCU);
      }

      void
      onResourceInitialization(void)
      {
        m_proto.requestVersion();

        uint8_t power = (1 << 0);
        m_proto.sendCommand(CMD_PWR_SET, &power, 1);
        if (!waitForCommand(CMD_PWR_SET, 100))
          err(DTR("failed to turn on ATX PSU"));

        setStrobeMode(STROBE_MODE_MCU);

        m_wdog.setTop(m_args.wdog_tout);
      }

      void
      setStrobeMode(StrobeMode mode)
      {
        uint8_t strobe = (uint8_t)mode;
        m_proto.sendCommand(CMD_STROBE_SEL, &strobe, 1);
        if (!waitForCommand(CMD_STROBE_SEL, 100))
        {
          war(DTR("failed to configure strobe mode"));
          return;
        }

        inf(DTR("strobe mode set to: %s"), (mode == STROBE_MODE_MCU) ? "MCU" : DTR("Camera"));
      }

      void
      sendMessages(const uint16_t* unpack)
      {
        // Dispatch ADCs
        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          fp32_t tmp = m_args.adc_factors[i][0] * ((unpack[i] / 1024.0) * m_args.ref_volt) + m_args.adc_factors[i][1];
          m_adcs[i]->setValueFP(tmp);
          dispatch(m_adcs[i]);
        }
      }

      void
      onCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        if (cmd == CMD_STATE)
        {
          uint16_t unpack[] =
          {
            // ADC Channel 0.
            (uint16_t)(data[0] | (data[4] & 0x3 << 0) << 8),
            // ADC Channel 1
            (uint16_t)(data[1] | (data[4] & 0x3 << 2) << 6),
            // ADC Channel 2
            (uint16_t)(data[2] | (data[4] & 0x3 << 4) << 4),
            // ADC Channel 3
            (uint16_t)(data[3] | (data[4] & 0x3 << 6) << 2),
            // ADC Channel 4
            (uint16_t)(data[5] | (data[7] & 0x3 << 0) << 8),
            // ADC Channel 5
            (uint16_t)(data[6] | (data[7] & 0x3 << 2) << 6)
          };

          sendMessages(unpack);

          // Temperature.
          uint16_t temp_code = (data[8] << 8) | data[9];
          int16_t temp = 0;
          std::memcpy(&temp, &temp_code, 2);
          m_temp.value = temp * 0.0625;
          dispatch(m_temp);

          m_wdog.reset();
        }

        (void)data_size;
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        inf(DTR("version: %u.%u.%u"), major, minor, patch);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_IP)
        {
          uint8_t power = 0;
          m_proto.sendCommand(CMD_PWR_SET, &power, 1);
          if (!waitForCommand(CMD_PWR_SET, 100))
            err(DTR("failed to turn off ATX PSU"));
          else
            inf(DTR("ATX turned off"));
        }
        else if (msg->op == IMC::PowerOperation::POP_PWR_DOWN_ABORTED)
        {
          uint8_t power = 1;
          m_proto.sendCommand(CMD_PWR_SET, &power, 1);
          if (!waitForCommand(CMD_PWR_SET, 100))
            err(DTR("failed to turn on ATX PSU"));
          else
            inf(DTR("ATX turned on"));
        }
      }

      void
      consume(const IMC::EntityControl* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->op == IMC::EntityControl::ECO_ACTIVATE)
          setStrobeMode(STROBE_MODE_CAM);
        else
          setStrobeMode(STROBE_MODE_MCU);
      }

      bool
      waitForCommand(uint8_t code, unsigned retries = 10)
      {
        LUCL::Command cmd;

        while (retries)
        {
          LUCL::CommandType type = m_proto.consumeData(cmd);

          switch (type)
          {
            case LUCL::CommandTypeNormal:
              onCommand(cmd.command.code, cmd.command.data, cmd.command.size);
              if (cmd.command.code == code)
                return true;
              break;

            case LUCL::CommandTypeVersion:
              onVersion(cmd.version.major, cmd.version.minor, cmd.version.patch);
              break;

            case LUCL::CommandTypeInvalidVersion:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              break;

            case LUCL::CommandTypeError:
              err("%s: %s", DTR("device reported"), m_proto.getErrorString(cmd.error.code));
              break;

            case LUCL::CommandTypeInvalidChecksum:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              break;

            case LUCL::CommandTypeNone:
              --retries;
              Delay::wait(0.05);
              break;

            default:
              break;
          }
        }

        return false;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.5);

          m_proto.sendCommand(CMD_STATE);
          waitForCommand(CMD_STATE);

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }
    };
  }
}

DUNE_TASK
