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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Sampler.hpp"

namespace Autonomy
{
  namespace OnEvent
  {
    using DUNE_NAMESPACES;

    //! Broadcast channel.
    static const std::string c_broadcast = "broadcast";

    struct Arguments
    {
      // Message to sample.
      std::vector<std::string> message;
      // Minimum positive samples.
      unsigned pos_samples;
      // Minimum negative samples.
      unsigned neg_samples;
      // Positive threshold.
      double pos_threshold;
      // Negative threshold.
      double neg_threshold;
      // Type of event that triggers behavior.
      std::string event_type;
      // Action to be triggered.
      std::string trigger;
      // Communication policy.
      std::string comms_policy;
      // Communication interval.
      float comms_delta;
      // Maximum expected reading.
      float max_reading;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Sampler.
      Sampler* m_sampler;
      // Trigger variable.
      bool m_trigger;
      // Communications timer.
      Time::Counter<double> m_delta;
      // Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sampler(NULL),
        m_trigger(false)
      {
        param("Samples: Minimum Positive Samples", m_args.pos_samples)
        .defaultValue("2")
        .minimumValue("1")
        .description("Minimum consecutive positive samples for detection confirmation.");

        param("Samples: Minimum Negative Samples", m_args.neg_samples)
        .defaultValue("3")
        .minimumValue("1")
        .description("Minimum consecutive negative samples for no-detection confirmation.");

        param("Samples: Positive Threshold", m_args.pos_threshold)
        .defaultValue("2.5")
        .description("Threshold to mark passage from negative to positive samples");

        param("Samples: Negative Threshold", m_args.neg_threshold)
        .defaultValue("2.4")
        .description("Threshold to mark passage from positive to negative samples");

        param("Event Type Trigger", m_args.event_type)
        .values("Detection, NoDetection")
        .defaultValue("Detection")
        .description("Type of event to detect");

        param("Triggered Action", m_args.trigger)
        .values("Abort, Plan")
        .defaultValue("Abort")
        .description("Type of action to be triggered");

        param("Message to sample", m_args.message)
        .defaultValue("");

        param("Communication Policy", m_args.comms_policy)
        .values("Always, Never, OnRisingEdge, Detected")
        .defaultValue("OnRisingEdge")
        .description("Acoustic Transmission Communication Policy");

        param("Communication Interval", m_args.comms_delta)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .description("Communication interval for acoustic transmission requests");

        param("Maximum Expected Reading", m_args.max_reading)
        .defaultValue("5.0")
        .description("Communication interval for acoustic transmission requests");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        bind(this, m_args.message);

        if (paramChanged(m_args.comms_delta))
          m_delta.setTop(m_args.comms_delta);

        // Check if we need to restart sampler.
        bool changed = false;
        changed = (paramChanged(m_args.pos_samples) ||
                   paramChanged(m_args.neg_samples) ||
                   paramChanged(m_args.pos_threshold) ||
                   paramChanged(m_args.neg_threshold));

        if (changed)
        {
          m_trigger = false;
          Memory::replace(m_sampler, new Sampler(m_args.pos_threshold,
                                                 m_args.pos_samples,
                                                 m_args.neg_threshold,
                                                 m_args.neg_samples));
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sampler);
      }

      void
      consume(const IMC::Message* msg)
      {
        double reading = msg->getValueFP();
        Sampler::SamplerState ss = m_sampler->insert(reading);

        bool triggered = false;

        if (m_args.event_type == "Detection")
          triggered = checkTrigger(ss, Sampler::ST_NOT_DETECTED, Sampler::ST_DETECTED);
        else if (m_args.event_type == "NoDetection")
          triggered = checkTrigger(ss, Sampler::ST_DETECTED, Sampler::ST_NOT_DETECTED);

        if (m_args.comms_policy == "Always")
        {
          transmit(reading);
          return;
        }

        if ((m_args.comms_policy == "Detected") && (ss == Sampler::ST_DETECTED))
        {
          transmit(reading);
          return;
        }

        if ((m_args.comms_policy == "OnRisingEdge") && (ss == Sampler::ST_DETECTED) && triggered)
        {
          transmit(reading);
          return;
        }
      }

      //! Check if trigger can be latched or launched.
      //! @param[in] state current state.
      //! @param[in] latcher sampler state trigger latcher.
      //! @param[in] trigger type of sampler state that triggers event.
      //! @return true if an event was triggered.
      bool
      checkTrigger(Sampler::SamplerState state, Sampler::SamplerState latcher, Sampler::SamplerState trigger)
      {
        // Latch trigger.
        if (state == latcher)
          m_trigger = true;

        // Trigger!
        if (state == trigger && m_trigger)
        {
          triggered();
          m_trigger = false;
          return true;
        }

        return false;
      }

      //! Action was triggered.
      void
      triggered(void)
      {
        // Check type of trigger.
        if (m_args.trigger == "Abort")
        {
          IMC::Abort msg;
          dispatch(msg);
        }
        else if (m_args.trigger == "Plan")
        {
          // @todo: generate plan.
        }
      }

      //! Check if we can transmit message.
      //! @param[in] reading reading to be transmitted acoustically.
      void
      transmit(double reading)
      {
        // Time to transmit ?
        if (m_delta.overflow())
        {
          m_delta.reset();

          IMC::UamTxFrame tx;
          tx.setDestination(getSystemId());
          tx.sys_dst = c_broadcast;
          tx.data.resize(1);

          // We'll assume default 0 to m_args.max_reading value.
          if (reading < 0)
            reading = 0;

          if (reading > m_args.max_reading)
            reading = m_args.max_reading;

          unsigned scale = 255 / m_args.max_reading;

          uint8_t* ptr = (uint8_t*)&tx.data[0];
          IMC::serialize((uint8_t)(reading * scale), ptr);
          dispatch(tx);
        }
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
