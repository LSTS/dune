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
#include <iomanip>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"

namespace Sensors
{
  namespace AIM104MultiIO
  {
    using DUNE_NAMESPACES;

    // Maximum number of A/D channels.
    static const unsigned c_max_channels = 16;

    struct Arguments
    {
      // ADC conversion factors.
      std::vector<double> adc_conversions[c_max_channels];
      // ADC messages.
      std::string adc_messages[c_max_channels];
      // ADC entity labels.
      std::string adc_elabels[c_max_channels];
      // ADC input range.
      float range;
      // ADC conversion delay.
      float conv_delay;
      // Board base address.
      uint32_t base_addr;
      // True if operating in differential mode.
      bool diff_mode;
      // Samples per Average.
      unsigned spl_avg;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // Measurement messages.
      DUNE::IMC::Message* m_messages[c_max_channels];
      // Entity Ids.
      unsigned m_eids[c_max_channels];
      // Means.
      double m_means[c_max_channels];
      // Driver.
      Driver* m_driver;
      // Sample counter.
      unsigned m_samples;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_driver(NULL),
        m_samples(0)
      {
        // Initialize conversion variables.
        std::memset(m_messages, 0, sizeof(m_messages));
        std::memset(m_means, 0, sizeof(m_means));

        param("Base Address", m_args.base_addr)
        .defaultValue("");

        param("Input Range", m_args.range)
        .defaultValue("");

        param("Differential Mode", m_args.diff_mode)
        .defaultValue("false");

        param("Conversion Delay", m_args.conv_delay)
        .units(Units::Second)
        .defaultValue("0.001")
        .minimumValue("0.0");

        param("Samples Per Average", m_args.spl_avg)
        .defaultValue("10")
        .minimumValue("0");

        for (unsigned i = 0; i < c_max_channels; ++i)
        {
          std::string option = String::str("ADC%u - Message", i);
          param(option, m_args.adc_messages[i]);

          option = String::str("ADC%u - Conversion", i);
          param(option, m_args.adc_conversions[i])
          .size(2)
          .defaultValue("1.0, 0.0");

          option = String::str("ADC%u - Entity Label", i);
          param(option, m_args.adc_elabels[i]);
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_driver = new Driver(m_args.base_addr, m_args.range, m_args.diff_mode);
      }

      void
      onResourceInitialization(void)
      {
        std::memset(m_means, 0, sizeof(m_means));

        for (unsigned i = 0; i < c_max_channels; ++i)
        {
          if (m_args.adc_messages[i].empty())
            continue;

          try
          {
            m_messages[i] = IMC::Factory::produce(m_args.adc_messages[i]);
            m_messages[i]->setSourceEntity(m_eids[i]);
          }
          catch (...)
          {
            err("%s %s", DTR("invalid message"), m_args.adc_messages[i].c_str());
            continue;
          }
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);

        for (unsigned i = 0; i < c_max_channels; ++i)
          Memory::clear(m_messages[i]);
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_max_channels; ++i)
        {
          if (m_args.adc_elabels[i].empty())
            continue;

          m_eids[i] = reserveEntity(m_args.adc_elabels[i]);
        }
      }

      void
      task(void)
      {
        ++m_samples;

        double value = 0;

        for (unsigned i = 0; i < c_max_channels; ++i)
        {
          if (m_messages[i] == NULL)
            continue;

          m_driver->setChannel(i);

          for (int tries = 0; tries < 5; ++tries)
            Delay::wait(m_args.conv_delay);

          if (!m_driver->sample(value))
            err(DTR("timeout"));

          m_means[i] += value;
        }

        if (m_samples == m_args.spl_avg)
        {
          for (unsigned i = 0; i < c_max_channels; ++i)
          {
            if (m_messages[i] == NULL)
              continue;

            double mean = m_means[i] / m_args.spl_avg;
            mean = mean * m_args.adc_conversions[i][0] + m_args.adc_conversions[i][1];

            m_messages[i]->setValueFP(mean);
            dispatch(m_messages[i]);
            m_means[i] = 0;
          }

          m_samples = 0;
        }
      }
    };
  }
}

DUNE_TASK
