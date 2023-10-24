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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_
#define USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Driver.hpp"

namespace UserInterfaces
{
  namespace MantaCore
  {
    using DUNE_NAMESPACES;
    static const float c_timeout_data_in = 1.0;

    class MantaUtils
    {
    public:

      //! Power Channel data structure.
      struct PowerChannel
      {
        IMC::PowerChannelState state;
        unsigned id;
        double sched_on;
        double sched_off;

        PowerChannel(void)
        {
          resetSchedules();
        }

        void
        resetSchedules(void)
        {
          sched_on = -1;
          sched_off = -1;
        }
      };

      MantaUtils(DUNE::Tasks::Task *task, DriverMantaCore* driver) :
      m_task(task)
      {
        m_driver = driver;
        m_wdog.setTop(c_timeout_data_in);
        m_modem_number = 0;
      }

      ~MantaUtils(void) {}

      void
      simulatedDataUpdate(void)
      {
        if(m_wdog.overflow())
        {
          m_wdog.reset();
          dispatchGpsSimulatedData();
        }
      }

      bool
      setPowerChannelData(uint8_t channel_id, std::string power_channel_name, uint8_t power_channel_state)
      {
        struct DriverMantaCore::PowerChannelData m_data;
        m_data.label = power_channel_name;
        if(power_channel_state == true)
          m_data.is_on = IMC::PowerChannelState::PCS_ON;
        else
          m_data.is_on = IMC::PowerChannelState::PCS_OFF;

        m_task->inf("Power Channel %s|%s", m_data.label.c_str(), m_data.is_on ? "ON" : "OFF");
        return m_driver->setPowerChannelState(channel_id, m_data.is_on);
      }

      uint8_t
      getIdOfPowerChannel(std::string power_channel_name)
      {
        struct DriverMantaCore::PowerChannelData data_power;
        for(uint8_t i = 0; i < MantaCore::c_max_power_channels; i++)
        {
          data_power = m_driver->getPowerChannelData(i);
          m_task->debug("%s | %s", data_power.label.c_str(), power_channel_name.c_str());
          if(data_power.label == power_channel_name)
            return i;
        }

        return 255;
      }

      void
      addModemNameToList(std::string modem_name)
      {
        m_task->debug("Modem: %s|%d", modem_name.c_str(), m_modem_number);
        m_driver->addModemNameDevice(modem_name, m_modem_number);
        m_modem_names.push_back(modem_name);
        m_modem_number++;
      }

      uint8_t
      getSizeOfListNameModems(void)
      {
        return m_modem_names.size();
      }

      std::string
      getNameOfModemAt(uint8_t id)
      {
        return m_modem_names[id];
      }

      std::string
      getIOName(const std::string &name_io)
      {
        size_t pos = name_io.find("://");
        if (pos != std::string::npos)
          return name_io.substr(pos + 3);
        else
          return name_io;
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Driver of MantaCore
      DriverMantaCore* m_driver;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Array of system modems names
      std::vector<std::string> m_modem_names;
      //! Counter of number of modems
      uint8_t m_modem_number;

      void
      dispatchGpsSimulatedData(void)
      {
        m_driver->setNumberSat(12);
      }
    };
  }
}

#endif /* USERINTERFACES_MANTACORE_MANTAUTILS_HPP_INCLUDED_ */