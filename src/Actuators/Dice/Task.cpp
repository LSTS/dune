//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  //! DICE - DIfferential thrust Converter for bluerobotics Esc500 
  //!
  //! Receives IMC::SetThrusterActuation
  //! and converts it to IMC::SetPWM.
  //! @author Bernardo Gabriel
  namespace Dice
  {
    using DUNE_NAMESPACES;

    //! Total thrusters.
    static constexpr unsigned c_total_thrusters = 2;

    struct Arguments
    {
      //! Index for the Port Thruster.
      int8_t port_id;
      //! Index for the Starboard Thruster.
      int8_t starboard_id;
      //! Reverse Port thruster.
      bool port_reverse;
      //! Reverse Starboard thruster.
      bool starboard_reverse;
      //! Thruster configuration.
      std::vector<uint32_t> thrusters;
    };

    struct ThrusterConfig
    {
      uint32_t period;
      uint32_t min;
      uint32_t zero;
      uint32_t max;

      void
      setConfig(const std::vector<uint32_t>& us)
      {
        if (us.size() != 4)
          throw std::runtime_error("Invalid thruster configuration");

        period = us[0];
        min = us[1];
        zero = us[2];
        max = us[3];
      }

      inline uint32_t
      toDutyCycle(float value, const bool reverse)
      {
        Math::trimValue(value, -1, 1);
        return (reverse ? -1.0f : 1.0f) * ((max - min) / 2) * value + zero;
      }
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Thruster configuration.
      ThrusterConfig m_thruster_config;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Port Thruster Id", m_args.port_id)
        .minimumValue("0")
        .maximumValue("127")
        .defaultValue("0");
        
        param("Starboard Thruster Id", m_args.starboard_id)
        .minimumValue("0")
        .maximumValue("127")
        .defaultValue("1");

        param("Port Thruster Reverse", m_args.port_reverse)
        .defaultValue("false");

        param("Starboard Thruster Reverse", m_args.starboard_reverse)
        .defaultValue("false");

        param("Thruster convertion", m_args.thrusters)
        .defaultValue("20000, 1100, 1500, 1900")
        .description("PWM duty cycles values for thrust convertion in us <Period>:<Min>:<Zero>:<Max>");

        bind<IMC::SetThrusterActuation>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (m_args.port_id ==  m_args.starboard_id)
          throw InvalidValue("Starboard Thruster Id",
                             std::to_string(m_args.starboard_id),
                             "starboard thruster must not have the same index as port thruster");
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
        try
        {
          m_thruster_config.setConfig(m_args.thrusters);
        }
        catch (const std::exception& e)
        {
          throw RestartNeeded(e.what(), 10);
        }

        debug("Thruster configuration: period %u, min=%u, max=%u, zero=%u", m_thruster_config.period,
                                                                            m_thruster_config.min,
                                                                            m_thruster_config.zero,
                                                                            m_thruster_config.max);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      setPWM(const uint8_t id, const uint32_t duty_cycle)
      {
        IMC::SetPWM pwm;
        pwm.id = id;
        pwm.period = m_thruster_config.period;
        pwm.duty_cycle = duty_cycle;

        dispatch(pwm);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        debug("setting thruster %d to %f", msg->id, msg->value);
        bool reverse = (msg->id == m_args.port_id) ? m_args.port_reverse : m_args.starboard_reverse;
        uint32_t duty_cycle = m_thruster_config.toDutyCycle(msg->value, reverse);
        setPWM(msg->id, duty_cycle);
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
