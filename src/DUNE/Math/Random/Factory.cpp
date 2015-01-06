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
#include <map>

// DUNE headers.
#include <DUNE/Utils/Utils.hpp>
#include <DUNE/Math/Random/Factory.hpp>
#include <DUNE/Math/Random/DRand48.hpp>
#include <DUNE/Math/Random/FSR256.hpp>
#include <DUNE/Math/Random/MT19937.hpp>
#include <DUNE/Math/Random/KernelDevice.hpp>

namespace DUNE
{
  namespace Math
  {
    namespace Random
    {
      const char* Factory::c_drand48 = "drand48";
      const char* Factory::c_fsr256 = "fsr256";
      const char* Factory::c_default = c_fsr256;
      const char* Factory::c_mt19937 = "mt19937";
      const char* Factory::c_krng = "krng";

      enum GType
      {
        G_DRAND48,
        G_FSR256,
        G_MT19937,
        G_KRNG
      };

      typedef std::pair<std::string, GType> GEntry;

      static
      GEntry entries[] =
      {
        GEntry(Factory::c_drand48, G_DRAND48),
        GEntry(Factory::c_fsr256, G_FSR256),
        GEntry(Factory::c_mt19937, G_MT19937),
        GEntry(Factory::c_krng, G_KRNG),
      };

      DUNE_DECLARE_STATIC_MAP(id2type, std::string, GType, entries);

      typedef std::map<std::string, GType> Id2TypeMap;

      Generator*
      Factory::create(const std::string& id, int32_t seed_value)
      {
        Id2TypeMap::iterator it = id2type.find(id);

        if (it == id2type.end())
          throw Generator::Error("invalid generator type");

        // Note - avoid arbitrary seed generation for kernel device
        if (seed_value < 0 && id != c_krng)
          seed_value = Generator::arbitrarySeed();

        switch (it->second)
        {
          case G_DRAND48:
            return new DRand48(seed_value);
          case G_FSR256:
            return new FSR256(seed_value);
          case G_MT19937:
            return new MT19937(seed_value);
          case G_KRNG:
            return new KernelDevice(); // can not seed
          default:
            throw Generator::Error("internal factory error");
        }
      }
    }
  }
}
