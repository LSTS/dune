//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Emergency
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Heartbeat timeout.
      float heartbeat_tout;
      //! Abort SMS timeout.
      float abort_tout;
      //! Lost Communication SMS timeout.
      float lost_com_tout;
      //! Default SMS recipient.
      std::string recipient;
      //! Timeout if executing plan
      float mission_tout;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Emergency message.
      std::string m_emsg;
      //! Time of last heartbeat.
      double m_heartbeat_last;
      //! Fuel level
      float m_fuel;
      //! Confidence in fuel level
      float m_fuel_conf;
      //! True if executing plan
      bool m_in_mission;
      //! Executing plan's progress
      float m_progress;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_in_mission(false)
      {
        param("Heartbeat Timeout", m_args.heartbeat_tout)
        .units(Units::Second)
        .defaultValue("300.0")
        .description("Heartbeat Timeout");

        param("Abort SMS Timeout", m_args.abort_tout)
        .units(Units::Second)
        .defaultValue("0.0")
        .description("Abort SMS Timeout");

        param("Lost Communication SMS Timeout", m_args.lost_com_tout)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("30.0")
        .description(DTR("Lost Communication SMS Timeout"));

        param(DTR_RT("SMS Recipient Number"), m_args.recipient)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("+351966575686")
        .description(DTR("Phone number of the SMS recipient"));

        param("In Mission Timeout", m_args.mission_tout)
        .units(Units::Second)
        .defaultValue("10.0")
        .description("Timeout if executing plan");

        bind<IMC::Abort>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::FuelLevel>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_heartbeat_last = Clock::get();
        m_fuel = -1.0;
        m_fuel_conf = -1.0;
        m_progress = -1.0;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
        {
          int lat_deg;
          double lat_min;
          Angles::convertDecimalToDM(Angles::degrees(msg->lat), lat_deg, lat_min);

          int lon_deg;
          double lon_min;
          Angles::convertDecimalToDM(Angles::degrees(msg->lon), lon_deg, lon_min);

          Time::BrokenDown bdt;

          m_emsg = String::str("(%s) %02u:%02u:%02u / %d %f, %d %f / f:%u c:%u",
                               getSystemName(),
                               bdt.hour, bdt.minutes, bdt.seconds,
                               lat_deg, lat_min, lon_deg, std::fabs(lon_min),
                               (int)m_fuel, (int)m_fuel_conf);

          m_emsg += m_in_mission? String::str(" / p:%u", (int)m_progress) : "";
        }
        else
        {
          m_emsg.clear();
        }
      }

      void
      sendMessages(const char* prefix, unsigned timeout)
      {
        if (!m_emsg.empty())
        {
          IMC::Sms sms;
          sms.number = m_args.recipient;
          sms.timeout = timeout;
          sms.contents = String::str("(%s) %s", prefix, m_emsg.c_str());
          dispatch(sms);
        }
        (void)timeout;
      }

      void
      consume(const IMC::Abort* msg)
      {
        (void)msg;
        sendMessages("A", (unsigned)m_args.abort_tout);
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() == getSystemId())
          return;

        m_heartbeat_last = Clock::get();
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_in_mission = (msg->state & IMC::PlanControlState::PCS_EXECUTING) != 0;
        m_progress = msg->plan_progress;
      }

      void
      task(void)
      {
        double now = Clock::get();

        if (now > (m_heartbeat_last + m_args.heartbeat_tout))
        {
          sendMessages("T", (unsigned)m_args.lost_com_tout);
          m_heartbeat_last = now;
        }
      }
    };
  }
}

DUNE_TASK
