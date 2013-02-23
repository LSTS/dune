//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IMC_INLINE_MESSAGE_HPP_INCLUDED_
#define DUNE_IMC_INLINE_MESSAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <stdexcept>

// DUNE headers.
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Inline Message.
    template <typename Type>
    class InlineMessage
    {
    public:
      //! Default constructor.
      InlineMessage(void):
        m_parent(NULL),
        m_msg(NULL)
      { }

      //! Copy constructor.
      InlineMessage(const InlineMessage& other):
        m_parent(other.m_parent),
        m_msg(NULL)
      {
        *this = other;
      }

      //! Default destructor.
      ~InlineMessage(void)
      {
        clear();
      }

      void
      setParent(const Message* parent)
      {
        m_parent = parent;
      }

      void
      set(const Type& msg)
      {
        replace(dynamic_cast<Type*>(msg.clone()));
      }

      void
      set(Type* msg)
      {
        set(*msg);
      }

      void
      clear(void)
      {
        if (m_msg != NULL)
        {
          delete m_msg;
          m_msg = NULL;
        }
      }

      const Type*
      get(void) const
      {
        if (isNull())
          throw std::runtime_error("dereference of null inline message");

        return m_msg;
      }

      Type*
      get(void)
      {
        if (isNull())
          throw std::runtime_error("dereference of null inline message");
        return m_msg;
      }

      template <typename T>
      inline bool
      get(const T*& m) const
      {
        m = NULL;

        if (!isNull())
          m = dynamic_cast<const T*>(m_msg);

        return m != NULL;
      }

      template <typename T>
      inline bool
      get(T*& m)
      {
        m = NULL;

        if (!isNull())
          m = dynamic_cast<T*>(m_msg);

        return m != NULL;
      }

      unsigned
      getSerializationSize(void) const
      {
        if (m_msg == NULL)
          return 2;

        return m_msg->getPayloadSerializationSize() + 2;
      }

      bool
      isNull(void) const
      {
        return m_msg == NULL;
      }

      Type&
      operator*(void) const
      {
        return *m_msg;
      }

      Type*
      operator->(void) const
      {
        return m_msg;
      }

      //! Assignment operator.
      InlineMessage&
      operator=(const InlineMessage& other)
      {
        clear();

        if (other.m_msg != NULL)
          m_msg = dynamic_cast<Type*>(other.m_msg->clone());

        return *this;
      }

      bool
      operator==(const InlineMessage& other) const
      {
        if (isNull() && other.isNull())
          return true;

        if (!isNull() && !other.isNull())
          return *(m_msg) == *(other.m_msg);

        return false;
      }

      bool
      operator!=(const InlineMessage& other) const
      {
        return !(*this == other);
      }

      uint16_t
      serialize(uint8_t* bfr) const
      {
        if (m_msg == NULL)
        {
          bfr += IMC::serialize((uint16_t)DUNE_IMC_CONST_NULL_ID, bfr);
        }
        else
        {
          bfr += IMC::serialize(m_msg->getId(), bfr);
          m_msg->serializeFields(bfr);
        }

        return getSerializationSize();
      }

      uint16_t
      deserialize(const uint8_t* bfr, uint16_t& bfr_len)
      {
        uint16_t id = 0;
        std::memcpy(&id, bfr, 2);

        if (id == DUNE_IMC_CONST_NULL_ID)
          return 2;

        Type* m = dynamic_cast<Type*>(Factory::produce(id));

        if (m == 0)
          throw InvalidMessageId(id);

        uint16_t ssize = m->deserializeFields(bfr + 2, bfr_len - 2);
        replace(m);

        bfr_len -= (ssize + 2);
        return (ssize + 2);
      }

      uint16_t
      reverseDeserialize(const uint8_t* bfr, uint16_t& bfr_len)
      {
        uint16_t id = 0;
        Utils::reverseCopy(id, (char*)bfr);

        if (id == DUNE_IMC_CONST_NULL_ID)
          return 2;

        Type* m = dynamic_cast<Type*>(Factory::produce(id));

        if (m == 0)
          throw InvalidMessageId(id);

        uint16_t ssize = m->reverseDeserializeFields(bfr + 2, bfr_len - 2);
        replace(m);

        bfr_len -= (ssize + 2);

        return (ssize + 2);
      }

      void
      toJSON(std::ostream& os, const char* label, unsigned nindent, char prefix = ',') const
      {
        const char* indent = indentJSON(nindent);
        const char* indent_next = indentJSON(nindent + 2);

        os << prefix << '\n' << indent << '"' << label << "\": ";

        if (m_msg == NULL)
        {
          os << "\"null\"";
        }
        else
        {
          os << "{\n" << indent_next << "\"abbrev\": \"" << m_msg->getName() << '"';
          m_msg->fieldsToJSON(os, nindent + 2);
          os << '\n' << indent << "}";
        }
      }

    private:
      //! Parent message.
      const Message* m_parent;
      //! Inlined message.
      Type* m_msg;

      //! Replace current message.
      //! @param[in] msg message.
      void
      replace(Type* msg)
      {
        clear();
        m_msg = msg;
        synchronizeHeader();
      }

      void
      synchronizeHeader(void)
      {
        if ((m_parent == NULL) || (m_msg == NULL))
          return;

        m_msg->setTimeStamp(m_parent->getTimeStamp());
        m_msg->setSource(m_parent->getSource());
        m_msg->setSourceEntity(m_parent->getSourceEntity());
        m_msg->setDestination(m_parent->getDestination());
        m_msg->setDestinationEntity(m_parent->getDestinationEntity());
      }
    };
  }
}

#endif
