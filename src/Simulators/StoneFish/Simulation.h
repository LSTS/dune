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

#ifndef SIMULATORS_STONEFISH_SIM_H
#define SIMULATORS_STONEFISH_SIM_H

#include <Stonefish/core/ConsoleSimulationApp.h>
#include <Stonefish/core/GraphicalSimulationApp.h>
#include <Stonefish/core/SimulationApp.h>
#include <Stonefish/core/SimulationManager.h>

#include <functional>

namespace Simulators
{
  namespace StoneFish
  {
    //! Polled by the application loop: true to end the simulation.
    using quitPredicate = std::function<bool(void)>;

    // Interface for the simulator
    class SimulatorInterface
    {
    public:
      virtual ~SimulatorInterface() = default;

      /// Start the simulation
      virtual void
      start(bool auto_step, double time_step, bool start) = 0;

      /// Exit the simulation
      virtual void
      exit(void) = 0;
    };

    class ConsoleSim: public sf::ConsoleSimulationApp, public SimulatorInterface
    {
    public:
      ConsoleSim(const std::string& title, const std::string& dir, sf::SimulationManager* sim,
                 quitPredicate quit):
        sf::ConsoleSimulationApp(title, dir, sim),
        m_quit(quit)
      { }

      void
      start(bool auto_step, double time_step, bool start) override
      {
        sf::ConsoleSimulationApp::Run(start, auto_step, sf::Scalar(time_step));
      }

      void
      exit(void) override
      {
        sf::ConsoleSimulationApp::StopSimulation();
        sf::ConsoleSimulationApp::Quit();
      }

      void
      step(void)
      {
        sf::ConsoleSimulationApp::StepSimulation();
      }

    protected:
      //! Runs in the thread that called start(), so the simulation is
      //! stopped from the thread that owns it.
      void
      LoopInternal(void) override
      {
        if (m_quit())
          exit();
        else
          sf::ConsoleSimulationApp::LoopInternal();
      }

    private:
      quitPredicate m_quit;
    };

    class GraphicalSim: public sf::GraphicalSimulationApp, public SimulatorInterface
    {
    public:
      GraphicalSim(const std::string& title, const std::string& dir, sf::RenderSettings r,
                   sf::HelperSettings h, sf::SimulationManager* sim, quitPredicate quit):
        sf::GraphicalSimulationApp(title, dir, r, h, sim),
        m_quit(quit)
      { }

      void
      start(bool auto_step, double time_step, bool start) override
      {
        sf::GraphicalSimulationApp::Run(start, auto_step, sf::Scalar(time_step));
      }

      void
      exit(void) override
      {
        sf::GraphicalSimulationApp::StopSimulation();
        sf::GraphicalSimulationApp::Quit();
      }

    protected:
      //! Runs in the thread that called start(), which also owns the
      //! rendering context.
      void
      LoopInternal(void) override
      {
        if (m_quit())
          exit();
        else
          sf::GraphicalSimulationApp::LoopInternal();
      }

    private:
      quitPredicate m_quit;
    };

  }
}

#endif  // SIMULATORS_STONEFISH_SIM_H