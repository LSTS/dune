//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda         *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_NORTEK_DVL_DRIVER_HPP_INCLUDED_
#define SENSORS_NORTEK_DVL_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace NortekDVL
  {
    using DUNE_NAMESPACES;

    //! Break command
    static const std::string c_cmd_break = "K1W%!Q";
    //! Credentials
    static const std::string c_cmd_nortek = "nortek";
    //! No input trigger.
    static const std::string c_cmd_trg_no = "INTSR";
    //! Configured input trigger.
    static const std::string c_cmd_trg_yes = "TTLRISE";

    //! Available power levels.
    enum PowerLevel
    {
      // minimum power level.
      PL_MIN,
      // medium power level.
      PL_MED,
      // maximum power level.
      PL_MAX
    };

    //! Driver class to configure Nortek's DVL.
    class Driver
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle io handle.
      //! @param[in] rate sampling rate.
      //! @param[in] trigger input trigger.
      //! @param[in] debug enable hardware diagnostics.
      //! @param[in] npings collect current profile every n-th ping.
      //! @param[in] ncells number of cells for the current profiler.
      //! @param[in] cellsize cell size of the current profiler.
      //! @param[in] blanking blanking distance of the current profiler.
      Driver(Tasks::Task* task, IO::Handle* handle, float rate, bool trigger, bool dbg,
             unsigned npings, unsigned ncells, float cellsize, float blanking):
        m_task(task),
        m_handle(handle),
        m_trigger(trigger),
        m_salinity(35.0),
        m_sampling_rate(5.0),
        m_cmd_mode(false),
        m_firmware(false),
        m_debug(dbg),
        m_cp_npings(npings),
        m_cp_ncells(ncells),
        m_cp_csize(cellsize),
        m_cp_blankdist(blanking)
      {
        setSamplingRate(rate);
      }

      //! Destructor.
      ~Driver(void)
      {
        // Gracefully disconnect from device.
        sendBreak();
        sendCommand("POWERDOWN");
      }

      //! Login into device.
      //! @return true if login succeeded, false otherwise
      bool
      login(void)
      {
        replyLogin("Username: ");
        replyLogin("Password: ");

        return readUntil("Command Interface\r\r\n", 2.0, true);
      }

      //! Device's setup sequence.
      //! @return true if command succeeded, false otherwise.
      bool
      setup(void)
      {
        if (!enterCommandMode())
          return false;

        if (!sendCommand("SETDEFAULT,ALL"))
          return false;

        if (!sendCommand("SETINST,LED=\"OFF\",ORIENT=\"ZDOWN\""))
          return false;

        if (!setTime())
          return false;

        if (!setBottomTrack())
          return false;

        if (!setDVL())
          return false;

        // Current profiler is not disabled.
        if (m_cp_npings > 0)
        {
          if (!setCurrentProfile())
            return false;
        }

        // Use absolute pressure.
        if (!sendCommand("SETUSER,POFF=0.0"))
          return false;

        if (m_debug)
        {
          if (!sendCommand("SETBTHW,NDFEN=199"))
            return false;
        }

        if (!save())
          return false;

        return start();
      }

      //! Update salinity.
      //! @param[in] value salinity value.
      void
      setSalinity(double value)
      {
        if (value < 0.0 || value > 50.0)
          return;

        m_salinity = value;
      }

      //! Set device's power level.
      //! @param[in] level power level range.
      //! @return true if configured successfully, false otherwise.
      bool
      setPowerLevel(PowerLevel level)
      {
        float power = 0.0;
        switch (level)
        {
          case (PL_MIN):
            power = -20.0;
            break;
          case (PL_MED):
            power = -10.0;
            break;
          case (PL_MAX):
            power = 0.0;
            break;
        }

        bool rb = sendCommand(String::str("SETBT,PL=%0.1f", power));
        bool rc = sendCommand(String::str("SETCURPROF,PL=%0.1f", power));
        start();
        return rb && rc;
      }

      //! Set device's input trigger type.
      //! @param[in] trigger true if trigger is available, false otherwise.
      //! @return true if configured successfully, false otherwise.
      bool
      setInputTrigger(bool trigger)
      {
        if (trigger != m_trigger)
        {
          m_trigger = trigger;
          return setDVL(true);
        }

        return true;
      }

    private:
      //! Reply with credentials
      bool
      replyLogin(const std::string& reply)
      {
        if (readUntil(reply, 1.0, true))
          write(c_cmd_nortek);
        else
          return false;

        return true;
      }

      //! Start measuring.
      //! @return true if in measurement mode, false otherwise.
      bool
      start(void)
      {
        // go to measurement mode.
        if (sendCommand("START"))
        {
          m_cmd_mode = false;
          return true;
        }

        return false;
      }

      //! Stop measuring and enter command mode.
      //! @return true if back in command mode, false otherwise.
      bool
      enterCommandMode(void)
      {
        // no need to stop, not in measurement mode.
        if (m_cmd_mode)
          return true;

        if (!sendBreak())
          return false;

        Delay::wait(1.0);
        if (!sendCommand("MC", true, true))
          return false;

        m_cmd_mode = true;
        return true;
      }

      //! Wake up device.
      //! @return true if break was received, false otherwise.
      bool
      sendBreak(void)
      {
        if (!sendCommand(c_cmd_break, true, false))
          return sendCommand(c_cmd_break, true, false);

        return true;
      }

      //! Set device's time.
      //! @return true if configured successfully, false otherwise.
      bool
      setTime(void)
      {
        Time::BrokenDown tm(Clock::getSinceEpoch(), true);
        std::string cmd;
        cmd = String::str("SETCLOCK,YEAR=%d,MONTH=%d,DAY=%d,"
                          "HOUR=%d,MINUTE=%d,SECOND=%d",
                          tm.year, tm.month, tm.day, tm.hour,
                          tm.minutes, tm.seconds);

        return sendCommand(cmd);
      }

      //! Set DVL Bottom-Track parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setBottomTrack(void)
      {
        return sendCommand("SETBT,RANGE=50,NB=0,CH=0,WT=\"ON\",WTDF=22");
      }

      //! Set Current Profiler's parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setCurrentProfile(void)
      {
        std::string cmd;
        cmd = String::str("SETCURPROF,NC=%u,CS=%0.1f,BD=%0.1f,CY=\"XYZ\",DF=3,NB=0,CH=0",
                         m_cp_ncells, m_cp_csize, m_cp_blankdist);

        return sendCommand(cmd);
      }

      //! Set DVL parameters.
      //! @param[in] boot set command and start device.
      //! @return true if configured successfully, false otherwise.
      bool
      setDVL(bool boot = false)
      {
        std::string cmd;
        cmd = String::str("SETDVL,CP=%u,TRIG=\"%s\",SR=%0.1f,SA=%0.1f",
                          m_cp_npings, getTrigger().c_str(), m_sampling_rate, m_salinity);

        if (m_debug)
          cmd += ",FN=\"DataDebug.ad2cp\"";

        if (boot)
        {
          bool r = sendCommand(cmd);
          start();
          return r;
        }
        else
        {
          return sendCommand(cmd);
        }
      }

      //! Save configuration.
      //! @return true if configured successfully, false otherwise.
      bool
      save(void)
      {
        if (!sendCommand("SAVE,ALL"))
        {
          sendCommand("GETERROR");
          return false;
        }

        return true;
      }

      //! Set sampling rate.
      //! @param[in] rate desired sampling rate.
      void
      setSamplingRate(float rate)
      {
        if (rate < 1.0 || rate > 8.0)
          return;

        m_sampling_rate = rate;
      }

      //! Send command and wait for reply.
      //! @param[in] cmd command to send.
      //! @param[in] ignore ignore if device is in measurement mode or not.
      //! @param[in] print send replies to output stream.
      //! @return true if command succeeded, false otherwise.
      bool
      sendCommand(const std::string& cmd, bool ignore = false, bool print = false)
      {
        // if in measurement mode, stop stream and go to command mode.
        if (!ignore)
        {
          if (!enterCommandMode())
            return false;
        }

        write(cmd);
        std::string reply("OK\r\n");
        return readUntil(reply, 1.0, print);
      }

      //! Write command.
      //! @param[in] cmd command to send.
      void
      write(const std::string& cmd)
      {
        std::string bfr(cmd + "\r\n");
        m_handle->write(bfr.c_str(), bfr.size());
        m_task->trace("sent: '%s'", sanitize(bfr).c_str());
      }

      //! Read input until a given sequence is received. Note that
      //! data after the sequence might be discarded.
      //! @param[in] sequence sequence to search.
      //! @param[in] timeout timeout in second.
      //! @param[in] print send replies to output stream.
      //! @return true if command succeeded, false otherwise.
      bool
      readUntil(const std::string& sequence, float timeout, bool print = false)
      {
        Counter<float> timer(timeout);
        char bfr[256] = {0};
        size_t offset = 0;

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_handle, timer.getRemaining()))
            break;

          offset += m_handle->read(bfr + offset, sizeof(bfr) - offset);
          if (offset > sizeof(bfr))
            break;

          if (String::endsWith(bfr, sequence))
          {
            if (!m_firmware)
            {
              unsigned v1 = 0;
              unsigned v2 = 0;
              if (std::sscanf(bfr, "NortekDVL - NORTEK AS.\r\nVersion %u_%u", &v1, &v2) == 2)
              {
                m_firmware = true;
                m_task->debug("firmware version: %u_%u", v1, v2);
              }
            }

            if (print)
              m_task->spew("recv: '%s'", sanitize(bfr).c_str());

            return true;
          }
        }

        if (print)
          m_task->spew("recv: '%s' (does not end with: '%s')",
                       sanitize(bfr).c_str(), sanitize(sequence).c_str());

        return false;
      }

      //! Get trigger configuration argument.
      //! @return trigger argument.
      std::string
      getTrigger(void)
      {
        if (m_trigger)
          return c_cmd_trg_yes;
        else
          return c_cmd_trg_no;
      }

      //! Parent task.
      Tasks::Task* m_task;
      //! IO Handle.
      IO::Handle* m_handle;
      //! Input trigger.
      bool m_trigger;
      //! Salinity value.
      double m_salinity;
      //! Sampling rate.
      float m_sampling_rate;
      //! Command Mode;
      bool m_cmd_mode;
      //! Show firmware once.
      bool m_firmware;
      //! Hardware debug mode.
      bool m_debug;
      //! Current profiler at every N pings
      unsigned m_cp_npings;
      //! Current profiler's number of cells.
      unsigned m_cp_ncells;
      //! Current profiler's cell size.
      float m_cp_csize;
      //! Current profiler's blanking distance.
      float m_cp_blankdist;
    };
  }
}

#endif
