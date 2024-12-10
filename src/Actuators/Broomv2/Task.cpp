//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace Broomv2
  {
    //! .
    //!
    //! .
    //! @author Bernardo Gabriel
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Input timeout in seconds.
      float inp_tout;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Task arguments.
      Arguments m_args;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Input watchdog.
      Time::Counter<float> m_wdog;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, 
                    true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"uart://DEVICE:BAUD\".");

        param("Input Timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("5.0f")
        .minimumValue("0.0f")
        .description("Input timeout");

        setWaitForMessages(1.0);
      }

      //! Destructor.
      ~Task(void)
      {
        onDisconnect();
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
        }
        catch (...)
        {
          war("Failed to connect to device: %s [retrying]", m_args.io_dev.c_str());
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        m_wdog.setTop(m_args.inp_tout);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
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

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        if (m_wdog.getTop() > 0.0f && m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return false;
      }
    };
  }
}

DUNE_TASK
