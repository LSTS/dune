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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IMC_MESSAGE_LIST_HPP_INCLUDED_
#define DUNE_IMC_MESSAGE_LIST_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <stdexcept>
#include <vector>

// DUNE headers.
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Message list.
    template <typename Type>
    class MessageList
    {
    public:
      typedef typename std::vector<Type*>::const_iterator const_iterator;

      //! Default constructor.
      MessageList(void):
        m_parent(NULL)
      { }

      //! Copy constructor. Copy the contents of other to this
      //! instance.
      //! @param[in] other message.
      MessageList(const MessageList& other):
        m_parent(NULL)
      {
        copy(other);
      }

      //! Default destructor.
      ~MessageList(void)
      {
        clear();
      }

      //! Set the parent of the message list. This object will be used
      //! to synchronize the header fields of the messages in the
      //! list.
      //! @param[in] parent message list parent.
      void
      setParent(const Message* parent)
      {
        m_parent = parent;
      }

      //! All the elements of the list are deleted: their destructors
      //! are called, and then they are removed from the vector
      //! container, leaving the container with a size of 0.
      void
      clear(void)
      {
        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
          {
            delete m_list[i];
            m_list[i] = NULL;
          }
        }

        m_list.clear();
      }

      //! Retrieve the number of elements in this list.
      //! @return number of elements in the list.
      size_t
      size(void) const
      {
        return m_list.size();
      }

      //! Return an iterator referring to the first element in the
      //! list container.
      //! @return iterator.
      const_iterator
      begin(void) const
      {
        return m_list.begin();
      }

      //! Returns an iterator referring to the past-the-end element in
      //! the list container.
      //! @return iterator.
      const_iterator
      end(void) const
      {
        return m_list.end();
      }

      //! Add a new element at the end of the list, after its current
      //! last element. The content of this new element is initialized
      //! to a copy of 'msg'.
      //! @param[in] msg message.
      void
      push_back(const Type& msg)
      {
        Type* tmsg = static_cast<Type*>(msg.clone());

        if (m_parent != NULL)
          synchronizeHeader(tmsg);

        m_list.push_back(tmsg);
      }

      //! Add a new element at the end of the list, after its current
      //! last element. The content of this new element is initialized
      //! to 'msg'.
      //! @param[in] msg pointer to message.
      void
      push_back(const Type* msg)
      {
        if (msg == NULL)
        {
          m_list.push_back(NULL);
          return;
        }

        push_back(*msg);
      }

      //! Retrieve the amount of bytes needed to serialize the object.
      //! @return amount of bytes needed for serialization.
      unsigned
      getSerializationSize(void) const
      {
        int nbytes = 2;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          nbytes += 2;

          if (m_list[i] != NULL)
            nbytes += m_list[i]->getPayloadSerializationSize();
        }

        return nbytes;
      }

      //! Assignment operator. Replace the contents of 'this' instance
      //! with the contents of 'other'.
      //! @param[in] other message.
      //! @return reference to this object.
      MessageList&
      operator=(const MessageList& other)
      {
        copy(other);
        return *this;
      }

      //! Compare two instances for equality.
      //! @param[in] other object to compare.
      //! @return true if objects are equal, false otherwise.
      bool
      operator==(const MessageList& other) const
      {
        if (size() != other.size())
          return false;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if ((m_list[i] == NULL) && (other.m_list[i] == NULL))
            continue;

          if ((m_list[i] != NULL) && (other.m_list[i] != NULL))
          {
            if (*m_list[i] != *other.m_list[i])
              return false;
          }
          else
          {
            return false;
          }
        }

        return true;
      }

      //! Compare two instances for inequality.
      //! @param[in] other object to compare.
      //! @return true if objects are not equal, false otherwise.
      inline bool
      operator!=(const MessageList& other) const
      {
        return !(*this == other);
      }

      //! Serialize instance.
      //! @param[in] bfr buffer.
      //! @return amount of bytes used.
      uint16_t
      serialize(uint8_t* bfr) const
      {
        // Serialize number count.
        uint16_t nmsgs = m_list.size();
        bfr += IMC::serialize(nmsgs, bfr);

        // Serialize messages.
        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] == NULL)
          {
            bfr += IMC::serialize((uint16_t)DUNE_IMC_CONST_NULL_ID, bfr);
          }
          else
          {
            bfr += IMC::serialize(m_list[i]->getId(), bfr);
            bfr = m_list[i]->serializeFields(bfr);
          }
        }

        return getSerializationSize();
      }

      //! Deserialize message from byte buffer.
      //! @param[in] bfr buffer.
      //! @param[in] bfr_len buffer size.
      //! @return amount of deserialized bytes.
      uint16_t
      deserialize(const uint8_t* bfr, uint16_t& bfr_len)
      {
        const uint8_t* ptr = bfr;

        // Deserialize message count.
        uint16_t message_count = 0;
        std::memcpy(&message_count, ptr, 2);
        ptr += 2;

        // Deserialize messages.
        for (uint16_t i = 0; i < message_count; ++i)
        {
          uint16_t id = 0;
          std::memcpy(&id, ptr, 2);
          ptr += 2;

          if (id == DUNE_IMC_CONST_NULL_ID)
          {
            m_list.push_back(NULL);
            continue;
          }

          Type* msg = static_cast<Type*>(Factory::produce(id));

          if (msg == NULL)
            throw InvalidMessageId(id);

          uint16_t ssize = msg->deserializeFields(ptr, bfr_len - (ptr - bfr));
          m_list.push_back(msg);
          ptr += ssize;
        }

        bfr_len -= ptr - bfr;
        return ptr - bfr;
      }

      uint16_t
      reverseDeserialize(const uint8_t* bfr, uint16_t& bfr_len)
      {
        const uint8_t* ptr = bfr;

        // Deserialize message count.
        uint16_t message_count = 0;
        Utils::reverseCopy(message_count, (char*)ptr);
        ptr += 2;

        // Deserialize messages.
        for (uint16_t i = 0; i < message_count; ++i)
        {
          uint16_t id = 0;
          Utils::reverseCopy(id, (char*)ptr);
          ptr += 2;

          if (id == DUNE_IMC_CONST_NULL_ID)
          {
            m_list.push_back(NULL);
            continue;
          }

          Type* msg = static_cast<Type*>(Factory::produce(id));

          if (msg == NULL)
            throw InvalidMessageId(id);

          uint16_t ssize = msg->reverseDeserializeFields(ptr, bfr_len - (ptr - bfr));
          m_list.push_back(msg);
          ptr += ssize;
        }

        bfr_len -= ptr - bfr;
        return ptr - bfr;
      }

      void
      toJSON(std::ostream& os, const char* label, unsigned nindent, char prefix = ',') const
      {
        const char* indent = indentJSON(nindent);
        const char* indent_next = indentJSON(nindent + 2);

        os << prefix << '\n' << indent << '"' << label << "\": [";

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] == NULL)
          {
            os << "\"null\"";
          }
          else
          {
            os << "{\n" << indent_next << "\"abbrev\": \"" << m_list[i]->getName() << '"';
            m_list[i]->fieldsToJSON(os, nindent + 2);
            os << '\n' << indent << "}";
          }

          if (i != (m_list.size() - 1))
            os << ",";
        }

        os << "]";
      }

      void
      setTimeStamp(double value)
      {
        if (m_parent == NULL)
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
            m_list[i]->setTimeStamp(value);
        }
      }

      void
      setSource(uint16_t value)
      {
        if (m_parent == NULL)
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
            m_list[i]->setSource(value);
        }
      }

      void
      setSourceEntity(uint8_t value)
      {
        if (m_parent == NULL)
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
            m_list[i]->setSourceEntity(value);
        }
      }

      void
      setDestination(uint16_t value)
      {
        if (m_parent == NULL)
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
            m_list[i]->setDestination(value);
        }
      }

      void
      setDestinationEntity(uint8_t value)
      {
        if (m_parent == NULL)
          return;

        for (unsigned i = 0; i < m_list.size(); ++i)
        {
          if (m_list[i] != NULL)
            m_list[i]->setDestinationEntity(value);
        }
      }

    private:
      //! Parent message.
      const Message* m_parent;
      //! List of messages.
      std::vector<Type*> m_list;

      void
      synchronizeHeader(Type* msg)
      {
        if (msg == NULL)
          return;

        msg->setTimeStamp(m_parent->getTimeStamp());
        msg->setSource(m_parent->getSource());
        msg->setSourceEntity(m_parent->getSourceEntity());
        msg->setDestination(m_parent->getDestination());
        msg->setDestinationEntity(m_parent->getDestinationEntity());
      }

      void
      copy(const MessageList& other)
      {
        m_parent = other.m_parent;

        clear();

        for (unsigned i = 0; i < other.m_list.size(); ++i)
        {
          if (other.m_list[i] == NULL)
            m_list.push_back(NULL);
          else
            m_list.push_back(static_cast<Type*>(other.m_list[i]->clone()));
        }
      }
    };
  }
}

#endif
