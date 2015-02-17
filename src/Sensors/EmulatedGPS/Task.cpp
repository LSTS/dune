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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cstdlib>
#include <cmath>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace EmulatedGPS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud.
      unsigned uart_baud;
      //! Lifespan of estimated state messages.
      double lifespan_estate;
      //! Send GPZDA sentences.
      bool send_zda;
      //! Send GPRMC sentences.
      bool send_rmc;
      //! Send GPHDT sentences.
      bool send_hdt;
      //! Send GPVTG sentences.
      bool send_vtg;
      //! Send sentences on IMC::Pulse.
      bool send_on_pulse;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Time of last estimated state.
      Counter<double> m_estate_timer;
      //! Task parameters.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_estate_timer(0.0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("4800")
        .description("Serial port baud rate");

        param("Lifespan - Estimated State", m_args.lifespan_estate)
        .units(Units::Second)
        .defaultValue("2.0")
        .description("Lifespan of estimated state messages");

        param("Send ZDA", m_args.send_zda)
        .defaultValue("true")
        .description("Send GPZDA sentences");

        param("Send RMC", m_args.send_rmc)
        .defaultValue("true")
        .description("Send GPRMC sentences");

        param("Send HDT", m_args.send_hdt)
        .defaultValue("true")
        .description("Send GPHDT sentences");

        param("Send VTG", m_args.send_vtg)
        .defaultValue("true")
        .description("Send GPVTG sentences");

        param("Send Sentences on Pulse", m_args.send_on_pulse)
        .defaultValue("true")
        .description("Send sentences only upon reception of Pulse messages");

        bind<IMC::Pulse>(this);
        bind<IMC::EstimatedState>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
        m_estate_timer.setTop(m_args.lifespan_estate);
      }

      void
      consume(const IMC::Pulse* msg)
      {
        if (m_args.send_on_pulse)
          sendSentences((time_t)msg->getTimeStamp());
      }

      std::string
      createRMC(const Time::BrokenDown& bdt)
      {
        double lat = m_estate.lat;
        double lon = m_estate.lon;

        Coordinates::toWGS84(m_estate, lat, lon);

        int lat_deg;
        double lat_min;
        Angles::convertDecimalToDM(Angles::degrees(lat), lat_deg, lat_min);

        int lon_deg;
        double lon_min;
        Angles::convertDecimalToDM(Angles::degrees(lon), lon_deg, lon_min);

        double vel = Math::norm(m_estate.vx, m_estate.vy);

        NMEAWriter stn("GPRMC");
        stn << String::str("%02u%02u%02u.00", bdt.hour, bdt.minutes, bdt.seconds)
            << "A"
            << String::str("%02d%02.5f", std::abs(lat_deg), std::fabs(lat_min))
            << ((lat_deg >= 0) ? "N" : "S")
            << String::str("%03d%02.5f", std::abs(lon_deg), std::fabs(lon_min))
            << ((lon_deg >= 0) ? "E" : "W")
            << vel * DUNE::Units::c_ms_to_knot
            << 0 // azimuth.
            << String::str("%02u%02u%02u", bdt.day, bdt.month, bdt.year - 2000)
            << ""
            << ""
            << "A";

        return stn.sentence();
      }

      std::string
      createVTG(const Time::BrokenDown& bdt)
      {
        double vel = Math::norm(m_estate.vx, m_estate.vy);
        double course = Angles::degrees(std::atan2(m_estate.vy, m_estate.vx));

        // Track Made Good and Ground Speed.
        // eg1. $GPVTG,360.0,T,348.7,M,000.0,N,000.0,K*43
        // eg2. $GPVTG,054.7,T,034.4,M,005.5,N,010.2,K*41
        //        054.7,T      True course made good over ground, degrees
        //        034.4,M      Magnetic course made good over ground, degrees
        //        005.5,N      Ground speed, N=Knots
        //        010.2,K      Ground speed, K=Kilometers per hour
        NMEAWriter stn("GPVTG");
        stn << String::str("%03.1f,T,%03.1f,M,%03.1f,N,%03.1f,K",
                           course,
                           course,
                           vel * DUNE::Units::c_ms_to_knot,
                           vel * DUNE::Units::c_ms_to_kmh);
        (void)bdt;
        return stn.sentence();
      }

      std::string
      createZDA(const Time::BrokenDown& bdt)
      {
        NMEAWriter stn("GPZDA");
        stn << String::str("%02u%02u%02u.00", bdt.hour, bdt.minutes, bdt.seconds)
            << String::str("%02u", bdt.day)
            << String::str("%02u", bdt.month)
            << String::str("%04u", bdt.year)
            << "00"
            << "00";

        return stn.sentence();
      }

      std::string
      createHDT(const Time::BrokenDown& bdt)
      {
        NMEAWriter stn("GPHDT");
        stn << String::str("%0.2f", Angles::degrees(m_estate.psi))
            << "T";

        (void)bdt;

        return stn.sentence();
      }

      void
      sendSentences(void)
      {
        sendSentences(std::time(NULL));
      }

      void
      sendSentences(time_t time_reference)
      {
        Time::BrokenDown bdt(time_reference);
        std::string stn_str;

        if (m_args.send_zda)
        {
          stn_str = createZDA(bdt);
          m_uart->write(stn_str.c_str(), stn_str.size());
        }

        if (m_args.send_rmc and not m_estate_timer.overflow())
        {
          stn_str = createRMC(bdt);
          m_uart->write(stn_str.c_str(), stn_str.size());
        }

        if (m_args.send_hdt and not m_estate_timer.overflow())
        {
          stn_str = createHDT(bdt);
          m_uart->write(stn_str.c_str(), stn_str.size());
        }

        if (m_args.send_vtg and not m_estate_timer.overflow())
        {
          stn_str = createVTG(bdt);
          m_uart->write(stn_str.c_str(), stn_str.size());
        }
      }

      void
      onMain(void)
      {
        PeriodicDelay delay(1000000);

        while (!stopping())
        {
          if (m_args.send_on_pulse)
          {
            waitForMessages(1.0);
          }
          else
          {
            delay.wait();
            consumeMessages();
            sendSentences();
          }
        }
      }
    };
  }
}

DUNE_TASK
