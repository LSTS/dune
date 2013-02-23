//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
