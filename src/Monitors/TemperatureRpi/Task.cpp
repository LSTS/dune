//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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

namespace Monitors
{
  namespace TemperatureRpi
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Path to sysfs temperature.
      std::string temp_path;
      //! Entity label of temperature sensor.
      std::string elabel_temp;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! CPU Temperature.
      IMC::Temperature m_temp;
      //! Task arguments.
      Arguments m_args;
      //! Temperature
      float m_temperature;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx)
      {
        param("Path Temperature", m_args.temp_path)
        .defaultValue("/opt/vc/bin/vcgencmd measure_temp")
        .description("Path to the sysfs file Temperature.");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("Mainboard (Core)")
        .description("Entity label of temperature sensor");
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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      float
      getTemperatureCPU(void)
      {
        char buffer[64];
        std::string result = "";
        FILE* pipe = popen(m_args.temp_path.c_str(), "r");
        if (!pipe)
        {
          err("popen() failed!");
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          m_temperature = -1;
        }
        else
        {
          try
          {
            while (!feof(pipe))
            {
              if (fgets(buffer, sizeof(buffer), pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            pclose(pipe);
            throw;
          }
          pclose(pipe);
          std::sscanf(buffer, "temp=%f'C", &m_temperature);
        }
        return m_temperature;
      }

      void
      task(void)
      {
        try
        {
          m_temp.value = getTemperatureCPU();
          if (m_temp.value > 0)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);

          dispatch(m_temp);
        }
        catch (...)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
