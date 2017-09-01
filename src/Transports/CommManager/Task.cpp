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

    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task arguments.
      Arguments m_args;

      IMC::PlanControlState* m_pstate;
      IMC::FuelLevel* m_fuel;
      IMC::EstimatedState* m_estate;
      IMC::VehicleState* m_vstate;
      Time::Counter<float> m_report_timer;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pstate(NULL),
        m_fuel(NULL),
        m_estate(NULL),
        m_vstate(NULL)
      {
        bind<IMC::PlanControlState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);

        m_report_timer.setTop(10);
      }

      void
      consume(const IMC::PlanControlState* msg) {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_pstate, new IMC::PlanControlState(*msg));
      }

      void
      consume(const IMC::FuelLevel* msg) {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_fuel, new IMC::FuelLevel(*msg));
      }

      void
      consume(const IMC::EstimatedState* msg) {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_estate, new IMC::EstimatedState(*msg));
      }

      void
      consume(const IMC::VehicleState* msg) {
        if (msg->getSource() != getSystemId())
          return;

        Memory::replace(m_vstate, new IMC::VehicleState(*msg));
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_fuel);
        Memory::clear(m_pstate);
        Memory::clear(m_vstate);
        Memory::clear(m_estate);
      }

      IMC::StateReport* produceReport() {

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
          report->depth = (int) (estate->depth / 10.0f);
        else
          report->depth = 0xFFFF;

        if (estate->alt != -1)
          report->altitude = (int) (estate->alt / 10.0f);
        else
          report->altitude = 0xFFFF;

        report->speed = (int) (estate->u / 100.0f);

        double ang = Angles::normalizeRadian(estate->psi);
        if (ang < 0)
          ang += Math::c_two_pi;
        report->heading = (int) ((ang/c_two_pi) * 65535);

        if (m_fuel != NULL)
          report->fuel = (int) m_fuel->value;

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
            break;
          default:
            if (m_pstate != NULL)
              report->exec_state = (int) m_pstate->plan_progress;
            else
              report->exec_state = -2;
            break;
        }

        //TODO: fill in plan checksum

        Memory::clear(vstate);
        Memory::clear(estate);
        return report;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (m_report_timer.overflow())
          {

            IMC::StateReport* msg = produceReport();
            if (msg)
              msg->toText(std::cout);

            Memory::clear(msg);

            m_report_timer.reset();
          }


        }
      }
    };
  }
}

DUNE_TASK
