//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Transports/CommManager/TransmissionIdGenerator.hpp>

namespace Monitors
{
  //! This task is responsible for sending state reports.
  //! and 
  //!
  //! @author Luis Venâncio
  namespace StateReport
  {
    using DUNE_NAMESPACES;

    const float c_minimum_iridium_period = 300.0f; 

    //! %Task arguments.
    struct Arguments
    {
      //! Report period in seconds.
      float report_period;
    };

    //! %StateReport task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      IMC::PlanControlState* m_pstate;
      IMC::FuelLevel* m_fuel;
      IMC::EstimatedState* m_estate;
      IMC::VehicleState* m_vstate;
      IMC::VehicleMedium* m_vmedium;
      int m_plan_chksum;
      Time::Counter<float> m_report_timer;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_pstate(nullptr),
        m_fuel(nullptr),
        m_estate(nullptr),
        m_vstate(nullptr),
        m_vmedium(nullptr),
        m_plan_chksum(0)
      {
        param("Iridium Reports Period", m_args.report_period)
        .description("Period, in seconds, between transmission of states via Iridium."
                     " Value of 0 disables transmission.")
        .minimumValue("0")
        .defaultValue("300");

        // Register consumers.
        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::StateReport>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.report_period))
          m_report_timer.setTop(0.0f);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fuel);
        Memory::clear(m_pstate);
        Memory::clear(m_vstate);
        Memory::clear(m_estate);
        Memory::clear(m_vmedium);
      }

      void
      onEntityResolution(void)
      {
        
      }

      void
      onResourceInitialization(void)
      {
        
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_pstate, new IMC::PlanControlState(*msg));

        std::string str = msg->plan_id + "|Man:" + msg->man_id;
        m_plan_chksum = CRC16::compute((uint8_t*)str.data(), str.size());
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

        std::string str = msg->plan_id + "|Man:" + msg->start_man_id;
        m_plan_chksum = CRC16::compute((uint8_t*)str.data(), str.size());

      }

      void
      consume(const IMC::StateReport* msg)
      {
        if (msg->getSource() == getSystemId())
          return;

        IMC::AssetReport report;
        report.name = resolveSystemId(msg->getSource());

        if (report.name == "unknown")
          return;

        report.report_time = msg->stime;
        report.medium = IMC::AssetReport::RM_SATELLITE;
        report.lat = msg->latitude;
        report.lon = msg->longitude;
        report.depth = msg->depth == 0xFFFF ? -1 : msg->depth / 10.0;
        report.alt = msg->altitude == 0xFFFF ? -1 : msg->altitude / 10.0;
        report.sog = msg->speed / 100.0;
        report.cog = msg->heading / 65535.0 * Math::c_two_pi;

        dispatch(report);
      }

      IMC::StateReport*
      produceReport()
      {
        if (m_vstate == nullptr || m_estate == nullptr)
          return nullptr;

        IMC::EstimatedState* estate = new IMC::EstimatedState(*m_estate);
        IMC::VehicleState* vstate = new IMC::VehicleState(*m_vstate);

        IMC::StateReport* report = new IMC::StateReport();
        report->stime = (int)Clock::getSinceEpoch();

        // get current position
        double lat = estate->lat, lon = estate->lon;
        WGS84::displace(estate->x, estate->y, &lat, &lon);
        lat = Angles::degrees(lat);
        lon = Angles::degrees(lon);

        report->latitude = (fp32_t)lat;
        report->longitude = (fp32_t)lon;

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
        report->heading = Math::roundToInteger((ang / c_two_pi) * 65535);

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
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_args.report_period == 0.0f)
            continue;

          if (!m_report_timer.overflow())
            continue;
        
          if (m_vmedium != nullptr && m_vmedium->medium == IMC::VehicleMedium::VM_WATER)
          {
            IMC::StateReport* msg = produceReport();
            if (msg != nullptr)
            {
              dispatch(msg);
              inf("Requesting report transmission over Iridium.");
              IMC::TransmissionRequest request;
              request.setDestination(getSystemId());
              // request.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
              request.comm_mean = IMC::TransmissionRequest::CMEAN_WIFI;
              request.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
              fp64_t ttl = std::max(c_minimum_iridium_period, m_args.report_period);
              request.deadline = Time::Clock::getSinceEpoch() + ttl;
              // request.destination = "broadcast";
              request.destination = "lauv-noptilus-3";
              request.msg_data.set(msg);
              request.req_id = Transports::CommManager::TransmissionIdGenerator::createId();
              dispatch(request, DF_LOOP_BACK);

              Memory::clear(msg);
              m_report_timer.setTop(m_args.report_period);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
