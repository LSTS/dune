//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_UTILS_CODECS_CODED_REFERENCE_HPP_INCLUDED_
#define DUNE_UTILS_CODECS_CODED_REFERENCE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Utils
  {
    namespace Codecs
    {
      //! This struct has methods to encode/decode several Reference
      //! IMC messages into single UamTxFrame/UamRxFrame IMC messages.
      struct CodedReference
      {
        //! Code to identify Reference.
        static const uint8_t c_id = 0xdb;

        //! Encode a Reference message into a UamTxFrame message
        //! pointer.
        //! @param[in] msg Reference pointer.
        //! @param[out] frame UamTxFrame pointer.
        //! @param[in] idx Reference message placement in frame.
        static void
        encode(const IMC::Reference* msg, IMC::UamTxFrame* frame, uint8_t idx = 0)
        {
          CodedReference coded;

          if (coded.getSize() + 1 > (frame->data.size() - idx * coded.getSize()))
            throw std::runtime_error("invalid size");

          uint8_t* ptr = (uint8_t*)&frame->data[0];
          IMC::serialize(coded.c_id, ptr);

          ptr = (uint8_t*)&frame->data[idx * coded.getSize() + 1];

          coded.dst = static_cast<uint8_t>(msg->getDestination());
          coded.lat = msg->lat;
          coded.lon = msg->lon;
          coded.z = static_cast<uint8_t>(msg->z->value * 5);
          coded.z_ref = msg->z->z_units;

          ptr += IMC::serialize(coded.dst, ptr);
          ptr += IMC::serialize(coded.lat, ptr);
          ptr += IMC::serialize(coded.lon, ptr);
          ptr += IMC::serialize(coded.z, ptr);
          ptr += IMC::serialize(coded.z_ref, ptr);
        }

        //! Decode an UamRxFrame to retrieve a Reference message
        //! @param[in] frame UamRxFrame pointer.
        //! @param[in] idx Reference message placement in frame.
        //! @return IMC message.
        static IMC::Message*
        decode(const IMC::UamRxFrame* frame, uint8_t idx = 0)
        {
          IMC::Reference* reference = new IMC::Reference;
          CodedReference coded;

          if (coded.getSize() + 1 > (frame->data.size() - idx * coded.getSize()))
            throw std::runtime_error("invalid size");

          uint8_t* ptr = (uint8_t*)&frame->data[idx * coded.getSize() + 1];

          uint16_t length = coded.getSize();
          ptr += IMC::deserialize(coded.dst, ptr, length);
          ptr += IMC::deserialize(coded.lat, ptr, length);
          ptr += IMC::deserialize(coded.lon, ptr, length);
          ptr += IMC::deserialize(coded.z, ptr, length);
          ptr += IMC::deserialize(coded.z_ref, ptr, length);

          reference->setDestination(coded.dst);
          reference->lat = coded.lat;
          reference->lon = coded.lon;
          reference->flags = IMC::Reference::FLAG_LOCATION | IMC::Reference::FLAG_Z;

          IMC::DesiredZ dz;
          dz.value = (fp32_t)(coded.z / 5);
          dz.z_units = coded.z_ref;
          reference->z.set(dz);

          return reference;
        }

      private:
        //! Get payload size.
        //! @return size of payload.
        size_t
        getSize(void)
        {
          return sizeof(lat) + sizeof(lon) + sizeof(dst)
          + sizeof(z) + sizeof(z_ref);
        }

        //! WGS84 latitude.
        double lat;
        //! WGS84 longitude.
        double lon;
        //! Destination address;
        uint8_t dst;
        //! Altitude.
        uint8_t z;
        //! System heading.
        uint8_t z_ref;
      };
    }
  }
}

#endif
