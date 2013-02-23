//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
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
      // Heartbeat timeout.
      float heartbeat_tout;
      // Abort SMS timeout.
      float abort_tout;
      // Lost Communication SMS timeout.
      float lost_com_tout;
      // Default SMS recipient.
      std::string recipient;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // Emergency message.
      std::string m_emsg;
      // Time of last heartbeat.
      double m_heartbeat_last;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
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
        .defaultValue("+351932811685")
        .description(DTR("Phone number of the SMS recipient"));

        bind<IMC::Abort>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Heartbeat>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_heartbeat_last = Clock::get();
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
          m_emsg = String::str("(%s) %02u:%02u:%02u / %d %f, %d %f",
                               getSystemName(),
                               bdt.hour, bdt.minutes, bdt.seconds,
                               lat_deg, lat_min, lon_deg, std::fabs(lon_min));
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
