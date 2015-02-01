//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Algorithms/CRC16.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Packet.hpp>
#include <DUNE/IMC/Constants.hpp>

namespace DUNE
{
  namespace IMC
  {
    uint16_t
    Packet::serialize(const Message* msg, uint8_t* bfr, uint16_t size)
    {
      unsigned total = msg->getSerializationSize();
      if (total > DUNE_IMC_CONST_MAX_SIZE)
        throw InvalidMessageSize(total);

      uint16_t n = total;
      uint8_t* ptr = bfr;

      if (size < n)
        throw BufferTooShort();

      ptr += serializeHeader(msg, bfr, size);
      msg->serializeFields(ptr);

      uint16_t crc = Algorithms::CRC16::compute(bfr, n - DUNE_IMC_CONST_FOOTER_SIZE);
      IMC::serialize(crc, (bfr + (n - DUNE_IMC_CONST_FOOTER_SIZE)));

      return n;
    }

    uint16_t
    Packet::serialize(const Message* msg, Utils::ByteBuffer& bfr)
    {
      unsigned size = msg->getSerializationSize();
      if (size > 65535)
        throw InvalidMessageSize(size);

      bfr.setSize(size);
      return serialize(msg, bfr.getBuffer(), size);
    }

    uint16_t
    Packet::serialize(const Message* msg, std::ostream& ofs)
    {
      unsigned total = msg->getSerializationSize();
      if (total > DUNE_IMC_CONST_MAX_SIZE)
        throw InvalidMessageSize(total);

      uint16_t n = total;
      std::vector<char> data(n);
      serialize(msg, (uint8_t*)&data[0], n);
      ofs.write(&data[0], n);
      return n;
    }

    Message*
    Packet::deserialize(const uint8_t* bfr, uint16_t bfr_len, Message* msg)
    {
      Header hdr;

      // Get the message header.
      deserializeHeader(hdr, bfr, bfr_len);

      // Check if we can unpack the message.
      if (hdr.size > bfr_len - (DUNE_IMC_CONST_HEADER_SIZE + DUNE_IMC_CONST_FOOTER_SIZE))
        throw BufferTooShort();

      return deserializePayload(hdr, bfr, bfr_len, msg);
    }

    Message*
    Packet::deserialize(std::istream& ifs)
    {
      std::vector<char> data;

      // Get the message header.
      data.resize(DUNE_IMC_CONST_HEADER_SIZE);
      ifs.read(&data[0], DUNE_IMC_CONST_HEADER_SIZE);

      // If we're at the EOF there's nothing more to do.
      if (ifs.eof())
        return 0;

      if (ifs.gcount() < DUNE_IMC_CONST_HEADER_SIZE)
        throw BufferTooShort();

      Header hdr;
      deserializeHeader(hdr, (uint8_t*)&data[0], DUNE_IMC_CONST_HEADER_SIZE);

      // Get remaining data.
      uint16_t remaining = hdr.size + DUNE_IMC_CONST_FOOTER_SIZE;
      data.resize(DUNE_IMC_CONST_HEADER_SIZE + remaining);
      ifs.read(&data[DUNE_IMC_CONST_HEADER_SIZE], remaining);

      if (ifs.gcount() < remaining)
        throw BufferTooShort();

      return deserializePayload(hdr, (uint8_t*)&data[0], DUNE_IMC_CONST_HEADER_SIZE + remaining, 0);
    }

    Message*
    Packet::deserialize(std::istream& ifs, Utils::ByteBuffer& bfr)
    {
      // Get the message header.
      bfr.setSize(DUNE_IMC_CONST_HEADER_SIZE);
      ifs.read(bfr.getBufferSigned(), DUNE_IMC_CONST_HEADER_SIZE);

      // If we're at the EOF there's nothing more to do.
      if (ifs.eof())
        return 0;

      if (ifs.gcount() < DUNE_IMC_CONST_HEADER_SIZE)
        throw BufferTooShort();

      Header hdr;
      deserializeHeader(hdr, bfr.getBuffer(), DUNE_IMC_CONST_HEADER_SIZE);

      // Get remaining data.
      uint16_t remaining = hdr.size + DUNE_IMC_CONST_FOOTER_SIZE;
      bfr.setSize(DUNE_IMC_CONST_HEADER_SIZE + remaining);
      ifs.read(bfr.getBufferSigned() + DUNE_IMC_CONST_HEADER_SIZE, remaining);

      if (ifs.gcount() < remaining)
        throw BufferTooShort();

      return deserializePayload(hdr, bfr.getBuffer(), DUNE_IMC_CONST_HEADER_SIZE + remaining, 0);
    }

    uint16_t
    Packet::serializeHeader(const Message* msg, uint8_t* bfr, uint16_t bfr_len)
    {
      (void)bfr_len;

      uint8_t* ptr = bfr;

      ptr += IMC::serialize((uint16_t)DUNE_IMC_CONST_SYNC, ptr);
      ptr += IMC::serialize(msg->getId(), ptr);
      ptr += IMC::serialize((uint16_t)msg->getPayloadSerializationSize(), ptr);
      ptr += IMC::serialize(msg->getTimeStamp(), ptr);
      ptr += IMC::serialize((uint16_t)msg->getSource(), ptr);
      ptr += IMC::serialize(msg->getSourceEntity(), ptr);
      ptr += IMC::serialize((uint16_t)msg->getDestination(), ptr);
      ptr += IMC::serialize(msg->getDestinationEntity(), ptr);

      return DUNE_IMC_CONST_HEADER_SIZE;
    }

    void
    Packet::deserializeHeader(Header& hdr, const uint8_t* bfr, uint16_t bfr_len)
    {
      // Check if we can at least parse the header.
      if (bfr_len < DUNE_IMC_CONST_HEADER_SIZE)
        throw BufferTooShort();

      // Parse synchronize number and get byte order.
      Utils::ByteCopy::copy(hdr.sync, bfr);

      // Read header.
      if (hdr.sync == DUNE_IMC_CONST_SYNC)
      {
        Utils::ByteCopy::copy(hdr.mgid, bfr + 2);
        Utils::ByteCopy::copy(hdr.size, bfr + 4);
        Utils::ByteCopy::copy(hdr.timestamp, bfr + 6);
        Utils::ByteCopy::copy(hdr.src, bfr + 14);
        Utils::ByteCopy::copy(hdr.src_ent, bfr + 16);
        Utils::ByteCopy::copy(hdr.dst, bfr + 17);
        Utils::ByteCopy::copy(hdr.dst_ent, bfr + 19);
      }
      else if (hdr.sync == DUNE_IMC_CONST_SYNC_REV)
      {
        Utils::ByteCopy::rcopy(hdr.mgid, bfr + 2);
        Utils::ByteCopy::rcopy(hdr.size, bfr + 4);
        Utils::ByteCopy::rcopy(hdr.timestamp, bfr + 6);
        Utils::ByteCopy::rcopy(hdr.src, bfr + 14);
        Utils::ByteCopy::rcopy(hdr.src_ent, bfr + 16);
        Utils::ByteCopy::rcopy(hdr.dst, bfr + 17);
        Utils::ByteCopy::rcopy(hdr.dst_ent, bfr + 19);
      }
      else
      {
        throw InvalidSync(hdr.sync);
      }
    }

    Message*
    Packet::deserializePayload(const Header& hdr, const uint8_t* bfr, uint16_t bfr_len, Message* msg)
    {
      (void)bfr_len;

      // Retrieve CRC
      uint16_t rcrc = 0;

      if (hdr.sync == DUNE_IMC_CONST_SYNC_REV)
        Utils::ByteCopy::rcopy(rcrc, bfr + DUNE_IMC_CONST_HEADER_SIZE + hdr.size);
      else
        Utils::ByteCopy::copy(rcrc, bfr + DUNE_IMC_CONST_HEADER_SIZE + hdr.size);

      // Validate CRC.
      uint16_t crc = Algorithms::CRC16::compute(bfr, DUNE_IMC_CONST_HEADER_SIZE + hdr.size);

      if (crc != rcrc)
        throw InvalidCrc();

      // Produce a message of the given type.
      if (msg == NULL)
      {
        msg = Factory::produce(hdr.mgid);
        if (msg == 0)
          throw InvalidMessageId(hdr.mgid);
      }
      else
      {
        if (msg->getId() != hdr.mgid)
          throw InvalidMessageId(hdr.mgid);
      }

      // Deserialize message fields.
      try
      {
        if (hdr.sync == DUNE_IMC_CONST_SYNC_REV)
          msg->reverseDeserializeFields(bfr + DUNE_IMC_CONST_HEADER_SIZE, hdr.size);
        else
          msg->deserializeFields(bfr + DUNE_IMC_CONST_HEADER_SIZE, hdr.size);
      }
      catch (...)
      {
        delete msg;
        throw;
      }

      msg->setTimeStamp(hdr.timestamp);
      msg->setSource(hdr.src);
      msg->setSourceEntity(hdr.src_ent);
      msg->setDestination(hdr.dst);
      msg->setDestinationEntity(hdr.dst_ent);

      return msg;
    }
  }
}
