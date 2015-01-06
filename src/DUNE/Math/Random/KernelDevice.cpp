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
