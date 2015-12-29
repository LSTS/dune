//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
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
#include <stdexcept>
#include <cerrno>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MCC USB headers.
#include <mccusb/pmd.h>
#include <mccusb/usb-1608G.h>

namespace Sensors
{
  namespace MCC1608G
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC channels.
    static const size_t c_adcs_count = 8;

    //! Task arguments.
    struct Arguments
    {
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
      //! ADC range scale.
      int adc_range[c_adcs_count];
      //! ADC differential mode.
      bool adc_diff[c_adcs_count];
      //! Sampling frequency.
      double sampling_freq;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! USB handle.
      libusb_device_handle* m_udev;
      //! ADC gain table.
      float m_gain_table[NGAINS_1608G][2];
      //! ADC input buffer.
      uint16_t m_adc_data_in[512 * 16];
      //! Scan list used to configure the ADC channels.
      ScanList m_scan_list[NCHAN_1608G];
      //! Temperature.
      IMC::Temperature m_temperature;
      //! Scaled IMC messages.
      IMC::Message* m_messages[c_adcs_count];
      PeriodicDelay m_delay;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_udev(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Sampling Frequency", m_args.sampling_freq)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description(DTR("Sampling frequency"));

        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          std::string option = String::str("ADC Channel %u - Message", i);
          param(option, m_args.adc_messages[i]);

          option = String::str("ADC Channel %u - Entity Label", i);
          param(option, m_args.adc_elabels[i]);

          option = String::str("ADC Channel %u - Range Scale", i);
          param(option, m_args.adc_range[i])
          .values("1, 2, 5, 10")
          .defaultValue("5");

          option = String::str("ADC Channel %u - Differential", i);
          param(option, m_args.adc_diff[i])
          .defaultValue("false");

          option = String::str("ADC Channel %u - Conversion", i);
          param(option, m_args.adc_factors[i])
          .size(2)
          .defaultValue("1.0, 0.0");
        }

        std::memset(m_messages, 0, sizeof(m_messages));
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.sampling_freq))
        {
          uint32_t delay = 1000000 / m_args.sampling_freq;
          m_delay.set(delay);
        }

        // Update messages.
        int eid = -1;
        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          Memory::clear(m_messages[i]);
          if (m_args.adc_messages[i].empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.adc_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.adc_elabels[i]);
          }

          m_messages[i] = IMC::Factory::produce(m_args.adc_messages[i]);
          m_messages[i]->setSourceEntity(eid);
        }
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      ~Task(void)
      {
        onResourceRelease();

        for (size_t i = 0; i < c_adcs_count; ++i)
          Memory::clear(m_messages[i]);
      }

      void
      onActivation(void)
      {
        connect();
        setupScanList();
        configAnalogueInputs();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        disconnect();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      readTemperature(void)
      {
        usbTemperature_USB1608G(m_udev, &m_temperature.value);
        dispatch(m_temperature);
      }

      void
      setupScanList(void)
      {
        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          m_scan_list[i].channel = i;

          if (m_messages[i] == NULL)
          {
            m_scan_list[i].range = BP_5V;
            m_scan_list[i].mode = 0;
          }
          else
          {
            m_scan_list[i].range = getRange(m_args.adc_range[i]);
            m_scan_list[i].mode = m_args.adc_diff[i] ? DIFFERENTIAL : 0;
          }
        }

        m_scan_list[c_adcs_count - 1].mode |= LAST_CHANNEL;
      }

      void
      configAnalogueInputs(void)
      {
        usbAInScanStop_USB1608G(m_udev);
        usbAInScanClearFIFO_USB1608G(m_udev);
        usbAInConfig_USB1608G(m_udev, m_scan_list);
      }

      void
      scanAnalogueInputs(void)
      {
        double time = Clock::getSinceEpoch();

        usbAInScanStart_USB1608G(m_udev, 1, 0, 1, 1 << 0);
        usbAInScanRead_USB1608G(m_udev, 1, c_adcs_count, m_adc_data_in);

        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          if (m_messages[i] == NULL)
            continue;

          uint8_t gain = m_scan_list[i].range;
          uint16_t raw_value = rint(m_adc_data_in[i] * m_gain_table[gain][0] + m_gain_table[gain][1]);
          double volt = volts_USB1608G(gain, raw_value);
          m_messages[i]->setTimeStamp(time);
          m_messages[i]->setValueFP(volt);
          dispatch(m_messages[i]);
        }
      }

      void
      connect(void)
      {
        debug("initializing USB library");
        int rv = libusb_init(NULL);
        if (rv < 0)
          throw RestartNeeded(DTR("failed to initialize USB library"), 5.0, false);

        debug("probing MCC device");
        m_udev = usb_device_find_USB_MCC(USB1608G_PID, NULL);
        if (m_udev == NULL)
          throw RestartNeeded(DTR("failed to find valid device"), 5.0, false);

        debug("initializing MCC device");
        usbInit_1608G(m_udev);

        debug("building gain table");
        usbBuildGainTable_USB1608G(m_udev, m_gain_table);

        uint16_t version = 0xbeef;
        usbFPGAVersion_USB1608G(m_udev, &version);
        inf(DTR("FPGA version: %02x.%02x"), version >> 0x8, version & 0xff);

        char serial[9] = {0};
        usbGetSerialNumber_USB1608G(m_udev, serial);
        inf(DTR("serial number: %s"), serial);
      }

      void
      disconnect(void)
      {
        if (m_udev == NULL)
          return;

        cleanup_USB1608G(m_udev);
        m_udev = NULL;
      }

      int
      getRange(int volt)
      {
        switch (volt)
        {
          case 1:
            return BP_1V;
          case 2:
            return BP_2V;
          case 5:
            return BP_5V;
          case 10:
            return BP_10V;
        }

        throw std::runtime_error(String::str("invalid voltage range: %d", volt));
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            m_delay.wait();
            scanAnalogueInputs();
            readTemperature();
            consumeMessages();
          }
          else
          {
            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
