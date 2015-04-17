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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace LoggingDigest
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Sample interval.
      float sample_interval;
      //! Flush interval.
      float flush_interval;
      //! List of messages to log.
      std::vector<std::string> messages;
      //! Log file name.
      std::string lsf_name;
      //! Log file folder.
      std::string log_folder;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Log file.
      Compression::FileOutput* m_log;
      //! Map of messages.
      std::map<uint32_t, IMC::Message*> m_messages;
      //! Sampling timer.
      Counter<double> m_sample_timer;
      //! Flush timer.
      Counter<double> m_flush_timer;
      //! Serialization buffer.
      ByteBuffer m_buffer;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_log(NULL)
      {
        param("Sample Interval", m_args.sample_interval)
        .defaultValue("1.0")
        .units(Units::Second)
        .description("Sample interval");

        param("Flush Interval", m_args.flush_interval)
        .defaultValue("10.0")
        .units(Units::Second)
        .description("Number of seconds to wait before forcing data to be written to disk");

        param("Log Folder", m_args.log_folder)
        .defaultValue("");

        param("LSF Name", m_args.lsf_name)
        .defaultValue("Digest")
        .description("LSF file name");

        param("Transports", m_args.messages)
        .defaultValue("");

        bind<IMC::LoggingControl>(this);
        bind<IMC::EntityInfo>(this);
      }

      ~Task(void)
      {
        stopLog();

        std::map<uint32_t, IMC::Message*>::iterator itr = m_messages.begin();
        for (; itr != m_messages.end(); ++itr)
          delete itr->second;

        m_messages.clear();
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.sample_interval))
          m_sample_timer.setTop(m_args.sample_interval);

        if (paramChanged(m_args.flush_interval))
          m_flush_timer.setTop(m_args.flush_interval);

        bind(this, m_args.messages);
      }

      uint32_t
      getKey(const IMC::Message* msg)
      {
        return (msg->getId() << 16) + (msg->getSourceEntity() << 8) + (msg->getSubId() & 0xff);
      }

      void
      startLog(const std::string& name)
      {
        stopLog();

        if (!m_args.log_folder.empty())
        {
          std::string flat_name(name);
          for (size_t i = 0; i < flat_name.size(); ++i)
          {
            if (flat_name[i] == '/')
              flat_name[i] = '_';
          }

          Path(m_args.log_folder).create();
          Path path = m_args.log_folder / (flat_name + ".lsf.gz");
          m_log = new Compression::FileOutput(path.c_str(), Compression::METHOD_GZIP);
        }
        else
        {
          Path path = m_ctx.dir_log / name / (m_args.lsf_name + ".lsf.gz");
          m_log = new Compression::FileOutput(path.c_str(), Compression::METHOD_GZIP);
        }

        // Log entities.
        double time_ref = Clock::getSinceEpoch();
        std::vector<Entities::EntityDataBase::Entity*> devs;
        m_ctx.entities.contents(devs);
        for (unsigned int i = 0; i < devs.size(); ++i)
        {
          IMC::QueryEntityInfo qinfo;
          // Only query local entities
          qinfo.setTimeStamp(time_ref);
          qinfo.setDestination(getSystemId());
          qinfo.setDestinationEntity(devs[i]->id);
          // The id field is deprecated!
          qinfo.id = devs[i]->id;
          dispatch(qinfo, DF_KEEP_TIME | DF_LOOP_BACK);
          logMessage(&qinfo);
        }
      }

      void
      stopLog(void)
      {
        Memory::clear(m_log);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            try
            {
              startLog(msg->name);
            }
            catch (std::exception& e)
            {
              setEntityState(IMC::EntityState::ESTA_FAILURE, String::str(DTR("failed to start log, check available storage: %s"), e.what()));
              err("%s", e.what());
              throw RestartNeeded(e.what(), 5);
            }

            if (m_log != NULL)
              logMessage(msg);
            break;
          case IMC::LoggingControl::COP_STOPPED:
            stopLog();
            break;
        }
      }

       void
       consume(const IMC::EntityInfo* msg)
      {
        // Only log messages we requested
        if (msg->getDestinationEntity() == getEntityId())
          logMessage(msg);
      }

      void
      consume(const IMC::Message* msg)
      {
        uint32_t key = getKey(msg);

        std::map<uint32_t, IMC::Message*>::iterator itr = m_messages.find(key);
        if (itr == m_messages.end())
        {
          m_messages[key] = msg->clone();
        }
        else
        {
          delete itr->second;
          itr->second = msg->clone();
        }
      }

      void
      writeSample(void)
      {
        if (m_log == NULL)
          return;

        if (!m_sample_timer.overflow())
          return;

        std::map<uint32_t, IMC::Message*>::iterator itr = m_messages.begin();
        for (; itr != m_messages.end(); ++itr)
        {
          logMessage(itr->second);
          delete itr->second;
        }

        m_messages.clear();
        m_sample_timer.reset();
      }

      void
      flush(void)
      {
        if (m_log == NULL)
          return;

        if (!m_flush_timer.overflow())
          return;

        m_flush_timer.reset();
        m_log->flush();
      }

      void
      logMessage(const IMC::Message* msg)
      {
        IMC::Packet::serialize(msg, m_buffer);
        m_log->write(m_buffer.getBufferSigned(), m_buffer.getSize());
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          try
          {
            writeSample();
            flush();
          }
          catch(std::exception& e)
          {
            throw RestartNeeded(e.what(), 5);
          }
        }
      }
    };
  }
}

DUNE_TASK
