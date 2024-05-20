//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bogas                                                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bogas
  namespace Producer
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Message Period.
      double period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);

        param("Message Period", m_args.period)
          .defaultValue("60")
          .description("Period between messages in seconds");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.period))
        {
          debug("period changed to %f", m_args.period);
          m_wdog.setTop(m_args.period);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(0.0);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      //! on Task activation.
      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        debug("activating with period %f", m_args.period);
        m_wdog.setTop(m_args.period);
      }

      //! on Task deactivation.
      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        debug("deactivating with period %f", m_args.period);
        m_wdog.setTop(m_args.period);
      }

      void
      sendMessage(void)
      {
        static int id = 0;

        IMC::Distance msg;
        msg.value = id++;

        for (size_t i = 0; i < 24; i++)
        {
          IMC::DeviceState state;
          state.x = i;
          state.y = i + 1;
          state.z = i + 2;
          state.phi = i + 3;
          state.theta = i + 4;

          msg.location.push_back(state);
        }

        for (size_t i = 0; i < 12; i++)
        {
          IMC::BeamConfig cfg;
          cfg.beam_height = i * 10;
          cfg.beam_width = i;

          msg.beam_config.push_back(cfg);
        }

        debug("dispatched %s", msg.getName());
        dispatch(msg);
      }

      //! Main loop.
      void
      onMain(void)
      {
        debug("id: %d", getEntityId());
        m_wdog.setTop(5);
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_wdog.overflow() && m_wdog.getTop() != 0)
          {
            sendMessage();
            m_wdog.setTop(0);
          }
        }
      }
    };
  }
}

DUNE_TASK
