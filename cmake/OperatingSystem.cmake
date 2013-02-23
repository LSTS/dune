#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: OperatingSystem.cmake 12303 2013-01-01 02:14:25Z jbraga           $:#
#############################################################################

macro(dune_probe_os)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***      Probing Operating System      ***")
  message(STATUS "******************************************")

  # GNU/Linux 2.4
  if(NOT DUNE_OS_NAME)
    check_cxx_source_compiles("
#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 5, 0)
#  error Linux 2.5 or superior
#endif
" OS_LINUX24)
    if(OS_LINUX24)
      set(DUNE_OS_NAME "Linux2.4")
      set(DUNE_OS_CANONICAL "linux24")
      set(DUNE_OS_LINUX 1)
      set(DUNE_OS_LINUX24 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_LINUX24)
  endif(NOT DUNE_OS_NAME)

  # GNU/Linux 2.6
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__linux__ stdio.h OS_LINUX)
    if(OS_LINUX)
      set(DUNE_OS_NAME "Linux")
      set(DUNE_OS_CANONICAL "linux")
      set(DUNE_OS_LINUX 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_LINUX)
  endif(NOT DUNE_OS_NAME)

  # RTEMS
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__rtems__ stdio.h OS_RTEMS)
    if(OS_RTEMS)
      set(DUNE_OS_NAME "RTEMS")
      set(DUNE_OS_CANONICAL "rtems")
      set(DUNE_OS_RTEMS 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_RTEMS)
  endif(NOT DUNE_OS_NAME)

  # eCos
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__ECOS__ stdio.h OS_ECOS)
    if(OS_ECOS)
      set(DUNE_OS_NAME "eCos")
      set(DUNE_OS_CANONICAL "ecos")
      set(DUNE_OS_ECOS 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_ECOS)
  endif(NOT DUNE_OS_NAME)

  # Microsoft Windows (32 bits)
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(_WIN32 stdio.h OS_WIN32)
    if(OS_WIN32)
      set(DUNE_OS_NAME "Windows")
      set(DUNE_OS_CANONICAL "windows")
      set(DUNE_OS_WINDOWS 1)
      add_definitions(-D_WIN32_WINNT=0x0501)
      set(CMAKE_REQUIRED_DEFINITIONS "${CMAKE_REQUIRED_DEFINITIONS} -D_WIN32_WINNT=0x0501")

      set(DUNE_PTHREADS_WIN32_FILES
        external/libraries/pthreads-win32/attr.c
        external/libraries/pthreads-win32/barrier.c
        external/libraries/pthreads-win32/cancel.c
        external/libraries/pthreads-win32/cleanup.c
        external/libraries/pthreads-win32/condvar.c
        external/libraries/pthreads-win32/create.c
        external/libraries/pthreads-win32/dll.c
        external/libraries/pthreads-win32/errno.c
        external/libraries/pthreads-win32/exit.c
        external/libraries/pthreads-win32/fork.c
        external/libraries/pthreads-win32/global.c
        external/libraries/pthreads-win32/misc.c
        external/libraries/pthreads-win32/mutex.c
        external/libraries/pthreads-win32/nonportable.c
        external/libraries/pthreads-win32/private.c
        external/libraries/pthreads-win32/rwlock.c
        external/libraries/pthreads-win32/sched.c
        external/libraries/pthreads-win32/semaphore.c
        external/libraries/pthreads-win32/signal.c
        external/libraries/pthreads-win32/spin.c
        external/libraries/pthreads-win32/sync.c
        external/libraries/pthreads-win32/tsd.c)

      set(CMAKE_REQUIRED_INCLUDES ${PROJECT_SOURCE_DIR}/external/libraries/pthreads-win32)
      include_directories(${PROJECT_SOURCE_DIR}/external/libraries/pthreads-win32)

      set_source_files_properties(${DUNE_PTHREADS_WIN32_FILES}
        PROPERTIES COMPILE_FLAGS "-DPTW32_BUILD -DHAVE_CONFIG_H")

      list(APPEND DUNE_EXTERNAL_FILES ${DUNE_PTHREADS_WIN32_FILES})

      set(DUNE_SYS_HAS_PTHREAD_H 1)
      set(DUNE_SYS_HAS_PTHREAD 1)
      set(DUNE_SYS_HAS_PTHREAD_MUTEX 1)
      set(DUNE_SYS_HAS_PTHREAD_COND 1)
      set(DUNE_SYS_HAS_PTHREAD_BARRIER 1)
      set(DUNE_SYS_HAS_PTHREAD_RWLOCK 1)
      set(DUNE_SYS_HAS_PTHREAD_KEY 1)
      set(DUNE_SYS_HAS_STRUCT_TIMESPEC 1)
    endif(OS_WIN32)
  endif(NOT DUNE_OS_NAME)

  # MacOS X / Darwin
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__APPLE__ stdio.h OS_DARWIN)
    if(OS_DARWIN)
      set(DUNE_OS_NAME "Darwin")
      set(DUNE_OS_CANONICAL "darwin")
      set(DUNE_OS_DARWIN 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_DARWIN)
  endif(NOT DUNE_OS_NAME)

  # FreeBSD
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__DragonFly__ stdio.h OS_DRAGONFLY)
    if(OS_DRAGONFLY)
      set(DUNE_OS_NAME "DragonFly")
      set(DUNE_OS_CANONICAL "dragonfly")
      set(DUNE_OS_FREEBSD 1)
      set(DUNE_OS_POSIX 1)
      set(DUNE_OS_BSD 1)
    endif(OS_DRAGONFLY)
  endif(NOT DUNE_OS_NAME)

  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__FreeBSD__ stdio.h OS_FREEBSD)
    if(OS_FREEBSD)
      set(DUNE_OS_NAME "FreeBSD")
      set(DUNE_OS_CANONICAL "freebsd")
      set(DUNE_OS_FREEBSD 1)
      set(DUNE_OS_POSIX 1)
      set(DUNE_OS_BSD 1)
    endif(OS_FREEBSD)
  endif(NOT DUNE_OS_NAME)

  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__OpenBSD__ stdio.h OS_OPENBSD)
    if(OS_OPENBSD)
      set(DUNE_OS_NAME "OpenBSD")
      set(DUNE_OS_CANONICAL "openbsd")
      set(DUNE_OS_OPENBSD 1)
      set(DUNE_OS_POSIX 1)
      set(DUNE_OS_BSD 1)
    endif(OS_OPENBSD)
  endif(NOT DUNE_OS_NAME)

  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__NetBSD__ stdio.h OS_NETBSD)
    if(OS_NETBSD)
      set(DUNE_OS_NAME "NetBSD")
      set(DUNE_OS_CANONICAL "netbsd")
      set(DUNE_OS_NETBSD 1)
      set(DUNE_OS_POSIX 1)
      set(DUNE_OS_BSD 1)
    endif(OS_NETBSD)
  endif(NOT DUNE_OS_NAME)

  # SUN Solaris
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__sun stdio.h OS_SUNOS)
    if(OS_SUNOS)
      set(DUNE_OS_NAME "Solaris")
      set(DUNE_OS_CANONICAL "solaris")
      set(DUNE_OS_SOLARIS 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_SUNOS)
  endif(NOT DUNE_OS_NAME)

  # QNX Neutrino
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__QNXNTO__ stdio.h OS_QNX6)
    if(OS_QNX6)
      set(DUNE_OS_NAME "QNX6")
      set(DUNE_OS_CANONICAL "qnx6")
      set(DUNE_OS_QNX6 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_QNX6)
  endif(NOT DUNE_OS_NAME)

  # Unknown System
  if(NOT DUNE_OS_NAME)
    set(DUNE_OS_NAME "Unknown")
    set(DUNE_OS_CANONICAL "unknown")
  endif(NOT DUNE_OS_NAME)
endmacro(dune_probe_os)
