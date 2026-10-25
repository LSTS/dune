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

#ifndef SIMULATORS_STONEFISH_REGISTRY_H
#define SIMULATORS_STONEFISH_REGISTRY_H

// C++ headers.
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Vehicle.h"

namespace Simulators
{
  namespace StoneFish
  {
    //! IMC address a simulated device is dispatched from.
    struct DeviceInfo
    {
      uint32_t system_id;
      uint32_t entity_id;
    };

    //! A robot of the scenario, exposed to the IMC bus as one system.
    //!
    //! Its state, sensor and actuator feedback messages are dispatched from
    //! its own system id, and actuator commands are routed to it by their
    //! source system id.
    struct SimVehicle
    {
      //! Robot wrapper.
      std::unique_ptr<Vehicle> vehicle;
      //! Ground truth state, stamped with this vehicle's system id.
      DUNE::IMC::SimulatedState sstate;
      //! Scenario robot name (the IMC system name of the represented vehicle).
      std::string name;
      //! IMC system id of the represented vehicle (invalid if unresolved).
      uint32_t system_id;
      //! True if the vehicle is this system (its entities are reserved here).
      bool local;
      //! True once the vehicle's entities are known (always true if local).
      bool bound;
      //! True once the vehicle's state has been flagged as divergent.
      bool diverged;

      //! True if the vehicle has an IMC system to dispatch from.
      bool
      hasSystem(void) const
      {
        return DUNE::IMC::AddressResolver::isValid(system_id);
      }
    };

    //! Translation between the scenario and the IMC bus.
    //!
    //! Single owner of the mapping from scenario robots and devices
    //! ("lauv-1/imu") to the IMC systems and entities they are dispatched
    //! from, and of the reverse mapping used to route actuator commands to a
    //! robot. A device without a mapping is never dispatched: there is no
    //! fallback to the simulator's own address, so the data of an unresolved
    //! vehicle cannot be mistaken for this system's.
    //!
    //! Vehicles are registered and looked up from the simulation thread only.
    //! Device lookups are thread-safe, as vision sensors deliver their data
    //! from the rendering thread.
    class Registry
    {
    public:
      typedef std::vector<std::unique_ptr<SimVehicle>> VehicleList;

      //! Map a device to an IMC address, replacing any previous mapping.
      //! @param[in] device device name (robot/device), as in the scenario.
      //! @param[in] info address to dispatch the device from.
      void
      setDevice(const std::string& device, const DeviceInfo& info);

      //! Resolve the IMC address of a device.
      //! @param[in] device device name (robot/device), as in the scenario.
      //! @param[out] info address to dispatch the device from.
      //! @return false if the device has no address and must not be dispatched.
      bool
      resolve(const std::string& device, DeviceInfo& info) const;

      //! Register a robot of the scenario.
      //! @param[in] robot simulated robot, must outlive the registry.
      //! @param[in] system_id IMC system id of the robot, or an invalid id.
      //! @param[in] local true if the robot is this system.
      //! @return registered vehicle.
      SimVehicle&
      addVehicle(sf::Robot* robot, uint32_t system_id, bool local);

      //! Translate the EntityList a simulated vehicle announces: each of its
      //! entities is mapped as the vehicle's device of the same label, so the
      //! device is dispatched as coming from the vehicle itself.
      //! @param[in] name system name of the announcer.
      //! @param[in] system_id system id of the announcer.
      //! @param[in] entities entity label to entity id.
      //! @return the vehicle bound, or nullptr if the announcer is not a robot
      //! of the scenario.
      SimVehicle*
      bindEntities(const std::string& name, uint32_t system_id,
                   const std::map<std::string, std::string>& entities);

      //! Vehicle a system commands, or nullptr if it is not a robot of the
      //! scenario.
      SimVehicle*
      findBySystem(uint32_t system_id) const;

      //! The robot that is this system, or nullptr if there is none.
      SimVehicle*
      getLocal(void) const
      {
        return m_local;
      }

      //! All registered vehicles, in scenario order.
      const VehicleList&
      getVehicles(void) const
      {
        return m_vehicles;
      }

      //! Comma-separated list of the quoted robot names, for diagnostics.
      std::string
      getNames(void) const;

    private:
      //! Registered vehicles.
      VehicleList m_vehicles;
      //! Robot name to vehicle.
      std::map<std::string, SimVehicle*> m_by_name;
      //! System id to vehicle.
      std::map<uint32_t, SimVehicle*> m_by_system;
      //! The robot that is this system.
      SimVehicle* m_local = nullptr;
      //! Device name to IMC address.
      std::map<std::string, DeviceInfo> m_devices;
      //! Guards m_devices.
      mutable std::mutex m_devices_mutex;
    };
  }
}

#endif  // SIMULATORS_STONEFISH_REGISTRY_H
