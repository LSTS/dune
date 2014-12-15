//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MCI.hpp"
#include "Table.hpp"

namespace Transports
{
  namespace Leviathan
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      std::vector<int> chan_power_lines[c_channel_count];
      std::vector<std::string> chan_filters;
      std::vector<std::string> chan_bauds;
      std::vector<std::string> chan_frames;
      int time_reference;
      std::vector<double> bat_volt_conv;
      double adc_ref;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Power channel config.
      std::vector<uint8_t> m_power_config;
      //! Filters.
      Table* m_table;
      //! Serial port handle.
      SerialPort* m_uart;
      //! MCI.
      MCI* m_mci;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_table(NULL),
        m_uart(NULL),
        m_mci(NULL)
      {
        m_args.chan_filters.resize(c_channel_count);
        m_args.chan_bauds.resize(c_channel_count);
        m_args.chan_frames.resize(c_channel_count);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the device");

        for (unsigned i = 0; i < c_channel_count; ++i)
        {
          param(String::str("Channel %u - Power Line", i), m_args.chan_power_lines[i])
          .defaultValue("")
          .description("Channel's power lines");

          param(String::str("Channel %u - Filter", i), m_args.chan_filters[i])
          .defaultValue("")
          .description("Channel's filter");

          param(String::str("Channel %u - Baud Rate", i), m_args.chan_bauds[i])
          .defaultValue("")
          .description("Channel's baud rate");

          param(String::str("Channel %u - Frame Format", i), m_args.chan_frames[i])
          .defaultValue("")
          .description("Channel's frame format");
        }

        param("Time Reference", m_args.time_reference)
        .defaultValue("-1")
        .description("Time reference channel");

        param("Battery Voltage Conversion", m_args.bat_volt_conv)
        .size(2)
        .defaultValue("31.3030, 0.0")
        .description("Voltage conversion formula");

        param("ADC Reference", m_args.adc_ref)
        .defaultValue("1.1")
        .description("ADC reference voltage");

        m_power_config.resize(c_power_channel_count, 0);

        m_table = new Table(this, ctx.dir_log);
      }

      ~Task(void)
      {
        if (m_table != NULL)
        {
          m_table->stopAndJoin();
          delete m_table;
          m_table = NULL;
        }
      }

      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < c_channel_count; ++i)
        {
          // Power.
          for (size_t j = 0; j < m_args.chan_power_lines[i].size(); ++j)
          {
            uint8_t channel = m_args.chan_power_lines[i][j] / 8;
            if (channel >= c_power_channel_count)
              continue;

            uint8_t line = m_args.chan_power_lines[i][j] % 8;
            m_power_config[channel] |= 1 << line;
          }

          // Filters.
          if (!m_args.chan_filters[i].empty())
          {
            inf("channel %u filter is '%s'", i,m_args.chan_filters[i].c_str());
            m_table->setFilter(i, m_args.chan_filters[i]);
          }

          // Time reference.
          m_table->setTimeReferenceChannel(m_args.time_reference);
        }


        m_table->setADCReference(m_args.adc_ref);
        m_table->setBatConversion(m_args.bat_volt_conv);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, 3000000);
        m_mci = new MCI(this,
                        *m_uart,
                        m_power_config,
                        m_args.chan_bauds,
                        m_args.chan_frames);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_mci);
        Memory::clear(m_uart);
      }

      //! Main loop.
      void
      onMain(void)
      {
        uint8_t bfr[1024] = {0};
        m_table->start();

        while (!stopping())
        {
          if (!Poll::poll(*m_uart, 1.0))
            continue;

          consumeMessages();

          size_t rv = m_uart->read(bfr, sizeof(bfr));
          //DUNE_MSG("LCB", "read " << rv);
          for (size_t i = 0; i < rv; ++i)
          {
            m_table->push(bfr[i]);
          }
        }
      }
    };
  }
}

DUNE_TASK
