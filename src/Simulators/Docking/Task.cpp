//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace Docking
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Latitude of the dock
      double lat;
      //! Longitude of the dock
      double lon;
      //! Barometric depth of the dock
      float depth;
      //! Orientation of the dock
      double bearing;
      //! Height of the dock (vertical size)
      float height;
      //! Width of the dock
      float width;
      //! Distance tolerance
      double dist_tol;
      //! Standard deviation of the speed in the horizontal plane (dock will move horizontally)
      double speed_stddev;
      //! Bearing rate standard deviation (dock will change bearing)
      double brate_stddev;
      //! Maximum horizontal deviation
      double max_horz_dev;
      //! Maximum bearing deviation
      double max_bearing_dev;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    struct Task: public Tasks::Task
    {
      struct DockState
      {
        //! X position
        double x;
        //! Y position
        double y;
        //! Bearing angle
        double psi;
        //! Depth
        float depth;
      };

      //! Original dock position
      DockState m_origin;
      //! Current dock position
      DockState m_pos;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Time reference
      double m_timeref;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_prng(NULL),
        m_timeref(-1.0)
      {
        param("Latitude of Dock", m_args.lat)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Latitude coordinate of the dock");

        param("Longitude of Dock", m_args.lon)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Longitude coordinate of the dock");

        param("Depth of Dock", m_args.depth)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Barometric depth of the net");

        param("Width of Dock", m_args.width)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Width of the dock");

        param("Height of Dock", m_args.height)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Vertical size of the dock");

        param("Bearing of Dock", m_args.bearing)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Orientation of the dock");

        param("Distance Tolerance", m_args.dist_tol)
        .defaultValue("0.2")
        .units(Units::Meter)
        .description("Tolerance in distance to the dock");

        param("Standard Deviation - Speed", m_args.speed_stddev)
        .units(Units::MeterPerSecond)
        .defaultValue("0.1")
        .description("Standard deviation of the speed in the horizontal plane");

        param("Standard Deviation - Bearing Rate", m_args.brate_stddev)
        .units(Units::DegreePerSecond)
        .defaultValue("0.1")
        .description("Standard deviation of the bearing rate");

        param("Maximum Deviation - Horizontal", m_args.max_horz_dev)
        .defaultValue("1.0")
        .units(Units::Meter)
        .description("Maximum horizontal deviation of the dock");

        param("Maximum Deviation - Bearing", m_args.max_bearing_dev)
        .defaultValue("15.0")
        .units(Units::Degree)
        .description("Maximum bearing deviation of the dock");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);

        // Register consumers.
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        debug("dock coordinates lat: %0.6f, lon: %0.6f", m_args.lat, m_args.lon);

        m_args.lat = Angles::radians(m_args.lat);
        m_args.lon = Angles::radians(m_args.lon);
        m_args.bearing = Angles::radians(m_args.bearing);
        m_args.brate_stddev = Angles::radians(m_args.brate_stddev);
        m_args.max_bearing_dev = Angles::radians(m_args.max_bearing_dev);

        //! Initialize origin and position
        m_origin.depth = m_args.depth;
        m_origin.psi = m_args.bearing;

        m_pos = m_origin;
      }

      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        // Compute the offset displacement of the dock
        WGS84::displacement(msg->lat, msg->lon, 0,
                            m_args.lat, m_args.lon, 0,
                            &m_origin.x, &m_origin.y);

        m_pos.x = m_origin.x;
        m_pos.y = m_origin.y;

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (m_timeref < 0.0)
        {
          m_timeref = Clock::get();
          return;
        }

        double timestep = Clock::get() - m_timeref;
        m_timeref = Clock::get();

        //! update docks position
        m_pos.x = trimValue(m_pos.x + m_prng->gaussian() * m_args.speed_stddev * timestep,
                            m_origin.x - m_args.max_horz_dev,
                            m_origin.x + m_args.max_horz_dev);

        m_pos.y = trimValue(m_pos.y + m_prng->gaussian() * m_args.speed_stddev * timestep,
                            m_origin.y - m_args.max_horz_dev,
                            m_origin.y + m_args.max_horz_dev);

        double npsi = Angles::normalizeRadian(m_pos.psi + m_prng->gaussian() * m_args.brate_stddev * timestep);

        m_pos.psi = trimValue(npsi,
                              m_origin.psi - m_args.max_bearing_dev,
                              m_origin.psi + m_args.max_bearing_dev);

        //! Define a rotation matrix
        double rot[] = {std::cos(-m_pos.psi), -std::sin(-m_pos.psi),
                        std::sin(-m_pos.psi), std::cos(-m_pos.psi)};

        DockState relative;
        relative.x = std::fabs(msg->x - m_pos.x);
        relative.y = std::fabs(msg->y - m_pos.y);
        relative.depth = std::fabs(msg->z - m_pos.depth);
        relative.psi = std::fabs(Angles::normalizeRadian(std::atan2(relative.y, relative.x) - m_pos.psi));

        //! Now we rotate
        double x = rot[0] * relative.x + rot[1] * relative.y;
        double y = rot[2] * relative.x + rot[3] * relative.y;

        //! Test docking
        // angle of attack
        double aoa = std::fabs(Angles::normalizeRadian(msg->psi - m_pos.psi));

        if ((x < m_args.dist_tol) && // to the front
            (y < m_args.width / 2.0) && // to the sides
            (relative.depth < m_args.height / 2.0) && // vertically
            (relative.psi < Math::c_half_pi) && // coming from the front
            (aoa > Math::c_half_pi)) // facing the dock
        {
          inf("Docking successful");
        }
      }

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
