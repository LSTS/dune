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

#ifndef DUNE_HARDWARE_UCTK_MESSAGES_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_MESSAGES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iomanip>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Hardware/UCTK/Message.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/Errors.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      enum MessageIdentifier
      {
        MSG_ERR = 0xf0,
        MSG_NAME,
        MSG_VERSION,
        MSG_RESET,
        MSG_BOOT,
        MSG_BOOT_UPGRADE_START,
        MSG_BOOT_UPGRADE_END,
        MSG_BOOT_FLASH_FILL,
        MSG_BOOT_FLASH_WRITE,
        MSG_BOOT_FLASH_INFO
      };

      struct Error: public Message
      {
        //! Error code.
        uint8_t code;
        //! Error message.
        const char* error;

        Error(void)
        { }

        Error(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_ERR;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(code);
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size != getSize())
            throw std::runtime_error("error invalid message size");

          code = buffer[0];
          error = Errors::translate(code);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size != getSize())
            throw std::runtime_error("error invalid message size");

          Utils::ByteCopy::toLE(code, buffer);
        }

        std::string
        str(void) const
        {
          return Utils::String::str("%s", error);
        }
      };

      struct FirmwareName: public Message
      {
        //! Firmware name as C string.
        std::string name;

        FirmwareName(void)
        { }

        FirmwareName(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_NAME;
        }

        uint8_t
        getSize(void) const
        {
          return name.size();
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size < 1)
            throw std::runtime_error("firmware name invalid message size");

          std::memcpy(buffer, &name[0], name.size());
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size < getSize())
            throw std::runtime_error("firmware name invalid message size");

          name.assign((char*)buffer, buffer_size);
        }

        std::string
        str(void) const
        {
          return Utils::String::str("firmware name '%s'", name.c_str());
        }
      };

      struct FirmwareVersion: public Message
      {
        //! Major version number.
        uint8_t major;
        //! Minor version number.
        uint8_t minor;
        //! Patch level.
        uint8_t patch;

        FirmwareVersion(void)
        { }

        FirmwareVersion(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_VERSION;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(major) + sizeof(minor) + sizeof(patch);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size != getSize())
            throw std::runtime_error("invalid message size");

          buffer[0] = major;
          buffer[1] = minor;
          buffer[2] = patch;
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size != getSize())
            throw std::runtime_error("invalid message size");

          major = buffer[0];
          minor = buffer[1];
          patch = buffer[2];
        }

        std::string
        str(void) const
        {
          return Utils::String::str("firmware version %u.%u.%u",
                                    major, minor, patch);
        }
      };

      struct Boot: public Message
      {
        Boot(void)
        { }

        Boot(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT;
        }

        uint8_t
        getSize(void) const
        {
          return 0;
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          (void)buffer;
          (void)buffer_size;
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          (void)buffer;
          (void)buffer_size;
        }
      };

      struct Reset: public Message
      {
        Reset(void)
        { }

        Reset(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_RESET;
        }

        uint8_t
        getSize(void) const
        {
          return 0;
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          (void)buffer;
          (void)buffer_size;
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          (void)buffer;
          (void)buffer_size;
        }
      };

      struct BootFlashInfo: public Message
      {
        //! Flash size in bytes.
        uint32_t flash_size;
        //! Flash page size in bytes.
        uint16_t page_size;

        BootFlashInfo(void)
        { }

        BootFlashInfo(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT_FLASH_INFO;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(flash_size) + sizeof(page_size);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size != getSize())
            throw std::runtime_error("boot flash info invalid size");

          buffer += Utils::ByteCopy::toLE(flash_size, buffer);
          buffer += Utils::ByteCopy::toLE(page_size, buffer);
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size != getSize())
            throw std::runtime_error("boot flash info invalid size");

          buffer += Utils::ByteCopy::fromLE(flash_size, buffer);
          buffer += Utils::ByteCopy::fromLE(page_size, buffer);
        }

        std::string
        str(void) const
        {
          return Utils::String::str("flash size: %u, page size: %u",
                                    flash_size, page_size);
        }
      };

      struct BootUpgradeStart: public Message
      {
        //! Program size.
        uint32_t prog_size;
        //! Program CRC8.
        uint8_t prog_crc8;

        BootUpgradeStart(void)
        { }

        BootUpgradeStart(uint32_t a_prog_size, uint8_t a_prog_crc8):
          prog_size(a_prog_size),
          prog_crc8(a_prog_crc8)
        { }

        BootUpgradeStart(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT_UPGRADE_START;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(prog_size) + sizeof(prog_crc8);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (getSize() > buffer_size)
            throw std::runtime_error("invalid message size");

          buffer += Utils::ByteCopy::toLE(prog_size, buffer);
          buffer += Utils::ByteCopy::toLE(prog_crc8, buffer);
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size == 0)
            return;

          if (getSize() > buffer_size)
            throw std::runtime_error("invalid message size");

          buffer += Utils::ByteCopy::fromLE(prog_size, buffer);
          buffer += Utils::ByteCopy::fromLE(prog_crc8, buffer);
        }
      };

      struct BootUpgradeEnd: public Message
      {
        BootUpgradeEnd(void)
        { }

        BootUpgradeEnd(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT_UPGRADE_END;
        }

        uint8_t
        getSize(void) const
        {
          return 0;
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          (void)buffer;
          (void)buffer_size;
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          (void)buffer;
          (void)buffer_size;
        }
      };

      struct BootFlashFill: public Message
      {
        uint16_t offset;
        uint8_t contents[32];

        BootFlashFill(void)
        { }

        BootFlashFill(uint16_t a_offset, const uint8_t* a_contents):
          offset(a_offset)
        {
          std::memcpy(contents, a_contents, sizeof(contents));
        }

        BootFlashFill(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT_FLASH_FILL;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(offset) + sizeof(contents);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size < getSize())
            throw std::runtime_error("invalid size");

          buffer += Utils::ByteCopy::toLE(offset, buffer);
          std::memcpy(buffer, contents, sizeof(contents));
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size == 0)
            return;

          if (buffer_size < getSize())
            throw std::runtime_error("invalid size");

          buffer += Utils::ByteCopy::fromLE(offset, buffer);
          std::memcpy(contents, buffer, sizeof(contents));
        }

        std::string
        str(void) const
        {
          std::ostringstream ss;
          ss << std::setw(4) << offset << ":";
          for (unsigned i = 0; i < sizeof(contents); ++i)
            ss << " " << std::hex << std::setfill('0') << std::setw(2) << (unsigned)contents[i];
          return ss.str();
        }
      };

      struct BootFlashWrite: public Message
      {
        uint32_t offset;

        BootFlashWrite(uint32_t a_offset):
          offset(a_offset)
        { }

        BootFlashWrite(const uint8_t* buffer, unsigned buffer_size)
        {
          deserialize(buffer, buffer_size);
        }

        uint8_t
        getId(void) const
        {
          return MSG_BOOT_FLASH_WRITE;
        }

        uint8_t
        getSize(void) const
        {
          return sizeof(offset);
        }

        void
        serialize(uint8_t* buffer, unsigned buffer_size) const
        {
          if (buffer_size < getSize())
            throw std::runtime_error("invalid size");

          Utils::ByteCopy::toLE(offset, buffer);
        }

        void
        deserialize(const uint8_t* buffer, unsigned buffer_size)
        {
          if (buffer_size == 0)
            return;

          if (buffer_size < getSize())
            throw std::runtime_error("invalid size");

          Utils::ByteCopy::fromLE(offset, buffer);
        }
      };
    }
  }
}

#endif
