/*
 * IridiumMessageDefinitions.cpp
 *
 *  Created on: Jun 19, 2013
 *      Author: zp
 */

#include "Transports/Iridium/IridiumMessageDefinitions.hpp"

namespace Transports
{
  namespace Iridium
  {

    IridiumCommand::IridiumCommand()
    {

    }

    int IridiumCommand::serialize(uint8_t * buffer)
    {
      uint8_t* ptr = buffer;
      ptr +=   IMC:: serialize(ID_IRIDIUMCMD, ptr);
      return 0;
    }

    int IridiumCommand::deserialize(uint8_t * data)
    {
      return 0;
    }

  } /* namespace Iridium */
} /* namespace Transports */
