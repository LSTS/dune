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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

#ifndef Plan_DB_HPP_INCLUDED_
#define Plan_DB_HPP_INCLUDED_


#include <DUNE/DUNE.hpp>
#include "DB.hpp"

namespace Plan
{
  namespace DB
  {
    using DUNE_NAMESPACES;

    template <typename plans, typename plansinfo, typename sysname>
    void
    PlanInfoParser(plans& plan, plansinfo& m_plan_info, sysname sname)
    {
      m_plan_info.plan_size = plan->getPayloadSerializationSize();
      m_plan_info.plan_id = plan->plan_id;
      m_plan_info.change_time = Clock::getSinceEpoch();
      m_plan_info.change_sid = plan->getSource();
      m_plan_info.change_sname = sname;
    }

    template <typename plans, typename plansinfo, typename blobdata>
    void
    DataParser(plans& plan, plansinfo& m_plan_info, blobdata& plan_data)
    {
      plan->serializeFields((uint8_t*)&plan_data[0]);
      m_plan_info.md5.resize(16);
      MD5::compute((uint8_t*)&plan_data[0], m_plan_info.plan_size, (uint8_t*)&m_plan_info.md5[0]);
    }
  }
}
#endif
