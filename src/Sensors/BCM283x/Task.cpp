//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: PGonçalves                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! %BCM283x is responsible to interact with the
  //! BCM2835/BCM2836/BCM2837 product family.
  //!
  //! @author PGonçalves
  namespace BCM283x
  {
    using DUNE_NAMESPACES;

    static const float c_timeout_reading = 3.0;

    struct Arguments
    {
      //! Path to sysfs temperature.
      std::string temp_path;
      //! Entity label of temperature sensor.
      std::string elabel_temp;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! IMC msg -> CPU Temperature.
      IMC::Temperature m_temp;
      //! Task arguments.
      Arguments m_args;
      //! Temperature value
      float m_temperature;
      //! buffer for path of temperature value
      char m_buffer[64];
      //! string for result output
      std::string result;
      //! Timer to control reading of temperature
      Time::Counter<float> m_timeout_reading;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_temperature(0)
      {
        param("Path Temperature", m_args.temp_path)
        .defaultValue("/sys/class/thermal/thermal_zone0/temp")
        .description("Path to the sysfs file Temperature.");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("Mainboard (Core)")
        .description("Entity label of temperature sensor.");
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_temp.setSourceEntity(reserveEntity(m_args.elabel_temp));
      }

      void
      onResourceInitialization(void)
      {
        m_temperature = 0;
        m_timeout_reading.setTop(c_timeout_reading);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      float
      getTemperatureCPU(void)
      {
        std::memset(&m_buffer, '\0', sizeof(m_buffer));
        std::sprintf(m_buffer, "cat %s", m_args.temp_path.c_str());
        FILE* pipe = popen(m_buffer, "r");
        if (!pipe)
        {
          err("popen() failed!");
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          m_temperature = -1;
        }
        else
        {
          std::memset(&m_buffer, '\0', sizeof(m_buffer));
          m_timeout_reading.reset();
          try
          {
            while (!std::feof(pipe) && !m_timeout_reading.overflow())
            {
              if (std::fgets(m_buffer, sizeof(m_buffer), pipe) != NULL)
                result += m_buffer;
            }

            if(m_timeout_reading.overflow())
            {
              pclose(pipe);
              war("timeout - error reading temperature");
              return 0;
            }
          }
          catch (...)
          {
            pclose(pipe);
            return 0;
          }
          pclose(pipe);
          try
          {
            std::sscanf(m_buffer, "%f", &m_temperature);
          }
          catch (...)
          {
            return 0;
          }
        }

        if(m_temperature != 0)
          return (m_temperature/1000);
        else
          return 0;
      }

      void
      task(void)
      {
        try
        {
          m_temp.value = getTemperatureCPU();
        }
        catch (...)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }

        if (m_temp.value > 0)
        {
          m_temp.setDestination(getSystemId());
          dispatch(m_temp);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          war("Wrong value of temperature read");
        }
      }
    };
  }
}

DUNE_TASK
