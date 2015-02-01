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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Network/Fragments.hpp>

namespace DUNE
{
  namespace Network
  {
    int Fragments::s_uid = 0;

    Fragments::Fragments(IMC::Message* msg, int mtu)
    {
      m_uid = s_uid++;
      m_num_frags = 0;
      int frag_size = mtu - sizeof(IMC::Header) - 5;
      if (frag_size <= 0)
      {
        DUNE_ERR("Fragments", "MTU is too small");
        return;
      }

      Utils::ByteBuffer buff;
      int size = IMC::Packet::serialize(msg, buff);
      uint8_t* buffer = buff.getBuffer();

      int part = 0, pos = 0;
      m_num_frags = (int)std::ceil((float)size / (float)mtu);

      while (pos < size)
      {
        int remaining = size - pos;
        int cur_size = std::min(remaining, mtu);
        IMC::MessagePart* mpart = new IMC::MessagePart();
        mpart->frag_number = part++;
        mpart->num_frags = m_num_frags;
        mpart->uid = m_uid;
        mpart->data.assign(buffer + pos, buffer + pos + cur_size);
        pos += cur_size;
        m_fragments.push_back(mpart);
      }
    }

    IMC::MessagePart*
    Fragments::getFragment(int frag_number)
    {
      return m_fragments[frag_number];
    }

    int
    Fragments::getNumberOfFragments(void)
    {
      return m_num_frags;
    }

    Fragments::~Fragments(void)
    {
      m_fragments.clear();
    }

  } /* namespace Fragments */
} /* namespace Transports */
