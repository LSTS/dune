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
// Author: Filipe Ferreira                                                  *
// Author: João Fortuna                                                     *
//***************************************************************************

#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AntennaTracker
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Name of Target
      std::string target;
      //! Antenna latitude.
      double lat;
      //! Antenna longitude.
      double lon;
      //! Antenna height.
      float height;
      //! Antenna Heading offset.
      float yaw_offset;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Target system ID.
      unsigned m_trg_id;
      //! Antenna latitude.
      double m_lat;
      //! Antenna longitude.
      double m_lon;
      //! Antenna height.
      float m_hei;
      //! Antenna heading offset.
      float m_yaw;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Target System", m_args.target)
        .description("System to be tracked")
        .defaultValue("alfa-07");

        param("Latitude", m_args.lat)
        .description("Fixed ground base position latitude")
        .defaultValue("39.087752");

        param("Longitude", m_args.lon)
        .description("Fixed ground base position longitude")
        .defaultValue("-8.9620989");

        param("Height", m_args.height)
        .description("Fixed ground base position height")
        .defaultValue("85");

        param("Yaw Offset", m_args.yaw_offset)
        .description("Angle between north and base pointing direction")
        .defaultValue("180");

        // Register consumers.
        bind<IMC::EstimatedState>(this);
        bind<IMC::EulerAngles>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_trg_id = resolveSystemName(m_args.target);
        inf(DTR("Target name is %s, with ID %d"), m_args.target.c_str(), m_trg_id);

        m_lat = Angles::radians(m_args.lat);
        m_lon = Angles::radians(m_args.lon);
        m_yaw = Angles::radians(m_args.yaw_offset);
        m_hei = m_args.height;
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        if (getSystemId() != msg->getSource())
          return;

        m_yaw = Angles::radians(m_args.yaw_offset) + msg->psi;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        spew("Estimated State arrived from %d", msg->getSource());

        if (getSystemId() == msg->getSource())
        {
          m_lat = msg->lat;
          m_lon = msg->lon;
          m_hei = msg->height;

          WGS84::displace(msg->x, msg->y, msg->z,
                          &m_lat, &m_lon, &m_hei);
        }

        if (m_trg_id != msg->getSource())
          return;

        double azimuth, elevation;
        double trg_lat = msg->lat;
        double trg_lon = msg->lon;
        float trg_hei = msg->height;

        WGS84::displace(msg->x, msg->y, msg->z, &trg_lat, &trg_lon, &trg_hei);

        WGS84::getAzimuthAndElevation(m_lat, m_lon, m_hei, trg_lat, trg_lon, trg_hei, &azimuth, &elevation);

        // Dispatch to bus.
        IMC::SetControlSurfaceDeflection ref;

        ref.id = 'p';
        ref.angle = azimuth - m_yaw;
        dispatch(ref);

        ref.id = 't';
        ref.angle = elevation;
        dispatch(ref);
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
