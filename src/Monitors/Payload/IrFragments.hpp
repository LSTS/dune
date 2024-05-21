//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef MONITORS_PAYLOAD_IR_FRAGMENTS_HPP_INCLUDED_
#define MONITORS_PAYLOAD_IR_FRAGMENTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Utils/ByteCopy.hpp>

namespace Monitors
{
  namespace Payload
  {
    // Import namespaces.
    using DUNE_NAMESPACES;

    enum {
      ID_FRAGMENT = 2012
    };

    struct IrMessage
    {
      uint16_t source;
      uint16_t destination;
      uint16_t msg_id;

      virtual int
      deserialize(uint8_t* buffer, uint16_t length) = 0;
    };

    struct IrFragmentHeader
    {
      uint8_t trans_id;
      uint8_t num_frags;
      uint8_t frag_id;

      uint16_t
      deserialize(uint8_t* buffer, uint16_t& len)
      {
        if (len < 3)
          throw IMC::BufferTooShort();

        uint8_t* ptr = buffer;
        ptr += IMC::deserialize(trans_id, ptr, len);
        ptr += IMC::deserialize(num_frags, ptr, len);
        ptr += IMC::deserialize(frag_id, ptr, len);

        uint16_t rv = ptr - buffer;
        len -= rv;
        return rv;
      }
    };

    struct IrFragment: public IrMessage
    {
      //! Fragment header.
      IrFragmentHeader hdr;
      //! Message ID.
      uint16_t imc_id;
      //! Fragments data.
      std::map<uint8_t, std::vector<uint8_t>> frag_map;

      IrFragment(void):
        imc_id(DUNE_IMC_CONST_NULL_ID)
      { }

      int
      deserialize(uint8_t* buffer, uint16_t length)
      {
        // Deserialize fragment header
        uint8_t* ptr = buffer;
        ptr += hdr.deserialize(ptr, length);

        if (hdr.frag_id == 0)
          ptr += IMC::deserialize(imc_id, ptr, length);

        std::vector<uint8_t>& data = frag_map[hdr.frag_id];
        data.insert(data.end(), ptr, ptr + length);

        return length;
      }

      IMC::Message*
      merge(IrFragment* msg)
      {
        if (imc_id == DUNE_IMC_CONST_NULL_ID)
          imc_id = msg->imc_id;

        for (auto& iter : msg->frag_map)
        {
          auto& id = iter.first;
          auto& vec = iter.second;

          if (frag_map.find(id) != frag_map.end())
            continue;  // Already have this fragment

          frag_map[id] = vec;
        }

        // Check if we have all fragments
        if (frag_map.size() != hdr.num_frags)
          return nullptr;

        // Reconstruct message
        std::vector<uint8_t> data(DUNE_IMC_CONST_MAX_SIZE);

        for (auto& pair : frag_map)
        {
          auto& vec = pair.second;
          data.insert(data.end(), vec.begin(), vec.end());
        }

        IMC::Message* imc_msg = IMC::Factory::produce(imc_id);
        imc_msg->deserializeFields(&data[0], data.size());

        return imc_msg;
      }
    };

    int
    deserializeHeader(uint8_t* data, uint16_t& len, IrMessage*& msg)
    {
      if (len < 6)
        throw IMC::BufferTooShort();

      uint16_t msg_id;
      uint16_t source;
      uint16_t dst;

      uint8_t* ptr = data;
      ptr += IMC::deserialize(source, ptr, len);
      ptr += IMC::deserialize(dst, ptr, len);
      ptr += IMC::deserialize(msg_id, ptr, len);

      if (msg_id != ID_FRAGMENT)
        throw IMC::InvalidMessageId(msg_id);

      msg = new IrFragment();
      // if new () fails it will throw an exception (std::bad_alloc)

      msg->source = source;
      msg->destination = dst;
      msg->msg_id = msg_id;

      return ptr - data;
    }

    IrFragment*
    deserializeFragment(uint8_t* bfr, uint16_t& bfr_len)
    {
      IrMessage* ret = nullptr;

      bfr += deserializeHeader(bfr, bfr_len, ret);
      ret->deserialize(bfr, bfr_len);

      return static_cast<IrFragment*>(ret);
    }
  }
}

#endif