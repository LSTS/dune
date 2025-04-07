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
#include <vector>
#include <sstream>
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "sb_mpc.hpp"

namespace Control
{
  namespace Path
  {
    namespace CAS
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        // Range parameter for obstacle surveillance
        double out_of_range;

        // Simulation Parameters
        double T, DT, T_STAT, P, P_G, Q, D_CLOSE, D_SAFE, D_SAFE_LAND, K_COLL, 
        KAPPA, KAPPA_TC, PHI_AH, PHI_OT, PHI_HO, PHI_CR, K_P, K_DP,
        K_CHI, K_DCHI_SB, K_DCHI_P, K_CHI_SB, K_CHI_P, D_INIT;

        int GUIDANCE_STRATEGY;
        double WP_R, LOS_LA_DIST, LOS_KI;

        // Rudder angle plus/minus range.
        double COURSE_RANGE;
        // Granularity of angle change.
        double GRANULARITY;
        // Amount of time after which a disappeared obstacle is removed from the list.
        double kill_obst;

        //! Enable collision avoidance.
        bool en_cas;
        //! Enable anti-grounding.
        bool en_antiground;

        //! Safety radius around static threat.
        double radius_around_threat;
        //! Course offset for contours.
        std::vector<double> directions;
        //! Safety distance to static obstacle.
        double K_GROUND;
        //! Weights on environmental factors.
        std::vector<double> K_ENV;
        //! Navigation entity label in Simulation mode.
        std::string elabel_nav_sim;
        //! Navigation entity label in Hardware mode.
        std::string elabel_nav_hw;
        //! Wind entity label.
        std::string elabel_ws;
        //! Heave entity label.
        std::string elabel_gnss;
        //! EstimatedFreq entity label.
        std::string elabel_es;

        //! Amplitude limit.
        double ampl_lim;
        //! Correlation Limit.
        double corr_lim;
        //! Vehicle pitching rate limit.
        double pitch_rate;
        //! Vehicle rolling rate limit.
        double roll_rate;

        //! Vector field parameters for loiter
        //! Corridor width
        double corridor;
        //! Entry angle
        double entry_angle;
      };

      struct SingleCurrentCell
      {
        //! Latitude WGS-84.
        fp64_t lat;
        //! Longitude WGS-84.
        fp64_t lon;
        //! Cell Depth.
        fp64_t depth;
        //! Water Velocity.
        fp64_t vel;
        //! Direction.
        fp64_t dir;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! m_sb_mpc object.
        simulationBasedMpc *m_sb_mpc = NULL;
        //! List of asv states
        std::vector<double> m_asv_state = std::vector<double>(6,0.0);
        //! Desired heading message.
        IMC::DesiredHeading m_des_heading;
        //! Vector of obstacles
        std::vector<IMC::AisInfo> m_dyn_obst_vec;
        // Create matrix with past, current and next waypoint.
        Eigen::Matrix<double,3,2> m_waypoints;
        //Math::Matrix m_waypoints;
        //! Course offsets for contours.
        std::vector<double> m_offsets;
        //! Speed offset <Output from CAS>
        double m_u_os;
        //! Heading offset <Output from CAS>
        double m_psi_os;
        //! AutoNaut latitude
        double m_lat_asv;
        //! AutoNaut longitude
        double m_lon_asv;
        //! Obstacle latitude
        double m_lat_obst;
        //! Obstacle longitude
        double m_lon_obst;
        //! Timestamp - new (from Autonaut)
        double m_timestamp_new;
        //! Timestamp - old (from Autonaut)
        double m_timestamp_prev;
        //! Timestamp from obstacle
        double m_timestamp_obst;
        //! Timestamp for last update from obstacle.
        std::vector<double> m_last_update;
        //! Enable collision avoidance.
        bool m_enable_cas;
        //! Enable anti-grounding.
        bool m_enable_ag;
        //! True if ground is close.
        bool m_static_obst;
        //! Absolute wind direction and speed.
        double m_wind_dir, m_wind_speed;
        
        //! USV heave amplitude.
        double m_heave;
        //! Estimated wave encounter frequency.
        double m_wave_freq;
        //! Cost <Output from CAS>
        double m_cost;

        //! Vehicle Estimated State
        IMC::EstimatedState m_estate;

        //! Average factor.
        int m_avg;
        //! Navigation entity eid.
        int m_nav_eid;
        //! Wind entity eid.
        int m_ws_eid;
        //! Heave entity eid.
        int m_gnss_eid;
        //! Wave frequency entity eid.
        int m_es_eid;

        //! Cost function for grounding
        Math::Matrix m_static_obst_state; //Eigen::Matrix<double,-1,3>
        Math::Matrix m_dyn_obst_state; //Eigen::Matrix<double,-1,10> m_dyn_obst_state; //Math::Matrix m_dyn_obst_state;
        Math::Matrix m_dangers, m_depths;

        //! Average factor.
        int m_avg_zero, m_avg_one;
        //! Average last velocity value.
        double m_beam_velocity_zero_avg_last, m_beam_velocity_one_avg_last;
        //! Average velocity value.
        double m_beam_velocity_zero_avg, m_beam_velocity_one_avg;

        //! Information about the shallowest current cell.
        SingleCurrentCell m_shallowest_current_cell;

        //! Transmission request id.
        uint16_t m_tx_req_id;

        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx),
        m_u_os(0.0),
        m_psi_os(0.0),
        m_lat_asv(0.0),
        m_lon_asv(0.0),
        m_lat_obst(0.0),
        m_lon_obst(0.0),
        m_timestamp_new(0.0),
        m_timestamp_prev(0.0),
        m_timestamp_obst(0.0),
        m_enable_cas(false),
        m_enable_ag(false),
        m_static_obst(false),
        m_wind_dir(0.0),
        m_wind_speed(0.0),
        m_heave(0.0),
        m_wave_freq(0.0),
        m_cost(0.0),
        m_avg(0),
        m_tx_req_id(0)
        {
          param("Entity Label - Navigation simulation", m_args.elabel_nav_sim)
          .description("Entity label of 'GpsFix' message");

          param("Entity Label - Navigation hardware", m_args.elabel_nav_hw)
          .description("Entity label of 'GpsFix' message");

          param("Entity Label - Wind", m_args.elabel_ws)
          .description("Entity label of 'AbsoluteWind' message");
          
          param("Entity Label - Heave", m_args.elabel_gnss)
          .description("Entity label of 'Displacement' message");

          param("Entity Label - Wave Frequency", m_args.elabel_es)
          .description("Entity label of 'Frequency' message");

          param("Enable Collision Avoidance", m_args.en_cas)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("true")
          .description("Enable collision avoidance algorithm");

          param("Enable Anti Grounding", m_args.en_antiground)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("true")
          .description("Enable anti-grounding algorithm");
          
          param("Maximum Obstacle Surveillance Range", m_args.out_of_range)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("100000.0")
          .defaultValue("5000.0")
          .description("Limit for absolute value of obstacle surveillance range");

          param("Remove Disappeared Obstacles", m_args.kill_obst)
          .units(Units::Second)
          .minimumValue("1.0")
          .maximumValue("600.0")
          .defaultValue("60.0")
          .description("Amount of time after which a disappeared obstacle is removed from the list. [sec].");

          param("Prediction Horizon - Simulation Time", m_args.T)
          .units(Units::Second)
          .minimumValue("0.0")
          .maximumValue("6000.0")
          .defaultValue("600.0")
          .description("Simulation time - Prediction Horizon [sec].");

          param("Horizon Time Step", m_args.DT)
          .units(Units::Second)
          .minimumValue("0")
          .maximumValue("20")
          .defaultValue("1")
          .description("Simulation Time Step [sec].");

          param("Prediction Horizon Geog Constraints", m_args.T_STAT)
          .units(Units::Second)
          .minimumValue("0.0")
          .maximumValue("6000.0")
          .defaultValue("600.0")
          .description("Simulation time (prediction horizon) for static obstacles [sec].");

          param("Weight on Time to Evaluation Instant", m_args.P)
          .minimumValue("0.5")
          .maximumValue("10.0")
          .defaultValue("0.5")
          .description("Weight on Time to Evaluation Instant.");

          param("Weight on Time to Evaluation Instant for Grounding", m_args.P_G)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.05")
          .description("Weight on Time to Evaluation Instant for Grounding.");

          param("Weight on Distance at Evaluation Instant", m_args.Q)
          .minimumValue("1.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Weight on Distance at Evaluation Instant.");

          param("COLREGS Distance", m_args.D_CLOSE)
          .units(Units::Meter)
          .minimumValue("300.0")
          .maximumValue("2000.0")
          .defaultValue("400.0")
          .description("Distance where COLREGS are applied [m].");

          param("SB_MPC Surveillance Range", m_args.D_INIT)
          .units(Units::Meter)
          .minimumValue("300.0")
          .maximumValue("2000.0")
          .defaultValue("400.0")
          .description("Maximum SB_MPC Surveillance Range.");

          param("Minimum safe distance to vessels", m_args.D_SAFE)
          .units(Units::Meter)
          .minimumValue("50.0")
          .description("Minimum distance to moving obstacle which is considered as safe [m].");

          param("Minimum safe distance to land", m_args.D_SAFE_LAND)
          .units(Units::Meter)
          .minimumValue("10.0")
          .description("Minimum distance to static obstacle which is considered as safe [m].");

          param("Cost of collisions", m_args.K_COLL)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("0.5")
          .description("Cost of Collision.");

          param("Cost of grounding", m_args.K_GROUND)
          .minimumValue("0.0")
          .defaultValue("100.0")
          .description("Cost of Grounding.");

          param("Weights environmental factors", m_args.K_ENV)
          .minimumValue("0.0, 0.0, 0.0, 0.0, 0.0")
          .defaultValue("10.0, 10.0, 10.0, 10.0, 10.0")
          .description("Weights on environmental factors.");

          param("Cost of not complying COLREGS", m_args.KAPPA)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Cost of not Complying with the COLREGS.");

          param("Cost of changing COLREGS", m_args.KAPPA_TC)
          .minimumValue("0.0")
          .maximumValue("100.0")
          .defaultValue("3.0")
          .description("Cost of changing a COLREGS behavior.");
          
          param("PHI AH", m_args.PHI_AH)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle within which an obstacle is said to be ahead [deg].");

          param("PHI OT", m_args.PHI_OT)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle outside of which an obstacle will be said to be overtaking, if the speed of the obstacle is larger than the ship's own speed [deg].");

          param("PHI HO", m_args.PHI_HO)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle within which an obstacle is said to be head on [deg].");
          
          param("PHI CR", m_args.PHI_CR)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle outside of which an obstacle is said to be crossing, if it is on the starboard side, heading towards the ship and not overtaking the ship [deg].");
          
          param("Cost of Deviating from Nominal Speed", m_args.K_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("2.5")
          .description("Cost of deviating from the nominal speed.");

          param("Cost of Changing Speed Offset", m_args.K_DP)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.0")
          .description("Cost of Changing the Speed Offset");

          param("Cost of Deviating from Nominal Course", m_args.K_CHI)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.5")
          .description("Cost of deviating from the nominal Course.");

          param("Cost of Course change to SB", m_args.K_DCHI_SB)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.1")
          .description("Cost of Changing the Course Offset to Starboard.");

          param("Cost of Course change to Port", m_args.K_DCHI_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("0.5")
          .description("Cost of Changing the Course Offset to Port.");

          param("Cost of Selecting Turn to SB", m_args.K_CHI_SB)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("20.0")
          .defaultValue("0.9")
          .description("Cost of Selecting Turn to SB.");

          param("Cost of Selecting Turn to Port", m_args.K_CHI_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("10.0")
          .description("Cost of Selecting Turn to Port.");

          param("Guidance Strategy", m_args.GUIDANCE_STRATEGY)
          .minimumValue("0")
          .maximumValue("3")
          .defaultValue("0")
          .description("0=Line-of-sight (LOS), 1= WP-pursiut (WPP), >1= Course-Hold (CH) or Heading-Hold (HH).");

          param("WP Acceptance Radius", m_args.WP_R)
          .minimumValue("5.0")
          .maximumValue("100.0")
          .defaultValue("20.0")
          .description("WP Acceptance Radius.");

          param("LOS lookahead distance", m_args.LOS_LA_DIST)
          .minimumValue("50.0")
          .maximumValue("1000.0")
          .defaultValue("200.0")
          .description("LOS lookahead distance.");

          param("LOS integral gain", m_args.LOS_KI)
          .minimumValue("0.0")
          .maximumValue("2.0")
          .defaultValue("0.0")
          .description("LOS integral gain.");

          param("Course offset range", m_args.COURSE_RANGE)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("90.0")
          .description("Course angle range in degrees");

          param("Positive granularity", m_args.GRANULARITY)
          .units(Units::Degree)
          .minimumValue("10.0")
          .maximumValue("45.0")
          .defaultValue("15.0")
          .description("Portions of positive angle range in degrees");

          param("Radius around threat", m_args.radius_around_threat)
          .units(Units::Meter)
          .defaultValue("50.0")
          .description("Safety radius around a static threat at sea.");

          param("Course offsets", m_args.directions)
          .units(Units::Degree)
          .description("Course offsets for contours surroundings");
                    
          param("Correlation Limit", m_args.corr_lim)
              .defaultValue("50")
              .maximumValue("100")
              .minimumValue("0")
              .description("Correlation above which measurement is discarded.");

          param("Amplitude Limit", m_args.ampl_lim)
              .defaultValue("0")
              .units(Units::Decibel)
              .description("Amplitude above which measurement is discarded.");
          
          param("Vehicle Pitch Rate Limit", m_args.pitch_rate)
              .defaultValue("0")
              .description("Pitching rate above which measurement is discarded.");

          param("Vehicle Roll Rate Limit", m_args.roll_rate)
              .defaultValue("0")
              .description("Roll rate above which measurement is discarded.");

          
          param("Corridor -- Width", m_args.corridor)
          .minimumValue("1.0")
          .maximumValue("50.0")
          .defaultValue("5.0")
          .units(Units::Meter)
          .description("Width of corridor for attack entry angle");

          param("Corridor -- Entry Angle", m_args.entry_angle)
          .minimumValue("2")
          .maximumValue("45")
          .defaultValue("15")
          .units(Units::Degree)
          .description("Attack angle when lateral track error equals corridor width");

          // Register handler routines.
          bind<IMC::AisInfo>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::AbsoluteWind>(this);
          bind<IMC::DevDataText>(this);
          bind<IMC::ENCAwareness>(this);
          bind<IMC::EstimatedState>(this);

          //m_waypoints = Math::Matrix(1, 3, 0.0);

          m_shallowest_current_cell.depth = 0.0;
          m_shallowest_current_cell.vel = 0.0;
          m_shallowest_current_cell.dir = 0.0;
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.en_cas))
          {
            if (m_enable_cas)
            {
              spew("Clearing dynamic obstacles");
              m_dyn_obst_vec.clear();
            }

            m_enable_cas = m_args.en_cas;
          }

          if (paramChanged(m_args.en_antiground))
          {
            if (m_enable_ag)
            {
              m_dangers.resize(0,0);
              m_depths.resize(0,0);
            }

            m_enable_ag = m_args.en_antiground;
          }

          if (paramChanged(m_args.directions))
            m_offsets = m_args.directions;

          if (m_sb_mpc == NULL)
            return;

          // T and DT cannot be changed online. If changed, re-create the object.
          if (paramChanged(m_args.T) || paramChanged(m_args.DT))
            m_sb_mpc->create(m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.P_G, m_args.Q, m_args.D_CLOSE,
                             m_args.D_SAFE, m_args.D_SAFE_LAND, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                             m_args.KAPPA, m_args.KAPPA_TC, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                             m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.COURSE_RANGE, m_args.GRANULARITY,
                             m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI, m_args.GUIDANCE_STRATEGY);
          if (paramChanged(m_args.T_STAT))
            m_sb_mpc->setT_stat(m_args.T_STAT);
          if (paramChanged(m_args.P))
            m_sb_mpc->setP(m_args.P);
          if (paramChanged(m_args.Q))
            m_sb_mpc->setQ(m_args.Q);
          if (paramChanged(m_args.D_CLOSE))
            m_sb_mpc->setDClose(m_args.D_CLOSE);
          if (paramChanged(m_args.D_SAFE))
            m_sb_mpc->setDSafe(m_args.D_SAFE);
          if (paramChanged(m_args.D_SAFE_LAND))
            m_sb_mpc->setDSafe(m_args.D_SAFE_LAND);
          if (paramChanged(m_args.K_COLL))
            m_sb_mpc->setKColl(m_args.K_COLL);
          if (paramChanged(m_args.KAPPA))
            m_sb_mpc->setKappa(m_args.KAPPA);
          if (paramChanged(m_args.KAPPA_TC))
            m_sb_mpc->setKappaTC(m_args.KAPPA_TC);
          if (paramChanged(m_args.PHI_AH))
            m_sb_mpc->setPhiAH(m_args.PHI_AH);
          if (paramChanged(m_args.PHI_OT))
            m_sb_mpc->setPhiOT(m_args.PHI_OT);
          if (paramChanged(m_args.PHI_HO))
            m_sb_mpc->setPhiHO(m_args.PHI_HO);
          if (paramChanged(m_args.PHI_CR))
            m_sb_mpc->setPhiCR(m_args.PHI_CR);
          if (paramChanged(m_args.K_P))
            m_sb_mpc->setKP(m_args.K_P);
          if (paramChanged(m_args.K_DP))
            m_sb_mpc->setKdP(m_args.K_DP);
          if (paramChanged(m_args.K_CHI))
            m_sb_mpc->setKChi(m_args.K_CHI);
          if (paramChanged(m_args.K_DCHI_SB))
            m_sb_mpc->setKdChiSB(m_args.K_DCHI_SB);
          if (paramChanged(m_args.K_DCHI_P))
            m_sb_mpc->setKdChiP(m_args.K_DCHI_P);
          if (paramChanged(m_args.K_CHI_SB))
            m_sb_mpc->setKChiSB(m_args.K_CHI_SB);
          if (paramChanged(m_args.K_CHI_P))
            m_sb_mpc->setKChiP(m_args.K_CHI_P);
          if (paramChanged(m_args.D_INIT))
            m_sb_mpc->setDInit(m_args.D_INIT);
          if (paramChanged(m_args.GUIDANCE_STRATEGY))
            m_sb_mpc->setGuidanceStrategy(m_args.GUIDANCE_STRATEGY);
          if (paramChanged(m_args.WP_R))
            m_sb_mpc->setWpR(m_args.WP_R);
          if (paramChanged(m_args.LOS_LA_DIST))
            m_sb_mpc->setLosLaDist(m_args.LOS_LA_DIST);
          if (paramChanged(m_args.LOS_KI))
            m_sb_mpc->setLosKi(m_args.LOS_KI);
          if (paramChanged(m_args.COURSE_RANGE))
            m_sb_mpc->setAngRange(m_args.COURSE_RANGE);
          if (paramChanged(m_args.GRANULARITY))
            m_sb_mpc->setGran(m_args.GRANULARITY);
        }

        void
        onResourceInitialization(void)
        {
          m_sb_mpc->create(m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.P_G, m_args.Q, m_args.D_CLOSE,
                           m_args.D_SAFE, m_args.D_SAFE_LAND, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                           m_args.KAPPA, m_args.KAPPA_TC, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                           m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.COURSE_RANGE, m_args.GRANULARITY,
                           m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI, m_args.GUIDANCE_STRATEGY);
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          m_sb_mpc = new simulationBasedMpc(this);

          m_offsets = m_args.directions;
          m_static_obst_state.resizeAndFill(m_offsets.size(), 3, 10000.0); //! Large values: initial m_cost is high.
        }

          //! Release resources.
        void
        onResourceRelease(void)
        {

        }

        void
        onEntityReservation(void)
        {
          //! Called to ensure unique identifiers by reserving entity identifiers.
          PathController::onEntityReservation();
        }

        void
        onEntityResolution(void)
        {
          if (m_ctx.profiles.isSelected("Simulation"))
          {
            m_nav_eid = getEid(m_args.elabel_nav_sim);
          }
          else if (m_ctx.profiles.isSelected("Hardware"))
          {
            m_nav_eid = getEid(m_args.elabel_nav_hw);
          }

          m_ws_eid = getEid(m_args.elabel_ws);
          m_gnss_eid = getEid(m_args.elabel_gnss);
          m_es_eid = getEid(m_args.elabel_es);
        }

        //! Get entity id of label
        //! Returns UINT16_MAX in case of missing label
        unsigned int
        getEid(const std::string& label)
        {
          unsigned int id = UINT16_MAX;
          try
          {
            id = resolveEntity(label);
          }
          catch (const std::exception& e)
          {
            war(DTR("can not resolve %s (%s), is there a task failure or a configuration error?"),
                label.c_str(), e.what());
          }

          return id;
        }

        void
        onPathActivation(void)
        {
          //! Activate Heading & Speed controller.
          enableControlLoops(IMC::CL_YAW);
          enableControlLoops(IMC::CL_SPEED);
        }

        void
        consume(const IMC::DevDataText * msg)
        {
          // TextActions sends a message to PathControl to turn cas on/off
          if (std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(), "Text Actions") == 0 && msg->getDestinationEntity() == resolveEntity("Path Control"))
          {
            std::string cmd = msg->value;

            // Parse command.
            char what[32];
            std::sscanf(cmd.c_str(), "%s", what);

            if (!strcmp(what, "on"))
              m_enable_cas = true;
            if (!strcmp(what, "off"))
              m_enable_cas = false;
          }
        }

        //! From GPS Task
        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          m_lat_asv = msg->lat;
          m_lon_asv = msg->lon;
          m_asv_state[0] = 0.0; // ASV assumed to be centered, (0,0)
          m_asv_state[1] = 0.0;
          m_asv_state[2] = msg->cog;
          m_asv_state[3] = msg->sog;
          m_asv_state[4] = 0.0; //! Assume zero sideslip
          m_asv_state[5] = 0.0; //! Assume zero.

          m_timestamp_new = msg->getTimeStamp();
        }

        void
        consume(const IMC::AbsoluteWind* msg)
        {
          if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_ws_eid)
            return;

          m_wind_dir = msg->direction;
          m_wind_speed = msg->speed;
        }

        void
        consume(const IMC::Displacement* msg)
        {
          if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gnss_eid)
            return;

          m_heave = msg->z;
        }

        void
        consume(const IMC::Frequency* msg)
        {
          if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_es_eid)
            return;

          m_wave_freq = msg->value;
        }

        void
        consume(const IMC::CurrentProfile *msg)
        {
          Math::Matrix profile_average = Math::Matrix(3, msg->ncells, 0.0);
          Math::Matrix ncells_averaged = Math::Matrix(1, msg->ncells, 0.0);
          Math::Matrix single_profile = Math::Matrix(3, msg->ncells, 0.0);

          // Set this limit high enough based on LOGS.
          if(m_estate.p < m_args.roll_rate && m_estate.q < m_args.pitch_rate)
          {
            double cell_beam_amplitude;
            double cell_beam_correlation;

            for(const auto cell:msg->profile)
            {
              // Construct velocities vector from cells.
              bool cell_is_good = true;

              std::vector<double> beam_velocities;

              for(auto beam:cell->beams)
              {
                cell_beam_amplitude = beam->amp;
                cell_beam_correlation = beam->cor;

                if(cell_beam_amplitude > m_args.ampl_lim && cell_beam_correlation > m_args.corr_lim)
                {
                  // Measurements in this Cell and Beam are good.
                  beam_velocities.push_back(beam->vel);
                } else
                {
                  // Measurements in this Cell and Beam are not good.
                  cell_is_good = false;
                  spew("BAD MEASUREMENT - CELL DISCARDED");
                  break;
                }
              }

              if(cell_is_good)
              {
                m_shallowest_current_cell.lat = m_estate.lat;
                m_shallowest_current_cell.lon = m_estate.lon;
                m_shallowest_current_cell.depth = cell->cell_position;
                spew("Cell at depth %0.3f is good.", m_shallowest_current_cell.depth);

                // Rotate of 45deg about z, as the sensor is rotated with respect to the vessel.
                if(m_avg_zero==0)
                  m_beam_velocity_zero_avg = beam_velocities[0];
                else
                  m_beam_velocity_zero_avg = ((m_beam_velocity_zero_avg_last * m_avg_zero + beam_velocities[0]) / (m_avg_zero + 1));
                m_avg_zero++;
                m_beam_velocity_zero_avg_last = m_beam_velocity_zero_avg;

                if(m_avg_one==0)
                  m_beam_velocity_one_avg = beam_velocities[1];
                else
                  m_beam_velocity_one_avg = ((m_beam_velocity_one_avg_last * m_avg_one + beam_velocities[1]) / (m_avg_one + 1));
                m_avg_zero++;
                m_beam_velocity_one_avg_last = m_beam_velocity_one_avg;

                
                double u_body = m_beam_velocity_zero_avg*std::cos(Angles::radians(45))-m_beam_velocity_one_avg*std::sin(Angles::radians(45));
                double v_body = m_beam_velocity_zero_avg*std::sin(Angles::radians(45))+m_beam_velocity_one_avg*std::cos(Angles::radians(45));

                debug("ADCP TASK: relative u %.3f, relative v %.3f",u_body,v_body);

                // Add velocity/sog.
                double u = m_estate.u - u_body;
                double v = m_estate.v - v_body;
                double w = m_estate.w - (beam_velocities[2]+beam_velocities[3])/2;              

                // Transform speed vectors from body to inertial frame.
                // Option 1 - João Costa
                double u_c_ned, v_c_ned, w_c_ned;
                Coordinates::BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta, m_estate.psi, u, v, w, &u_c_ned, &v_c_ned, &w_c_ned);
                // Option 2 - Alberto Dallolio
                //double u_c_ned = u*std::cos(m_estate.psi)*std::cos(m_estate.theta) + v*(std::cos(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi) - std::sin(m_estate.psi)*std::cos(m_estate.phi)) + w*(std::sin(m_estate.psi)*std::sin(m_estate.phi) + std::cos(m_estate.psi)*std::cos(m_estate.phi)*std::sin(m_estate.theta));
                //double v_c_ned = u*std::sin(m_estate.psi)*std::cos(m_estate.theta) + v*(std::cos(m_estate.psi)*std::cos(m_estate.phi) + std::sin(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi)) + w*(std::sin(m_estate.theta)*std::sin(m_estate.psi)*std::cos(m_estate.phi) - std::cos(m_estate.psi)*std::sin(m_estate.phi));
                //double w_c_ned = -u*std::sin(m_estate.theta) + v*std::cos(m_estate.theta)*std::sin(m_estate.phi) + w*std::cos(m_estate.theta)*std::cos(m_estate.phi);

                // Compute 2D direction of current as atan(vy/vx), for the current cell.
                double curr_direction = std::atan(v_c_ned/u_c_ned);
                m_shallowest_current_cell.dir = curr_direction; // It must be in NED

                // Compute velocity magnitude in 2D inertial frame, for the current cell.
                double curr_velocity = std::sqrt(std::pow(v_c_ned,2) + std::pow(u_c_ned,2));
                m_shallowest_current_cell.vel = curr_velocity; // It must be in NED
              }
            }
          }
        }

        void
        consume(const IMC::ENCAwareness *msg)
        {
          if(!m_enable_ag)
            return;

          if(!msg->danger.empty())
          {
            m_dangers = analyseENC(msg->danger);
            //! Remove last column as depth is not needed/present.
            m_dangers = m_dangers.get(0,m_dangers.rows()-1,0,m_dangers.columns()-2);
            debug("Dangers matrix rows: %d columns: %d", m_dangers.rows(),m_dangers.columns());
          }

          if(!msg->depth_at_loc.empty())
          {
            m_depths = analyseENC(msg->depth_at_loc);
            debug("Depths matrix rows: %d columns: %d", m_depths.rows(),m_depths.columns());
          }
        }

        void
        consume(const IMC::EstimatedState *msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          m_estate = *msg;
          spew("BODY frame speeds: u = %.3f, v = %.3f - HEADING %.3f", m_estate.u, m_estate.v, Angles::degrees(m_estate.psi));
        }

        Math::Matrix
        analyseENC(std::string enc)
        {
          Math::Matrix enc_mat;
          Math::Matrix enc_mat_single = Math::Matrix(1,3,0);
          size_t pos = enc.find(";");
          std::string strNew = enc;
          
          while(pos != std::string::npos)
          {
            unsigned first = enc.find("=");
            std::string whatis = enc.substr(0,first).c_str();
            unsigned last = enc.find(";");
            strNew = enc.substr(first+1,last-first-1);
            //debug("STR NEW %s",strNew.c_str());

            //! Extract values.
            std::stringstream stream(strNew);
            int i = 0;
            while(stream.good())
            {
              std::string substr;
              getline(stream, substr, ',');
              if(whatis == "lats")
              {
                enc_mat_single(0,0) = std::atof(substr.c_str()); //lats.push_back(std::atof(substr.c_str()));
                enc_mat.vertCat(enc_mat_single);
              }
              else if(whatis == "lons")
                enc_mat(i,1) = std::atof(substr.c_str()); //lons.push_back(std::atof(substr.c_str()));
              else
                enc_mat(i,2) = std::atof(substr.c_str()); //depths.push_back(std::atof(substr.c_str()));

              i++;
              //debug("Values parsed: %f",std::atof(substr.c_str()));
            }
            pos = enc.find(";", pos + 1);
            enc = enc.erase(0,last + 1);
          }
          //debug("Received %d (lat,lon) locations.", enc_mat.rows());
          return enc_mat;
        }

        void
        buildENCforCAS()
        {
          debug("buildENCforCAS");
          int offset = 5;
          Math::Matrix course_off_ranges(m_offsets.size(),2);

          for (size_t f = 0; f < m_offsets.size(); f++)
          {
            debug("Desired Heading %f",Angles::degrees(m_des_heading.value));
            course_off_ranges(f,0) = m_des_heading.value + Angles::radians(m_offsets[f] - offset);
            course_off_ranges(f,1) = m_des_heading.value + Angles::radians(m_offsets[f] + offset);
            if(course_off_ranges(f,0)<0)
              course_off_ranges(f,0) = Angles::radians(360) + course_off_ranges(f,0);
            if(course_off_ranges(f,1)<0)
              course_off_ranges(f,1) = Angles::radians(360) + course_off_ranges(f,1);
            
            m_static_obst_state(f,0) = Angles::radians(m_offsets[f]);
            debug("RANGES %f %f for offset %.0f",Angles::degrees(course_off_ranges(f,0)),Angles::degrees(course_off_ranges(f,1)),m_offsets[f]);
          }
          //debug("%d course_off_ranges",course_off_ranges.rows());

          //! Treat depth contours.
          if(m_depths.rows() > 0)
          {
            for(int j=0; j<course_off_ranges.rows(); j++)
            {
              std::vector<double> single_distances;
              for(int i=0; i<m_depths.rows(); i++)
              {
                double bearing,range;
                WGS84::getNEBearingAndRange(m_lat_asv, m_lon_asv, m_depths(i,0), m_depths(i,1), &bearing, &range);
                //debug("bearing %f and range %f",Angles::degrees(bearing),range);

                if(bearing>=course_off_ranges(j,0) && bearing<=course_off_ranges(j,1))
                  single_distances.push_back(range);
              }
              if(!single_distances.empty())
              {
                std::vector<double>::iterator itr = std::min_element(single_distances.begin(), single_distances.end());
                int int_idx = std::distance(single_distances.begin(), itr);
                m_static_obst_state(j,1) = single_distances[int_idx];
                debug("Shallow contour location (%f,%f) for offset %.0f and range %f.",Angles::degrees(m_depths(int_idx,0)),Angles::degrees(m_depths(int_idx,1)),m_offsets[j],single_distances[int_idx]);
              }
              //debug("%f %f", Angles::degrees(m_static_obst_state(j,0)), m_static_obst_state(j,1));
            }
          }

          //! Treat dangers.
          if(m_dangers.rows() > 0)
          {
            double R = 6371; //Radius of the Earth
            for(int i=0;i<m_dangers.rows();i++)
            {
              double bearing,range;
              WGS84::getNEBearingAndRange(m_lat_asv, m_lon_asv, m_dangers(i,0), m_dangers(i,1), &bearing, &range); // Angles::radians(63.45419383),Angles::radians(10.37723485)
              debug("Static danger at (%f,%f), bearing %f and range %f",Angles::degrees(m_dangers(i,0)),Angles::degrees(m_dangers(i,1)),Angles::degrees(bearing),range);

              //! Check if static object is actually a threat.
              if(bearing > m_des_heading.value + Angles::radians(m_offsets.back()) && bearing < m_des_heading.value + Angles::radians(m_offsets[0]))
              {
                //! Static object can be a threat.
                for (size_t j = 1; j < m_offsets.size(); j++)
                {
                  std::vector<double> offset_neighbors;
                  offset_neighbors.push_back(m_des_heading.value + Angles::radians(m_offsets[j]));
                  offset_neighbors.push_back(m_des_heading.value + Angles::radians(m_offsets[j-1]));
                  if(bearing>offset_neighbors[0] && bearing<offset_neighbors[1])
                  {
                    std::vector<double> dsts,lats2,lons2;
                    for (size_t k = 0; k < offset_neighbors.size(); k++)
                    {
                      //! Check if the static objec is a threat.
                      //! Find location (lat2,lon2) given a course and range applied to location (lat1,lon1).
                      double range_ext = (range+50)/1000;
                      double lat2 = std::asin(std::sin(m_lat_asv)*std::cos(range_ext/R) +
                          std::cos(m_lat_asv)*std::sin(range_ext/R)*std::cos(offset_neighbors[k]));
                      double lon2 = m_lon_asv + std::atan2(std::sin(offset_neighbors[k])*std::sin(range_ext/R)*std::cos(m_lat_asv),
                                  std::cos(range_ext/R)-std::sin(m_lat_asv)*std::sin(lat2));
                      //lats2.push_back(lat2);
                      //lons2.push_back(lon2);

                      double ct_dxt,at_dxt;
                      Coordinates::WGS84::getCtAndAtDistance(m_dangers(i,0), m_dangers(i,1), m_lat_asv, m_lon_asv, lat2, lon2, &ct_dxt, &at_dxt);
                      //dsts.push_back(std::fabs(ct_dxt));
                      double dst = std::fabs(ct_dxt);
                      if(dst < m_args.radius_around_threat*2)
                      {
                        debug("COG offset %.0f - Path ending up at (%f,%f) reports CT distance of %f meters.",m_offsets[j],Angles::degrees(lat2),Angles::degrees(lon2),dst);
                        if(m_static_obst_state(j,1) == 10000.0)
                        {
                          m_static_obst_state(j,1) = range - m_args.radius_around_threat;
                          debug("Inserting static threat for COG offset %.0f!",m_offsets[j]);
                        } else if(range < m_static_obst_state(j,1)) //! it means that a depth contours already assigned to this course offset.
                        {//! if the range to the danger < range to the depth contour, replace the second with the first.
                          m_static_obst_state(j,1) = range - m_args.radius_around_threat;
                          debug("Replacing depth contour threat with static threat for COG offset %.0f!",m_offsets[j]);
                        }

                        if(k==1 && j != (size_t)m_static_obst_state.rows())
                        {
                          if(m_static_obst_state(j-1,1) == 10000.0)
                          {
                            m_static_obst_state(j-1,1) = range - m_args.radius_around_threat;
                            debug("Inserting static threat also for PREVIOUS (!!) COG offset %.0f!",m_offsets[j-1]);
                          } else if(range < m_static_obst_state(j+1,1)) //! it means that a depth contours already assigned to this course offset.
                          {//! if the range to the danger < range to the depth contour, replace the second with the first.
                            m_static_obst_state(j-1,1) = range - m_args.radius_around_threat;
                            debug("Replacing depth contour threat with static threat also for PREVIOUS (!!) COG offset %.0f!",m_offsets[j-1]);
                          }
                        }
                      }
                      //debug("dst %f for offset neighbor %.0f",std::fabs(ct_dxt),Angles::degrees(offset_neighbors[k]));
                    }
                  }
                }
              }
            }
          }
        }

        void
        consume(const IMC::AisInfo* msg)
        {
          trace("CAS: Receiving AisInfo");

          if (!m_enable_cas)
            return;

          // Check if AutoNaut is Simulator is booting before you compute displacement.
          if (m_lat_asv == 0.0 && m_lon_asv == 0.0)
            return;

          m_timestamp_obst = msg->getTimeStamp();

          // trace("CAS - MSG TYPE: %s", msg->msg_type.c_str());

          if (msg->msg_type.compare("1") == 0 || msg->msg_type.compare("2") == 0 || msg->msg_type.compare("3") == 0)
          {
            // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction (WGS84::displace)
            m_lat_obst = msg->lat;
            m_lon_obst = msg->lon;

            // Distance between ASV - Obstacle
            double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_lat_obst, m_lon_obst, 0);

            // spew("Distance from obstacle %s is %0.1f",msg->mmsi.c_str(), distance);
            trace("Received Obstacle from AIS with MMSI: %s, latitude %f and longitude %f, distance: %0.1f", msg->mmsi.c_str(), Angles::degrees(m_lat_obst), Angles::degrees(m_lon_obst), distance);

            bool obs_exists = false;
            // Obstacle vector: UPDATE/REMOVE.
            for (unsigned int i = 0; i < m_dyn_obst_vec.size(); i++)
            {
              // spew("Update Obstacle vector: Source: %d Vector size: %d", m_dyn_obst_vec[i].getSource(), m_dyn_obst_vec.size());
              std::string temp_mmsi = m_dyn_obst_vec[i].mmsi;
              if (temp_mmsi.compare(msg->mmsi) == 0) // s1.compare(s2)
              {
                obs_exists = true;

                if (distance < m_args.out_of_range)
                {                                     // Obstacle exists & inside range - Update
                  m_dyn_obst_vec[i].mmsi = msg->mmsi; // should have already been set!
                  m_dyn_obst_vec[i].lon = msg->lon;
                  m_dyn_obst_vec[i].lat = msg->lat;
                  m_dyn_obst_vec[i].course = msg->course;
                  m_dyn_obst_vec[i].nav_status = msg->nav_status;
                  m_dyn_obst_vec[i].speed = msg->speed;
                  m_dyn_obst_vec[i].dist = distance;

                  m_last_update[i] = m_timestamp_obst;

                  debug("Obstacle with MMSI %s is CLOSER than %0.1f m and is UPDATED - OBST VECT SIZE %lu - LAT %.3f, LON %.3f, COURSE %.3f deg, NAV_STATUS %d, SOG %.3f m/s, distance %.3f m", m_dyn_obst_vec[i].mmsi.c_str(), m_args.out_of_range, m_dyn_obst_vec.size(), Angles::degrees(m_dyn_obst_vec[i].lat), Angles::degrees(m_dyn_obst_vec[i].lon), Angles::degrees(m_dyn_obst_vec[i].course), m_dyn_obst_vec[i].nav_status, m_dyn_obst_vec[i].speed, distance);
                }
                else
                {
                  // Obstacle Outside range - Remove Obstacle
                  debug("Obstacle with MMSI %s REMOVED - Outside range, obstacle vector size is now: %lu",
                        m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec.size() - 1);
                  m_dyn_obst_vec.erase(m_dyn_obst_vec.begin() + i);
                  m_last_update.erase(m_last_update.begin() + i);
                }
              }
              if (m_timestamp_obst - m_last_update[i] > m_args.kill_obst)
              {
                obs_exists = true; // but now is going to be killed!
                // Obstacle disappeared - Remove Obstacle
                debug("Obstacle with MMSI %s is DISAPPEARED and REMOVED - obstacle vector size is now: %lu",
                      m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec.size() - 1);
                m_dyn_obst_vec.erase(m_dyn_obst_vec.begin() + i);
                m_last_update.erase(m_last_update.begin() + i);
              }
            }

            // Obstacle vector: ADD new obstacle.
            if (obs_exists == false && (distance < m_args.out_of_range))
            {
              // Create timestamp for this new vehicle.
              m_last_update.push_back(m_timestamp_obst);

              IMC::AisInfo obst_temp;
              // Temp obstacle for storage.
              obst_temp.mmsi = msg->mmsi;
              obst_temp.lon = msg->lon;
              obst_temp.lat = msg->lat;
              obst_temp.course = msg->course;
              obst_temp.nav_status = msg->nav_status;
              obst_temp.speed = msg->speed * 0.514;
              obst_temp.dist = msg->dist;

              m_dyn_obst_vec.push_back(obst_temp);
              trace("New Obstacle Added from msg_type 1/2/3: MMSI %s, obstacle vector size: %lu",
                    obst_temp.mmsi.c_str(), m_dyn_obst_vec.size());
            }
          }
          else if (msg->msg_type.compare("5") == 0)
          {
            // Add Static/Voyage information only to vehicles already in the list.
            for (unsigned int i = 0; i < m_dyn_obst_vec.size(); i++)
            {
              std::string temp_mmsi = m_dyn_obst_vec[i].mmsi;
              if (temp_mmsi.compare(msg->mmsi) != 0)
                continue;
                
              // MMSI exists in the list, add static/voyage related data.
              m_dyn_obst_vec[i].mmsi = msg->mmsi;
              m_dyn_obst_vec[i].callsign = msg->callsign;
              m_dyn_obst_vec[i].name = msg->name;
              m_dyn_obst_vec[i].type_and_cargo = msg->type_and_cargo;
              m_dyn_obst_vec[i].a = msg->a;
              m_dyn_obst_vec[i].b = msg->b;
              m_dyn_obst_vec[i].c = msg->c;
              m_dyn_obst_vec[i].d = msg->d;
              m_dyn_obst_vec[i].draught = msg->draught;

              trace("AIS5: %s %s %s %d %.3f %.3f %.3f %.3f %.3f", m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec[i].callsign.c_str(), m_dyn_obst_vec[i].name.c_str(), m_dyn_obst_vec[i].type_and_cargo, m_dyn_obst_vec[i].a, m_dyn_obst_vec[i].b, m_dyn_obst_vec[i].c, m_dyn_obst_vec[i].d, m_dyn_obst_vec[i].draught);
            }
          }
        }

        void
        groundingCost()
        {
          debug("groundingCost");
          // Cost function with environmental factors.
          double bathymetry = 1;
          m_wind_dir = 60;
          m_wind_speed = 10;

          double psi_path = atan2(m_waypoints(1,1) - m_waypoints(0,1), m_waypoints(1,0) - m_waypoints(0,0));

          for(int i=0; i < m_static_obst_state.rows(); i++)
          {
            double bath_m_cost = m_args.K_ENV[0]*std::pow(bathymetry,2);
            double heave_m_cost = m_args.K_ENV[1]*std::pow(m_heave,2);
            double wave_freq_m_cost = m_args.K_ENV[2]*m_wave_freq;
            double wind_m_cost = m_args.K_ENV[3]*m_wind_speed*std::pow(std::fmax(0, std::cos(psi_path + Angles::radians(m_offsets[i]) - Angles::radians(m_wind_dir))),2);
            double current_m_cost = m_args.K_ENV[4]*m_shallowest_current_cell.vel*std::pow(std::fmax(0, std::cos(psi_path + Angles::radians(m_offsets[i]) - Angles::radians(m_shallowest_current_cell.dir))),2);
            m_static_obst_state(i,2) = m_args.K_GROUND + bath_m_cost + heave_m_cost + wave_freq_m_cost + wind_m_cost + current_m_cost;
          }
        }

        void
        createWPs(const TrackingState& ts)
        {
          debug("createWPs");
          // Create and fill waypoints matrix.
          double wp0_dx = 0.0; // displ between asv and wp0
          double wp0_dy = 0.0;
          double wp1_dx = 0.0; // displ between asv and wp1
          double wp1_dy = 0.0;
          double wp2_dx = 0.0; // displ between asv and wp2
          double wp2_dy = 0.0;

          // Compute displacement between AutoNaut and waypoints.
          WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.lat_st, ts.lon_st, 0, &wp0_dx, &wp0_dy);
          WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.waypoints(0,0), ts.waypoints(0,1), 0, &wp1_dx, &wp1_dy);

          if(ts.waypoints.rows() > 1) //m_waypoints.rows() > 1
          {
            WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.waypoints(1,0), ts.waypoints(1,1), 0, &wp2_dx, &wp2_dy);
            m_waypoints << wp0_dx, wp0_dy, // starting waypoint
                          wp1_dx, wp1_dy,  // waypoint we are heading to
                          wp2_dx, wp2_dy;  // next waypoint

            trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f) - wp2 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy, wp2_dx, wp2_dy);
          } else
          { // otherwise send wp1 twice.
            m_waypoints << wp0_dx, wp0_dy, // starting waypoint
                          wp1_dx, wp1_dy,  // waypoint we are heading to
                          wp1_dx, wp1_dy;  // repeat 2nd wp for m_sb_mpc

            trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy);
          }
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          //! LOS Navigation Law (called wrongly Pure Pursuit in Dune) - desired course is the LOS angle.
          m_des_heading.value = ts.los_angle;
          trace("LOS DESIRED COURSE: %f", Angles::degrees(m_des_heading.value));

          //! Nothing is enabled.
          if(!m_enable_cas && !m_enable_ag)
          {
            dispatch(m_des_heading);
            return;
          }

          //! Something might be enabled, but no data available.
          if(m_dyn_obst_vec.size() == 0 && m_dangers.rows() == 0 && m_depths.rows() == 0)
          {
            trace("CAS or anti-grounding are enabled, but their tables are empty!");
            dispatch(m_des_heading);
            return;
          }

          if(m_enable_cas || m_enable_ag)
            createWPs(ts);

          bool C_CAS = m_enable_cas && m_dyn_obst_vec.size() > 0;
          bool C_AG = m_enable_ag && (m_dangers.rows() > 0 || m_depths.rows() > 0);

          //! Compute dynamic obst. matrix for m_sb_mpc if CAS is enabled and there are dynamic obstacles in range.
          if(C_CAS)
          {
            // Create and fill matrix of dynamic obstacles.
            m_dyn_obst_state.resize(m_dyn_obst_vec.size(), 10);

            //! Update m_asv_states to fit m_sb_mpc inputs.
            //m_asv_state[3] = sqrt(std::pow(m_asv_state[3], 2) + std::pow(m_asv_state[4], 2)); // u = Speed in BODY
            for(unsigned int i = 0; i < m_dyn_obst_vec.size(); i++)
            {
              // IMC::CollisionAvoidance cas;

              // Distance between ASV - Obstacle
              double dist_x = 0.0;
              double dist_y = 0.0;
              WGS84::displacement(m_lat_asv, m_lon_asv, 0, m_dyn_obst_vec[i].lat, m_dyn_obst_vec[i].lon, 0, &dist_x, &dist_y);

              trace("North offset x-coordinate in NED = %0.1f, East offset y-coordinate in NED = %0.1f", dist_x, dist_y);

              //! Update Obstacle states to fit input of CAS (m_sb_mpc)
              m_dyn_obst_state(i, 0) = dist_x; // north
              m_dyn_obst_state(i, 1) = dist_y; // east
              m_dyn_obst_state(i, 2) = m_dyn_obst_vec[i].course;
              m_dyn_obst_state(i, 3) = m_dyn_obst_vec[i].speed; //sqrt(std::pow(m_dyn_obst_vec[i].u, 2) + std::pow(m_dyn_obst_vec[i].v, 2));
              m_dyn_obst_state(i, 4) = 0.0;
              if(m_dyn_obst_vec[i].a == 0.0)
                m_dyn_obst_state(i, 5) = 10.0;
              else 
                m_dyn_obst_state(i, 5) = m_dyn_obst_vec[i].a;
              if(m_dyn_obst_vec[i].b == 0.0)
                m_dyn_obst_state(i, 6) = 10.0;
              else 
                m_dyn_obst_state(i, 6) = m_dyn_obst_vec[i].b;
              if(m_dyn_obst_vec[i].c == 0.0)
                m_dyn_obst_state(i, 7) = 2.0;
              else 
                m_dyn_obst_state(i, 7) = m_dyn_obst_vec[i].c;
              if(m_dyn_obst_vec[i].d == 0.0)
                m_dyn_obst_state(i, 8) = 2.0;
              else 
                m_dyn_obst_state(i, 8) = m_dyn_obst_vec[i].d;
              
              // Convert MMSI from string to int for CAS.
              std::stringstream geek(m_dyn_obst_vec[i].mmsi); //contains int MMSI.
              int mmsi = 0; 
              geek >> mmsi;
              m_dyn_obst_state(i, 9) = mmsi;

              // Distance between ASV and Obstacle.
              double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_dyn_obst_vec[i].lat, m_dyn_obst_vec[i].lon, 0);
              (void)distance;
              (void)state;
              // //! Fill in CAS message.
              // cas.mmsi = m_dyn_obst_vec[i].mmsi;
              // cas.lat = m_dyn_obst_vec[i].lat;
              // cas.lon = m_dyn_obst_vec[i].lon;
              // cas.x = dist_x;
              // cas.y = dist_y;
              // cas.speed = m_dyn_obst_vec[i].speed;
              // cas.course = Angles::degrees(m_dyn_obst_vec[i].course);
              // cas.dist = distance;
              // cas.length = m_dyn_obst_vec[i].a + m_dyn_obst_vec[i].b;
              // cas.width = m_dyn_obst_vec[i].c + m_dyn_obst_vec[i].d;
              // cas.o_vect = (int)m_dyn_obst_vec.size();
              // dispatch(cas);

              //debug("AUTONAUT (lon,lat,cog,sog) %0.3f %0.3f %0.1f %0.1f | %d-th OBSTACLE (dist_x,dist_y,cog,sog) %0.1f %0.1f %0.1f %f", Angles::degrees(m_lat_asv), Angles::degrees(m_lon_asv), Angles::degrees(m_asv_state[2]), m_asv_state[3], i+1, m_dyn_obst_state(i,0), m_dyn_obst_state(i,1), c_degrees_per_radian*m_dyn_obst_state(i,2), m_dyn_obst_state(i,3));
            }
          }

          //! Compute static obst. matrix for m_sb_mpc if ANTI-GROUNDING is enabled and there are static obstacles in range.
          if(C_AG)
          {
            m_static_obst_state.resizeAndFill(m_offsets.size(),3,10000.0); //! Large values: initial m_cost is high.
            buildENCforCAS();
            groundingCost();
            for(int i = 0; i < m_static_obst_state.rows(); i++)
              debug("m_static_obst_state rows to m_sb_mpc: %.0f %.3f %.0f",Angles::degrees(m_static_obst_state(i,0)),m_static_obst_state(i,1),m_static_obst_state(i,2));
          }

          if((C_CAS || C_AG) && (m_timestamp_new - m_timestamp_prev) > 20.0)
          {
            if(!C_CAS && C_AG)
              debug("Anti-grounding situation!");
            else if(C_CAS && !C_AG)
              debug("Anti-collision situation!");
            else if(C_CAS && C_AG) // both, this is an anti-grounding and anti-collision scenario!
              debug("Anti-grounding and anti-collision situation!");

            obstacle* obs_vessel = nullptr;
            m_sb_mpc->getBestControlOffset(m_u_os, m_psi_os, m_asv_state[3], m_des_heading.value, m_asv_state, m_waypoints, m_dyn_obst_state, m_static_obst_state, m_cost, obs_vessel);

            //! New desired course and course offset.
            m_des_heading.value += m_psi_os;

            if(m_psi_os == 0)
              debug("Course offset is 0, same desired course %.3f", Angles::degrees(m_des_heading.value));
            else
            {
              debug("Course offset is %.0f, new desired course %.3f", Angles::degrees(m_psi_os), Angles::degrees(m_des_heading.value));
              
              // Find closest vessel - hypothetically it is the one we try to avoid.
              // std::vector<IMC::AisInfo>::const_iterator itr;
              // itr = m_dyn_obst_vec.begin();
              // double dist_prev = m_args.out_of_range;
              // std::string mmsi_min;
              // for(; itr != m_dyn_obst_vec.end(); ++itr)
              // {
              //   double dist = (itr)->dist;
              //   if(dist < dist_prev)
              //     mmsi_min = (itr)->mmsi;

              //   dist_prev = dist;
              // }

              if (obs_vessel != nullptr)
              {
                std::vector<IMC::AisInfo>::const_iterator itr = m_dyn_obst_vec.begin();
                const AisInfo* ais_vessel = itr.base();

                for(; itr != m_dyn_obst_vec.end(); ++itr)
                {
                  std::stringstream geek(itr->mmsi); //contains int MMSI.
                  int mmsi = 0; 
                  geek >> mmsi;

                  if (mmsi == obs_vessel->id_)
                    ais_vessel = itr.base();
                    break;

                }

                TransmissionRequest tr;
                tr.req_id = m_tx_req_id++;
                tr.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
                tr.data_mode = TransmissionRequest::DMODE_INLINEMSG;
                tr.msg_data.set(*ais_vessel);
                tr.deadline = Clock::getSinceEpoch() + 60;

                dispatch(tr);
              }
            }

            //! Normalize angle
            m_des_heading.value = Angles::normalizeRadian(m_des_heading.value);

            debug("OFFSET: %.0f - NEW COURSE NORMALIZED %.3f",Angles::degrees(m_psi_os),Angles::degrees(m_des_heading.value));

            dispatch(m_des_heading);
            m_timestamp_prev = m_timestamp_new;
          }
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          (void) state;
          
          double gain = std::tan(Angles::radians(m_args.entry_angle)) / m_args.corridor;
          double ref = DUNE::Math::c_half_pi + std::atan(2 * gain * (ts.range - ts.loiter.radius));

          if (!ts.loiter.clockwise)
            ref = -ref;

          ref += DUNE::Math::c_pi + ts.los_angle;

          // Dispatch heading reference
          m_des_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_des_heading);
        }
      };
    }
  }
}

DUNE_TASK