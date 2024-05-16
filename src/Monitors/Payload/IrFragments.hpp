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

    struct IridiumHeader
    {
      uint16_t src_id;
      uint16_t dst_id;
      uint16_t iridium_id;
    };

    struct Fragment
    {
      uint8_t fragment_id;
      std::vector<uint8_t> data;
    };

    struct IridiumFragment
    {
      IridiumHeader header;
      uint8_t transmission_id;
      uint8_t n_fragments;
      uint16_t msg_id;
      std::list<Fragment*> fragments;

      bool
      isFull(void)
      {
        return fragments.size() == n_fragments;
      }
    };

    uint16_t
    deserializeHeader(const uint8_t* bfr, size_t& bfr_size, IridiumHeader& header)
    {
      if (bfr_size < 3 * sizeof(uint16_t))
        throw std::runtime_error("Buffer too short");

      uint16_t offset = ByteCopy::copy(header.src_id, bfr);
      offset += ByteCopy::copy(header.dst_id, bfr + offset);
      offset += ByteCopy::copy(header.iridium_id, bfr + offset);

      bfr_size -= offset;
      return offset;
    }

    Fragment*
    deserializeFragment(const uint8_t* bfr, size_t& bfr_size, IridiumFragment& msg)
    {
      Fragment* frag = new Fragment();
      uint16_t offset = ByteCopy::copy(frag->fragment_id, bfr);

      if (frag->fragment_id == 0)
        offset += ByteCopy::copy(msg.msg_id, bfr + offset);

      frag->data.assign(bfr + offset, bfr + bfr_size);

      msg.fragments.push_back(frag);

      return frag;
    }

    Fragment*
    deserializeIridiumFragment(const uint8_t* bfr, size_t& bfr_size, IridiumFragment& msg)
    {
      if (bfr_size < 3)
        throw std::runtime_error("Buffer too short");

      uint16_t offset = ByteCopy::copy(msg.transmission_id, bfr);
      offset += ByteCopy::copy(msg.n_fragments, bfr + offset);

      bfr_size -= offset;

      return deserializeFragment(bfr + offset, bfr_size, msg);
    }
  }
}

#endif