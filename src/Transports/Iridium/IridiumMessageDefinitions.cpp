/*
 * IridiumMessageDefinitions.cpp
 *
 *  Created on: Jun 19, 2013
 *      Author: zp
 */

# include "Transports/Iridium/IridiumMessageDefinitions.hpp"


namespace Transports
{
  namespace Iridium
  {

    int
    GenericIridiumMessage::serialize(uint8_t * buffer)
    {
      return 0;
    }

    IridiumCommand::IridiumCommand()
    {

    }

    int
    IridiumCommand::serialize(uint8_t * buffer)
    {
      uint8_t* ptr = buffer;
      ptr +=   IMC:: serialize(ID_IRIDIUMCMD, ptr);

      char * str = command.c_str();
      strlen(str);
      return 0;
    }

    int
    IridiumCommand::deserialize(uint8_t * data)
    {
      return 0;
    }

  } /* namespace Iridium */
} /* namespace Transports */
