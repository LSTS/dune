//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

// Standard library headers.
#include <memory>
#include <string>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "StreamGeneratorFactory.hpp"

namespace Simulators
{
  //! Produces stream velocity values.
  //!
  //! Fetches current or wind velocity values from a specified source (e.g., a
  //! file with model data) and packs them into an IMC EstimatedStreamVelocity
  //! message.
  //! Currently supports only a single vehicle.
  //! @author Miguel Aguiar
  namespace StreamVelocity
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Determines how the stream values are generated.
      std::string type;

      //! Default stream speed in the North direction (m/s)
      double default_wx;
      //! Default stream speed in the East direction (m/s)
      double default_wy;
      //! Default stream speed in the Down direction (m/s)
      double default_wz;

      //! Configurations for loading stream velocity data from a file.
      //! Path to file containing the data.
      std::string filename;

      //! Advance the simulation by some time, if using forecasted data.
      struct
      {
        unsigned days_fwd;
        unsigned hours_fwd;
        unsigned minutes_fwd;
        unsigned seconds_fwd;
      } date;
    };

    struct Task : public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Source for stream velocity values.
      std::unique_ptr<StreamGenerator::StreamGenerator> m_ssg;
      //! Dispatched EstimatedStreamVelocity message
      IMC::EstimatedStreamVelocity m_esv;
      //! Latest consumed SimulatedState
      IMC::SimulatedState m_state;
      //! Time offset in seconds.
      double m_time0;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx)
          : DUNE::Tasks::Periodic(name, ctx), m_ssg(nullptr)
      {
        bind<IMC::SimulatedState>(this);

        param("Stream Velocity Source", m_args.type)
            .defaultValue("Constant")
            .description("Source of the stream speed values.");

        param("Default Speed North", m_args.default_wx)
            .units(Units::MeterPerSecond)
            .defaultValue("0.0")
            .description("Default stream speed in the North direction (m/s)");

        param("Default Speed East", m_args.default_wy)
            .units(Units::MeterPerSecond)
            .defaultValue("0.0")
            .description("Default stream speed in the East direction (m/s)");

        param("Default Speed Down", m_args.default_wz)
            .units(Units::MeterPerSecond)
            .defaultValue("0.0")
            .description("Default stream speed in the Down direction (m/s)");

        param("File", m_args.filename)
            .defaultValue("")
            .description("Path to the file containg the stream velocity data.");

        param("Days Forward", m_args.date.days_fwd)
            .defaultValue("0")
            .description(
                "Number of days to advance the simulation by, relative to the "
                "time of the first datapoint.");

        param("Hours Forward", m_args.date.hours_fwd)
            .defaultValue("0")
            .description(
                "Number of hours to advance the simulation by, relative to the "
                "time of the first datapoint.");

        param("Minutes Forward", m_args.date.minutes_fwd)
            .defaultValue("0")
            .description(
                "Number of minutes to advance the simulation by, relative to "
                "the time of the first datapoint.");

        param("Seconds Forward", m_args.date.seconds_fwd)
            .defaultValue("0")
            .description(
                "Number of seconds to advance the simulation by, relative to "
                "the time of the first datapoint.");
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        debug(DTR("Setting default stream velocity: %f m/s N : %f m/s E : "
                  "%f m/s D"),
              m_args.default_wx,
              m_args.default_wy,
              m_args.default_wz);

        m_esv.x = m_args.default_wx;
        m_esv.y = m_args.default_wy;
        m_esv.z = m_args.default_wz;

        try
        {
          m_ssg = StreamGenerator::factory(m_args);
        }
        catch (std::exception const& e)
        {
          err(DTR("An error ocurred while accessing the stream velocity source:"
                  "\n"
                  "\t%s\n"
                  "\tFalling back to constant stream velocity."),
              e.what());

          m_args.type = "Constant";
          m_ssg = StreamGenerator::factory(m_args);
        }

        m_time0 = m_args.date.seconds_fwd + 60 * m_args.date.minutes_fwd +
                  3600 * m_args.date.hours_fwd + 86400 * m_args.date.days_fwd;

        debug(DTR("Setting initial time delta to %f seconds"), m_time0);

        m_time0 -= DUNE::Time::Clock::get();
      }

      //! Update the EstimatedStreamVelocity message, using the most recent
      //! SimulatedState data.
      void
      updateMessage(void)
      {
        double lat = m_state.lat;
        double lon = m_state.lon;
        double height = m_state.height;

        Coordinates::WGS84::displace(
            m_state.x, m_state.y, m_state.z, &lat, &lon, &height);

        auto p = m_ssg->getVelocity(Angles::degrees(lat),
                                    Angles::degrees(lon),
                                    -height,
                                    DUNE::Time::Clock::get() + m_time0);

        //! Fill EstimatedStreamVelocity.
        m_esv.x = std::isnan(p[0]) ? m_args.default_wx : p[0];
        m_esv.y = std::isnan(p[1]) ? m_args.default_wy : p[1];
        m_esv.z = std::isnan(p[2]) ? m_args.default_wz : p[2];

        debug(DTR("Stream velocity is %f m/s N : %f m/s E : %f m/s D"),
              m_esv.x,
              m_esv.y,
              m_esv.z);
      }

      void
      consume(IMC::SimulatedState const* msg)
      {
        if (msg->getSource() == getSystemId())
          m_state = *msg;
      }

      void
      task(void)
      {
        updateMessage();
        dispatch(m_esv);
      }
    };
  }    // namespace StreamVelocity
}    // namespace Simulators

DUNE_TASK
