//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Local Headers.
#include "DeviceInput.hpp"

namespace Navigation
{
  namespace General
  {
    //! Navigation based on GNSS with Euler Angles,
    //! Angular Velocity, Ground Velocity, Depth and Altitude integration.
    //!
    //! @author Bernardo Gabriel
    namespace GNSS
    {
      using DUNE_NAMESPACES;

      //! Maximum number of input sources.
      constexpr uint8_t c_max_input_sources = 5;
      //! Required Ground Velocity validity flags.
      constexpr uint8_t c_gv_validity_flags = IMC::GroundVelocity::VAL_VEL_X |
                                              IMC::GroundVelocity::VAL_VEL_Y |
                                              IMC::GroundVelocity::VAL_VEL_Z;

      struct Arguments
      {
        //! Convert height to geoid height (MSL)
        bool convert_msl;
        //! Reference change distance
        double ref_distance;
        //! Device input timeout in seconds.
        float inp_tout;
        //! GNSS sources entity labels.
        std::vector<std::string> gnss_elabels;
        //! Euler Angles sources entity labels.
        std::vector<std::string> euler_elabels;
        //! Angular Velocity source entity label.
        std::string ang_vel_elabel;
        //! Ground Velocity source entity label.
        std::string gv_elabel;
        //! Depth source entity label.
        std::string depth_elabel;
        //! Altitude source entity label.
        std::string alt_elabel;
        //! Require course over ground (COG) and speed over ground (SOG) for a GpsFix to be valid.
        bool require_cog_sog;
        //! Maximum acceptable HDOP for a GpsFix.
        fp32_t max_hdop;
        //! Maximum acceptable VDOP for a GpsFix.
        // fp32_t max_vdop;
        //! Maximum acceptable HACC for a GpsFix.
        fp32_t max_hacc;
        //! Maximum acceptable VACC for a GpsFix.
        // fp32_t max_vacc;
        //! Estimate Course over Ground and Speed over Ground.
        bool estimate_cog_sog;
        //! VX and VY estimator moving average window size.
        unsigned ma_window_size;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Estimated state.
        IMC::EstimatedState m_estate;
        //! GPS fix rejection.
        IMC::GpsFixRejection m_rej;
        //! World Magnetic Model for geoid height conversion.
        Coordinates::WMM m_wmm;
        //! Reference change distance.
        double m_ref_distance;
        //! Last valid latitude.
        double m_last_lat;
        //! Last valid longitude.
        double m_last_lon;
        //! Delta for GNSS input timeouts.
        Delta m_delta;
        //! GNSS inputs, indexed by source entity id.
        std::map<uint8_t, GNSSInput*> m_gnss_inputs;
        //! GNSS inputs entity id, indexed by source priority.
        std::vector<uint8_t> m_gnss_sources;
        //! Current GNSS valid data source.
        size_t m_gnss_source;
        //! GNSS input.
        GNSSInput* m_gnss_input;
        //! GNSS source is valid.
        bool m_gnss_valid;
        //! Euler Angles input.
        std::map<uint8_t, EulerAnglesInput*> m_euler_inputs;
        //! Euler Angles inputs entity id, indexed by source priority.
        std::vector<uint8_t> m_euler_sources;
        //! Current Euler Angles valid data source.
        size_t m_euler_source;
        //! Euler Angles input.
        EulerAnglesInput* m_euler_input;
        //! Euler Angles source is valid.
        bool m_euler_valid;
        //! Angular Velocity input.
        AngularVelocityInput* m_ang_vel_input;
        //! Angular Velocity source is valid.
        bool m_ang_vel_valid;
        //! Ground Velocity input.
        GroundVelocityInput* m_gv_input;
        //! Ground Velocity source is valid.
        bool m_gv_valid;
        //! Depth input.
        DepthInput* m_depth_input;
        //! Depth source is valid.
        bool m_depth_valid;
        //! Altitude input.
        AltitudeInput* m_alt_input;
        //! Altitude source is valid.
        bool m_alt_valid;
        //! Origin is set.
        bool m_origin_set;
        //! Task arguments.
        Arguments m_args;
        //! VX estimator moving average.
        MovingAverage<double>* m_vx_ma;
        //! VY estimator moving average.
        MovingAverage<double>* m_vy_ma;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_wmm(ctx.dir_cfg),
          m_gnss_source(0),
          m_gnss_input(nullptr),
          m_gnss_valid(false),
          m_euler_source(0),
          m_euler_input(nullptr),
          m_euler_valid(false),
          m_ang_vel_input(nullptr),
          m_ang_vel_valid(false),
          m_gv_input(nullptr),
          m_gv_valid(false),
          m_depth_input(nullptr),
          m_depth_valid(false),
          m_alt_input(nullptr),
          m_alt_valid(false),
          m_origin_set(false),
          m_vx_ma(nullptr),
          m_vy_ma(nullptr)
        {
          param("Convert Height to Geoid Height", m_args.convert_msl)
          .editable(false)
          .defaultValue("false")
          .description("Convert WGS84 height to geoid height (mean sea level) height");

          param("Reference Change Distance", m_args.ref_distance)
          .units(Units::Kilometer)
          .minimumValue("0.0")
          .defaultValue("20.0")
          .description("Distance needed for reference change (in kilometers).");

          param("Device Input Timeout", m_args.inp_tout)
          .units(Units::Second)
          .minimumValue("0.0")
          .defaultValue("5.0")
          .editable(false)
          .description("Device input timeout in seconds.");

          param("GNSS Source Entity Labels", m_args.gnss_elabels)
          .editable(false)
          .minimumSize(1)
          .maximumSize(c_max_input_sources)
          .description("Comma-seperated Entity labels of the sources of GNSS data, ordered by priority. "
                       "If an empty label is provided, it will result in a configuration error "
                       "and the task will be restarted.");

          param("Euler Angles Source Entity Labels", m_args.euler_elabels)
          .editable(false)
          .maximumSize(c_max_input_sources)
          .description("Comma-seperated Entity labels of the sources of Euler Angles data, ordered by priority. "
                       "If an empty label is provided, it will result in a configuration error "
                       "and the task will be restarted.");

          param("Angular Velocity Source Entity Label", m_args.ang_vel_elabel)
          .editable(false)
          .description("Entity label of the source of Angular Velocity data. "
                       "If an empty label is provided, Angular Velocity data will not be used.");

          param("Ground Velocity Source Entity Label", m_args.gv_elabel)
          .editable(false)
          .description("Entity label of the source of Ground Velocity data. "
                       "If an empty label is provided, Ground Velocity data will not be used.");

          param("Depth Source Entity Label", m_args.depth_elabel)
          .editable(false)
          .description("Entity label of the source of Depth data. "
                       "If an empty label is provided, Depth data will not be used.");

          param("Altitude Source Entity Label", m_args.alt_elabel)
          .editable(false)
          .description("Entity label of the source of Altitude data. "
                       "If an empty label is provided, Altitude data will not be used.");

          param("Require COG and SOG from GNSS", m_args.require_cog_sog)
          .defaultValue("false")
          .description("Require course over ground (COG) and speed over ground (SOG) for a GpsFix to be valid.");

          param("Maximum HDOP", m_args.max_hdop)
          .minimumValue("0.0")
          .defaultValue("0.0")
          .description("Maximum acceptable Horizontal Dilution of Precision (HDOP) for a GpsFix. Set to 0 to disable.");

          // param("Maximum VDOP", m_args.max_vdop)
          // .minimumValue("0.0")
          // .defaultValue("0.0")
          // .description("Maximum acceptable Vertical Dilution of Precision (VDOP) for a GpsFix. Set to 0 to disable.");

          param("Maximum HACC", m_args.max_hacc)
          .units(Units::Meter)
          .minimumValue("0.0")
          .defaultValue("0.0")
          .description("Maximum acceptable Horizontal Accuracy (HACC) for a GpsFix. Set to 0 to disable.");

          // param("Maximum VACC", m_args.max_vacc)
          // .units(Units::Meter)
          // .minimumValue("0.0")
          // .defaultValue("0.0")
          // .description("Maximum acceptable Vertical Accuracy (VACC) for a GpsFix. Set to 0 to disable.");

          param("Estimate COG and SOG", m_args.estimate_cog_sog)
          .editable(false)
          .defaultValue("false")
          .description("Estimate course over ground (COG) and speed over ground (SOG). "
                       "Using the difference in position and time between consecutive valid GNSS fixes. "
                       "If set to true, COG and SOG from GNSS input will be discarded. "
                       "Ground Velocity input will be prioritized over estimated COG and SOG if available and valid.");

          param("COG and SOG Estimator Window Size", m_args.ma_window_size)
          .minimumValue("1")
          .defaultValue("5")
          .description("Window size for the moving average of COG and SOG estimates.");

          bind<IMC::EulerAngles>(this);
          bind<IMC::GpsFix>(this);
        }

        ~Task(void)
        {
          for (auto& gnss : m_gnss_inputs)
            Memory::clear(gnss.second);

          for (auto& euler : m_euler_inputs)
            Memory::clear(euler.second);

          Memory::clear(m_ang_vel_input);
          Memory::clear(m_gv_input);
          Memory::clear(m_depth_input);
          Memory::clear(m_alt_input);
          Memory::clear(m_vx_ma);
          Memory::clear(m_vy_ma);
        }

        void
        onUpdateParameters(void) override
        {
          if (paramChanged(m_args.ref_distance))
            m_ref_distance = m_args.ref_distance * 1000.0;

          if (paramChanged(m_args.ma_window_size))
          {
            Memory::clear(m_vx_ma);
            Memory::clear(m_vy_ma);
            m_vx_ma = new MovingAverage<double>(m_args.ma_window_size);
            m_vy_ma = new MovingAverage<double>(m_args.ma_window_size);
          }
        }

        void
        onEntityResolution(void) override
        {
          for (const auto& elabel : m_args.gnss_elabels)
          {
            if (elabel.empty())
              throw RestartNeeded("empty GNSS source entity label provided", 5);

            try
            {
              auto eid = resolveEntity(elabel);
              m_gnss_inputs[eid] = new GNSSInput(m_gnss_sources.size(), eid, m_args.inp_tout);
              m_gnss_sources.push_back(eid);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve GNSS source entity label: %s", e.what());
            }
          }

          for (const auto& elabel : m_args.euler_elabels)
          {
            if (elabel.empty())
              throw RestartNeeded("empty Euler Angles source entity label provided", 5);

            try
            {
              auto eid = resolveEntity(elabel);
              m_euler_inputs[eid] = new EulerAnglesInput(m_euler_sources.size(), eid, m_args.inp_tout);
              m_euler_sources.push_back(eid);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve Euler Angles source entity label: %s", e.what());
            }
          }

          if (!m_args.ang_vel_elabel.empty())
          {
            try
            {
              auto eid = resolveEntity(m_args.ang_vel_elabel);
              m_ang_vel_input = new AngularVelocityInput(0, eid, m_args.inp_tout);
              bind<IMC::AngularVelocity>(this);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve Angular Velocity source entity label: %s", e.what());
            }
          }
          else
            inf("no Angular Velocity source entity label provided");

          if (!m_args.gv_elabel.empty())
          {
            try
            {
              auto eid = resolveEntity(m_args.gv_elabel);
              m_gv_input = new GroundVelocityInput(0, eid, m_args.inp_tout);
              bind<IMC::GroundVelocity>(this);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve Ground Velocity source entity label: %s", e.what());
            }
          }
          else
            inf("no Ground Velocity source entity label provided");

          if (!m_args.depth_elabel.empty())
          {
            try
            {
              auto eid = resolveEntity(m_args.depth_elabel);
              m_depth_input = new DepthInput(0, eid, m_args.inp_tout);
              bind<IMC::Depth>(this);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve Depth source entity label: %s", e.what());
            }
          }
          else
            inf("no Depth source entity label provided");

          if (!m_args.alt_elabel.empty())
          {
            try
            {
              auto eid = resolveEntity(m_args.alt_elabel);
              m_alt_input = new AltitudeInput(0, eid, m_args.inp_tout);
              bind<IMC::Distance>(this);
            }
            catch (const Entities::EntityDataBase::NonexistentLabel& e)
            {
              inf("unable to resolve Altitude source entity label: %s", e.what());
            }
          }
          else
            inf("no Altitude source entity label provided");
        }

        void
        onResourceInitialization(void) override
        {
          m_estate.clear();
          m_estate.alt = -1.0;
          m_estate.depth = -1.0;

          if (m_gnss_sources.empty())
          {
            err("no GNSS source entity labels were resolved");
            setEntityState(IMC::EntityState::ESTA_ERROR, "no GNSS source entity labels were resolved");
            requestDeactivation();
            return;
          }

          m_gnss_source = 0;
          m_gnss_valid = false;
          m_euler_source = 0;
          m_euler_valid = false;
          m_ang_vel_valid = false;
          m_gv_valid = false;
          m_depth_valid = false;
          m_alt_valid = false;
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (m_ang_vel_input == nullptr)
            return;

          if (msg->getSourceEntity() != m_ang_vel_input->getEntityId())
            return;

          m_ang_vel_input->set(msg->x, msg->y, msg->z);
          m_ang_vel_valid = true;
        }

        void
        consume(const IMC::GroundVelocity* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (m_gv_input == nullptr)
            return;

          if (msg->getSourceEntity() != m_gv_input->getEntityId())
            return;

          if ((msg->validity & c_gv_validity_flags) != c_gv_validity_flags)
            return;

          m_gv_input->set(msg->x, msg->y, msg->z);
          m_gv_valid = true;
        }

        void
        consume(const IMC::Depth* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (m_depth_input == nullptr)
            return;

          if (msg->getSourceEntity() != m_depth_input->getEntityId())
            return;

          m_depth_input->set(msg->value);
          m_depth_valid = true;
        }

        void
        consume(const IMC::Distance* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (m_alt_input == nullptr)
            return;

          if (msg->getSourceEntity() != m_alt_input->getEntityId())
            return;

          m_alt_input->set(msg->value);
          m_alt_valid = true;
        }

        void
        updateEulerAnglesInput(const IMC::EulerAngles* msg)
        {
          auto eid = msg->getSourceEntity();
          auto input = m_euler_inputs.find(eid);
          if (input == m_euler_inputs.end())
            return;

          input->second->set(msg->phi, msg->theta, msg->psi);

          auto priority = input->second->getPriority();
          if (!m_euler_valid)
          {
            m_euler_source = priority;
            m_euler_valid = true;
            m_euler_input = input->second;
          }
          else if (priority < m_euler_source)
          {
            m_euler_source = priority;
            m_euler_input = input->second;
          }
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          updateEulerAnglesInput(msg);
        }

        bool
        rejectGpsFix(const IMC::GpsFix* msg)
        {
          m_rej.utc_time = msg->utc_time;
          m_rej.setTimeStamp(msg->getTimeStamp());

          if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          {
            debug("rejecting GpsFix: no valid position");
            m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
            m_rej.setDestinationEntity(msg->getSourceEntity());
            dispatch(m_rej, DF_KEEP_TIME);
            return true;
          }

          if (m_args.require_cog_sog)
          {
            if ((msg->validity & IMC::GpsFix::GFV_VALID_COG) == 0)
            {
              debug("rejecting GpsFix: no valid course over ground");
              m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }

            if ((msg->validity & IMC::GpsFix::GFV_VALID_SOG) == 0)
            {
              debug("rejecting GpsFix: no valid speed over ground");
              m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }
          }

          if (m_args.max_hdop > 0.0f)
          {
            if ((msg->validity & IMC::GpsFix::GFV_VALID_HDOP) == 0)
            {
              debug("rejecting GpsFix: no Horizontal Dilution of Precision");
              m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }
            
            if (msg->hdop > m_args.max_hdop)
            {
              debug("rejecting GpsFix: HDOP above maximum: %.2f > %.2f", msg->hdop, m_args.max_hdop);
              m_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_HDOP;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }
          }

          // if (m_args.max_vdop > 0.0f)
          // {
          //   if ((msg->validity & IMC::GpsFix::GFV_VALID_VDOP) == 0)
          //   {
          //     debug("rejecting GpsFix: no Vertical Dilution of Precision");
          //     m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
          //     m_rej.setDestinationEntity(msg->getSourceEntity());
          //     dispatch(m_rej, DF_KEEP_TIME);
          //     return true;
          //   }

          //   if (msg->vdop > m_args.max_vdop)
          //   {
          //     debug("rejecting GpsFix: VDOP above maximum: %.2f > %.2f", msg->vdop, m_args.max_vdop);
          //     m_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_VDOP;
          //     m_rej.setDestinationEntity(msg->getSourceEntity());
          //     dispatch(m_rej, DF_KEEP_TIME);
          //     return true;
          //   }
          // }

          if (m_args.max_hacc > 0.0f)
          {
            if ((msg->validity & IMC::GpsFix::GFV_VALID_HACC) == 0)
            {
              debug("rejecting GpsFix: no Horizontal Accuracy");
              m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }

            if (msg->hacc > m_args.max_hacc)
            {
              debug("rejecting GpsFix: HACC above maximum: %.2f > %.2f", msg->hacc, m_args.max_hacc);
              m_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_HACC;
              m_rej.setDestinationEntity(msg->getSourceEntity());
              dispatch(m_rej, DF_KEEP_TIME);
              return true;
            }
          }

          // if (m_args.max_vacc > 0.0f)
          // {
          //   if ((msg->validity & IMC::GpsFix::GFV_VALID_VACC) == 0)
          //   {
          //     debug("rejecting GpsFix: no Vertical Accuracy");
          //     m_rej.reason = IMC::GpsFixRejection::RR_INVALID;
          //     m_rej.setDestinationEntity(msg->getSourceEntity());
          //     dispatch(m_rej, DF_KEEP_TIME);
          //     return true;
          //   }

          //   if (msg->vacc > m_args.max_vacc)
          //   {
          //     debug("rejecting GpsFix: VACC above maximum: %.2f > %.2f", msg->vacc, m_args.max_vacc);
          //     m_rej.reason = IMC::GpsFixRejection::RR_ABOVE_MAX_VACC;
          //     m_rej.setDestinationEntity(msg->getSourceEntity());
          //     dispatch(m_rej, DF_KEEP_TIME);
          //     return true;
          //   }
          // }

          return false;
        }

        void
        updateGNSSInput(const IMC::GpsFix* msg)
        {
          auto eid = msg->getSourceEntity();
          auto input = m_gnss_inputs.find(eid);
          if (input == m_gnss_inputs.end())
            return;

          if (rejectGpsFix(msg))
            return;

          double offset = 0.0;
          if (m_args.convert_msl)
            offset = m_wmm.height(msg->lat, msg->lon);

          fp64_t lat = msg->lat;
          fp64_t lon = msg->lon;
          fp32_t height = msg->height - offset;
          fp32_t cog = msg->cog;
          fp32_t sog = msg->sog;

          if (m_args.estimate_cog_sog)
            input->second->set(lat, lon, height, cog, sog);
          else
            input->second->set(lat, lon, height);
          
          auto priority = input->second->getPriority();
          if (!m_gnss_valid)
          {
            m_gnss_source = priority;
            m_gnss_input = input->second;
            m_gnss_valid = true;
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          else if (priority < m_gnss_source)
          {
            m_gnss_source = priority;
            m_gnss_input = input->second;
          }

          if (m_gnss_source == priority)
            sendFix();
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          updateGNSSInput(msg);
        }

        void
        checkInputTimeouts(void)
        {
          if (m_gnss_valid)
          {
            for (const auto& gnss : m_gnss_sources)
            {
              auto& input = m_gnss_inputs.at(gnss);
              if (m_gnss_valid && !input->valid())
              {
                m_gnss_valid = false;
                m_gnss_input = nullptr;
              }
              else if (!m_gnss_valid && input->valid())
              {
                m_gnss_source = input->getPriority();
                m_gnss_valid = true;
                m_gnss_input = input;
              }
            }

            if (!m_gnss_valid)
            {
              err("no valid GNSS source");
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_WAIT_GPS_FIX);
            }
          }

          if (m_euler_valid)
          {
            for (const auto& euler : m_euler_sources)
            {
              auto& input = m_euler_inputs.at(euler);
              if (m_euler_valid && !input->valid())
              {
                m_euler_valid = false;
                m_euler_input = nullptr;
              }
              else if (!m_euler_valid && input->valid())
              {
                m_euler_source = input->getPriority();
                m_euler_valid = true;
                m_euler_input = input;
              }
            }

            if (!m_euler_valid)
              err("no valid EulerAngles source");
          }

          if (m_ang_vel_input != nullptr && m_ang_vel_valid && !m_ang_vel_input->valid())
          {
            m_ang_vel_valid = false;
            inf("Angular Velocity input timeout expired");
          }

          if (m_gv_input != nullptr && m_gv_valid && !m_gv_input->valid())
          {
            m_gv_valid = false;
            inf("Ground Velocity input timeout expired");
          }

          if (m_depth_input != nullptr && m_depth_valid && !m_depth_input->valid())
          {
            m_depth_valid = false;
            inf("Depth input timeout expired");
          }

          if (m_alt_input != nullptr && m_alt_valid && !m_alt_input->valid())
          {
            m_alt_valid = false;
            inf("Altitude input timeout expired");
          }
        }

        GNSSInput*
        getGNSS(void)
        {
          if (!m_gnss_valid || m_gnss_source >= m_gnss_sources.size())
            return nullptr;

          const auto& key = m_gnss_sources[m_gnss_source];
          auto it = m_gnss_inputs.find(key);
          return (it != m_gnss_inputs.end()) ? it->second : nullptr;
        }

        EulerAnglesInput*
        getEulerAngles(void)
        {
          if (!m_euler_valid || m_euler_source >= m_euler_sources.size())
            return nullptr;

          const auto& key = m_euler_sources[m_euler_source];
          auto it = m_euler_inputs.find(key);
          return (it != m_euler_inputs.end()) ? it->second : nullptr;
        }

        void
        sendFix(void)
        {
          if (m_gnss_input == nullptr)
            return;

          fp64_t lat, lon;
          fp32_t height, cog, sog;
          if (!m_gnss_input->get(lat, lon, height, cog, sog))
            return;

          auto delta = m_delta.getDelta();

          if (delta > 0.0 && m_args.estimate_cog_sog)
          {
            double bearing, range;
            WGS84::getNEBearingAndRange(m_last_lat, m_last_lon,
                                        lat, lon,
                                        &bearing, &range);
            
            cog = static_cast<fp32_t>(bearing);
            sog = static_cast<fp32_t>(range / delta);
          }

          double distance = WGS84::distance(m_estate.lat, m_estate.lon, 0.0,
                                            lat, lon, 0.0);

          if (!m_origin_set || distance > m_ref_distance)
          {
            m_origin_set = true;
            m_estate.lat = lat;
            m_estate.lon = lon;
            m_estate.height = height;
            m_estate.x = 0.0f;
            m_estate.y = 0.0f;
            m_estate.z = 0.0f;
          }
          else
            WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height,
                                lat, lon, height,
                                &m_estate.x, &m_estate.y, &m_estate.z);

          m_last_lat = lat;
          m_last_lon = lon;

          bool has_euler = false;
          if (m_euler_input == nullptr)
          {
            m_estate.phi = 0.0f;
            m_estate.theta = 0.0f;
            m_estate.psi = 0.0f;
          }
          else if (m_euler_input->get(m_estate.phi, m_estate.theta, m_estate.psi))
            has_euler = true;

          if (m_ang_vel_input == nullptr)
          {
            m_estate.p = 0.0f;
            m_estate.q = 0.0f;
            m_estate.r = 0.0f;
          }
          else
            m_ang_vel_input->get(m_estate.p, m_estate.q, m_estate.r);

          bool has_gv = (m_gv_input != nullptr) &&
                        m_gv_input->get(m_estate.u, m_estate.v, m_estate.w);

          if (!has_gv)
          {
            m_estate.vx = m_vx_ma->update(std::cos(cog) * sog);
            m_estate.vy = m_vy_ma->update(std::sin(cog) * sog);
            m_estate.vz = 0.0f;

            if (has_euler)
            {
              BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                          m_estate.vx, m_estate.vy, m_estate.vz,
                                          &m_estate.u, &m_estate.v, &m_estate.w);
            }
          }
          else if (has_euler)
          {
            BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                            m_estate.u, m_estate.v, m_estate.w,
                                            &m_estate.vx, &m_estate.vy, &m_estate.vz);
          }
          else
          {
            m_estate.u = 0.0f;
            m_estate.v = 0.0f;
            m_estate.w = 0.0f;
            m_estate.vx = 0.0f;
            m_estate.vy = 0.0f;
            m_estate.vz = 0.0f;
          }

          if (m_depth_input == nullptr)
            m_estate.depth = -1.0f;
          else
            m_depth_input->get(m_estate.depth);

          if (m_alt_input == nullptr)
            m_estate.alt = -1.0f;
          else
            m_alt_input->get(m_estate.alt);

          dispatch(m_estate);
        }

        void
        task(void)
        {
          checkInputTimeouts();
        }
      };
    }
  }
}

DUNE_TASK
