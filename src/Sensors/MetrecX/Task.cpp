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

// DUNE headers.
#include <DUNE/DUNE.hpp>

#define SEND_COMMAND(command)                   \
  command"\r"
#define RECEIVE_COMMAND(command)                \
  ">"command"\r\n"

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
    static const char* c_set_internal_channels[] = { SEND_COMMAND("SET SCAN DENSITY"),
                                                     SEND_COMMAND("SET SCAN SALINITY"),
                                                     SEND_COMMAND("SET SCAN SV")};

    static const char* c_receive_set_internal_channels[] = { RECEIVE_COMMAND("SET SCAN DENSITY"),
                                                             RECEIVE_COMMAND("SET SCAN SALINITY"),
                                                             RECEIVE_COMMAND("SET SCAN SV")};

    static const char* c_noset_internal_channels[] = { SEND_COMMAND("SET SCAN NODENSITY"),
                                                       SEND_COMMAND("SET SCAN NOSALINITY"),
                                                       SEND_COMMAND("SET SCAN NOSV")};

    static const char* c_receive_noset_internal_channels[] = { RECEIVE_COMMAND("SET SCAN NODENSITY"),
                                                               RECEIVE_COMMAND("SET SCAN NOSALINITY"),
                                                               RECEIVE_COMMAND("SET SCAN NOSV")};

    static const char* c_start_monitoring[] = { SEND_COMMAND("SET S 1 s"),
                                                SEND_COMMAND("MONITOR")};

    static const char* c_receive_start_monitoring[] = { RECEIVE_COMMAND("SET S 1 s"),
                                                        RECEIVE_COMMAND("MONITOR")};

    //! Internal Channels Cases.
    enum InternalChannelsModes
    {
      ICM_DENSITY_SALINITY = 2,
      ICM_DENSITY_SALINITY_SV = 3
    };

    //! Templates Index.
    enum TemplatesIndex
    {
      TI_CONDUCTIVITY = 0,
      TI_SV = 1,
      TI_TEMPERATURE = 2,
      TI_PRESSURE = 3
    };

    //! Number of max Dig channels.
    static const unsigned c_digs_count = 5;
    //! Number of max Analog channels.
    static const unsigned c_analogs_count = 10;
    //! Number of max Internal channels.
    static const unsigned c_internals_count = 3;
    //! Number of commands to start monitor.
    static const unsigned c_start_commands_count = 2;

    //! Template for digital sensors.
    static const char* c_digital_templates[] = {"Conductivity",
                                                "Sound Velocity",
                                                "Temperature",
                                                "Pressure"};

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
      //! Conductivity boolean flag.
      bool m_conductivity;
      //! Sound Velocity boolean flag.
      bool m_sv;
      //! Temperature boolean flag.
      bool m_temperature;
      //! Pressure boolean flag.
      bool m_pressure;
      //! Vehicle Latitude.
      double m_lat;

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

        //! Extract digital channels configuration.
        std::memset(m_digs, 0, sizeof(m_digs));
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          std::string option = String::str("Dig Channel %u - Message", i + 1);
          param(option, m_args.dig_messages[i]);

          option = String::str("Dig Channel %u - Entity Label", i + 1);
          param(option, m_args.dig_elabels[i]);

          option = String::str("Dig Channel %u - Conversion", i + 1);
          param(option, m_args.dig_factors[i])
          .size(1)
          .defaultValue("1.0");
        }

        //! Extract analog channels configuration.
        std::memset(m_analogs, 0, sizeof(m_analogs));
        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          std::string option = String::str("Analog Channel %u - Message", i + 1);
          param(option, m_args.analog_messages[i]);

          option = String::str("Analog Channel %u - Entity Label", i + 1);
          param(option, m_args.analog_elabels[i]);

          option = String::str("Analog Channel %u - Conversion", i + 1);
          param(option, m_args.analog_factors[i])
          .size(1)
          .defaultValue("1.0");
        }

        //! Extract internal channels configuration.
        std::memset(m_internals, 0, sizeof(m_internals));
        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          std::string option = String::str("Internal Channel %u - Message", i + 1);
          param(option, m_args.internal_messages[i]);

          option = String::str("Internal Channel %u - Entity Label", i + 1);
          param(option, m_args.internal_elabels[i]);

          option = String::str("Internal Channel %u - Conversion", i + 1);
          param(option, m_args.internal_factors[i])
          .size(1)
          .defaultValue("1.0");
        }

        std::memset(m_active_slots_array, 0, sizeof(m_active_slots_array));

        m_dig_active = 0;
        m_analog_active = 0;
        m_internal_active = 0;

        m_conductivity = false;
        m_sv = false;
        m_temperature = false;
        m_pressure = false;

        m_lat = 0;
        bind<IMC::EstimatedState>(this);
      }

      ~Task(void)
      {
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          if (m_digs[i] != NULL)
            delete m_digs[i];
        }

        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          if (m_analogs[i] != NULL)
            delete m_analogs[i];
        }

        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          if (m_internals[i] != NULL)
            delete m_internals[i];
        }
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
      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        //! Entity reservation for dig channels.
        for (unsigned i = 0; i < c_digs_count; ++i)
        {
          if (m_args.dig_elabels[i].empty() || m_args.dig_messages[i].empty())
            continue;

          //! Produce a message object by name.
          //! @param name message name.
          //! @return message object allocated on the heap.
          m_digs[i] = IMC::Factory::produce(m_args.dig_messages[i]);

          unsigned eid = 0;

          try
          {
            eid = resolveEntity(m_args.dig_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.dig_elabels[i]);
          }

          m_digs[i]->setSourceEntity(eid);
          m_active_slots_array[m_dig_active] = i;
          m_dig_active++;
        }

        //! Entity reservation for analog channels.
        for (unsigned i = 0; i < c_analogs_count; ++i)
        {
          if (m_args.analog_elabels[i].empty())
            continue;

          m_analogs[i] = IMC::Factory::produce(m_args.analog_messages[i]);

          unsigned eid = 0;

          try
          {
            eid = resolveEntity(m_args.analog_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.analog_elabels[i]);
          }

          m_analogs[i]->setSourceEntity(eid);
          m_active_slots_array[m_dig_active + m_analog_active] = i;
          m_analog_active++;
        }

        //! Entity reservation for internal channels.
        for (unsigned i = 0; i < c_internals_count; ++i)
        {
          if (m_args.internal_elabels[i].empty())
            continue;

          m_internals[i] = IMC::Factory::produce(m_args.internal_messages[i]);

          unsigned eid = 0;

          try
          {
            eid = resolveEntity(m_args.internal_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.internal_elabels[i]);
          }

          m_internals[i]->setSourceEntity(eid);
          m_active_slots_array[m_dig_active + m_analog_active + m_internal_active] = i;
          m_internal_active++;
        }
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
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
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

        checkDigitalSensors();

        if (!sendCommand("\r", "\r\n"))
          throw RestartNeeded(DTR("failed to enter command mode"), 5);

        if (m_conductivity && m_pressure && m_temperature)
        {
          //! Turn on all internal channels.
          for (unsigned i = 0; i < ICM_DENSITY_SALINITY_SV; i++)
          {
            if (!sendCommand(c_set_internal_channels[i], c_receive_set_internal_channels[i]))
              throw RestartNeeded(DTR("failed to turn on internal channels"), 5, false);
          }
        }
        else if (m_sv && m_pressure && m_temperature)
        {
          //! Turn on two internal channels, density and salinity.
          for (int i = 0; i < ICM_DENSITY_SALINITY; i++)
          {
            if (!sendCommand(c_set_internal_channels[i], c_receive_set_internal_channels[i]))
              throw RestartNeeded(DTR("failed to turn on internal channels"), 5, false);
          }
        }
        else
        {
          //! Turn off internal channels.
          for (unsigned i = 0; i < ICM_DENSITY_SALINITY_SV; i++)
          {
            if (!sendCommand(c_noset_internal_channels[i], c_receive_noset_internal_channels[i]))
              throw RestartNeeded(DTR("failed to turn off internal channels"), 5, false);
          }
          m_internal_active = 0;
          DUNE_WRN("AML-MetrecX", "Internal channels can not be turned on. Please check sensor configuration.");
        }

        //! Start Monitoring.
        for (unsigned i = 0; i < c_start_commands_count; i++)
        {
          if (!sendCommand(c_start_monitoring[i], c_receive_start_monitoring[i]))
            throw RestartNeeded(DTR("failed to start monitoring"), 5);
        }

        m_wdog.setTop(m_args.input_timeout);
      }

      //! Cross check of what internal channels may be turned on
      //! and what channels the user want turned on.
      void
      checkDigitalSensors(void)
      {
        if (m_internal_active == 0)
        {
          m_conductivity = false;
          m_sv = false;
          m_temperature = false;
          m_pressure = false;
        }
        else if (m_internal_active != 0)
        {
          for (unsigned i = 0; i < c_digs_count; ++i)
          {
            if (m_args.dig_messages[i].compare(c_digital_templates[TI_CONDUCTIVITY]) == 0)
              m_conductivity = true;

            if (m_args.dig_messages[i].compare(c_digital_templates[TI_SV]) == 0)
              m_sv = true;

            if (m_args.dig_messages[i].compare(c_digital_templates[TI_TEMPERATURE]) == 0)
              m_temperature = true;

            if (m_args.dig_messages[i].compare(c_digital_templates[TI_PRESSURE]) == 0)
              m_pressure = true;
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
      dispatchDepth(std::string label, float value, double factor)
      {
        m_depth.setSourceEntity(resolveEntity(label));
        m_depth.value = UNESCO1983::computeDepth(value * factor / c_dbar_to_bar, m_lat, m_args.geop_anomaly);
        dispatch(m_depth);
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        char *ptr;
        float tmp_bfr[c_digs_count + c_analogs_count + c_internals_count];
        float extracted_value;
        int k;
        int n;

        //! Receiving messages from sensor
        //! and continuously dispatching them
        while (!stopping())
        {
          consumeMessages();

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

          //! You can use the %n conversion specifier, which doesn't consume any input
          //! instead, it expects an int * parameter, and writes the number of characters
          //! consumed from the input into it.
          while (sscanf(ptr, "%f%n", &extracted_value, &n) == true)
          {
            ptr +=n;
            // Save to temporary buffer the sensor output.
            if (k < m_dig_active + m_analog_active + m_internal_active)
              tmp_bfr[k] = extracted_value;
            k++;
          }

          // Check if there is some mismatch between configuration file
          // and sensor output. If true, doesn't dispatch any message.
          if (k != m_dig_active + m_analog_active + m_internal_active)
          {
            DUNE_WRN("AML-MetrecX", "Mismatch between sensor output and configuration file!");
            continue;
          }

          for (int j = 0; j < m_dig_active + m_analog_active + m_internal_active; j++)
          {
            // Digital channels.
            if (j < m_dig_active)
            {
              m_digs[m_active_slots_array[j]]->setValueFP(tmp_bfr[j]);
              dispatch(m_digs[m_active_slots_array[j]]);

              // Dispatch depth value if pressure value is also dispatched.
              if (strcmp (m_digs[m_active_slots_array[j]]->getName(), c_digital_templates[TI_PRESSURE]) == 0)
                dispatchDepth(m_args.dig_elabels[m_active_slots_array[j]], tmp_bfr[j], m_args.dig_factors[m_active_slots_array[j]]);
            }

            // Analog channels.
            if (j >= m_dig_active && j < m_dig_active + m_analog_active)
            {
              m_analogs[m_active_slots_array[j]]->setValueFP(tmp_bfr[j]);
              dispatch(m_analogs[m_active_slots_array[j]]);

              // Dispatch depth value if pressure value is also dispatched.
              if (strcmp (m_analogs[m_active_slots_array[j]]->getName(), c_digital_templates[TI_PRESSURE]) == 0)
                dispatchDepth(m_args.analog_elabels[m_active_slots_array[j]], tmp_bfr[j], m_args.analog_factors[m_active_slots_array[j]]);
            }

            // Internal channels.
            if (j >= m_dig_active + m_analog_active && j < m_dig_active + m_analog_active + m_internal_active)
            {
              m_internals[m_active_slots_array[j]]->setValueFP(tmp_bfr[j]);
              dispatch(m_internals[m_active_slots_array[j]]);
            }

          }

          if (rv == 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_wdog.reset();
        }
      }

    };
  }
}

DUNE_TASK
