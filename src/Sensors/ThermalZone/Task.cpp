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
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace ThermalZone
  {
    using DUNE_NAMESPACES;

    // %Task arguments.
    struct Arguments
    {
      //! Path to sysfs file.
      std::string path;
      //! Entity label of temperature sensor.
      std::string elabel_temp;
    };

    struct Task: public Tasks::Periodic
    {
      //! Temperature messages.
      IMC::Temperature m_temp;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Define configuration parameters.
        param("Path", m_args.path)
        .defaultValue("/sys/class/thermal/thermal_zone0/temp")
        .description("Path to the sysfs file");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("Mainboard (Core)")
        .description("Entity label of temperature sensor");
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onEntityReservation(void)
      {
        m_temp.setSourceEntity(reserveEntity(m_args.elabel_temp));
      }

      double
      readValue(const char* file)
      {
        std::ifstream ifs(file);
        unsigned value = 0;
        ifs >> value;
        return value / 1000.0;
      }

      void
      task(void)
      {
        try
        {
          m_temp.value = readValue(m_args.path.c_str());
          dispatch(m_temp);
        }
        catch (...)
        {
          // Ignored.
        }
      }
    };
  }
}

DUNE_TASK
