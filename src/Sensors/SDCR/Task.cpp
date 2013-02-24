//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <string>
#include <cstring>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace SDCR
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC derived messages.
    static const unsigned c_adcs_max = 6;

    //! Commands to device.
    enum Commands
    {
      CMD_STATE = 0x01
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
    };

    struct Task: public Tasks::Periodic
    {
      //! Device protocol handler.
      Hardware::LUCL::Protocol m_proto;
      //! ADC Messages.
      Message* m_adcs[c_adcs_max];
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        std::memset(m_adcs, 0, sizeof(m_adcs));

        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("ADC Reference Voltage", m_args.ref_volt)
        .units(Units::Volt)
        .defaultValue("1.1");

        for (unsigned i = 0; i < c_adcs_max; ++i)
        {
          std::string label = String::str("ADC%d - Message", i);
          param(label, m_args.adc_messages[i]);

          label = String::str("ADC%d - Conversion", i);
          param(label, m_args.adc_factors[i])
          .defaultValue("1.0, 0.0")
          .size(2);

          label = String::str("ADC%d - Entity Label", i);
          param(label, m_args.adc_elabels[i]);
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
          m_adcs[i]->setSourceEntity(reserveEntity(m_args.adc_elabels[i]));
      }

      void
      onResourceAcquisition(void)
      {
        m_proto.setUART(m_args.uart_dev);
        m_proto.open();
        m_proto.requestVersion();
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
        }
        (void)data_size;
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        inf("%s: %u.%u.%d", DTR("version"), major, minor, (int)patch);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      bool
      waitForCommand(uint8_t code)
      {
        LUCL::Command cmd;
        unsigned retries = 10;

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
      task(void)
      {
        // Request state.
        m_proto.sendCommand(CMD_STATE);
        if (!waitForCommand(CMD_STATE))
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          err(DTR("failed to receive state"));
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }
    };
  }
}

DUNE_TASK
