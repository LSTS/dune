//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <cstring>

// Local headers.
#include "IridiumMessageDefinitions.hpp"

namespace DUNE
{
  namespace IMC
  {

    IridiumMessage *
    IridiumMessage::deserialize(const DUNE::IMC::IridiumMsgRx * msg)
    {
      //msg->toText(std::cerr);

      uint8_t* ptr = (uint8_t*)&msg->data[0];
      IridiumMessage * ret = NULL;
      uint16_t msg_id;
      std::memcpy(&msg_id, ptr+4, sizeof(msg_id));

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

    GenericIridiumMessage::~GenericIridiumMessage()
    {
      if (msg != NULL)
        delete msg;
    }

    int
    GenericIridiumMessage::serialize(uint8_t * buffer)
    {
      if (msg != NULL)
        msg_id = msg->getId();
      uint8_t * start;
      start = buffer;

      buffer += DUNE::IMC::serialize(source, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(msg_id, buffer);

      buffer = msg->serializeFields(buffer);

      return buffer - start;
    }

    int GenericIridiumMessage::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(source, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);

      //std::cerr << "parsing Iridium message... msg id: " << msg_id << "size: " << length << std::endl;


      msg = DUNE::IMC::Factory::produce(msg_id);
      if (msg == NULL)
      {
        //std::cerr << "ERROR parsing Iridium message: unknown msg id: " << msg_id << std::endl;
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
      buffer += DUNE::IMC::serialize(source, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(msg_id, buffer);
      buffer += DUNE::IMC::serialize(command, buffer);

      return buffer - start;
    }

    int
    IridiumCommand::deserialize(uint8_t * buffer, uint16_t length)
    {

      uint8_t * start;
      start = buffer;
      buffer += DUNE::IMC::deserialize(source, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
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
      buffer += DUNE::IMC::serialize(source, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(msg_id, buffer);

      std::vector<DevicePosition>::iterator it;
      uint32_t _lat, _lon, _time;

      for (it = positions.begin(); it != positions.end(); it++)
      {
        _time = (uint32_t) DUNE::Math::round(it->time);
        _lat = (int32_t) DUNE::Math::round(DUNE::Math::Angles::degrees(it->lat) * 1000000.0);
        _lon = (int32_t) DUNE::Math::round(DUNE::Math::Angles::degrees(it->lon) * 1000000.0);
        buffer += DUNE::IMC::serialize(it->id, buffer);
        buffer += DUNE::IMC::serialize(_time, buffer);
        buffer += DUNE::IMC::serialize(_lat, buffer);
        buffer += DUNE::IMC::serialize(_lon, buffer);

        //std::cerr << it->id << " is at " << _lat << " / " << _lon;
      }

      return buffer - start;
    }

    int
    DeviceUpdate::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t * start;
      uint32_t _time;
      int32_t _lat, _lon;

      start = buffer;
      buffer += DUNE::IMC::deserialize(source, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);

      while (length >= 14) { // id (2) + time (4) + lat(4) + lon(4)
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
    }

    int
    ActivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(source, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(msg_id, buffer);

      return buffer - start;
    }

    int
    ActivateSpotSubscription::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::deserialize(source, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);


      return buffer - start;
    }

    DeactivateSpotSubscription::DeactivateSpotSubscription()
    {
      msg_id = ID_DEACTIVATESUB;
    }

    int
    DeactivateSpotSubscription::serialize(uint8_t * buffer)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::serialize(source, buffer);
      buffer += DUNE::IMC::serialize(destination, buffer);
      buffer += DUNE::IMC::serialize(msg_id, buffer);

      return buffer - start;
    }

    int
    DeactivateSpotSubscription::deserialize(uint8_t * buffer, uint16_t length)
    {
      uint8_t* start = buffer;
      buffer += DUNE::IMC::deserialize(source, buffer, length);
      buffer += DUNE::IMC::deserialize(destination, buffer, length);
      buffer += DUNE::IMC::deserialize(msg_id, buffer, length);

      return buffer - start;
    }
  } /* namespace IMC */
} /* namespace DUNE */
