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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cmath>

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
      std::string recipient;
      //! Transmission interface.
      std::string interface;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Emergency message.
      std::string m_emsg;
      //! Fuel level.
      float m_fuel;
      //! Confidence in fuel level.
      float m_fuel_conf;
      //! Batteries voltage
      float m_bat_voltage;
      //! True if executing plan.
      bool m_in_mission;
      //! Executing plan's progress.
      float m_progress;
      //! Iridium request identifier.
      unsigned m_req;
      //! Vehicle State
      uint8_t m_vstate;
      //! Lost communications timer.
      Counter<double> m_lost_coms_timer;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Reporter API.
      Supervisors::Reporter::Client* m_reporter;
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

        bind<IMC::Abort>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::ReportControl>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::TextMessage>(this);
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
      }

      void
      onResourceAcquisition(void)
      {
        m_reporter = new Supervisors::Reporter::Client(this, Supervisors::Reporter::IS_GSM,
                                                       2.0, false);
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
        m_bat_voltage = -1.0;
        m_progress = -1.0;
        m_vstate = '?';
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

          m_emsg = String::str("(%s) %02u:%02u:%02u / %d %f, %d %f / f:%d v:%d c:%d / s: %c",
                               getSystemName(),
                               bdt.hour, bdt.minutes, bdt.seconds,
                               lat_deg, lat_min, lon_deg, lon_min,
                               (int)m_fuel, (int) m_bat_voltage, (int)m_fuel_conf, vehicleStateChar(m_vstate));

          m_emsg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
        }
      }

      void
      consume(const IMC::ReportControl* msg)
      {
        if (m_reporter != NULL)
          m_reporter->consume(msg);
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
        m_fuel = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      consume(const IMC::Voltage* msg)
      {
        try
        {
          if(msg->getSourceEntity() != resolveEntity("Batteries"))
            return;
          m_bat_voltage = msg->value * 10;
        }
        catch (std::runtime_error& e) {
          spew("Batteries entity is not present.");
        }
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_in_mission = msg->state == IMC::PlanControlState::PCS_EXECUTING;
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
      consume(const IMC::VehicleState* msg)
      {
        m_vstate = msg->op_mode;
      }

      char
      vehicleStateChar(const uint8_t vstate)
      {
        switch((IMC::VehicleState::OperationModeEnum) vstate)
        {
          case IMC::VehicleState::VS_BOOT:
            return 'B';
          case IMC::VehicleState::VS_CALIBRATION:
            return 'C';
          case IMC::VehicleState::VS_ERROR:
            return 'E';
          case IMC::VehicleState::VS_EXTERNAL:
            return 'X';
          case IMC::VehicleState::VS_MANEUVER:
            return 'M';
          case IMC::VehicleState::VS_SERVICE:
            return 'S';
          default:
            return '?';
        }
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

        if (recipient.size() == 0)
          msg.destination = m_args.recipient;
        else
          msg.destination = recipient;

        msg.deadline = Time::Clock::getSinceEpoch() + timeout;

        if (!m_emsg.empty())
        {
          msg.txt_data = String::str("(%s) %s", prefix, m_emsg.c_str());
        }
        else
        {
          std::string s;
          Time::BrokenDown bdt;
          s = String::str("(%s) %02u:%02u:%02u / Unknown Location / f:%d v:%d c:%d",
                               getSystemName(),
                               bdt.hour, bdt.minutes, bdt.seconds,
                            (int)m_fuel, (int)m_bat_voltage, (int)m_fuel_conf);

          s += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
          s += String::str("/ s: %c", vehicleStateChar(m_vstate));

          msg.txt_data = String::str("(%s) %s", prefix, s.c_str());
        }

        msg.setDestination(getSystemId());
        msg.setDestinationEntity(getEntityId());

        bool ird = m_args.interface == "Iridium" || m_args.interface == "Both";
        bool gsm = m_args.interface == "GSM" || m_args.interface == "Both";

        if (ird)
        {
          msg.comm_mean=IMC::TransmissionRequest::CMEAN_SATELLITE;
          msg.deadline+=30;
          msg.req_id=m_req++;
          dispatch(msg);

          inf(DTR("sending IridiumMsg (t:%u) to %s: %s"),
                    timeout, msg.destination.c_str(), msg.txt_data.c_str());
        }

        if (gsm){
          msg.comm_mean=IMC::TransmissionRequest::CMEAN_GSM;
          msg.req_id=m_req++;
          dispatch(msg);

          inf(DTR("sending SMS (t:%u) to %s: %s"),
                    timeout, msg.destination.c_str(), msg.txt_data.c_str());
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
            // Use current emergency number.
            if (number == "default")
              number = m_args.recipient;

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
