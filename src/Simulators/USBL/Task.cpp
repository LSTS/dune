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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace USBL
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
      //! USBL latitude coordinate
      double usbl_lat;
      //! USBL longitude coordinate
      double usbl_lon;
      //! Heading angle of the USBL mount
      double usbl_heading;
      //! Depth of the USBL transducer
      double usbl_depth;
      //! USBL Slant range accuracy
      double usbl_slant_acc;
      //! USBL Bearing Resolution
      double usbl_bearing_res;
      //! Transmission delay
      double trans_delay;
    };

    //! Struct for the field value in DeviceData Binary message
    struct USBLMessage
    {
      //! range in meters
      double range;
      //! bearing in radians
      double bearing;
      //! elevation in radians
      double elevation;
    };

    struct Task: public Tasks::Periodic
    {
      //! Entity state message.
      IMC::EntityState m_ent;
      //! Current position.
      IMC::SimulatedState m_sstate;
      //! A device binary message for now
      IMC::DevDataBinary m_dev;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! North offset of the USBL acoustic transducer
      double m_usbl_off_n;
      //! East offset of the USBL acoustic transducer
      double m_usbl_off_e;
      //! Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL)
      {
        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default)
        .description("Type of the random generator");

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1")
        .description("Seed number for the generator");

        param("Latitude", m_args.usbl_lat)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Latitude coordinate of the USBL transducer location");

        param("Longitude", m_args.usbl_lon)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Longitude coordinate of the USBL transducer location");

        param("Mounted Heading", m_args.usbl_heading)
        .defaultValue("0.0")
        .units(Units::Degree)
        .description("Heading angle at which the transducer was mounted");

        param("Mounted Depth", m_args.usbl_depth)
        .defaultValue("2.0")
        .units(Units::Meter)
        .description("Depth at which the transducer was mounted");

        param("Slant Range Accuracy", m_args.usbl_slant_acc)
        .defaultValue("0.01")
        .units(Units::Meter)
        .description("Sensor's slant range accuracy");

        param("Bearing Resolution", m_args.usbl_bearing_res)
        .defaultValue("0.1")
        .units(Units::Degree)
        .description("Sensor's bearing resolution");

        param("Transmission Delay", m_args.trans_delay)
        .defaultValue("0.5")
        .units(Units::Second)
        .description("Delay of the transmission");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);

        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.usbl_lat))
          m_args.usbl_lat = Angles::radians(m_args.usbl_lat);

        if (paramChanged(m_args.usbl_lon))
          m_args.usbl_lon = Angles::radians(m_args.usbl_lon);

        if (paramChanged(m_args.usbl_heading))
          m_args.usbl_heading = Angles::normalizeRadian(Angles::radians(m_args.usbl_heading));

        if (paramChanged(m_args.usbl_bearing_res))
          m_args.usbl_bearing_res = Angles::radians(m_args.usbl_bearing_res);

        if (1 / getFrequency() <= m_args.trans_delay)
        {
          std::string msg = "Transmission delay must be shorter than task's period";
          err("%s", msg.c_str());
          throw std::runtime_error(msg);
        }
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

        WGS84::displacement(msg->lat, msg->lon, 0,
                            m_args.usbl_lat, m_args.usbl_lon, 0,
                            &m_usbl_off_n, &m_usbl_off_e);

        trace("offsets to navigational reference | %0.2f %0.2f", m_usbl_off_n, m_usbl_off_e);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        m_sstate = *msg;

        if ((msg->getTimeStamp() - m_dev.getTimeStamp() > m_args.trans_delay) &&
            !m_dev.value.empty())
        {
          USBLMessage temp;
          std::memcpy((void*)&temp, (const void*)&m_dev.value[0], sizeof(temp));

          spew("Range: %.2f m", temp.range);
          spew("Bearing: %.2f deg", Angles::degrees(temp.bearing));
          spew("Elevation: %.2f deg", Angles::degrees(temp.elevation));
          spew("Delay: %.2f sec", msg->getTimeStamp() - m_dev.getTimeStamp());

          dispatch(m_dev, DF_KEEP_TIME);

          m_dev.value.clear();
        }
      }

      void
      task(void)
      {
        if (m_ent.state != IMC::EntityState::ESTA_NORMAL)
          return;  // Home ref not setup

        USBLMessage msg;
        getSensorData(&msg);

        // fill in message fields but clear it first
        m_dev.clear();

        uint8_t* ptr = (uint8_t*)&msg;
        m_dev.value = std::vector<char>(ptr, ptr + sizeof(msg) / sizeof(uint8_t));
        m_dev.setTimeStamp();
      }

      //! Compute simulated sensor data using data from manufacturer
      void
      getSensorData(USBLMessage* msg) const
      {
        double real_bearing, real_range_2d;
        // this is the absolute bearing
        getRealBearingAndRange(&real_bearing, &real_range_2d);
        // to turn it into the relative bearing
        real_bearing = Angles::normalizeRadian(m_args.usbl_heading - real_bearing);

        // Adding noise to bearing
        msg->bearing = Angles::normalizeRadian(real_bearing + m_prng->gaussian() * m_args.usbl_bearing_res);

        // Computing elevation angle
        msg->elevation = std::atan2(m_sstate.z - m_args.usbl_depth, real_range_2d);
        // Adding noise using the same stdev as bearing's
        msg->elevation = Angles::normalizeRadian(msg->elevation + m_prng->gaussian() * m_args.usbl_bearing_res);

        // actual range in 3d
        msg->range = norm(real_range_2d, m_sstate.z - m_args.usbl_depth);
        // Adding noise
        msg->range += m_prng->gaussian() * m_args.usbl_slant_acc / 2;
      }

      //! Compute actual bearing angle and range from USBL transducer to vehicle
      void
      getRealBearingAndRange(double* bearing, double* range) const
      {
        double diff_e = m_sstate.y - m_usbl_off_e;
        double diff_n = m_sstate.x - m_usbl_off_n;

        // Special case
        if (diff_n == 0.0)
          *bearing = -m_args.usbl_heading;
        else
          *bearing = std::atan2(diff_e, diff_n);

        *range = std::sqrt( diff_e * diff_e + diff_n * diff_n );
      }
    };
  }
}

DUNE_TASK
