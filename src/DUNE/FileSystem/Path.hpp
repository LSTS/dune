//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_FILE_SYSTEM_PATH_HPP_INCLUDED_
#define DUNE_FILE_SYSTEM_PATH_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <ostream>
#include <iostream>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace FileSystem
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Path;

    class Path
    {
    public:
      enum Type
      {
        //! Path is a directory.
        PT_DIRECTORY,
        //! Path is a regular file.
        PT_FILE,
        //! Path is a device file.
        PT_DEVICE,
        //! Path is a symbolic link.
        PT_LINK,
        //! Path is invalid or non-existent.
        PT_INVALID
      };

      enum Mode
      {
        //! Operation will be performed with no recursion.
        MODE_NORMAL,
        //! Operation will be performed recursively.
        MODE_RECURSIVE
      };

      //! Retrieve the string/character used as directory separator.
      //! @return directory separator string.
      static const char*
      separator(void);

      //! Retrieve the length of the directory separator string.
      //! @return length of the directory separator string.
      static unsigned int
      separatorLength(void);

      //! Retrieve the capacity of the device in which a path resides.
      //! @param path path.
      //! @return capacity of the device in bytes.
      static uint64_t
      storageCapacity(const Path& path);

      //! Retrieve the amount of available storage of the device in
      //! which a path resides.
      //! @param path path.
      //! @return available storage of the device in bytes.
      static uint64_t
      storageAvailable(const Path& path);

      //! Retrieve the full path of the current working directory.
      //! @return full path of the current working directory.
      static Path
      current(void);

      //! Retrieve the full path of the application's executable.
      //! @return full path of the application's executable.
      static Path
      applicationFile(void);

      Path(void)
      { }

      Path(const char* path):
        m_path(path)
      {
        if (m_path.size() == 0)
          return;

        normalize();
      }

      Path(const std::string& path):
        m_path(path)
      {
        if (m_path.size() == 0)
          return;

        normalize();
      }

      //! Retrieve the path type.
      //! @return path type.
      Type
      type(void) const;

      //! Check if the path exists.
      //! @return true if the path exists, false otherwise.
      bool
      exists(void) const
      {
        return type() != PT_INVALID;
      }

      //! Check if the path is a regular file.
      //! @return true if the path is a regular file, false otherwise.
      bool
      isFile(void) const
      {
        return type() == PT_FILE;
      }

      //! Check if the path is a directory.
      //! @return true if the path is a directory, false otherwise.
      bool
      isDirectory(void) const
      {
        return type() == PT_DIRECTORY;
      }

      //! Check if the path is a symbolic link.
      //! @return true if the path is a symbolic link, false otherwise.
      bool
      isLink(void) const
      {
        return type() == PT_LINK;
      }

      //! Check if the path is a device file.
      //! @return true if the path is a device file, false otherwise.
      bool
      isDevice(void) const
      {
        return type() == PT_DEVICE;
      }

      //! Check if the path is absolute.
      //! @return true if the path is absolute, false otherwise.
      bool
      isAbsolute(void) const;

      int64_t
      size(void) const;

      time_t
      getLastModifiedTime(void) const;

      //! Remove the path from the filesystem.
      //! @param mode removal mode.
      void
      remove(Mode mode = MODE_NORMAL) const;

      //! Create the path in the filesystem. Only valid for
      //! directories.
      //! @param mode creation mode.
      void
      create(Mode mode = MODE_RECURSIVE) const;

      void
      copy(const Path& destination) const;

      Path
      absolute(void) const
      {
        return current().str() + separator() + m_path;
      }

      Path
      root(void) const;

      Path
      basename(void) const;

      Path
      dirname(bool include_last_sep = true) const;

      std::string
      extension(void) const;

      std::string
      suffix(const Path& path, bool keep_first_sep = false) const;

      void
      normalize(void);

      void
      contents(std::vector<Path>& dirs) const
      {
        contents(dirs, 0, 0);
      }

      void
      contents(std::vector<Path>& dirs, int min_depth, int max_depth, int depth = 0) const;

      void
      clear(void);

      bool
      empty(void) const;

      inline const std::string&
      str(void) const
      {
        return m_path;
      }

      inline const char*
      c_str(void) const
      {
        return m_path.c_str();
      }

    private:
      //! Internal path representation.
      std::string m_path;
      //! Size of file copying buffer.
      static const uint32_t c_copy_buffer_size = 4096;
    };

    inline Path
    operator/(const Path& a, const Path& b)
    {
      return Path(a.str() + Path::separator() + b.str());
    }

    inline bool
    operator==(const Path& a, const Path& b)
    {
      return a.str() == b.str();
    }

    inline bool
    operator!=(const Path& a, const Path& b)
    {
      return a.str() != b.str();
    }

    inline Path
    operator+(const Path& a, const Path& b)
    {
      return Path(a.str() + b.str());
    }

    inline bool
    operator<(const Path& a, const Path& b)
    {
      return a.str() < b.str();
    }

    inline Path
    operator+=(const Path& a, const Path& b)
    {
      return Path(a.str() + b.str());
    }

    inline std::ostream&
    operator<<(std::ostream& a, const Path& b)
    {
      a << b.str();
      return a;
    }
  }
}

#endif
