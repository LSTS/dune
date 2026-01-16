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
// Author: Luis Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Luis Venâncio
  namespace MPU9250Interface
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    static const size_t c_read_buffer_size = 256;
    static const char c_line_term = '\n';

    struct Arguments
    {
      //! IO device.
      std::string uri;
    };

    struct Task: public DUNE::Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! Serial port
      SerialPort* m_uart;
      //! Internal read buffer.
      std::vector<char> m_buffer;
      //! Current line.
      std::string m_line;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Hardware::BasicDeviceDriver(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
          Tasks::Parameter::VISIBILITY_DEVELOPER, 
          true);

        param("IO Port - Device", m_args.uri)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\"");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_uart = static_cast<SerialPort*>(openUART(m_args.uri));
          return true;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(DTR(e.what()), 5.0);
        }

        return false;
      }

      //! Synchronize with device.
      bool
      onSynchronize() override
      {
        try
        {
          return true;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(DTR(e.what()), 5.0);
        }
        
        return false;
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        m_buffer.resize(c_read_buffer_size);
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        Memory::clear(m_uart);
      }

      void
      readInput(void)
      {
        if (!Poll::poll(*m_uart, 1.0))
          return;

        size_t rv = m_uart->read(&m_buffer[0], m_buffer.size());
        if (rv == 0)
          throw std::runtime_error(DTR("invalid read size"));

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(m_buffer[i]);
          if (m_buffer[i] == c_line_term)
          {
            parse(m_line);
            m_line.clear();
          }
        }
      }


      // Parse the line and dispatch IMC messages.
      //! @param[in] line line to parse.
      bool
      parse(const std::string& line)
      {
        trace("Parsing line: %s", line.c_str());

        if (line.empty())
          return false;
        
        if (line[0] != '$')
        {
          // Ignore comments.
          debug("Invalid initializer char: \'%c\' != \'$\'", line[0]);
          return false;
        }

        // Compute checksum.
        unsigned sep_idx = 0;
        uint8_t ccsum = 0;
        for ( ; sep_idx < line.size(); ++sep_idx)
        {
          if (line[sep_idx] == '*')
            break;
          ccsum ^= line[sep_idx];
        }

        // Validate checksum.
        unsigned rcsum = 0;
        if (std::sscanf(&line[0] + sep_idx + 1, "%02X", &rcsum) != 1)
        {
          debug("No checksum found, will not parse sentence.");
          return false;
        }

        if (ccsum != rcsum)
        {
          debug("Invalid checksum: %02X != %02X", ccsum, rcsum);
          return false;
        }

        // Split sentence
        std::vector<std::string> parts;
        String::split(line.substr(1, sep_idx - 1), ",", parts);
        if (parts.size() != 3)
        {
          debug("Invalid number of parts in line: %s", line.c_str());
          return false;
        }

        IMC::EulerAngles msg;
        msg.phi = Angles::radians(std::stod(parts[0]));
        msg.theta = Angles::radians(std::stod(parts[1]));
        msg.psi = Angles::radians(std::stod(parts[2]));
        msg.psi_magnetic = Angles::normalizeRadian(msg.psi);
        dispatch(msg);

        return true;
      }

      //! Read data.
      //! @return true.
      bool
      onReadData() override
      {
        readInput();
        return true;
      }
    };
  }
}

DUNE_TASK
