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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef SIMULATORS_STONEFISH_SENSORS_H
#define SIMULATORS_STONEFISH_SENSORS_H

// C++ headers.
#include <map>
#include <mutex>
#include <set>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Registry.h"

// Stonefish headers.
#include <Stonefish/core/SimulationManager.h>
#include <Stonefish/sensors/Sample.h>
#include <Stonefish/sensors/ScalarSensor.h>
#include <Stonefish/sensors/VisionSensor.h>
#include <Stonefish/sensors/vision/ColorCamera.h>
#include <Stonefish/sensors/vision/FLS.h>
#include <Stonefish/sensors/vision/MSIS.h>
#include <Stonefish/sensors/vision/SSS.h>

namespace Simulators
{
  namespace StoneFish
  {
    //! Translates Stonefish sensor readings into IMC messages.
    //!
    //! Every sensor of the simulation is dispatched from the IMC address the
    //! Registry maps its name to (robot sensors are prefixed with the robot
    //! name, e.g. "lauv-1/imu"). Sensors without an address are dropped.
    //!
    //! Scalar sensors are polled every simulation step and translated when
    //! a fresh sample is available:
    //! - accelerometer: Acceleration;
    //! - gyroscope:     AngularVelocity;
    //! - imu:           EulerAngles, AngularVelocity and Acceleration;
    //! - compass:       EulerAngles (yaw only);
    //! - dvl:           GroundVelocity, WaterVelocity and Distance (altitude);
    //! - gps:           GpsFix;
    //! - pressure:      Pressure and Depth;
    //! - ins:           EstimatedState;
    //! - encoder:       Rpm;
    //! - current:       Current;
    //! - multibeam:     SonarData (16-bit ranges in millimetres);
    //! - profiler:      Distance.
    //!
    //! Vision sensors deliver data through callbacks, which only fire when
    //! the simulation renders (graphical mode):
    //! - color camera:  CompressedImage (JPEG);
    //! - fls:           SonarData (multibeam, 8-bit intensities);
    //! - sss:           SonarData (sidescan, latest line, 8-bit intensities);
    //! - msis:          SonarData (pencilbeam, full scan, 8-bit intensities).
    //!
    //! Sensors with no IMC counterpart (odometry, pose, force/torque,
    //! torque, depth camera, thermal camera, optical flow camera,
    //! segmentation camera, event-based camera and multibeam2) are
    //! reported once and ignored.
    class SensorBridge
    {
    public:
      //! Constructor.
      //! @param[in] task parent task, used to dispatch IMC messages.
      //! @param[in] registry device to IMC address translation.
      SensorBridge(DUNE::Tasks::Task* task, const Registry& registry);

      //! Collect the sensors of a built simulation and install the data
      //! callbacks of vision sensors.
      //! @param[in] sim simulation manager with a built scenario.
      void
      bind(sf::SimulationManager& sim);

      //! Translate fresh samples of all scalar sensors into IMC messages.
      //! Must be called from the simulation thread, on every step.
      void
      poll(void);

    private:
      //! Dispatch a message from the IMC address of a sensor, or drop it if
      //! the sensor has none.
      void
      dispatch(DUNE::IMC::Message& msg, const std::string& name);

      //! Report a sensor as unsupported, only once.
      void
      warnOnce(const std::string& name, const char* reason);

      //! Translate the last sample of a scalar sensor.
      void
      translate(sf::ScalarSensor* sensor);

      void
      translateAccelerometer(const std::string& name, const sf::Sample& sample);

      void
      translateGyroscope(const std::string& name, const sf::Sample& sample);

      void
      translateImu(const std::string& name, const sf::Sample& sample);

      void
      translateCompass(const std::string& name, const sf::Sample& sample);

      void
      translateDvl(const std::string& name, const sf::Sample& sample);

      void
      translateGps(const std::string& name, const sf::Sample& sample);

      void
      translatePressure(const std::string& name, const sf::Sample& sample);

      void
      translateIns(const std::string& name, const sf::Sample& sample);

      void
      translateEncoder(const std::string& name, const sf::Sample& sample);

      void
      translateCurrent(const std::string& name, const sf::Sample& sample);

      void
      translateMultibeam(sf::ScalarSensor* sensor, const sf::Sample& sample);

      void
      translateProfiler(const std::string& name, const sf::Sample& sample);

      //! Install the data callback of a vision sensor.
      void
      setupVision(sf::VisionSensor* sensor);

      void
      onColorCamera(sf::ColorCamera* camera);

      void
      onFls(sf::FLS* fls);

      void
      onSss(sf::SSS* sss);

      void
      onMsis(sf::MSIS* msis);

      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Device to IMC address translation.
      const Registry& m_registry;
      //! Scalar sensors polled every step.
      std::vector<sf::ScalarSensor*> m_scalars;
      //! Water density used to derive depth from pressure [kg/m³].
      double m_water_density;
      //! JPEG encoder for camera frames (rendering thread only).
      DUNE::Media::JPEGCompressor m_jpeg;
      //! Camera frame counter.
      uint8_t m_frameid;
      //! Sensors already reported as unsupported.
      std::set<std::string> m_warned;
      //! Guards m_warned (poll and vision callbacks run in different threads).
      std::mutex m_warn_mutex;
    };
  }
}

#endif  // SIMULATORS_STONEFISH_SENSORS_H
