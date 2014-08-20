//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AscentRate.hpp"

namespace Supervisors
{
  namespace AUV
  {
    namespace Assist
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! RPM value for dislodging the vehicle
        float dislodge_rpm;
        //! Depth threshold to consider that it is submerged
        float depth_threshold;
        //! Threshold for the depth rate of change
        float min_ascent_rate;
        //! Window size for the moving average of the ascent rate
        unsigned ascent_wsize;
      };

      enum AssistState
      {
        //! Idle state
        ST_IDLE,
        //! Check if stuck
        ST_CHECK_STUCK,
        //! Send acoustic signal
        ST_ACOUSTIC,
        //! Start dislodge
        ST_START_DISLODGE,
        //! Wait for dislodge to be done
        ST_WAIT_DISLODGE
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Current depth
        float m_depth;
        //! Current Medium
        uint8_t m_medium;
        //! Current vehicle state
        uint8_t m_vstate;
        //! Rate of ascent
        AscentRate* m_ar;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_ar(NULL)
        {
          param("Dislodging RPMs", m_args.dislodge_rpm)
          .defaultValue("1600")
          .units(Units::RPM)
          .description("RPM value for dislodging the vehicle");

          param("Depth Threshold", m_args.depth_threshold)
          .defaultValue("0.2")
          .units(Units::Meter)
          .description("Depth threshold to consider that it is submerged");

          param("Minimum Ascent Rate", m_args.min_ascent_rate)
          .defaultValue("0.2")
          .units(Units::MeterPerSecond)
          .description("Threshold for the depth rate of change");

          param("Ascent Rate Window Size", m_args.ascent_wsize)
          .defaultValue("5")
          .description("Window size for the moving average of the ascent rate");

          bind<IMC::VehicleState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::PlanGeneration>(this);
        }

        void
        onResourceAcquisition(void)
        {
          m_ar = new AscentRate(m_args.ascent_wsize);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_ar);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          m_vstate = msg->op_mode;
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
          m_medium = msg->medium;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          m_ar->update(msg->depth);
        }

        void
        consume(const IMC::PlanGeneration* msg)
        {
          (void)msg;
        }

        void
        task(void)
        {

        }
      };
    }
  }
}

DUNE_TASK
