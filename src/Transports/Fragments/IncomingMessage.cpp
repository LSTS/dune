/*
 * IncomingMessage.cpp
 *
 *  Created on: Mar 13, 2014
 *      Author: zp
 */

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
    IncomingMessage::setFragment(IMC::MessagePart * part)
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

      fragments[part->uid] = *part;

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

    }

  } /* namespace Fragments */
} /* namespace Transports */
