//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques (former Bathymetry task)                         *
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "QuadTree.hpp"

namespace Simulators
{
  //! This task simulates signals for the bottom and forward looking echo sounders
  //! Uses bathymetry data from APDL to generate bottom distance data.
  //! Uses two configurable WGS84 points to simulate a pier or a straight-line
  //! obstacle.
  namespace Environment
  {
    using DUNE_NAMESPACES;
    using std::sin;
    using std::cos;

    //! Number of points in the forward direction for bottom intersection
    static const unsigned c_forward_points = 10;

    struct Arguments
    {
      //! True if bottom distance should be simulated
      bool simulate_bd;
      //! True if forward distance should be simulated
      bool simulate_fd;
      //! Bottom distance entity id.
      std::string label_bd;
      //! Forward distance entity id.
      std::string label_fd;
      // Bottom distance arguments
      //! Location.
      std::string location;
      //! Fixed value for the tide level
      float tide;
      //! Standard deviation of bottom distance estimates.
      double bd_std_dev;
      //! OOB depth.
      double oob_depth;
      //! Interpolation radius.
      double interp_radius;
      // Forward distance arguments
      //! Standard deviation of the forward distance estimates
      double fd_std_dev;
      //! Maximum range of the sensor
      double max_range;
      //! Bottom echo sounder's beam apperture
      double bottom_width;
      //! Forward echo sounder's beam bottom_width
      double forward_width;
      //! Forward Sonar position.
      std::vector<float> forward_position;
      //! Forward Sonar orientation.
      std::vector<float> forward_orientation;
      //! Bottom Sonar position.
      std::vector<float> bottom_position;
      //! Bottom Sonar orientation.
      std::vector<float> bottom_orientation;
      //! Flag for simulating a pier
      bool simulate_pier;
      //! Pier points coordinates
      //! Order: point A latitude, A longitude, B latitude ...
      std::vector<double> pier;
      //! Use intersection method to compute forward distance
      bool intersect_method;
      // General arguments
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    struct Task: public Tasks::Periodic
    {
      //! Bottom distance message.
      IMC::Distance m_bd;
      //! Forward distance message.
      IMC::Distance m_fd;
      //! Current position.
      IMC::SimulatedState m_sstate;
      //! Pier points offsets
      //! point A north, A east, B north ...
      double m_a_n, m_a_e, m_b_n, m_b_e;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! The tree.
      QuadTree* m_qtree;
      //! Reference latitude and longitude for data points.
      double m_ref_lat, m_ref_lon;
      //! NE offsets in regard to navigational reference.
      double m_off_n, m_off_e;
      //! Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL),
        m_qtree(NULL)
      {
        param("Simulate - Bottom Distance", m_args.simulate_bd)
        .defaultValue("true")
        .description("True if bottom distance should be simulated");

        param("Simulate - Forward Distance", m_args.simulate_fd)
        .defaultValue("true")
        .description("True if forward distance should be simulated");

        // Define configuration parameters.
        param("Entity Label - Bottom Distance", m_args.label_bd)
        .description("Entity label of simulated bottom distance");

        param("Entity Label - Forward Distance", m_args.label_fd)
        .description("Entity label of simulated forward distance");

        param("Location", m_args.location)
        .defaultValue("APDL");

        param("Tide Level", m_args.tide)
        .defaultValue("0.0")
        .units(Units::Meter)
        .description("Tide level to be added to the computed depth at a each position");

        param("Bottom Distance Standard Deviation", m_args.bd_std_dev)
        .units(Units::Meter)
        .defaultValue("0.1")
        .description("Standard deviation for the bottom distance");

        param("OOB Depth", m_args.oob_depth)
        .units(Units::Meter)
        .defaultValue("5.0");

        param("Interpolation Radius", m_args.interp_radius)
        .units(Units::Meter)
        .defaultValue("10.0");

        param("Simulate Pier", m_args.simulate_pier)
        .defaultValue("false")
        .description("Simulate a pier using configured WGS84 locations");

        param("Pier Points", m_args.pier)
        .units(Units::Radian)
        .size(4)
        .defaultValue("0.0");

        param("Forward Range", m_args.max_range)
        .units(Units::Meter)
        .defaultValue("50.0");

        param("Bottom Beam Width", m_args.bottom_width)
        .defaultValue("10.0")
        .units(Units::Degree)
        .description("Bottom echo sounder's beam width angle");

        param("Forward Beam Width", m_args.forward_width)
        .defaultValue("10.0")
        .units(Units::Degree)
        .description("Forward echo sounder's beam width angle");

        param("Forward Distance Standard Deviation", m_args.fd_std_dev)
        .units(Units::Meter)
        .defaultValue("0.3")
        .description("Standard deviation for the forward distance");

        param("Forward Sonar Position", m_args.forward_position)
        .defaultValue("1, 0, 0")
        .size(3)
        .units(Units::Meter)
        .description("Forward sonar position");

        param("Forward Sonar Orientation", m_args.forward_orientation)
        .defaultValue("0, 0, 0")
        .size(3)
        .units(Units::Degree)
        .description("Forward sonar orientation");

        param("Bottom Sonar Position", m_args.bottom_position)
        .defaultValue("0, 0, 0")
        .size(3)
        .units(Units::Meter)
        .description("Bottom sonar position");

        param("Bottom Sonar Orientation", m_args.bottom_orientation)
        .defaultValue("0, -90, 0")
        .size(3)
        .units(Units::Degree)
        .description("Bottom sonar orientation");

        param("Bottom Intersection Method", m_args.intersect_method)
        .defaultValue("false")
        .description("Use a more complex intersection method to simulate forward distance");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Initializing entity state.
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);

        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
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
        Memory::clear(m_qtree);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.bottom_width))
          m_args.bottom_width = Angles::radians(m_args.bottom_width);

        if (paramChanged(m_args.forward_width))
          m_args.forward_width = Angles::radians(m_args.forward_width);

        if (paramChanged(m_args.bottom_orientation))
        {
          for (unsigned i = 0; i < 3; ++i)
            m_args.bottom_orientation[i] = Angles::radians(m_args.bottom_orientation[i]);
        }

        if (paramChanged(m_args.forward_orientation))
        {
          for (unsigned i = 0; i < 3; ++i)
            m_args.forward_orientation[i] = Angles::radians(m_args.forward_orientation[i]);
        }

        debug("pier point A lat: %0.6f, lon: %0.6f", m_args.pier[0], m_args.pier[1]);
        debug("pier point B lat: %0.6f, lon: %0.6f", m_args.pier[2], m_args.pier[3]);
      }

      void
      onResourceInitialization(void)
      {
        Utils::String::toLowerCase(m_args.location);
        Path path = m_ctx.dir_cfg / "simulation" / ("bathymetry-" + m_args.location + ".ini");
        DUNE::Parsers::Config cfg(path.c_str());
        std::vector<std::string> lines;
        cfg.get("Bathymetry", "Data", "", lines);
        cfg.get("Bathymetry", "Latitude (degrees)", "", m_ref_lat);
        cfg.get("Bathymetry", "Longitude (degrees)", "", m_ref_lon);

        debug("%s | %0.6f, %0.6f", m_args.location.c_str(), m_ref_lat, m_ref_lon);
        debug("%s | %s", m_args.location.c_str(), path.c_str());
        debug("%s | %lu %s", m_args.location.c_str(), (long unsigned int)lines.size(), "bathymetry values");

        m_ref_lat = Angles::radians(m_ref_lat);
        m_ref_lon = Angles::radians(m_ref_lon);

        std::vector<QuadTree::Item> data;
        QuadTree::Item item;
        Bounds* bounds = 0;

        for (unsigned i = 0; i < lines.size(); ++i)
        {
          std::vector<double> v;
          DUNE::Utils::String::split(lines[i], " ", v);
          if (!bounds)
            bounds = new Bounds(Point(v[0], v[1]));
          else
            bounds->cover(Point(v[0], v[1]));
          item.x = v[0]; item.y = v[1]; item.value = v[2];
          data.push_back(item);
        }

        std::stringstream ss;
        ss << *bounds;
        trace("bounds: %s", ss.str().c_str());

        // Fill the tree
        m_qtree = new QuadTree(*bounds);
        delete bounds;

        for (unsigned i = 0; i < data.size(); ++i)
          m_qtree->insert(data[i]);

        ss.clear();
        ss << *m_qtree;
        trace("tree elements: %s", ss.str().c_str());

        m_bd.beam_config.clear();
        m_bd.location.clear();

        m_fd.beam_config.clear();
        m_fd.location.clear();

        IMC::DeviceState bottom_ds;
        bottom_ds.x = m_args.bottom_position[0];
        bottom_ds.y = m_args.bottom_position[1];
        bottom_ds.z = m_args.bottom_position[2];
        bottom_ds.phi = m_args.bottom_orientation[0];
        bottom_ds.theta = m_args.bottom_orientation[1];
        bottom_ds.psi = m_args.bottom_orientation[2];

        m_bd.location.push_back(bottom_ds);

        IMC::DeviceState forward_ds;
        forward_ds.x = m_args.forward_position[0];
        forward_ds.y = m_args.forward_position[1];
        forward_ds.z = m_args.forward_position[2];
        forward_ds.phi = m_args.forward_orientation[0];
        forward_ds.theta = m_args.forward_orientation[1];
        forward_ds.psi = m_args.forward_orientation[2];

        m_fd.location.push_back(forward_ds);

        IMC::BeamConfig bottom_bc;
        bottom_bc.beam_width = m_args.bottom_width;
        bottom_bc.beam_height = m_args.bottom_width;

        m_bd.beam_config.push_back(bottom_bc);

        IMC::BeamConfig forward_bc;
        forward_bc.beam_width = m_args.forward_width;
        forward_bc.beam_height = m_args.forward_width;

        m_fd.beam_config.push_back(forward_bc);
      }

      void
      onEntityReservation(void)
      {
        m_bd.setSourceEntity(reserveEntity(m_args.label_bd));
        m_fd.setSourceEntity(reserveEntity(m_args.label_fd));
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        // Get offsets for bathymetry
        WGS84::displacement(m_ref_lat, m_ref_lon, 0, msg->lat, msg->lon, 0,
                            &m_off_n, &m_off_e);

        trace("offsets to navigational reference | %0.2f %0.2f", m_off_n, m_off_e);

        // Compute the offset displacement of the line segment points
        // for obstacle intersection
        WGS84::displacement(msg->lat, msg->lon, 0, m_args.pier[0], m_args.pier[1], 0,
                            &m_a_n, &m_a_e);
        WGS84::displacement(msg->lat, msg->lon, 0, m_args.pier[2], m_args.pier[3], 0,
                            &m_b_n, &m_b_e);

        trace("offsets to navigational reference | %0.2f %0.2f and %0.2f %0.2f",
              m_a_n, m_a_e, m_b_n, m_b_e);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        m_sstate = *msg;
      }

      void
      task(void)
      {
        if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
          return;  // Home ref not setup

        // bottom distance
        if (m_args.simulate_bd)
          updateBottomDistance();

        // forward distance
        if (m_args.simulate_fd)
          updateForwardDistance();
      }

      //! Update bottom distance value with bathymetry
      inline void
      updateBottomDistance(void)
      {
        double depth = depthAt(m_sstate.x + m_off_n, m_sstate.y + m_off_e);
        double error = m_prng->gaussian() * m_args.bd_std_dev;
        m_bd.value = std::max(0.0, depth - m_sstate.z + error);
        m_bd.validity = IMC::Distance::DV_VALID;
        dispatch(m_bd);

        trace("(x,y,z) %0.2f %0.2f %0.2f depth %0.2f,"
              " bottom distance %0.2f, simulated error %0.2f",
              m_sstate.x, m_sstate.y, m_sstate.z, depth,
              m_bd.value, error);
      }

      //! Compute depth at a certian (x, y) position
      //! @param[in] x coordinate of position
      //! @param[in] y coordinate of position
      //! @return depth at specified point
      double
      depthAt(double x, double y)
      {
        Point p(x, y);
        Bounds search_area(p, m_args.interp_radius);

        std::vector<QuadTree::Item> items;

        m_qtree->search(search_area, items);

        if (items.size() == 0)
        {
          trace("out of bounds");
          return m_args.oob_depth;
        }

        trace("found %lu close data values", (long unsigned int)items.size());

        // @todo interpolate rather than picking closest one
        double dmin = p.distance(Point(items[0].x, items[0].y));
        double depth = items[0].value;

        for (unsigned int i = 1; i < items.size(); ++i)
        {
          double d = p.distance(Point(items[i].x, items[i].y));
          if (d < dmin)
          {
            dmin = d;
            depth = items[i].value;
          }
        }

        return depth + m_args.tide;
      }

      //! Update forward distance value taking into account
      //! obstacles and the bottom
      inline void
      updateForwardDistance(void)
      {
        // define a random error
        double error = m_prng->gaussian() * m_args.fd_std_dev;

        m_fd.value = forwardRange() + error;
        m_fd.value = trimValue(m_fd.value, 0, m_args.max_range);
        m_fd.validity = IMC::Distance::DV_VALID;
        dispatch(m_fd);

        trace("(x,y,z) %0.2f %0.2f %0.2f, forward distance %0.2f, simulated error %0.2f",
              m_sstate.x, m_sstate.y, m_sstate.z, m_fd.value, error);
      }

      //! Compute the forward range seen by the FLS according to obstacles and bottom
      //! @return forward range at current position
      double
      forwardRange(void)
      {
        double range = m_args.max_range;

        // use forward distance to the surface if the current pitch angle allows it
        if (m_sstate.theta > 0 && m_args.max_range * sin(m_sstate.theta) >= m_sstate.z)
        {
          double value = std::abs(m_sstate.z / sin(m_sstate.theta));
          range = std::min(range, value);
        }

        if (m_args.intersect_method)
        {
          range = std::min(range, bottomIntersection());
        }
        else
        {
          // use forward distance to bottom of the sea if the current pitch angle allows it
          if (m_bd.value >= 0 && m_sstate.theta <= 0 &&
              m_args.max_range * sin(m_sstate.theta) >= m_bd.value)
          {
            // make sure it is not null otherwise we'll be dividing by zero
            if (sin(m_sstate.theta) != 0)
            {
              double value = std::abs(m_sstate.z / sin(m_sstate.theta));
              range = std::min(range, value);
            }
          }
        }

        if (m_args.simulate_pier)
        {
          // find the furthest point seen by the forward distance sensor
          double x_target = m_sstate.x + m_args.max_range* cos(m_sstate.psi);
          double y_target = m_sstate.y + m_args.max_range* sin(m_sstate.psi);

          double x, y;

          // since there is only one pier, then only one intersection will be tried
          if (!lineSegmentIntersect(LineSegParam<double>(m_sstate.x, m_sstate.y,
                                                         x_target, y_target,
                                                         m_a_n, m_a_e,
                                                         m_b_n, m_b_e),
                                    &x, &y))
          {
            // this means there is no intersection point
            // therefore output the maximum sensor range
            range = std::min(range, m_args.max_range);
          }
          else
          {
            // distance to the intersection point
            double distance = Math::norm((x - m_sstate.x), (y - m_sstate.y));
            range = std::min(range, distance);
          }
        }

        return range;
      }

      //! Compute the depths of c_forward_points in front of the vehicle
      //! Use connections between these points as line segments
      //! and intersect them with lower beam part of the echo sounder.
      //! @return range after intersection
      double
      bottomIntersection(void)
      {
        double intersect_range = m_args.max_range;

        double x_step = m_args.max_range / (double)c_forward_points;

        std::vector<float> fwd_depths(c_forward_points);

        fwd_depths[0] = depthAt(m_sstate.x + m_off_n, m_sstate.y + m_off_e);

        // x and z coordinates of the end of the forward beam
        double x_target, z_target;

        x_target = m_args.max_range * cos(m_sstate.theta - m_args.forward_width / 2.0);
        z_target = - m_args.max_range * sin(m_sstate.theta - m_args.forward_width / 2.0);
        z_target += m_sstate.z; // SHOULD NOT BE Z BUT DEPTH

        for (unsigned i = 1; i < c_forward_points; i++)
        {
          double xe = (double)i * x_step * cos(m_sstate.psi);
          double ye = (double)i * x_step * sin(m_sstate.psi);

          fwd_depths[i] = depthAt(m_sstate.x + m_off_n + xe, m_sstate.y + m_off_e + ye);

          double bottom_x_1 = (double)(i - 1) * x_step;
          double bottom_z_1 = fwd_depths[i - 1];

          double bottom_x_2 = (double)i * x_step;
          double bottom_z_2 = fwd_depths[i];

          double x, z;

          bool test_int = lineSegmentIntersect(LineSegParam<double>(0.0, m_sstate.z,
                                                                    x_target, z_target,
                                                                    bottom_x_1, bottom_z_1,
                                                                    bottom_x_2, bottom_z_2),
                                               &x, &z); // SHOULD NOT BE STATE.Z BUT DEPTH

          if (test_int)
          {
            intersect_range = Math::norm(x, z - m_sstate.z); // SHOULD NOT BE Z BUT DEPTH
            break;
          }
        }

        return intersect_range;
      }
    };
  }
}

DUNE_TASK
