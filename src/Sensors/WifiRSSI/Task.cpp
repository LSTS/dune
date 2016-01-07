//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Wireless link quality reporter.
  //!
  //! This task will use the 'iwconfig' command to acquire wireless link quality.
  //! As a result produces messages of type RSSI for Wi-Fi.
  //!
  //! @author Jose Pinto
  namespace WifiRSSI
  {
    using DUNE_NAMESPACES;

    //! Prefix to search for when processing iwconfig output
    static const std::string c_prefix = "Link Quality=";

    struct Arguments
    {
      //! Temporary file where to store retrieved data.
      std::string tmp_file;
      //! Whether to use SSH or run locally.
      bool use_ssh;
      //! Extra SSH flags to use.
      std::string ssh_flags;
      //! Where to connect via SSH.
      std::string remote_host;
      //! Username to use for SSH connection.
      std::string remote_user;
      //! File where private RSA key is stored.
      std::string private_key;
      //! Period, in seconds, between polls.
      int period;
    };

    //! Wireless RSSI reporter
    struct Task: public DUNE::Tasks::Task
    {
      //! Counter for determining when to fetch RSSI
      Time::Counter<int> m_period;
      //! Path to SSH private key
      Path m_keyfile;
      //! Message to send with RSSI information
      IMC::RSSI m_msg;
      //! Scanf format to be computed using prefix constant
      std::string m_format;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Connect via SSH", m_args.use_ssh)
        .defaultValue("false")
        .description("When wireless device is attached to a different CPU "
                     "(as it is the case when using Ubiquiti radios), SSH is used to"
                     "connect onto that CPU.");

        param("SSH Flags", m_args.ssh_flags)
        .defaultValue("-y")
        .description("SSH flags to use when connecting. For instance, in "
                     "Dropbear SSH '-y' will accept unknown hosts.");

        param("Update Period", m_args.period)
        .defaultValue("5")
        .minimumValue("2")
        .units(Units::Second)
        .description("Time, in seconds, between RSSI polling.");

        param("Remote Hostname", m_args.remote_host)
        .defaultValue("127.0.0.1")
        .description("Remote address to connect to when using SSH.");

        param("Remote Username", m_args.remote_user)
        .defaultValue("root")
        .description("Remote username to use when connecting over SSH.");

        param("Private Key File", m_args.private_key)
        .defaultValue("../private/etc/id_rsa")
        .description("File name of private key file to use when connecting via SSH. "
                     "File paths shall be given in relation to DUNE configuration folder.");

        // Format to be used when scanning the output of 'iwconfig'
        std::stringstream ss;
        ss << c_prefix << "%d/%d ";
        m_format = ss.str();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_period.setTop(m_args.period);
        m_keyfile = Path(m_ctx.dir_cfg) / m_args.private_key;
        debug("Private key file is in %s", m_keyfile.c_str());
      }

      //! Retrieve current wifi RSSI
      void
      poll()
      {
#ifdef DUNE_SYS_HAS_POPEN
        // Compute command to be used for getting RSSI
        std::stringstream ss;

        // If SSH is used, prepend SSH connection to the command
        if (m_args.use_ssh)
        {
          ss << "ssh " << sanitize(m_args.ssh_flags) << " -i " << m_keyfile.c_str() << " "
             << sanitize(m_args.remote_user) << "@" << sanitize(m_args.remote_host) << " ";
        }
        // Use 'iwconfig' with correct input / output redirection
        ss << "iwconfig </dev/zero 2>/dev/null";
        debug("executing '%s'", ss.str().c_str());

        // Execute and open command output for reading
        FILE* fd = popen(ss.str().c_str(), "re");
        if (fd == NULL)
        {
          war("Unable to retrieve RSSI. Unable to spawn child process.");
        }
        else
        {
          char line[512] = {0};

          while (fgets(line, 512, fd))
          {
            std::string l = String::trim(line);
            // Look for prefix in the output of 'iwconfig'
            if (String::startsWith(l, c_prefix))
            {
              int val, max;
              // Parse RSSI line according to format
              std::sscanf(l.c_str(), m_format.c_str(), &val, &max);
              m_msg.value = (val * 100.0) / max;
              debug("Link quality: %f %% (%s).", m_msg.value, l.c_str());
              // Send received link quality as an RSSI message
              dispatch(m_msg);
              break;
            }
          }
          pclose(fd);
        }
#else
        war("popen() is not supported in this system.");
#endif
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Stop for 1 second (not bound to any messages)
          waitForMessages(1.0);

          if (m_period.overflow())
          {
            double time = Clock::get();
            poll();
            // When using an SSH connection, it may take a while to fetch RSSI.
            debug("Took %f seconds to get RSSI.", Time::Clock::get() - time);
            m_period.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
