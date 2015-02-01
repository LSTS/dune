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
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef DUNE_ENTITIES_BASIC_ENTITY_HPP_INCLUDED_
#define DUNE_ENTITIES_BASIC_ENTITY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE Headers.
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Tasks/Recipient.hpp>
#include <DUNE/Tasks/Consumer.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/AbstractTask.hpp>

namespace DUNE
{
  namespace Entities
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicEntity;

    enum DispatchFlags
    {
      //! Do not update timestamp.
      DF_KEEP_TIME = (1 << 0),
      //! Allow message to be delivered to the task that is
      //! dispatching it.
      DF_LOOP_BACK = (1 << 2)
    };

    //! Basic Entity class, handling only QueryEntityInfo/EntityInfo messages,
    //! and implementing the most basic Entity interface.
    class BasicEntity
    {
    public:
      //! Constructor.
      //! @param[in] owner pointer to the task containing the entity.
      //! @param[in] context entity context.
      BasicEntity(Tasks::AbstractTask* owner, Tasks::Context& context):
        m_owner(owner),
        m_ctx(context),
        m_id(DUNE_IMC_CONST_UNK_EID)
      { }

      //! Destructor.
      virtual ~BasicEntity()
      { }

      //! Set the IMC bindings using the provided recipient object.
      //! @param[in] recipient pointer to the recipient object to use for binding to IMC messages.
      virtual void
      setBindings(Tasks::Recipient* recipient)
      {
        bind<IMC::QueryEntityInfo, BasicEntity>(recipient, this);
      }

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

      //! Report the entity information by broadcasting an EntityInfo message.
      void
      reportInfo(void);

      //! Compare label against a string.
      //! @param[in] label string to be compared against.
      //! @return true if the label and the string match, false otherwise.
      bool
      operator==(const std::string label)
      {
        return getLabel() == label;
      }

      //! Compare id against an unsigned integer.
      //! @param[in] id integer to use for comparison.
      //! @return true if the entity id and the integer match, false otherwise.
      bool
      operator==(unsigned int id)
      {
        return getId() == id;
      }

      //! Process QueryEntityInfo message.
      //! @param[in] msg pointer to QueryEntityInfo message.
      void
      consume(const IMC::QueryEntityInfo* msg);

      //! Dispatch message to the message bus.
      //! @param[in] msg message pointer.
      //! @param[in] flags bitfield with flags (see Tasks::DispatchFlags).
      void
      dispatch(IMC::Message* msg, unsigned int flags = 0);

      //! Dispatch message to the message bus.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags (see Tasks::DispatchFlags).
      void
      dispatch(IMC::Message& msg, unsigned int flags = 0)
      {
        dispatch(&msg, flags);
      }

      //! Dispatch message to the message bus in reply to another
      //! message.
      //! @param[in] original original message.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags (see Tasks::DispatchFlags).
      void
      dispatchReply(const IMC::Message& original, IMC::Message& msg, unsigned int flags = 0)
      {
        msg.setDestination(original.getSource());
        msg.setDestinationEntity(original.getSourceEntity());
        dispatch(msg, flags);
      }

    protected:
      //! Owner task.
      Tasks::AbstractTask* m_owner;
      //! Context
      Tasks::Context& m_ctx;
      //! Entity information message.
      IMC::EntityInfo m_ent_info;

      //! Bind a message to a consumer method.
      //! @param recipient recipient object.
      //! @param ent_obj consumer entity.
      //! @param consumer consumer method.
      template <typename M, typename E>
      void
      bind(Tasks::Recipient* recipient, E* ent_obj, void (E::* consumer)(const M*) = &E::consume)
      {
        recipient->bind(M::getIdStatic(), new Tasks::Consumer<E, M>(*ent_obj, consumer));
      }

    private:
      //! Entity Id.
      unsigned int m_id;
      //! Entity Label.
      std::string m_label;
    };
  }
}

#endif
