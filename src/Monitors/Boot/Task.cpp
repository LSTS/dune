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
// Author: Luis Venancio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Send Satellite and GSM message on boot.
  //! @author Luis Venancio
  namespace Boot
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      double delay;
      double ttl;
      std::string default_recipient;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments
      Arguments m_args;
      //! Boot message timer
      Counter<double> m_delay_timer;
      //! Flag for message sent
      bool m_msg_sent;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_msg_sent(false)
      {
        param("Boot Message Delay", m_args.delay)
        .defaultValue("5")
        .minimumValue("1")
        .description("Delay, in seconds, before dispatching boot message. "
                     "Value can not be less than 1s.");

        param("Boot Message TTL", m_args.ttl)
        .defaultValue("300")
        .minimumValue("60")
        .description("Boot message time-to-live, in seconds. Value can not be less than 60s.");

        param("Default SMS Recipient Number", m_args.default_recipient)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("")
        .description(DTR("Phone number of the SMS recipient"));


        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_delay_timer.setTop(m_args.delay);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      sendSatelliteEntityState()
      {
        EntityState msg;
        msg.state = EntityState::ESTA_BOOT;
        // msg.description = "System Booted";

        IMC::TransmissionRequest request;
        request.setDestination(getSystemId());
        request.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        request.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
        request.deadline = Time::Clock::getSinceEpoch() + m_args.ttl;
        request.destination = "broadcast";
        request.msg_data.set(msg);
        request.req_id = 0;

        dispatch(request);
        war("EntityState sent");
      }

      void
      sendSatelliteText()
      {
        Time::BrokenDown bdt(Time::Clock::getSinceEpoch());
        std::string msg = "Boot: ";
        msg += String::str("%04u-%02u-%02u %02u:%02u:%02u", bdt.year, bdt.month,
                                                            bdt.day, bdt.hour, 
                                                            bdt.minutes, bdt.seconds);

        IMC::TransmissionRequest request;
        request.setDestination(getSystemId());
        request.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        request.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        request.deadline = Time::Clock::getSinceEpoch() + m_args.ttl;
        request.destination = "broadcast";
        request.txt_data = msg;
        request.req_id = 0;

        dispatch(request);
      }

      void
      sendSMS()
      {
        Time::BrokenDown bdt(Time::Clock::getSinceEpoch());
        std::string msg = "Boot: ";
        msg += String::str("%04u-%02u-%02u %02u:%02u:%02u", bdt.year, bdt.month,
                                                            bdt.day, bdt.hour, 
                                                            bdt.minutes, bdt.seconds);

        IMC::TransmissionRequest request;
        request.setDestination(getSystemId());
        request.comm_mean = IMC::TransmissionRequest::CMEAN_GSM;
        request.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        request.deadline = Time::Clock::getSinceEpoch() + m_args.ttl;
        
        // Attempt to grab recipient number from Monitors.Emergency
        // If failure defaults to default_recipient 
        try
        {
          request.destination = m_ctx.config.get("Monitors.Emergency", "SMS Recipient Number");
          debug("Got recipient number from Monitors.Emergency: %s", request.destination.c_str());
        }
        catch(...)
        {
          request.destination = m_args.default_recipient;
          debug("Failed to grab recipient number from Monitors.Emergency. "
                "Using default number: %s", request.destination.c_str());
        }
        
        if (request.destination.empty())
          return;
        
        request.txt_data = msg;
        request.req_id = 1;

        dispatch(request);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_delay_timer.overflow() && !m_msg_sent)
          {
            sendSatelliteText();
            sendSMS();

            setEntityState(IMC::EntityState::ESTA_NORMAL, "active - messages sent");
            m_msg_sent = true;
          }

          Delay::wait(1.0);
        }
      }
    };
  }
}

DUNE_TASK
