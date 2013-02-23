//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Math/Random/KernelDevice.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      static const char* c_device_file = "/dev/urandom";

      bool
      KernelDevice::available(void)
      {
#if defined(DUNE_OS_WINDOWS)
        return false;
#else
        FileSystem::Path path(c_device_file);
        return path.isDevice();
#endif
      }

      KernelDevice::KernelDevice(void)
      {
        m_fp = std::fopen(c_device_file, "r");
        if (!m_fp)
          throw Generator::Error("could not open RNG kernel device");
      }

      KernelDevice::~KernelDevice(void)
      {
        if (m_fp)
          std::fclose(m_fp);
      }

      int32_t
      KernelDevice::random(void)
      {
        int32_t v;
        if (std::fread(&v, sizeof(v), 1, m_fp) != 1)
          throw Generator::Error("error reading RNG kernel device");
        return v & c_max_random;
      }

      double
      KernelDevice::uniform(void)
      {
        // 53-bit precision (same solution as in MT19937)
        uint32_t v[2];

        if (std::fread(v, sizeof(uint32_t), 2, m_fp) != 2)
          throw Generator::Error("error reading RNG kernel device");

        uint32_t a = v[0] >> 5;
        uint32_t b = v[1] >> 6;

        return (a * 67108864.0 + b) * (1.0 / 9007199254740992.0);
      }

      void
      KernelDevice::seed(int32_t)
      {
        // No effect - you cannot seed as this is supposed to be a true RNG
      }
    }
  }
}
