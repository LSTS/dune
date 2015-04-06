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

using DUNE_NAMESPACES;

namespace Simulators
{
  //! %DVL simulator for DUNE.
  //! %DVL is responsible to gather data from the vehicle simulator
  //! by consuming SimulatedState IMC messages and then add a
  //! configurable gaussian noise component to velocity variables
  //! before sending GroundVelocity and WaterVelocity variables
  //! to the bus.
  //!
  //! To conform with existent hardware properties it is also
  //! possible to define a invalid reading probability to nullify
  //! some of the readings.
  //!
  //! @author Ricardo Martins
  namespace DVL
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Water velocity standard deviation.
      double stdev_wvel;
      //! Ground velocity standard deviation.
      double stdev_gvel;
      //! Invalid reading probability.
      double ir_prob;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! %DVL simulator task.
    struct Task: public Tasks::Periodic
    {
      //! Simulated state.
      IMC::SimulatedState m_sstate;
      //! Water velocity.
      IMC::WaterVelocity m_wvel;
      //! Ground velocity.
      IMC::GroundVelocity m_gvel;
      //! Pseudo-random generator.
      Random::Generator* m_prng;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL)
      {
        param("Standard Deviation - Ground Velocity", m_args.stdev_gvel)
        .units(Units::MeterPerSecond)
        .defaultValue("0.004")
        .description("");

        param("Standard Deviation - Water Velocity", m_args.stdev_wvel)
        .units(Units::MeterPerSecond)
        .defaultValue("0.004")
        .description("");

        param("Invalid Reading Probability", m_args.ir_prob)
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .defaultValue("10")
        .description("");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::SimulatedState>(this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.ir_prob))
          m_args.ir_prob *= 0.01;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        m_sstate = *msg;
      }

      void
      task(void)
      {
        if (!isActive())
          return;

        // Valid reading ?
        bool valid = m_args.ir_prob < 0 ? true : m_prng->uniform() >= m_args.ir_prob;

        if (valid)
        {
          // Water velocity.
          m_wvel.x = m_sstate.u + m_prng->gaussian() * m_args.stdev_wvel;
          m_wvel.y = m_sstate.v + m_prng->gaussian() * m_args.stdev_wvel;
          m_wvel.z = m_sstate.w + m_prng->gaussian() * m_args.stdev_wvel;
          m_wvel.validity = (IMC::WaterVelocity::VAL_VEL_X
                             | IMC::WaterVelocity::VAL_VEL_Y
                             | IMC::WaterVelocity::VAL_VEL_Z);

          // Ground Velocity.
          double bf_wx = 0;
          double bf_wy = 0;
          double bf_wz = 0;
          BodyFixedFrame::toBodyFrame(m_sstate.phi, m_sstate.theta, m_sstate.psi,
                                      m_sstate.svx, m_sstate.svy, m_sstate.svz,
                                      &bf_wx, &bf_wy, &bf_wz);
          m_gvel.x = m_sstate.u + m_prng->gaussian() * m_args.stdev_gvel + bf_wx;
          m_gvel.y = m_sstate.v + m_prng->gaussian() * m_args.stdev_gvel + bf_wy;
          m_gvel.z = m_sstate.w + m_prng->gaussian() * m_args.stdev_gvel + bf_wz;
          m_gvel.validity = (IMC::GroundVelocity::VAL_VEL_X
                             | IMC::GroundVelocity::VAL_VEL_Y
                             | IMC::GroundVelocity::VAL_VEL_Z);
        }
        else
        {
          m_wvel.validity = 0;
          m_gvel.validity = 0;
        }

        // Send data to the bus.
        double tstamp = Time::Clock::getSinceEpoch();
        m_wvel.setTimeStamp(tstamp);
        m_gvel.setTimeStamp(tstamp);
        dispatch(m_wvel, DF_KEEP_TIME);
        dispatch(m_gvel, DF_KEEP_TIME);
      }
    };
  }
}

DUNE_TASK
