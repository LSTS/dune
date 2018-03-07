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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace CommManager
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Period, in seconds, between state report transmissions over iridium
      int iridium_period;
    };

    //! Config section from where to fetch emergency sms number
    const std::string c_sms_section = "Monitors.Emergency";
    //! Config field from where to fetch emergency sms number
    const std::string c_sms_field = "SMS Recipient Number";

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;

      IMC::PlanControlState* m_pstate;
      IMC::FuelLevel* m_fuel;
      IMC::EstimatedState* m_estate;
      IMC::VehicleState* m_vstate;
      IMC::VehicleMedium* m_vmedium;
      Time::Counter<float> m_iridium_timer;
      Time::Counter<float> m_clean_timer;
      int m_plan_chksum;
      int m_reqid;
      std::map<int, IMC::TransmissionRequest*> m_transmission_requests;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pstate(NULL),
        m_fuel(NULL),
        m_estate(NULL),
        m_vstate(NULL),
        m_vmedium(NULL),
        m_plan_chksum(0),
        m_reqid(1)
      {
        param("Iridium Reports Period", m_args.iridium_period)
            .description("Period, in seconds, between transmission of states via Iridium. Value of 0 disables transmission.")
            .defaultValue("300");

        bind<IMC::PlanControlState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::TransmissionRequest>(this);
        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::SmsStatus>(this);

        m_clean_timer.setTop(3);
      }

      void
      onUpdateParameters(void)
      {
        m_iridium_timer.setTop(m_args.iridium_period);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_pstate, new IMC::PlanControlState(*msg));
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_fuel, new IMC::FuelLevel(*msg));
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_estate, new IMC::EstimatedState(*msg));
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_vstate, new IMC::VehicleState(*msg));
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_vmedium, new IMC::VehicleMedium(*msg));
      }

      void
      consume(const IMC::PlanSpecification* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        const char * name = msg->plan_id.c_str();
        m_plan_chksum = CRC16::compute((uint8_t *)name, strlen(name));
      }

      void
      uint16_t
	  createInternalId(){
    	  if(m_reqid==0xFFFF){
    		  m_reqid=0;
    	  }
    	  else{
    		  m_reqid++;
    	  }
    	  return m_reqid;
      }
      sendViaSatellite(const IMC::TransmissionRequest* msg)
      {
        inf("Request to send data over satellite (%d)", msg->req_id);

        IridiumMsgTx tx;
        tx.destination = msg->destination;
        tx.ttl = msg->deadline - Time::Clock::getSinceEpoch();
        tx.req_id = m_reqid++;

        if (msg->data_mode == IMC::TransmissionRequest::DMODE_RAW)
          tx.data.assign(msg->raw_data.begin(), msg->raw_data.end());
        else if (msg->data_mode == IMC::TransmissionRequest::DMODE_INLINEMSG)
        {
          IMC::ImcIridiumMessage m;
          const IMC::Message * inlinemsg = msg->msg_data.get();
          m.destination = 0xFFFF;
          m.source = getSystemId();
          m.msg = inlinemsg->clone();
          uint8_t buffer[65535];
          int len = m.serialize(buffer);
          tx.data.assign(buffer, buffer + len);
          Memory::clear(m.msg);
        }
        else // text mode
        {
          IMC::IridiumCommand m;
          m.destination = 0xFFFF;
          m.source = getSystemId();
          m.command = msg->txt_data;
          uint8_t buffer[65535];
          int len = m.serialize(buffer);
          tx.data.assign(buffer, buffer + len);
        }
        m_transmission_requests[tx.req_id] = msg->clone();
        dispatch(tx);
      }

      void
      sendViaSms(const IMC::TransmissionRequest* msg)
      {
        inf("Request to send data over SMS to %s (%d)", msg->destination.c_str(), msg->req_id);

        uint16_t newId = createInternalId();

        SmsRequest sms;
        sms.req_id = newId;

        sms.timeout = msg->deadline - Time::Clock::getSinceEpoch();
        if(sms.timeout < 0)
          sms.timeout = 0;

        if (msg->destination == "broadcast" || msg->destination == "")
          m_ctx.config.get(c_sms_section, c_sms_field, "", sms.destination);
        else
          sms.destination  = msg->destination;

        switch(msg->data_mode){
        	case IMC::TransmissionRequest::DMODE_TEXT:
        	{
        		sms.sms_text = msg->txt_data;

        		break;
        	}
        	case IMC::TransmissionRequest::DMODE_INLINEMSG:
        	{
        		Utils::ByteBuffer bfr;
				IMC::Packet::serialize(msg->msg_data.get(), bfr);
				std::string encoded = Algorithms::Base64::encode(bfr.getBuffer(),bfr.getSize());
				sms.sms_text.assign(encoded);

        		break;
        	}
        	default:
        	{
				answer(msg, "Communication mode not implemented for communication mean GSM", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
        		return;

        		break;
        	}
        }

        if(sms.sms_text.length() > 160){ //160 characters -> 120 bytes for the inline message
          answer(msg, "Can only send 160 characters over SMS.",
                 IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
          return;
        }
        m_transmission_requests[newId] = msg->clone();
        dispatch(sms);
      }

      void
      clearTimeouts()
      {
        std::map<int, IMC::TransmissionRequest*>::iterator it;
        double time = Time::Clock::getSinceEpoch();
        it = m_transmission_requests.begin();
        while (it != m_transmission_requests.end())
        {
          if (it->second->deadline <= time)
          {
            answer(it->second, "Transmission timed out.", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            Memory::clear(it->second);
            m_transmission_requests.erase(it++);
          }
          else
            ++it;
        }
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_transmission_requests.find(msg->req_id) != m_transmission_requests.end())
        {
          IMC::TransmissionRequest* req = m_transmission_requests[msg->req_id];

          if (req->comm_mean != IMC::TransmissionRequest::CMEAN_SATELLITE)
            return;

          switch (msg->status) {
            case (IMC::IridiumTxStatus::TXSTATUS_QUEUED):
                  answer(req, "Message has been queued for transmission.", IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
            break;
            case (IMC::IridiumTxStatus::TXSTATUS_TRANSMIT):
                  answer(req, "Message is being transmitted.", IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
            break;
            case (IMC::IridiumTxStatus::TXSTATUS_OK):
                  answer(req, "Message has been sent via Iridium.", IMC::TransmissionStatus::TSTAT_SENT);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;
            case (IMC::IridiumTxStatus::TXSTATUS_ERROR):
                  answer(req, "Error while trying to transmit message.", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;
            case (IMC::IridiumTxStatus::TXSTATUS_EXPIRED):
                  answer(req, "Timeout while trying to transmit message.", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;
          }
        }
      }

      void
      consume(const IMC::SmsStatus* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        if (m_transmission_requests.find(msg->req_id) != m_transmission_requests.end())
        {
          IMC::TransmissionRequest* req = m_transmission_requests[msg->req_id];
          switch(msg->status) {
            case (IMC::SmsStatus::SMSSTAT_QUEUED):
							    answer(req, "Message has been queued for transmission.", IMC::TransmissionStatus::TSTAT_IN_PROGRESS);
            break;
            case (IMC::SmsStatus::SMSSTAT_SENT):
							    answer(req, "Message has been sent via GSM.", IMC::TransmissionStatus::TSTAT_SENT);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;
            case (IMC::SmsStatus::SMSSTAT_INPUT_FAILURE):
						      answer(req, msg->info, IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;
            case (IMC::SmsStatus::SMSSTAT_ERROR):
						      answer(req, msg->info, IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            Memory::clear(req);
            m_transmission_requests.erase(msg->req_id);
            break;

          }
        }
      }

      void answer(const IMC::TransmissionRequest* req, std::string info, int status)
      {
        IMC::TransmissionStatus msg;
        msg.info = info;
        msg.req_id = req->req_id;
        msg.status = status;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        dispatch(msg);

        inf("Status of transmission %d changed: %s", req->req_id, info.c_str());
      }

      void
      consume(const IMC::TransmissionRequest* msg)
      {
        if (msg->getSource() != getSystemId() && msg->getDestination() != getSystemId())
          return;

        switch(msg->comm_mean)
        {
          case (IMC::TransmissionRequest::CMEAN_SATELLITE):
                sendViaSatellite(msg);
          break;
          case (IMC::TransmissionRequest::CMEAN_GSM):
                if (msg->data_mode == IMC::TransmissionRequest::DMODE_RAW)
                  answer(msg, "Can not send raw data over SMS.",
                         IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
                else
                  sendViaSms(msg);
          break;
          default:
            answer(msg, "Communication mean not implemented.",
                   IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            break;
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fuel);
        Memory::clear(m_pstate);
        Memory::clear(m_vstate);
        Memory::clear(m_estate);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      IMC::StateReport* produceReport()
      {
        if (m_vstate == NULL || m_estate == NULL)
          return NULL;

        IMC::EstimatedState* estate = new IMC::EstimatedState(*m_estate);
        IMC::VehicleState* vstate = new IMC::VehicleState(*m_vstate);

        IMC::StateReport* report = new IMC::StateReport();
        report->stime = (int)Clock::getSinceEpoch();

        // get current position
        double lat = estate->lat, lon = estate->lon;
        WGS84::displace(estate->x, estate->y, &lat, &lon);
        lat = Angles::degrees(lat);
        lon = Angles::degrees(lon);

        report->latitude = (fp32_t) lat;
        report->longitude = (fp32_t) lon;

        if (estate->depth != -1)
          report->depth = Math::roundToInteger(estate->depth * 10.0f);
        else
          report->depth = 0xFFFF;

        if (estate->alt != -1)
          report->altitude = Math::roundToInteger(estate->alt * 10.0f);
        else
          report->altitude = 0xFFFF;

        report->speed = Math::roundToInteger(estate->u * 100.0f);

        double ang = Angles::normalizeRadian(estate->psi);
        if (ang < 0)
          ang += Math::c_two_pi;
        report->heading = Math::roundToInteger((ang/c_two_pi) * 65535);

        if (m_fuel != NULL)
          report->fuel = Math::roundToInteger(m_fuel->value);

        switch (vstate->op_mode)
        {
          case VehicleState::VS_SERVICE:
            report->exec_state = -1;
            break;
          case VehicleState::VS_BOOT:
            report->exec_state = -2;
            break;
          case VehicleState::VS_CALIBRATION:
            report->exec_state = -3;
            report->plan_checksum = m_plan_chksum;
            break;
          default:
            if (m_pstate != NULL)
            {
              report->exec_state = Math::roundToInteger(m_pstate->plan_progress);
              report->plan_checksum = m_plan_chksum;
            }
            else
              report->exec_state = -2;
            break;
        }

        Memory::clear(vstate);
        Memory::clear(estate);
        return report;
      }

      void
      onMain(void)
      {
        int req_id = 1;
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_clean_timer.overflow())
          {
            clearTimeouts();
            m_clean_timer.reset();
          }

          if (m_args.iridium_period > 0 && m_iridium_timer.overflow())
          {
            if (m_vmedium != NULL && m_vmedium->medium == IMC::VehicleMedium::VM_WATER)
            {
              IMC::StateReport* msg = produceReport();
              if(msg != NULL)
              {
                dispatch(msg);
                inf("Requesting report transmission over Iridium.");
                IMC::TransmissionRequest request;
                request.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
                request.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
                request.deadline = Time::Clock::getSinceEpoch() + m_args.iridium_period;
                request.destination = "broadcast";
                request.msg_data.set(msg);
                request.req_id = req_id++;
                dispatch(request, DF_LOOP_BACK);

                Memory::clear(msg);
              }
              m_iridium_timer.reset();
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
