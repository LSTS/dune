//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "GpsState.hpp"

namespace Navigation
{
  namespace General
  {
    //! Navigation Manager.
    //!
    //! @author Alberto Dallolio
    namespace NavManager
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Euler Angles source entity label.
        std::string euler_label;
        //! Angular Velocity source entity label.
        std::string ang_label;
        //! Convert height to geoid height (MSL)
        bool convert_msl;
        //! Main unit.
        std::string main_unit;
        //! Secondary unit.
        std::string secondary_unit;
        //! Third unit.
        std::string third_unit;
        //! Number of seconds without data before reporting an error.
        double inp_tout;
        //! Reference change distance
        double ref_distance;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Height offset.
        float m_offset;
        //! Offset flag.
        bool m_offset_flag;
        //! Euler Angles entity eid.
        unsigned int m_euler_eid;
        //! Angular velocity entity eid.
        unsigned int m_ang_eid;
        //! Transmission request id
        int m_reqid;
        //! Estimated state.
        IMC::EstimatedState m_estate;
        //! Origin reference.
        IMC::GpsFix* m_origin;
        //! GPS fix rejection.
        IMC::GpsFixRejection m_rej;
        //! Gps State for main unit.
        GpsState m_main;
        //! Gps State for secondary unit.
        GpsState m_second;
        //! Gps State for third unit.
        GpsState m_third;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_reqid(0),
          m_origin(nullptr)
        {
          // Define configuration parameters.
          param("Entity Label - Euler Angles", m_args.euler_label)
            .description("Entity label of 'GpsFix' and 'GroundVelocity' messages");

          param("Entity Label - Angular Velocity", m_args.ang_label)
            .description("Entity label of 'EulerAngles' and 'AngularVelocity' messages");

          param("Main unit", m_args.main_unit)
            .description("Name of preferred GPS navigation unit.");

          param("Secondary unit", m_args.secondary_unit)
            .description("Name of secondary preferred GPS navigation unit.");

          param("Third unit", m_args.third_unit)
            .description("Name of third preferred GPS navigation unit.");

          param("Convert Height to Geoid Height", m_args.convert_msl)
            .defaultValue("false")
            .description("Convert WGS84 height to geoid height (mean sea level) height");

          param("Input timeout", m_args.inp_tout)
            .units(Units::Second)
            .defaultValue("30.0")
            .minimumValue("0.0")
            .description("Input timeout before error is thrown.");

          param("Reference Change Distance", m_args.ref_distance)
            .units(Units::Meter)
            .defaultValue("20000.0")
            .description("Distance needed for reference change.");

          m_estate.clear();
          m_offset = 0.0f;
          m_offset_flag = false;

          // Register callbacks
          bind<IMC::AngularVelocity>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::GpsFix>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (!m_args.convert_msl)
          {
            m_offset = 0.0f;
            m_offset_flag = false;
          }
        }

        void
        onEntityResolution(void)
        {
          m_euler_eid = getEid(m_args.euler_label);
          m_ang_eid = getEid(m_args.ang_label);

          // Gps entities
          m_main.id = getEid(m_args.main_unit);
          m_second.id = getEid(m_args.secondary_unit);
          m_third.id = getEid(m_args.third_unit);
        }

        //! Get entity id of label
        //! Returns UINT16_MAX in case of missing label
        unsigned int
        getEid(const std::string& label)
        {
          if (label.empty())
          {
            war("Ignoring empty entity label");
            return UINT16_MAX;
          }

          unsigned int id = UINT16_MAX;
          try
          {
            id = resolveEntity(label);
          }
          catch (const std::exception& e)
          {
            err(DTR("can not resolve %s (%s), is there a task failure or a configuration error?"),
                label.c_str(), e.what());
          }

          return id;
        }

        void
        onResourceAcquisition(void)
        {
          // Navigation enters error mode without valid GPS data.
          m_main.setTop(m_args.inp_tout);
          m_second.setTop(m_args.inp_tout);
          m_third.setTop(m_args.inp_tout);

          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_ang_eid)
            return;

          m_estate.p = msg->x;
          m_estate.q = msg->y;
          m_estate.r = msg->z;
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_euler_eid)
            return;

          // debug("IMC::EulerAngles from %s",resolveEntity(msg->getSourceEntity()).c_str());
          m_estate.phi = msg->phi;
          m_estate.theta = msg->theta;
          m_estate.psi = msg->psi;
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          spew("GPS FIX FROM: %u", msg->getSourceEntity());
          if (msg->getSourceEntity() == m_main.id)
          {
            updateGpsState(m_main, msg);
            if (!m_main.isInvalid())
              sendFix(msg);
          }
          else if (msg->getSourceEntity() == m_second.id)
          {
            updateGpsState(m_second, msg);
            if (m_main.isInvalid() && !m_second.isInvalid())
              sendFix(msg);
          }
          else if (msg->getSourceEntity() == m_third.id)
          {
            updateGpsState(m_third, msg);
            if (m_main.isInvalid() && m_second.isInvalid() && !m_third.isInvalid())
              sendFix(msg);
          }
        }

        //! Update Gps State with GpsFix message
        //! @param gps GpsState object to update
        //! @param msg GpsFix message
        void
        updateGpsState(GpsState& gps, const IMC::GpsFix* msg)
        {
          gps.reset();

          if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          {
            debug("Got INVALID fix");

            gps.setValid(false);

            // Dispatch Rejection to Invalid source Entity
            m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
            m_rej.setDestinationEntity(msg->getSourceEntity());
            dispatch(m_rej);

            return;
          }

          trace("Got VALID fix");
          gps.setValid(true);
        }

        void
        sendFix(const IMC::GpsFix* msg)
        {
          if (!originIsSet())
            setOrigin(msg);

          if (originIsFar(msg))
            setOrigin(msg);

          // Received valid GPS data.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Dispatch IMC::GpsFix with this task source id.
          IMC::GpsFix nav = *msg;
          nav.setSourceEntity(getEntityId());
          dispatch(nav);

          // Fill out IMC::EstimatedState as well.
          m_estate.lat = m_origin->lat;
          m_estate.lon = m_origin->lon;
          m_estate.height = m_origin->height;

          if (m_args.convert_msl && !m_offset_flag)
          {
            m_offset_flag = true;
            Coordinates::WMM wmm(m_ctx.dir_cfg);
            m_offset = wmm.height(msg->lat, msg->lon);
          }

          WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height, msg->lat, msg->lon,
                              msg->height - m_offset, &m_estate.x, &m_estate.y, &m_estate.z);

          // Decompose velocity vector.
          m_estate.vx = std::cos(msg->cog) * msg->sog;
          m_estate.vy = std::sin(msg->cog) * msg->sog;
          // m_estate.u = msg->sog;
          m_estate.u = m_estate.vx * std::cos(m_estate.psi) + m_estate.vy * std::sin(m_estate.psi);
          m_estate.v = -m_estate.vx * std::sin(m_estate.psi) + m_estate.vy * std::cos(m_estate.psi);
          dispatch(m_estate);
        }

        void
        sendIridium(const std::string& msg)
        {
          IMC::TransmissionRequest req;
          req.setDestination(m_ctx.resolver.id());
          req.data_mode = TransmissionRequest::DMODE_TEXT;
          req.txt_data = msg;
          req.deadline = Clock::getSinceEpoch() + 60;
          req.req_id = ++m_reqid;

          req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
          req.destination = "";
          inf("Sending via Iridium: '%s'", req.txt_data.c_str());
          dispatch(req);
        }

        bool
        originIsSet()
        {
          return m_origin != nullptr;
        }

        void
        setOrigin(const IMC::GpsFix* msg)
        {
          Memory::replace(m_origin, new IMC::GpsFix(*msg));
        }

        bool
        originIsFar(const IMC::GpsFix* msg)
        {
          double distance = WGS84::distance(m_origin->lat, m_origin->lon, m_origin->height,
                                            msg->lat, msg->lon, msg->height);

          return distance > m_args.ref_distance;
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);

            if (m_main.update())
              debug("Main Gps disappeared");

            if (m_second.update())
              debug("Secondary Gps disappeared");

            if (m_third.update())
              debug("Third Gps disappeared");

            // Raise ERROR MODE if all GPSs are out of service.
            if (m_main.isInvalid() && m_second.isInvalid() && m_third.isInvalid())
              setEntityState(IMC::EntityState::ESTA_ERROR, "All Gps sources are out of service.");
            else if (m_main.sendIridium())
            {
              debug("Main GPS not working!");

              // Send iridium message.
              sendIridium("Main GPS not working!");
              m_main.send_ir = true;
            }
            else if (m_second.sendIridium())
            {
              debug("Secondary GPS not working!");

              // Send iridium message.
              sendIridium("Secondary GPS not working!");
              m_second.send_ir = true;
            }
            else if (m_third.sendIridium())
            {
              debug("Third GPS not working!");

              // Send iridium message.
              sendIridium("Third GPS not working!");
              m_third.send_ir = true;
            }
          }
        }
      };
    }
  }
}

DUNE_TASK
