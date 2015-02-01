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
      std::string trg_name;
      //! PTU Position
      float ptu_lat, ptu_lon, ptu_height, yaw_offset;
    };

    struct Task: public DUNE::Tasks::Task
    {
      unsigned m_trg_id;
      Arguments m_args;
      double m_lat, m_lon;
      float m_hei, m_yaw;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Target Vehicle", m_args.trg_name)
        .description("Vehicle to be tracked")
        .defaultValue("alfa-07");

        param("Latitude", m_args.ptu_lat)
        .description("Fixed ground PTU position latitude")
        .defaultValue("39.087752");

        param("Longitude", m_args.ptu_lon)
        .description("Fixed ground PTU position longitude")
        .defaultValue("-8.9620989");

        param("Height", m_args.ptu_height)
        .description("Fixed ground PTU position height")
        .defaultValue("85");

        param("Yaw Offset", m_args.yaw_offset)
        .description("Angle between north and ptu pointing direction")
        .defaultValue("180");

        // Register consumers.
        bind<IMC::EstimatedState>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::GpsFix>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_trg_id = resolveSystemName(m_args.trg_name);
        inf(DTR("Target name is %s, with ID %d"), m_args.trg_name.c_str(), m_trg_id);
        m_lat = Angles::radians(m_args.ptu_lat);
        m_lon = Angles::radians(m_args.ptu_lon);
        m_hei = m_args.ptu_height;
        m_yaw = Angles::radians(m_args.yaw_offset);
      }

      void
      consume(const IMC::EulerAngles* euangles)
      {
        if (getSystemId() != euangles->getSource())
          return;

        m_yaw = Angles::radians(m_args.yaw_offset) + euangles->psi;
      }

      void
      consume(const IMC::GpsFix* gpsfix)
      {
        if (getSystemId() != gpsfix->getSource())
          return;

        m_lat = gpsfix->lat;
        m_lon = gpsfix->lon;
        m_hei = gpsfix->height;
      }

      void
      consume(const IMC::EstimatedState* estate)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        spew("Estimated State arrived from %d", estate->getSource());

        if (m_trg_id != estate->getSource())
          return;

        double azimuth, elevation;
        double trg_lat = estate->lat;
        double trg_lon = estate->lon;
        float trg_hei = estate->height;

        WGS84::displace(estate->x, estate->y, estate->z, &trg_lat, &trg_lon, &trg_hei);

        WGS84::getAzimuthAndElevation(m_lat, m_lon, m_hei, trg_lat, trg_lon, trg_hei, &azimuth, &elevation);

        IMC::SetControlSurfaceDeflection scsd;

        scsd.id = 'p';
        scsd.angle = azimuth - m_yaw;
        dispatch(scsd);

        scsd.id = 't';
        scsd.angle = elevation - Math::c_half_pi;
        dispatch(scsd);
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
