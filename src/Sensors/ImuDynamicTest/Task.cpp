//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Teixeira                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace ImuDynamicTest
  {
    using DUNE_NAMESPACES;

    //! Weighted Moving Average filter value.
    static const float c_wma_filter = 0.1f;

    struct Task: public Tasks::Periodic
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.

      //! Device axes.
      enum Axes
      {
        //! X-axis.
        AXIS_X = 0,
        //! Y-axis.
        AXIS_Y = 1,
        //! Z-axis.
        AXIS_Z = 2
      };

      struct Arguments
      {
        //! IMU entity label.
        std::string elabel_imu;
      };

      bool m_dead_reckoning;
      //! Dead reckoning mode sync.
      bool m_dead_reckoning_sync;
      //! Dead reckoning  delta sync
      bool m_dead_reckoning_delta;

      unsigned m_imu_eid;

      unsigned m_ahrs_eid;
     //! Task arguments.
      Arguments m_args;

      double m_edelta_bfr[3];

      double m_edelta_bfr2[3];

      double m_edelta_bfr6[3];

      float m_edelta_readings;

      float m_edelta_readings2;

      float m_edelta_readings6;

      double m_euler_bfr[3];

      double m_euler_bfr2[3];

      double m_euler_bfr3[3];

      double m_euler_bfr4[3];

      double m_euler_bfr5[3];
      double m_euler_bfr6[3];
      double m_euler_bfr7[3];

      double m_earth_rot_remo[3];

      double m_euler_bfr_consu[3];

      float m_edelta_ts;
      bool m_gps_disable;
      float m_euler_readings;
      float m_euler_readings7;
      double m_declination;
      double m_last_lat;
      double tstep ;

      Math::MovingAverage<double>* m_avg_gps;

      IMC::EulerAngles euler_msg;
      IMC::EulerAngles euler2_msg;
      IMC::EulerAngles euler3_msg;
      IMC::EulerAngles euler4_msg;
      IMC::EulerAngles euler5_msg;
      IMC::EulerAngles euler6_msg;
      IMC::EulerAngles euler7_msg;
      IMC::EulerAngles euler8_msg;
      IMC::EulerAngles euler9_msg;

      Time::Delta m_delta;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {


          param("Entity Label - IMU", m_args.elabel_imu)
          .description("Entity label of the IMU");

        m_dead_reckoning = false;
        m_dead_reckoning_sync = false;
        m_dead_reckoning_delta = false;
        m_edelta_ts = 0.01;
        m_gps_disable = false;
        tstep =0.05;
        bind<IMC::EulerAnglesDelta>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::GpsFix>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        unsigned eid = 0;

          try
          {
            eid = resolveEntity("euler_filter");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_filter");
          }

          euler_msg.setSourceEntity(eid);

                   try
          {
            eid = resolveEntity("euler_raw");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_raw");
          }

          euler2_msg.setSourceEntity(eid);

         try
          {
            eid = resolveEntity("euler_filter_earth");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_filter_earth");
          }

          euler3_msg.setSourceEntity(eid);

         try
          {
            eid = resolveEntity("euler_raw_earth");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_raw_earth");
          }

          euler4_msg.setSourceEntity(eid);


         try
          {
            eid = resolveEntity("euler_raw_earth_ned");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_raw_earth_ned");
          }

          euler5_msg.setSourceEntity(eid);

         try
          {
            eid = resolveEntity("euler_imu_last");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_imu_last");
          }
          euler6_msg.setSourceEntity(eid);

         try
          {
            eid = resolveEntity("euler_AHRS_last");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_AHRS_last");
          }
          euler7_msg.setSourceEntity(eid);

         try
          {
            eid = resolveEntity("earth_rot_remove");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("earth_rot_remove");
          }

          euler8_msg.setSourceEntity(eid);
/*
         try
          {
            eid = resolveEntity("euler_raw_earth_ned");
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity("euler_raw_earth_ned");
          }

          euler9_msg.setSourceEntity(eid);
*/

      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
          try
          {
            m_imu_eid = resolveEntity(m_args.elabel_imu);
          }
          catch (...)
          {
            m_imu_eid = std::numeric_limits<unsigned>::max();
          }

           try
          {
            m_ahrs_eid = resolveEntity("AHRS");
          }
          catch (...)
          {
            m_ahrs_eid = std::numeric_limits<unsigned>::max();
          }

      }

      void
      consume(const IMC::EulerAnglesDelta* msg)
      {
        if (msg->getSourceEntity() != m_imu_eid)
         return;

        if(!m_dead_reckoning_sync)
          return;
        m_dead_reckoning_delta = true;

         if (std::fabs(msg->x) > Math::c_pi / 10.0 ||
            std::fabs(msg->y) > Math::c_pi / 10.0 ||
            std::fabs(msg->z) > Math::c_pi / 10.0)
          {
            war(DTR("received euler angles delta beyond range: %f, %f, %f"),
              msg->x, msg->y, msg->z);
            return;
          }

          m_edelta_bfr[AXIS_X] += msg->x;
          m_edelta_bfr[AXIS_Y] += msg->y;
          m_edelta_bfr[AXIS_Z] += msg->z;

          m_edelta_bfr2[AXIS_X] += msg->x;
          m_edelta_bfr2[AXIS_Y] += msg->y;
          m_edelta_bfr2[AXIS_Z] += msg->z;

          m_edelta_bfr6[AXIS_X] = msg->x;
          m_edelta_bfr6[AXIS_Y] = msg->y;
          m_edelta_bfr6[AXIS_Z] = msg->z;

          ++m_edelta_readings;
          ++m_edelta_readings2;
          ++m_edelta_readings6;
        m_edelta_ts = msg->timestep;

      }
      void
      consume(const IMC::EntityActivationState* msg)
      {

          if (msg->getSource() != getSystemId())
            return;

          if (msg->getSourceEntity() != m_imu_eid)
            return;

          if ((msg->state == IMC::EntityActivationState::EAS_ACTIVE ||
               msg->state == IMC::EntityActivationState::EAS_ACT_DONE))
          {
            // IMU already activated.
            if (m_dead_reckoning_sync)
              return;

            // Dead reckoning mode.
            m_dead_reckoning_sync = true;

          }
          else
          {
            if (!m_dead_reckoning_sync)
              return;
            m_dead_reckoning_sync =false;
            m_dead_reckoning_delta =false;
            m_dead_reckoning = false;

          }
      }
      void
      consume(const IMC::EulerAngles* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        if (msg->getSourceEntity() != m_ahrs_eid)
          return;

        if (std::fabs(msg->phi) > Math::c_pi ||
          std::fabs(msg->theta) > Math::c_pi ||
          std::fabs(msg->psi) > Math::c_pi)
        {
          war(DTR("received euler angles beyond range: %f, %f, %f"),
              msg->phi, msg->theta, msg->psi);
          return;
        }


        m_euler_bfr_consu[AXIS_X] += msg->phi;
        m_euler_bfr_consu[AXIS_Y] += msg->theta;

        // Heading buffer maintains sign.
        m_euler_bfr_consu[AXIS_Z] += getEuler(AXIS_Z) + Math::Angles::minSignedAngle(getEuler(AXIS_Z), msg->psi);
        ++m_euler_readings;
        ++m_euler_readings7;

        m_euler_bfr7[AXIS_X] = msg->phi;
        m_euler_bfr7[AXIS_Y] = msg->theta;

        // Heading buffer maintains sign.
        m_euler_bfr7[AXIS_Z] = getEuler7(AXIS_Z) + Math::Angles::minSignedAngle(getEuler7(AXIS_Z), msg->psi);


        if (m_gps_disable)
        {
          m_euler_bfr_consu[AXIS_Z] += m_declination;
          m_euler_bfr7[AXIS_Z] += m_declination;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
         if (m_gps_disable== true)
        return;

       double m_gps_hacc_factor =  1.8 ;
       double m_max_hacc =  20;
       double m_max_hdop =  4;

        // Check fix validity.
        if ((msg->validity & IMC::GpsFix::GFV_VALID_POS) == 0)
        {
          return;
        }

        double max_hacc = m_avg_gps->mean();

        m_avg_gps->update(msg->hacc);

        if (m_avg_gps->sampleSize() > 2 && msg->hacc > m_gps_hacc_factor * max_hacc)
        {

          return;
        }

        // Check if we have valid Horizontal Accuracy index.
        if (msg->validity & IMC::GpsFix::GFV_VALID_HACC)
        {

          // Check if it is above Maximum Horizontal Accuracy.
          if (msg->hacc > m_max_hacc)
          {
            return;
          }
        }
        else
        {
          // Horizontal Dilution of Precision.
          if (msg->hdop > m_max_hdop)
          {
            return;
          }
        }



        // Check current declination value.
        checkDeclination(msg->lat, msg->lon, msg->height);
        m_last_lat = msg->lat;
        m_gps_disable = true;

      }

      void
      checkDeclination(double lat, double lon, double height)
      {

        // Compute declination value
        // -- note: this is done only once, thus the short-lived wmm object
        Coordinates::WMM wmm(m_ctx.dir_cfg);
        m_declination = wmm.declination(lat, lon, height);
      }


      inline double
      getEulerDelta(unsigned axis) const
      {
        return m_edelta_readings ? (m_edelta_bfr[axis] / m_edelta_readings) : 0.0;
      }

       inline double
      getEulerDelta2(unsigned axis) const
      {
        return m_edelta_readings2 ? (m_edelta_bfr2[axis] / m_edelta_readings2) : 0.0;
      }

       inline double
      getEulerDelta6(unsigned axis) const
      {
        return m_edelta_readings6 ? (m_edelta_bfr6[axis] ) : 0.0;
      }

      inline void
      updateEulerDelta(float filter)
      {
        for (unsigned i = 0; i < 3; ++i)
          m_edelta_bfr[i] =  getEulerDelta(i) * filter;

        m_edelta_readings = filter;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_avg_gps = new Math::MovingAverage<double>(7);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }


      void
      imuActivateDeadReckoning()
      {
        m_dead_reckoning = true;
        inf(DTR("IMU Sync and collecting "));
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr2[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr3[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr4[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr5[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr6[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_euler_bfr7[i] = 0;
        for (unsigned i = 0; i < 3; ++i)
        m_edelta_bfr[i] = 0;


      }

      void
      resetEulerAnglesDelta(void)
      {
        m_edelta_bfr2[AXIS_X] = 0.0;
        m_edelta_bfr2[AXIS_Y] = 0.0;
        m_edelta_bfr2[AXIS_Z] = 0.0;
        m_edelta_readings2=0;
      }

      void
      resetEulerAnglesDelta6(void)
      {
        m_edelta_bfr6[AXIS_X] = 0.0;
        m_edelta_bfr6[AXIS_Y] = 0.0;
        m_edelta_bfr6[AXIS_Z] = 0.0;
        m_edelta_readings6=0;
      }

      void
      resetEulerAngles(void )
      {
        m_euler_bfr_consu[AXIS_X] = 0.0;
        m_euler_bfr_consu[AXIS_Y] = 0.0;
        m_euler_bfr_consu[AXIS_Z] = 0.0;
        m_euler_readings=0;
      }


      void
      resetEulerAngles7(void )
      {
        m_euler_bfr7[AXIS_X] = 0.0;
        m_euler_bfr7[AXIS_Y] = 0.0;
        m_euler_bfr7[AXIS_Z] = 0.0;
        m_euler_readings7=0;
      }

      inline double
      getEuler(unsigned axis) const
      {
        return m_euler_readings ? (m_euler_bfr_consu[axis] / m_euler_readings) : 0.0;
      }

      inline double
      getEuler7(unsigned axis) const
      {
        return m_euler_readings7 ? (m_euler_bfr7[axis] ) : 0.0;
      }


      inline double
      getTimeStep(void)
      {
        return m_delta.getDelta();
      }



      void
      extractEarthRotationRaw(double * rot_axis)
      {

         double pitch = getEuler(AXIS_Y);

        // Avoid division by zero.
        if (!std::cos(pitch))
          return ;

        double p, q, r;

        if (!m_edelta_readings)
          return ;


        p = getEulerDelta2(AXIS_X) / 0.01;
        q = getEulerDelta2(AXIS_Y) / 0.01;
        r = getEulerDelta2(AXIS_Z) / 0.01;
        // Insert euler angles into row matrix.
        Math::Matrix ea(3,1);
        ea(0) = Math::Angles::normalizeRadian(getEuler(AXIS_X));
        ea(1) = Math::Angles::normalizeRadian(getEuler(AXIS_Y));
        ea(2) = Math::Angles::normalizeRadian(getEuler(AXIS_Z));

        // Earth rotation vector.
        Math::Matrix we(3,1);
        we(0) = Math::c_earth_rotation * std::cos(m_last_lat);
        we(1) = 0.0;
        we(2) = - Math::c_earth_rotation * std::sin(m_last_lat);

        // Sensed angular velocities due to Earth rotation effect.
        Math::Matrix av(3,1);
        av = transpose(ea.toDCM()) * we;

        // Extract from angular velocities measurements.
        p -= av(0);
        q -= av(1);
        r -= av(2);

        rot_axis[0] = p ;
        rot_axis[1] = q ;
        rot_axis[2] = r ;
      }

      void
      extractEarthRotationfilted( double * rot_axis)
      {

         double pitch = getEuler(AXIS_Y);

        // Avoid division by zero.
        if (!std::cos(pitch))
          return ;


        double p, q, r;

        if (!m_edelta_readings)
          return ;


        p = getEulerDelta(AXIS_X) / 0.01;
        q = getEulerDelta(AXIS_Y) / 0.01;
        r = getEulerDelta(AXIS_Z) / 0.01;
        // Insert euler angles into row matrix.
        Math::Matrix ea(3,1);
        ea(0) = Math::Angles::normalizeRadian(getEuler(AXIS_X));
        ea(1) = Math::Angles::normalizeRadian(getEuler(AXIS_Y));
        ea(2) = Math::Angles::normalizeRadian(getEuler(AXIS_Z));

        // Earth rotation vector.
        Math::Matrix we(3,1);
        we(0) = Math::c_earth_rotation * std::cos(m_last_lat);
        we(1) = 0.0;
        we(2) = - Math::c_earth_rotation * std::sin(m_last_lat);

        // Sensed angular velocities due to Earth rotation effect.
        Math::Matrix av(3,1);
        av = transpose(ea.toDCM()) * we;

        // Extract from angular velocities measurements.
        p -= av(0);
        q -= av(1);
        r -= av(2);

        rot_axis[0] = p ;
        rot_axis[1] = q ;
        rot_axis[2] = r ;

        m_earth_rot_remo[0]= m_earth_rot_remo[0] -av(0)*tstep ;
        m_earth_rot_remo[1]= m_earth_rot_remo[1] -av(1)*tstep ;
        m_earth_rot_remo[2]= m_earth_rot_remo[2] -av(2)*tstep ;
        euler8_msg.setTimeStamp(Clock::getSinceEpoch());
        euler8_msg.phi = m_earth_rot_remo[0];
        euler8_msg.theta = m_earth_rot_remo[1];
        euler8_msg.psi = m_earth_rot_remo[2];
        dispatch(euler8_msg, DF_KEEP_TIME);
      }


      //! Main loop.
      void
      task(void)
      {


        tstep = getTimeStep();

        // Check if we have a valid time delta.
        if (tstep < 0)
          return;

        if(m_dead_reckoning)
        {
          //euler imu filtered integrated
          double imc_tstamp = Clock::getSinceEpoch();
          for (unsigned i = 0; i < 3; ++i)
          {
             m_euler_bfr[i]=m_euler_bfr[i]+ ((getEulerDelta(i)/0.01)*tstep);
             m_euler_bfr[i] =Angles::normalizeRadian(m_euler_bfr[i]);
          }
          euler_msg.setTimeStamp(imc_tstamp);
          euler_msg.phi = m_euler_bfr[0];
          euler_msg.theta = m_euler_bfr[1];
          euler_msg.psi = m_euler_bfr[2];
          euler_msg.psi_magnetic = 0;
          euler_msg.time =(fp64_t) m_edelta_readings;
          dispatch(euler_msg, DF_KEEP_TIME);
          //euler imu media integrated
          for (unsigned i = 0; i < 3; ++i)
          {
            m_euler_bfr2[i] = m_euler_bfr2[i]+ ((getEulerDelta2(i)/0.01)*tstep);
            m_euler_bfr2[i] = Angles::normalizeRadian(m_euler_bfr2[i]);
          }
          euler2_msg.setTimeStamp(imc_tstamp);
          euler2_msg.phi = m_euler_bfr2[0];
          euler2_msg.theta = m_euler_bfr2[1];
          euler2_msg.psi = m_euler_bfr2[2];
          euler2_msg.psi_magnetic = 0;
          euler2_msg.time = (fp64_t) m_edelta_readings2;
          dispatch(euler2_msg, DF_KEEP_TIME);
          //inegrar os dados dos 3 eixos



          // euler_raw_earth_ned
          for (unsigned i = 0; i < 3; ++i)
          {
             m_euler_bfr6[i]=m_euler_bfr6[i]+ ((getEulerDelta6(i)/0.01)*tstep);
             m_euler_bfr6[i] =Angles::normalizeRadian(m_euler_bfr6[i]);
          }

            euler6_msg.setTimeStamp(imc_tstamp);
            euler6_msg.phi = m_euler_bfr6[0];
            euler6_msg.theta = m_euler_bfr6[1];
            euler6_msg.psi = m_euler_bfr6[2];
            dispatch(euler6_msg, DF_KEEP_TIME);

          //euler angles last AHRS

            euler7_msg.setTimeStamp(imc_tstamp);
            euler7_msg.phi = m_euler_bfr7[0];
            euler7_msg.theta = m_euler_bfr7[1];
            euler7_msg.psi = m_euler_bfr7[2];
            dispatch(euler7_msg, DF_KEEP_TIME);


          if (m_gps_disable)
          {
            double rot_axis[3];
            for (unsigned i = 0; i < 3; ++i)
            {
              rot_axis[i] = 0.0;
            }

            extractEarthRotationfilted(rot_axis);
            for (unsigned i = 0; i < 3; ++i)
            {
               m_euler_bfr3[i]=m_euler_bfr3[i]+ (rot_axis[i]*tstep);
               m_euler_bfr3[i] =Angles::normalizeRadian(m_euler_bfr3[i]);
            }

            euler3_msg.setTimeStamp(imc_tstamp);
            euler3_msg.phi = m_euler_bfr3[0];
            euler3_msg.theta = m_euler_bfr3[1];
            euler3_msg.psi = m_euler_bfr3[2];
            euler3_msg.time =(fp64_t) m_edelta_readings;
            dispatch(euler3_msg, DF_KEEP_TIME);

            for (unsigned i = 0; i < 3; ++i)
            {
              rot_axis[i] = 0.0;
            }
            extractEarthRotationRaw(rot_axis);
            for (unsigned i = 0; i < 3; ++i)
            {
               m_euler_bfr4[i]=m_euler_bfr4[i]+ (rot_axis[i]*tstep);
               m_euler_bfr4[i] =Angles::normalizeRadian(m_euler_bfr4[i]);
            }
            //earth rotation calc

            euler4_msg.setTimeStamp(imc_tstamp);
            euler4_msg.phi = m_euler_bfr4[0];
            euler4_msg.theta = m_euler_bfr4[1];
            euler4_msg.psi = m_euler_bfr4[2];
            euler4_msg.time =(fp64_t) m_edelta_readings;
            dispatch(euler4_msg, DF_KEEP_TIME);

            for (unsigned i = 0; i < 3; ++i)
            {
              rot_axis[i] = 0.0;
            }

            double roll = getEuler(AXIS_X);
            double pitch = getEuler(AXIS_Y);
            double temp;
            if (!std::cos(pitch))
            {
              temp = 0.0;
            }
            else
            {
              extractEarthRotationRaw(rot_axis);
              temp = (std::sin(roll) * rot_axis[1] + std::cos(roll) * rot_axis[2]) / std::cos(pitch);
            }

            m_euler_bfr5[2] = m_euler_bfr5[2] + (temp)*tstep;
            m_euler_bfr5[2] =Angles::normalizeRadian(m_euler_bfr5[2]);

            euler5_msg.setTimeStamp(imc_tstamp);
            euler5_msg.psi = m_euler_bfr5[2];
            euler5_msg.time =(fp64_t) m_edelta_readings;
            dispatch(euler5_msg, DF_KEEP_TIME);

          }

          updateEulerDelta(c_wma_filter);
          resetEulerAnglesDelta();
          resetEulerAnglesDelta6();
          resetEulerAngles();
          resetEulerAngles7();
        }

        if(m_dead_reckoning_sync && !m_dead_reckoning && m_dead_reckoning_delta)
        {
          imuActivateDeadReckoning();
        }


      }
    };
  }
}

DUNE_TASK
