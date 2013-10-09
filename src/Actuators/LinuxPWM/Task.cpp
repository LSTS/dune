//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace LinuxPWM
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Slots path.
      std::string slots_path;
      //! Slots.
      std::vector<std::string> slots;
      //! Period paths.
      std::vector<std::string> per_paths;
      std::vector<unsigned> exc_periods;
      std::vector<double> exc_angles;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Slots Path", m_args.slots_path)
        .defaultValue("/sys/devices/bone_capemgr.8/slots")
        .description("Something like /sys/devices/bone_capemgr.8/slots");

        param("Slots", m_args.slots_path)
        .defaultValue("am33xx_pwm, bone_pwm_P8_13");

        param("Period Paths", m_args.per_paths)
        .defaultValue("/sys/devices/ocp.2/pwm_test_P8_13.10/period");

        param("Excursion - Periods", m_args.exc_periods)
        .size(2)
        .defaultValue("5000000, 10000000");

        param("Excursion - Angles", m_args.exc_angles)
        .size(2)
        .defaultValue("0, 20");

        bind<IMC::SetServoPosition>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < m_args.exc_angles.size(); ++i)
        {
          m_args.exc_angles[i] = Angles::radians(m_args.exc_angles[i]);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (msg->id >= m_args.per_paths.size())
          return;

        if (msg->value < m_args.exc_angles[0])
          return;

        if (msg->value > m_args.exc_angles[1])
          return;

        double diff = m_args.exc_angles[1] - m_args.exc_angles[0];
        double tmp = (msg->value - m_args.exc_angles[0]) / diff;

        diff = m_args.exc_periods[1] - m_args.exc_periods[0];
        double period = (tmp * diff) + m_args.exc_periods[0];
        std::ofstream ofs(m_args.per_paths[msg->id].c_str(), std::ios::binary);
        ofs << (unsigned)period << std::endl;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
