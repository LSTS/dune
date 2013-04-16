//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  //! Device driver for MCD4R.
  //!
  //! MCD4R is a device that controls one robotic arm (pulse and
  //! finger), one pan & tilt, and one camera.
  //!
  //! @author Ricardo Martins
  namespace MCD4R
  {
    using DUNE_NAMESPACES;

    //! Packet identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE    = 1,
      //! Actuation command.
      PKT_ID_ACTUATE  = 2
    };

    //! Actuation commands.
    enum ActuateCommands
    {
      //! Camera pan.
      ACT_CAM_PAN    = 0,
      //! Camera tilt.
      ACT_CAM_TILT   = 1,
      //! Camera zoom.
      ACT_CAM_ZOOM   = 2,
      //! Camera focus.
      ACT_CAM_FOCUS  = 3,
      //! Camera exposure.
      ACT_CAM_EXPO   = 4,
      //! Camera pulse.
      ACT_ARM_PULSE  = 5,
      //! Camera finger.
      ACT_ARM_FINGER = 6
    };

    //! Task arguments.
    struct Arguments
    {
      //! Laser name.
      std::string laser_name;
      //! Serial port device.
      std::string uart_dev;
      //! Watchdog timeout.
      double wdog_tout;
    };

    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;

    struct Task: public DUNE::Tasks::Task
    {
      //! Control interface.
      UCTK::InterfaceUART* m_uart;
      //! Current.
      IMC::Current m_current;
      //! Voltage.
      IMC::Voltage m_voltage;
      //! MCU voltage.
      IMC::Voltage m_voltage_mcu;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .description("Watchdog timeout");

        param("Laser - Name", m_args.laser_name)
        .defaultValue("Laser")
        .description("Name of the laser");

        bind<IMC::SetLedBrightness>(this);
        bind<IMC::QueryLedBrightness>(this);
      }

      ~Task(void)
      { }

      void
      onEntityReservation(void)
      { }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_wdog.setTop(m_args.wdog_tout);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new UCTK::InterfaceUART(m_args.uart_dev);
          m_uart->open();
          UCTK::FirmwareInfo info = m_uart->getFirmwareInfo();
          if (info.isDevelopment())
            war("device is using unstable firmware");
          else
            inf("firmware version %u.%u.%u", info.major,
                info.minor, info.patch);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), c_restart_delay);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_wdog.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::SetLedBrightness* msg)
      {
        if (msg->name != m_args.laser_name)
          return;
      }

      void
      consume(const IMC::QueryLedBrightness* msg)
      {
        if (msg->name != m_args.laser_name)
          return;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(Status::getString(Status::CODE_COM_ERROR), c_restart_delay);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
        }
      }
    };
  }
}

DUNE_TASK
