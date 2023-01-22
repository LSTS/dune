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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  namespace Gaussian
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Latitude of the peak's center.
      double peak_lat;
      //! Longitude of the peak's center.
      double peak_lon;
      //! Value at the center.
      float peak_val;
      //! Value away from the center.
      float away_val;
      //! Standard deviation.
      double std_dev;
      //! The distance from the center where values becomes away value.
      float peak_width;
      //! The message to be produced. It must contain the field 'value'
      std::string message_name;
      //! Invalid reading at surface.
      bool invalid;
      //! Depth threshold
      float depth_threshold;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! Gaussian simulator task.
    struct Task: public Tasks::Periodic
    {
      //! IMC message to be produced.
      IMC::Message* m_msg;
      //! Last simulated state.
      IMC::SimulatedState m_last_state;
      //! Pseudo-random number generator.
      Random::Generator* m_prng;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_msg(NULL),
        m_prng(NULL)
      {
        // Retrieve configuration values.
        param("Latitude (degrees) of gaussian peak", m_args.peak_lat)
        .defaultValue("41.185373");

        param("Longitude (degrees) of gaussian peak", m_args.peak_lon)
        .defaultValue("-8.704962");

        param("Value at peak", m_args.peak_val)
        .defaultValue("20");

        param("Value away from peak", m_args.away_val)
        .defaultValue("14");

        param("Width of gaussian", m_args.peak_width)
        .defaultValue("250");

        param("Name of message to produce", m_args.message_name)
        .defaultValue("RhodamineDye");

        param("Standard Deviation", m_args.std_dev)
        .defaultValue("1.0");

        param("Invalid at Surface", m_args.invalid)
        .defaultValue("true");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);

        // Register consumers.
        bind<IMC::SimulatedState>(this);
      }

      //! Parse arguments.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.message_name))
        {
          Memory::clear(m_msg);
          m_msg = IMC::Factory::produce(m_args.message_name);
        }

        if (paramChanged(m_args.peak_lat))
          m_args.peak_lat = Angles::radians(m_args.peak_lat);

        if (paramChanged(m_args.peak_lon))
          m_args.peak_lon = Angles::radians(m_args.peak_lon);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        Memory::clear(m_msg);
        m_msg = IMC::Factory::produce(m_args.message_name);
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
        Memory::clear(m_msg);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        m_last_state = *msg;
      }

      void
      task(void)
      {
        // Return if task is not active.
        if (!isActive())
          return;

        // Send invalid readings at surface.
        if (m_args.invalid)
        {
          if (m_last_state.z < m_args.depth_threshold)
          {
            m_msg->setValueFP(-1.0);
            dispatch(m_msg);
          }
        }

        double slat, slon, dx, dy, dz;
        slat = m_last_state.lat;
        slon = m_last_state.lon;

        // get absolute (simulated) position
        WGS84::displace(m_last_state.x, m_last_state.y, &slat, &slon);

        // compute offset from plume peak
        WGS84::displacement(slat, slon, 0, m_args.peak_lat, m_args.peak_lon, 0, &dx, &dy, &dz);

        // calculate value based on 2d gaussian function
        double expn = exp(-1 * ((dx * dx + dy * dy)
                                /(2 * m_args.peak_width * m_args.peak_width)));

        double val = m_args.away_val + (m_args.peak_val - m_args.away_val) * expn;
        val += m_prng->gaussian() * m_args.std_dev;
        m_msg->setValueFP(val);
        dispatch(m_msg);
      }
    };
  }
}

DUNE_TASK
