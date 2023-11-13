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
// Author: Melih Akdağ                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Control.hpp>
#include <DUNE/Navigation/sb_mpc.hpp>
#include <Eigen/Dense>

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

namespace Control
{
  namespace Path
  {
    namespace COLAV
    {
      namespace ColavSbmpcNegotiation
      {
        using DUNE_NAMESPACES;

        struct Arguments
        {
          // ILOs parameters
          double corridor;
          double entry_angle;
          double lookahead;
          double int_gain;
          double int_init;
          bool out_vec;
          bool out_los;

          // Sbmpc parameters
          double T, DT, P, Q, D_CLOSE, D_SAFE, K_COLL, 
          KAPPA, PHI_AH, PHI_OT, PHI_HO, PHI_CR, K_P, K_DP,
          K_CHI, K_DCHI_SB, K_DCHI_P, K_CHI_SB, K_CHI_P;

          std::string mmsi;
        };

        struct Task: public DUNE::Control::PathController
        {
          //! ILOS m_integrator
          double m_integrator;
          //! Time of last path controller step
          Delta m_last_step;
          //! Loiter controller gain.
          double m_gain;
          //! Outgoing desired heading message.
          IMC::DesiredHeading m_heading;

          //! sb_mpc object.
          simulationBasedMpc sb_mpc;
          //! List of asv states
          std::vector<double> m_asv_state = std::vector<double>(6,0.0);
          Math::Matrix m_dyn_obst_state;
          //! Desired speed message
          IMC::DesiredSpeed des_speed;
          //! Negotiation data to send
          IMC::NegotiationData intention_to_send;
          //! Ownship mmsi
          std::string m_mmsi;
          //! Ownship latitude
          double m_lat_asv;
          //! Ownship longitude
          double m_lon_asv;
          //! Obstacle latitude
          double m_lat_obst;
          //! Obstacle longitude
          double m_lon_obst;
          //! Timestamp - new 
          double m_timestamp_new;
          //! Timestamp - old 
          double m_timestamp_prev;
          //! Desired heading message.
          double m_des_heading;
          //! Desired speed message.
          double m_des_speed;
          //! Desired speed units.
          uint8_t m_des_speed_units;
          //! Cost <Output from CAS>
          double cost;
          //! Speed offset <Output from CAS>
          double u_os;
          //! Heading offset <Output from CAS>
          double psi_os;

          //! Task arguments.
          Arguments m_args;

          Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          u_os(1.0),
          psi_os(0.0),
          m_lat_asv(0.0),
          m_lon_asv(0.0),
          m_lat_obst(0.0),
          m_lon_obst(0.0),
          m_timestamp_new(0.0),
          m_timestamp_prev(0.0),
          cost(0.0)
          {
            param("MMSI",  m_args.mmsi)
            .description("Vessel MMSI");

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
  
            param("Corridor -- Out Vector Field", m_args.out_vec)
            .defaultValue("false")
            .description("Out of corridor guidance law: vector field");
  
            param("Corridor -- Out LOS", m_args.out_los)
            .defaultValue("false")
            .description("Out of corridor guidance law: LOS");
  
            param("ILOS Lookahead Distance", m_args.lookahead)
            .minimumValue("1.0")
            .maximumValue("50.0")
            .defaultValue("10.0")
            .units(Units::Meter)
            .description("Integral Line-of-Sight look ahead distance");
  
            param("ILOS Integrator Gain", m_args.int_gain)
            .minimumValue("0")
            .maximumValue("4")
            .defaultValue("0")
            .description("Integral Line-of-Sight integral gain");
  
            param("ILOS Integrator Initial Value", m_args.int_init)
            .minimumValue("0")
            .maximumValue("10")
            .defaultValue("0")
            .description("M_Integrator inital value");

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

            param("Weight on Time to Evaluation Instant", m_args.P)
            .minimumValue("0.5")
            .maximumValue("10.0")
            .defaultValue("1.0")
            .description("Weight on Time to Evaluation Instant.");
  
            param("Weight on Distance at Evaluation Instant", m_args.Q)
            .minimumValue("1.0")
            .maximumValue("10.0")
            .defaultValue("3.0")
            .description("Weight on Distance at Evaluation Instant.");
  
            param("COLREGS Distance", m_args.D_CLOSE)
            .units(Units::Meter)
            .minimumValue("10.0")
            .maximumValue("2000.0")
            .defaultValue("600.0")
            .description("Distance where COLREGS are applied [m].");
  
            param("Minimum safe distance to vessels", m_args.D_SAFE)
            .units(Units::Meter)
            .minimumValue("10.0")
            .description("Minimum distance to moving obstacle which is considered as safe [m].");
  
            param("Cost of collisions", m_args.K_COLL)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("1.0")
            .description("Cost of Collision.");
  
            param("Cost of not complying COLREGS", m_args.KAPPA)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("5.0")
            .description("Cost of not Complying with the COLREGS.");
            
            param("PHI AH", m_args.PHI_AH)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("15.0")
            .description("Angle within which an obstacle is said to be ahead [deg].");
  
            param("PHI OT", m_args.PHI_OT)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("68.5")
            .description("Angle outside of which an obstacle will be said to be overtaking, if the speed of the obstacle is larger than the ship's own speed [deg].");
  
            param("PHI HO", m_args.PHI_HO)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("22.5")
            .description("Angle within which an obstacle is said to be head on [deg].");
            
            param("PHI CR", m_args.PHI_CR)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("68.5")
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
            .defaultValue("1.3")
            .description("Cost of deviating from the nominal Course.");
  
            param("Cost of Course change to SB", m_args.K_DCHI_SB)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("0.9")
            .description("Cost of Changing the Course Offset to Starboard.");
  
            param("Cost of Course change to Port", m_args.K_DCHI_P)
            .minimumValue("0.0")
            .maximumValue("11.0")
            .defaultValue("1.2")
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
            .defaultValue("1.2")
            .description("Cost of Selecting Turn to Port.");
  
            // Everything is ok so set task entity state at normal with 'Active' message.
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            // Register handler routines.
            bind<IMC::GpsFix>(this);
            bind<IMC::DynObsVec>(this);
            bind<IMC::DesiredSpeed>(this);
            bind<IMC::NegotiationData>(this);
          }


          //! Update internal state with new parameter values.
          void
          onUpdateParameters(void)
          {
            // Initialize ILOS m_integrator
            m_integrator = m_args.int_init;
            PathController::onUpdateParameters();
  
            if (paramChanged(m_args.entry_angle))
              m_args.entry_angle = Angles::radians(m_args.entry_angle);
  
            m_gain = std::tan(m_args.entry_angle) / m_args.corridor;

            // T and DT cannot be changed online. If changed, re-create the object.
            if(paramChanged(m_args.T) || paramChanged(m_args.DT))
                sb_mpc.create(m_args.T, m_args.DT, m_args.P, m_args.Q, m_args.D_CLOSE,
                          m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                          m_args.KAPPA, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                          m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P);
            if(paramChanged(m_args.P))
                sb_mpc.setP(m_args.P);
            if(paramChanged(m_args.Q))
                sb_mpc.setQ(m_args.Q);
            if(paramChanged(m_args.D_CLOSE))
                sb_mpc.setDClose(m_args.D_CLOSE);
            if(paramChanged(m_args.D_SAFE))
                sb_mpc.setDSafe(m_args.D_SAFE);
            if(paramChanged(m_args.K_COLL))
                sb_mpc.setKColl(m_args.K_COLL);
            if(paramChanged(m_args.KAPPA))
                sb_mpc.setKappa(m_args.KAPPA);
            if(paramChanged(m_args.PHI_AH))
                sb_mpc.setPhiAH(m_args.PHI_AH);
            if(paramChanged(m_args.PHI_OT))
                sb_mpc.setPhiOT(m_args.PHI_OT);
            if(paramChanged(m_args.PHI_HO))
                sb_mpc.setPhiHO(m_args.PHI_HO);
            if(paramChanged(m_args.PHI_CR))
                sb_mpc.setPhiCR(m_args.PHI_CR);
            if(paramChanged(m_args.K_P))
                sb_mpc.setKP(m_args.K_P);
            if(paramChanged(m_args.K_DP))
                sb_mpc.setKdP(m_args.K_DP);
            if(paramChanged(m_args.K_CHI))
                sb_mpc.setKChi(m_args.K_CHI);
            if(paramChanged(m_args.K_DCHI_SB))
                sb_mpc.setKdChiSB(m_args.K_DCHI_SB);
            if(paramChanged(m_args.K_DCHI_P))
                sb_mpc.setKdChiP(m_args.K_DCHI_P);
            if(paramChanged(m_args.K_CHI_SB))
                sb_mpc.setKChiSB(m_args.K_CHI_SB);
            if(paramChanged(m_args.K_CHI_P))
                sb_mpc.setKChiP(m_args.K_CHI_P);
            if(paramChanged(m_args.mmsi))
                m_mmsi = m_args.mmsi;
          }


          void
          onEntityReservation(void)
          {
            PathController::onEntityReservation();
          }
  

          void
          onPathActivation(void)
          {
            // Activate heading cotroller.
            enableControlLoops(IMC::CL_YAW);
          }


          //! Initialize resources.
          void
          onResourceInitialization(void)
          {
            sb_mpc.create(m_args.T, m_args.DT, m_args.P, m_args.Q, m_args.D_CLOSE,
                        m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                        m_args.KAPPA, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                        m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P);
            m_mmsi = m_args.mmsi;
          }
  

          void
          reset(void)
          {
            m_integrator = 0.0;
          }


          //! From GPS Task
          void
          consume(const IMC::GpsFix* msg)
          {
            //if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            //  return;
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
          consume(const IMC::DesiredSpeed* msg)
          {
            //if (!isActive())
            //  return;
            m_des_speed = msg->value;
            m_des_speed_units = msg->speed_units;
            //des_speed.value = msg->value;
            std::cout<< "SPEED DESIRED: " << des_speed.value << std::endl;
          }


          void
          consume(const IMC::DynObsVec* msg)
          {
            IMC::MessageList<IMC::CollisionAvoidance> ml;
            ml = msg -> obstacles;
            int row_num = ml.size();
            m_dyn_obst_state.resize(row_num, 13);
            for(auto i = ml.begin(); i!=ml.end();++i)
            {
              for(unsigned int n=0; n<row_num; ++n)
              {
                m_dyn_obst_state(n, 0) = (*i)->x;
                m_dyn_obst_state(n, 1) = (*i)->y;
                m_dyn_obst_state(n, 2) = (*i)->course;
                m_dyn_obst_state(n, 3) = (*i)->speed;
                m_dyn_obst_state(n, 4) = 0.0;
                m_dyn_obst_state(n, 5) = 10; //(*i)->length/2; //a = cas.length - b
                m_dyn_obst_state(n, 6) = 10; //(*i)->length/2; //b = cas.length - a
                m_dyn_obst_state(n, 7) = 2; //(*i)->width/2; //c = cas.width - d
                m_dyn_obst_state(n, 8) = 2; //(*i)->width/2; //d = cas.width - c
                // Convert MMSI from string to int for CAS.
                std::stringstream geek((*i)->mmsi); //contains int MMSI.
                int mmsi = 0; 
                geek >> mmsi;
                m_dyn_obst_state(n, 9) = mmsi;
              }
            }
            //spew("Matrix size: %d %d", m_dyn_obst_state.rows(), m_dyn_obst_state.columns());
          }


          void 
          publish_negotiation_data(double ref, double psi_os, double u_os)
          {
            intention_to_send.mmsi = m_mmsi;
            intention_to_send.cog_int = Angles::normalizeRadian(ref + psi_os);
            intention_to_send.sog_int = m_des_speed * u_os;
            intention_to_send.state = 0.0;
            dispatch(intention_to_send);
            //std::cout << intention_to_send.mmsi << " " << intention_to_send.cog_int << " " << intention_to_send.sog_int << " " << intention_to_send.state << " end " << std::endl;
            std::cout << "HEYOOOO SENDING NEGOTIATION DATA!" << std::endl;
          }


          void
          consume(const IMC::NegotiationData* msg)
          {
            //for(unsigned int n=0; n<m_dyn_obst_state.rows(); ++n)
            //{
            //    if(m_dyn_obst_state(n, 9) == std::stoi(msg->mmsi))
            //    {
            //        std::cout << m_dyn_obst_state(n, 9) << msg->mmsi << std::endl;
            //    }
            //}
            //m_dyn_obst_mmsi = msg->mmsi;
            //m_dyn_obst_cog_int = msg->cog_int;
            //m_dyn_obst_sog_int = msg->sog_int;
            //m_dyn_obst_state = msg->state;
            std::cout << "HEYOOOO RECEIVED NEGOTIATION DATA" << msg->mmsi << std::endl;
          }


          inline double
          computeK(double l1, double l2, double ts_y, double factor)
          {
            return l1 / (std::pow(ts_y + m_args.int_gain * (m_integrator + factor), 2) + l2);
          }


          //! Execute a path control step
          //! From base class PathController
          void
          step(const IMC::EstimatedState& state, const TrackingState& ts)
          {
            // Note:
            // cross-track position (lateral error) = ts.track_pos.y
            // and along-track position = ts.track_pos.x
            double ref;
            double k1;
            double k2;
            double k3;
            double k4;
            double loc_1 = m_args.lookahead * ts.track_pos.y;
            double loc_2 = std::pow(m_args.lookahead, 2);
            double timestep = m_last_step.getDelta();
            double kcorr = ts.track_pos.y / m_args.corridor;
            double akcorr = std::fabs(kcorr);
  
            if (akcorr > 1)
            {
              // Outside corridor, m_integrator OFF
              m_integrator = 0.0;
            }
            else
            {
              // Inside corridor, m_integrator ON
              // RK4 integration
              k1 = computeK(loc_1, loc_2, ts.track_pos.y, 0.0);
              k2 = computeK(loc_1, loc_2, ts.track_pos.y, k1/2);
              k3 = computeK(loc_1, loc_2, ts.track_pos.y, k2/2);
              k4 = computeK(loc_1, loc_2, ts.track_pos.y, k3);
  
              m_integrator += timestep * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
            }
  
            // ILOS guidance
            if (ts.track_pos.x > ts.track_length)
            {
              // Past the track goal: this should never happen but ...
              ref = getBearing(state, ts.end);
            }
            else if (akcorr > 1 && m_args.out_vec && !m_args.out_los)
            {
              // Outside corridor, m_integrator OFF, vector field guidance
              ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
            }
            else if (akcorr > 1 && !m_args.out_vec && m_args.out_los)
            {
              // Outside corridor, m_integrator OFF, LOS guidance
              ref = ts.track_bearing - std::atan(ts.track_pos.y / m_args.lookahead);
            }
            else
            {
              // Inside corridor, m_integrator ON, ILOS guidance
              ref = ts.track_bearing - std::atan((ts.track_pos.y + m_args.int_gain * m_integrator) / m_args.lookahead);
            }


            int utc_time = ((uint32_t)Clock::getSinceEpoch()); // % 86400;
            if(utc_time%5==0)
            {
              sb_mpc.getBestControlOffset(u_os, psi_os, m_des_speed, ref, m_asv_state, m_dyn_obst_state);
              publish_negotiation_data(ref, psi_os, u_os);
              spew("Psi off: %.0f U off: %.2f", Angles::degrees(psi_os), u_os);
            }
            
            double m_des_speed_ = m_des_speed * u_os;
            des_speed.value = m_des_speed_;
            dispatch(des_speed);

            // Dispatch heading reference
            m_heading.value = Angles::normalizeRadian(ref + psi_os);
            m_heading.off = Angles::degrees(psi_os);
            dispatch(m_heading);

            //intention_to_send.mmsi = m_mmsi;
            //intention_to_send.cog_int = m_heading.value;
            //intention_to_send.sog_int = des_speed.value;
            //intention_to_send.state = "0";
            //dispatch(intention_to_send);
            //std::cout << intention_to_send.mmsi << " " << intention_to_send.cog_int << " " << intention_to_send.sog_int << " " << intention_to_send.state << " end " << std::endl;
          }


          //! Execute a loiter control step
          //! From base class PathController & VectorField guidance law
          void
          loiter(const IMC::EstimatedState& state, const TrackingState& ts)
          {
            double ref = DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));
  
            if (!ts.loiter.clockwise)
              ref = -ref;
  
            ref += DUNE::Math::c_pi + ts.los_angle;
  
            if (ts.cc)
              ref += state.psi - ts.course;  // course control
  
            // Dispatch heading reference
            m_heading.value = Angles::normalizeRadian(ref);
            dispatch(m_heading);
          }


          void
          onMain(void)
          {
            while (!stopping())
            {
              waitForMessages(1);
            }
          }


        };
      }
    }
  }
}

DUNE_TASK
