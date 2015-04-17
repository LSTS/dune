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

#ifndef DUNE_UTILS_CODECS_CODED_ESTIMATED_STATE_HPP_INCLUDED_
#define DUNE_UTILS_CODECS_CODED_ESTIMATED_STATE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Coordinates/General.hpp>

namespace DUNE
{
  namespace Utils
  {
    namespace Codecs
    {
      //! This struct has methods to encode an EstimatedState
      //! IMC message into an UamTxFrame and to decode an
      //! EstimatedState from an UamRxFrame.
      struct CodedEstimatedState
      {
        //! Code to identify EstimatedState.
        static const uint8_t c_id = 0xda;

        //! Encode an EstimatedState message to a UamTxFrame message
        //! pointer.
        //! @param[in] msg EstimatedState pointer.
        //! @param[out] frame UamTxFrame pointer.
        static void
        encode(const IMC::EstimatedState* msg, IMC::UamTxFrame* frame)
        {
          CodedEstimatedState coded;
          if (frame->data.size() < coded.getSize())
            frame->data.resize(coded.getSize());

          uint8_t* ptr = (uint8_t*)&frame->data[0];

          coded.depth = static_cast<int16_t>(msg->depth * 100.0);
          coded.yaw = static_cast<int16_t>(msg->psi * 100.0);
          coded.alt = static_cast<int16_t>(msg->alt * 100.0);
          Coordinates::toWGS84(*msg, coded.lat, coded.lon);

          ptr += IMC::serialize(coded.c_id, ptr);
          ptr += IMC::serialize(coded.lat, ptr);
          ptr += IMC::serialize(coded.lon, ptr);
          ptr += IMC::serialize(coded.alt, ptr);
          ptr += IMC::serialize(coded.depth, ptr);
          ptr += IMC::serialize(coded.yaw, ptr);
        }

        //! Decode an UamRxFrame to retrieve an EstimatedState message
        //! @param[in] frame UamRxFrame pointer.
        //! @return IMC message.
        static IMC::Message*
        decode(const IMC::UamRxFrame* frame)
        {
          IMC::EstimatedState* estate = new IMC::EstimatedState;
          CodedEstimatedState coded;
          if (frame->data.size() < coded.getSize())
            throw std::runtime_error("invalid size");

          uint8_t* ptr = (uint8_t*)&frame->data[1];

          uint16_t length = (uint16_t)frame->data.size() - 1;
          ptr += IMC::deserialize(coded.lat, ptr, length);
          ptr += IMC::deserialize(coded.lon, ptr, length);
          ptr += IMC::deserialize(coded.alt, ptr, length);
          ptr += IMC::deserialize(coded.depth, ptr, length);
          ptr += IMC::deserialize(coded.yaw, ptr, length);

          estate->lat = coded.lat;
          estate->lon = coded.lon;
          estate->alt = (fp32_t)(coded.alt / 100.0);
          estate->depth = (fp32_t)(coded.depth / 100.0);
          estate->psi = (fp32_t)(coded.yaw / 100.0);

          return estate;
        }

        //! Get payload size.
        //! @return size of payload.
        static size_t
        getSize(void)
        {
          // Size of lat, lon, depth, alt and yaw.
          return sizeof(c_id) + 2 * sizeof(fp64_t) + 3 * sizeof(int16_t);
        }

      private:
        //! WGS84 latitude.
        fp64_t lat;
        //! WGS84 longitude.
        fp64_t lon;
        //! System depth.
        int16_t depth;
        //! Altitude.
        int16_t alt;
        //! System heading.
        int16_t yaw;
      };
    }
  }
}

#endif
