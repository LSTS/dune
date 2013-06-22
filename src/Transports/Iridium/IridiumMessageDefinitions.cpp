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

    GenericIridiumMessage::GenericIridiumMessage(DUNE::IMC::Message * msg)
    {
      this->msg = msg;
      msg_id = msg->getId();
    }

    GenericIridiumMessage::GenericIridiumMessage()
    {
      msg = NULL;
      msg_id = 0;
    }

    int
    GenericIridiumMessage::serialize(uint8_t * buffer)
    {
      uint8_t * start;
      start = buffer;

      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer = msg->serializeFields(buffer);

      return buffer - start;
    }

    int GenericIridiumMessage::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      DUNE::IMC::Message * msg = DUNE::IMC::Factory::produce(msg_id);
      buffer += msg->deserializeFields(buffer, length);

      return buffer - start;
    }

    IridiumCommand::IridiumCommand()
    {
      msg_id = ID_IRIDIUMCMD;
    }

    int
    IridiumCommand::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(command, buffer);

      return buffer - start;
    }

    int
    IridiumCommand::deserialize(uint8_t * buffer, uint16_t length)
    {

      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      buffer += DUNE::IMC::deserialize(command, buffer, length);

      return buffer - start;
    }

    DeviceUpdate::DeviceUpdate()
    {
      msg_id = ID_DEVICEUPDATE;
    }

    int
    DeviceUpdate::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);

      std::vector<DevicePosition>::iterator it;
      for (it = positions.begin(); it != positions.end(); it++)
      {
        buffer += DUNE::IMC::serialize(it->id, buffer);
        buffer += DUNE::IMC::serialize(it->time, buffer);
        buffer += DUNE::IMC::serialize(it->lat, buffer);
        buffer += DUNE::IMC::serialize(it->lon, buffer);
      }

      return buffer - start;
    }

    int
    DeviceUpdate::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      while (length > sizeof(DevicePosition)) {
        DevicePosition pos;
        buffer += DUNE::IMC::deserialize(pos.id, buffer, length);
        buffer += DUNE::IMC::deserialize(pos.time, buffer, length);
        buffer += DUNE::IMC::deserialize(pos.lat, buffer, length);
        buffer += DUNE::IMC::deserialize(pos.lon, buffer, length);
        positions.push_back(pos);
      }

      return buffer - start;
    }

    ActivateSpotSubscription::ActivateSpotSubscription()
    {
      msg_id = ID_ACTIVATESUB;
      imc_id = 0;
    }

    int
    ActivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }

    int
    ActivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }

    DeactivateSpotSubscription::DeactivateSpotSubscription()
    {
      msg_id = ID_DEACTIVATESUB;
      imc_id = 0;
    }

    int
    DeactivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }

    int
    DeactivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }
  } /* namespace Iridium */
} /* namespace Transports */
