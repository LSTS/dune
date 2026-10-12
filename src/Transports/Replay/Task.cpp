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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Replay
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string startup_file;
      std::vector<std::string> msgs;
      std::vector<std::string> ents;
      std::vector<std::string> skip_ents;
      std::string cache_snapshots;
      double snapshot_age;
      double time_multiplier;
      double initial_log_skip_seconds;
    };

    static const int c_stats_period = 10;

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;

      typedef std::map<std::string, uint8_t> Name2Eid;
      Name2Eid m_name2eid;

      typedef std::map<uint8_t, std::string> Eid2Name;
      Eid2Name m_eid2name;

      typedef std::map<uint8_t, uint8_t> Eid2Eid;
      Eid2Eid m_eid2eid;

      typedef std::map<std::string, bool> ReplayMsg;
      ReplayMsg m_replay;

      // System that wrote the log (source of its first LoggingControl).
      uint16_t m_log_src;
      // Log entity ids of the entities in Skip Entities.
      std::set<uint8_t> m_skip_eids;
      // Name and timestamp of the current log (from the LoggingControl
      // that started it), and whether its cache snapshot is dropped.
      std::string m_log_name;
      double m_log_t0;
      bool m_drop_snapshot;
      // Number of logs started so far in the replayed stream.
      unsigned m_logs;
      // Packets dropped as cache snapshot and from skipped entities.
      uint64_t m_snapshot_drops;
      uint64_t m_skip_drops;

      double m_ts_delta;
      double m_start_time;

      // Replay file handle
      std::istream* m_is;
      // last state from replay file
      IMC::EstimatedState m_estate;

      struct Stats
      {
        Stats(): count(0), min(10), max(0), sum(0), sumsq(0) { }

        uint64_t count;
        double min;
        double max;
        double sum;
        double sumsq;
      };

      typedef std::map<std::string, Stats> StatsMap;

      StatsMap m_sstats; // State stats
      StatsMap m_tstats; // Timing stats
      Stats m_tgstats; // Global timing stats

      double m_next_stats;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_log_src(IMC::AddressResolver::invalid()),
        m_log_t0(0),
        m_drop_snapshot(false),
        m_logs(0),
        m_snapshot_drops(0),
        m_skip_drops(0),
        m_is(0)
      {
        param("Load At Start", m_args.startup_file)
        .defaultValue("")
        .description("File to load for replay at startup");

        param("Replay Messages", m_args.msgs)
        .defaultValue("")
        .description("Messages to replay");

        param("Entities", m_args.ents)
        .defaultValue("")
        .description("Entities for which state should be reported");

        param("Skip Entities", m_args.skip_ents)
        .defaultValue("")
        .description("Entities of the log whose messages are not replayed, e.g."
                     " tasks that run live in the replay and publish under the"
                     " same label");

        param("Cache Snapshots", m_args.cache_snapshots)
        .values("Keep, Drop, Drop After First Log")
        .defaultValue("Keep")
        .description("What to do with the cached messages written at the head of"
                     " each log with their original timestamps. Only in the log"
                     " where DUNE booted did they reach the bus (restored by"
                     " Transports.Cache)");

        param("Cache Snapshot Age", m_args.snapshot_age)
        .units(Units::Second)
        .minimumValue("0")
        .defaultValue("3.0")
        .description("A packet this much older than its log's first packet is"
                     " part of the cache snapshot. Packets queued at a log"
                     " switch are up to ~2.5 s older; cached ones, minutes to"
                     " hours");

        param("Time Multiplier", m_args.time_multiplier)
        .defaultValue("1.0")
        .description("Time multiplier for fast replay.");

        param("Seconds to skip", m_args.initial_log_skip_seconds)
        .minimumValue("0")
        .defaultValue("0")
        .description("Number of seconds to skip in the beginning of the log");

        bind<IMC::ReplayControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < m_args.msgs.size(); ++i)
          m_replay[m_args.msgs[i]] = true;

        if (m_replay.find("EstimatedState") == m_replay.end())
          bind<IMC::EstimatedState>(this);

        reset();

        if (m_args.time_multiplier != 1.0)
        {
          Time::Clock::setTimeMultiplier(m_args.time_multiplier);
          war("Using time multiplier: x%.2f", Time::Clock::getTimeMultiplier());
        }
      }

      ~Task(void)
      {
        reset();
      }

      void
      onEntityReservation(void)
      {
        // Reserve configured entities so that other tasks to know about them.
        for (unsigned int i = 0; i < m_args.ents.size(); ++i)
        {
          const std::string& ent = m_args.ents[i];
          int eid = reserveEntity(ent);
          m_name2eid[ent] = eid;
          m_eid2name[eid] = ent;
        }
      }

      void
      consume(const IMC::EstimatedState* es)
      {
        if (!isActive())
          return;

        if (es->getSource() != getSystemId())
          return;

        updateStats(m_sstats["x"], es->x - m_estate.x);
        updateStats(m_sstats["y"], es->y - m_estate.y);
        updateStats(m_sstats["z"], es->z - m_estate.z);
        updateStats(m_sstats["vx"], es->vx - m_estate.vx);
        updateStats(m_sstats["vy"], es->vy - m_estate.vy);
        updateStats(m_sstats["vz"], es->vz - m_estate.vz);
        updateStats(m_sstats["u"], es->u - m_estate.u);
        updateStats(m_sstats["v"], es->v - m_estate.v);
        updateStats(m_sstats["w"], es->w - m_estate.w);
        updateStats(m_sstats["phi"], es->phi - m_estate.phi);
        updateStats(m_sstats["theta"], es->theta - m_estate.theta);
        updateStats(m_sstats["psi"], es->psi - m_estate.psi);
      }

      void
      consume(const IMC::ReplayControl* rc)
      {
        // Handle replay control message.
        switch (rc->op)
        {
          case IMC::ReplayControl::ROP_START:
            startReplay(rc->file);
            break;
          case IMC::ReplayControl::ROP_STOP:
            stopReplay();
            break;
          default:
            err(DTR("operation not supported"));
        }
      }

      uint8_t
      mapEntity(uint8_t eid)
      {
        // Convert ent. id read from file to local context
        Eid2Eid::iterator itr = m_eid2eid.find(eid);

        if (itr == m_eid2eid.end())
          return DUNE_IMC_CONST_UNK_EID;

        return itr->second;
      }

      void
      updateEntityMap(IMC::Message* m)
      {
        IMC::EntityInfo* ei = static_cast<IMC::EntityInfo*>(m);
        Name2Eid::iterator itr = m_name2eid.find(ei->label);

        if (itr != m_name2eid.end())
        {
          m_eid2eid[ei->id] = itr->second;

          trace("entity %s %d --> %d", ei->label.c_str(), (int)ei->id, (int)itr->second);
        }

        if (ei->getSource() != m_log_src)
          return;

        bool skip = std::find(m_args.skip_ents.begin(), m_args.skip_ents.end(),
                              ei->label) != m_args.skip_ents.end();
        if (skip)
          m_skip_eids.insert(ei->id);
        else
          m_skip_eids.erase(ei->id);
      }

      //! Start of a log in the replayed stream (the replayed file may be
      //! several logs one after the other).
      void
      startLog(const IMC::LoggingControl* m)
      {
        m_log_name = m->name;
        m_log_t0 = m->getTimeStamp();
        m_drop_snapshot = m_args.cache_snapshots == "Drop"
          || (m_args.cache_snapshots == "Drop After First Log" && m_logs > 0);
        ++m_logs;
      }

      //! True if the packet read from the log is not replayed (and doesn't
      //! update any state): part of a cache snapshot being dropped, or
      //! published by a skipped entity.
      bool
      dropped(IMC::Message* m)
      {
        // A log has two: the one written at its head and the one the logger
        // dispatched.
        if (m->getId() == DUNE_IMC_LOGGINGCONTROL && m->getSource() == m_log_src)
        {
          const IMC::LoggingControl* lc = static_cast<IMC::LoggingControl*>(m);
          if (lc->op == IMC::LoggingControl::COP_STARTED && lc->name != m_log_name)
            startLog(lc);
        }

        if (m_drop_snapshot && m->getTimeStamp() < m_log_t0 - m_args.snapshot_age)
        {
          ++m_snapshot_drops;
          return true;
        }

        if (m->getId() == DUNE_IMC_ENTITYINFO)
          updateEntityMap(m);

        if (m->getSource() == m_log_src
            && m_skip_eids.find(m->getSourceEntity()) != m_skip_eids.end())
        {
          ++m_skip_drops;
          return true;
        }

        return false;
      }

      void
      startReplay(const std::string& file)
      {
        if (isActive())
          stopReplay();

        if (!Path(file).isFile())
        {
          err("'%s' %s", file.c_str(), DTR("is not a regular file"));
          return;
        }

        try
        {
          Compression::Methods method = Compression::Factory::detect(file.c_str());
          if (method == Compression::METHOD_UNKNOWN)
            m_is = new std::ifstream(file.c_str(), std::ios::binary);
          else
            m_is = new Compression::FileInput(file.c_str(), method);
        }
        catch (std::exception& e)
        {
          err("%s '%s': %s", DTR("could not open"), file.c_str(), e.what());
          return;
        }

        IMC::Message* m = 0;

        try
        {
          m = IMC::Packet::deserialize(*m_is);
        }
        catch (std::exception& e)
        {
          err("%s: %s", DTR("deserialization error"), e.what());
          reset();
          return;
        }

        if (!m)
        {
          err(DTR("empty LSF file"));
          reset();
          return;
        }

        if (m->getId() != DUNE_IMC_LOGGINGCONTROL)
        {
          err(DTR("invalid LSF file for replay"));
          delete m;
          reset();
          return;
        }

        IMC::LoggingControl* lc = static_cast<IMC::LoggingControl*>(m);

        m_ts_delta = lc->getTimeStamp();
        m_log_src = lc->getSource();
        m_logs = 0;
        startLog(lc);

        size_t spos = lc->name.find_last_of('/');
        if (spos != std::string::npos)
          lc->name = lc->name.substr(spos + 1);
        lc->name += "_replay";

        lc->op = IMC::LoggingControl::COP_REQUEST_START;
        dispatch(lc); // change log (if Logging task happens to be active)

        // skip messages
        if (m_args.initial_log_skip_seconds > 0)
        {
          m = getFirstMessageAfterSkip(m_args.initial_log_skip_seconds);
          if (!m)
          {
            err("No messages for specified time range");
            return;
          }
          else
            inf("Skipped messages up to %s", Time::Format::getTimeDate(m->getTimeStamp()).c_str());
        }

        m_ts_delta = lc->getTimeStamp() - m_ts_delta - m_args.initial_log_skip_seconds;
        m_start_time = m->getTimeStamp();
        m_next_stats = m_start_time + c_stats_period;
        delete m;

        requestActivation();

        war("%s '%s'", DTR("started replay of"), file.c_str());
      }

      IMC::Message*
      getFirstMessageAfterSkip(double time_to_skip)
      {
        IMC::Message* m = 0;
        double time_origin = m_ts_delta;
        m = IMC::Packet::deserialize(*m_is);
        while (m)
        {
          if (m->getTimeStamp() - time_origin >= time_to_skip)
            return m;
          // Do not miss information from EntityInfo (and log starts)
          dropped(m);

          delete m;
          m = IMC::Packet::deserialize(*m_is);
          if(getDebugLevel() >= DEBUG_LEVEL_SPEW)
            m->toText(std::cout);
        }
        return NULL;
      }

      void
      stopReplay(void)
      {
        war(DTR("stopped replay"));

        if (m_snapshot_drops || m_skip_drops)
          inf("dropped %llu cache snapshot packets, %llu from skipped entities",
              (unsigned long long)m_snapshot_drops, (unsigned long long)m_skip_drops);

        displayStats();
        reset();

        // Change log (if Logging task happens to be active)
        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_START;
        lc.name = "idle";
        dispatch(lc);
      }

      void
      displayStats(void)
      {
        displayStats(m_tgstats, "Globally", "ms", 1e+03);

        for (StatsMap::iterator itr = m_tstats.begin(); itr != m_tstats.end(); ++itr)
          displayStats(itr->second, itr->first, "ms", 1e+03);

        if (!m_sstats.empty())
        {
          displayStats(m_sstats["x"], "x", "m");
          displayStats(m_sstats["y"], "y", "m");
          displayStats(m_sstats["z"], "z", "m");
          displayStats(m_sstats["vx"], "vx", "m/s");
          displayStats(m_sstats["vy"], "vy", "m/s");
          displayStats(m_sstats["vz"], "vz", "m/s");
          displayStats(m_sstats["u"], "u", "m/s");
          displayStats(m_sstats["v"], "v", "m/s");
          displayStats(m_sstats["w"], "w", "m/s");
          displayStats(m_sstats["phi"], "phi", "deg", 180. / Math::c_pi);
          displayStats(m_sstats["theta"], "theta", "deg", 180. / Math::c_pi);
          displayStats(m_sstats["psi"], "psi", "deg", 180. / Math::c_pi);
        }
      }

      void
      reset(void)
      {
        requestDeactivation();

        if (m_is)
        {
          delete m_is;
          m_is = 0;
        }
        m_eid2eid.clear();
        m_skip_eids.clear();
        m_log_name.clear();
        m_drop_snapshot = false;
        m_snapshot_drops = 0;
        m_skip_drops = 0;
        m_tstats.clear();
        m_tgstats = Stats();
      }

      void
      dispatchWithNewTime(IMC::Message* m)
      {
        double original_ts;

        if (m->getId() == DUNE_IMC_LBLCONFIG)
          original_ts = m_start_time - m_ts_delta;
        else
          original_ts = m->getTimeStamp();

        double new_ts = original_ts + m_ts_delta;
        m->setTimeStamp(new_ts);

        // Wait till the time is right
        double now = Clock::getSinceEpoch();
        double delta = new_ts - now;

        // Delay::wait does not behave satisfactorily otherwise
        // in some systems
        if (delta >= 1e-03)
          Delay::wait(delta);

        // Delay before bus delivery, replay clock: the wait's overshoot, or
        // how late the message is when the replay has fallen behind.
        double delay = Clock::getSinceEpoch() - new_ts;
        updateStats(m_tstats[m->getName()], delay);
        updateStats(m_tgstats, delay);

        // Dispatch message
        dispatch(m, DF_KEEP_TIME);

        if (now >= m_next_stats)
        {
          displayStats();
          m_next_stats += c_stats_period;
        }

        spew("%s %0.4f %s", m->getName(), (new_ts - m_start_time),
             m_eid2name[m->getSourceEntity()].c_str());
      }

      void
      onMain(void)
      {

        if (!m_args.startup_file.empty())
          startReplay(m_args.startup_file);

        while (!stopping())
        {
          if (!isActive())
          {
            waitForMessages(1.0);
            continue;
          }

          consumeMessages(); // for possible ReplayControl requests

          if (!isActive())
            continue;

          IMC::Message* m = 0;

          while (!stopping() && (m = DUNE::IMC::Packet::deserialize(*m_is)) != 0 && !m_is->eof())
          {
            consumeMessages();

            if (dropped(m))
            {
              delete m;
              m = 0;
              continue;
            }

            if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
              m_estate = *static_cast<IMC::EstimatedState*>(m);

            m->setSourceEntity(mapEntity(m->getSourceEntity()));
            m->setDestinationEntity(mapEntity(m->getDestinationEntity()));

            if ((m->getId() == DUNE_IMC_ENTITYSTATE && m->getSourceEntity() != DUNE_IMC_CONST_UNK_EID) || m_replay.find(m->getName()) != m_replay.end())
            {
              dispatchWithNewTime(m);
            }

            // The bus copies what it delivers.
            delete m;
            m = 0;
          }

          stopReplay();

          // Clean up
          delete m;
        }
      }

      void
      updateStats(Stats& s, double delay)
      {
        ++s.count;
        s.sum += delay;
        s.sumsq += delay * delay;

        if (delay < s.min)
          s.min = delay;

        if (delay > s.max)
          s.max = delay;
      }

      void
      displayStats(Stats& s, const std::string& name, const std::string& units, double factor = 1.0)
      {
        if (!s.count)
          return;
        double n = (double)s.count;
        double freq = n / (Clock::getSinceEpoch() - m_start_time);
        double mean = s.sum / n;
        double stddev = std::sqrt(s.sumsq / n - (s.sum * s.sum) / (n * n));
        std::stringstream ss;
        ss << std::setprecision(3) << std::fixed
           << name << " | " << s.count
           << " messages | " << freq << " Hz | min/max/avg/stdev (" << units << ") " << factor * s.min << '/' << factor * s.max << '/' << factor * mean << '/' << factor * stddev;
        debug("%s", ss.str().c_str());
      }
    };
  }
}

DUNE_TASK
