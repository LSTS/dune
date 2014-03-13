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


#include <Transports/Fragments/IncomingMessage.hpp>

namespace Transports
{
  namespace Fragments
  {
    IncomingMessage::IncomingMessage()
    {
      src = uid = creation_time = num_frags = -1;
    }

    IMC::Message *
    IncomingMessage::setFragment(const IMC::MessagePart * part)
    {

      // is this the first fragment?
      if (num_frags == -1)
      {
        num_frags = part->num_frags;
        uid = part->uid;
        src = part->getSource();
        creation_time = Time::Clock::get();
      }

      // Check if this is a valid fragment
      if (part->uid != uid || part->getSource() != src
          || part->frag_number >= num_frags)
      {
        std::cerr << "Invalid fragment received and it won't be processed." << std::endl;
        return NULL;
      }

      fragments[part->frag_number] = *part;

      // Message is complete. Let's reassemble and return it.
      if (getFragmentsMissing() == 0)
      {
        int i;
        int total_length = 0;
        // concatenate all parts into a single array
        std::vector<char> data;
        for (i = 0; i < num_frags; i++)
        {
          total_length += fragments[i].data.size();
          data.insert(data.end(), fragments[i].data.begin(),
                      fragments[i].data.end());
        }

        return IMC::Packet::deserialize((uint8_t *)&data[0], total_length);
      }
      else
      {
        return NULL;
      }
    }

    double
    IncomingMessage::getAge()
    {
      if (creation_time == -1)
        return 0;
      return Time::Clock::get() - creation_time;
    }

    int
    IncomingMessage::getFragmentsMissing()
    {
      return num_frags - fragments.size();
    }

    IncomingMessage::~IncomingMessage()
    {
      fragments.clear();
    }

  } /* namespace Fragments */
} /* namespace Transports */
