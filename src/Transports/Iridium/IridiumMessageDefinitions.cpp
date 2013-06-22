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

    DUNE::IMC::IridiumMsgTx *
    IridiumMessage::serialize()
    {
      uint8_t buffer[65535];

      DUNE::IMC::IridiumMsgTx * m = new DUNE::IMC::IridiumMsgTx();
      int len = this->serialize(buffer);
      m->data.assign(buffer, buffer+len);

      return m;
    }

    IridiumMessage *
    IridiumMessage::deserialize(const DUNE::IMC::IridiumMsgRx * msg)
    {
      uint8_t * ptr = (uint8_t *) msg->data.data();
      IridiumMessage * ret = NULL;
      uint16_t msg_id;
      memcpy(&msg_id, ptr, sizeof(msg_id));

      switch(msg_id) {
        case (ID_ACTIVATESUB):
            ret = (IridiumMessage *) new ActivateSpotSubscription();
            ret->deserialize(ptr, msg->data.size());
            return ret;

        case (ID_DEACTIVATESUB):
            ret = (IridiumMessage *) new DeactivateSpotSubscription();
            ret->deserialize(ptr, msg->data.size());
            return ret;

        case (ID_DEVICEUPDATE):
            ret = (IridiumMessage *) new DeviceUpdate();
            ret->deserialize(ptr, msg->data.size());
            return ret;

        case (ID_IRIDIUMCMD):
            ret = (IridiumMessage *) new IridiumCommand();
            ret->deserialize(ptr, msg->data.size());
            return ret;
        default:
            ret = (IridiumMessage *) new GenericIridiumMessage();
            ret->deserialize(ptr, msg->data.size());
            return ret;
      }
    }

    GenericIridiumMessage::GenericIridiumMessage(DUNE::IMC::Message * m)
    {
      msg = m;
      msg_id = m->getId();
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
      buffer = msg->serializeFields(buffer);

      return buffer - start;
    }

    int GenericIridiumMessage::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      msg = DUNE::IMC::Factory::produce(msg_id);
      if (msg == NULL)
      {
        std::cerr << "ERROR parsing Iridium message: unknown msg id: " << msg_id << std::endl;
        return 0;
      }

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
      buffer += DUNE::IMC::serialize(command, buffer);

      return buffer - start;
    }

    int
    IridiumCommand::deserialize(uint8_t * buffer, uint16_t length)
    {

      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
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

      std::vector<DevicePosition>::iterator it;
      uint32_t _lat, _lon, _time;

      for (it = positions.begin(); it != positions.end(); it++)
      {
        _time = (uint32_t) DUNE::Math::round(it->time);
        _lat = (uint32_t) DUNE::Math::round(DUNE::Math::Angles::degrees(it->lat) * 1000000.0);
        _lon = (uint32_t) DUNE::Math::round(DUNE::Math::Angles::degrees(it->lon) * 1000000.0);
        buffer += DUNE::IMC::serialize(it->id, buffer);
        buffer += DUNE::IMC::serialize(_time, buffer);
        buffer += DUNE::IMC::serialize(_lat, buffer);
        buffer += DUNE::IMC::serialize(_lon, buffer);
      }

      return buffer - start;
    }

    int
    DeviceUpdate::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      uint32_t _lat, _lon, _time;
      start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      while (length > sizeof(DevicePosition)) {
        DevicePosition pos;
        buffer += DUNE::IMC::deserialize(pos.id, buffer, length);
        buffer += DUNE::IMC::deserialize(_time, buffer, length);
        buffer += DUNE::IMC::deserialize(_lat, buffer, length);
        buffer += DUNE::IMC::deserialize(_lon, buffer, length);

        pos.time = _time;
        pos.lat = DUNE::Math::Angles::radians((_lat / 1000000.0));
        pos.lon = DUNE::Math::Angles::radians((_lon / 1000000.0));

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
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }

    int
    ActivateSpotSubscription::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      buffer += DUNE::IMC::deserialize(imc_id, buffer, length);

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
      buffer += DUNE::IMC::serialize(imc_id, buffer);

      return buffer - start;
    }

    int
    DeactivateSpotSubscription::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);
      buffer += DUNE::IMC::deserialize(imc_id, buffer, length);

      return buffer - start;
    }
  } /* namespace Iridium */
} /* namespace Transports */
