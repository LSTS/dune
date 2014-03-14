/*
 * MessageFragments.cpp
 *
 *  Created on: Mar 14, 2014
 *      Author: zp
 */

#include "MessageFragments.hpp"

namespace Transports
{
  namespace Fragments
  {
    int MessageFragments::uid = 0;

    MessageFragments::MessageFragments(IMC::Message * msg, int mtu)
    {
      m_uid = uid++;
      m_num_frags = 0;
      int frag_size = mtu - sizeof(IMC::Header) - 5;
      if (frag_size <= 0)
      {
        std::cerr << "MTU needs to be bigger than " << (sizeof(IMC::Header) + 5) << "." << std::endl;
        return;
      }

      ByteBuffer buff;
      int size = IMC::Packet::serialize(msg, buff);
      uint8_t * buffer = buff.getBuffer();

      int part = 0, pos = 0;
      m_num_frags = (int)std::ceil((double)size / (double)mtu);

      while (pos < size)
      {
        int remaining = size - pos;
        int cur_size = std::min(remaining, mtu);
        MessagePart * mpart = new MessagePart();
        mpart->frag_number = part++;
        mpart->num_frags = m_num_frags;
        mpart->uid = m_uid;
        mpart->data.assign(buffer[pos], buffer[pos+cur_size]);
        pos += cur_size;
        m_fragments.push_back(mpart);
      }
    }

    IMC::MessagePart *
    MessageFragments::getFragment(int frag_number)
    {
      return m_fragments[frag_number];
    }

    int
    MessageFragments::getNumberOfFragments()
    {
      return m_num_frags;
    }

    MessageFragments::~MessageFragments()
    {
      m_fragments.clear();
    }

  } /* namespace Fragments */
} /* namespace Transports */
