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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

bool
pathCreate(const Path& path, Path::Mode mode)
{
  try
  {
    path.create(mode);
  }
  catch (System::Error& e)
  {
    std::cerr << e.what() << std::endl;
    return false;
  }

  return true;
}

bool
pathRemove(const Path& path, Path::Mode mode)
{
  try
  {
    path.remove(mode);
  }
  catch (System::Error& e)
  {
    std::cerr << e.what() << std::endl;
    return false;
  }

  return true;
}

int
main(void)
{
  Test test("FileSystem::Path");

#if defined(DUNE_OS_POSIX)
  Path root("/");
  Path tmp("/tmp");
#elif defined(DUNE_OS_WINDOWS)
  Path root("c:/");
  Path tmp("c:/");
#endif

  {
    Path a = root / "tmp";
    test.boolean("Path::basename()", a.basename() == "tmp");
    test.boolean("Path::dirname()", a.dirname() == root);
  }

  {
    Path a = root / "this is not a real path";
    test.boolean("Path::root()", a.root() == root);
    test.boolean("Path::exists()", !a.exists());
  }

  {
    Path a = root / "dir0" / ".." / "dir1";
    test.boolean("Relative Path #0", a == (root / "dir1"));
  }

  {
    Path a = root / "dir0" / ".." / "dir1" / "..";
    test.boolean("Relative Path #1", a == root);
  }

  {
    Path a = root / "dir0" / "dir1" / "..";
    test.boolean("Relative Path #2", a == (root / "dir0"));
  }

  {
    Path a = root / "dir0" / "." / "dir1";
    test.boolean("Relative Path #3", a == (root / "dir0" / "dir1"));
  }

  {
    Path a = tmp / "normal_level0";
    test.boolean("Path::create(MODE_NORMAL)", pathCreate(a, Path::MODE_NORMAL));
    test.boolean("Path::exists()", a.exists());
    test.boolean("Path::remove(MODE_NORMAL)", pathRemove(a, Path::MODE_NORMAL));
    test.boolean("!Path::exists()", !a.exists());
  }

  {
    Path a = tmp / "recursive_level0" / "level1" / "level2" / "level3";
    Path b = tmp / "recursive_level0";
    test.boolean("Path::create(MODE_RECURSIVE)", pathCreate(a, Path::MODE_RECURSIVE));
    test.boolean("Path::exists()", a.exists());
    test.boolean("Path::remove(MODE_RECURSIVE)", pathRemove(b, Path::MODE_RECURSIVE));
    test.boolean("!Path::exists()", !b.exists());
  }

  {
    Path a(root);
    test.boolean("Path::storageAvailable()", Path::storageAvailable(a) > 0);
    test.boolean("Path::storageCapacity()", Path::storageCapacity(a) > 0);
  }

  {
    Path a = root / "dir0" / "dir1";
    Path b = root / "dir0" / "dir1" / "dir2";
    test.boolean("Path::suffix()", a.suffix(b) == "dir2");
  }

  return 0;
}
