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
// Author: Ricardo Bencatel                                                 *
// Author: Joao Fortuna                                                     *
//***************************************************************************

//***************************************************************************
// Sliding Mode Controler
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace Height
    {
      using DUNE_NAMESPACES;

      //! Vector for System Mapping.
      typedef std::vector<uint32_t> Systems;
      //! Vector for Entity Mapping.
      typedef std::vector<uint32_t> Entities;

      struct Arguments
      {
//        double tau_ss;
        double k_vr;
//        double phi_sp_ss;
        double phi_h;
        // Input filtering
        // - Command source
        std::vector<std::string> cmd_src;
        // - EstimatedState source
        std::vector<std::string> state_src;
      };

      struct Task: public Tasks::Periodic
      {
        Arguments m_args;
        IMC::DesiredVerticalRate m_vrate;
        double m_h_dot_cmd;
        double m_airspeed;
        double m_target_z;
        bool m_first_run;

        //! List of systems and entities allowed to define a command.
        Systems m_cmd_filtered_sys;
        Entities m_cmd_filtered_ent;
        //! List of systems and entities allowed to pass EstimatedState.
        Systems m_state_filtered_sys;
        Entities m_state_filtered_ent;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_h_dot_cmd(0.0),
          m_airspeed(0.0),
          m_target_z(0.0),
          m_first_run(true)
        {
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER);

//          param("Sliding Surface maximum gain", m_args.tau_ss)
//          .units(Units::MeterPerSquareSecond)
//          .defaultValue("0.25")
//          .description("Sliding Surface maximum gain for control");

          param("Vertical Rate maximum gain", m_args.k_vr)
          .defaultValue("0.15")
          .description("Vertical Rate maximum gain for control");

//          param("Sliding Surface bandwidth scaler", m_args.phi_sp_ss)
//          .units(Units::MeterPerSecond)
//          .defaultValue("0.7")
//          .description("Sliding Surface bandwidth scaler");

          param("Height bandwidth", m_args.phi_h)
          .units(Units::Meter)
          .defaultValue("20")
          .description("Limit distance above and bellow desired height from which maximum control is used");

          param("DesiredZ Filter", m_args.cmd_src)
          .defaultValue("")
          .description("List of <System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass DesiredZ.");

          param("EstimatedState Filter", m_args.state_src)
          .defaultValue("")
          .description("List of <System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass EstimatedState messages.");

          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::ControlLoops>(this);
        }

        void
        onActivation(void)
        {
          // Activate vertical rate controller.
          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = IMC::CL_VERTICAL_RATE;
          dispatch(cloops);

          m_first_run = true;
        }

        void
        onDeactivation(void)
        {
          // Deactivate vertical rate controller.
          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_DISABLE;
          cloops.mask = IMC::CL_VERTICAL_RATE;
          dispatch(cloops);
        }

        void
        consume(const IMC::ControlLoops* c_loops)
        {
          if (!isActive())
            return;

          if ((c_loops->enable == IMC::ControlLoops::CL_ENABLE) &&
              (c_loops->mask & IMC::CL_ALTITUDE))
          {
            // Activate vertical rate controller.
            IMC::ControlLoops cloops;
            cloops.enable = IMC::ControlLoops::CL_ENABLE;
            cloops.mask = IMC::CL_VERTICAL_RATE;
            dispatch(cloops);
          }
        }

        void
        onEntityResolution(void)
        {
          spew("Entity resolution.");

          //==========================================
          // Process the systems and entities allowed to define DesiredZ
          //==========================================
          uint32_t i_src;
          m_cmd_filtered_sys.clear();
          m_cmd_filtered_ent.clear();
          for (unsigned int i = 0; i < m_args.cmd_src.size(); ++i)
          {
            std::vector<std::string> parts;
            String::split(m_args.cmd_src[i], ":", parts);
            if (parts.size() < 1)
              continue;

            // Split systems and entities.
            std::vector<std::string> systems;
            String::split(parts[0], "+", systems);
            std::vector<std::string> entities;
            String::split(parts[1], "+", entities);
            if (systems.size() == 0)
              systems.resize(1);
            if (entities.size() == 0)
              entities.resize(1);

            m_cmd_filtered_sys.resize(systems.size()*entities.size());
            m_cmd_filtered_ent.resize(systems.size()*entities.size());
            unsigned int i_sys_n = systems.size();
            unsigned int i_ent_n = entities.size();
            // Resolve systems id.
            for (unsigned j = 0; j < i_sys_n; j++)
            {
              // Resolve entities id.
              for (unsigned k = 0; k < i_ent_n; k++)
              {
                i_src = (j+1)*(k+1)-1;
                // Resolve systems.
                if (systems[j].empty())
                {
                  m_cmd_filtered_sys[i_src] = UINT_MAX;
                  debug("DesiredZ filtering - Filter source system undefined");
                }
                else
                {
                  try
                  {
                    m_cmd_filtered_sys[i_src] = resolveSystemName(systems[j]);
                    debug("DesiredZ filtering - System '%s' with ID: %d",
                        systems[j].c_str(), resolveSystemName(systems[j]));
                  }
                  catch (...)
                  {
                    war("DesiredZ filtering - No system found with designation '%s'!", systems[j].c_str());
                    i_sys_n--;
                    j--;
                  }
                }
                // Resolve entities.
                if (entities[j].empty())
                {
                  m_cmd_filtered_ent[i_src] = UINT_MAX;
                  debug("DesiredZ filtering - Filter entity system undefined");
                }
                else
                {
                  try
                  {
                    m_cmd_filtered_ent[i_src] = resolveEntity(entities[k]);
                    debug("DesiredZ filtering - Entity '%s' with ID: %d",
                        entities[k].c_str(), resolveEntity(entities[k]));
                  }
                  catch (...)
                  {
                    war("DesiredZ filtering - No entity found with designation '%s'!", entities[k].c_str());
                    i_ent_n--;
                    k--;
                  }
                }
              }
            }
          }

          //==========================================
          //! Process the systems and entities allowed to pass the EstimatedState
          //==========================================
          m_state_filtered_sys.clear();
          m_state_filtered_ent.clear();
          for (unsigned int i = 0; i < m_args.state_src.size(); ++i)
          {
            std::vector<std::string> parts;
            String::split(m_args.state_src[i], ":", parts);
            if (parts.size() < 1)
              continue;

            // Split systems and entities.
            std::vector<std::string> systems;
            String::split(parts[0], "+", systems);
            std::vector<std::string> entities;
            String::split(parts[1], "+", entities);

            m_state_filtered_ent.resize(systems.size()*entities.size());
            m_state_filtered_sys.resize(systems.size()*entities.size());
            unsigned int i_sys_n = systems.size();
            unsigned int i_ent_n = entities.size();
            // Resolve systems id.
            for (unsigned j = 0; j < i_sys_n; j++)
            {
              // Resolve entities id.
              for (unsigned k = 0; k < i_ent_n; k++)
              {
                i_src = (j+1)*(k+1)-1;
                // Resolve systems.
                if (systems[j].empty())
                {
                  m_state_filtered_sys[i_src] = UINT_MAX;
                  debug("State filtering - Filter source system undefined");
                }
                else
                {
                  try
                  {
                    m_state_filtered_sys[i_src] = resolveSystemName(systems[j]);
                    debug("State filtering - System '%s' with ID: %d",
                        systems[j].c_str(), resolveSystemName(systems[j]));
                  }
                  catch (...)
                  {
                    war("State filtering - No system found with designation '%s'!", systems[j].c_str());
                    i_sys_n--;
                    j--;
                  }
                }
                // Resolve entities.
                if (entities[j].empty())
                {
                  m_state_filtered_ent[i_src] = UINT_MAX;
                  debug("State filtering - Filter entity system undefined");
                }
                else
                {
                  try
                  {
                    m_state_filtered_ent[i_src] = resolveEntity(entities[k]);
                    debug("State filtering - Entity '%s' with ID: %d",
                        entities[k].c_str(), resolveEntity(entities[k]));
                  }
                  catch (...)
                  {
                    war("State filtering - No entity found with designation '%s'!", entities[k].c_str());
                    i_ent_n--;
                    k--;
                  }
                }
              }
            }
          }
        }

        void
        consume(const IMC::IndicatedSpeed* airspeed)
        {
          m_airspeed = airspeed->value;
        }

        void
        consume(const IMC::DesiredZ* desired_z)
        {
          // Filter command by systems and entities.
          bool matched = true;
          if (m_cmd_filtered_sys.size() > 0)
          {
            matched = false;
            std::vector<uint32_t>::iterator itr_sys = m_cmd_filtered_sys.begin();
            std::vector<uint32_t>::iterator itr_ent = m_cmd_filtered_ent.begin();
            for (; itr_sys != m_cmd_filtered_sys.end(); ++itr_sys)
            {
              if ((*itr_sys == desired_z->getSource() || *itr_sys == UINT_MAX) &&
                  (*itr_ent == desired_z->getSourceEntity() || *itr_ent == UINT_MAX))
                matched = true;
              ++itr_ent;
            }
          }
          // This system and entity are not listed to be passed.
          if (!matched)
          {
            trace("DesiredZ rejected (received from system '%s' and entity '%s')",
                resolveSystemId(desired_z->getSource()),
                resolveEntity(desired_z->getSourceEntity()).c_str());
            return;
          }

          m_target_z = desired_z->value;
        }

        void
        consume(const IMC::EstimatedState* state)
        {
          if (!isActive())
            return;

          // Filter EstimatedState by systems and entities.
          bool matched = true;
          if (m_state_filtered_sys.size() > 0)
          {
            matched = false;
            std::vector<uint32_t>::iterator itr_sys = m_state_filtered_sys.begin();
            std::vector<uint32_t>::iterator itr_ent = m_state_filtered_ent.begin();
            for (; itr_sys != m_state_filtered_sys.end(); ++itr_sys)
            {
              if ((*itr_sys == state->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
                  (*itr_ent == state->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
                matched = true;
              ++itr_ent;
            }
          }
          // This system and entity are not listed to be passed.
          if (!matched)
          {
            trace("EstimatedState rejected (from system '%s' and entity '%s')",
                resolveSystemId(state->getSource()),
                resolveEntity(state->getSourceEntity()).c_str());
            return;
          }

          if (m_first_run)
          {
            m_h_dot_cmd = state->vz;
            m_first_run = false;
          }

          /*
          double phi_ss = m_args.phi_sp_ss * m_args.k_vr * m_airspeed;
          double k_ss = phi_ss / m_args.tau_ss;
          */

          double delta_h = m_target_z - (state->height - state->z);

          double delta_h_phi = (delta_h / m_args.phi_h);
          double trimmed_d_h_phi = trimValue(delta_h_phi,-1,1);
          m_vrate.value = m_args.k_vr * m_airspeed * trimmed_d_h_phi;

          /*
          double delta_h_dot = state.vz; //should be -h_dot, but z is pointing down and h is up
          double trimmed_ss = trimValue((delta_h_dot + (m_args.k_vr * m_airspeed * trimmed_d_h_phi)) / phi_ss,-1,1);
          double h_dotdot = k_ss * trimmed_ss;

          if (std::abs(delta_h_phi) < 1)
            h_dotdot += m_args.k_vr * m_airspeed * (delta_h_dot / m_args.phi_h);

          double h_dot_cmd_tmp = m_h_dot_cmd + h_dotdot * ts.delta;

          m_h_dot_cmd = trimValue(h_dot_cmd_tmp, -(m_airspeed * m_args.k_vr), (m_airspeed * m_args.k_vr));

          m_vrate.value = m_h_dot_cmd;
           */
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          // Send to bus
          dispatch(m_vrate);
        }
      };
    }
  }
}

DUNE_TASK
