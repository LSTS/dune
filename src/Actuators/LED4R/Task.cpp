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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  //! Device driver for LED4R.
  //!
  //! LED4R is a device that allows controlling up to 12
  //! high-brightness LEDs.
  //!
  //! @author Ricardo Martins
  namespace LED4R
  {
    //! Packet identifiers.
    enum PacketIds
    {
      //! Measurements.
      PKT_ID_MEASURES    = 1,
      //! LED external strobe driver.
      PKT_ID_LED_DRV_EXT = 2,
      //! Control internal LED driver.
      PKT_ID_LED_DRV_CTL = 3,
      //! LED channel control.
      PKT_ID_LED_CTL     = 4,
      //! Constant parameters.
      PKT_ID_PARAMS_CON  = 5
    };

    using DUNE_NAMESPACES;

    //! Number of LEDs.
    static const unsigned c_led_count = 12;

    //! LED channel.
    struct LED
    {
      //! LED name.
      std::string name;
      //! LED id.
      unsigned id;
      //! LED brightness.
      IMC::LedBrightness brightness;
    };

    //! Task arguments.
    struct Arguments
    {
      //! LED names.
      std::vector<std::string> led_names;
      //! Serial port device.
      std::string uart_dev;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of LEDs by name.
      std::map<std::string, LED*> m_led_by_name;
      //! Control interface.
      UCTK::InterfaceUART* m_uart;
      //! Minimum pulse duration in ticks.
      uint16_t m_min_dur;
      //! Maximum pulse duration in ticks.
      uint16_t m_max_dur;
      //! Difference between maximum and minimum pulse durations.
      uint16_t m_dif_dur;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("LED - Names", m_args.led_names)
        .defaultValue("")
        .size(c_led_count)
        .description("List of LED names");

        bind<IMC::SetLedBrightness>(this);
        bind<IMC::QueryLedBrightness>(this);
      }

      ~Task(void)
      {
        clearLEDs();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        clearLEDs();
        for (unsigned i = 0; i < m_args.led_names.size(); ++i)
        {
          LED* led = new LED;
          led->id = i;
          led->name = m_args.led_names[i];
          led->brightness.name = led->name;
          led->brightness.value = 0;
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new UCTK::InterfaceUART(m_args.uart_dev);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::SetLedBrightness* msg)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.find(msg->name);
        if (itr == m_led_by_name.end())
          return;

        itr->second->brightness.value = msg->value;

        setBrightness(itr->second);
      }

      void
      consume(const IMC::QueryLedBrightness* msg)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.find(msg->name);
        if (itr == m_led_by_name.end())
          return;

        dispatchReply(*msg, itr->second->brightness);
      }

      void
      clearLEDs(void)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.begin();
        for (; itr != m_led_by_name.end(); ++itr)
          delete itr->second;
        m_led_by_name.clear();
      }

      bool
      getConstantParameters(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_PARAMS_CON);
        if (!m_uart->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != 4)
          return false;

        frame.get(m_min_dur, 0);
        frame.get(m_max_dur, 2);

        m_dif_dur = m_max_dur - m_min_dur;

        return true;
      }

      void
      setBrightness(LED* led)
      {
        uint8_t id = led->id;
        uint16_t ticks = ((led->brightness.value * m_dif_dur) / 255) + m_min_dur;

        UCTK::Frame frame;
        frame.setId(PKT_ID_LED_CTL);
        frame.setPayloadSize(3);
        frame.set(id, 0);
        frame.set(ticks, 1);
        m_uart->sendFrame(frame, -1.0);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
