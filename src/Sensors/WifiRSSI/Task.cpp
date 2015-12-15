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
// Author: José Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace WifiRSSI
  {
    static const std::string s_prefix = "Link Quality=";
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Temporary file where to store retrieved data
      std::string tmp_file;

      // Whether to use ssh or run locally
      bool use_ssh;

      // extra SSH flags to use
      std::string ssh_flags;

      // Where to connect via ssh
      std::string remote_host;

      // File where private rsa key is stored
      std::string private_key;

      // Period, in seconds, between polls
      int period;
    };

    struct Task: public DUNE::Tasks::Task
    {

      Time::Counter<int> m_period;
      Arguments m_args;
      Path m_keyfile, m_tmpfile;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        param("Connect via SSH", m_args.use_ssh)
          .defaultValue("false");

        param("SSH Flags", m_args.ssh_flags)
          .defaultValue("-y");

        param("Update Period", m_args.period)
          .defaultValue("5");


        param("Remote Hostname", m_args.remote_host)
          .defaultValue("127.0.0.1");

        param("Private Key File", m_args.private_key)
          .defaultValue("../private/etc/id_rsa");

        param("Temporary File", m_args.tmp_file)
          .defaultValue("/tmp/airhost_rssi");

        param("Update Period", m_args.period)
          .defaultValue("5");

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_period.setTop(m_args.period);
        m_keyfile = Path(m_ctx.dir_cfg) / m_args.private_key;
        m_tmpfile = Path(m_args.tmp_file);
        debug("Private key file is in %s", m_keyfile.c_str());
        debug("Temporary file set to %s", m_tmpfile.c_str());
      }

      //! Retrieve current wifi RSSI
      void
      poll() {
        std::stringstream ss;
        if (m_args.use_ssh)
        {
          ss << "ssh " << sanitize(m_args.ssh_flags) << " -i " << m_keyfile.c_str()
              << " " << sanitize(m_args.remote_host) << " ";
        }

        ss << "iwconfig > " << m_tmpfile.c_str() << " 2> /dev/null";

        debug("executing '%s'", ss.str().c_str());
        int result = std::system(ss.str().c_str());
        if (result != 0)
        {
          war("Unable to retrieve RSSI. Result was %d.", result);
        }
        else {
          std::FILE* fd = std::fopen(m_tmpfile.c_str(), "r");
          if (fd == 0)
          {
            err("Could not read from %s.", m_tmpfile.c_str());
            return;
          }
          char line[512] = {0};

          while (std::fscanf(fd, " %511[^\n] ", line) == 1)
          {
            std::string l = String::trim(line);
            if (String::startsWith(l, s_prefix))
            {
              int val, max;
              std::sscanf(l.c_str(), "Link Quality=%d/%d ", &val, &max);

              IMC::RSSI msg;
              msg.value = (val * 100.0) / max;
              debug("Wi-fi link quality is %f %%.", msg.value);
              dispatch(msg);
              break;
            }
          }
          std::fclose(fd);
        }
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
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_period.overflow())
          {
            poll();
            m_period.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
