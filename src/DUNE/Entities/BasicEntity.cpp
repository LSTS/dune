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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Entities/BasicEntity.hpp>

namespace DUNE
{
  namespace Entities
  {
    void
    BasicEntity::setLabel(const std::string& label)
    {
      // Throw exception to prevent relabeling after reservation
      if (m_id != DUNE_IMC_CONST_UNK_EID)
      {
        std::string prevlabel = m_ctx.entities.resolve(m_id);
        if (prevlabel != label)
          throw std::runtime_error(DTR("entity label already set: ") + prevlabel + " -> " + label);
      }

      m_label = label;
      m_ent_info.label = label;
      m_ent_info.component = m_owner->getName();
    }

    void
    BasicEntity::reportInfo(void)
    {
      dispatch(m_ent_info);
    }

    void
    BasicEntity::consume(const IMC::QueryEntityInfo* msg)
    {
      if (msg->getDestinationEntity() == getId())
        dispatchReply(*msg, m_ent_info, DF_LOOP_BACK);
      else if (msg->getDestinationEntity() == DUNE_IMC_CONST_UNK_EID)
        dispatch(m_ent_info, DF_LOOP_BACK);
    }

    void
    BasicEntity::dispatch(IMC::Message* msg, unsigned int flags)
    {
      msg->setSource(m_ctx.resolver.id());
      msg->setSourceEntity(getId());

      if ((flags & DF_KEEP_TIME) == 0)
        msg->setTimeStamp();

      if ((flags & DF_LOOP_BACK) == 0)
        m_ctx.mbus.dispatch(msg, m_owner);
      else
        m_ctx.mbus.dispatch(msg);
    }

  }
}
