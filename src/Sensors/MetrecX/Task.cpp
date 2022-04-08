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
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Tiago Rodrigues                                                  *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cstdio>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Probes.hpp"

namespace Sensors
{
  //! Device driver for the AML OEM Metrec•X.
  //!
  //! This device enables to change sensors like plug'n'play.
  //! It supports a maximum of 5 digital sensors and 10 analogic
  //! probes. Currently, this driver supports 3 analog sensors.
  //!
  //! Water density, salinity or sound velocity may be computed
  //! internally if temperature, pressure and conductivity or
  //! sound velocity probes are available.
  //!
  //! @author Tiago Rodrigues
  namespace MetrecX
  {
    using DUNE_NAMESPACES;

    //! Internal temperature presence timeout.
    static const float c_temp_tout = 5.0f;

    //! Commands
    static const char* c_cmd_ops[] = { "SALINITY", "DENSITY", "SV" };
    static const char* c_cmd_icset = "SET SCAN ";
    static const char* c_cmd_icnos = "SET SCAN NO";
    static const char* c_cmd_sampl = "SET S 1s";
    static const char* c_cmd_start = "MONITOR";

    //! Number of digital sensors possible.
    static const unsigned c_di_sensors = 4;
    //! Digital sensor options.
    static const std::string c_di_options[] = { "Conductivity", "SoundSpeed",
                                                "Temperature", "Pressure" };
    //! Internal channel options.
    static const std::string c_in_options[] = { "Salinity", "WaterDensity", "SoundSpeed" };

    //! Digital Sensor Options indexes.
    enum DigitalIndex
    {
      DSF_CONDUCTIVITY = 1,
      DSF_SV = 2,
      DSF_TEMPERATURE = 4,
      DSF_PRESSURE = 8
    };

    //! Internal Channel Options indexes.
    enum InternalIndex
    {
      ICM_SALINITY = 0,
      ICM_DENSITY = 1,
      ICM_SSPEED = 2
    };

    //! Digital channels.
    static const unsigned c_di_count = 5;
    //! Analog channels.
    static const unsigned c_an_count = 3;
    //! Internal channels.
    static const unsigned c_in_count = 3;
    //! Number of total channels.
    static const unsigned c_channels = c_di_count + c_an_count;
    //! Number of total readings.
    static const unsigned c_total = c_channels + c_in_count;
    //! Redox mV offset
    static const unsigned c_redox_offset = 2500;
    //! PH: Nernst value in Volts at 20ºC.
    static const float c_nernst20 = 0.058168f;
    //! PH: Nernst value in Volts at 0ºC
    static const float c_nernst0 = 0.0542f;
    //! PH: voltage per PH unit per degree.
    static const float c_vperph = 0.1984f;

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
      //! pH variable - Calibration buffer value.
      double calbuffer;
      //! pH variable - pH Vout during calibration in V.
      double offset;
      //! pH variable - pH slope in V. Depends on pH range.
      double slope;
      //! External temperature entity label.
      std::string elabel_temp;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Digital messages.
      IMC::Message* m_msgs[c_total];
      //! Task Watchdog.
      Counter<double> m_wdog;
      //! Array of active slots
      bool m_slots[c_total];
      //! Vehicle Latitude.
      double m_lat;
      //! Waiting setup.
      bool m_need_setup;
      //! Ready with conductivity, temperature and pressure.
      bool m_ready_cond;
      //! Ready with sound speed, temperature and pressure.
      bool m_ready_sspe;
      //! Task arguments.
      Arguments m_args;
      //! Internal temperature presence watchdog.
      Counter<double> m_temp_wdog;
      //! Temperature entity id.
      unsigned m_temp_eid;
      //! Temperature for pH calculation
      float m_temp;
      //! Probes.
      Probes m_probes;

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

        param("Entity Label - Temperature Backup", m_args.elabel_temp)
        .description("Entity label of the temperature backup");

        param("PH Calibration Buffer", m_args.calbuffer)
        .defaultValue("7.0")
        .description("Buffer value corrected in fuction of the temperature used during calibration");

        param("PH Voltage Calibration Reading", m_args.offset)
        .defaultValue("2.496")
        .units(Units::Volt)
        .description("pH Vout during calibration in V");

        param("PH Slope", m_args.slope)
        .defaultValue("0.634")
        .units(Units::Volt)
        .description("pH slope in V. Depends on the selected pH range");

        // initialize variables.
        for (unsigned i = 0; i < c_total; ++i)
        {
          m_msgs[i] = NULL;
          m_slots[i] = false;
        }

        m_temp_wdog.setTop(c_temp_tout);
        m_ready_cond = false;
        m_ready_sspe = false;
        m_need_setup = true;
        m_lat = 0.0;

        bind<IMC::EstimatedState>(this);
        bind<IMC::Temperature>(this);
      }

      ~Task(void)
      {
        // To clear uart if an exception is thrown.
        onResourceRelease();

        for (unsigned i = 0; i < c_total; ++i)
          Memory::clear(m_msgs[i]);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_temp_eid = resolveEntity(m_args.elabel_temp);
        }
        catch (...)
        {
          m_temp_eid = UINT_MAX;
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_lat = msg->lat;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSourceEntity() != m_temp_eid)
          return;

        if (!m_temp_wdog.overflow())
          return;

        m_temp = msg->value;
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

          // use task's entity label.
          if (m_args.labels[i].empty())
          {
            // analog entity labels need to be defined.
            if (i >= c_di_count && i < c_channels)
            {
              try
              {
                unsigned eid;
                eid = resolveEntity(String::str("%s - Analog %u", getEntityLabel(), i + 1 - c_di_count));
                m_msgs[i]->setSourceEntity(eid);
              }
              catch (...)
              { }
            }

            continue;
          }

          try
          {
            unsigned eid = resolveEntity(m_args.labels[i]);
            m_msgs[i]->setSourceEntity(eid);
          }
          catch (...)
          { }
        }

        for (unsigned i = 0; i < c_in_count; ++i)
        {
          unsigned ix = i + c_channels;
          m_msgs[ix] = IMC::Factory::produce(c_in_options[i]);
          m_slots[ix] = true;
        }
      }

      //! Reserve entities.
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_channels; ++i)
        {
          // message not defined.
          if (m_args.msgs[i].empty())
            continue;

          // entity label not defined
          if (m_args.labels[i].empty())
          {
            // analog entity labels need to be defined.
            if (i >= c_di_count && i < c_channels)
              reserveEntity(String::str("%s - Analog %u", getEntityLabel(), i + 1 - c_di_count));
            continue;
          }

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

        if (!sendCommand(""))
          throw RestartNeeded(DTR("failed to enter command mode"), 5, false);

        setup();
      }

      //! Setup device.
      void
      setup(void)
      {
        m_need_setup = false;
        checkDigital();
        setupInternal();
        startMonitoring();
      }

      //! Start monitoring device.
      void
      startMonitoring(void)
      {
        // Start Monitoring.
        if (!sendCommand(c_cmd_sampl))
          throw RestartNeeded(DTR("failed to set sampling rate"), 5, false);

        if (!sendCommand(c_cmd_start))
          throw RestartNeeded(DTR("failed to start monitoring"), 5, false);

        m_wdog.setTop(m_args.input_timeout);
      }

      //! Stop monitoring device.
      void
      stopMonitoring(void)
      {
        // To exit sensor talk mode (stop monitoring).
        m_uart->writeString("\x03");
      }

      //! Disable all input channels.
      void
      disableInChannels(void)
      {
        for (unsigned i = 0; i < c_in_count; i++)
        {
          if (!setSensor(c_cmd_icnos, c_cmd_ops[i]))
            throw RestartNeeded(DTR("failed to disable internal channels"), 5, false);
        }
      }

      //! Setup internal channels.
      void
      setupInternal(void)
      {
        // Start by turning off internal channels.
        disableInChannels();

        // If no temperature sensor or no pressure sensor are available,
        // do not bother to check any further.
        if (!(m_ready_cond || m_ready_sspe))
        {
          for (unsigned i = c_channels; i < c_total; ++i)
          {
            m_slots[i] = false;
            Memory::clear(m_msgs[i]);
          }

          return;
        }

        // Configure internal channels.
        if (!setSensor(c_cmd_icset, c_cmd_ops[ICM_DENSITY]))
          err(DTR("failed to set water density"));

        if (!setSensor(c_cmd_icset, c_cmd_ops[ICM_SALINITY]))
          err(DTR("failed to set salinity"));

        if (m_ready_sspe)
        {
          unsigned ix = c_channels + ICM_SSPEED;
          m_slots[ix] = false;
          Memory::clear(m_msgs[ix]);
          return;
        }

        if (!setSensor(c_cmd_icset, c_cmd_ops[ICM_SSPEED]))
          err(DTR("failed to set sound speed"));
      }

      //! Cross check of what internal channels may be turned on
      //! and what channels the user want turned on.
      void
      checkDigital(void)
      {
        uint8_t mask = 0;
        for (unsigned i = 0; i < c_di_count; ++i)
        {
          for (unsigned j = 0; j < c_di_sensors; ++j)
          {
            if (m_args.msgs[i] == c_di_options[j])
              mask |= 1 << j;
          }
        }

        m_ready_cond = false;
        m_ready_sspe = false;
        if (mask & DSF_PRESSURE && mask & DSF_TEMPERATURE)
        {
          if (mask & DSF_CONDUCTIVITY)
            m_ready_cond = true;
          if (mask & DSF_SV)
            m_ready_sspe = true;
        }
      }

      //! Set sensor option.
      //! @param[in] cmd command.
      //! @return true if command was received successfully, false otherwise.
      bool
      setSensor(const std::string& cmd, const std::string& option)
      {
        std::string str = cmd + option;
        return sendCommand(str);
      }

      //! Send command to device
      //! @param[in] cmd command.
      //! @return true if command was received successfully, false otherwise.
      bool
      sendCommand(const std::string& cmd)
      {
        std::string str = cmd + "\r";
        std::string reply = str + "\n";
        return sendCommand(str, reply);
      }

      //! Send command to device
      //! @param[in] cmd command.
      //! @param[in] reply expected reply.
      //! @return true if command was received successfully, false otherwise.
      bool
      sendCommand(const std::string& cmd, const std::string& reply)
      {
        m_uart->writeString(cmd.c_str());
        spew("cmd: %s", sanitize(cmd).c_str());

        char bfr[128];
        Counter<double> timer(1.0);
        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            break;

          m_uart->readString(bfr, sizeof(bfr));
          spew("reply: %s", sanitize(bfr).c_str());

          if (String::endsWith(bfr, reply))
            return true;
        }

        return false;
      }

      //! Dispatch value.
      //! @param[in] msg IMC message.
      //! @param[in] value measurement value.
      //! @param[in] factor multiplication factor.
      //! @param[in] tstamp current timestamp.
      //! @param[in] raw dispatch raw voltage.
      void
      dispatchValue(IMC::Message* msg, double value, double factor,
                    double tstamp, bool raw = false, unsigned index = 0)
      {
        // Convert value to standard MRA units.
        std::string name = raw ? m_args.msgs[index + c_di_count] : m_args.msgs[index];
        float cfactor = m_probes.conversion((char*)name.c_str());
        if(!cfactor)
          war(DTR("unknown probe (%s)"), (char*)name.c_str());
        else
          value = value * cfactor;

        // send raw voltages.
        if (raw)
        {
          IMC::Voltage volt;

          unsigned eid = msg->getSourceEntity();
          if (eid == getEntityId())
            volt.setSourceEntity(resolveEntity(String::str("%s - Analog %u", getEntityLabel(), index + 1)));
          else
            volt.setSourceEntity(eid);

          volt.value = value;
          volt.setTimeStamp(tstamp);
          dispatch(volt, DF_KEEP_TIME);
        }

        // Internal temperature available.
        if (msg->getId() == DUNE_IMC_TEMPERATURE)
        {
          m_temp = value * factor;
          m_temp_wdog.reset();
        }

        msg->setValueFP(value * factor);
        msg->setTimeStamp(tstamp);

        // only send calibrated PH and Redox.
        if (msg->getId() == DUNE_IMC_PH)
        {
          dispatchPH(msg->getSourceEntity(), value * factor, tstamp);
          return;
        }
        else if (msg->getId() == DUNE_IMC_REDOX)
        {
          dispatchRedox(msg->getSourceEntity(), value * factor, tstamp);
          return;
        }

        dispatch(msg, DF_KEEP_TIME);

        if (msg->getId() == DUNE_IMC_PRESSURE)
          dispatchDepth(msg->getSourceEntity(), value * factor, tstamp);
      }

      //! Dispatch value.
      //! @param[in] msg IMC message.
      //! @param[in] value value.
      //! @param[in] tstamp current timestamp.
      void
      dispatchValue(IMC::Message* msg, double value, double tstamp)
      {
        msg->setValueFP(value);
        msg->setTimeStamp(tstamp);
        dispatch(msg, DF_KEEP_TIME);
      }

      //! Dispatch depth.
      //! @param[in] id entity id.
      //! @param[in] value depth value.
      //! @param[in] tstamp current timestamp.
      void
      dispatchDepth(unsigned id, double value, double tstamp)
      {
        IMC::Depth depth;
        depth.setSourceEntity(id);
        depth.setTimeStamp(tstamp);
        double val = value / Math::c_pascal_per_bar;
        depth.value = UNESCO1983::computeDepth(val, m_lat, m_args.geop_anomaly);
        dispatch(depth, DF_KEEP_TIME);
      }

      //! Dispatch pH.
      //! @param[in] id entity id.
      //! @param[in] value ph reading.
      //! @param[in] tstamp current timestamp.
      void
      dispatchPH(unsigned id, double value, double tstamp)
      {
        IMC::PH pH;
        pH.setSourceEntity(id);
        pH.setTimeStamp(tstamp);
        pH.value = m_args.calbuffer;
        pH.value += (((value - m_args.offset) * (c_nernst20 / m_args.slope))
                     /(c_nernst0 + (m_temp * c_vperph)));
        dispatch(pH, DF_KEEP_TIME);
      }

      //! Dispatch Redox.
      //! @param[in] id entity id.
      //! @param[in] value redox reading.
      //! @param[in] tstamp current timestamp.
      void
      dispatchRedox(unsigned id, double value, double tstamp)
      {
        IMC::Redox redox;
        redox.setSourceEntity(id);
        redox.setTimeStamp(tstamp);
        redox.value = (value * 1000 + c_redox_offset) / 2.0;
        dispatch(redox, DF_KEEP_TIME);
      }


      //! Get active channels.
      //! @return active channels.
      inline unsigned
      getChannels(void)
      {
        unsigned active = 0;

        // Count number of active channels.
        for (unsigned i = 0; i < c_total; ++i)
        {
          if (m_slots[i])
            active++;
        }

        return active;
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        double values[c_total];

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
          unsigned ix_read = 0;
          int pos = 0;

          double value;
          unsigned chn_active = getChannels();
          while (std::sscanf(ptr, "%lf%n", &value, &pos) == 1)
          {
            ptr += pos;

            // Save to temporary buffer.
            if (ix_read < chn_active)
              values[ix_read] = value;
            ix_read++;
          }

          // Check if there is some mismatch between the configuration file
          // and sensor output. If true, doesn't dispatch any message.
          if (ix_read != chn_active)
            throw RestartNeeded(DTR("mismatch between output and configuration"), 30, true);

          // Dispatch data.
          unsigned index = 0;
          for (unsigned i = 0; i < c_total; i++)
          {
            if (m_slots[i])
            {
              if (i < c_channels)
              {
                // dispatch raw voltage (analog).
                if (i >= c_di_count)
                  dispatchValue(m_msgs[i], values[index++], m_args.factors[i], tstamp, true, i - c_di_count);
                else
                  dispatchValue(m_msgs[i], values[index++], m_args.factors[i], tstamp, false, i);
              }
              else
              {
                dispatchValue(m_msgs[i], values[index++], tstamp);
              }
            }
          }

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }

        stopMonitoring();
        disableInChannels();
      }

    };
  }
}

DUNE_TASK
