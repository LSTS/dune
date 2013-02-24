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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_FACTORY_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_FACTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Hardware/UCTK/Messages.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Factory
      {
      public:
        Factory(void)
        {
          addProducer<Error>(MSG_ERR);
          addProducer<FirmwareName>(MSG_NAME);
          addProducer<FirmwareVersion>(MSG_VERSION);
          addProducer<BootFlashInfo>(MSG_BOOT_FLASH_INFO);
          addProducer<BootFlashFill>(MSG_BOOT_FLASH_FILL);
          addProducer<BootFlashWrite>(MSG_BOOT_FLASH_WRITE);
        }

        template <typename T>
        void
        addProducer(uint8_t id)
        {
          m_producers[id] = &Factory::decode<T>;
        }

        Message*
        produce(uint8_t id, const uint8_t* data, unsigned data_size) const
        {
          std::map<unsigned, Producer>::const_iterator itr = m_producers.find(id);
          if (itr == m_producers.end())
            throw std::runtime_error(Utils::String::str("unknown message: %u", id));
          return itr->second(data, data_size);
        }

      private:
        typedef Message* (*Producer)(const uint8_t*, unsigned);
        std::map<unsigned, Producer> m_producers;

        template <typename T>
        static Message*
        decode(const uint8_t* data, unsigned data_size)
        {
          return new T(data, data_size);
        }
      };
    }
  }
}

#endif
