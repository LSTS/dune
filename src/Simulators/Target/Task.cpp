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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace Target
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Target Latitude
      fp64_t lat;
      //! Target Longitude
      fp64_t lon;
      //! Target Height
      fp32_t hei;
      //! Target Max Speed
      fp32_t max_speed;
      //! Target Name
      std::string target;
    };

    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Target Course Over Ground
      fp32_t m_cog;
      //! Target Speed Over Ground
      fp32_t m_sog;
      //! Target Latitude
      fp64_t m_lat;
      //! Target Longitude
      fp64_t m_lon;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_cog(0.0),
        m_sog(0.0)
      {
        param("Latitude", m_args.lat)
        .defaultValue("0")
        .description("Initial Target Latitude");

        param("Longitude", m_args.lon)
        .defaultValue("0")
        .description("Initial Target Longitude");

        param("Height", m_args.hei)
        .defaultValue("0")
        .description("Initial Target Height");

        param("Max Speed", m_args.max_speed)
        .defaultValue("1")
        .description("Maximum Target Speed in m/s");

        param("Target Name", m_args.target)
        .defaultValue("lauv-seacon-1")
        .description("Target Name");
      }

      //! Acquire resources
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(Random::Factory::c_default, -1);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      void
      onUpdateParameters(void)
      {
        m_lat = Angles::radians(m_args.lat);
        m_lon = Angles::radians(m_args.lon);
      }

      void
      sendTarget(void)
      {
        IMC::Target trg;

        trg.label = m_args.target;

        m_cog = m_prng->gaussian(m_cog, 0.05);
        m_sog = m_prng->uniform(0, m_args.max_speed);

        float t_step = 1 / getFrequency();

        float n = std::cos(m_cog) * m_sog * t_step;
        float e = std::sin(m_cog) * m_sog * t_step;

        WGS84::displace(n, e, &m_lat, &m_lon);

        trg.lat = m_lat;
        trg.lon = m_lon;
        trg.z = m_args.hei;
        trg.z_units = IMC::Z_HEIGHT;
        trg.cog = m_cog;
        trg.sog = m_sog;

        dispatch(trg);
        debug("Target Sent");
      }

      void
      task(void)
      {
        sendTarget();
      }
    };
  }
}

DUNE_TASK
