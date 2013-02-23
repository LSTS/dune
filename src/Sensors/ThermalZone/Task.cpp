//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
