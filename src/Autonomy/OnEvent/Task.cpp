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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Sampler.hpp"

namespace Autonomy
{
  //! Task that analyzes a configurable variable to trigger specific actions
  //! according with positive or negative validations. This task also applies
  //! an acoustic communication policy by sending request to transmit reading
  //! values.
  //!
  //! Acoustic modems drivers should be prepared to handle this information.
  //!
  //! @author José Braga
  namespace OnEvent
  {
    using DUNE_NAMESPACES;

    //! Broadcast channel.
    static const std::string c_broadcast = "broadcast";
    //! Code to identify message.
    static const uint8_t c_id = 0xdd;

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
      // Plan template that will be launched.
      std::string plan_template;
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
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

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

        param("Plan Template", m_args.plan_template)
        .defaultValue("rows")
        .description("Name of plan template");

        param("Triggered Action", m_args.trigger)
        .values("Abort, Plan, None")
        .defaultValue("Abort")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Type of action to be triggered");

        param("Message to Sample", m_args.message)
        .defaultValue("");

        param("Communication Policy", m_args.comms_policy)
        .values("Always, Never, OnRisingEdge, Detected")
        .defaultValue("OnRisingEdge")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Acoustic Transmission Communication Policy");

        param("Communication Interval", m_args.comms_delta)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Communication interval for acoustic transmission requests");

        param("Maximum Expected Reading", m_args.max_reading)
        .defaultValue("5.0")
        .description("Communication interval for acoustic transmission requests");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
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

     ~Task(void)
      {
        Memory::clear(m_sampler);
      }

      void
      onResourceInitialization(void)
      {
        bind(this, m_args.message);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::Message* msg)
      {
        if (m_sampler == NULL)
          return;

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
          fire();
          m_trigger = false;
          return true;
        }

        return false;
      }

      //! Action was triggered.
      void
      fire(void)
      {
        // No actions if not active.
        if (!isActive())
          return;

        // Check type of trigger.
        if (m_args.trigger == "Abort")
        {
          IMC::Abort msg;
          msg.setDestination(getSystemId());
          dispatch(msg);
        }
        else if (m_args.trigger == "Plan")
        {
          IMC::PlanGeneration msg;
          msg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
          msg.op = IMC::PlanGeneration::OP_REQUEST;
          msg.plan_id = m_args.plan_template;
          dispatch(msg);
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
          // Acoustic modem driver on both ends must be
          // programmed to interpret this information.
          IMC::AcousticOperation amsg;
          amsg.op = IMC::AcousticOperation::AOP_MSG;
          amsg.system = c_broadcast;
          amsg.setSource(getSystemId());
          amsg.setSourceEntity(getEntityId());

          IMC::Message* rmsg;
          rmsg = IMC::Factory::produce(m_args.message[0]);
          rmsg->setValueFP(reading);
          amsg.msg.set(*rmsg);
          dispatch(amsg);

          m_delta.reset();
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
