//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cmath>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Supervisors/Reporter/Client.hpp>

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
      std::vector<std::string> recipients;
      //! Transmission interface.
      std::string interface;
      //! External information text.
      std::string external_info_text;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! True if executing plan.
      bool m_in_mission;
      //! Iridium request identifier.
      unsigned m_req;
      //! Lost communications timer.
      Counter<double> m_lost_coms_timer;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Reporter API.
      Supervisors::Reporter::Client* m_reporter;
      // Emergency message generator.
      Utils::EmergencyMessage* m_emsg;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_in_mission(false),
        m_req(0),
        m_reporter(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param(DTR_RT("SMS Recipient Number"), m_args.recipients)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .minimumSize(1)
        .defaultValue("+351966575686")
        .description(DTR("Phone numbers of the SMS recipients"));

        param("Lost Communications Timeout", m_args.heartbeat_tout)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("300.0")
        .minimumValue("60.0")
        .description(DTR("Lost Communications Timeout"));

        param("Transmission Interface", m_args.interface)
        .values("GSM, Iridium, Both")
        .defaultValue("Both")
        .description("Desired transmission interface");

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

        param("External Info Text", m_args.external_info_text)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("")
        .description(DTR("External information to be sent in the boot message"));

        bind<IMC::Abort>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::ReportControl>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::Voltage>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.heartbeat_tout))
          m_lost_coms_timer.setTop(m_args.heartbeat_tout);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_reporter);
        Memory::clear(m_emsg);
      }

      void
      onResourceAcquisition(void)
      {
        m_reporter = new Supervisors::Reporter::Client(this, Supervisors::Reporter::IS_GSM,
                                                       2.0, false);

        // Initialize emergency message generator.
        std::string system_name = getSystemName();
        if(!m_args.external_info_text.empty())
          system_name += String::str(" - ") + m_args.external_info_text;
        m_emsg = new Utils::EmergencyMessage(system_name);
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
          m_emsg->update(msg);
        }
      }

      void
      consume(const IMC::ReportControl* msg)
      {
        if (m_reporter != NULL)
          m_reporter->consume(msg);
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

        // CCU's mask.
        if (IMC::AddressResolver::isCCU(msg->getSource()))
          m_lost_coms_timer.reset();
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_emsg->update(msg);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        try
        {
          if(msg->getSourceEntity() != resolveEntity("Batteries"))
            return;
          m_emsg->update(msg);
        }
        catch (std::runtime_error& e) {
          spew("Batteries entity is not present.");
        }
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_in_mission = msg->state == IMC::PlanControlState::PCS_EXECUTING;
        m_emsg->update(msg);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        if (m_hand.isUnderwater())
          m_lost_coms_timer.reset();
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_emsg->update(msg);
      }

      //! Send SMS request.
      //! @param[in] prefix message prefix.
      //! @param[in] timeout time to live.
      //! @param[in] recipient destination recipient.
      void
      sendSMS(const char* prefix, unsigned timeout, std::string recipient = "")
      {
        IMC::TransmissionRequest msg;
        msg.data_mode= IMC::TransmissionRequest::DMODE_TEXT;
        msg.txt_data = m_emsg->get(prefix);

        msg.setDestination(getSystemId());
        msg.setDestinationEntity(getEntityId());

        bool ird = m_args.interface == "Iridium" || m_args.interface == "Both";
        bool gsm = m_args.interface == "GSM" || m_args.interface == "Both";

        if (ird)
        {
          msg.comm_mean=IMC::TransmissionRequest::CMEAN_SATELLITE;
          msg.deadline = Time::Clock::getSinceEpoch() + timeout + 30;
          msg.req_id=m_req++;
          dispatch(msg);

          inf(DTR("sending IridiumMsg (t:%u) to %s: %s"),
                    timeout, msg.destination.c_str(), msg.txt_data.c_str());
        }

        if (gsm)
        {
          msg.comm_mean=IMC::TransmissionRequest::CMEAN_GSM;
          msg.deadline = Time::Clock::getSinceEpoch() + timeout;
          
          if (recipient.size() == 0 || recipient == "broadcast")
          {
            for(auto rec : m_args.recipients)
            {
              msg.destination = rec;
              msg.req_id=m_req++;
              dispatch(msg);
              inf(DTR("sending SMS (t:%u) to %s: %s"),
                        timeout, msg.destination.c_str(), msg.txt_data.c_str());
            }
          }
          else
          {
            msg.destination = recipient;
            Utils::String::toLowerCase(msg.destination);
            msg.req_id=m_req++;
            dispatch(msg);
            inf(DTR("sending SMS (t:%u) to %s: %s"),
                      timeout, msg.destination.c_str(), msg.txt_data.c_str());
          }
        }
        else
        {
          inf(DTR("SMS not sent to destination \"%s\": %s"),
                    msg.destination.c_str(), msg.txt_data.c_str());
        }
      }

      //! Send all scheduled reports.
      void
      sendScheduled(void)
      {
        std::string number;
        if (m_reporter != NULL && m_reporter->trigger(&number))
        {
          if (!m_hand.isUnderwater())
          {
            sendSMS("R", m_args.sms_lost_coms_ttl, number);
            spew("sent report to %s", number.c_str());
          }
        }
      }

      //! Send distress messages if active and not underwater, or,
      //! if not executing mission and waiting at water surface.
      void
      sendDistress(void)
      {
        if (m_lost_coms_timer.overflow())
        {
          m_lost_coms_timer.reset();

          if ((isActive() && !m_hand.isUnderwater()) ||
              (m_hand.isWaterSurface() && !m_in_mission))
            sendSMS("T", m_args.sms_lost_coms_ttl);
        }
      }

      void
      task(void)
      {
        sendScheduled();
        sendDistress();
      }
    };
  }
}

DUNE_TASK
