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
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_SAMPLING_BASIC_SAMPLER_HPP_INCLUDED_
#define MANEUVER_SAMPLING_BASIC_SAMPLER_HPP_INCLUDED_

#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>

namespace Maneuver
{
  namespace Sampling
  {
    //! Basic sampler
    class BasicSampler
    {
    public:
      //! Default constructor.
      BasicSampler(DUNE::Maneuvers::Maneuver* task, const std::string& sampler_type):
          m_task(task),
          m_sampler_type(sampler_type)
      { }

      ~BasicSampler() = default;

      virtual void
      onReset(void)
      { }

      virtual void
      onInit(const DUNE::IMC::Sampling* msg) = 0;

      virtual void
      onPathControlState(const DUNE::IMC::PathControlState* msg)
      { 
        (void)msg;
      }

      virtual void
      onEstimatedState(const DUNE::IMC::EstimatedState* msg)
      { 
        (void)msg;
      }

      virtual void
      run(void)
      { }

    protected:
      //! Parent task.
      DUNE::Maneuvers::Maneuver* m_task;

      void
      debug(const std::string& msg) const
      {
        m_task->debug("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

      void
      trace(const std::string& msg) const
      {
        m_task->trace("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

      void
      spew(const std::string& msg) const
      {
        m_task->spew("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

      void
      war(const std::string& msg) const
      {
        m_task->war("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

      void
      err(const std::string& msg) const
      {
        m_task->err("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

      void
      inf(const std::string& msg) const
      {
        m_task->inf("[%s] >> %s", m_sampler_type.c_str(), msg.c_str());
      }

    private:
      //! Sampler type name.
      std::string m_sampler_type;
    };
  }
}

#endif
