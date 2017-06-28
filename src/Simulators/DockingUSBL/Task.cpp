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
// Author: MiguelRosa                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace
{
  namespace Simulators
  {
    namespace DockingUSBL
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

        // Ports.
        std::vector<unsigned> ports;

        float msg_period;
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

      enum DMODE
      {
        DEFAULT,
        STATION,
        TARGET
      };

      enum TIMER
      {
        INIT,
        SENDING,
        SENT
      };

      struct Destination
      {
        // Destination address.
        Address addr;
        // Destination port.
        unsigned port;
        // True if address is local.
        bool local;
      };

      struct Task: public Tasks::Periodic
      {

        //! Maneuver
        IMC::DockingState m_dstate;

        IMC::EntityState m_ent;
        //! Current position.
        //IMC::EstimatedState m_sstate;
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

        //!
        IMC::EstimatedState m_estate_s;
        //!
        IMC::EstimatedState m_estate_t;
        //! Maneuver
        IMC::Docking m_maneuver;

        //! Timer counter to update speed
        Time::Counter<float> m_timer;
        // External advertising buffer 2.
        uint8_t m_bfr_ss[4096];
        //!
        DMODE m_mode;
        TIMER m_tmr;

        // Socket.
        UDPSocket m_sock;
        // List of destinations.
        std::vector<Destination> m_dsts;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
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
          //!List of ports to send DockingState msg
          param("Ports", m_args.ports)
          .defaultValue("30100, 30101, 30102, 30103, 30104")
          .description("List of destination ports");
          param("MSG Period", m_args.msg_period)
          .defaultValue("2.0")
          .description("MSG Period");
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
          bind<IMC::GpsFix>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::Docking>(this);
          bind<IMC::DockingState>(this);
          bind<IMC::DockingUSBLMessage>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          /* if (paramChanged(m_args.usbl_lat))
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
           }*/
        }


        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          m_mode = DEFAULT;
          m_tmr = INIT;
          // m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
        }



        //! Release resources.
        void
        onResourceRelease(void)
        {
          //Memory::clear(m_prng);
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          /* if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
             return;

           WGS84::displacement(msg->lat, msg->lon, 0,
                               m_args.usbl_lat, m_args.usbl_lon, 0,
                               &m_usbl_off_n, &m_usbl_off_e);
           trace("offsets to navigational reference | %0.2f %0.2f", m_usbl_off_n, m_usbl_off_e);
           setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);*/
        }

        void
        consume(const IMC::Docking* msg)
        {
          m_maneuver = *msg;

          if (m_maneuver.vehiclefunction == 0)
          {
            m_mode = STATION;
            // war("\n\nSTATION\n");
          }
          else if (m_maneuver.vehiclefunction == 1)
          {
            m_mode = TARGET;
            // war("\n\nTARGET\n");
          }
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          switch (m_mode)
          {
            case STATION:
              if (msg->getSource() == getSystemId())
              {
                //  war("SystemIDAcou: %s",resolveSystemId(msg->getSource()));
                m_estate_s = *msg;
              }

              //  else if (msg->getSource() == resolveSystemName(m_maneuver.target.c_str()))
              //   m_estate_t = *msg;
              break;

            case TARGET:
              if (msg->getSource() == getSystemId())
              {
                //  war("SystemIDAcou: %s",resolveSystemId(msg->getSource()));
                m_estate_t = *msg;

                switch (m_tmr)
                {
                  case INIT:
                    //war("STTOP");
                    // war("SENDIGN");
                    m_timer.setTop( m_args.msg_period);
                    m_tmr = SENDING;
                    break;

                  case SENDING:

                    //   war("MSG ENVIAr!");
                    if (m_timer.overflow() && m_dstate.availability == 1)
                    {
                      war("MSG ENVIADA!");
                      sendSS(&m_estate_t);
                      m_tmr = SENT;
                    }

                    break;

                  case SENT:
                    m_timer.reset();
                    m_tmr = INIT;
                    break;
                }
              }
              else
                return;

              break;

            case DEFAULT:
              break;
          }
        }

        void
        consume(const IMC::DockingUSBLMessage *msg)
        {
          if (msg->getSource() != getSystemId())
          {
            // war("SystemIDAcou: %s",resolveSystemId(msg->getSource()));
            switch (m_mode)
            {
              case STATION:
                if (msg->getId() == DUNE_IMC_DOCKINGUSBLMESSAGE)
                {
                  const IMC::DockingUSBLMessage* am = static_cast<const IMC::DockingUSBLMessage*>(msg);
                  const IMC::Message* m = am->message.get();

                  if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
                  {
                    const IMC::EstimatedState* estimated = static_cast<const IMC::EstimatedState*>(m);
                    //war("UPA|!");
                    // war("SystemID: %s",resolveSystemId(estimated->getSource()));
                    // compute the bearing with the announced data using previous data
                    double bearing = 0;
                    double range = 0;
                    double lat_s = m_estate_s.lat;
                    double lon_s = m_estate_s.lon;
                    double lat_t = estimated->lat;
                    double lon_t = estimated->lon;
                    WGS84::displace(m_estate_s.x,m_estate_s.y,&lat_s,&lon_s);
                    WGS84::displace(estimated->x,estimated->y,&lat_t,&lon_t);
                    //double d;
                    //double n, e;
                    //WGS84::displacement(lat_s, lon_s, m_estate_s.height, lat_t, lon_t, estimated->height, &n, &e);
                    WGS84::getNEBearingAndRange(lat_s, lon_s, lat_t, lon_t, &bearing, &range);
                    //double real_bearing = Angles::normalizeRadian(bearing);
                    //war("Bearing: %f", real_bearing);
                    war("Range: %f", range);
                    war("Bearing: %.2f deg", Angles::degrees(bearing));
                    /* war("N XPL: %f", estimated->x);
                     war("E XPL: %f", estimated->y);
                     war("N CVL: %f", m_estate_s.x);
                     war("E CVL: %f", m_estate_s.y);
                     war("N DCVL: %f", n);
                     war("E DCVL: %f", e);*/
                    IMC::UamRxRange drange;
                    drange.sys = resolveSystemId(getSystemId());
                    drange.value = range;
                    dispatch(drange);
                    IMC::UsblAnglesExtended angles;
                    angles.target = resolveSystemId(getSystemId());
                    angles.bearing = bearing;
                    dispatch(angles);
                  }
                }

                break;

              case TARGET:
                return;
                break;

              case DEFAULT:
                break;
            }

            //m_estate_t.message.get(*msg);
          }
          else
            return;  //war("SystemID: %s",resolveSystemId(m_estate_t.getSource()));
        }

        void
        consume(const IMC::DockingState* msg)
        {
          /*if (strcmp(msg->sys_name.c_str(),getSystemName()) == 0)
            return;*/
          if (msg->getSource() != getSystemId())
          {
            //war("DENTRO!");
            return;
          }

          // war("FORA!");
          m_dstate = *msg;
          /*if (m_mode == m_dstate.vehiclefunction)
          {
            signalError(DTR("Another system has the same function has ours!"));
            sendMsg(getSystemName(),state,availability,m_mode);
            enableMovement(false);
          }*/
        }

        /*else
        {
          return;
        }*/
        /* m_sstate = *msg;

         if ((msg->getTimeStamp() - m_dev.getTimeStamp() > m_args.trans_delay) &&
             !m_dev.value.empty())
         {
           USBLMessage temp;
           std::memcpy((void*)&temp, (const void*)&m_dev.value[0], sizeof(temp));
           err("Range: %.2f m", temp.range);
           err("Bearing: %.2f deg", Angles::degrees(temp.bearing));
           err("Elevation: %.2f deg", Angles::degrees(temp.elevation));
           err("Delay: %.2f sec", msg->getTimeStamp() - m_dev.getTimeStamp());
           dispatch(m_dev, DF_KEEP_TIME);
           m_dev.value.clear();
         }*/
        void
        sendSS(const IMC::EstimatedState *msg)
        {
          IMC::DockingUSBLMessage amsg;
          amsg.clear();
          m_dsts.clear();
          // Serialize AcousticMessage.
          amsg.setSource(getSystemId());
          amsg.setSourceEntity(getEntityId());
          amsg.setTimeStamp();
          amsg.message.set(*msg);
          m_sock.enableBroadcast(true);

          for (unsigned j = 0; j < m_args.ports.size(); ++j)
          {
            Destination dst;
            dst.port = m_args.ports[j];
            dst.addr = "255.255.255.255";
            dst.local = false;
            m_dsts.push_back(dst);
          }

          uint16_t bfr_len_ss = IMC::Packet::serialize(&amsg, m_bfr_ss, sizeof(m_bfr_ss));

          for (unsigned i = 0; i < m_dsts.size(); ++i)
          {
            try
            {
              m_sock.write(m_bfr_ss, bfr_len_ss, m_dsts[i].addr, m_dsts[i].port);
            }
            catch (...)
            { }
          }
        }
        void
        task(void)
        {
          /*if (m_ent.state != IMC::EntityState::ESTA_NORMAL)
            return;  // Home ref not setup

          USBLMessage msg;
          getSensorData(&msg);
          // fill in message fields but clear it first
          m_dev.clear();
          uint8_t* ptr = (uint8_t*)&msg;
          m_dev.value = std::vector<char>(ptr, ptr + sizeof(msg) / sizeof(uint8_t));
          m_dev.setTimeStamp();*/
        }
        //! Compute simulated sensor data using data from manufacturer
        void
        getSensorData(USBLMessage* msg) const
        {
          /*  double real_bearing, real_range_2d;
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
            msg->range += m_prng->gaussian() * m_args.usbl_slant_acc / 2;*/
        }
        //! Compute actual bearing angle and range from USBL transducer to vehicle
        void
        getRealBearingAndRange(double* bearing, double* range) const
        {
          /*   double diff_e = m_sstate.y - m_usbl_off_e;
             double diff_n = m_sstate.x - m_usbl_off_n;

             // Special case
             if (diff_n == 0.0)
               *bearing = -m_args.usbl_heading;
             else
               *bearing = std::atan2(diff_e, diff_n);

             *range = std::sqrt( diff_e * diff_e + diff_n * diff_n );*/
        }
      };
    }
  }
}

DUNE_TASK
