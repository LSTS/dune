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
#include "Dispatcher.hpp"
#include "Ticket.hpp"

namespace Supervisors
{
  namespace Reporter
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Enable acoustic reports.
      bool acoustic;
      //! Acoustic reports periodicity.
      double acoustic_period;
      //! Enable radio reports.
      bool radio;
      //! Radio reports periodicity.
      double radio_period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Sequence id.
      uint16_t m_id;
      //! Ticket dispatcher.
      Dispatcher m_dispatcher;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param(DTR_RT("Acoustic Reports"), m_args.acoustic)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Enable acoustic system state reporting");

        param(DTR_RT("Acoustic Reports Periodicity"), m_args.acoustic_period)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("60")
        .minimumValue("30")
        .maximumValue("600")
        .description("Reports periodicity");

        param(DTR_RT("Radio Reports"), m_args.radio)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Enable Radio system state reporting");

        param(DTR_RT("Radio Reports Periodicity"), m_args.radio_period)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("3")
        .minimumValue("1")
        .maximumValue("600")
        .description("Reports periodicity");


        bind<IMC::ReportControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.acoustic) || paramChanged(m_args.acoustic_period))
        {
          if (m_args.acoustic)
          {
            IMC::ReportControl rc;
            rc.op = IMC::ReportControl::OP_REQUEST_START;
            rc.comm_interface = IMC::ReportControl::CI_ACOUSTIC;
            rc.period = m_args.acoustic_period;
            rc.sys_dst = "broadcast";
            dispatch(rc, DF_LOOP_BACK);
          }
          else
          {
            IMC::ReportControl rc;
            rc.op = IMC::ReportControl::OP_REQUEST_STOP;
            rc.comm_interface = IMC::ReportControl::CI_ACOUSTIC;
            rc.period = m_args.acoustic_period;
            rc.sys_dst = "broadcast";
            dispatch(rc, DF_LOOP_BACK);
          }
        }

        if (paramChanged(m_args.radio) || paramChanged(m_args.radio_period))
        {
          if (m_args.radio)
          {
            IMC::ReportControl rc;
            rc.op = IMC::ReportControl::OP_REQUEST_START;
            rc.comm_interface = IMC::ReportControl::CI_RADIO;
            rc.period = m_args.radio_period;
            rc.sys_dst = "broadcast";
            dispatch(rc, DF_LOOP_BACK);
          }
          else
          {
            IMC::ReportControl rc;
            rc.op = IMC::ReportControl::OP_REQUEST_STOP;
            rc.comm_interface = IMC::ReportControl::CI_RADIO;
            rc.period = m_args.radio_period;
            rc.sys_dst = "broadcast";
            dispatch(rc, DF_LOOP_BACK);
          }
        }


        if (m_dispatcher.isEmpty())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::ReportControl* msg)
      {
        switch (msg->op)
        {
          case IMC::ReportControl::OP_REQUEST_START:
            m_dispatcher.add(Ticket(this, m_id++, msg));
            {
              IMC::ReportControl rc(*msg);
              rc.op = IMC::ReportControl::OP_STARTED;
              dispatchReply(*msg, rc);
            }
            break;
          case IMC::ReportControl::OP_REQUEST_STOP:
            m_dispatcher.remove(Ticket(this, m_id++, msg));

            {
              IMC::ReportControl rc(*msg);
              rc.op = IMC::ReportControl::OP_STOPPED;
              dispatchReply(*msg, rc);
            }
            break;
          case IMC::ReportControl::OP_STARTED:
          case IMC::ReportControl::OP_STOPPED:
          case IMC::ReportControl::OP_REQUEST_REPORT:
          case IMC::ReportControl::OP_REPORT_SENT:
            break;
          default:
            debug("caught unexpected transition");
            break;
        }

        if (m_dispatcher.isEmpty())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          m_dispatcher.run();
        }
      }
    };
  }
}

DUNE_TASK
