//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE_NAMESPACES;

TEST_CASE("multi")
{
#if defined(DUNE_OS_POSIX)
  Path root("/");
  Path tmp("/tmp");
#elif defined(DUNE_OS_WINDOWS)
  Path root("c:/");
  Path tmp("c:/");
#endif

  SECTION("basename/dirname")
  {
    Path a = root / "tmp";
    REQUIRE(a.basename() == "tmp");
    REQUIRE(a.dirname() == root);
  }

  SECTION("exists")
  {
    Path a = root / "this is not a real path";
    REQUIRE(a.root() == root);
    REQUIRE_FALSE(a.exists());
  }

  SECTION("relative1")
  {
    Path a = root / "dir0" / ".." / "dir1";
    REQUIRE(a == (root / "dir1"));
  }

  SECTION("relative2")
  {
    Path a = root / "dir0" / ".." / "dir1" / "..";
    REQUIRE(a == root);
  }

  SECTION("relative3")
  {
    Path a = root / "dir0" / "dir1" / "..";
    REQUIRE(a == (root / "dir0"));
  }

  SECTION("relative4")
  {
    Path a = root / "dir0" / "." / "dir1";
    REQUIRE(a == (root / "dir0" / "dir1"));
  }

  SECTION("createRemoveNormal")
  {
    Path a = tmp / "normal_level0";
    REQUIRE_NOTHROW(a.create(Path::MODE_NORMAL));
    REQUIRE(a.exists());
    REQUIRE_NOTHROW(a.remove(Path::MODE_NORMAL));
    REQUIRE_FALSE(a.exists());
  }

  {
    Path a = tmp / "recursive_level0" / "level1" / "level2" / "level3";
    Path b = tmp / "recursive_level0";
    REQUIRE_NOTHROW(a.create(Path::MODE_RECURSIVE));
    REQUIRE(a.exists());
    REQUIRE_NOTHROW(b.remove(Path::MODE_RECURSIVE));
    REQUIRE_FALSE(b.exists());
  }

  SECTION("storageCapacity")
  {
    Path a(root);
    REQUIRE(Path::storageAvailable(a) > 0);
    REQUIRE(Path::storageCapacity(a) > 0);
  }

  SECTION("suffix")
  {
    Path a = root / "dir0" / "dir1";
    Path b = root / "dir0" / "dir1" / "dir2";
    REQUIRE(a.suffix(b) == "dir2");
  }
}
