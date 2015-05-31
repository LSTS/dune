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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#define SET        "SET SCAN"
#define DENSITY    "DENSITY"
#define SALINITY   "SALINITY"
#define SV         "SV"
#define SAMPLING   "SET S 1 s"
#define MONITOR    "MONITOR"

#define GET_COMMAND(operationType, command)                             \
  (std::strcmp(operationType, "send") == 0 ? (command "\r") : (">" command "\r\n"))

namespace Sensors
{
  //! Device driver for the AML OEM MetrecX
  //!
  //!
  //! Metrec•X is an externally-powered, multi-parameter
  //! instrument that allows you to change the
  //! instrument’s sensor load, in the field and on-demand.
  //! and log data to its internal memory simultaneously.
  //!
  //! This device enables to change sensors like plug and
  //! play. It may be equipped with a maximum of 5 digital
  //! ports and 10 analogic ports.
  //!
  //! The sensor output is made by the following order:
  //! 1 - Digital Sensors;
  //! 2 - Analog Sensors;
  //! 3 - Calculation Channels;
  //! The output is only composed by active channels,
  //! and the output order is incremented from channel 1.
  //!
  //! @author Tiago Rodrigues
  namespace MetrecX
  {
    // using DUNE_NAMESPACES;
    using DUNE_NAMESPACES;

    //! Commands
    static const char* c_set_ichn[]= { GET_COMMAND("send", SET " " DENSITY),
                                       GET_COMMAND("send", SET " " SALINITY),
                                       GET_COMMAND("send", SET " " SV)};

    static const char* c_rc_set_ichn[] = { GET_COMMAND("receive", SET " " DENSITY),
                                           GET_COMMAND("receive", SET " " SALINITY),
                                           GET_COMMAND("receive", SET " " SV)};

    static const char* c_nset_ichn[] = { GET_COMMAND("send", SET " NO" DENSITY),
                                         GET_COMMAND("send", SET " NO" SALINITY),
                                         GET_COMMAND("send", SET " NO" SV)};

    static const char* c_rc_nset_ichn[] = { GET_COMMAND("receive", SET " NO" DENSITY),
                                            GET_COMMAND("receive", SET " NO" SALINITY),
                                            GET_COMMAND("receive", SET " NO" SV)};

    static const char* c_st_monit[] = { GET_COMMAND("send", SAMPLING),
                                        GET_COMMAND("send", MONITOR)};

    static const char* c_rc_st_monit[] = { GET_COMMAND("receive", SAMPLING),
                                           GET_COMMAND("receive", MONITOR)};

    //! Internal Channels Cases.
    enum InternalChannelsModes
    {
      ICM_DENSITY = 0,
      ICM_SALINITY,
      ICM_SV
    };

    //! Templates Index.
    enum TemplatesIndex
    {
      TI_CONDUCTIVITY = 0,
      TI_SV,
      TI_TEMPERATURE,
      TI_PRESSURE,
      TI_TOTAL
    };

    enum DigSensFlag
    {
      DSF_CONDUCTIVITY = 1 << TI_CONDUCTIVITY,
      DSF_SV = 1 << TI_SV,
      DSF_TEMPERATURE = 1 << TI_TEMPERATURE,
      DSF_PRESSURE = 1 << TI_PRESSURE
    };

    //! Number of max Dig channels.
    static const unsigned c_digs_count = 5;
    //! Number of max Analog channels.
    static const unsigned c_analogs_count = 3;
    //! Number of max Internal channels.
    static const unsigned c_internals_count = 3;
    //! Number of commands to start monitor.
    static const unsigned c_st_comm_count = 2;

    //! Template for digital sensors.
    static const std::string c_digital_templates[] = { "Conductivity",
                                                       "SoundSpeed",
                                                       "Temperature",
                                                       "Pressure"};

    //! Template for internal channels.
    static const std::string c_internal_templates[] = { "WaterDensity",
                                                        "Salinity",
                                                        "SoundSpeed"};

    //! Const to transform dbar to Bar.
    static const unsigned c_dbar_to_bar = 10;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      //! Geopotential Anomaly.
      double geop_anomaly;

      //! Dig Messages.
      std::string dig_messages[c_digs_count];
      //! Dig entity labels.
      std::string dig_elabels[c_digs_count];
      //! Dig conversion factors.
      double dig_factors[c_digs_count];

      //! Analog Messages.
      std::string analog_messages[c_analogs_count];
      //! Analog entity labels.
      std::string analog_elabels[c_analogs_count];
      //! Analog conversion factors.
      double analog_factors[c_analogs_count];

      //! Internal Messages.
      std::string internal_messages[c_internals_count];
      //! Internal entity labels.
      std::string internal_elabels[c_internals_count];
      //! Internal conversion factors.
      double internal_factors[c_internals_count];

    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Dig messages.
      IMC::Message* m_digs[c_digs_count];
      //! Analog messages.
      IMC::Message* m_analogs[c_analogs_count];
      //! Internal messages.
      IMC::Message* m_internals[c_internals_count];
      //! Depth Messages.
      IMC::Depth m_depth;
      //! Task arguments.
      Arguments m_args;
      //! Task Watchdog.
      Counter<double> m_wdog;
      //! Array of active slots
      int m_active_slots_array[c_digs_count + c_analogs_count + c_internals_count];
      //! Number of dig active channels.
      int m_dig_active;
      //! Number of analog active channels.
      int m_analog_active;
      //! Number of internal active channels.
      int m_internal_active;
      //! Vehicle Latitude.
      double m_lat;
      //! Bitmask flag for digital sensors.
      int m_bit_flag;
      //! Parameter has changed.
      bool m_param_chang;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Geopotential Anomaly", m_args.geop_anomaly)
        .defaultValue("0.0")
        .description("Geopotential Anomaly to convert from pressure to depth");

        // Extract digital channels configuration.
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          std::string option = String::str("Dig Channel %u - Message", i + 1);
          param(option, m_args.dig_messages[i])
          .defaultValue("")
          .description("Digital channel %u IMC Message");

          option = String::str("Dig Channel %u - Entity Label", i + 1);
          param(option, m_args.dig_elabels[i])
          .defaultValue("")
          .description("Digital channel Entity Label");

          option = String::str("Dig Channel %u - Conversion", i + 1);
          param(option, m_args.dig_factors[i])
          .size(1)
          .defaultValue("1.0")
          .description("Digital channel conversion factor");
        }

        // Extract analog channels configuration.
        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          std::string option = String::str("Analog Channel %u - Message", i + 1);
          param(option, m_args.analog_messages[i])
          .defaultValue("")
          .description("Analogic channel IMC Message");

          option = String::str("Analog Channel %u - Entity Label", i + 1);
          param(option, m_args.analog_elabels[i])
          .defaultValue("")
          .description("Analogic channel Entity Label");

          option = String::str("Analog Channel %u - Conversion", i + 1);
          param(option, m_args.analog_factors[i])
          .size(1)
          .defaultValue("1.0")
          .description("Analogic channel conversion factor");
        }

        // Extract internal channels configuration.
        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          std::string option = String::str("Internal Channel %u - Message", i + 1);
          param(option, m_args.internal_messages[i])
          .defaultValue("")
          .description("Internal channel IMC Message");

          option = String::str("Internal Channel %u - Entity Label", i + 1);
          param(option, m_args.internal_elabels[i])
          .defaultValue("")
          .description("Internal channel Entity Label");

          option = String::str("Internal Channel %u - Conversion", i + 1);
          param(option, m_args.internal_factors[i])
          .size(1)
          .defaultValue("1.0")
          .description("Internal channel conversion factor");
        }

        variablesInitializer();

        bind<IMC::EstimatedState>(this);
      }

      ~Task(void)
      {
        // To clear uart if an exception is thrown.
        onResourceRelease();

        for (unsigned i = 0; i < c_digs_count; ++i)
          Memory::clear(m_digs[i]);

        for (unsigned i = 0; i < c_analogs_count; ++i)
          Memory::clear(m_analogs[i]);

        for (unsigned i = 0; i < c_internals_count; ++i)
          Memory::clear(m_internals[i]);
      }

      void
      variablesInitializer()
      {
        for (unsigned i = 0; i < c_digs_count; ++i)
          m_digs[i] = NULL;
        for (unsigned i = 0; i < c_analogs_count; ++i)
          m_analogs[i] = NULL;
        for (unsigned i = 0; i < c_internals_count; ++i)
          m_internals[i] = NULL;

        std::memset(m_active_slots_array, 0, sizeof(m_active_slots_array));
        m_param_chang = true;

        m_dig_active = 0;
        m_analog_active = 0;
        m_internal_active = 0;

        m_bit_flag = 0;

        m_lat = 0.0;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_lat = msg->lat;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        std::memset(m_active_slots_array, 0, sizeof(m_active_slots_array));
        m_dig_active = 0;
        m_analog_active = 0;
        m_internal_active = 0;
        m_param_chang = true;

        // Message produce and update for dig channels.
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          Memory::clear(m_digs[i]);

          if (m_args.dig_messages[i].empty())
            continue;

          // Produce a message object by name.
          // @param name message name.
          // @return message object allocated on the heap.
          m_digs[i] = IMC::Factory::produce(m_args.dig_messages[i]);

          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.dig_elabels[i]);
          }
          catch (...)
          { }

          if (m_args.dig_elabels[i].empty())
            continue;
          m_digs[i]->setSourceEntity(eid);
          m_active_slots_array[m_dig_active] = i;
          m_dig_active++;
        }

        // Message produce and update for analog channels.
        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          Memory::clear(m_analogs[i]);

          if (m_args.analog_messages[i].empty())
            continue;

          // Produce a message object by name.
          // @param name message name.
          // @return message object allocated on the heap.
          m_analogs[i] = IMC::Factory::produce(m_args.analog_messages[i]);

          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.analog_elabels[i]);
          }
          catch (...)
          { }

          if (m_args.analog_elabels[i].empty())
            continue;
          m_analogs[i]->setSourceEntity(eid);
          m_active_slots_array[digAndAnalogActive()] = i;
          m_analog_active++;
        }

        // Message produce and update for internal channels.
        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          Memory::clear(m_internals[i]);

          if (m_args.internal_messages[i].empty())
            continue;

          // Produce a message object by name.
          // @param name message name.
          // @return message object allocated on the heap.
          m_internals[i] = IMC::Factory::produce(m_args.internal_messages[i]);

          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.internal_elabels[i]);
          }
          catch (...)
          { }

          if (m_args.internal_elabels[i].empty())
            continue;
          m_internals[i]->setSourceEntity(eid);
          m_active_slots_array[allActive()] = i;
          m_internal_active++;
        }

      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        // Entity reservation for dig channels.
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          try
          {
            resolveEntity(m_args.dig_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            reserveEntity(m_args.dig_elabels[i]);
          }
        }

        // Entity reservation for analog channels.
        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          try
          {
            resolveEntity(m_args.analog_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            reserveEntity(m_args.analog_elabels[i]);
          }
        }

        // Entity reservation for internal channels.
        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          try
          {
            resolveEntity(m_args.internal_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            reserveEntity(m_args.internal_elabels[i]);
          }
        }
        // Set entitties after their reservation.
        onUpdateParameters();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->writeString("\r");
        Delay::wait(1.0);
        m_uart->flush();

        if (!sendCommand("\r", "\r\n"))
          throw RestartNeeded(DTR("failed to enter command mode"), 5, false);

        turnOffChannels();

        // Check what digital sensors are active.
        checkDigitalSensors();

        // Configure internal channels, accordingly to active
        // digital sensors and configuration file.
        configureInternalChannels();

        // Start monitoring.
        startMonitoring();

        if (m_param_chang)
          m_param_chang = false;

        m_wdog.setTop(m_args.input_timeout);
      }

      void
      startMonitoring(void)
      {
        // Start Monitoring.
        for (unsigned i = 0; i < c_st_comm_count; i++)
        {
          if (!sendCommand(c_st_monit[i], c_rc_st_monit[i]))
            throw RestartNeeded(DTR("failed to start monitoring"), 5, false);
        }
      }

      void
      stopMonitoring(void)
      {
        // To exit sensor talk mode (stop monitoring).
        sendCommand("\x03", "");
      }

      void
      turnOffChannels(void)
      {
        // Turn off all internal channels.
        for (unsigned i = 0; i < c_internals_count; i++)
        {
          if (!sendCommand(c_nset_ichn[i], c_rc_nset_ichn[i]))
            throw RestartNeeded(DTR("failed to turn off internal channels"), 5, false);
        }
      }

      void
      configureInternalChannels(void)
      {
        // Start by turning off internal channels.
        turnOffChannels();

        // Check if there are two equal internal channels.
        for (unsigned i = 0; i < c_internals_count; i++)
        {
          for (unsigned j = 0; j < c_internals_count; j++)
          {
            // If two channels have the same message, then restart task.
            if (m_args.internal_messages[i].compare(m_args.internal_messages[j]) == 0 &&
                !m_args.internal_messages[i].empty() &&
                i != j)
            {
              throw RestartNeeded(DTR("Two equal internal channels"), 5, true);
            }
          }
        }

        unsigned mask_sv = DSF_SV | DSF_PRESSURE | DSF_TEMPERATURE;
        unsigned mask_cond = DSF_CONDUCTIVITY | DSF_PRESSURE | DSF_TEMPERATURE;
        // Configure internal channels.
        for (unsigned i = 0; i < c_internals_count; i++)
        {
          // To prevent errors from trying to turn on SV channel
          // without the proper configuration.
          if (m_args.internal_messages[i].compare(c_internal_templates[ICM_SV]) == 0 && (m_bit_flag & mask_sv) == mask_sv)
            throw RestartNeeded(DTR("Tried to turn on SV channel without proper configuration"), 5, true);

          for (unsigned j = 0; j < c_internals_count; j++)
          {
            // If there are conditions to turn any internal channel.
            if ((m_bit_flag & mask_cond) == mask_cond &&
                m_args.internal_messages[i].compare(c_internal_templates[j]) == 0)
            {
              if (!sendCommand(c_set_ichn[j], c_rc_set_ichn[j]))
                throw RestartNeeded(DTR("failed to turn on internal channels"), 5, false);
            }
            if ((m_bit_flag & mask_sv) == mask_sv &&
                m_args.internal_messages[i].compare(c_internal_templates[j]) == 0 &&
                m_args.internal_messages[i].compare(c_internal_templates[ICM_SV]) != 0)
            {
              if (!sendCommand(c_set_ichn[j], c_rc_set_ichn[j]))
                throw RestartNeeded(DTR("failed to turn on internal channels"), 5, false);
            }
          }
        }

        unsigned mask_pt = DSF_PRESSURE | DSF_TEMPERATURE;
        // If no temperature sensor or no pressure sensor is
        // available, then turn off all internal channels.
        if (!(m_bit_flag & mask_pt))
        {
          turnOffChannels();

          if (m_internal_active != 0)
            war(DTR("Internal channels can not be turned on. Please check sensor configuration."));
          m_internal_active = 0;
        }

      }

      //! Cross check of what internal channels may be turned on
      //! and what channels the user want turned on.
      void
      checkDigitalSensors(void)
      {
        if (m_internal_active == 0)
        {
          m_bit_flag = 0;
        }
        else
        {
          for (unsigned i = 0; i < c_digs_count; ++i)
          {
            for (unsigned j = 0; j < TI_TOTAL; ++j)
            {
              if (m_args.dig_messages[i].compare(c_digital_templates[j]) == 0)
                m_bit_flag |= 1 << j;
            }
          }
        }
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_uart->writeString(cmd);

        if (Poll::poll(*m_uart, 1.0))
        {
          m_uart->readString(bfr, sizeof(bfr));
          if (std::strcmp(bfr, reply) == 0)
            return true;
        }

        return false;
      }

      void
      dispatchSensValues(IMC::Message* message, double value, std::string label, double factor)
      {
        message->setValueFP(value * factor);
        dispatch(message);
        if (c_digital_templates[TI_PRESSURE].compare(message->getName()) == 0)
          dispatchDepth(label, value, factor);
      }

      void
      dispatchDepth(std::string label, double value, double factor)
      {
        m_depth.setSourceEntity(resolveEntity(label));
        m_depth.value = UNESCO1983::computeDepth(value * factor / c_dbar_to_bar, m_lat, m_args.geop_anomaly);
        dispatch(m_depth);
      }

      inline int
      digAndAnalogActive(void)
      {
        return m_dig_active + m_analog_active;
      }

      inline int
      allActive(void)
      {
        return m_dig_active + m_analog_active + m_internal_active;
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        char *ptr;
        double tmp_bfr[c_digs_count + c_analogs_count + c_internals_count];
        double extracted_value;
        int k;
        int n;

        // Receiving messages from sensor
        // and continuously dispatching them.
        while (!stopping())
        {
          consumeMessages();

          // If change digital sensor or internal channel
          // it is needed to reconfigure internal channels.
          if (m_param_chang)
          {
            m_param_chang = false;
            stopMonitoring();

            turnOffChannels();

            m_bit_flag = 0;
            checkDigitalSensors();

            configureInternalChannels();

            startMonitoring();
          }

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->readString(bfr, sizeof(bfr));
          ptr = bfr;
          k = 0;
          n = 0;
          // You can use the %n conversion specifier, which doesn't consume any input
          // instead, it expects an int * parameter, and writes the number of characters
          // consumed from the input into it.
          while (std::sscanf(ptr, "%lf%n", &extracted_value, &n) == true)
          {
            ptr +=n;
            // Save to temporary buffer the sensor output.
            if (k < allActive())
              tmp_bfr[k] = extracted_value;
            k++;
          }

          // Check if there is some mismatch between configuration file
          // and sensor output. If true, doesn't dispatch any message.
          if (k != allActive())
          {
            war(DTR("Mismatch between sensor output and configuration file!"));
            continue;
          }

          // Dispatch digital active channels.
          for (int j = 0; j < m_dig_active; j++)
            dispatchSensValues(m_digs[m_active_slots_array[j]], tmp_bfr[j], m_args.dig_elabels[m_active_slots_array[j]], m_args.dig_factors[m_active_slots_array[j]]);

          // Dispatch analog active channels.
          for (int j = m_dig_active; j < digAndAnalogActive(); j++)
            dispatchSensValues(m_analogs[m_active_slots_array[j]], tmp_bfr[j], m_args.analog_elabels[m_active_slots_array[j]], m_args.analog_factors[m_active_slots_array[j]]);

          // Dispatch internal active channels.
          for (int j = digAndAnalogActive(); j < allActive(); j++)
            dispatchSensValues(m_internals[m_active_slots_array[j]], tmp_bfr[j], m_args.internal_elabels[m_active_slots_array[j]], m_args.analog_factors[m_active_slots_array[j]]);

          if (rv == 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_wdog.reset();
        }

        stopMonitoring();

        turnOffChannels();
      }

    };
  }
}

DUNE_TASK
