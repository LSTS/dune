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

#ifndef SIMULATORS_STONEFISH_ENGINE_H
#define SIMULATORS_STONEFISH_ENGINE_H

#include "Manager.h"
#include "Simulation.h"

namespace Simulators
{
  namespace StoneFish
  {
    enum class SimMode
    {
      GRAPHICAL,
      CONSOLE
    };

    class Engine
    {
    public:
      Engine(SimMode mode, const DUNE::FileSystem::Path& scn_fd, double freq,
             const sf::RenderSettings& render, const sf::HelperSettings& helper, simCallback onStep,
             simCallback onBuild, simCallback onPreTick, quitPredicate quit):
        m_manager(nullptr),
        m_sim(nullptr)
      {
        m_manager = new SimManager(freq, onStep, onBuild, onPreTick, scn_fd.str());

        std::string data_dir = scn_fd.dirname().str() + "/";

        switch (mode)
        {
          case SimMode::CONSOLE:
            m_sim = new ConsoleSim("DUNE sim", data_dir, m_manager, quit);
            break;

          case SimMode::GRAPHICAL:
            m_sim = new GraphicalSim("DUNE sim", data_dir, render, helper, m_manager, quit);
            break;
        }
      }

      ~Engine(void)
      {
        // The simulation app does not own the manager: release both.
        delete m_sim;
        delete m_manager;
      }

      /// @brief Start the simulation
      /// @param auto_step Automatically step the simulation?
      /// @param time_step Time step to be used for each simulation update instead of real time (0
      /// means real time)
      /// @param start Automatically start the simulation after initialization?
      /// Returns once the quit predicate holds or the simulation is closed.
      void
      start(bool auto_step = true, double time_step = 0.0, bool start = true)
      {
        m_sim->start(auto_step, time_step, start);
      }

    private:
      SimManager* m_manager;
      SimulatorInterface* m_sim;
    };
  }
}
#endif  // SIMULATORS_STONEFISH_ENGINE_H