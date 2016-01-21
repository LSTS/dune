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
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Pointer to an IMC message.
      IMC::Message* m_msg;
      // Task Arguments.
      Arguments m_args;
      // Entity Id.
      unsigned m_entity_id;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Conversion Factors", m_args.factor)
        .size(2)
        .defaultValue("1.0, 0.0");

        param("Entity Label", m_args.elabel)
        .defaultValue("Rhodamine");

        param("Name of message to produce", m_args.message_name)
        .defaultValue("RhodamineDye");

        bind<IMC::VehicleMedium>(this);
        bind<IMC::Voltage>(this);
      }

      void
      onUpdateParameters(void)
      {
        Memory::clear(m_msg);
        m_msg = IMC::Factory::produce(m_args.message_name);
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
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);
      }

      void
      consume(const IMC::Voltage* msg)
      {
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
