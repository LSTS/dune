//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Factory.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
