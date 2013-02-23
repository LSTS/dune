//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
