//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Navigation
{
  namespace General
  {
    //! Navigation filter using only GPS information.
    //!
    //! @author Ricardo Martins
    namespace GPSNavigation
    {
      //! Maximum horizontal dilution of precision (HDOP)
      static constexpr float c_max_hdop = 5.0f;
      struct Arguments
      {
        //! GPS entity label.
        std::string elabel_gps;
        //! IMU entity label.
        std::string elabel_imu;
        //! Yaw entity label.
        std::string elabel_yaw;
        //! Convert height to geoid height (MSL)
        bool convert_msl;
        //! Reference change distance
        double ref_distance;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! GPS entity eid.
        int m_gps_eid;
        //! IMU entity eid.
        int m_imu_eid;
        //! Yaw entity eid.
        int m_yaw_eid;
        //! Height offset.
        float m_offset;
        //! Offset flag.
        bool m_offset_flag;
        //! Estimated state.
        IMC::EstimatedState m_estate;
        //! Origin reference.
        IMC::GpsFix* m_origin;
        //! GPS fix rejection.
        IMC::GpsFixRejection m_gps_rej;
        //! Time without GPS.
        Counter<double> m_time_without_gps;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_origin(nullptr)
        {
          // Define configuration parameters.
          param("Entity Label - GPS", m_args.elabel_gps)
          .description("Entity label of 'GpsFix' and 'GroundVelocity' messages");

          param("Entity Label - IMU", m_args.elabel_imu)
          .description("Entity label of 'EulerAngles' and 'AngularVelocity' messages");

          param("Entity Label - Yaw", m_args.elabel_yaw)
          .description("Entity label of 'EulerAngles' messages (field 'psi')");

          param("Convert Height to Geoid Height", m_args.convert_msl)
          .defaultValue("false")
          .description("Convert WGS84 height to geoid height (mean sea level) height");

          param("Reference Change Distance", m_args.ref_distance)
          .units(Units::Meter)
          .minimumValue("500")
          .defaultValue("1000.0")
          .description("Distance needed for reference change.");

          m_estate.clear();
          m_offset = 0.0f;
          m_offset_flag = false;

          // Navigation enters error mode without valid GPS data.
          m_time_without_gps.setTop(5.0);

          // Register callbacks
          bind<IMC::AngularVelocity>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::GroundVelocity>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (!m_args.convert_msl)
          {
            m_offset = 0.0f;
            m_offset_flag = false;
          }
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_gps_eid = resolveEntity(m_args.elabel_gps);
          }
          catch (...)
          {
            m_gps_eid = 0;
          }

          try
          {
            m_imu_eid = resolveEntity(m_args.elabel_imu);
          }
          catch (...)
          {
            m_imu_eid = 0;
          }

          try
          {
            m_yaw_eid = resolveEntity(m_args.elabel_yaw);
          }
          catch (...)
          {
            m_yaw_eid = 0;
          }
        }

        void
        consume(const IMC::GroundVelocity* msg)
        {
          m_estate.vx = msg->x;
          m_estate.vy = msg->y;
          m_estate.u = std::sqrt(msg->x * msg->x + msg->y * msg->y);
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getSourceEntity() == m_imu_eid)
          {
            m_estate.p = msg->x;
            m_estate.q = msg->y;
          }

          if (msg->getSourceEntity() == m_yaw_eid)
          {
            m_estate.r = msg->z;
          }
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          if (msg->getSourceEntity() == m_imu_eid)
          {
            m_estate.phi = msg->phi;
            m_estate.theta = msg->theta;
          }

          if (msg->getSourceEntity() == m_yaw_eid)
            m_estate.psi = msg->psi;
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->getSourceEntity() != m_gps_eid)
            return;

          if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          {
            m_gps_rej.reason = IMC::GpsFixRejection::RR_INVALID;
            dispatch(m_gps_rej, DF_KEEP_TIME);
            return;
          }

          if ((msg->validity & IMC::GpsFix::GFV_VALID_HDOP) == 0)
          {
            m_gps_rej.reason = IMC::GpsFixRejection::RR_INVALID;
            dispatch(m_gps_rej, DF_KEEP_TIME);
            return;
          }

          if (msg->hdop > c_max_hdop)
          {
            m_gps_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_HDOP;
            dispatch(m_gps_rej, DF_KEEP_TIME);
            return;
          }

          // Received valid GPS data.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_time_without_gps.reset();

          if (!originIsSet())
            setOrigin(msg);

          if (originIsFar(msg))
            setOrigin(msg);

          m_estate.lat = m_origin->lat;
          m_estate.lon = m_origin->lon;
          m_estate.height = m_origin->height;

          if (m_args.convert_msl && !m_offset_flag)
          {
            m_offset_flag = true;
            Coordinates::WMM wmm(m_ctx.dir_cfg);
            m_offset = wmm.height(m_estate.lat, m_estate.lon);
          }

          WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height, msg->lat, msg->lon,
                              msg->height - m_offset, &m_estate.x, &m_estate.y, &m_estate.z);

          // Decompose velocity vector.
          m_estate.vx = std::cos(msg->cog) * msg->sog;
          m_estate.vy = std::sin(msg->cog) * msg->sog;
          // m_estate.u = msg->sog;
          m_estate.u = m_estate.vx * std::cos(m_estate.psi) + m_estate.vy * std::sin(m_estate.psi);
          m_estate.v = -m_estate.vx * std::sin(m_estate.psi) + m_estate.vy * std::cos(m_estate.psi);

          if (msg->getSourceEntity() == m_imu_eid)
          {
            m_estate.phi = 0.0;
            m_estate.theta = 0.0;
          }

          if (msg->getSourceEntity() == m_yaw_eid)
            m_estate.psi = msg->cog;

          dispatch(m_estate);
        }

        bool
        originIsSet()
        {
          return m_origin != nullptr;
        }

        void
        setOrigin(const IMC::GpsFix* msg)
        {
          Memory::replace(m_origin, new IMC::GpsFix(*msg));
        }

        bool
        originIsFar(const IMC::GpsFix* msg)
        {
          double distance = WGS84::distance(m_origin->lat, m_origin->lon, m_origin->height,
                                            msg->lat, msg->lon, msg->height);

          return distance > m_args.ref_distance;
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);
            // Check if we receive valid GPS data.
            if (m_time_without_gps.overflow())
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_WAIT_GPS_FIX);
          }
        }
      };
    }
  }
}

DUNE_TASK
