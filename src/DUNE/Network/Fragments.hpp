/*
 * Fragments.hpp
 *
 *  Created on: Mar 20, 2014
 *      Author: zp
 */

#ifndef FRAGMENTS_HPP_
#define FRAGMENTS_HPP_

#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>

namespace DUNE
{
  namespace Network
  {

    class IncomingMessage
    {
    public:
      IncomingMessage();
      double getAge(void);
      int getFragmentsMissing(void);
      IMC::Message* setFragment(const IMC::MessagePart* part);
      void setParentTask(Tasks::Task * parent);
      ~IncomingMessage(void);
    private:
      int m_src;
      int m_uid;
      int m_num_frags;
      double m_creation_time;
      Tasks::Task * m_parent;
      std::map<unsigned int, IMC::MessagePart> m_fragments;
    };

    class MessageFragments
    {
    public:
      MessageFragments(IMC::Message * message, int mtu);
      IMC::MessagePart * getFragment(int frag_number);
      int getNumberOfFragments();
      ~MessageFragments();
    private:
      static int uid;
      int m_uid;
      int m_num_frags;
      std::vector<IMC::MessagePart *> m_fragments;
    };

  } /* namespace Fragments */
} /* namespace Transports */

#endif /* FRAGMENTS_HPP_ */
