//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
      //! Expiration time of abort ackowledged SMS.
      unsigned sms_abort_ttl;
      //! Expiration time of lost communication SMS.
      unsigned sms_lost_coms_ttl;
      //! Default SMS recipient.
      std::string recipient;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Emergency message.
      std::string m_emsg;
      //! Fuel level.
      float m_fuel;
      //! Confidence in fuel level.
      float m_fuel_conf;
      //! True if executing plan.
      bool m_in_mission;
      //! Executing plan's progress.
      float m_progress;
      //! Lost communications timer.
      Counter<double> m_lost_coms_timer;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_in_mission(false)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param(DTR_RT("SMS Recipient Number"), m_args.recipient)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("+351966575686")
        .description(DTR("Phone number of the SMS recipient"));

        param("Lost Communications Timeout", m_args.heartbeat_tout)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("300.0")
        .minimumValue("60.0")
        .description(DTR("Lost Communications Timeout"));

        param("Expiration Time - Abort SMS", m_args.sms_abort_ttl)
        .units(Units::Second)
        .defaultValue("30.0")
        .minimumValue("30.0")
        .description("Abort SMS Timeout");

        param("Expiration Time - Lost Communications", m_args.sms_lost_coms_ttl)
        .units(Units::Second)
        .defaultValue("30.0")
        .minimumValue("0.0")
        .description("Expiration time of lost communications SMS");

        bind<IMC::Abort>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::TextMessage>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        if (isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_lost_coms_timer.setTop(m_args.heartbeat_tout);
        m_fuel = -1.0;
        m_fuel_conf = -1.0;
        m_progress = -1.0;
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

          m_emsg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
        }
      }

      void
      consume(const IMC::TextMessage* msg)
      {
        spew("processing text message from %s: \"%s\"", msg->origin.c_str(), sanitize(msg->text).c_str());
        std::istringstream iss(msg->text);
        std::string cmd, args = "";
        getline(iss, cmd, ' ');
        if (iss.str().size() > cmd.size())
          args = std::string(iss.str(), cmd.size() + 1, iss.str().size() - cmd.size() + 1);

        spew("command is %s, args are %s", cmd.c_str(), args.c_str());

        String::toLowerCase(cmd);
        String::toLowerCase(args);

        if (cmd == "gsm")
        {
          if (args == "true")
            requestActivation();

          if (args == "false")
            requestDeactivation();
        }

        if (cmd == "pos")
          sendSMS("T", m_args.sms_lost_coms_ttl, msg->origin);
      }

      void
      sendSMS(const char* prefix, unsigned timeout, std::string recipient = "")
      {
        inf(DTR("sending SMS %s | %u"), prefix, timeout);

        IMC::Sms sms;
        if (recipient.size() == 0)
          sms.number = m_args.recipient;
        else
          sms.number = recipient;

        sms.timeout = timeout;

        if (!m_emsg.empty())
        {
          sms.contents = String::str("(%s) %s", prefix, m_emsg.c_str());
        }
        else
        {
          std::string msg;
          Time::BrokenDown bdt;
          msg = String::str("(%s) %02u:%02u:%02u / Unknown Location / f:%u c:%u",
                               getSystemName(),
                               bdt.hour, bdt.minutes, bdt.seconds,
                               (int)m_fuel, (int)m_fuel_conf);

          msg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";

          sms.contents = String::str("(%s) %s", prefix, msg.c_str());
        }

        dispatch(sms);
      }

      void
      consume(const IMC::Abort* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        sendSMS("A", m_args.sms_abort_ttl);
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() == getSystemId())
          return;

        if ((msg->getSource() & 0x4000) == 0)
          return;

        m_lost_coms_timer.reset();
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
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        if (m_hand.isUnderwater())
          m_lost_coms_timer.reset();
      }

      void
      task(void)
      {
        if (!isActive())
          return;

        if (m_lost_coms_timer.overflow())
        {
          m_lost_coms_timer.reset();

          if (!m_hand.isUnderwater())
            sendSMS("T", m_args.sms_lost_coms_ttl);
        }
      }
    };
  }
}

DUNE_TASK
