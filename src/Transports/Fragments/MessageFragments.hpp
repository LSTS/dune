/*
 * MessageFragments.hpp
 *
 *  Created on: Mar 14, 2014
 *      Author: zp
 */

#ifndef MESSAGEFRAGMENTS_HPP_
#define MESSAGEFRAGMENTS_HPP_

// DUNE headers.
# include <DUNE/DUNE.hpp>
# include <DUNE/Math/Random.hpp>

namespace Transports
{
  namespace Fragments
  {
    using DUNE_NAMESPACES;



    class MessageFragments
    {
    public:
      MessageFragments(IMC::Message * message, int mtu);
      IMC::MessagePart * getFragment(int frag_number);
      int getNumberOfFragments();
      virtual
      ~MessageFragments();
    private:
      static int uid;
      int m_uid;
      int m_num_frags;
      std::vector<IMC::MessagePart *> m_fragments;
    };

  } /* namespace Fragments */
} /* namespace Transports */

#endif /* MESSAGEFRAGMENTS_HPP_ */
