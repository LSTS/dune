

#include <DUNE/DUNE.hpp>
#include <map>

using DUNE_NAMESPACES;

namespace Transports
{
  namespace IridiumOperation
  {

    class PersistentMessage
    {
    public:
      //! Constructor.
      //! @param[in] msg Message to be sent.
      explicit PersistentMessage(const IMC::Message* msg):
        m_msg(msg->clone())
      { }

      ~PersistentMessage(void)
      {
        static unsigned deleted = 0;
        deleted++;
        clear();
      }

      //! Check if all messages were sent.
      //! @param[in] id Transmission ID.
      //! @return true if all messages were sent.
      bool
      onSuccess(uint16_t id)
      {
        m_waiting_ids.erase(id);
        if (m_waiting_ids.empty())
          return true;

        return false;
      }

      //! Check if message should be resent.
      //! @param[in] id Transmission ID.
      //! @return true if message should be resent.
      const IMC::Message*
      onFailure(uint16_t id)
      {
        auto itr = m_msgs.find(id);
        if (itr == m_msgs.end())
          return nullptr;

        Msg& msg = itr->second;
        if (msg.retries >= 3)
          return nullptr;

        msg.retries++;
        return msg.msg;
      }

      const IMC::Message*
      getMessage(uint16_t id)
      {
        auto itr = m_msgs.find(id);
        if (itr == m_msgs.end())
          return nullptr;

        return itr->second.msg;
      }

      void
      addMessage(uint16_t id, const IMC::Message* msg)
      {
        m_msgs.emplace(id, msg->clone());

        m_waiting_ids.insert(id);
        m_ids.insert(id);
      }

      std::set<uint16_t>
      getIDs(void)
      {
        return m_ids;
      }

    private:
      struct Msg
      {
        explicit Msg(const IMC::Message* _msg):
          msg(_msg),
          retries(0)
        { }

        ~Msg(void)
        {
          if (msg != nullptr)
            delete msg;
        }

        //! Delete constructors.
        Msg(void) = delete;
        Msg(const Msg& other) = delete;

        //! Message sent.
        const IMC::Message* msg;
        //! Number of retries.
        unsigned retries;
      };

      //! Clear all messages.
      void
      clear(void)
      {
        m_msgs.clear();
        delete m_msg;
      }

      //! Copy Constructor.
      PersistentMessage(const PersistentMessage& other) = delete;
      //! Assignment Operator.
      PersistentMessage&
      operator=(const PersistentMessage& other) = delete;

      //! Messages sent map.
      std::map<uint16_t, Msg> m_msgs;
      //! Original Message.
      const IMC::Message* m_msg;
      //! Set of IDs waiting for confirmation.
      std::set<uint16_t> m_waiting_ids;
      //! Set of all IDs.
      std::set<uint16_t> m_ids;
    };
  }
}