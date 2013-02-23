//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: IOPort.cpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cerrno>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/IOPort.hpp>

// Linux headers.
#if defined(DUNE_SYS_HAS_SYS_IO_H)
#  include <sys/io.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
#  include <sys/mman.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    IOPort::IOPort(uint32_t base_address, uint32_t size):
      m_base_address(base_address),
      m_size(size)
    {
#if defined(DUNE_OS_LINUX)

      // x86 implementation.
#  if defined(DUNE_CPU_X86)
      if (ioperm(m_base_address, m_size, 1) != 0)
        throw Error("ioperm", errno);

      // Other architectures.
#  else
      m_dev_mem = open("/dev/mem", O_RDWR | O_SYNC);

      if (m_dev_mem == -1)
        throw Error("open", errno);

      uint32_t page_size = sysconf(_SC_PAGE_SIZE);
      uint32_t base_address_offset = base_address % page_size;

      m_base_page = (uint8_t*)mmap(0,
                                   m_size,
                                   PROT_READ | PROT_WRITE,
                                   MAP_SHARED,
                                   m_dev_mem,
                                   base_address - base_address_offset);

      if (m_base_page == (uint8_t*)-1)
        throw Error("mmap", errno);

      m_memory = m_base_page + base_address_offset;
#  endif

#endif
    }

    //! Destructor.
    IOPort::~IOPort(void)
    {
#if defined(DUNE_OS_LINUX)

      // x86 implementation.
#  if defined(DUNE_CPU_X86)
      ioperm(m_base_address, m_size, 0);

      // Other architectures.
#  else
      munmap(m_base_page, m_size);
      close(m_dev_mem);
#  endif

#endif
    }

    void
    IOPort::write(uint8_t value, uint32_t offset)
    {
      if (offset >= m_size)
        return;

#if defined(DUNE_OS_LINUX)

      // x86 implementation.
#  if defined(DUNE_CPU_X86)
      outb(value, m_base_address + offset);

      // Other architectures.
#  else
      std::memcpy(m_memory + offset, &value, 1);
#  endif

#else
      (void)value;

#endif
    }

    uint8_t
    IOPort::read(uint32_t offset)
    {
      if (offset >= m_size)
        return 0;

      uint8_t value = 0;

#if defined(DUNE_OS_LINUX)

      // x86 implementation.
#  if defined(DUNE_CPU_X86)
      value = inb(m_base_address + offset);

      // Other architectures.
#  else
      std::memcpy(&value, m_memory + offset, 1);
#  endif

#endif

      return value;
    }
  }
}
