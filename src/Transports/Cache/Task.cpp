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
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Cache
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Loading order.
      std::vector<std::string> order;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Cache directory path.
      Path m_path;
      // Path to snapshot file.
      Path m_snapshot;
      // Internal buffer.
      uint8_t* m_buffer;
      // Internal buffer size.
      uint16_t m_buffer_size;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        param("Loading Order", m_args.order)
        .defaultValue("")
        .description("List of messages ordered by loading order");

        // Initialize internal buffer.
        m_buffer_size = 128;
        m_buffer = new uint8_t[m_buffer_size];

        // Create cache directory.
        m_path = m_ctx.dir_db / "Cache";
        m_path.create();

        // Set snapshot file path.
        m_snapshot = m_path / (std::string(DUNE_IMC_CONST_MD5) + ".lsf");

        // Bind messages.
        bind<IMC::CacheControl>(this);
      }

      ~Task(void)
      {
        delete [] m_buffer;
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::CacheControl* msg)
      {
        switch (msg->op)
        {
          case IMC::CacheControl::COP_STORE:
            if (!msg->message.isNull())
              store(msg->message.get());
            break;
          case IMC::CacheControl::COP_LOAD:
            load();
            break;
          case IMC::CacheControl::COP_CLEAR:
            clear();
            break;
          case IMC::CacheControl::COP_COPY:
            copySnapshot(msg->snapshot);
            break;
          default:
            break;
        }
      }

      void
      getMessageFiles(std::vector<std::string>& files)
      {
        std::vector<std::string> msgs = m_args.order;
        const char* fname = 0;

        // Retrieve the name of all cached messages that are not in the
        // loading order list.
        try
        {
          Directory dir(m_path);

          while ((fname = dir.readEntry(Directory::RD_FILE_NAME)))
          {
            if (std::find(msgs.begin(), msgs.end(), fname) == msgs.end()
                && ((m_path / fname).type() == Path::PT_DIRECTORY))
            {
              msgs.push_back(fname);
            }
          }
        }
        catch (...)
        { }

        // Load cached messages.
        for (unsigned int i = 0; i < msgs.size(); ++i)
        {
          try
          {
            Directory md(m_path / msgs[i]);
            while ((fname = md.readEntry(Directory::RD_FULL_NAME)))
              files.push_back(fname);
          }
          catch (...)
          { }
        }
      }

      void
      growBuffer(int size)
      {
        if (size > m_buffer_size)
        {
          delete [] m_buffer;
          m_buffer_size = size;
          m_buffer = new uint8_t[m_buffer_size];
        }
      }

      void
      store(const IMC::Message* msg)
      {
        std::string id = String::str(msg->getSubId());
        uint16_t size = msg->getSerializationSize();

        // Create destination directory.
        Path path = m_path / msg->getName();
        path.create();

        // Open file for writing.
        path = path / id;
        std::ofstream ofs(path.c_str(), std::ios::binary);

        growBuffer(size);

        // Write message to file.
        IMC::Packet::serialize(msg, m_buffer, size);
        ofs.write((char*)m_buffer, size);
        ofs.close();

        storeSnapshot();
      }

      void
      loadSnapshot(void)
      {
        if (m_snapshot.type() != Path::PT_FILE)
        {
          clear();
          return;
        }

        std::ifstream ifs(m_snapshot.c_str(), std::ios::binary);

        if (!ifs.is_open())
          return;

        while (!ifs.eof())
        {
          IMC::Message* msg = IMC::Packet::deserialize(ifs);
          if (msg)
          {
            dispatch(msg, DF_KEEP_TIME);
            delete msg;
          }
        }
      }

      void
      storeSnapshot(void)
      {
        // Retrieve file list.
        std::vector<std::string> files;
        getMessageFiles(files);

        std::ofstream ofs(m_snapshot.c_str(), std::ios::binary);

        // Copy all cached messages to a single file.
        for (unsigned int i = 0; i < files.size(); ++i)
        {
          int64_t size = Path(files[i]).size();

          if (size < 0)
            continue;

          growBuffer(size);

          std::ifstream ifs(files[i].c_str(), std::ios::binary);
          ifs.read((char*)m_buffer, size);
          ofs.write((char*)m_buffer, size);
        }
      }

      void
      copySnapshot(Path destination)
      {
        if (!Path(m_snapshot).exists())
          return;

        try
        {
          Path(m_snapshot).copy(destination);
          IMC::CacheControl cc;
          cc.op = IMC::CacheControl::COP_COPY_COMPLETE;
          cc.snapshot = destination.str();
          dispatch(cc);
        }
        catch (System::Error& e)
        {
          err(DTR("failed to copy cache snapshot: %s"), e.what());
        }
      }

      void
      load(void)
      {
        std::vector<std::string> files;
        getMessageFiles(files);

        for (unsigned int i = 0; i < files.size(); ++i)
        {
          std::ifstream ifs(files[i].c_str(), std::ios::binary);
          IMC::Message* msg = IMC::Packet::deserialize(ifs);
          if (msg)
          {
            dispatch(msg, DF_KEEP_TIME);
            delete msg;
          }
        }
      }

      void
      clear(void)
      {
        // Remove cache directory and create a new one.
        m_path.remove(Path::MODE_RECURSIVE);
        m_path.create();
      }

      void
      onMain(void)
      {
        loadSnapshot();

        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
