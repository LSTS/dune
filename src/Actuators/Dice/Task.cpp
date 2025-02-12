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

#include "T200.hpp"

namespace Actuators
{
  //! DICE - DIfferential thrust Converter for bluerobotics Esc500.
  //!
  //! Receives IMC::SetThrusterActuation
  //! and converts it to IMC::SetPWM.
  //! If thruster model is specified and known,
  //! dispatch RPM according to PWM duty cycle and input voltage.
  //!
  //! Port thruster id = 0.
  //! Starboard thruster id = 1.
  //!
  //! @author Bernardo Gabriel
  namespace Dice
  {
    using DUNE_NAMESPACES;

    //! Default thrusters voltage.
    static constexpr unsigned c_default_thrusters_voltage = 12.0f;

    struct Arguments
    {
      //! Port Thruster entity label.
      std::string port_elabel;
      //! Starboard Thruster entity label.
      std::string starboard_elabel;
      //! Reverse Port thruster.
      bool port_reverse;
      //! Reverse Starboard thruster.
      bool starboard_reverse;
      //! Thruster configuration.
      std::vector<uint32_t> thrusters;
      //! Thrusters voltages entity labels.
      std::vector<std::string> thrusters_voltages_elabels;
      //! Thrusters models.
      std::vector<std::string> thrusters_models;
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
        Math::trimValue(value, -1.0f, 1.0f);
        return (reverse ? -1.0f : 1.0f) * ((max - min) / 2) * value + zero;
      }
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Thruster configuration.
      ThrusterConfig m_thruster_config;
      //! Task arguments.
      Arguments m_args;
      //! Port thruster voltage entity id.
      unsigned m_port_voltage_eid;
      //! Starboard thruster voltage entity id.
      unsigned m_starboard_voltage_eid;
      //! Thrusters voltages.
      std::vector<float> m_thrusters_voltages;
      //! Thrusters model.
      std::vector<std::unique_ptr<Model>> m_models;
      //! Thrusters entity id.
      uint16_t m_eid[2];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_port_voltage_eid(UINT16_MAX),
        m_starboard_voltage_eid(UINT16_MAX)
      {
        param("Entity Label - Port Motor", m_args.port_elabel)
        .defaultValue("Motor - Port")
        .description("Entity label of port thruster.");

        param("Entity Label - Starboard Motor", m_args.starboard_elabel)
        .defaultValue("Motor - Starboard")
        .description("Entity label of starboard thruster.");

        param("Port Thruster Reverse", m_args.port_reverse)
        .defaultValue("false")
        .description("True if port thruster is reversed, false otherwise.");
        
        param("Starboard Thruster Reverse", m_args.starboard_reverse)
        .defaultValue("false")
        .description("True if starboard thruster is reversed, false otherwise.");

        param("Thruster Conversion", m_args.thrusters)
        .defaultValue("20000, 1100, 1500, 1900")
        .size(4)
        .description("PWM duty cycles values for thrust conversion in microseconds {<Period>, <Min>, <Zero>, <Max>}");

        param("Thruster Input Voltage - Entity Labels", m_args.thrusters_voltages_elabels)
        .minimumSize(0)
        .maximumSize(2)
        .description("Entity Labels for the Thrusters Voltages {<Port Thruster Entity Label>, <Starboard Thruster Entity Label>}"
                     "(or {<Entity Label>}, if common).");

        param("Thrusters Models", m_args.thrusters_models)
        .minimumSize(0)
        .maximumSize(2)
        .description("Thrusters Models {<Port Thruster Model>, <Starboard Thruster Model> (or {<Model>}, if common).");

        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::Voltage>(this);
      }

      unsigned
      getEntityId(const std::string label)
      {
        unsigned eid = UINT16_MAX;

        try
        {
          eid = resolveEntity(label);
        }
        catch (...)
        {
          eid = reserveEntity(label);
        }

        return eid;
      }

      std::unique_ptr<Actuators::Dice::Model>
      getModel(const std::string model)
      {
        if (model == "T200")
          return std::make_unique<Actuators::Dice::T200>();
        
        throw std::invalid_argument("Invalid thruster model name");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.thrusters_models))
        {
          size_t total = m_args.thrusters_models.size();
          switch (total)
          {
          case 1:
            m_models.push_back(getModel(m_args.thrusters_models[0]));
            break;

          case 2:
            m_models.push_back(getModel(m_args.thrusters_models[0]));
            m_models.push_back(getModel(m_args.thrusters_models[1]));
            break;
          
          default:
            break;
          }
        }

        if (paramChanged(m_args.port_elabel))
          m_eid[0] = getEntityId(m_args.port_elabel);

        if (paramChanged(m_args.starboard_elabel))
          m_eid[1] = getEntityId(m_args.starboard_elabel);
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
        size_t total = m_args.thrusters_voltages_elabels.size();
        switch (total)
        {
        case 1:
          m_port_voltage_eid = m_starboard_voltage_eid = getEntityId(m_args.thrusters_voltages_elabels[0]);
          break;

        case 2:
          m_port_voltage_eid = getEntityId(m_args.thrusters_voltages_elabels[0]);
          m_starboard_voltage_eid = getEntityId(m_args.thrusters_voltages_elabels[1]);
          break;
        
        default:
          break;
        }

        m_thrusters_voltages.resize(total, c_default_thrusters_voltage);
        m_models.resize(total);
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

        debug("Thruster configuration: period %u us, min=%u us, max=%u us, zero=%u us", m_thruster_config.period,
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
      dispatchRPM(const uint8_t& id, const uint32_t& duty_cycle)
      {
        if (m_models.empty())
          return;
        
        size_t total = m_thrusters_voltages.size();
        if (total < 1)
          return;

        try
        {
          IMC::Rpm rpm;
          rpm.setSource(getSystemId());
          rpm.setSourceEntity(m_eid[id]);
          auto& model = m_models.at((total > 1) ? id : 0);
          auto& voltage = (total > 1) ? m_thrusters_voltages.at(id) : m_thrusters_voltages.front();
          rpm.value = model->getRPM(voltage, duty_cycle);
          trace("Thruster %u at %d rpm (duty cycle %u us)", id, rpm.value, duty_cycle);
          dispatch(rpm, DF_KEEP_SRC_EID);
        }
        catch(const std::exception& e)
        {
          war("error dispatching RPM: %s", e.what());
        }
      }

      void
      setPWM(const uint8_t& id, const uint32_t& duty_cycle)
      {
        IMC::SetPWM pwm;
        pwm.id = id;
        pwm.period = m_thruster_config.period;
        pwm.duty_cycle = duty_cycle;

        dispatch(pwm);
        dispatchRPM(id, duty_cycle);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        spew("setting thruster %d to %f", msg->id, msg->value);
        auto& reverse = (msg->id == 0) ? m_args.port_reverse : m_args.starboard_reverse;
        uint32_t duty_cycle = m_thruster_config.toDutyCycle(msg->value, reverse);
        setPWM(msg->id, duty_cycle);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if (m_port_voltage_eid == UINT16_MAX || m_starboard_voltage_eid == UINT16_MAX)
          return;

        size_t total = m_args.thrusters_voltages_elabels.size();
        if (total < 1)
          return;
        
        if (msg->getSourceEntity() == m_port_voltage_eid)
          m_thrusters_voltages[0] = msg->value;
        else if (msg->getSourceEntity() == m_starboard_voltage_eid)
          m_thrusters_voltages[(total > 1) ? 1 : 0] = msg->value;
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
