//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Maria Costa                                                      *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_HANDOVER_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_HANDOVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    struct HandoverArgs
    {
      // GSM Reports
      bool gsm_reports;
      // RC Channel A PCC name
      std::string rca_pcc;
      // RC Channel B PCC name
      std::string rcb_pcc;
    };

    //! Handover maneuver
    class Handover: public MuxedManeuver<IMC::Handover, HandoverArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args pointer to Maneuver's arguments
      Handover(Maneuvers::Maneuver* task, HandoverArgs* args):
        MuxedManeuver<IMC::Handover, HandoverArgs>(task, args),
        m_has_comms(false),
        m_near(false),
        m_rc(false),
        m_rca(true),
        m_rcb(false)
      { }

      //! Start maneuver function
      //! @param[in] maneuver handover maneuver message
      void
      onStart(const IMC::Handover* maneuver)
      {
        // Enable Path Control
        m_task->setControl(IMC::CL_PATH);

        // Saves RC handover option
        m_rc = maneuver->rc_handover;

        // Dispatch loiter's DesiredPath
        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;
        path.lradius = maneuver->radius;
        m_task->dispatch(path);

        // Enable GSM reports
        if(m_args->gsm_reports)
        {
          IMC::ReportControl reports;
          reports.op = IMC::ReportControl::OP_REQUEST_REPORT;
          reports.comm_interface = IMC::ReportControl::CI_GSM;
          reports.period = 10;
          reports.sys_dst = "default";
          m_task->dispatch(reports);
        }
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if((pcs->flags & IMC::PathControlState::FL_NEAR) && !m_near)
        {
          if(m_rc)
          {
            // Switch RC receivers.
            IMC::PowerChannelControl pcc_rca;
            IMC::PowerChannelControl pcc_rcb;

            pcc_rca.name = m_args->rca_pcc;
            m_rca ? pcc_rca.op = IMC::PowerChannelControl::PCC_OP_TURN_ON : pcc_rca.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            m_task->dispatch(pcc_rca);

            pcc_rcb.name = m_args->rcb_pcc;
            m_rcb ? pcc_rcb.op = IMC::PowerChannelControl::PCC_OP_TURN_ON : pcc_rcb.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
            m_task->dispatch(pcc_rcb);

            m_rca = !m_rca;
            m_rcb = !m_rcb;
            m_timer.setTop(60);  // Defines 60sec timeout to switch RC successfully.
          }
          m_near = true;
        }
        else
          m_task->signalProgress(pcs->eta);
      }

      //! On Heartbeat message
      //! @param[in] msg pointer to Heartbeat message
      void
      onHeartbeat(const IMC::Heartbeat* msg)
      {
        if(msg->getSource() == m_task->getSystemId())
          return;

        if(IMC::AddressResolver::isCCU(msg->getSource()))
          m_has_comms = true;
        else
          m_has_comms = false;

        // Ends maneuver if no RC handover and already at destination
        if(!m_rc && m_near && m_has_comms)
          m_task->signalCompletion();
      }

      //! On ApmStatus message
      //! @param[in] msg pointer to ApmStatus message
      void
      onApmStatus(const IMC::ApmStatus* msg)
      {
        if(!m_near)
          return;

        if(!std::strcmp(msg->text.c_str(), "Throttle failsafe off 982"))
        {
          // Disable GSM reports.
          if(m_args->gsm_reports)
          {
            IMC::ReportControl reports;
            reports.op = IMC::ReportControl::OP_REQUEST_STOP;
            reports.comm_interface = IMC::ReportControl::CI_GSM;
            m_task->dispatch(reports);
          }

          // End maneuver (success).
          m_task->inf(DTR("RC Handover successful."));
          m_timer.reset();
          m_task->signalCompletion();
        }
        else if(m_timer.overflow())
        {
          m_task->err(DTR("RC Handover failure."));
          m_task->war(DTR("Starting lost_comms plan."));

          // Starts LostComms plan.
          IMC::PlanControl pcontrol;
          pcontrol.plan_id = "lost_comms";
          pcontrol.op = IMC::PlanControl::PC_START;
          pcontrol.type = IMC::PlanControl::PC_REQUEST;
          pcontrol.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
          m_task->dispatch(pcontrol);

          // End maneuver (failure).
          m_timer.reset();
          m_task->signalCompletion();
        }
      }

      ~Handover(void)
      { }

    private:
      //! Communications flag
      bool m_has_comms;
      //! IS_NEAR flag
      bool m_near;
      //! RC handover flag
      bool m_rc;
      //! Rx-A PCC state
      bool m_rca;
      //! Rx-B PCC state
      bool m_rcb;
      //! Watchdog.
      Counter<double> m_timer;
    };
  }
}

#endif
