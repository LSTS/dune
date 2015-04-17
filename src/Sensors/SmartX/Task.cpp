//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  namespace SmartX
  {
    using DUNE_NAMESPACES;

    enum StateMachineStates
    {
      ST_ACTIVATION_START,
      ST_CONNECT,
      ST_SAMPLING_STOP,
      ST_DETECTION_START,
      ST_DETECTION_WAIT,
      ST_CALCULATED_SET,
      ST_CONFIG_SET,
      ST_SAMPLING_SET_RATE,
      ST_SAMPLING_START,
      ST_ACTIVE,
      ST_DEACTIVATION_START,
      ST_DEACTIVATION_CLOSE,
      ST_IDLE
    };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Sampling frequency.
      double sampling_freq;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Driver.
      Driver* m_driver;
      //! Timer.
      Counter<double> m_timer;
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! State machine state queue.
      std::queue<StateMachineStates> m_sm_state_queue;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_driver(NULL),
        m_sm_state(ST_IDLE)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param(DTR_RT("Sampling Frequency"), m_args.sampling_freq)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description(DTR("Sampling frequency"));
      }

      void
      onUpdateParameters(void)
      {
        //FIXME: maybe activating ?
        if (!isActive())
          return;

        if (paramChanged(m_args.sampling_freq))
          queueState(ST_CONFIG_SET);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onRequestActivation(void)
      {
        queueState(ST_ACTIVATION_START);
      }

      void
      onRequestDeactivation(void)
      {
        queueState(ST_DEACTIVATION_START);
      }

      //! Push a new state to the state queue.
      //! @param[in] state state machine state.
      void
      queueState(StateMachineStates state)
      {
        m_sm_state_queue.push(state);
      }

      //! Test if state queue has pending state transitions.
      //! @return true if state queue has pending states, false otherwise.
      bool
      hasQueuedStates(void) const
      {
        return !m_sm_state_queue.empty();
      }

      StateMachineStates
      getCurrentState(void) const
      {
        return m_sm_state;
      }

      StateMachineStates
      dequeueState(void)
      {
        if (hasQueuedStates())
        {
          m_sm_state = m_sm_state_queue.front();
          m_sm_state_queue.pop();
        }

        return m_sm_state;
      }

      bool
      connect(void)
      {
        try
        {
          m_driver = new Sensors::SmartX::Driver(this, m_args.uart_dev, m_args.uart_baud);
          return true;
        }
        catch (std::runtime_error& e)
        {
          (void)e;
        }

        return true;
      }

      double
      getTimeout(double timeout)
      {
        if (m_timer.getRemaining() < timeout)
          return m_timer.getRemaining();

        return timeout;
      }

      void
      failActivation(const std::string& reason)
      {
        activationFailed(reason);
        queueState(ST_IDLE);
      }

      void
      updateStateMachine(void)
      {
        switch (dequeueState())
        {
          // Wait for activation.
          case ST_IDLE:
            break;

            // Start activation sequence.
          case ST_ACTIVATION_START:
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
            m_timer.setTop(getActivationTime());
            queueState(ST_CONNECT);
            break;

            // Open serial port device.
          case ST_CONNECT:
            try
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_CONNECTING);
              m_driver = new Sensors::SmartX::Driver(this, m_args.uart_dev, m_args.uart_baud);
              queueState(ST_SAMPLING_STOP);
              setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_CONNECTED);
            }
            catch (std::runtime_error& e)
            {
              if (m_timer.overflow())
                failActivation(e.what());

              Delay::wait(getTimeout(1.0));
            }
            break;

            // Stop sampling.
          case ST_SAMPLING_STOP:
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
            if (m_driver->samplingStop(getTimeout(1.0)))
            {
              queueState(ST_DETECTION_START);
            }
            else if (m_timer.overflow())
            {
              failActivation("timeout");
            }
            break;

            // Start detection procedure.
          case ST_DETECTION_START:
            if (m_driver->detectionStart(getTimeout(1.0)))
            {
              queueState(ST_DETECTION_WAIT);
            }
            else if (m_timer.overflow())
            {
              failActivation("timeout");
            }
            break;

            // Wait for detection to complete.
          case ST_DETECTION_WAIT:
            if (m_driver->detectionRead(getTimeout(1.0)))
            {
              for (std::vector<Driver::Channel>::const_iterator itr = m_driver->beginChannels(); itr != m_driver->endChannels(); ++itr)
              {
                if (itr->isCalculated())
                  continue;

                inf(DTR("detected sensor '%s' with serial number '%s'"),
                    itr->type.c_str(), itr->serial.c_str());
              }

              queueState(ST_CALCULATED_SET);
            }
            else if (m_timer.overflow())
            {
              failActivation("timeout");
            }
            break;

            // Set calculated channels.
          case ST_CALCULATED_SET:
            if (m_driver->setCalculatedChannels(getTimeout(2.0)))
            {
              queueState(ST_SAMPLING_SET_RATE);
            }
            else if (m_timer.overflow())
            {
              failActivation("timeout");
            }
            break;

            // Set configuration.
          case ST_CONFIG_SET:
            if (m_driver->samplingStop(getTimeout(1.0)))
              queueState(ST_SAMPLING_SET_RATE);
            else if (m_timer.overflow())
              failActivation("timeout");
            break;

            // Set sampling rate.
          case ST_SAMPLING_SET_RATE:
            if (m_driver->setSamplingRate(m_args.sampling_freq, getTimeout(1.0)))
            {
              queueState(ST_SAMPLING_START);
            }
            break;

            // Start sampling.
          case ST_SAMPLING_START:
            if (m_driver->samplingStart(getTimeout(1.0)))
            {
              queueState(ST_ACTIVE);
              m_timer.setTop(5.0);

              if (isActivating())
              {
                activate();
              }

              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

          case ST_ACTIVE:
            if (m_driver->readSample())
              m_timer.reset();

            if (m_timer.overflow())
            {
              queueState(ST_ACTIVATION_START);
              throw RestartNeeded("continuous output timeout", 5.0);
            }

            break;

          case ST_DEACTIVATION_START:
            queueState(ST_DEACTIVATION_CLOSE);
            break;

          case ST_DEACTIVATION_CLOSE:
            if (m_driver->samplingStop(getTimeout(1.0)))
            {
              deactivate();
              Memory::clear(m_driver);
              queueState(ST_IDLE);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            }
            break;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
            consumeMessages();
          else if (hasQueuedStates())
            updateStateMachine();
          else
            waitForMessages(1.0);

          try
          {
            updateStateMachine();
          }
          catch (std::runtime_error& e)
          {
            throw RestartNeeded(e.what(), 5);
          }
        }
      }
    };
  }
}

DUNE_TASK
