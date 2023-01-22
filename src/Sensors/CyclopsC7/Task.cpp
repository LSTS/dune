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
// Author: José Braga                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace CyclopsC7
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_n_probes = 4;

    struct Arguments
    {
      // channel state
      bool ch_state[c_max_n_probes];
      // Conversion factors.
      std::vector<double> factor[c_max_n_probes];
      // Entity labels.
      std::string elabel[c_max_n_probes];
      //! The message to be produced - must contain the field 'value'
      std::string message_name[c_max_n_probes];
      //! Power channel name.
      std::string power_channel[c_max_n_probes];
      //! Active power channel control;
      bool power_control[c_max_n_probes];
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Pointer to an IMC message.
      IMC::Message* m_msg[c_max_n_probes];
      // Entity Id.
      unsigned m_entity_id[c_max_n_probes];
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Power channel state.
      IMC::PowerChannelState m_power_channel_state[c_max_n_probes];
      //! Power channel control.
      IMC::PowerChannelControl m_power_channel_control[c_max_n_probes];
      //! Task Arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        for(unsigned i = 0; i < c_max_n_probes; ++i)
        {
          m_msg[i]=NULL;
        }

        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        for(unsigned i = 1; i < c_max_n_probes + 1; ++i)
        {
          std::string option = String::str("CH %u - Is Active", i);
          param(option, m_args.ch_state[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .defaultValue("false")
          .description("Channel State");

          option = String::str("CH %u - Conversion Factors", i);
          param(option, m_args.factor[i-1])
          .size(2)
          .defaultValue("1.0, 0.0");

          option = String::str("CH %u - Voltage Entity Label", i);
          param(option, m_args.elabel[i-1])
          .defaultValue("Rhodamine");

          option = String::str("CH %u - Name of message to produce", i);
          param(option, m_args.message_name[i-1])
          .defaultValue("RhodamineDye");

          option = String::str("CH %u - Power Channel Control", i);
          param(option, m_args.power_control[i-1])
          .defaultValue("false")
          .description("Active control of power channel");

          option = String::str("CH %u - Power Channel Name", i);
          param(option, m_args.power_channel[i-1])
          .defaultValue("")
          .description("Power channel that controls the power of the device");
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        bind<IMC::PowerChannelState>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::Voltage>(this);
      }

      void
      onUpdateParameters(void)
      {
        for(unsigned i = 0; i < c_max_n_probes; ++i)
        {
          if (paramChanged(m_args.message_name[i]))
          {
            Memory::clear(m_msg[i]);
            m_msg[i] = IMC::Factory::produce(m_args.message_name[i]);
          }

          m_power_channel_control[i].name = m_args.power_channel[i];
        }
      }

      void
      onEntityResolution(void)
      {
        for(unsigned i = 0; i < c_max_n_probes; ++i)
        {
          if( m_args.ch_state[i])
          {
            try
            {
              m_entity_id[i] = resolveEntity(m_args.elabel[i]);
            }
            catch (...)
            {
              m_entity_id[i]= UINT_MAX;
            }
          }
          else
          {
            m_entity_id[i]= UINT_MAX;
          }
          debug("m_entity_id %d",m_entity_id[i]);
        }
      }

      void
      onRequestActivation(void)
      {
        unsigned m_power_control_ready = 0 , number_active_probes = 0;
        for (unsigned i=0; i < c_max_n_probes ;i++)
        {
          if(m_args.ch_state[i])
            number_active_probes++;

          if (m_args.power_control[i] == false &&  m_args.ch_state[i])
          {
            m_power_control_ready++;
          }
        }
        if(m_power_control_ready == number_active_probes
           && m_power_control_ready > 0)
        {
          activate();
          debug("activate");
          return;
        }
         debug("not activate");
        for (unsigned i=0; i < c_max_n_probes ;i++)
        {
          if(m_args.power_control[i] && m_args.ch_state[i])
          {debug("power_control %d",i);
            if (m_power_channel_state[i].state != IMC::PowerChannelState::PCS_ON)
            m_power_channel_control[i].op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(m_power_channel_control[i]);
          }
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        for(unsigned i = 0; i < c_max_n_probes; ++i)
        {
          if(m_args.ch_state[i])
          {
            Memory::clear(m_msg[i]);
            m_msg[i] = IMC::Factory::produce(m_args.message_name[i]);
          }

        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        for(unsigned i = 0; i < c_max_n_probes; ++i)
        {
          Memory::clear(m_msg[i]);
        }
      }

      void
      onDeactivation(void)
      {
        unsigned m_power_control_ready=0 , number_active_probes = 0;
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        for (unsigned i=0; i < c_max_n_probes ;i++)
        {
          if(m_args.ch_state[i])
            number_active_probes++;
          if (m_args.power_control[i] == false && m_args.ch_state[i])
            m_power_control_ready++;
        }
        if(m_power_control_ready == number_active_probes)
        return;

        for (unsigned i=0; i < c_max_n_probes ;i++)
        {
          if(m_args.power_control[i] && m_args.ch_state[i])
          {
            if (m_power_channel_state[i].state != IMC::PowerChannelState::PCS_OFF)
             m_power_channel_control[i].op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            dispatch(m_power_channel_control[i]);
          }
        }
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        unsigned i =0;
        while( i<c_max_n_probes)
        {
          if ( m_args.power_channel[i].size() == 0 ||msg->name == m_args.power_channel[i])
          break;
        }

        if (i == c_max_n_probes)
          return;

        m_power_channel_state[i] = *msg;

        if (isActivating() && m_args.power_control[i])
        {
          if (m_power_channel_state[i].state == IMC::PowerChannelState::PCS_ON)
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

        unsigned  index = 0;
        bool exist = false;

        unsigned temp_entity=msg->getSourceEntity();
         for (unsigned i=0; i < c_max_n_probes ;i++)
        {
          if (m_entity_id[i]==temp_entity && m_entity_id[i] != UINT_MAX)
          {
            exist = true;
            index = i;
            debug("exist %d",i);
          }
        }
        if (!exist)
          return;

        m_msg[index]->setValueFP(v * m_args.factor[index][0] + m_args.factor[index][1]);
        dispatch(m_msg[index]);

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
