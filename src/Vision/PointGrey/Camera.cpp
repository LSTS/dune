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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// Local headers.
#include "Task.hpp"

namespace Vision
{
  namespace PointGrey
  {
    //! Publish camera firmware information.
    void
    Task::getInfoCamera(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      debug("Vendor Name: %s", m_camInfo.vendorName);
      debug("Model Name: %s", m_camInfo.modelName);
      debug("Serial Number: %d", m_camInfo.serialNumber);
      debug("Sensor Info: %s", m_camInfo.sensorInfo);
      debug("Sensor Resolution: %s", m_camInfo.sensorResolution);
      debug("Firmware Version: %s", m_camInfo.firmwareVersion);
      debug("copyright: %s", m_args.copyright.c_str());
      debug("Lens Model: %s", m_args.lens_model.c_str());
      debug("Lens Maker: %s", m_args.lens_maker.c_str());
      IMC::VersionInfo vi;
      vi.version = m_camInfo.firmwareVersion;
      vi.op = IMC::VersionInfo::OP_REPLY;
      dispatch(vi);
#endif
    }

    //! Detect, configure and start the Point Grey camera.
    bool
    Task::setUpCamera(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      if (m_camera.IsConnected())
      {
        m_camera.StopCapture();
        m_camera.Disconnect();
      }

      unsigned int cameras = 0;
      int attempt = 1;
      while (attempt <= c_max_number_attempts_bus && !stopping())
      {
        FlyCapture2::BusManager bus;
        m_error = bus.GetNumOfCameras(&cameras);
        if (m_error != FlyCapture2::PGRERROR_OK)
          err("Failed to create bus manager (attempt: %d): %s", attempt, m_error.GetDescription());
        else if (cameras < 1)
          err("No cameras found at bus manager attempt %d (%d)", attempt, cameras);
        else
        {
          inf("Number of cameras found in bus manager attempt %d is %d", attempt, cameras);
          m_error = bus.GetCameraFromIndex(0, &m_guid);
          if (m_error == FlyCapture2::PGRERROR_OK)
            break;
          err("Failed to get camera index at bus manager attempt %d: %s", attempt,
              m_error.GetDescription());
        }
        ++attempt;
        Delay::wait(2);
      }

      if (attempt > c_max_number_attempts_bus || stopping())
      {
        err("No cameras found in attempt %d", attempt);
        return false;
      }

      m_error = m_camera.Connect(&m_guid);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to connect to camera: %s", m_error.GetDescription());
        return false;
      }
      m_error = m_camera.GetCameraInfo(&m_camInfo);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to get camera info from camera: %s", m_error.GetDescription());
        return false;
      }
      m_error = m_camera.RestoreFromMemoryChannel(1);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to restore config %s", m_error.GetDescription());
        return false;
      }

      // Do not rely on the camera's persisted user set. The task fires the
      // IEEE-1394 software-trigger register, whose trigger source is 7.
      FlyCapture2::TriggerModeInfo trigger_info;
      m_error = m_camera.GetTriggerModeInfo(&trigger_info);
      if (m_error != FlyCapture2::PGRERROR_OK || !trigger_info.present
          || !trigger_info.softwareTriggerSupported)
      {
        err("Camera does not support software triggering: %s",
            m_error == FlyCapture2::PGRERROR_OK ? "not available" : m_error.GetDescription());
        return false;
      }
      FlyCapture2::TriggerMode trigger_mode;
      trigger_mode.onOff = true;
      trigger_mode.mode = 0;
      trigger_mode.parameter = 0;
      trigger_mode.source = 7;
      m_error = m_camera.SetTriggerMode(&trigger_mode);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to enable software trigger: %s", m_error.GetDescription());
        return false;
      }

      if (!set_shutter_value(m_args.shutter_value))
        return false;

      FlyCapture2::FC2Config configuration;
      m_error = m_camera.GetConfiguration(&configuration);
      if (m_error != FlyCapture2::PGRERROR_OK)
        return false;
      configuration.grabTimeout = m_capture_timeout;
      m_error = m_camera.SetConfiguration(&configuration);
      if (m_error != FlyCapture2::PGRERROR_OK)
        return false;
      m_error = m_camera.StartCapture();
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to start image capture: %s", m_error.GetDescription());
        return false;
      }
      getInfoCamera();
      inf("Camera ready.");
#endif
      return true;
    }

    //! Wait until the camera accepts a software trigger.
    bool
    Task::pollForTriggerReady(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      const unsigned int trigger = 0x62C;
      unsigned int value = 0;
      const double deadline = Clock::get() + m_capture_timeout / 1000.0;
      do
      {
        m_error = m_camera.ReadRegister(trigger, &value);
        if (m_error != FlyCapture2::PGRERROR_OK)
        {
          err("Failed PollForTriggerReady: %s", m_error.GetDescription());
          return false;
        }
        if ((value >> 31) == 0)
          return !stopping();
        if (Clock::get() >= deadline || stopping())
        {
          if (!stopping())
            war("Software trigger was not ready after %u ms (register 0x%08X)", m_capture_timeout,
                value);
          return false;
        }
        Delay::waitMsec(1);
      } while (true);
#endif
      return true;
    }

    //! Set the shutter duration in milliseconds.
    bool
    Task::set_shutter_value(float value)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      FlyCapture2::Property property;
      property.type = FlyCapture2::SHUTTER;
      property.onOff = true;
      property.autoManualMode = false;
      property.absControl = true;
      property.absValue = value;
      m_error = m_camera.SetProperty(&property);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to set shutter value: %s", m_error.GetDescription());
        m_error.PrintErrorTrace();
        return false;
      }
#else
      (void)value;
#endif
      return true;
    }

    //! Issue one software trigger.
    bool
    Task::fireSoftwareTrigger(void)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      m_error = m_camera.WriteRegister(0x62C, 0x80000000);
      if (m_error != FlyCapture2::PGRERROR_OK)
      {
        err("Failed to FireSoftwareTrigger: %s", m_error.GetDescription());
        return false;
      }
#endif
      return true;
    }
  }
}
