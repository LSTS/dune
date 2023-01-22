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
// Author: tsm                                                              *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author tsm
  namespace Reporter
  {
    using DUNE_NAMESPACES;

    // Synchronization byte.
    static const uint8_t c_sync = 0xCD;
    static const uint8_t c_poly = 0x07;

    enum Codes
    {
      CODE_ABORT   = 0x00,
      CODE_RANGE   = 0x01,
      CODE_PLAN    = 0x02,
      CODE_REPORT  = 0x03,
      CODE_RESTART = 0x04,
      CODE_RAW     = 0x05,
      CODE_USBL    = 0x06
    };

    struct Report
    {
      float lat;
      float lon;
      uint8_t depth;
      int16_t yaw;
      int16_t alt;
      int8_t progress;
      uint8_t fuel_level;
      uint8_t fuel_conf;
    };

    struct Arguments
    {
      int period;
      std::string dest;
      bool as_struct;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Time::Counter<double> m_timer;
      IMC::EstimatedState* m_eestate;
      std::vector<uint8_t> m_bfr;
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_eestate(NULL)
      {
        param("Period", m_args.period)
        .defaultValue("10")
        .units(Units::Second)
        .description("");

        param("Destination", m_args.dest)
        .defaultValue("lauv-noptilus-1")
        .description("");

        param("As Struct", m_args.as_struct)
        .defaultValue("true")
        .description("");

        m_bfr.resize(255);
        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_timer.setTop(m_args.period);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
        Memory::clear(m_eestate);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_eestate = msg->clone();
      }

      void
      sendReport(const std::vector<char>& data)
      {
        inf("Send Report");
        Algorithms::CRC8 crc(c_poly);

        std::vector<char> frame;
        frame.reserve(data.size());

        frame.push_back(c_sync);
        crc.putByte(c_sync);
        for (size_t i = 0; i < data.size(); ++i)
        {
          frame.push_back(data[i]);
          crc.putByte(data[i]);
        }
        frame.push_back(crc.get());

        IMC::UamRxFrame rx;
        rx.sys_src = resolveSystemId(getSystemId());
        rx.sys_dst = m_args.dest;
        rx.data = frame;

        debug("%s", Utils::String::toHex(frame).c_str());

        dispatch(rx);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_eestate == NULL || !m_timer.overflow())
            continue;

          double lat = 0;
          double lon = 0;
          Coordinates::toWGS84(*m_eestate, lat, lon);

          Report dat;
          dat.lat = lat;
          dat.lon = lon;
          dat.depth = (uint8_t)m_eestate->depth;
          dat.yaw = (int16_t)(m_eestate->psi * 100.0);
          dat.alt = (int16_t)(m_eestate->alt * 10.0);
          dat.fuel_level = 50.0;
          dat.fuel_conf = 99.0;
          dat.progress = 0;

          std::vector<char> data;
          data.resize(sizeof(dat) + 1);
          data[0] = CODE_REPORT;

          if (m_args.as_struct)
            std::memcpy(&data[1], &dat, sizeof(dat));
          else
          {
            int idx = 1;
            std::memcpy(&data[idx], &dat.lat, sizeof(dat.lat));
            idx += sizeof(dat.lat);

            std::memcpy(&data[idx], &dat.lon, sizeof(dat.lon));
            idx += sizeof(dat.lon);

            std::memcpy(&data[idx], &dat.depth, sizeof(dat.depth));
            idx += sizeof(dat.depth);

            std::memcpy(&data[idx], &dat.yaw, sizeof(dat.yaw));
            idx += sizeof(dat.yaw);

            std::memcpy(&data[idx], &dat.alt, sizeof(dat.alt));
            idx += sizeof(dat.alt);

            std::memcpy(&data[idx], &dat.progress, sizeof(dat.progress));
            idx += sizeof(dat.progress);

            std::memcpy(&data[idx], &dat.fuel_level, sizeof(dat.fuel_level));
            idx += sizeof(dat.fuel_level);

            std::memcpy(&data[idx], &dat.fuel_conf, sizeof(dat.fuel_conf));
            idx += sizeof(dat.fuel_conf);
          }

          war("%s", Utils::String::toHex(data).c_str());
          debug("%f, %f, %d, %d, %d, %d, %d, %d",
                    dat.lat,
                    dat.lon,
                    dat.depth,
                    dat.yaw,
                    dat.alt,
                    dat.progress,
                    dat.fuel_level,
                    dat.fuel_conf);
          sendReport(data);
          m_timer.reset();
        }
      }
    };
  }
}

DUNE_TASK
