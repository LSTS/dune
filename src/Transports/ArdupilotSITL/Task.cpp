//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Kristian Klausen                                                 *
//***************************************************************************
// The job of this task is to work as an interface between Dune, ardupilot control
// and APM Sitl

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace ArdupilotSITL
  {
    using DUNE_NAMESPACES;

    struct SITL_rc_control {
      uint16_t pwm[11];
      uint16_t speed, direction, turbulance;
    } ;

    struct SITL_fdm {
      // this is the packet sent by the simulator
      // to the APM executable to update the simulator state
      // All values are little-endian
      double latitude, longitude; // degrees
      double altitude;  // MSL
      double heading;   // degrees
      double speedN, speedE, speedD; // m/s
      double xAccel, yAccel, zAccel;       // m/s/s in body frame
      double rollRate, pitchRate, yawRate; // degrees/s/s in earth frame
      double rollDeg, pitchDeg, yawDeg;    // euler angles, degrees
      double airspeed; // m/s
      uint32_t magic; // 0x4c56414f
    };



    struct SITL_pwm_packet {
      uint16_t pwm[8];
    };

    struct Task: public DUNE::Tasks::Task
    {


      UDPSocket* m_UPD_sock_rc_in;
      UDPSocket* m_UDP_sock_out;
      uint8_t m_buf[512];

      IMC::SimulatedState m_sstate;
      IMC::Acceleration m_accel;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        bind<IMC::ArduPilotPwm>(this);
        bind<IMC::SimulatedState>(this);
        bind<IMC::Acceleration>(this);

        // Set OK status
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_UDP_sock_out = new UDPSocket;
        openConnection();
      }

      void
      consume(const IMC::SimulatedState* simstate)
      {
        m_sstate = *simstate;

        // Create sitl struct and send over socket.
        SITL_fdm fdm;
        fdm.magic = 0x4c56414f;

        // Simulation is done in NED. Calculate to geodetic coordinates.
        fp64_t rcv_lat = simstate->lat;
        fp64_t rcv_lon = simstate->lon;
        fp64_t rcv_hei = simstate->height;

        WGS84::displace(simstate->x, simstate->y, simstate->z,
            &rcv_lat, &rcv_lon, &rcv_hei);

        IMC::SimulatedState sim = *simstate;

        sim.lat     = rcv_lat;
        sim.lon     = rcv_lon;
        sim.height  = rcv_hei;

        fdm.latitude  = Math::Angles::degrees(rcv_lat);
        fdm.longitude = Math::Angles::degrees(rcv_lon);
        fdm.altitude  = rcv_hei;
        fdm.rollDeg   = Math::Angles::degrees(simstate->phi);
        fdm.pitchDeg  = Math::Angles::degrees(simstate->theta);
        fdm.yawDeg    = Math::Angles::degrees(simstate->psi);
        fdm.heading   = Math::Angles::degrees(simstate->psi);

        fdm.rollRate  = Math::Angles::degrees(simstate->p);
        fdm.pitchRate = Math::Angles::degrees(simstate->q);
        fdm.yawRate   = Math::Angles::degrees(simstate->r);

        // If we are moving downwards, positive z in the ned-frame
        fp32_t vx, vy, vz;
        BodyFixedFrame::toInertialFrame(simstate->phi, simstate->theta, simstate->psi,
            simstate->u, simstate->v, simstate->w,
            &vx, &vy, &vz);


        fdm.speedN = vx;
        fdm.speedE = vy;
        fdm.speedD = vz;


        // Need to rotate gravity to body frame.
        Matrix gravity = Matrix(3,1,0.0);
        gravity(2) = -Math::c_gravity;
        fp32_t gx, gy, gz;
        BodyFixedFrame::toBodyFrame(simstate->phi, simstate->theta, simstate->psi,
            gravity(0), gravity(1), gravity(2),
            &gx, &gy, &gz);

        fdm.xAccel = m_accel.x + gx;
        fdm.yAccel = m_accel.y + gy;
        fdm.zAccel = m_accel.z + gz;

        Matrix speeds(3,1,0.0);
        speeds(0) = simstate->u;
        speeds(1) = simstate->v;
        speeds(2) = simstate->w;
        fdm.airspeed = sqrt(squaresum(speeds));


        // Send to ardupilot
        try
        {
          trace(DTR("Sending FDM to ardupilot.."));
          m_UDP_sock_out->write((unsigned char*)&fdm, sizeof(SITL_fdm), "127.0.0.1", 5501);
        }
        catch(...)
        {
          inf(DTR("Unable to send fdm"));
        }




      }

      void
      consume(const IMC::Acceleration* msg)
      {
        m_accel = *msg;
      }

      void
      consume(const IMC::ArduPilotPwm* msg)
      {

        // Send RC packet!
        SITL_pwm_packet pwm;
        pwm.pwm[0] = msg->chan1;
        pwm.pwm[1] = msg->chan2;
        pwm.pwm[2] = msg->chan3;
        pwm.pwm[3] = msg->chan4;
        pwm.pwm[4] = msg->chan5;
        pwm.pwm[5] = msg->chan6;
        pwm.pwm[6] = msg->chan7;
        pwm.pwm[7] = msg->chan8;

        spew(DTR("Sending raw pwm data.."));
        try
        {
          m_UDP_sock_out->write((unsigned char*)&pwm, sizeof(SITL_pwm_packet), "127.0.0.1", 5501);
        }
        catch(...)
        {
          inf(DTR("Unable to send."));
        }

      }

      void
      openConnection()
      {
        Memory::clear(m_UPD_sock_rc_in);
        m_UPD_sock_rc_in = new UDPSocket;
        m_UPD_sock_rc_in->bind(5502, "");
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
        Memory::clear(m_UPD_sock_rc_in);
      }

      int
      receiveData(uint8_t* buf, size_t blen)
      {
        if (m_UPD_sock_rc_in)
          {
            try
            {
                return m_UPD_sock_rc_in->read(buf, blen);
            }
            catch (...)
            {
                war(DTR("Connection lost, retrying..."));
                Memory::clear(m_UPD_sock_rc_in);

                openConnection();
                return 0;
            }
          }
        return 0;
      }

      bool
      poll(double timeout)
      {
        if (m_UPD_sock_rc_in != NULL)
          return Poll::poll(*m_UPD_sock_rc_in, timeout);
        return false;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Poll socket for incomming RC messages
          if(m_UPD_sock_rc_in != NULL)
          {
            int i = 0;
            while(poll(0.0))
            {

              spew(DTR("Got data from ardpilot SIL."));
              int n = receiveData(m_buf, sizeof(m_buf));

              if (n == sizeof(SITL_rc_control))
              {
                SITL_rc_control* rc_in = (SITL_rc_control*)&m_buf;

                IMC::ArduPilotMotorControl msg;
                msg.chan1 = rc_in->pwm[0];
                msg.chan2 = rc_in->pwm[1];
                msg.chan3 = rc_in->pwm[2];
                msg.chan4 = rc_in->pwm[3];
                msg.chan5 = rc_in->pwm[4];
                msg.chan6 = rc_in->pwm[5];
                msg.chan7 = rc_in->pwm[6];
                msg.chan8 = rc_in->pwm[7];
                msg.chan9 = rc_in->pwm[8];
                msg.chan10 = rc_in->pwm[9];
                msg.chan11 = rc_in->pwm[10];

                msg.wind_direction = rc_in->direction/100.0;
                msg.wind_speed = rc_in->speed/100.0;
                msg.wind_turbulence = rc_in->turbulance/100.0;

                dispatch(msg);



              }
            } // end while
          }
          consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK
