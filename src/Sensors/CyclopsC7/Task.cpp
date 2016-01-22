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
// Author: José Braga                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace CyclopsC7
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Conversion factors.
      std::vector<double> factor;
      // Entity labels.
      std::string elabel;
      //! The message to be produced - must contain the field 'value'
      std::string message_name;
      //! Power channel name.
      std::string power_channel;
      //! Active power channel control;
      bool power_control;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Pointer to an IMC message.
      IMC::Message* m_msg;
      // Entity Id.
      unsigned m_entity_id;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Power channel state.
      IMC::PowerChannelState m_power_channel_state;
      //! Power channel control.
      IMC::PowerChannelControl m_power_channel_control;
      // Task Arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_msg(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Conversion Factors", m_args.factor)
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Voltage Entity Label", m_args.elabel)
        .defaultValue("Rhodamine");

        param("Name of message to produce", m_args.message_name)
        .defaultValue("RhodamineDye");

        param("Power Channel Control", m_args.power_control)
        .defaultValue("false")
        .description("Active control of power channel");

        param("Power Channel Name", m_args.power_channel)
        .defaultValue("Wet Sensor Probe")
        .description("Power channel that controls the power of the device");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        bind<IMC::PowerChannelState>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::Voltage>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.message_name))
        {
          Memory::clear(m_msg);
          m_msg = IMC::Factory::produce(m_args.message_name);
        }

        m_power_channel_control.name = m_args.power_channel;
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_entity_id = resolveEntity(m_args.elabel);
        }
        catch (...)
        {
          m_entity_id = UINT_MAX;
        }
      }

      void
      onRequestActivation(void)
      {
        if (!m_args.power_control)
        {
          activate();
          return;
        }

        if (m_power_channel_state.state != IMC::PowerChannelState::PCS_ON)
          m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(m_power_channel_control);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        Memory::clear(m_msg);
        m_msg = IMC::Factory::produce(m_args.message_name);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_msg);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        if (!m_args.power_control)
          return;

        if (m_power_channel_state.state != IMC::PowerChannelState::PCS_OFF)
          m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_power_channel_control);
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name != m_args.power_channel)
          return;

        m_power_channel_state = *msg;

        if (isActivating() && m_args.power_control)
        {
          if (m_power_channel_state.state == IMC::PowerChannelState::PCS_ON)
            activate();
        }
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if (!isActive())
          return;

        double v = msg->value;

        if (v < 0 || !m_hand.isUnderwater())
          v = 0.0;

        if (msg->getSourceEntity() != m_entity_id)
          return;

        m_msg->setValueFP(v * m_args.factor[0] + m_args.factor[1]);
        dispatch(m_msg);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
