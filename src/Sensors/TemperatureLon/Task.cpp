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
// Author: J.Costa                                                          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Temperature Publisher Example 2
  //!
  //! This task simulates a temperature sensor and  publishes IMC Temperature 
  //! messages depending on the vehicle longitude.
  //! It was created for the OCEANS 23 tutorial to explain how DUNE works and
  //! has its own Neptus plug-in that paints its values on the map.
  //!
  //! @author J.Costa
  namespace TemperatureLon
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Latitude of lowest temperature
      double lon_min;
      // Latitude of highest temperature
      double lon_max;
      // Lowest temperature
      double temp_min;
      // Highest temperature
      double temp_max;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Estimated state message.
      IMC::EstimatedState m_estate;
      //! Estimated state message.
      IMC::Temperature m_temperature;

      // Vehicle's Latitude
      double m_lat_rad;
      // Vehicle's Longitude
      double m_lon_rad;
      // Vehicle's Latitude
      double m_lat_deg;
      // Vehicle's Longitude
      double m_lon_deg;

      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_lat_rad(0),
        m_lon_rad(0),
        m_lat_deg(0),
        m_lon_deg(0)
      {
        param("Longitude Cold Side", m_args.lon_min)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .units(Units::Degree)
        .defaultValue("-8.7092082")
        .description("Longitude (in degrees) where the water is colder.");

        param("Longitude Warm Side", m_args.lon_max)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .units(Units::Degree)
        .defaultValue("-8.7040986")
        .description("Longitude (in degrees) where the water is warmer.");

        param("Temperature Cold Side", m_args.temp_min)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .units(Units::DegreeCelsius)
        .defaultValue("10.0")
        .description("Temperature in the colder side.");

        param("Temperature Warm Side", m_args.temp_max)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .units(Units::DegreeCelsius)
        .defaultValue("30.0")
        .description("Temperature in the warmer side.");

        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {

      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::EstimatedState *msg)
      {
        m_estate = *msg;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          // Calculate the absolute position
          m_lat_rad = m_estate.lat;
          m_lon_rad = m_estate.lon;
          WGS84::displace(m_estate.x, m_estate.y, &m_lat_rad, &m_lon_rad);
          trace("Lat: %f Lon: %f (rad)", m_lat_rad, m_lon_rad);

          // Convert from radians to degrees
          m_lat_deg = Angles::degrees(m_lat_rad);
          m_lon_deg = Angles::degrees(m_lon_rad);
          trace("Lat: %f Lon: %f (deg)", m_lat_deg, m_lon_deg);

          // Map temperature values between the desired longitude coordinates
          m_temperature.value = (m_lon_deg - m_args.lon_min) / (m_args.lon_max - m_args.lon_min) * (m_args.temp_max - m_args.temp_min) + m_args.temp_min;
          debug("Temperature: %fºC", m_temperature.value);
          
          dispatch(m_temperature);
        }
      }
    };
  }
}

DUNE_TASK