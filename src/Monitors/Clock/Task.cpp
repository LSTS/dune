//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <ctime>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! %Clock is responsible to monitor system's hardware
  //! clock. This task uses valid GPS's UTC time and if
  //! hardware clock is out of synch for more than a
  //! configurable amount of time, the system clock
  //! is corrected once in a task lifetime at startup.
  //!
  //! This %Task is capable of controlling the following
  //! parameters:
  //!  - <em>Minimum GPS Fixes</em>: Minimum number of
  //!    GPS fixes required to compute the clock offset.
  //!  - <em>Maximum Clock Offset</em>: If the clock
  //!    offset is above this value the clock will be
  //!    synchronized.
  //!  - <em>Boot Synchronization Timeout</em>: At boot
  //!    the system tries to synchronize clocks. It
  //!    continues unsynched after timeout.
  //!  - <em>Hardware Clock Synchronization Command</em>:
  //!    System command to execute everytime the clock
  //!    is synchronized.
  //!
  //! @author Ricardo Martins
  namespace Clock
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      unsigned min_gps_fixes;
      double max_boot_tout;
      double max_clock_offs;
      std::string hw_sync_cmd;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Moving average of time difference.
      MovingAverage<double> m_offs;
      //! Task arguments.
      Arguments m_args;
      //! Synchronization deadline.
      Counter<double> m_sync_deadline;
      //! Count of GPS fixes since last sync.
      unsigned m_gps_fixes;
      //! Time of last GPS fix.
      unsigned m_last_gps_fix_time;
      //! Clock control output message.
      IMC::ClockControl m_cc;
      //! True if clock is synchronized.
      bool m_clock_synched;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_offs(5),
        m_gps_fixes(0),
        m_last_gps_fix_time(0),
        m_clock_synched(false)
      {
        param("Minimum GPS Fixes", m_args.min_gps_fixes)
        .defaultValue("10")
        .description("Minimum number of GPS fixes required to compute the clock offset");

        param("Maximum Clock Offset", m_args.max_clock_offs)
        .units(Units::Second)
        .defaultValue("4")
        .description("Maximum Clock Offset. If the clock offset is above this value the clock will be syncronized");

        param("Boot Synchronization Timeout", m_args.max_boot_tout)
        .units(Units::Second)
        .defaultValue("30")
        .description("At boot the system tries to synchronize clocks. It continues unsynched after timeout");

        param("Hardware Clock Synchronization Command", m_args.hw_sync_cmd)
        .description("System command to execute everytime the clock is synchronized");

        // Initialize entity states.
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_SYNCING);

        // Register listeners.
        bind<IMC::GpsFix>(this);
      }

      void
      onResourceInitialization(void)
      {
        m_sync_deadline.setTop(m_args.max_boot_tout);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        // Return if clock is already synched.
        if (m_clock_synched)
          return;

        // This is done at beginning to reduce offset.
        double cpu_time = msg->getTimeStamp();

        if (!((msg->validity & IMC::GpsFix::GFV_VALID_DATE)
              && (msg->validity & IMC::GpsFix::GFV_VALID_TIME)
              && (msg->validity & IMC::GpsFix::GFV_VALID_POS)))
          return;

        // Not first fix.
        if ((unsigned)msg->utc_time == m_last_gps_fix_time)
          return;

        m_last_gps_fix_time = (unsigned)msg->utc_time;

        ++m_gps_fixes;

        // System clock is corrected once in a task lifetime.
        if (m_gps_fixes == m_args.min_gps_fixes)
        {
          tm bdt = {0};
          bdt.tm_mday = msg->utc_day;
          bdt.tm_mon = msg->utc_month - 1;
          bdt.tm_year = msg->utc_year - 1900;
          bdt.tm_hour = (int)(msg->utc_time / 3600);
          bdt.tm_min = (int)(((msg->utc_time / 3600.0) - bdt.tm_hour) * 60);
          bdt.tm_sec = (int)Math::round(((((msg->utc_time / 3600.0) - bdt.tm_hour) * 60.0) - bdt.tm_min) * 60.0);

          time_t gps_time = mktime(&bdt);
          double offs = m_offs.update(gps_time - cpu_time);
          double new_time = cpu_time + offs;

          if (std::fabs(offs) > m_args.max_clock_offs)
          {
            war(DTR("adjusting CPU clock by %0.4f s"), offs);
            Time::Clock::set(new_time);
            if (std::system(m_args.hw_sync_cmd.c_str()) == -1)
              err(DTR("failed to execute clock sync command"));

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            m_clock_synched = true;

            m_cc.op = IMC::ClockControl::COP_SYNC_DONE;
            m_cc.clock = new_time;
            dispatch(m_cc);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_SYNCHED);
            m_clock_synched = true;
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_sync_deadline.overflow() && getEntityState() == IMC::EntityState::ESTA_BOOT)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NOT_SYNCHED);
        }
      }
    };
  }
}

DUNE_TASK
