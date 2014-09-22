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
    using DUNE_NAMESPACES;

    //! Packet identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE          = 1,
      //! LED channel control.
      PKT_ID_LED_PW         = 2,
      //! External driver.
      PKT_ID_LED_EXT_DRV    = 3,
      //! External trigger.
      PKT_ID_LED_EXT_TRG    = 4,
      //! LED pattern.
      PKT_ID_LED_PATTERN    = 5,
      //! LED pattern pulse width.
      PKT_ID_LED_PATTERN_PW = 6,
      //! Constant parameters.
      PKT_ID_PARAMS         = 7
    };

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
      //! Watchdog timeout.
      double wdog_tout;
      //! LED patterns.
      std::vector<uint16_t> led_patterns;
      //! LED pattern pulse width.
      uint16_t led_patterns_pw;
      //! Enable external LED driver.
      bool ext_drv;
      //! Enable external LED trigger.
      bool ext_trg;
    };

    //! Serial port baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Number of LEDs.
    static const unsigned c_led_count = 12;
    //! Suffix of MCU voltage.
    static const char* c_vdc_mcu_suffix = "(MCU)";
    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of LEDs by name.
      std::map<std::string, LED*> m_led_by_name;
      //! Map of LEDs by id.
      std::map<unsigned, LED*> m_led_by_id;
      //! UART.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! Minimum pulse duration in ticks.
      uint16_t m_min_dur;
      //! Maximum pulse duration in ticks.
      uint16_t m_max_dur;
      //! Difference between maximum and minimum pulse durations.
      uint16_t m_dif_dur;
      //! Current.
      IMC::Current m_current;
      //! Voltage.
      IMC::Voltage m_voltage;
      //! MCU entity.
      Entities::BasicEntity* m_mcu_ent;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_ctl(NULL),
        m_mcu_ent(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .description("Watchdog timeout");

        param("LED - Names", m_args.led_names)
        .defaultValue("")
        .size(c_led_count)
        .description("List of LED names");

        param(DTR_RT("LED - Patterns"), m_args.led_patterns)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("")
        .maximumSize(8)
        .description(DTR_RT("List of LED patterns"));

        param(DTR_RT("LED - Patterns Pulse Width"), m_args.led_patterns_pw)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .minimumValue("0")
        .maximumValue("20000")
        .defaultValue("5000")
        .description(DTR_RT("Pulse width for LED patterns"));

        param(DTR_RT("LED - External Driver"), m_args.ext_drv)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description(DTR_RT("Enable external LED driver"));

        param(DTR_RT("LED - External Trigger"), m_args.ext_trg)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description(DTR_RT("Enable external LED trigger"));

        bind<IMC::SetLedBrightness>(this);
        bind<IMC::QueryLedBrightness>(this);
      }

      ~Task(void)
      {
        clearLEDs();
      }

      void
      onEntityReservation(void)
      {
        std::string label = String::str("%s %s", getEntityLabel(), c_vdc_mcu_suffix);
        m_mcu_ent = reserveEntity<Entities::BasicEntity>(label);
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
          m_led_by_name[led->name] = led;
          m_led_by_id[led->id] = led;
        }

        setConfig();

        m_wdog.setTop(m_args.wdog_tout);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
          m_ctl = new UCTK::Interface(m_uart);
          UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), c_restart_delay);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (!getConstantParameters())
          throw RestartNeeded(DTR("failed to get constant parameters"), c_restart_delay);

        setConfig();

        std::map<std::string, LED*>::iterator itr = m_led_by_name.begin();
        for (unsigned i = 0; i < c_led_count; ++i)
          setBrightness(itr->second, 0);

        if (!m_args.led_patterns.empty())
        {
          uint8_t count = m_args.led_patterns.size();

          UCTK::Frame frame;
          frame.setId(PKT_ID_LED_PATTERN);
          frame.setPayloadSize(1 + (count * 2));
          frame.set(count, 0);
          for (size_t i = 0; i < count; ++i)
            frame.set<uint16_t>(m_args.led_patterns[i], 1 + i * 2);
          if (!m_ctl->sendFrame(frame))
            throw RestartNeeded(DTR("failed to set LED patterns"), c_restart_delay);
        }

        m_wdog.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_ctl != NULL)
        {
          setExternalTrigger(false);
          setExternalDriver(false);
          delete m_ctl;
          m_ctl = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      setConfig(void)
      {
        if (m_ctl != NULL)
        {
          if (!setExternalDriver(m_args.ext_drv))
            throw RestartNeeded(DTR("failed to configure LED driver"), c_restart_delay);

          if (!setExternalTrigger(m_args.ext_trg))
            throw RestartNeeded(DTR("failed to configure LED driver"), c_restart_delay);

          if (!setPatternPulseWidth(m_args.led_patterns_pw))
            throw RestartNeeded(DTR("failed to configure LED pattern pulse width"), c_restart_delay);
        }
      }

      void
      consume(const IMC::SetLedBrightness* msg)
      {
        std::map<std::string, LED*>::iterator itr = m_led_by_name.find(msg->name);
        if (itr == m_led_by_name.end())
          return;

        setBrightness(itr->second, msg->value);
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
        m_led_by_id.clear();
      }

      bool
      setExternalDriver(bool enabled)
      {
        uint8_t v = enabled ? 1 : 0;
        UCTK::Frame frame;
        frame.setId(PKT_ID_LED_EXT_DRV);
        frame.setPayloadSize(1);
        frame.set(v, 0);
        return m_ctl->sendFrame(frame);
      }

      bool
      setExternalTrigger(bool enabled)
      {
        uint8_t v = enabled ? 1 : 0;
        UCTK::Frame frame;
        frame.setId(PKT_ID_LED_EXT_TRG);
        frame.setPayloadSize(1);
        frame.set(v, 0);
        return m_ctl->sendFrame(frame);
      }

      bool
      setPatternPulseWidth(uint16_t pwidth)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_LED_PATTERN_PW);
        frame.setPayloadSize(2);
        frame.set(pwidth, 0);
        return m_ctl->sendFrame(frame);
      }

      bool
      getConstantParameters(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_PARAMS);
        if (!m_ctl->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != 4)
          return false;

        frame.get(m_min_dur, 0);
        frame.get(m_max_dur, 2);

        m_dif_dur = m_max_dur - m_min_dur;

        return true;
      }

      void
      setBrightness(LED* led, uint8_t value)
      {
        uint8_t id = led->id;
        uint16_t ticks = ((value * m_dif_dur) / 255) + m_min_dur;

        UCTK::Frame frame;
        frame.setId(PKT_ID_LED_PW);
        frame.setPayloadSize(3);
        frame.set(id, 0);
        frame.set(ticks, 1);

        if (m_ctl->sendFrame(frame))
        {
          led->brightness.value = value;
          m_wdog.reset();
        }
      }

      bool
      getMonitors(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_STATE);

        if (!m_ctl->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != 6)
          return false;

        // MCU Voltage.
        uint16_t tmp_u16 = 0;
        frame.get(tmp_u16, 0);
        IMC::Voltage v;
        v.value = tmp_u16 / 1000.0;
        m_mcu_ent->dispatch(v);

        // Voltage.
        frame.get(tmp_u16, 2);
        m_voltage.value = tmp_u16 / 1000.0;
        dispatch(m_voltage);

        // Current.
        frame.get(tmp_u16, 4);
        m_current.value = tmp_u16 / 1000.0;
        dispatch(m_current);

        m_wdog.reset();
        return true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        Counter<double> m_mon_timer(1.0);

        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(Status::getString(Status::CODE_COM_ERROR), c_restart_delay);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          if (m_mon_timer.overflow())
          {
            m_mon_timer.reset();
            getMonitors();
          }
        }
      }
    };
  }
}

DUNE_TASK
