//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//local headers
#include "PollThread.hpp"
#include "Driver.hpp"

namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace WT901C
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! I/O device handle.
      std::string io_handle;
      //! Input timeout.
      float inp_tout;
    };

    class WaitingForHeader: public std::exception
    {
    public:
      WaitingForHeader(void):
        std::exception()
      { }
    };

    class FormattedError: public std::runtime_error
    {
    public:
      template <typename... Args>
      FormattedError(const char* fmt, Args... args):
        std::runtime_error(format(fmt, args...))
      { }

    private:
      static std::string
      format(const char* fmt, ...)
      {
        char buf[256];
        va_list ap;
        va_start(ap, fmt);
        vsnprintf(buf, sizeof(buf), fmt, ap);
        va_end(ap);
        return std::string(buf);
      }
    };

    enum SensorInputState
    {
      WAIT_HEADER,
      WAIT_TYPE,
      READ_DATA,
      WAIT_CHECKSUM
    };

    struct Packet
    {
      uint8_t header;
      uint8_t type;

      //! Input data buffer.
      std::vector<uint8_t> input;

      uint8_t checksum;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! I/O handle.
      IO::Handle* m_handle;
      //! Input watchdog.
      Counter<double> m_wdog;
      //! Current sensor state.
      SensorInputState m_sensor_state;
      //! Current packet.
      Packet m_packet;
      //! Task arguments.
      Arguments m_args;
      //! PoolThread for reading data.
      PollThread* m_poll_thread;
      //! Driver
      Driver* m_driver;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("IO Port - Device", m_args.io_handle)
          .defaultValue("uart://ttyUSB0:115200")
          .description("I/O handle to use for communication with the device.");

        param("Input Timeout", m_args.inp_tout)
          .units(Units::Second)
          .defaultValue("4.0")
          .minimumValue("0.0")
          .description("Input timeout");

        setWaitForMessages(0.1);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect(void) override
      {
        try
        {
          war("Connecting to device: %s", m_args.io_handle.c_str());
          m_handle = openDeviceHandle(m_args.io_handle);
          if (m_handle == nullptr)
          {
            err("Failed to open device handle: %s", m_args.io_handle.c_str());
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }
          m_driver = new Driver(this, m_handle);
          m_poll_thread = new PollThread(this, m_handle, m_driver);
          m_poll_thread->start();
        }
        catch (...)
        {
          err("Failed to open device handle: %s", m_args.io_handle.c_str());
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect(void) override
      {
        if(m_poll_thread != NULL)
        {
          m_poll_thread->stopAndJoin();
          Memory::clear(m_poll_thread);
        }
        if(m_driver != NULL)
          Memory::clear(m_driver);
      }

      //! Initialize device.
      void
      onInitializeDevice(void) override
      {
        m_wdog.setTop(m_args.inp_tout);
      }

      bool
      onReadData(void) override
      {
        Time::Delay::waitMsec(1);
        if(m_driver != NULL)
        {
          if(m_driver->newValidData())
            m_wdog.reset();
        }
        if(m_wdog.overflow())
        {
          err("No valid data, > %d seconds", (int)m_args.inp_tout);
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
        return true;
      }
    };
  }
}

DUNE_TASK
