//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: zemarinho                                                        *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Tutorials
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author zemarinho
  namespace ESP32
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! URI.
      std::string uri;
      int freq;
    };

    struct Task: public DUNE::Hardware::BasicDeviceDriver
    {
      Arguments m_args;
      IO::Handle* m_handle;
      std::string m_cmd;
      bool m_incoming_cmd;
      Counter<float> m_timer;
      int m_frequency;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Hardware::BasicDeviceDriver(name, ctx),
        m_handle(nullptr),
        m_incoming_cmd(false),
        m_timer(10.0)
      {
        param("IO Port - Device", m_args.uri)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\".");

        param("Led Frequency", m_args.freq)
          .defaultValue("1");
        
        setWaitForMessages(0.1);
      }
        
        
      bool
      onConnect(void) override
      {
        m_handle = openDeviceHandle(m_args.uri);
        return true;
      }

      void
      onInitializeDevice(void) override
      {
        return;
      }

      void
      onDisconnect(void) override
      {
        return;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.freq))
        {
          if (m_handle == nullptr)
            return;

          auto cmd = String::str("$%i*\r\n", m_args.freq);
          m_handle->write(cmd.c_str(), cmd.size());
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

      void
      parseCommand(void)
      {
        inf("recv: %s", m_cmd.c_str());
        std::vector<std::string> lst;
        String::split(m_cmd, ",", lst);
        for (const auto& tok: lst)
        {
          war("token: %s", tok.c_str());
        }
      }

      bool
      ingestData(void)
      {
        uint8_t bfr[128];
        size_t rv = m_handle->read(bfr, sizeof(bfr));
        for (size_t i = 0; i < rv; ++i)
        {
          const char c = bfr[i];
          switch (c)
          {
          case '$':
            m_incoming_cmd = true;
            m_cmd = "";
            break;

          case '*':
            parseCommand();
            m_cmd = "";
            break;
          
          default:
            m_cmd.push_back(c);
            break;
          }
        }

        return rv > 0;
      }

      //! Main loop.
      bool
      onReadData(void) override
      {
        if (m_timer.overflow())
        {
          // war("setting frequency: %d", m_args.freq);
          // auto cmd = String::str("$%i*\r\n", m_args.freq);
          // m_handle->write(cmd.c_str(), cmd.size());
          m_timer.reset();
        }

        if (Poll::poll(*m_handle, 1.0))
          return ingestData();
      
        return false;
      }
    };
  }
}

DUNE_TASK
