//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Keila Lima                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace USBLRequests
  {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Timeout for acomms with target systems
        float timeout;
        //! Period for ranging target systems
        float period;
        //! Target System id
        std::string target;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Timer for send a discover range
        Time::Counter<double> m_dtimer;
        //! Lost communications timer.
        Time::Counter<double> m_timeout;
        //! Period for requesting range after having a discover
        Time::Counter<double> m_period;
        //! Task arguments.
        Arguments m_args;
        //! Discover target node
        bool m_discovered;
        //! Req id for Transmission Request to Send USBL data over WIFI
        uint16_t m_req_id;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
		  m_discovered(false),
		  m_req_id(666)
        {
          param("Timeout", m_args.timeout)
          .defaultValue("3.0")
          .units(Units::Second)
          .description("Timeout for receiving messages from the target system after discovery");

          param("Range Period", m_args.period)
          .defaultValue("2.0")
          .units(Units::Second)
          .description("Period for ranging target system");

          param("Target System", m_args.target)
          .defaultValue("squirtle")
          .description("Target System name");

          bind<IMC::UamRxFrame>(this);
          bind<IMC::UamRxRange>(this);
          bind<IMC::UsblFixExtended>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.timeout))
        	  m_timeout.setTop(m_args.timeout);
        }

        void
        onResourceAcquisition(void)
        {
        }

        void
        onResourceRelease(void)
        {
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          m_timeout.setTop(m_args.timeout);
          m_dtimer.setTop(10.0);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
		consume(const IMC::UamRxRange* msg)
        {
        	if(std::strcmp(msg->sys.c_str(),m_args.target.c_str()) == 0 && !m_discovered) {
        	   m_discovered = true;
        	}
        }

        void
		consume(const IMC::UamRxFrame* msg)
        {
        	if(std::strcmp(msg->sys_src.c_str(),m_args.target.c_str()) == 0 && !m_discovered) {
        	   m_discovered = true;
        	}
        }

        void
		consume(const IMC::UsblFixExtended* msg)
        {
        	IMC::TransmissionRequest tr;
        	tr.setSource(getSystemId());
        	tr.setSourceEntity(getEntityId());
        	tr.setDestination(getSystemId());
        	tr.destination = m_args.target;
        	tr.comm_mean   = IMC::TransmissionRequest::CMEAN_WIFI;
        	tr.data_mode   = IMC::TransmissionRequest::DMODE_INLINEMSG;
        	tr.deadline    = Time::Clock::getSinceEpoch() + 60;
        	tr.msg_data.set(*msg);
        	tr.req_id = m_req_id;
        	dispatch(tr);
        	m_req_id++;
        }

        void
		range(){
          IMC::AcousticRequest request;
          request.setDestination(getSystemId());
          request.destination =  m_args.target;
          request.type = AcousticRequest::TYPE_RANGE;
          dispatch(request);
        }

        void
        task(void)
        {
         if(m_dtimer.overflow() && !m_discovered){
        	 range();
           m_dtimer.reset();
        	}

         if(m_timeout.overflow()){
        	 m_discovered = false;
        	 range();
        	 m_timeout.reset();
        	}

         if(m_period.overflow() && m_discovered){
        	 range();
        	 m_period.reset();
        	}
        }
      };
  }
}

DUNE_TASK
