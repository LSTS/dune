/*
 * IncomingMessage.hpp
 *
 *  Created on: Mar 13, 2014
 *      Author: zp
 */

#ifndef INCOMINGMESSAGE_HPP_
#define INCOMINGMESSAGE_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Fragments
  {
    using DUNE_NAMESPACES;

    class IncomingMessage
    {
    public:
      IncomingMessage();

      double
      getAge();

      int
      getFragmentsMissing();

      IMC::Message *
      setFragment(IMC::MessagePart * part);

      virtual
      ~IncomingMessage();

    private:
      int src;
      int uid;
      int num_frags;
      double creation_time;
      std::map<unsigned int, IMC::MessagePart> fragments;

    };

  } /* namespace Fragments */
} /* namespace Transports */

#endif /* INCOMINGMESSAGE_HPP_ */
