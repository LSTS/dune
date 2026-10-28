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

// C++ headers.
#include <cstdlib>

// Local headers.
#include "Registry.h"

namespace Simulators
{
  namespace StoneFish
  {
    void
    Registry::setDevice(const std::string& device, const DeviceInfo& info)
    {
      std::lock_guard<std::mutex> lock(m_devices_mutex);
      m_devices[device] = info;
    }

    bool
    Registry::resolve(const std::string& device, DeviceInfo& info) const
    {
      std::lock_guard<std::mutex> lock(m_devices_mutex);
      std::map<std::string, DeviceInfo>::const_iterator itr = m_devices.find(device);
      if (itr == m_devices.end())
        return false;

      info = itr->second;
      return true;
    }

    SimVehicle&
    Registry::addVehicle(sf::Robot* robot, uint32_t system_id, bool local)
    {
      std::unique_ptr<SimVehicle> sv(new SimVehicle());
      sv->vehicle.reset(new Vehicle(robot));
      sv->name = sv->vehicle->getName();
      sv->system_id = system_id;
      sv->local = local;
      sv->bound = local;
      sv->diverged = false;

      SimVehicle* ptr = sv.get();
      m_vehicles.push_back(std::move(sv));
      m_by_name[ptr->name] = ptr;
      if (ptr->hasSystem())
        m_by_system[system_id] = ptr;
      if (local)
        m_local = ptr;

      return *ptr;
    }

    void
    Registry::clearVehicles(void)
    {
      m_by_name.clear();
      m_by_system.clear();
      m_local = nullptr;
      m_vehicles.clear();
    }

    SimVehicle*
    Registry::bindEntities(const std::string& name, uint32_t system_id,
                           const std::map<std::string, std::string>& entities)
    {
      std::map<std::string, SimVehicle*>::const_iterator itr = m_by_name.find(name);
      if (itr == m_by_name.end())
        return nullptr;

      SimVehicle* sv = itr->second;
      if (sv->system_id != system_id)
      {
        m_by_system.erase(sv->system_id);
        sv->system_id = system_id;
        m_by_system[system_id] = sv;
      }

      for (std::map<std::string, std::string>::const_iterator eit = entities.begin();
           eit != entities.end(); ++eit)
      {
        const uint32_t eid = (uint32_t)std::strtoul(eit->second.c_str(), nullptr, 10);
        setDevice(sv->name + "/" + eit->first, { system_id, eid });
      }

      sv->bound = true;
      return sv;
    }

    SimVehicle*
    Registry::findBySystem(uint32_t system_id) const
    {
      std::map<uint32_t, SimVehicle*>::const_iterator itr = m_by_system.find(system_id);
      return itr == m_by_system.end() ? nullptr : itr->second;
    }

    std::string
    Registry::getNames(void) const
    {
      std::string names;
      for (const std::unique_ptr<SimVehicle>& sv : m_vehicles)
        names += (names.empty() ? "'" : ", '") + sv->name + "'";
      return names;
    }
  }
}
