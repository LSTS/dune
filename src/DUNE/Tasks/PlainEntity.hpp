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

#ifndef DUNE_TASKS_PLAIN_ENTITY_HPP_INCLUDED_
#define DUNE_TASKS_PLAIN_ENTITY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE Headers.
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/IMC/Factory.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class Task;

    class PlainEntity
    {
    public:
      PlainEntity(Task* task):
        m_owner(task),
        m_id(DUNE_IMC_CONST_UNK_EID)
      { }

      //! Retrieve the entity label.
      //! @return entity label.
      const std::string
      getLabel(void) const
      {
        return m_label;
      }

      //! Set the entity label.
      //! @param[in] label entity label.
      void
      setLabel(const std::string& label);

      //! Retrieve the entity identifier.
      //! @return entity identifier.
      unsigned int
      getId(void) const
      {
        return m_id;
      }

      //! Set the entity identifier.
      //! @param[in] id entity identifier.
      void
      setId(unsigned int id)
      {
        m_id = id;
        m_ent_info.id = id;
      }

      void
      reportInfo(void);

      bool
      operator==(std::string label)
      {
        return getLabel() == label;
      }

      bool
      operator==(unsigned int id)
      {
        return getId() == id;
      }

      void
      consume(const IMC::QueryEntityInfo* msg);

      //! Dispatch message to the message bus.
      //! @param[in] msg message pointer.
      void
      dispatch(IMC::Message* msg);

      //! Dispatch message to the message bus.
      //! @param[in] msg message reference.
      void
      dispatch(IMC::Message& msg)
      {
        dispatch(&msg);
      }

      //! Dispatch message to the message bus in reply to another
      //! message.
      //! @param[in] original original message.
      //! @param[in] msg message reference.
      void
      dispatchReply(const IMC::Message& original, IMC::Message& msg)
      {
        msg.setDestination(original.getSource());
        msg.setDestinationEntity(original.getSourceEntity());
        dispatch(msg);
      }

    protected:
      //! Owner task.
      Task* m_owner;
      //! Entity information message.
      IMC::EntityInfo m_ent_info;

    private:
      //! Entity Id.
      unsigned int m_id;
      //! Entity Label.
      std::string m_label;
    };
  }
}

#endif
