//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
    typedef IridiumMessage* (*Constructor)(void);

    template <typename MessageType>
    static IridiumMessage*
    factory(void)
    {
      return new MessageType();
    }

    static std::map<uint16_t, Constructor> c_ir_factory = {
#define IR_MESSAGE(id, name) { id, &factory<name> },
#include "IridiumMessageDefinitions.def"
    };

    int
    IridiumMessage::serializeHeader(uint8_t* buffer)
    {
      uint8_t* ptr = buffer;
      ptr += IMC::serialize(source, ptr);
      ptr += IMC::serialize(destination, ptr);
      ptr += IMC::serialize(msg_id, ptr);

      return ptr - buffer;
    }

    int
    IridiumMessage::deserializeHeader(uint8_t* data, uint16_t& len, IridiumMessage*& msg)
    {
      if (len < 6)
        throw BufferTooShort();

      uint16_t msg_id;
      uint16_t source;
      uint16_t dst;

      uint8_t* ptr = data;
      ptr += IMC::deserialize(source, ptr, len);
      ptr += IMC::deserialize(dst, ptr, len);
      ptr += IMC::deserialize(msg_id, ptr, len);

      if (c_ir_factory[msg_id] == nullptr)
        throw InvalidMessageId(msg_id);

      msg = c_ir_factory[msg_id]();
      // if new () fails it will throw an exception (std::bad_alloc)
      std::cout << "Created new IridiumMessage with id: " << msg_id << std::endl;
      msg->source = source;
      msg->destination = dst;
      msg->msg_id = msg_id;

      return ptr - data;
    }

    IridiumMessage*
    IridiumMessage::deserialize(const DUNE::IMC::IridiumMsgRx* msg)
    {
      // msg->toText(std::cerr);

      IridiumMessage* ret = nullptr;
      uint8_t* bfr = (uint8_t*)msg->data.data();
      uint16_t bfr_len = msg->data.size();

      bfr += deserializeHeader(bfr, bfr_len, ret);
      ret->deserialize(bfr, bfr_len);

      return ret;
    }

    ImcIridiumMessage::ImcIridiumMessage()
    {
      msg = NULL;
      msg_id = ID_IMCMESSAGE;
    }

    ImcIridiumMessage::ImcIridiumMessage(DUNE::IMC::Message* m)
    {
      msg = m;
      msg_id = ID_IMCMESSAGE;
    }

    ImcIridiumMessage::~ImcIridiumMessage()
    {
      if (msg != NULL)
        delete msg;
    }

    int
    ImcIridiumMessage::serialize(uint8_t* buffer)
    {
      uint8_t* start;
      start = buffer;
      uint32_t timestamp = (unsigned int)msg->getTimeStamp();

      buffer += IMC::serialize(source, buffer);
      buffer += IMC::serialize(destination, buffer);
      buffer += IMC::serialize(msg_id, buffer);
      buffer += IMC::serialize(msg->getId(), buffer);
      buffer += IMC::serialize(timestamp, buffer);
      buffer = msg->serializeFields(buffer);
      return buffer - start;
    }

    int
    ImcIridiumMessage::deserialize(uint8_t* buffer, uint16_t length)
    {
      uint8_t* start;
      uint16_t mgid;
      uint32_t timestamp;

      start = buffer;
      buffer += IMC::deserialize(source, buffer, length);
      buffer += IMC::deserialize(destination, buffer, length);
      buffer += IMC::deserialize(msg_id, buffer, length);
      buffer += IMC::deserialize(mgid, buffer, length);
      buffer += IMC::deserialize(timestamp, buffer, length);
      msg = DUNE::IMC::Factory::produce(mgid);
      msg->setTimeStamp(timestamp);

      if (msg == NULL)
      {
        std::cerr << "ERROR parsing Iridium message: unknown msg id: " << mgid << std::endl;
        return 0;
      }

      buffer += msg->deserializeFields(buffer, length);

      return buffer - start;
    }

    int
    IridiumCommand::serialize(uint8_t* buffer)
    {
      uint8_t* start = buffer;
      buffer += IMC::serialize(source, buffer);
      buffer += IMC::serialize(destination, buffer);
      buffer += IMC::serialize(msg_id, buffer);
      buffer += IMC::serialize(command, buffer);

      return buffer - start;
    }

    int
    IridiumCommand::deserialize(uint8_t* buffer, uint16_t length)
    {

      uint8_t* start;
      start = buffer;
      buffer += IMC::deserialize(source, buffer, length);
      buffer += IMC::deserialize(destination, buffer, length);
      buffer += IMC::deserialize(msg_id, buffer, length);
      buffer += IMC::deserialize(command, buffer, length);

      return buffer - start;
    }

    int
    DeviceUpdate::serialize(uint8_t* buffer)
    {
      uint8_t* start = buffer;
      buffer += IMC::serialize(source, buffer);
      buffer += IMC::serialize(destination, buffer);
      buffer += IMC::serialize(msg_id, buffer);

      std::vector<DevicePosition>::iterator it;
      int32_t _lat, _lon;
      uint32_t _time;

      for (it = positions.begin(); it != positions.end(); it++)
      {
        _time = (uint32_t)DUNE::Math::round(it->time);
        _lat = (int32_t)DUNE::Math::round(DUNE::Math::Angles::degrees(it->lat) * 1000000.0);
        _lon = (int32_t)DUNE::Math::round(DUNE::Math::Angles::degrees(it->lon) * 1000000.0);
        buffer += IMC::serialize(it->id, buffer);
        buffer += IMC::serialize(_time, buffer);
        buffer += IMC::serialize(_lat, buffer);
        buffer += IMC::serialize(_lon, buffer);
      }

      return buffer - start;
    }

    int
    DeviceUpdate::deserialize(uint8_t* buffer, uint16_t length)
    {
      uint8_t* start;
      uint32_t _time;
      int32_t _lat, _lon;

      start = buffer;
      buffer += IMC::deserialize(source, buffer, length);
      buffer += IMC::deserialize(destination, buffer, length);
      buffer += IMC::deserialize(msg_id, buffer, length);

      while (length >= 14)
      {  // id (2) + time (4) + lat(4) + lon(4)
        DevicePosition pos;
        buffer += IMC::deserialize(pos.id, buffer, length);
        buffer += IMC::deserialize(_time, buffer, length);
        buffer += IMC::deserialize(_lat, buffer, length);
        buffer += IMC::deserialize(_lon, buffer, length);

        pos.time = _time;
        pos.lat = DUNE::Math::Angles::radians((_lat / 1000000.0));
        pos.lon = DUNE::Math::Angles::radians((_lon / 1000000.0));

        positions.push_back(pos);
      }

      return buffer - start;
    }

    int
    ExtendedDeviceUpdate::serialize(uint8_t* buffer)
    {
      uint8_t* start = buffer;
      buffer += IMC::serialize(source, buffer);
      buffer += IMC::serialize(destination, buffer);
      buffer += IMC::serialize(msg_id, buffer);

      std::vector<DevicePosition>::iterator it;
      int32_t _lat, _lon;
      uint32_t _time;

      for (it = positions.begin(); it != positions.end(); it++)
      {
        _time = (uint32_t)DUNE::Math::round(it->time);
        _lat = (int32_t)DUNE::Math::round(DUNE::Math::Angles::degrees(it->lat) * 1000000.0);
        _lon = (int32_t)DUNE::Math::round(DUNE::Math::Angles::degrees(it->lon) * 1000000.0);

        buffer += IMC::serialize(it->id, buffer);
        buffer += IMC::serialize(_time, buffer);
        buffer += IMC::serialize(_lat, buffer);
        buffer += IMC::serialize(_lon, buffer);
        buffer += IMC::serialize(it->pos_class, buffer);
      }

      return buffer - start;
    }

    int
    ExtendedDeviceUpdate::deserialize(uint8_t* buffer, uint16_t length)
    {
      uint8_t* start;
      uint32_t _time;
      int32_t _lat, _lon;

      start = buffer;
      buffer += IMC::deserialize(source, buffer, length);
      buffer += IMC::deserialize(destination, buffer, length);
      buffer += IMC::deserialize(msg_id, buffer, length);

      while (length >= 15)
      {  // id (2) + time (4) + lat(4) + lon(4) + pos_class (1)
        DevicePosition pos;
        buffer += IMC::deserialize(pos.id, buffer, length);
        buffer += IMC::deserialize(_time, buffer, length);
        buffer += IMC::deserialize(_lat, buffer, length);
        buffer += IMC::deserialize(_lon, buffer, length);
        buffer += IMC::deserialize(pos.pos_class, buffer, length);

        pos.time = _time;
        pos.lat = DUNE::Math::Angles::radians((_lat / 1000000.0));
        pos.lon = DUNE::Math::Angles::radians((_lon / 1000000.0));

        positions.push_back(pos);
      }

      return buffer - start;
    }

    IridiumFragment::IridiumFragment()
    {
      msg_id = ID_FRAGMENT;
      imc_id = DUNE_IMC_CONST_NULL_ID;
    }

    std::list<std::vector<char>>
    IridiumFragment::serialize(IMC::Message* msg, uint8_t trans_id, size_t frame_size)
    {
      // Serialize message data
      uint16_t bfr_len = msg->getPayloadSerializationSize() + 2;
      uint8_t* msg_bfr = new uint8_t[bfr_len];
      uint8_t* data_ptr = msg_bfr;

      serializeMessage(msg, msg_bfr);

      std::list<std::vector<char>> fragments;
      hdr.trans_id = trans_id;
      hdr.num_frags = std::ceil(bfr_len / (frame_size - 9));

      uint8_t* frag_bfr = new uint8_t[frame_size];
      uint8_t* frag_ptr = frag_bfr;
      frag_ptr += serializeHeader(frag_ptr);
      frag_ptr += hdr.serialize(frag_ptr);

      for (uint8_t i = 0; i < hdr.num_frags; i++)
      {
        uint8_t* end_ptr = frag_ptr;
        // Insert fragment number
        end_ptr += IMC::serialize(i, end_ptr);

        uint16_t data_size = std::min(bfr_len, (uint16_t)(frame_size - 9));
        std::memcpy(end_ptr, data_ptr, data_size);

        fragments.emplace_back(frag_bfr, end_ptr + data_size);

        // Update buffer pointer and remaining length
        data_ptr += data_size;
        bfr_len -= data_size;
      }

      delete[] frag_bfr;
      delete[] msg_bfr;

      return fragments;
    }

    uint16_t
    IridiumFragment::serializeMessage(IMC::Message* msg, uint8_t* buffer)
    {
      uint8_t* ptr = buffer;
      ptr += IMC::serialize(msg->getId(), ptr);
      ptr = msg->serializeFields(ptr);

      return buffer - ptr;
    }

    int
    IridiumFragment::deserialize(uint8_t* buffer, uint16_t length)
    {
      // Deserialize fragment header
      uint8_t* ptr = buffer;
      ptr += hdr.deserialize(ptr, length);

      if (hdr.frag_id == 0)
      {
        ptr += IMC::deserialize(imc_id, ptr, length);
        std::cout << "Deserialized IMC ID: " << imc_id << std::endl;
      }

      std::vector<uint8_t>& data = frag_map[hdr.frag_id];
      data.insert(data.end(), ptr, ptr + length);

      return length;
    }

    IMC::Message*
    IridiumFragment::merge(IridiumFragment* msg)
    {
      if (imc_id == DUNE_IMC_CONST_NULL_ID)
        imc_id = msg->imc_id;

      for (auto& [id, vec] : msg->frag_map)
      {
        if (frag_map.find(id) != frag_map.end())
          continue;  // Already have this fragment

        frag_map[id] = vec;
      }

      // Check if we have all fragments
      if (frag_map.size() != hdr.num_frags)
        return nullptr;

      // Reconstruct message
      std::vector<uint8_t> data(DUNE_IMC_CONST_MAX_SIZE);

      for (auto& [_, vec] : frag_map)
        data.insert(data.end(), vec.begin(), vec.end());

      IMC::Message* imc_msg = IMC::Factory::produce(imc_id);
      imc_msg->deserializeFields(&data[0], data.size());

      return imc_msg;
    }
  } /* namespace IMC */
} /* namespace DUNE */
