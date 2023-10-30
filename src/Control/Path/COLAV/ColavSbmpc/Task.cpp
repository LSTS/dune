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

namespace Control
{
  namespace Path
  {
    namespace COLAV
    {
      namespace ColavSbmpc
      {
        using DUNE_NAMESPACES;
        
        struct Sample
        {
        };

        struct Arguments
        {
          // Simulation Parameters
          double T, DT, P, Q, D_CLOSE, D_SAFE, K_COLL, 
          KAPPA, PHI_AH, PHI_OT, PHI_HO, PHI_CR, K_P, K_DP,
          K_CHI, K_DCHI_SB, K_DCHI_P, K_CHI_SB, K_CHI_P;
        };

        struct Task: public DUNE::Tasks::Task
        {
          //! sb_mpc object.
          simulationBasedMpc sb_mpc;
          //! List of asv states
          std::vector<double> m_asv_state = std::vector<double>(6,0.0);
          Math::Matrix m_dyn_obst_state;
          //! Desired heading message
          IMC::DesiredHeading des_heading;
          //! Desired speed message
          IMC::DesiredSpeed des_speed;
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
          DUNE::Tasks::Task(name, ctx),
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

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            // Register handler routines.
            bind<IMC::GpsFix>(this);
            bind<IMC::DynObsVec>(this);
            bind<IMC::DesiredHeading>(this);
            bind<IMC::DesiredSpeed>(this);
          }


          //! Update internal state with new parameter values.
          void
          onUpdateParameters(void)
          {
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
          }


          //! Reserve entity identifiers.
          void
          onEntityReservation(void)
          {}


          //! Resolve entity names.
          void
          onEntityResolution(void)
          {}


          //! Acquire resources.
          void
          onResourceAcquisition(void)
          {}


          //! Initialize resources.
          void
          onResourceInitialization(void)
          {
            sb_mpc.create(m_args.T, m_args.DT, m_args.P, m_args.Q, m_args.D_CLOSE,
                        m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                        m_args.KAPPA, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                        m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P);
          }


          //! Release resources.
          void
          onResourceRelease(void)
          {}


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
          consume(const IMC::DesiredHeading* msg)
          {
            //if (!isActive())
            //  return;
            m_des_heading = msg->value;
            std::cout<< "HEADING DESIRED: " << Angles::degrees(m_des_heading) << std::endl;
          }
  

          // COULDN'T PRINT OUT DESIRED SPEED. IS THERE A PLACE TO ACTIVATE THIS MESSAGE?
          void
          consume(const IMC::DesiredSpeed* msg)
          {
            //if (!isActive())
            //  return;
            m_des_speed = msg->value;
            m_des_speed_units = msg->speed_units;
            std::cout<< "SPEED DESIRED: " << m_des_speed << std::endl;
          }


          /*
          // COLAV WITH ONLY COURSE CHANGE
          void 
          consume(const IMC::DesiredHeading* msg)
          {
            m_des_heading = msg->value;
            int utc_time = ((uint32_t)Clock::getSinceEpoch()); // % 86400;

            if(utc_time%10==0)
            {
              sb_mpc.getBestControlOffset(u_os, psi_os, m_asv_state[3], m_des_heading, m_asv_state, m_dyn_obst_state);
            }
            
            double m_des_heading_ = Angles::normalizeRadian(m_des_heading + psi_os);
            des_heading.value = m_des_heading_;
            des_heading.off = Angles::degrees(psi_os);
            dispatch(des_heading);

            if(utc_time%10==0)
            {
              spew("Psi off: %.0f U off: %.0f, Psi_los: %f, Psi_d: %f", Angles::degrees(psi_os), u_os, Angles::degrees(m_des_heading), Angles::degrees(des_heading.value));
            }
          }*/

          

          /*
          // TRIAL TO ADD DESIRED SPEED
          // CONSUME FUNCTION DOES NOT ALLOW TWO PARAMETERS!
          void
          consume(const IMC::DesiredHeading* msg1, const IMC::DesiredSpeed* msg2)
          {
            m_des_heading = msg1->value;
            m_des_speed = msg2->value;

            int utc_time = ((uint32_t)Clock::getSinceEpoch()); // % 86400;
             
            if(utc_time%10==0)
            {
              sb_mpc.getBestControlOffset(u_os, psi_os, m_des_speed, m_des_heading, m_asv_state, m_dyn_obst_state);
            }
            
            double m_des_heading_ = Angles::normalizeRadian(m_des_heading + psi_os);
            double m_des_speed_ = m_des_speed * u_os;
            
            des_heading.value = m_des_heading_;
            des_heading.off = Angles::degrees(psi_os);
            dispatch(des_heading);

            des_speed.value = m_des_speed_;
            dispatch(des_speed);
            
            if(utc_time%10==0)
            {
              spew("Psi off: %.0f U off: %.0f, Psi_los: %f, Psi_d: %f", Angles::degrees(psi_os), u_os, Angles::degrees(m_des_heading), Angles::degrees(des_heading.value));
            }
          }
          */
          


          void
          consume(const IMC::DynObsVec* msg)
          {
            IMC::MessageList<IMC::CollisionAvoidance> ml;
            ml = msg -> obstacles;
            int row_num = ml.size();
            m_dyn_obst_state.resize(row_num, 10);
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



          //! Main loop.
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
