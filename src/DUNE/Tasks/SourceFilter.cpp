
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
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <limits.h>

// DUNE headers.
#include <DUNE/Tasks.hpp>
#include <DUNE/Tasks/SourceFilter.hpp>
#include <DUNE/IMC/Constants.hpp>

using namespace DUNE::IMC;

namespace DUNE
{
  namespace Tasks
  {
    /*
    SourceFilter::SourceFilter(void)
    {
      m_task = Tasks::Task();
      m_msg_name = "";
      m_filtered_sys.clear();
      m_filtered_ent.clear();
    }
    */


    SourceFilter::SourceFilter(Tasks::Task& task, const std::vector<std::string>& src,
        const std::string msg_name):
      m_task(task),
      m_msg_name(msg_name)
    {
      defineFilter(src);
    }

    /*
    SourceFilter::SourceFilter(std::string name, Tasks::Context& ctx, const std::vector<std::string>* src,
        const std::string msg_name)
    {
      m_task = 0;
      this = SourceFilter(m_task, src, msg_name);
    }
    */

    bool
    SourceFilter::match(const IMC::Message* msg)
    {
      // Filter the message by systems and entities.
      bool matched = true;
      if (m_filtered_sys.size() > 0)
      {
        matched = false;
        std::vector<uint32_t>::iterator itr_sys = m_filtered_sys.begin();
        std::vector<uint32_t>::iterator itr_ent = m_filtered_ent.begin();
        for (; itr_sys != m_filtered_sys.end(); ++itr_sys)
        {
          if ((*itr_sys == msg->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
              (*itr_ent == msg->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
            matched = true;
          ++itr_ent;
        }
      }
      // These system and entity are not listed to be passed.
      if (!matched)
        m_task.trace("%s rejected (from system '%s' and entity '%s')", m_msg_name.c_str(),
                     m_task.resolveSystemId(msg->getSource()),
                     m_task.resolveEntity(msg->getSourceEntity()).c_str());
      return matched;
    }

    void
    SourceFilter::defineFilter(const std::vector<std::string>& src)
    {
      //==========================================
      //! Process the systems and entities allowed to pass the message
      //==========================================
      uint32_t i_src;
      m_filtered_sys.clear();
      m_filtered_ent.clear();
      for (unsigned int i = 0; i < src.size(); ++i)
      {
        std::vector<std::string> parts;
        Utils::String::split(src[i], ":", parts);
        if (parts.size() < 1)
          continue;

        // Split systems and entities.
        std::vector<std::string> systems;
        Utils::String::split(parts[0], "+", systems);
        std::vector<std::string> entities;
        Utils::String::split(parts[1], "+", entities);

        m_filtered_ent.resize(systems.size()*entities.size());
        m_filtered_sys.resize(systems.size()*entities.size());
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
              m_filtered_sys[i_src] = UINT_MAX;
              m_task.debug("%s filtering - Filter source system undefined", m_msg_name.c_str());
            }
            else
            {
              if (systems[j].compare("self") == 0)
              {
                m_filtered_sys[i_src] = m_task.getSystemId();
                m_task.debug("%s filtering - System '%s' with ID: %d", m_msg_name.c_str(),
                             m_task.resolveSystemId(m_filtered_sys[i_src]), m_filtered_sys[i_src]);
              }
              else
              {
                try
                {
                  m_filtered_sys[i_src] = m_task.resolveSystemName(systems[j]);
                  m_task.debug("%s filtering - System '%s' with ID: %d", m_msg_name.c_str(),
                               m_task.resolveSystemId(m_filtered_sys[i_src]), m_filtered_sys[i_src]);
                }
                catch (...)
                {
                  m_task.war("%s filtering - No system found with designation '%s'!",
                             m_msg_name.c_str(), systems[j].c_str());
                  i_sys_n--;
                  j--;
                }
              }
            }
            // Resolve entities.
            if (entities[j].empty())
            {
              m_filtered_ent[i_src] = UINT_MAX;
              m_task.debug("%s filtering - Filter entity system undefined", m_msg_name.c_str());
            }
            else
            {
              try
              {
                m_filtered_ent[i_src] = m_task.resolveEntity(entities[k]);
                m_task.debug("%s filtering - Entity '%s' with ID: %d", m_msg_name.c_str(),
                             m_task.resolveEntity(m_filtered_ent[i_src]).c_str(), m_filtered_ent[i_src]);
              }
              catch (...)
              {
                m_task.war("%s filtering - No entity found with designation '%s'!",
                           m_msg_name.c_str(), entities[k].c_str());
                i_ent_n--;
                k--;
              }
            }
          }
        }
      }
    }
  }
}
