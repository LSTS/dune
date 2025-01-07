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
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Calculates navigation error, in meters, when a GpsFix is received.
  //! It also calculates the distance traveled while underwater, in meters.
  //! Ratio navigation error / distance traveled is also dispatched.
  //!
  //! Every time the vehicle surfaces, this monitor outputs distance messages with navigation error calculation,
  //! the distance traveled while underwater and the ratio navigation error / distance traveled.
  //! @author Maria Costa
  namespace NavError
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Ignore start maneuver
      bool start;
   };

    struct Task: public DUNE::Tasks::Task
    {
      //! Flag to signal first gpsfix
      bool m_init;
      //! Flag to signal first dpath
      bool m_dp_init;
      //! Flag to signal vehicle surfacing
      bool m_medium;
      //! Task arguments.
      Arguments m_args;

      IMC::DesiredPath m_last_dpath;
      IMC::Distance m_distError;
      IMC::Distance m_distTotal;
      IMC::Distance m_distRatio;
      IMC::GpsFix m_last_gps;
      IMC::VehicleMedium m_last_medium;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_init(true),
        m_dp_init(true),
        m_medium(false)
      {
        param("Ignore start maneuver", m_args.start)
              .description("Ignore start maneuver for DistTotal calculations.")
              .defaultValue("true");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        bind<IMC::DesiredPath>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::VehicleState>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_distError.setSourceEntity(reserveEntity(String::str("DistError.distance")));
        m_distTotal.setSourceEntity(reserveEntity(String::str("DistTotal.distance")));
        m_distRatio.setSourceEntity(reserveEntity(String::str("DistRatio.distance")));
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if(m_last_medium.medium == IMC::VehicleMedium::VM_UNDERWATER && msg->medium == IMC::VehicleMedium::VM_WATER)
          m_medium = true;
        else if(msg->medium == IMC::VehicleMedium::VM_UNDERWATER)
          m_medium = false;

        m_last_medium = *msg;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if(msg->op_mode == IMC::VehicleState::VS_CALIBRATION)
          m_distTotal.value = 0;
      }

      void
      consume(const IMC::DesiredPath* msg)
      {
        if (msg->getSource() != getSystemId())
         return;

        if(m_dp_init)
        {
          m_last_dpath = *msg;
          m_distTotal.value = 0;
          m_dp_init = false;
          return;
        }

        if (!(m_last_dpath.end_lat - msg->end_lat) && (m_last_dpath.end_lon - msg->end_lon))
          return;

        Coordinates::WMM wmm(m_ctx.dir_cfg);
        IMC::EstimatedState es, last;
        es.lat = msg->end_lat; es.lon = msg->end_lon; es.height = wmm.height(msg->end_lat, msg->end_lon);
        last.lat = m_last_dpath.end_lat; last.lon = m_last_dpath.end_lon; last.height = wmm.height(m_last_dpath.end_lat, m_last_dpath.end_lon);
        double lat = 0, lon = 0, lat_last = 0, lon_last = 0;
        float hae = 0, hae_last = 0;

        // Calculate DistTotal
        Coordinates::toWGS84(es, lat, lon, hae);
        Coordinates::toWGS84(last, lat_last, lon_last, hae_last);
        m_distTotal.value = m_distTotal.value + WGS84::distance(lat_last, lon_last, hae_last,
                                                                lat, lon, hae);
        debug("Calc DistTotal = %f", m_distTotal.value);

        if(m_args.start)
        {
          m_distTotal.value = 0;
          m_args.start = false;
        }

        m_last_dpath = *msg;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != resolveEntity("GPS"))
          return;

        // Check fix validity.
        if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          return;

        // Check if we have valid Horizontal Accuracy index.
        if (msg->validity & IMC::GpsFix::GFV_VALID_HACC && msg->hacc > 20)
          return;
        else if (msg->hdop > 2.5)
          return;

        if(m_init)
        {
          m_last_gps = *msg;
          m_init = false;
          return;
        }

        double lat = 0, lon = 0;
        float hae = 0;
        Coordinates::WMM wmm(m_ctx.dir_cfg);
        IMC::EstimatedState dp;
        dp.lat = m_last_dpath.end_lat; dp.lon = m_last_dpath.end_lon; dp.height = wmm.height(m_last_dpath.end_lat, m_last_dpath.end_lon);

        // Calculate DistError
        if(m_medium)
        {
          war("m_medium!");
          Coordinates::toWGS84(dp, lat, lon, hae);
          m_distError.value = WGS84::distance(lat, lon, hae,
                                              msg->lat,
                                              msg->lon,
                                              msg->height);
          dispatch(m_distError);

          if(m_distTotal.value > 1) // Prevents outliers when VehicleMedium intermittent
          {
            m_distRatio.value = (fp64_t) m_distError.value / m_distTotal.value;
            dispatch(m_distRatio);
            dispatch(m_distTotal);
            inf("Err = %f | Total = %f | Ratio = %f ", m_distError.value, m_distTotal.value, m_distRatio.value);
            m_distTotal.value = 0;
          }
          else
            m_distTotal.value = 0;
          m_medium = 0;
        }

        m_last_gps = *msg;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
