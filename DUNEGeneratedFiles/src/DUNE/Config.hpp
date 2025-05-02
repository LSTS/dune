//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically Generated                                                  *
//***************************************************************************

#ifndef DUNE_CONFIG_HPP_INCLUDED_
#define DUNE_CONFIG_HPP_INCLUDED_

//! DUNE's short name.
#define DUNE_SHORT_NAME "DUNE"
//! DUNE's version string.
#define DUNE_VERSION_STR "2022.04.0"
//! DUNE's version year.
#define DUNE_VERSION_YEAR 2022
//! DUNE's version month.
#define DUNE_VERSION_MONTH 04
//! DUNE's version patch level.
#define DUNE_VERSION_PATCH 0
//! DUNE's version release candidate number.
#define DUNE_VERSION_RCN 0
//! DUNE's copyright.
#define DUNE_COPYRIGHT "Copyright (C) 2007-2023 - Universidade do Porto - LSTS"
//! DUNE's contact.
#define DUNE_CONTACT "DUNE <dune@lsts.pt>"
//! DUNE's build type.
#define DUNE_BUILD_TYPE "Release"
//! DUNE's system name.
#define DUNE_SYSTEM_NAME "x86-64bit-linux-glibc-gcc74"
//! DUNE's source path.
#define DUNE_PATH_SRC "/home/bts/dune/source"
//! DUNE's build path.
#define DUNE_PATH_BUILD "/home/bts/dune/source"

//! DUNE was compiled with Piccolo avionics support.
/* #undef DUNE_USING_PICCOLO */
//! DUNE was compiled with Qt5.
/* #undef DUNE_USING_QT5 */
//! DUNE was compiled with TLSF.
/* #undef DUNE_USING_TLSF */
//! DUNE was compiled with JPEG library.
#define DUNE_USING_JPEG
//! DUNE was compiled with DC1394 library.
/* #undef DUNE_USING_DC1394 */
//! DUNE was compiled with V4L2 library.
/* #undef DUNE_USING_V4L2 */
//! DUNE was compiled with SpiderMonkey support.
/* #undef DUNE_USING_SPIDERMONKEY */
//! DUNE was compiled with support for the Xeneth SDK.
/* #undef DUNE_USING_XENETH */
//! DUNE was compiled with support for the Exif library.
/* #undef DUNE_USING_EXIF */

//! Defined on Microsoft Windows.
/* #undef DUNE_OS_WINDOWS */
//! Defined on GNU/Linux.
#define DUNE_OS_LINUX
//! Defined on GNU/Linux 2.4.
/* #undef DUNE_OS_LINUX24 */
//! Defined on QNX v6.x
/* #undef DUNE_OS_QNX6 */
//! Defined on SUN Solaris.
/* #undef DUNE_OS_SOLARIS */
//! Defined on Mac OS X/Darwin.
/* #undef DUNE_OS_DARWIN */
//! Defined on RTEMS.
/* #undef DUNE_OS_RTEMS */
//! Defined on eCos.
/* #undef DUNE_OS_ECOS */
//! Defined on FreeBSD.
/* #undef DUNE_OS_FREEBSD */
//! Defined on NetBSD.
/* #undef DUNE_OS_NETBSD */
//! Defined on OpenBSD.
/* #undef DUNE_OS_OPENBSD */
//! Defined on BSD variants.
/* #undef DUNE_OS_BSD */
//! Defined on Android.
/* #undef DUNE_OS_ANDROID */
//! Defined on POSIX compliant systems.
#define DUNE_OS_POSIX

//! Defined when using uClibc.
/* #undef DUNE_CLIB_UC */
//! LLVM libc++
/* #undef DUNE_CLIB_LIBCXX */
//! Android/Bionic.
/* #undef DUNE_CLIB_BIONIC */
//! Defined when using the GNU C Library.
#define DUNE_CLIB_GNU
//! Defined when using Newlib.
/* #undef DUNE_CLIB_NEWLIB */
//! Defined when using MinGW.
/* #undef DUNE_CLIB_MINGW */
//! Defined when using the Microsoft C Library.
/* #undef DUNE_CLIB_MICROSOFT */
//! Defined when using the Apple C Library.
/* #undef DUNE_CLIB_APPLE */
//! Defined when using the SUN C Library.
/* #undef DUNE_CLIB_SUN */
//! Defined when using the Dinkum C Library.
/* #undef DUNE_CLIB_DINKUM */
//! Defined when using the BSD Library.
/* #undef DUNE_CLIB_BSD */
//! Defined when using an unknown C Library.
/* #undef DUNE_CLIB_UNKNOWN */

//! Defined if DUNE was compiled with GNU's C++ compiler.
#define DUNE_CXX_GNU
//! Defined if DUNE was compiled with Intel's C++ compiler.
/* #undef DUNE_CXX_INTEL */
//! Defined if DUNE was compiled with LLVM/Clang C++ compiler.
/* #undef DUNE_CXX_CLANG */
//! Defined if DUNE was compiled with Microsoft's C++ compiler.
/* #undef DUNE_CXX_MICROSOFT */
//! Defined if DUNE was compiled with an unknown C++ compiler.
/* #undef DUNE_CXX_UNKNOWN */

//! Target CPU architecture.
#define DUNE_CPU_X86

//! Target CPU architecture variant.
#define DUNE_CPU_VARIANT_X86

//! Defined if DUNE was compiled for a big endian system.
/* #undef DUNE_CPU_BIG_ENDIAN */
//! Defined if DUNE was compiled for a little endian system.
#define DUNE_CPU_LITTLE_ENDIAN
//! Defined if DUNE was compiled for a a system with mixed endian doubles.
/* #undef DUNE_CPU_MIXED_ENDIAN_DOUBLES */

//! Defined if DUNE was compiled for a 32 bit CPU.
/* #undef DUNE_CPU_32B */
//! Defined if DUNE was compiled for a 64 bit CPU.
#define DUNE_CPU_64B

// Headers.
#define DUNE_SYS_HAS_CMATH
#define DUNE_SYS_HAS_MATH_H
#define DUNE_SYS_HAS_CSTDLIB
#define DUNE_SYS_HAS_CSTRING
#define DUNE_SYS_HAS_STRING_H
#define DUNE_SYS_HAS_CSTDIO
#define DUNE_SYS_HAS_STDIO_H
#define DUNE_SYS_HAS_CSTDARG
#define DUNE_SYS_HAS_MEMORY
#define DUNE_SYS_HAS_TR1_MEMORY
#define DUNE_SYS_HAS_TIME_H
#define DUNE_SYS_HAS_ALLOCA_H
#define DUNE_SYS_HAS_ARPA_INET_H
//#undef DUNE_SYS_HAS_DEVCTL_H
#define DUNE_SYS_HAS_DIRENT_H
#define DUNE_SYS_HAS_DLFCN_H
#define DUNE_SYS_HAS_FCNTL_H
#define DUNE_SYS_HAS_INTTYPES_H
#define DUNE_SYS_HAS_LINUX_I2C_DEV_H
#define DUNE_SYS_HAS_LINUX_I2C_H
#define DUNE_SYS_HAS_LINUX_RTC_H
#define DUNE_SYS_HAS_LINUX_INPUT_H
#define DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H
#define DUNE_SYS_HAS_NETDB_H
#define DUNE_SYS_HAS_PTHREAD_H
#define DUNE_SYS_HAS_SIGNAL_H
#define DUNE_SYS_HAS_STDINT_H
#define DUNE_SYS_HAS_SYS_IO_H
#define DUNE_SYS_HAS_SYS_IOCTL_H
#define DUNE_SYS_HAS_SYS_PROCFS_H
#define DUNE_SYS_HAS_SYS_SIGNAL_H
#define DUNE_SYS_HAS_SYS_STAT_H
#define DUNE_SYS_HAS_SYS_STATFS_H
#define DUNE_SYS_HAS_SYS_SENDFILE_H
#define DUNE_SYS_HAS_SYS_TIME_H
#define DUNE_SYS_HAS_SYS_TIMEX_H
#define DUNE_SYS_HAS_SYS_TYPES_H
#define DUNE_SYS_HAS_SYS_FILE_H
#define DUNE_SYS_HAS_SYS_WAIT_H
#define DUNE_SYS_HAS_SYS_VFS_H
#define DUNE_SYS_HAS_SYS_STATVFS_H
#define DUNE_SYS_HAS_SYS_SYSCALL_H
#define DUNE_SYS_HAS_SYS_REBOOT_H
#define DUNE_SYS_HAS_TERMIOS_H
#define DUNE_SYS_HAS_UNISTD_H
//#undef DUNE_SYS_HAS_WINDOWS_H
//#undef DUNE_SYS_HAS_DIRECT_H
//#undef DUNE_SYS_HAS_WINSOCK2_H
//#undef DUNE_SYS_HAS_MACH_O_DYLD_H
//#undef DUNE_SYS_HAS_PROCESS_H
//#undef DUNE_SYS_HAS_BSP_H
#define DUNE_SYS_HAS_SYS_PARAM_H
#define DUNE_SYS_HAS_SYS_MOUNT_H
#define DUNE_SYS_HAS_LINUX_VIDEODEV2_H
#define DUNE_SYS_HAS_SCHED_H
#define DUNE_SYS_HAS_POLL_H
#define DUNE_SYS_HAS_IFADDRS_H
#define DUNE_SYS_HAS_SEMAPHORE_H
#define DUNE_SYS_HAS_LIBINTL_H
#define DUNE_SYS_HAS_SYSLOG_H
#define DUNE_SYS_HAS_FLOAT_H
#define DUNE_SYS_HAS_LINUX_PPS_H
#define DUNE_SYS_HAS_SYS_SOCKET_H
#define DUNE_SYS_HAS_NETINET_IN_H
#define DUNE_SYS_HAS_NETINET_TCP_H
#define DUNE_SYS_HAS_SYS_SELECT_H
#define DUNE_SYS_HAS_SYS_SYSCTL_H
#define DUNE_SYS_HAS_SYS_RESOURCE_H
#define DUNE_SYS_HAS_SYS_MMAN_H
#define DUNE_SYS_HAS_NET_IF_H
//#undef DUNE_SYS_HAS_TIMEPPS_H
//#undef DUNE_SYS_HAS_IPHLPAPI_H
//#undef DUNE_SYS_HAS_WS2TCPIP_H
//#undef DUNE_SYS_HAS_WS2SPI_H
//#undef DUNE_SYS_HAS_BVT_SDK_H
//#undef DUNE_SYS_HAS_FTD2XX_H
#define DUNE_SYS_HAS_JPEGLIB_H
//#undef DUNE_SYS_HAS_MCCUSB_PMD_H
//#undef DUNE_SYS_HAS_PHIDGET21_H
//#undef DUNE_SYS_HAS_LIBSWIFTNAV_SBP_H


// Types.
#define DUNE_SYS_HAS_STRUCT_TIMESPEC
#define DUNE_SYS_HAS_STRUCT_TIMEVAL
#define DUNE_SYS_HAS_STRUCT_TERMIOS
#define DUNE_SYS_HAS_STRUCT_STAT
#define DUNE_SYS_HAS_STRUCT_FLOCK
//#undef DUNE_SYS_HAS_CRITICAL_SECTION
#define DUNE_SYS_HAS_STD_TR1_SHARED_PTR
#define DUNE_SYS_HAS_SSIZE_T


// Functions.
//#undef DUNE_SYS_HAS_STRNCPY_S
#define DUNE_SYS_HAS_STRNCPY
#define DUNE_SYS_HAS_VSNPRINTF
//#undef DUNE_SYS_HAS_VSNPRINTF_S
#define DUNE_SYS_HAS_CLOSE
//#undef DUNE_SYS_HAS_CLOSESOCKET
#define DUNE_SYS_HAS_PTHREAD
#define DUNE_SYS_HAS_PTHREAD_KEY_DELETE
#define DUNE_SYS_HAS_PTHREAD_SIGMASK
#define DUNE_SYS_HAS_PTHREAD_BARRIER
#define DUNE_SYS_HAS_PTHREAD_COND
#define DUNE_SYS_HAS_PTHREAD_RWLOCK
#define DUNE_SYS_HAS_PTHREAD_MUTEX
#define DUNE_SYS_HAS_PTHREAD_KEY
#define DUNE_SYS_HAS_PTHREAD_CONDATTR_SETCLOCK
//#undef DUNE_SYS_HAS_PTHREAD_WIN32_PROCESS_ATTACH_NP
#define DUNE_SYS_HAS_SIGACTION
#define DUNE_SYS_HAS_MMAP
#define DUNE_SYS_HAS_MMAP64
#define DUNE_SYS_HAS_MLOCKALL
#define DUNE_SYS_HAS_MUNLOCKALL
#define DUNE_SYS_HAS_ROUND
#define DUNE_SYS_HAS_LROUND
#define DUNE_SYS_HAS_GETCWD
//#undef DUNE_SYS_HAS__GETCWD
//#undef DUNE_SYS_HAS_FORMAT_MESSAGE
#define DUNE_SYS_HAS_IOPERM
#define DUNE_SYS_HAS_LOCALTIME
#define DUNE_SYS_HAS_LOCALTIME_R
#define DUNE_SYS_HAS_GMTIME_R
#define DUNE_SYS_HAS_CLOCK_NANOSLEEP
#define DUNE_SYS_HAS_NANOSLEEP
#define DUNE_SYS_HAS_CLOCK_GETTIME
//#undef DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME
//#undef DUNE_SYS_HAS_QUERY_PERFORMANCE_COUNTER
//#undef DUNE_SYS_HAS_GET_LAST_ERROR
//#undef DUNE_SYS_HAS_CREATE_WAITABLE_TIMER
//#undef DUNE_SYS_HAS_GET_MODULE_FILE_NAME
//#undef DUNE_SYS_HAS_LOAD_LIBRARY
//#undef DUNE_SYS_HAS_TLS_ALLOC
#define DUNE_SYS_HAS_DLERROR
#define DUNE_SYS_HAS_DLOPEN
#define DUNE_SYS_HAS_GETTIMEOFDAY
#define DUNE_SYS_HAS_HTONL
#define DUNE_SYS_HAS_HTONS
#define DUNE_SYS_HAS_NTOHL
#define DUNE_SYS_HAS_NTOHS
#define DUNE_SYS_HAS_INET_ADDR
#define DUNE_SYS_HAS_INET_NTOA
#define DUNE_SYS_HAS_INET_ATON
#define DUNE_SYS_HAS_INET_NTOP
#define DUNE_SYS_HAS_INET_PTON
#define DUNE_SYS_HAS_GETADDRINFO
#define DUNE_SYS_HAS_LSTAT
#define DUNE_SYS_HAS_STATFS64_DARWIN_LINUX
#define DUNE_SYS_HAS_POSIX_MKDIR
//#undef DUNE_SYS_HAS_CREATE_DIRECTORY
#define DUNE_SYS_HAS_SELECT
#define DUNE_SYS_HAS_LINUX_SENDFILE
#define DUNE_SYS_HAS_SETTIMEOFDAY
#define DUNE_SYS_HAS_SOCKET
//#undef DUNE_SYS_HAS_WSA_STARTUP
//#undef DUNE_SYS_HAS_WSA_CLEANUP
//#undef DUNE_SYS_HAS_WSA_STRING_TO_ADDRESS
//#undef DUNE_SYS_HAS_WSA_IOCTL
#define DUNE_SYS_HAS_STAT
#define DUNE_SYS_HAS_STRERROR
#define DUNE_SYS_HAS_GNU_STRERROR_R
//#undef DUNE_SYS_HAS_POSIX_STRERROR_R
//#undef DUNE_SYS_HAS_CREATE_FILE
//#undef DUNE_SYS_HAS_READ_FILE
//#undef DUNE_SYS_HAS_WRITE_FILE
//#undef DUNE_SYS_HAS_GET_OVERLAPPED_RESULT
//#undef DUNE_SYS_HAS_SET_COMM_STATE
//#undef DUNE_SYS_HAS_GET_COMM_STATE
//#undef DUNE_SYS_HAS_SET_COMM_MASK
//#undef DUNE_SYS_HAS_PURGE_COMM
//#undef DUNE_SYS_HAS_WAIT_COMM_EVENT
//#undef DUNE_SYS_HAS_SET_COMM_BREAK
//#undef DUNE_SYS_HAS_CLEAR_COMM_BREAK
//#undef DUNE_SYS_HAS_CLEAR_COMM_ERROR
//#undef DUNE_SYS_HAS_WAIT_FOR_SINGLE_OBJECT
//#undef DUNE_SYS_HAS_CREATE_EVENT
//#undef DUNE_SYS_HAS_SET_COMM_STATE
//#undef DUNE_SYS_HAS_GET_COMM_STATE
//#undef DUNE_SYS_HAS_SET_COMM_MASK
//#undef DUNE_SYS_HAS_PURGE_COMM
//#undef DUNE_SYS_HAS_SET_COMM_BREAK
//#undef DUNE_SYS_HAS_CLEAR_COMM_BREAK
#define DUNE_SYS_HAS_RANDOM
#define DUNE_SYS_HAS_SRANDOM
#define DUNE_SYS_HAS_LRAND48
#define DUNE_SYS_HAS_SRAND48
#define DUNE_SYS_HAS_SCHED_YIELD
#define DUNE_SYS_HAS_SCHED_GET_PRIORITY_MIN
#define DUNE_SYS_HAS_SCHED_GET_PRIORITY_MAX
#define DUNE_SYS_HAS___SYNC_ADD_AND_FETCH
#define DUNE_SYS_HAS___SYNC_SUB_AND_FETCH
#define DUNE_SYS_HAS_FORK
#define DUNE_SYS_HAS_SHM_UNLINK
#define DUNE_SYS_HAS_SHM_OPEN
#define DUNE_SYS_HAS_GETTEXT
#define DUNE_SYS_HAS_SYSLOG
#define DUNE_SYS_HAS_ISNAN_POSIX
#define DUNE_SYS_HAS_ISNAN_CXX
//#undef DUNE_SYS_HAS__ISNAN
#define DUNE_SYS_HAS_POPEN


// Cleanup namespace in Microsoft Windows.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  define WIN32_LEAN_AND_MEAN
#  define _WIN32_WINNT 0x0501
#  include <windows.h>

#  if defined(max)
#    undef max
#  endif

#  if defined(min)
#    undef min
#  endif

#  if defined(CM_NONE)
#    undef CM_NONE
#  endif
#endif

#if !defined(DUNE_SYS_HAS_SSIZE_T) && defined(DUNE_CLIB_MICROSOFT)
typedef SSIZE_T ssize_t;
#endif

// Fixed width integers.
#if defined(DUNE_SYS_HAS_STDINT_H)
#  include <stdint.h>
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
   typedef INT8 int8_t;
   typedef UINT8 uint8_t;
   typedef INT16 int16_t;
   typedef UINT16 uint16_t;
   typedef INT32 int32_t;
   typedef UINT32 uint32_t;
   typedef INT64 int64_t;
   typedef UINT64 uint64_t;
#else
#  error Unable to find fixed precision integer types.
#endif

//! 64 bit floating point type.
typedef double fp64_t;
//! 32 bit floating point type.
typedef float fp32_t;

// Library type.
/* #undef DUNE_SHARED */
#define DUNE_STATIC

// Declaration for exporting symbols.
#if defined(DUNE_OS_WINDOWS) && defined(DUNE_SHARED)
#  define DUNE_SYM_EXPORT __declspec(dllexport)
#  define DUNE_SYM_IMPORT __declspec(dllimport)
#else
#  define DUNE_SYM_EXPORT
#  define DUNE_SYM_IMPORT
#endif

#if defined(DUNE_DLL_EXPORT)
#  define DUNE_DLL_SYM DUNE_SYM_EXPORT
#else
#  define DUNE_DLL_SYM DUNE_SYM_IMPORT
#endif

// GCC extension only: hint the compiler about the likely result of a boolean evaluation
#if defined (DUNE_CXX_GNU)
#  define likely(x)       __builtin_expect((x),1)
#  define unlikely(x)     __builtin_expect((x),0)
#else
#  define likely(x)       (x)
#  define unlikely(x)     (x)
#endif

#if defined(DUNE_CXX_GNU)
#  define DUNE_DEPRECATED __attribute__ ((deprecated))
#  define DUNE_PRINTF_FORMAT(s, f) __attribute__ ((format(printf, s, f)))
#else
#  define DUNE_DEPRECATED
#  define DUNE_PRINTF_FORMAT(s, f)
#endif

// Internationalization.
#if defined(DUNE_SYS_HAS_GETTEXT)
#  include <libintl.h>
#  define DTR(str) gettext(str)
#else
#  define DTR(str) str
#endif

//! Mark string as run-time translatable.
#define DTR_RT(str) str

#endif
