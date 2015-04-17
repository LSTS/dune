//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the Imagenex 863 Echo Sounder.
  namespace Imagenex863
  {
    using DUNE_NAMESPACES;

    enum ParserState
    {
      PS_HEADER,
      PS_RANGE_LSB,
      PS_RANGE_MSB,
      PS_LEVEL
    };

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // Sound speed on water.
      double sspeed;
      // Use dynamic sound speed.
      bool sspeed_dyn;
      //! Device position.
      std::vector<float> position;
      //! Device orientation.
      std::vector<float> orientation;
    };

    struct Task: public Tasks::Periodic
    {
      // Serial port handle.
      SerialPort* m_uart;
      // Internal parser state.
      ParserState m_state;
      // Range.
      uint16_t m_range;
      // Current sound speed (m/s).
      double m_sspeed;
      // Distance to bottom.
      IMC::Distance m_dist;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_uart(NULL),
        m_state(PS_HEADER)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("2400")
        .description("Serial port baud rate");

        param("Sound Speed on Water", m_args.sspeed)
        .defaultValue("1500")
        .minimumValue("1375")
        .maximumValue("1900")
        .units(Units::MeterPerSecond)
        .description("Water sound speed");

        param("Use Dynamic Sound Speed", m_args.sspeed_dyn)
        .defaultValue("false")
        .description("Update measurements according with measured sound speed");

        param("Device position", m_args.position)
        .defaultValue("0, 0, 0")
        .size(3)
        .description("Device position");

        param("Device orientation", m_args.orientation)
        .defaultValue("0, 0, 0")
        .size(3)
        .description("Device orientation");

        bind<IMC::SoundSpeed>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_sspeed = m_args.sspeed;

        IMC::BeamConfig bc;
        bc.beam_width = Math::Angles::radians(1.0);
        bc.beam_height = Math::Angles::radians(1.0);

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = Math::Angles::radians(m_args.orientation[0]);
        ds.theta = Math::Angles::radians(m_args.orientation[1]);
        ds.psi = Math::Angles::radians(m_args.orientation[2]);
        m_dist.location.clear();
        m_dist.location.push_back(ds);
        m_dist.beam_config.clear();
        m_dist.beam_config.push_back(bc);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value < 0)
          return;

        if (m_args.sspeed_dyn)
          m_sspeed = msg->value;
      }

      void
      task(void)
      {
        uint8_t bfr[16];
        int rv = m_uart->read(bfr, 16);

        for (int i = 0; i < rv; ++i)
        {
          switch (m_state)
          {
            case PS_HEADER:
              if (bfr[i] == 0xFF)
                m_state = PS_RANGE_MSB;
              break;

            case PS_RANGE_MSB:
              m_state = PS_RANGE_LSB;
              m_range = bfr[i] << 8;
              break;

            case PS_RANGE_LSB:
              m_state = PS_LEVEL;
              m_range |= bfr[i];
              break;

            case PS_LEVEL:
              m_state = PS_HEADER;
              m_dist.validity = (m_range == 0) ? IMC::Distance::DV_INVALID : IMC::Distance::DV_VALID;
              // The factor to convert range time to distance is sound speed (m/us) / 2.
              m_dist.value = m_range * m_sspeed * 0.000001 / 2;
              dispatch(m_dist);
              break;

            default:
              m_state = PS_HEADER;
              break;
          }
        }
      }
    };
  }
}

DUNE_TASK
