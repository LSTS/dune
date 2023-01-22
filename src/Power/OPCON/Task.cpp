//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Teixeira                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace OPCON
  {
    using DUNE_NAMESPACES;
    //! Entity states.
    enum Gsm3gState
    {
      //! Waiting for activation.
      STA_IDLE,
      //! Wait for power to be turned on.
      STA_WAIT_PWR,
      //! Wait Activation sequence is complete.
      STA_WAIT_ACT,
      //! connected to the Internet
      STA_ACTIVE,
      //! Start deactivation
      STA_DACT,
      //! Waiting for deactivation
      STA_WAIT_DACT
    };

    //! Task arguments.
    struct Arguments
    {
      //! Wifi level output status pins
      std::vector<std::string>  wifi_led_pin;
      //! output pin - power status of raspberry
      std::string rasp_HB_pin;
      //! Input signal pin to order powerdown raspberry
      std::string rasp_off_signal;
      //! Power 3g output status pin
      std::string led_3G_pin;
      //! output pin signal: to enable or disble 3g
      std::string gsm_3g_on_off_pin;
      //! output pin signal: to enable or disble 3g
      std::string gsm_3g_switch_pin;
      //! Entity label of Mobile Internet
      std::string label_internet;
      //! update period
      float period;
      //! wifi_led_pin threshold
      std::vector<int> wifi_rssi_threshold;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! True if system was shutdown.
      bool m_halt;
      //! True if power down is in progress.
      bool m_pwr_down;
      //! RSSI value
      fp32_t m_value_RSSI;
      //! 3g last state
      bool m_3g_last;
      //! temporary output
      bool m_value;
      //! 3g timeout
      double m_deadline;
      //! mobile internet entity id.
      unsigned m_mobile_internet_eid;
      //! Moblile Internet state
      Gsm3gState  m_gsm3gstate;
      //! mobile internet status
      std::string m_mobile_internet_satus;
      //! led 3g state
      bool led_3g_temp_state;
      //! GPIO leds Wifi
      std::vector<Hardware::GPIO*> m_wifi_led_pin;
      //! GPIO Heartbeat Raspery to opcon
      Hardware::GPIO* m_rasp_HB_pin;
      //! GPIO signal to start power off
      Hardware::GPIO* m_rasp_off_signal;
      //! GIOPO for 3g led status output
      Hardware::GPIO* m_led_3G_pin;
      //! GPIO pin to power 3g modem
      Hardware::GPIO* m_gsm_3g_on_off_pin;
      //! GPIO for internet switch
      Hardware::GPIO* m_gsm_3g_switch_pin;
      //! Counter for determining when update states
      Time::Counter<int> m_period;
      //! Device protocol h
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
         m_halt(false),
         m_pwr_down(false),
         m_value_RSSI(0),
         m_3g_last(false),
         m_value(false),
         m_deadline(2),
         m_gsm3gstate(STA_IDLE)
      {
        // Define configuration parameters.
        param("Pin rasp_HB_pin", m_args.rasp_HB_pin)
        .defaultValue("23")
        .description(DTR("Output pin - power status of raspberry"));

        param("Pin Powerdown  ", m_args.rasp_off_signal)
        .defaultValue("24")
        .description(DTR("Input signal pin to order powerdown of raspberry"));

        param("Pin led 3G", m_args.led_3G_pin)
        .defaultValue("5")
        .description(DTR("Power 3g output status pin"));

        param("Pin gsm_3g_on_off_pin", m_args.gsm_3g_on_off_pin)
        .defaultValue("25")
        .description(DTR("Output pin signal: to enable or disble 3g"));

        param("Pin gsm_3g_switch_pin", m_args.gsm_3g_switch_pin)
        .defaultValue("11")
        .description(DTR("Imput pin signal: to enable or disble 3g"));

        param("Pin wifi_led_pins", m_args.wifi_led_pin)
        .defaultValue("6 , 13 , 19 , 26")
        .description(DTR("Wifi level output status pins"));

        param("Entity Label - Mobile Internet", m_args.label_internet)
        .defaultValue("Mobile Internet")
        .description(DTR("Entity label of 'EntityState' Mobile Internet"));

         param("Update Period", m_args.period)
        .defaultValue("1")
        .minimumValue("0.1")
        .units(Units::Second)
        .description(DTR("Time, in seconds, between RSSI polling."));

        param("LED wifi rssi threshold", m_args.wifi_rssi_threshold)
        .defaultValue("10 , 25 , 49 , 74")
        .description(DTR("LED wifi rssi threshold"));

        bind<IMC::PowerChannelControl>(this);
        bind<IMC::RSSI>(this);
        bind<IMC::EntityState>(this);
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        try
        {
          m_mobile_internet_eid = resolveEntity(m_args.label_internet);
        }
        catch (...)
        {
          m_mobile_internet_eid = UINT_MAX;
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        //Input
        unsigned nr = 0;

        if (!castLexical(m_args.rasp_off_signal, nr))
          throw std::runtime_error(String::str("invalid rasp_off_signal identifier '%s'",
                                                   m_args.rasp_off_signal.c_str()));
        m_rasp_off_signal = new Hardware::GPIO(nr);
        m_rasp_off_signal->setDirection(Hardware::GPIO::GPIO_DIR_INPUT);

        if (!castLexical(m_args.gsm_3g_switch_pin, nr))
          throw std::runtime_error(String::str("invalid  gsm_3g_switch_pin identifier '%s'",
                                                   m_args.gsm_3g_switch_pin.c_str()));
        m_gsm_3g_switch_pin = new Hardware::GPIO(nr);
        m_gsm_3g_switch_pin->setDirection(Hardware::GPIO::GPIO_DIR_INPUT);

        //output
        if (!castLexical(m_args.rasp_HB_pin, nr))
          throw std::runtime_error(String::str("invalid rasp_HB_pin identifier '%s'",
                                                   m_args.rasp_HB_pin.c_str()));
        m_rasp_HB_pin  = new Hardware::GPIO(nr);
        m_rasp_HB_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_rasp_HB_pin->setValue(1);

        if (!castLexical(m_args.led_3G_pin, nr))
          throw std::runtime_error(String::str("invalid LED identifier '%s'",
                                                   m_args.led_3G_pin.c_str()));
        m_led_3G_pin = new Hardware::GPIO(nr);
        m_led_3G_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_led_3G_pin->setValue(1);
        led_3g_temp_state=true;

        if (!castLexical(m_args.gsm_3g_on_off_pin, nr))
          throw std::runtime_error(String::str("invalid LED identifier '%s'",
                                                  m_args.gsm_3g_on_off_pin.c_str()));
        m_gsm_3g_on_off_pin = new Hardware::GPIO(nr);
        m_gsm_3g_on_off_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gsm_3g_on_off_pin->setValue(0);

        m_wifi_led_pin.resize(m_args.wifi_led_pin.size());
        for (unsigned i =0 ; i< m_args.wifi_led_pin.size() ; i++)
        {
          if (!castLexical(m_args.wifi_led_pin[i], nr))
            throw std::runtime_error(String::str("invalid LED identifier '%s'",
                                                   m_args.wifi_led_pin[i].c_str()));
          m_wifi_led_pin[i]= new Hardware::GPIO(nr);
          m_wifi_led_pin[i]->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          m_wifi_led_pin[i]->setValue(1);
        }
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      checkPowerOff(bool value)
      {
        // Check power off.
        if (value)
        {
          m_pwr_down = true;
          IMC::PowerOperation pop;
          pop.setDestination(getSystemId());
          pop.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
          dispatch(pop);
          debug("start powering down");
        }
        else if (m_pwr_down)
        {
          m_pwr_down = false;
          IMC::PowerOperation pop;
          pop.setDestination(getSystemId());
          pop.op = IMC::PowerOperation::POP_PWR_DOWN_ABORTED;
          debug("Abort powering down");
          dispatch(pop);
        }
      }

      void
      sendActiveParameter(const std::string& value)
      {
        IMC::EntityParameter p;
        p.name = "Active";
        p.value = value;

        IMC::SetEntityParameters msg;
        msg.name = "Mobile Internet";
        msg.params.push_back(p);
        dispatch(msg);
      }

      void
      check3G(bool value)
      {
        if (m_3g_last!=value)
        {
          set3G(value);
        }
      }

      void
      set3G(bool value)
      {
        if (value)
        {
           m_gsm_3g_on_off_pin->setValue(true);//on
           m_gsm3gstate = STA_WAIT_PWR;
           m_deadline = Clock::get() + 20;
           debug("3g pin on");
        }
        else
        {
          m_gsm3gstate = STA_DACT;
          debug("3g start deactivation");
        }
        m_3g_last = value;
      }

      void
      gsm3gActivate()
      {

        switch (m_gsm3gstate)
        {
          case STA_IDLE :
           break;

          //wait for dmsg
          case STA_WAIT_PWR:
           if (Clock::get() >= m_deadline)
           {
             sendActiveParameter("true");
             m_gsm3gstate=STA_WAIT_ACT;
           }
           else
           {
             led_3g_temp_state = (!led_3g_temp_state);
             m_led_3G_pin->setValue(led_3g_temp_state);
           }
           break;

          //activate 3g
          case STA_WAIT_ACT :
           if (String::startsWith( m_mobile_internet_satus, "connected to the Internet" ))
           {
             m_led_3G_pin->setValue(true);
             led_3g_temp_state= true;
             m_gsm3gstate=STA_ACTIVE;
             debug("3g connected");
             break;
           }
           debug("STA_WAIT_ACT");
           led_3g_temp_state = (!led_3g_temp_state);
           m_led_3G_pin->setValue(led_3g_temp_state);
           break;

          case STA_ACTIVE :
           break;

          case STA_DACT :
            sendActiveParameter("false");
            m_led_3G_pin->setValue(true);
            m_deadline=Clock::get()+2;
            m_gsm3gstate=STA_WAIT_DACT;
           break;

          case STA_WAIT_DACT :
            if (Clock::get() >= m_deadline && m_mobile_internet_satus == getString(CODE_IDLE))
            {
              m_gsm_3g_on_off_pin->setValue(false);//off
              m_led_3G_pin->setValue(false);
              led_3g_temp_state = false;
              m_gsm3gstate=STA_IDLE;
              debug("3g off");
            }
            else if (Clock::get() >= m_deadline)
            {
              war("Mobile Internet do not enter in Idle state");
              m_gsm_3g_on_off_pin->setValue(false);//off
              m_led_3G_pin->setValue(false);
              led_3g_temp_state = false;
              m_gsm3gstate=STA_IDLE;
            }
           break;

          default: break;

        }
        debug("3G State: %s", m_mobile_internet_satus.c_str());
     }
    void
    updateRSSIvalue()
    {
      if (m_value_RSSI > m_args.wifi_rssi_threshold[0])
        m_wifi_led_pin[3]->setValue(true);
      else
        m_wifi_led_pin[3]->setValue(false);

      if (m_value_RSSI > m_args.wifi_rssi_threshold[1])
        m_wifi_led_pin[2]->setValue(true);
      else
        m_wifi_led_pin[2]->setValue(false);

      if (m_value_RSSI > m_args.wifi_rssi_threshold[2])
        m_wifi_led_pin[1]->setValue(true);
      else
        m_wifi_led_pin[1]->setValue(false);

      if (m_value_RSSI > m_args.wifi_rssi_threshold[3])
        m_wifi_led_pin[0]->setValue(true);
      else
        m_wifi_led_pin[0]->setValue(false);

      }

      void
      consume(const IMC::RSSI* msg)
      {
        m_value_RSSI=msg->value;
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (m_halt)
          return;

        if (msg->name == "System")
        {
          // We're dead after this but it might take a few moments, so
          m_rasp_HB_pin->setValue(false);
          debug("is powering down");
          m_halt = true;
          return;
        }
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() == DUNE_IMC_CONST_UNK_EID)
        {
          err(DTR("EntityState message without source entity"));
          return;
        }

        if (msg->getSourceEntity() != m_mobile_internet_eid)
          return;

        m_mobile_internet_satus=msg->description;
      }


      //! Main loop.
      void
      onMain(void)
      {
        //Do nothing (allow the operator to see the LEDs)
        Delay::wait(2.0);
        m_period.setTop(m_args.period);
        set3G(m_gsm_3g_switch_pin->getValue());
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!m_halt)
          {
            if (m_period.overflow())
            {
              m_value= m_rasp_off_signal->getValue();
              spew("m_rasp_off_signal %d", (int) m_value);
              checkPowerOff(m_value);
              m_value = m_gsm_3g_switch_pin->getValue();
              spew("m_gsm_3g_switch_pin %d",(int) m_value);
              check3G(m_value);
              gsm3gActivate();
              updateRSSIvalue();
              m_period.reset();
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
