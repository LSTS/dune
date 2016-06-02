//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
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
  //! Device driver for the AML OEM Metrec•X.
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

    //! Digital sensor options.
    static const std::string c_di_options[] = { "Conductivity",
                                                "SoundSpeed",
                                                "Temperature",
                                                "Pressure"};

    //! Internal channel options.
    static const std::string c_in_options[] = { "WaterDensity",
                                                "Salinity",
                                                "SoundSpeed"};

    //! Internal Channels.
    enum InternalModes
    {
      ICM_DENSITY = 0,
      ICM_SALINITY,
      ICM_SV
    };

    //! Digital flags.
    enum DigitalFlags
    {
      DSF_CONDUCTIVITY = 1,
      DSF_SV = 2,
      DSF_TEMPERATURE = 4,
      DSF_PRESSURE = 8
    };

    //! Digital channels.
    static const unsigned c_di_count = 5;
    //! Analog channels.
    static const unsigned c_an_count = 3;
    //! Internal channels.
    static const unsigned c_in_count = 3;
    //! Offset for internal channels.
    static const unsigned c_in_offset = c_di_count + c_an_count;
    //! Number of total channels.
    static const unsigned c_channels = c_di_count + c_an_count + c_in_count;
    //! Number of commands to start monitor.
    static const unsigned c_st_comm_count = 2;
    //! Number of digital sensors possible.
    static const unsigned c_di_sensors = 4;
    //! Const to transform dbar to Bar.
    static const unsigned c_dbar_to_bar = 10;
    //! Internal Channels mask.
    static const unsigned c_mask_pt = DSF_PRESSURE | DSF_TEMPERATURE;
    //! Sound velocity internal mask.
    static const unsigned c_mask_sv = DSF_SV | c_mask_pt;
    //! Conductivity internal mask.
    static const unsigned c_mask_cond = DSF_CONDUCTIVITY | c_mask_pt;

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
      //! Messages.
      std::string msgs[c_channels];
      //! Entity Labels.
      std::string labels[c_channels];
      //! Conversion factors.
      double factors[c_channels];
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Digital messages.
      IMC::Message* m_msgs[c_channels];
      //! Task Watchdog.
      Counter<double> m_wdog;
      //! Array of active slots
      bool m_slots[c_channels];
      //! Number of internal active channels.
      int m_in_active;
      //! Vehicle Latitude.
      double m_lat;
      //! Bitmask for digital sensors.
      int m_di_mask;
      //! Waiting setup.
      bool m_need_setup;
      //! Task arguments.
      Arguments m_args;

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
        for (unsigned i = 0; i < c_di_count; ++i)
        {
          std::string option = String::str("Digital Channel %u - Message", i + 1);
          param(option, m_args.msgs[i])
          .defaultValue("")
          .description("Digital channel %u IMC Message");

          option = String::str("Digital Channel %u - Entity Label", i + 1);
          param(option, m_args.labels[i])
          .defaultValue("")
          .description("Digital channel Entity Label");

          option = String::str("Digital Channel %u - Conversion", i + 1);
          param(option, m_args.factors[i])
          .defaultValue("1.0")
          .description("Digital channel conversion factor");
        }

        // Extract analog channels configuration.
        for (unsigned i = 0; i < c_an_count; ++i)
        {
          std::string option = String::str("Analog Channel %u - Message", i + 1);
          param(option, m_args.msgs[i + c_di_count])
          .defaultValue("")
          .description("Analogic channel IMC Message");

          option = String::str("Analog Channel %u - Entity Label", i + 1);
          param(option, m_args.labels[i + c_di_count])
          .defaultValue("")
          .description("Analogic channel Entity Label");

          option = String::str("Analog Channel %u - Conversion", i + 1);
          param(option, m_args.factors[i + c_di_count])
          .defaultValue("1.0")
          .description("Analogic channel conversion factor");
        }

        // Extract internal channels configuration.
        for (unsigned i = 0; i < c_in_count; ++i)
        {
          std::string option = String::str("Internal Channel %u - Message", i + 1);
          param(option, m_args.msgs[i + c_in_offset])
          .defaultValue("")
          .description("Internal channel IMC Message");

          option = String::str("Internal Channel %u - Entity Label", i + 1);
          param(option, m_args.labels[i + c_in_offset])
          .defaultValue("")
          .description("Internal channel Entity Label");

          option = String::str("Internal Channel %u - Conversion", i + 1);
          param(option, m_args.factors[i + c_in_offset])
          .defaultValue("1.0")
          .description("Internal channel conversion factor");
        }

        // initialize variables.
        for (unsigned i = 0; i < c_channels; ++i)
        {
          m_msgs[i] = NULL;
          m_slots[i] = false;
        }

        m_need_setup = true;
        m_in_active = 0;
        m_di_mask = 0;
        m_lat = 0.0;

        bind<IMC::EstimatedState>(this);
      }

      ~Task(void)
      {
        // To clear uart if an exception is thrown.
        onResourceRelease();

        for (unsigned i = 0; i < c_channels; ++i)
          Memory::clear(m_msgs[i]);
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
        m_need_setup = true;

        // Produce and update messages.
        for (unsigned i = 0; i < c_channels; ++i)
        {
          Memory::clear(m_msgs[i]);
          m_slots[i] = false;

          // no message allocated.
          if (m_args.msgs[i].empty())
            continue;

          m_msgs[i] = IMC::Factory::produce(m_args.msgs[i]);
          m_slots[i] = true;

          // use task entity label.
          if (m_args.labels[i].empty())
            continue;

          unsigned eid = 0;
          try
          {
            eid = resolveEntity(m_args.labels[i]);
            m_msgs[i]->setSourceEntity(eid);
          }
          catch (...)
          { }
        }

        m_in_active = 0;
        for (unsigned i = 0; i < c_in_count; ++i)
        {
          if (m_slots[i + c_in_offset] == true)
            m_in_active++;
        }
      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_channels; ++i)
        {
          try
          {
            resolveEntity(m_args.labels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            reserveEntity(m_args.labels[i]);
          }
        }

        // Set entities after their reservation.
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

        setup();
      }

      //! Setup device.
      void
      setup(void)
      {
        m_need_setup = false;
        m_di_mask = 0;
        turnOffChannels();
        checkDigital();
        setupInternal();
        startMonitoring();
        m_wdog.setTop(m_args.input_timeout);
      }

      //! Start monitoring device.
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

      //! Stop monitoring device.
      void
      stopMonitoring(void)
      {
        // To exit sensor talk mode (stop monitoring).
        sendCommand("\x03", "");
      }

      //! Power off channels.
      void
      turnOffChannels(void)
      {
        // Turn off all internal channels.
        for (unsigned i = 0; i < c_in_count; i++)
        {
          if (!sendCommand(c_nset_ichn[i], c_rc_nset_ichn[i]))
            throw RestartNeeded(DTR("failed to turn off internal channels"), 5, false);
        }
      }

      //! Setup internal channels.
      void
      setupInternal(void)
      {
        // Start by turning off internal channels.
        turnOffChannels();

        if (!m_in_active)
          return;

        // Check if there are two equal internal channels.
        if (m_args.msgs[c_in_offset] != NULL)
        {
          if ((m_args.msgs[c_in_offset] == m_args.msgs[c_in_offset + 1]) ||
              (m_args.msgs[c_in_offset] == m_args.msgs[c_in_offset + 2]))
            throw RestartNeeded(DTR("two equal internal channels"), 30.0, true);
        }

        if (m_args.msgs[c_in_offset + 1] != NULL)
        {
          if (m_args.msgs[c_in_offset + 1] == m_args.msgs[c_in_offset + 2])
            throw RestartNeeded(DTR("two equal internal channels"), 30.0, true);
        }

        // If no temperature sensor or no pressure sensor are available,
        // do not bother to check any further.
        if ((m_di_mask & c_mask_pt) != c_mask_pt)
        {
          turnOffChannels();

          if (m_in_active != 0)
            err(DTR("unable to compute internal channels"));

          m_in_active = 0;

          for (unsigned i = 0; i < c_in_count; ++i)
            m_slots[i + c_in_offset] = false;

          return;
        }

        // Configure internal channels.
        for (unsigned i = 0; i < c_in_count; i++)
        {
          unsigned ix = i + c_in_offset;

          // To prevent errors from trying to turn on sound velocity channel
          // when we have that probe installed.
          if (m_args.msgs[ix] == c_in_options[ICM_SV]
              && (m_di_mask & c_mask_sv) == c_mask_sv)
            throw RestartNeeded(DTR("disable sound speed internal channel"), 30.0, true);

          for (unsigned j = 0; j < c_in_count; j++)
          {
            // If there are conditions to turn any internal channel.
            if (m_args.msgs[ix] == c_in_options[j])
            {
              // with conductivity, temperature and pressure, any available
              // internal channel option may be computed. With sound speed
              // probe available, do not recompute sound speed internally.
              if ((m_di_mask & c_mask_cond) == c_mask_cond ||
                  (m_di_mask & c_mask_sv) == c_mask_sv)
              {
                if (!sendCommand(c_set_ichn[j], c_rc_set_ichn[j]))
                  throw RestartNeeded(DTR("failed to turn on internal channels"), 30.0, false);
              }
            }
          }
        }
      }

      //! Cross check of what internal channels may be turned on
      //! and what channels the user want turned on.
      void
      checkDigital(void)
      {
        for (unsigned i = 0; i < c_di_count; ++i)
        {
          for (unsigned j = 0; j < c_di_sensors; ++j)
          {
            if (m_args.msgs[i] == c_di_options[j])
              m_di_mask |= 1 << j;
          }
        }
      }

      //! Send command to device
      //! @param[in] cmd command.
      //! @param[in] reply expected reply.
      //! @return true if command was received successfully, false otherwise.
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

      //! Dispatch value.
      //! @param[in] msg IMC message.
      //! @param[in] label entity label.
      //! @param[in] value depth value.
      //! @param[in] factor multiplication factor.
      //! @param[in] tstamp current timestamp.
      void
      dispatchValue(IMC::Message* msg, double value, std::string label, double factor, double tstamp)
      {
        msg->setValueFP(value * factor);
        msg->setTimeStamp(tstamp);
        dispatch(msg, DF_KEEP_TIME);

        if (msg->getId() == DUNE_IMC_PRESSURE)
          dispatchDepth(label, value, factor, tstamp);
      }

      //! Dispatch depth.
      //! @param[in] label entity label.
      //! @param[in] value depth value.
      //! @param[in] factor multiplication factor.
      //! @param[in] tstamp current timestamp.
      void
      dispatchDepth(std::string label, double value, double factor, double tstamp)
      {
        IMC::Depth depth;
        depth.setSourceEntity(resolveEntity(label));
        depth.setTimeStamp(tstamp);
        depth.value = UNESCO1983::computeDepth(value * factor / c_dbar_to_bar, m_lat, m_args.geop_anomaly);
        dispatch(depth, DF_KEEP_TIME);
      }

      //! Get active channels.
      //! @return active channels.
      inline unsigned
      getChannels(void)
      {
        unsigned active = 0;

        // Count number of active channels.
        for (unsigned i = 0; i < c_channels; ++i)
        {
          if (m_slots[i] == true)
            active++;
        }

        return active;
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        double values[c_channels];

        while (!stopping())
        {
          consumeMessages();

          if (m_need_setup)
          {
            stopMonitoring();
            setup();
          }

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->readString(bfr, sizeof(bfr));
          double tstamp = Clock::getSinceEpoch();

          if (rv == 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          char* ptr = bfr;
          unsigned k = 0;
          int n = 0;

          double value;
          while (std::sscanf(ptr, "%lf%n", &value, &n))
          {
            ptr += n;

            // Save to temporary buffer.
            if (k < getChannels())
              values[k] = value;
            k++;
          }

          // Check if there is some mismatch between the configuration file
          // and sensor output. If true, doesn't dispatch any message.
          if (k != getChannels())
          {
            err(DTR("Mismatch between sensor output and configuration file!"));
            continue;
          }

          // Dispatch data.
          unsigned index = 0;
          for (unsigned i = 0; i < c_channels; i++)
          {
            if (m_slots[i])
              dispatchValue(m_msgs[i], values[index++], m_args.labels[i], m_args.factors[i], tstamp);
          }

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
