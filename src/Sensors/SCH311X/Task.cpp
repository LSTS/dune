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
  //! %SCH311X is responsible to interact with the
  //! SCH3112/SCH3114/SCH3116 product family.
  //!
  //! @author Ricardo Martins
  namespace SCH311X
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Path to sysfs file.
      std::string path;
      //! Entity label of temperature sensor 0.
      std::string elabel_temp0;
      //! Entity label of temperature sensor 1.
      std::string elabel_temp1;
      //! Entity label of temperature sensor 2.
      std::string elabel_temp2;
    };

    //! Number of temperature sensors.
    static const unsigned c_max_temps = 3;

    struct Task: public Tasks::Periodic
    {
      //! Temperature file paths.
      Path m_paths[c_max_temps];
      //! Temperature messages.
      IMC::Temperature m_temps[c_max_temps];
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Define configuration parameters.
        param("Path", m_args.path)
        .defaultValue("/sys/class/hwmon/hwmon0/device")
        .description("Path to sysfs file");

        param("Entity Label - Temperature 0", m_args.elabel_temp0)
        .defaultValue("Mainboard (Core)")
        .description("Entity label of temperature sensors number 0");

        param("Entity Label - Temperature 1", m_args.elabel_temp1)
        .defaultValue("Mainboard (SuperIO)")
        .description("Entity label of temperature sensor number 1");

        param("Entity Label - Temperature 2", m_args.elabel_temp2)
        .defaultValue("Mainboard (Board)")
        .description("Entity label of temperature sensor number 2");
      }

      void
      onUpdateParameters(void)
      {
        // Initilize temperature paths.
        for (unsigned i = 0; i < c_max_temps; ++i)
          m_paths[i] = Path(m_args.path) / String::str("temp%u_input", i + 1);
      }

      void
      onResourceInitialization(void)
      {
        for (unsigned i = 0; i < c_max_temps; ++i)
        {
          if (!m_paths[i].isFile())
            throw RestartNeeded(String::str(DTR("file '%s' doesn't exist"), m_paths[i].c_str()), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onEntityReservation(void)
      {
        m_temps[0].setSourceEntity(reserveEntity(m_args.elabel_temp0));
        m_temps[1].setSourceEntity(reserveEntity(m_args.elabel_temp1));
        m_temps[2].setSourceEntity(reserveEntity(m_args.elabel_temp2));
      }

      //! Read value from file.
      //! @param[in] file file descriptor.
      //! @return value from descriptor.
      double
      readValue(const char* file)
      {
        std::ifstream ifs(file);
        int value = 0;
        ifs >> value;
        return value / 1000.0;
      }

      void
      task(void)
      {
        for (unsigned i = 0; i < c_max_temps; ++i)
        {
          m_temps[i].value = readValue(m_paths[i].c_str());
          dispatch(m_temps[i]);
        }
      }
    };
  }
}

DUNE_TASK
