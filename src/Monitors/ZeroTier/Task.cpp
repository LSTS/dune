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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <array>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <regex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Monitor for ZeroTier service.
  //! This monitor checks the state of the ZeroTier service and can
  //! restart it if necessary.
  //! This monitor is designed to run on a Linux-based system with ZeroTier installed and configured.
  //! It will check the state of the ZeroTier service and restart it if it's not running.
  //! It will check the connectivity to remote hosts.
  //! It will restart the system GSM modem, if the Internet service is provided by it.
  //!
  //! Tested on:
  //! - Linux kernel version 6.8.0-63-generic and ZeroTier version 1.14.2, using g++ 13.3.0.
  namespace ZeroTier
  {
    using DUNE_NAMESPACES;

    //! Timeout for general monitor restart message.
    constexpr double c_timeout_tx_request = 120.0;
    //! Command to check ZeroTier state.
    const char* c_zerotier_state_command = "zerotier-cli info";
    //! ZeroTier state command expected result - part 1.
    const char* c_zerotier_state_result_1 = "200";
    //! ZeroTier state command expected result - part 2.
    const char* c_zerotier_state_result_2 = "ONLINE";
    //! Command to restart ZeroTier service.
    const char* c_zerotier_restart_command = "timeout 5 systemctl restart zerotier-one";
    //! Result when command times out.
    constexpr int c_command_timeout_result = 124;

    //! Task arguments.
    struct Arguments
    {
      //! Flag to control automatic restart of ZeroTier service.
      bool auto_restart;
      //! Timeout in minutes to check ZeroTier state.
      float zerotier_state_timeout;
      //! Flag to control force of restart of ZeroTier service.
      bool force_restart;
      //! Flag to control restar of modem GSM
      bool restart_modem_gsm;
      //! Power channel label for GSM modem.
      std::string gsm_modem_power_label;
      //! List of ip's to check for connectivity.
      std::vector<std::string> remote_hosts_ip;
      //! Send updates over satellite.
      bool send_satellite;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Time between checks of the ZeroTier state.
      Time::Counter<float> m_zerotier_state_check;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("AutoReconnect", m_args.auto_restart)
        .defaultValue("true")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Restart the ZeroTier service if it is not running.");

        param("AutoCheck Interval in Minutes", m_args.zerotier_state_timeout)
        .defaultValue("10")
        .minimumValue("2")
        .units(Units::Minute)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Timeout in minutes to check ZeroTier state. "
                     "If the ZeroTier service is not running, it will be restarted.");

        param("Force Restart", m_args.force_restart)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Force restart of ZeroTier service if it is not running. "
                     "If this is set to true, the service will be restarted even if it is running.");

        param("Restart Modem GSM", m_args.restart_modem_gsm)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Restart the GSM modem if it is not running. "
                     "If this is set to true, the modem will be restarted even if it is running.");

        param("Label of GSM Modem Power", m_args.gsm_modem_power_label)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Label of the GSM modem power channel. "
                     "This is used to control the power of the GSM modem.");

        param("Remote Hosts IP to Check for Connectivity", m_args.remote_hosts_ip)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("List of Remote Hosts IP to Check for Connectivity.");

        param("Send Satellite Updates", m_args.send_satellite)
        .defaultValue("false")
        .description("Send updates over satellite.");
      }

      void
      onUpdateParameters(void)
      {
        trace("onUpdateParameters");
        if (paramChanged(m_args.auto_restart))
        {
          spew("AutoReconnect parameter changed to: %s", m_args.auto_restart ? "true" : "false");
        }

        if (paramChanged(m_args.zerotier_state_timeout))
        {
          spew("AutoReconnect Interval in Minutes parameter changed to: %.0f minutes", m_args.zerotier_state_timeout);
          const auto old_top = m_zerotier_state_check.getTop();
          auto new_top = m_args.zerotier_state_timeout * 60.0f;
          if (old_top != 0.0f)
          {
            const auto elapsed = m_zerotier_state_check.getElapsed();
            if (elapsed >= new_top)
              m_zerotier_state_check.setTop(0.0f);
            else if (m_zerotier_state_check.getRemaining() > new_top)
              m_zerotier_state_check.setTop(new_top - elapsed);
          }
        }

        if (paramChanged(m_args.force_restart))
        {
          spew("Force Restart parameter changed to: %s", m_args.force_restart ? "true" : "false");
          if (m_args.force_restart)
          {
            restartZeroTierService();
            applyEntityParameter(&m_args.force_restart, false);
          }
        }

        if (paramChanged(m_args.restart_modem_gsm))
        {
          spew("Restart Modem GSM parameter changed to: %s", m_args.restart_modem_gsm ? "true" : "false");
          if (m_args.restart_modem_gsm)
          {
            restartGSMModem();
            applyEntityParameter(&m_args.restart_modem_gsm, false);
          }
        }

        if (paramChanged(m_args.gsm_modem_power_label))
        {
          if (m_args.gsm_modem_power_label.empty())
            spew("Label of GSM Modem Power is empty.");
          else
            spew("Label of GSM Modem Power parameter changed to: %s", m_args.gsm_modem_power_label.c_str());
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if(isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        inf("Auto-restart: %s, check interval: %.0f minutes", m_args.auto_restart ? "true" : "false", m_args.zerotier_state_timeout);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      onActivation(void) override
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void) override
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Task to execute command to check state of ZeroTier.
      //! The function have safety checks to ensure that the application doesn't give segmentation
      //! fault or core dump.
      //! @return string with the state of ZeroTier.
      std::string
      getZeroTierState(void)
      {
        inf("Retrieving ZeroTier state...");
        std::string state;
        try
        {
          // Execute the command to get the ZeroTier state.
          std::array<char, 128> buffer;
          auto deleter = [](FILE* f)
          {
            if (f)
              pclose(f);
          };

          std::unique_ptr<FILE, decltype(deleter)> pipe(popen(c_zerotier_state_command, "r"), deleter);
          if (!pipe)
          {
            war("Failed to open pipe for ZeroTier command.");
            return "Error: Failed to open pipe for ZeroTier command.";
          }

          while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
          {
            state += buffer.data();
          }

          // Check if there was an error while reading from the pipe.
          if (ferror(pipe.get()))
          {
            war("Error reading from ZeroTier command pipe.");
            return "Error: Error reading from ZeroTier command pipe.";
          }
        }
        catch (const std::exception& e)
        {
          state = "Error: " + std::string(e.what());
        }

        // case the string is empty, return an error message.
        if (state.empty())
        {
          war("ZeroTier state is empty.");
          return "Error: ZeroTier state is empty.";
        }

        // case string state contains "\n", replace by "#"
        Utils::String::replaceAll(state, "\n", "#");
        return state;
      }

      void
      sendMessageOverSatellite(const std::string& message)
      {
        if (!m_args.send_satellite)
          return;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());
        tr.setSourceEntity(getEntityId());
        tr.destination = "broadcast";
        tr.deadline = Time::Clock::getSinceEpoch() + c_timeout_tx_request;  // seconds
        tr.req_id = std::rand() % 0xFFFF;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        std::string msg = std::string(getName()) + " - " + message;
        tr.txt_data = msg;
        dispatch(tr);
      }

      void
      restartZeroTierService(void)
      {
        inf("Attempting to restart ZeroTier service...");
        int result = std::system(c_zerotier_restart_command);
        if (result == 0)
        {
          inf("ZeroTier service restarted successfully.");
          sendMessageOverSatellite("ZeroTier service restarted successfully.");
        }
        else if (WIFEXITED(result) && WEXITSTATUS(result) == c_command_timeout_result)
        {
          err("Restart command timed out.");
          sendMessageOverSatellite("Error: Restart command timed out.");
        }
        else
        {
          err("Failed to restart ZeroTier service. (%d)", result);
          sendMessageOverSatellite("Failed to restart ZeroTier service. Error code: " + std::to_string(result));
        }
      }

      void
      restartGSMModem(void)
      {
        // Attempt to restart GSM modem.
        inf("Powering off GSM modem %s...", m_args.gsm_modem_power_label.c_str());
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.gsm_modem_power_label;
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(pcc, DF_LOOP_BACK);
        Time::Delay::wait(10.0);  // Wait for 10 seconds before powering on again.
        inf("Powering on GSM modem %s...", m_args.gsm_modem_power_label.c_str());
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc, DF_LOOP_BACK);
        inf("GSM modem %s restarted successfully.", m_args.gsm_modem_power_label.c_str());
        sendMessageOverSatellite("GSM modem " + m_args.gsm_modem_power_label + " restarted successfully.");
      }

      bool
      checkInternetConnectionTo(std::string ip_to_check, std::string interface)
      {
        if(interface.empty())
          inf("Checking internet connection to %s ...", ip_to_check.c_str());
        else
          inf("Checking internet connection to %s on interface %s...", ip_to_check.c_str(), interface.c_str());

        std::string cmd = "";
        if (!interface.empty())
        {
          cmd = "ping -I " + interface + " -c 1 -W 2 " + ip_to_check + " > /dev/null 2>&1";  // silent output
        }
        else
        {
          cmd = "ping -c 1 -W 2 " + ip_to_check + " > /dev/null 2>&1";  // silent output
          war("ZeroTier interface name is empty, using default ping command without interface.");
        }
        int returnCode = std::system(cmd.c_str());
        if (returnCode == 0)
        {
          if (!interface.empty())
            inf("Internet connection to %s is OK on interface %s.", ip_to_check.c_str(), interface.c_str());
          else
            inf("Internet connection to %s is OK.", ip_to_check.c_str());

          return true;
        }
        else
        {
          if (!interface.empty())
            war("No internet connection to %s on interface %s", ip_to_check.c_str(), interface.c_str());
          else
            war("No internet connection to %s", ip_to_check.c_str());

          return false;
        }
      }

      void
      checkZeroTierState(void)
      {
        inf("Checking ZeroTier state...");
        std::string state_zerotier = getZeroTierState();
        if (state_zerotier.find(c_zerotier_state_result_1) != std::string::npos || state_zerotier.find(c_zerotier_state_result_2) != std::string::npos)
        {
          inf("ZeroTier is running: %s", sanitize(state_zerotier).c_str());
          // Check internet connection to remote hosts, if all fail, send a message to warning
          if (!m_args.remote_hosts_ip.empty())
          {
            bool all_hosts_fail = true;
            inf("Checking internet connection to remote hosts...");
            std::vector<std::string> interfaces = getZeroTierInterfaceNames();
            if(interfaces.empty())
            {
              war("No ZeroTier interfaces found, using default ping command without interface.");
              for (const auto& ip : m_args.remote_hosts_ip)
              {
                if (checkInternetConnectionTo(ip, ""))
                {
                  all_hosts_fail = false;
                }
              }
              if (all_hosts_fail)
              {
                war("No internet connection to any of the configured remote hosts.");
                std::string message_iri = "No internet connection to any of the configured remote hosts | [" + state_zerotier + "]";
                sendMessageOverSatellite(message_iri);
                if (m_args.auto_restart)
                {
                  if (!m_args.gsm_modem_power_label.empty())
                  {
                    inf("Attempting restart of GSM modem due to no internet connection.");
                    restartGSMModem();
                    Time::Delay::wait(20.0);  // Wait for 20 seconds before restarting ZeroTier state again.
                  }
                  inf("Attempting to restart ZeroTier service due to no internet connection.");
                  restartZeroTierService();
                }
              }
              else
              {
                inf("Internet connection to at least one remote host is OK.");
              }
            }
            else
            {
              inf("Found %zu ZeroTier interfaces.", interfaces.size());
              for (const auto& ip : m_args.remote_hosts_ip)
              {
                bool host_connected = false;
                for (const auto& iface : interfaces)
                {
                  if (checkInternetConnectionTo(ip, iface))
                  {
                    host_connected = true;
                    all_hosts_fail = false;
                    break;  // Exit the loop if one interface is successful.
                  }
                }
                if (!host_connected)
                {
                  war("No internet connection to remote host %s on any ZeroTier interface.", ip.c_str());
                }
              }
              if (all_hosts_fail)
              {
                war("No internet connection to any of the configured remote hosts.");
                std::string message_iri = "No internet connection to any of the configured remote hosts | [" + state_zerotier + "]";
                sendMessageOverSatellite(message_iri);
                if (m_args.auto_restart)
                {
                  inf("Attempting restart of GSM modem due to no internet connection.");
                  if (!m_args.gsm_modem_power_label.empty())
                  {
                    restartGSMModem();
                    Time::Delay::wait(20.0);  // Wait for 20 seconds before restarting ZeroTier state again.
                  }
                  inf("Attempting to restart ZeroTier service due to no internet connection.");
                  restartZeroTierService();
                }
              }
              else
              {
                inf("Internet connection to at least one remote host is OK.");
              }
            }
          }
          else
          {
            inf("No remote hosts IPs configured for connectivity check.");
          }
        }
        else
        {
          war("ZeroTier is not running or in an error state: %s", state_zerotier.c_str());
          sendMessageOverSatellite("ZeroTier is not running or in an error state: " + state_zerotier);
          if (m_args.auto_restart)
          {
            restartZeroTierService();
          }
        }
      }

      std::vector<std::string>
      getZeroTierInterfaceNames()
      {
        inf("Retrieving ZeroTier interface names...");
        std::vector<std::string> interfaces;
        std::string output;
        try
        {
          const char* cmd = "timeout 3 zerotier-cli listnetworks 2>&1";
          std::array<char, 256> buffer;

          auto deleter = [](FILE* f) {
            if (f)
              pclose(f);
          };
          std::unique_ptr<FILE, decltype(deleter)> pipe(popen(cmd, "r"), deleter);
          if (!pipe)
          {
            war("Failed to open pipe for ZeroTier command.");
            return interfaces;
          }

          while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
          {
            output += buffer.data();
          }

          if (ferror(pipe.get()))
          {
            war("Error reading from ZeroTier command pipe.");
            return interfaces;
          }

          if (output.find("command not found") != std::string::npos)
          {
            war("ZeroTier CLI command not found. Ensure ZeroTier is installed and in PATH.");
            return interfaces;
          }

          std::istringstream iss(output);
          std::string line;
          while (std::getline(iss, line))
          {
            trace("Processing line: %s", line.c_str());

            // Skip the header line
            if (line.find("<nwid>") != std::string::npos)
              continue;

            std::istringstream lineStream(line);
            std::string token;

            // Skip first two tokens: "200" and "listnetworks"
            lineStream >> token;  // 200
            lineStream >> token;  // listnetworks

            // Now parse the rest
            int index = 0;
            std::string iface;
            while (lineStream >> token)
            {
              if (index == 5)  // The 6th field is the interface name
              {
                iface = token;
              }
              ++index;
            }

            if (!iface.empty())
            {
              inf("Found ZeroTier interface: %s", iface.c_str());
              interfaces.push_back(iface);
            }
          }

          if (interfaces.empty())
          {
            war("No ZeroTier interfaces found.");
          }

          return interfaces;
        }
        catch (const std::exception& e)
        {
          war("Exception while retrieving ZeroTier interfaces: %s", e.what());
          return interfaces;
        }
        catch (...)
        {
          war("Unknown error while retrieving ZeroTier interfaces.");
          return interfaces;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);

          if (!isActive())
            continue;

          if (m_zerotier_state_check.overflow())
          {
            checkZeroTierState();
            m_zerotier_state_check.setTop(m_args.zerotier_state_timeout * 60.0f);
          }
        }
      }
    };
  }
}

DUNE_TASK