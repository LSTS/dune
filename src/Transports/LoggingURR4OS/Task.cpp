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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace LoggingURR4OS
  {
    using DUNE_NAMESPACES;

    //! Maximum temperature delay
    const float c_msg_delay = 5.0f;
    //! Comment char
    const std::string c_comment = "% ";
    //! Not valid value
    const std::string c_not_valid = "-1";

    struct MetaData
    {
      std::string vname;
      std::string sname;
      std::string type;
      bool raw;
    };

    struct Arguments
    {
      //! Program path
      std::string prog;
      //! Output file name
      std::string outfile;
      //! Rhodamine label
      std::string rhodamine_label;
      //! MetaData for header of file
      MetaData md;
      //! Log raw data
      bool log_raw;
      //! Temperature entity label
      std::string temp_label;
    };

    struct Task: public Tasks::Task
    {
      //! Log file.
      std::ofstream m_log_file;
      //! Log filename
      Path m_log_path;
      //! True if header for this file has been written
      bool m_wrote_header;
      //! EstimatedState message
      IMC::EstimatedState m_estate;
      //! Temperature entity id
      unsigned m_temp_id;
      //! Rhodamine entity id
      unsigned m_rhod_id;
      //! Temperature message
      IMC::Temperature m_temperature;
      //! Voltage message for raw data
      IMC::Voltage m_raw;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_wrote_header(false)
      {
        param("Rhodamine Label", m_args.rhodamine_label)
        .defaultValue("Rhodamine");

        param("Sensor Name", m_args.md.sname)
        .defaultValue("Cyclops7");

        param("Sensor Type", m_args.md.type)
        .defaultValue("Rhodamine");

        param("Log raw data", m_args.log_raw)
        .defaultValue("true");

        param("Temperature Label", m_args.temp_label)
        .defaultValue("CTD");

        bind<IMC::LoggingControl>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::Voltage>(this);
        bind<IMC::RhodamineDye>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_args.md.vname = getSystemName();
      }

      void
      onEntityResolution(void)
      {
        m_rhod_id = resolveEntity(m_args.rhodamine_label);
        m_temp_id = resolveEntity(m_args.temp_label);
      }

      void
      onResourceInitialization(void)
      {
        requestActivation();

        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      { }

      void
      writeHeader(std::ofstream& file, MetaData* m, double timestamp)
      {
        file << c_comment
             << m->vname << ", "
             << m->sname << ", "
             << m->type << ", "
             << "1 Hz" << std::endl;

        std::string date_safe = Time::Format::getDateSafe(timestamp);
        std::string time_safe = Time::Format::getTimeSafe(timestamp);

        file << c_comment
             << date_safe[6] << date_safe[7] << "/"
             << date_safe[4] << date_safe[5] << "/"
             << date_safe[0] << date_safe[1] << date_safe[2] << date_safe[3]
             << " "
             << time_safe[0] << time_safe[1] << ":" << time_safe[2] << time_safe[3]
             << std::endl;

        file << c_comment << c_not_valid << std::endl;

        file << c_comment
             << "Time (seconds), Latitude (degrees), Longitude (degrees),"
             << "Depth (meters), " << m->type << " (ppb),"
             << m->type << " (raw), Temperature (Celsius)" << std::endl;
      }

      void
      writeLine(std::ofstream& file, double timestamp, const IMC::EstimatedState* state,
                const IMC::RhodamineDye* rdye, const IMC::Voltage* raw,
                const IMC::Temperature* temp = NULL)
      {
        double lat;
        double lon;
        Coordinates::toWGS84(*state, lat, lon);

        std::string t_str = "";
        std::stringstream ss;
        if (temp != NULL)
        {
          if (timestamp - temp->getTimeStamp() < c_msg_delay)
          {
            ss << std::setprecision(3) << "," << temp->value;
            t_str = ss.str();
          }
        }

        file << std::fixed << std::setprecision(2)
             << timestamp << ","
             << std::setprecision(5)
             << Math::Angles::degrees(lat) << ","
             << Math::Angles::degrees(lon) << ","
             << std::setprecision(2)
             << state->depth;

        if (rdye != NULL)
          file << "," << std::setprecision(3) << rdye->value;
        else
          file << "-1";

        if (timestamp - raw->getTimeStamp() < c_msg_delay)
        {
          ss << "," << std::setprecision(3) << raw->value;
          t_str = ss.str();
        }
        else
        {
          ss << ",-1";
        }

        file << t_str;
        file << std::endl;
      }

      void
      openLog(const Path& path)
      {
        if (path == m_log_path)
          return;

        closeLog();

        m_wrote_header = false;

        m_log_path = path;
        m_log_file.open(m_log_path.c_str(), std::ofstream::app);
        debug("opening %s", m_log_path.c_str());
      }

      void
      closeLog(void)
      {
        if (m_log_file.is_open())
        {
          m_log_file.close();
          int64_t size = m_log_path.size();
          if (size == 0)
          {
            debug("removing empty log '%s'", m_log_path.c_str());
            m_log_path.remove();
          }
          m_log_path = Path();
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
          case IMC::LoggingControl::COP_CURRENT_NAME:
            openLog(m_ctx.dir_log / msg->name / "Bio.csv");
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (!isActive())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::RhodamineDye* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (!m_wrote_header)
        {
          writeHeader(m_log_file, &m_args.md, msg->getTimeStamp());
          m_wrote_header = true;
        }

        writeLine(m_log_file, msg->getTimeStamp(), &m_estate,
                  msg, (m_args.log_raw) ? &m_raw : NULL, &m_temperature);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if (msg->getSourceEntity() == m_rhod_id)
          m_raw = *msg;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSourceEntity() == m_temp_id)
          m_temperature = *msg;
      }

      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
