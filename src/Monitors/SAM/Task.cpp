//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

namespace Monitors
{
  //! SAM is a System Actuators Monitor
  //! for Autonaut ASV class system.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bernardo Gabriel
  namespace SAM
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Entity Label for Thruster Current.
      std::string thruster_curr_elabel;
      //! Entity Label for Rudder Current.
      std::string rudder_curr_elabel;
      //! Thruster current threshold.
      double thruster_curr;
      //! Rudder current threshold.
      double rudder_curr;
      //! Threshold timeout.
      unsigned timeout;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Entity id for Thruster Current.
      uint8_t m_thruster_curr_eid;
      //! Timer for Thruster monitor.
      Counter<unsigned> m_thruster_timer;
      //! Entity id for Rudder Current.
      uint8_t m_rudder_curr_eid;
      //! Timer for Rudder monitor.
      Counter<unsigned> m_rudder_timer;
      //! Monitor state.
      bool m_state;
      //! Thruster state;
      bool m_thruster_state;
      //! Rudder state;
      bool m_rudder_state;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_thruster_curr_eid(AddressResolver::invalid()),
        m_rudder_curr_eid(AddressResolver::invalid()),
        m_state(false),
        m_thruster_state(false),
        m_rudder_state(false)
      {
        param("Thruster Current - Entity Label", m_args.thruster_curr_elabel)
        .defaultValue("THRUSTER_D")
        .editable("false")
        .description("Entity Label for Thruster Current");

        param("Thruster Current - Threshold", m_args.thruster_curr_elabel)
        .minimumValue("0.0")
        .defaultValue("0.0")
        .units(Units::Ampere)
        .description("Threshold for Thruster Current."
                     "When this value is 0.0, monitor will consider"
                     "Thruster model");

        param("Rudder Current - Entity Label", m_args.rudder_curr_elabel)
        .defaultValue("RUDDER_D")
        .editable("false")
        .description("Entity Label for Rudder Current");

        param("Rudder Current - Threshold", m_args.thruster_curr_elabel)
        .minimumValue("0.0")
        .defaultValue("0.0")
        .units(Units::Ampere)
        .description("Threshold for Rudder Current."
                     "When this value is 0.0, Rudder will not be monitored");

        param("Timeout", m_args.timeout)
        .minimumValue("1")
        .defaultValue("10")
        .units(Units::Second)
        .description("If current is below threshold"
                     "for more than Timeout seconds,"
                     "trigger an error.");

        bind<IMC::Current>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.timeout))
        {
          m_thruster_timer.setTop(m_args.timeout);
          m_rudder_timer.setTop(m_args.timeout);
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
        m_thruster_curr_eid = resolveEntity(m_args.thruster_curr_elabel);
        m_rudder_curr_eid = resolveEntity(m_args.rudder_curr_elabel);
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
      consume(const IMC::Current* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        const auto src_eid = msg->getSourceEntity();
        if (src_eid == m_thruster_curr_eid)
        {
          if (msg->value > m_args.thruster_curr)
          {
            m_thruster_timer.reset();
            m_thruster_state = true;
          }
        }
        else if (src_eid == m_rudder_curr_eid)
        {
          if (msg->value > m_args.rudder_curr)
          {
            m_rudder_timer.reset();
            m_rudder_state = true;
          }
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      }

      void
      task(void)
      {
        if (m_thruster_timer.overflow())
          m_thruster_state = false;
        
        if (m_rudder_timer.overflow())
          m_rudder_state = false;

        std::ostringstream description;
        description << "active";
        if (m_state)
        {
          description << " | thruster: "
                      << (m_thruster_state ? "ok" : "error");

          description << " | rudder: "
                      << (m_rudder_state ? "ok" : "error");
        }

        setEntityState((m_thruster_state && m_rudder_state) ? EntityState::ESTA_NORMAL : EntityState::ESTA_ERROR,
                       description.str());
      }
    };
  }
}

DUNE_TASK
