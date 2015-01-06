############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

macro(dune_probe_os)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***      Probing Operating System      ***")
  message(STATUS "******************************************")

  # Android
  if(NOT DUNE_OS_NAME)
    check_symbol_exists(__ANDROID__ stdio.h OS_ANDROID)
    if(OS_ANDROID)
      check_cxx_source_compiles("
#include <android/api-level.h>
#if __ANDROID_API__ >= 14
#  error Android API 14 or greater
#endif
" OS_ANDROID_API_OLD)
      if(OS_ANDROID_API_OLD)
        message(ABORT "Android API 14 or greater is required")
      endif()

      set(DUNE_OS_NAME "Android")
      set(DUNE_OS_CANONICAL "android")
      set(DUNE_OS_ANDROID 1)
      set(DUNE_OS_POSIX 1)
    endif(OS_ANDROID)
  endif(NOT DUNE_OS_NAME)

  # GNU/Linux 2.4
  if(NOT DUNE_OS_NAME)
    check_cxx_source_compiles("
#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 5, 0)
#  error Linux 2.5 or greater
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
        vendor/libraries/pthreads-win32/attr.c
        vendor/libraries/pthreads-win32/barrier.c
        vendor/libraries/pthreads-win32/cancel.c
        vendor/libraries/pthreads-win32/cleanup.c
        vendor/libraries/pthreads-win32/condvar.c
        vendor/libraries/pthreads-win32/create.c
        vendor/libraries/pthreads-win32/dll.c
        vendor/libraries/pthreads-win32/errno.c
        vendor/libraries/pthreads-win32/exit.c
        vendor/libraries/pthreads-win32/fork.c
        vendor/libraries/pthreads-win32/global.c
        vendor/libraries/pthreads-win32/misc.c
        vendor/libraries/pthreads-win32/mutex.c
        vendor/libraries/pthreads-win32/nonportable.c
        vendor/libraries/pthreads-win32/private.c
        vendor/libraries/pthreads-win32/rwlock.c
        vendor/libraries/pthreads-win32/sched.c
        vendor/libraries/pthreads-win32/semaphore.c
        vendor/libraries/pthreads-win32/signal.c
        vendor/libraries/pthreads-win32/spin.c
        vendor/libraries/pthreads-win32/sync.c
        vendor/libraries/pthreads-win32/tsd.c)

      set(CMAKE_REQUIRED_INCLUDES ${PROJECT_SOURCE_DIR}/vendor/libraries/pthreads-win32)
      include_directories(${PROJECT_SOURCE_DIR}/vendor/libraries/pthreads-win32)

      set_source_files_properties(${DUNE_PTHREADS_WIN32_FILES}
        PROPERTIES COMPILE_FLAGS "-DPTW32_BUILD -DHAVE_CONFIG_H")

      list(APPEND DUNE_VENDOR_FILES ${DUNE_PTHREADS_WIN32_FILES})

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
