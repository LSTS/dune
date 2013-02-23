//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
      struct Arguments
      {
        //! GPS entity label.
        std::string elabel_gps;
        //! IMU entity label.
        std::string elabel_imu;
        //! Yaw entity label.
        std::string elabel_yaw;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! GPS entity eid.
        int m_gps_eid;
        //! IMU entity eid.
        int m_imu_eid;
        //! Yaw entity eid.
        int m_yaw_eid;
        //! Estimated state.
        IMC::EstimatedState m_estate;
        //! GPS fix rejection.
        IMC::GpsFixRejection m_gps_rej;
        //! Time without GPS.
        Counter<double> m_time_without_gps;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
          // Define configuration parameters.
          param("Entity Label - GPS", m_args.elabel_gps)
          .description("Entity label of 'GpsFix' and 'GroundVelocity' messages");

          param("Entity Label - IMU", m_args.elabel_imu)
          .description("Entity label of 'EulerAngles' and 'AngularVelocity' messages");

          param("Entity Label - Yaw", m_args.elabel_yaw)
          .description("Entity label of 'EulerAngles' messages (field 'psi')");

          m_estate.clear();

          // Navigation enters error mode without valid GPS data.
          m_time_without_gps.setTop(5.0);

          // Register callbacks
          bind<IMC::AngularVelocity>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::GroundVelocity>(this);
        }

        void
        onEntityResolution(void)
        {
          m_gps_eid = resolveEntity(m_args.elabel_gps);
          m_imu_eid = resolveEntity(m_args.elabel_imu);
          m_yaw_eid = resolveEntity(m_args.elabel_yaw);
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
          {
            m_estate.psi = msg->psi;
          }
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

          // Received valid GPS data.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_time_without_gps.reset();

          m_estate.lat = msg->lat;
          m_estate.lon = msg->lon;

          // Decompose velocity vector.
          m_estate.vx = std::cos(msg->cog) * msg->sog;
          m_estate.vy = std::sin(msg->cog) * msg->sog;
          m_estate.u = msg->sog;

          dispatch(m_estate);
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
