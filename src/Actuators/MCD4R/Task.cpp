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
// Author: Pedro Calado                                                     *
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
      ACT_ARM_FINGER = 6,
      //! Lasers.
      ACT_LASER      = 7,
      //! Total number of commands
      ACT_TOTAL      = 8
    };

    //! Camera pan directions
    enum PanCommands
    {
      //! Pan reverse
      PAN_DIR_RV     = 1,
      //! Pan stop
      PAN_DIR_ST     = 0,
      //! Pan forward
      PAN_DIR_FW     = -1
    };

    //! Camera tilt directions
    enum TiltCommands
    {
      //! Tilt reverse
      TILT_DIR_RV    = 1,
      //! Tilt stop
      TILT_DIR_ST    = 0,
      //! Tilt forward
      TILT_DIR_FW    = -1
    };

    //! Camera zoom commands
    enum ZoomCommands
    {
      //! Zoom decrease
      ZOOM_DEC       = -1,
      //! Zoom stop
      ZOOM_STOP      = 0,
      //! Zoom increase
      ZOOM_INC       = 1
    };

    //! Camera focus commands
    enum FocusCommands
    {
      //! Far
      FOCUS_FAR      = -1,
      //! Stop
      FOCUS_STOP     = 0,
      //! Near
      FOCUS_NEAR     = 1,
      //! Auto
      FOCUS_AUTO     = 127
    };

    //! Camera exposure commands
    enum ExposureCommands
    {
      //! Exposure decrease
      EXPO_DEC       = -1,
      //! Exposure stop
      EXPO_STOP      = 0,
      //! Exposure increase
      EXPO_INC       = 1
    };

    //! Arm pulse commands
    enum PulseCommands
    {
      //! Pulse forward
      PULSE_FW       = -1,
      //! Pulse stop
      PULSE_ST       = 0,
      //! Pulse reverse
      PULSE_RV       = 1
    };

    //! Arm finger commands
    enum FingerCommands
    {
      //! Finger forward
      FINGER_FW       = -1,
      //! Finger stop
      FINGER_ST       = 0,
      //! Finger reverse
      FINGER_RV       = 1
    };

    //! Laser commands
    enum LaserCommands
    {
      //! Enable Laser
      LASER_ON        = 1,
      //! Disable laser
      LASER_OFF       = 0
    };

    //! Voltages in the state array
    enum StateVoltages
    {
      //! 24V
      SV_24,
      //! 12V
      SV_12,
      //! 3.3V
      SV_3V3,
      //! Tilt EOL
      SV_TILT_EOL,
      //! Pan EOL
      SV_PAN_EOL,
      //! Number of voltages
      SV_TOTAL
    };

    //! Currents in the state array
    enum StateCurrents
    {
      //! Tilt current
      SC_ITILT,
      //! Pan current
      SC_IPAN,
      //! Pulse current
      SC_IPULSE,
      //! Finger current
      SC_IFINGER,
      //! System current
      SC_ISYS,
      //! Total number of currents
      SC_TOTAL
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

    //! UART baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Amount of seconds to wait before restarting task.
    static const unsigned c_restart_delay = 1;
    //! Size in bytes of the board's state
    static const unsigned c_state_size = 20;
    //! Labels for states voltages
    const char* c_voltage_labels[] =
    {
      "24V", "12V", "3V3", "TILT_EOL", "PAN_EOL"
    };
    //! Labels for state currents
    const char* c_current_labels[] =
    {
      "ITILT", "IPAN", "IPULSE", "IFINGER", "ISYS"
    };
    //! Voltages index in for each measure in the received buffer
    const uint8_t c_voltage_idx[] =
    {
      0, 1, 2, 3, 5
    };
    //! Currents index in for each measure in the received buffer
    const uint8_t c_current_idx[] =
    {
      4, 6, 7, 8, 9
    };
    //! Action names for each actuation command
    const std::string c_action_names[] =
    {
      "Cam Pan", "Cam Tilt", "Cam Zoom", "Cam Focus",
      "Cam Expo", "Arm Pulse", "Arm Finger", "Laser"
    };
    //! Action names for each actuation command
    const std::string c_action_types[] =
    {
      "Hat", "Hat", "Hat", "Hat",
      "Hat", "Hat", "Hat", "Button"
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Control UART.
      SerialPort* m_uart;
      //! Control Interface.
      UCTK::Interface* m_ctl;
      //! Current.
      IMC::Current m_current[SC_TOTAL];
      //! Voltage.
      IMC::Voltage m_voltage[SV_TOTAL];
      //! Watchdog.
      Counter<double> m_wdog;
      //! Set of remote actions
      IMC::RemoteActionsRequest m_actions;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_ctl(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Watchdog Timeout", m_args.wdog_tout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .description("Watchdog timeout");

        param("Laser - Name", m_args.laser_name)
        .defaultValue("Laser")
        .description("Name of the laser");

        bind<IMC::SetLedBrightness>(this);
        bind<IMC::QueryLedBrightness>(this);
        bind<IMC::RemoteActions>(this);
        bind<IMC::RemoteActionsRequest>(this);
      }

      ~Task(void)
      { }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < SV_TOTAL; ++i)
        {
          std::string vlabel = String::str("%s - %s", getEntityLabel(),
                                           c_voltage_labels[i]);
          m_voltage[i].setSourceEntity(reserveEntity(vlabel));
        }

        for (unsigned i = 0; i < SC_TOTAL; ++i)
        {
          std::string clabel = String::str("%s - %s", getEntityLabel(),
                                           c_current_labels[i]);
          m_current[i].setSourceEntity(reserveEntity(clabel));
        }
      }

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
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
          m_ctl = new UCTK::Interface(m_uart);

          UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
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
        m_actions.op = IMC::RemoteActionsRequest::OP_REPORT;

        for (unsigned i = 0; i < ACT_TOTAL; ++i)
          addRemoteAction(c_action_names[i], c_action_types[i]);

        m_wdog.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_ctl);
        Memory::clear(m_uart);
      }

      //! Add a new remote action
      //! @param[in] action name of the action to add
      //! @param[in] type type of the action to add
      void
      addRemoteAction(const std::string& action, const std::string& type)
      {
        std::string tuple = action + "=" + type;

        if (m_actions.actions.size() != 0)
          m_actions.actions.append(";");

        m_actions.actions.append(tuple);
      }

      //! Generic actuation command
      //! @param[in] cmd actuator to interface with
      //! @param[in] dir command to apply to actuator
      //! @return true if successful in sending command
      bool
      actCommand(ActuateCommands cmd, int8_t dir)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_ACTUATE);
        frame.setPayloadSize(2);
        frame.set((uint8_t)cmd, 0);
        frame.set((int)dir, 1);

        if (!m_ctl->sendFrame(frame))
          return false;

        return true;
      }

      //! Pan camera forward, reverse or stop
      //! @param[in] dir direction to which it should pan
      //! @return true if successful in sending command
      inline bool
      cameraPan(PanCommands dir)
      {
        return actCommand(ACT_CAM_PAN, dir);
      }

      //! Tilt camera forward reverse or stop
      //! @param[in] dir direction to which it should tilt
      //! @return true if successful in sending command
      inline bool
      cameraTilt(TiltCommands dir)
      {
        return actCommand(ACT_CAM_TILT, dir);
      }

      //! Zoom camera
      //! @param[in] dir zoom direction
      //! @return true if successful in sending command
      inline bool
      cameraZoom(ZoomCommands dir)
      {
        return actCommand(ACT_CAM_ZOOM, dir);
      }

      //! Command camera's focus
      //! @param[in] cmd focus command
      //! @return true if successful in sending command
      inline bool
      cameraFocus(FocusCommands cmd)
      {
        return actCommand(ACT_CAM_FOCUS, cmd);
      }

      //! Command camera's exposure
      //! @param[in] cmd exposure command
      //! @return true if successful in sending command
      inline bool
      cameraExposure(ExposureCommands cmd)
      {
        return actCommand(ACT_CAM_EXPO, cmd);
      }

      //! Command arm's pulse
      //! @param[in] dir arm's pulse direction
      //! @return true if successful in sending command
      inline bool
      armPulse(PulseCommands dir)
      {
        return actCommand(ACT_ARM_PULSE, dir);
      }

      //! Command arm's finger
      //! @param[in] dir arm's finger direction
      //! @return true if successful in sending command
      inline bool
      armFinger(FingerCommands dir)
      {
        return actCommand(ACT_ARM_FINGER, dir);
      }

      //! Command laser
      //! @param[in] value laser command to apply
      //! @return true if successful in sending command
      inline bool
      actuateLaser(LaserCommands value)
      {
        return actCommand(ACT_LASER, value);
      }

      //! Dispatch raw board state
      //! @return true if successfully dispatched state
      bool
      dispatchState(void)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_STATE);

        if (!m_ctl->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != c_state_size)
          return false;

        for (unsigned i = 0; i < SV_TOTAL; i++)
        {
          uint16_t value;
          frame.get(value, c_voltage_idx[i] * sizeof(uint16_t));
          m_voltage[i].value = value / 1000.0;
          dispatch(m_voltage[i]);
        }

        for (unsigned i = 0; i < SC_TOTAL; i++)
        {
          uint16_t value;
          frame.get(value, c_current_idx[i] * sizeof(uint16_t));
          m_current[i].value = value / 1000.0;
          dispatch(m_current[i]);
        }

        return true;
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

      void
      consume(const IMC::RemoteActions* msg)
      {
        Utils::TupleList tuples(msg->actions);

        for (unsigned i = 0; i < ACT_TOTAL; ++i)
        {
          int op = tuples.get(c_action_names[i], 0);

          actCommand((ActuateCommands)i, op);
        }
      }

      void
      consume(const IMC::RemoteActionsRequest* msg)
      {
        if (msg->op != IMC::RemoteActionsRequest::OP_QUERY)
          return;

        dispatch(m_actions);
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
            if (dispatchState())
            {
              m_wdog.reset();
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
