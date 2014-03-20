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
// Author: Jose Pinto                                                       *
//***************************************************************************

#include <DUNE/Network/Fragments.hpp>

namespace DUNE
{
  namespace Network
  {

    IncomingMessage::IncomingMessage()
    {
      m_parent = 0;
      m_src = m_uid = m_creation_time = m_num_frags = -1;
    }

    void
    IncomingMessage::setParentTask(Tasks::Task * parent)
    {
      m_parent = parent;
    }

    IMC::Message*
    IncomingMessage::setFragment(const IMC::MessagePart* part)
    {

      // is this the first fragment?
      if (m_num_frags < 0)
      {
        m_num_frags = part->num_frags;
        m_uid = part->uid;
        m_src = part->getSource();
        m_creation_time = Time::Clock::get();
      }

      // Check if this is a valid fragment
      if (part->uid != m_uid || part->getSource() != m_src ||
          part->frag_number >= m_num_frags)
      {
        if (m_parent == 0)
          std::cerr << "Invalid fragment received and it won't be processed." << std::endl;
        else
          m_parent->err("Invalid fragment received and it won't be processed.");

        return 0;
      }

      m_fragments[part->frag_number] = *part;

      // Message is complete. Let's reassemble and return it.
      if (getFragmentsMissing() == 0)
      {
        int i;
        int total_length = 0;
        // concatenate all parts into a single array
        std::vector<char> data;
        for (i = 0; i < m_num_frags; i++)
        {
          total_length += m_fragments[i].data.size();
          data.insert(data.end(), m_fragments[i].data.begin(),
                      m_fragments[i].data.end());
        }

        return IMC::Packet::deserialize((uint8_t*)&data[0], total_length);
      }
      else
      {
        return 0;
      }
    }

    double
    IncomingMessage::getAge(void)
    {
      if (m_creation_time < 0)
        return 0;

      return Time::Clock::get() - m_creation_time;
    }

    int
    IncomingMessage::getFragmentsMissing(void)
    {
      return m_num_frags - m_fragments.size();
    }

    IncomingMessage::~IncomingMessage(void)
    {
      m_fragments.clear();
    }

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

      Utils::ByteBuffer buff;
      int size = IMC::Packet::serialize(msg, buff);
      uint8_t * buffer = buff.getBuffer();

      int part = 0, pos = 0;
      m_num_frags = (int)std::ceil((float)size / (float)mtu);

      while (pos < size)
      {
        int remaining = size - pos;
        int cur_size = std::min(remaining, mtu);
        IMC::MessagePart * mpart = new IMC::MessagePart();
        mpart->frag_number = part++;
        mpart->num_frags = m_num_frags;
        mpart->uid = m_uid;
        mpart->data.assign(buffer+pos, buffer+pos+cur_size);
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
