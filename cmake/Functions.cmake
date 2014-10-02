############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
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
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

include(CheckCXXSourceCompiles)

macro(dune_test_function function return types headers output)
  set(program "")
  set(arguments "")

  # Include headers.
  foreach(header ${headers})
    string(REPLACE "." "_" header_var ${header})
    string(REPLACE "/" "_" header_var ${header_var})
    string(REPLACE "-" "_" header_var ${header_var})
    string(TOUPPER ${header_var} header_var)
    set(header_var "DUNE_SYS_HAS_${header_var}")

    if(${header_var})
      set(program "${program}#include <${header}>\n")
    endif(${header_var})
  endforeach(header)

  # Begin main.
  set(program "${program}\nint main(void) {\n")

  set(variable "x")
  foreach(type ${types})

    # Treat function pointers
    if(type MATCHES "\\(\\*\\)")
      string(REPLACE "(*)" "(*type_${variable})" typedef ${type})
      set(program "${program}\ntypedef ${typedef};\n")
      set(type "type_${variable}")
    endif(type MATCHES "\\(\\*\\)")

    # Declare function arguments.
    if(type MATCHES "\\*\\*$")
      set(pointer "&")
      string(REPLACE "**" "*" type ${type})
    elseif(type MATCHES "\\*$")
      set(pointer "&")
      string(REPLACE "*" "" type ${type})
    else(type MATCHES "\\*\\*$")
      set(pointer "")
    endif(type MATCHES "\\*\\*$")

    # Treat void*
    if(type MATCHES "void")
      set(type "char")
    endif(type MATCHES "void")

    set(program "${program}${type} ${variable};\n")

    # Construct argument list
    if(NOT variable STREQUAL "x")
      set(arguments "${arguments}, ")
    endif(NOT variable STREQUAL "x")
    set(arguments "${arguments}${pointer}${variable}")

    set(variable "${variable}x")
  endforeach(type)

  # End main.
  if(${return} STREQUAL "void")
    set(program "${program}\n${function}(${arguments});\nreturn 0;\n}\n")
  else(${return} STREQUAL "void")
    set(program "${program}\n ${return} rv = ${function}(${arguments});\nreturn 0;\n}\n")
  endif(${return} STREQUAL "void")

  # Compile.
  if(NOT ${output})
    set(CMAKE_REQUIRED_FLAGS ${DUNE_CXX_FLAGS_STRICT})
    check_cxx_source_compiles("${program}" ${output})
  endif(NOT ${output})

  if(${output})
    set(DUNE_SYS_FUNCTIONS "${DUNE_SYS_FUNCTIONS}#define ${output}\n")
  else(${output})
    set(DUNE_SYS_FUNCTIONS "${DUNE_SYS_FUNCTIONS}//#undef ${output}\n")
  endif(${output})
endmacro(dune_test_function)

macro(dune_probe_functions)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***       Probing System Functions     ***")
  message(STATUS "******************************************")

  dune_test_function(strncpy_s
    "errno_t"
    "char*;size_t;char*;size_t"
    "windows.h"
    DUNE_SYS_HAS_STRNCPY_S)

  dune_test_function(strncpy
    "char*"
    "char*;char*;size_t"
    "cstring"
    DUNE_SYS_HAS_STRNCPY)

  dune_test_function(vsnprintf
    "int"
    "char*;size_t;char*;va_list"
    "cstdio;cstdarg"
    DUNE_SYS_HAS_VSNPRINTF)

  dune_test_function(vsnprintf_s
    "int"
    "char*;size_t;size_t;char*; va_list"
    "windows.h"
    DUNE_SYS_HAS_VSNPRINTF_S)

  dune_test_function(close
    "int"
    "int"
    "unistd.h"
    DUNE_SYS_HAS_CLOSE)

  dune_test_function(closesocket
    "int"
    "SOCKET"
    "winsock2.h"
    DUNE_SYS_HAS_CLOSESOCKET)

  dune_test_function(pthread_create
    "int"
    "pthread_t*;pthread_attr_t*;void *(*)(void*);void*"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD)

  dune_test_function(pthread_key_delete
    "int"
    "pthread_key_t"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_KEY_DELETE)

  dune_test_function(pthread_sigmask
    "int"
    "int;sigset_t*;sigset_t*"
    "signal.h"
    DUNE_SYS_HAS_PTHREAD_SIGMASK)

  dune_test_function(pthread_kill
    "int"
    "pthread_t;int"
    "signal.h"
    DUNE_SYS_HAS_PTHREAD_KILL)

  dune_test_function(pthread_barrier_init
    "int"
    "pthread_barrier_t*;pthread_barrierattr_t*;unsigned"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_BARRIER)

  dune_test_function(pthread_cond_init
    "int"
    "pthread_cond_t*;pthread_condattr_t*"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_COND)

  dune_test_function(pthread_rwlock_init
    "int"
    "pthread_rwlock_t*;pthread_rwlockattr_t*"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_RWLOCK)

  dune_test_function(pthread_mutex_init
    "int"
    "pthread_mutex_t*;pthread_mutexattr_t*"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_MUTEX)

  dune_test_function(pthread_key_create
    "int"
    "pthread_key_t*;void (*)(void *)"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_KEY)

  dune_test_function(pthread_condattr_setclock
    "int"
    "pthread_condattr_t*;clockid_t"
    "pthread.h"
    DUNE_SYS_HAS_PTHREAD_CONDATTR_SETCLOCK)

  dune_test_function(sigaction
    "int"
    "int;struct sigaction*;struct sigaction*"
    "signal.h"
    DUNE_SYS_HAS_SIGACTION)

  dune_test_function(mmap
    "void*"
    "void*;size_t;int;int;int;off_t"
    "sys/mman.h;sys/types.h"
    DUNE_SYS_HAS_MMAP)

  dune_test_function(mmap64
    "void*"
    "void*;size_t;int;int;int;off_t"
    "sys/mman.h;sys/types.h"
    DUNE_SYS_HAS_MMAP64)

  dune_test_function(mlockall
    "int"
    "int"
    "sys/mman.h;sys/types.h"
    DUNE_SYS_HAS_MLOCKALL)

  dune_test_function(munlockall
    "int"
    ""
    "sys/mman.h;sys/types.h"
    DUNE_SYS_HAS_MUNLOCKALL)

  dune_test_function(round
    "double"
    "double"
    "cmath"
    DUNE_SYS_HAS_ROUND)

  dune_test_function(lround
    "long int"
    "double"
    "cmath"
    DUNE_SYS_HAS_LROUND)

  dune_test_function(getcwd
    "char*"
    "char*;size_t"
    "unistd.h"
    DUNE_SYS_HAS_GETCWD)

  dune_test_function(_getcwd
    "char*"
    "char*;int"
    "direct.h"
    DUNE_SYS_HAS__GETCWD)

  dune_test_function(FormatMessage
    "DWORD"
    "DWORD;void*;DWORD;DWORD;char*;DWORD;va_list*"
    "windows.h"
    DUNE_SYS_HAS_FORMAT_MESSAGE)

  dune_test_function(ioperm
    "int"
    "unsigned long;unsigned long;int"
    "unistd.h;sys/io.h"
    DUNE_SYS_HAS_IOPERM)

  dune_test_function(localtime
    "struct tm*"
    "time_t*"
    "time.h"
    DUNE_SYS_HAS_LOCALTIME)

  dune_test_function(localtime_r
    "struct tm*"
    "time_t*;struct tm*"
    "time.h"
    DUNE_SYS_HAS_LOCALTIME_R)

  dune_test_function(gmtime_r
    "struct tm*"
    "time_t*;struct tm*"
    "time.h"
    DUNE_SYS_HAS_GMTIME_R)

  dune_test_function(clock_nanosleep
    "int"
    "clockid_t;int;struct timespec*;struct timespec*"
    "time.h"
    DUNE_SYS_HAS_CLOCK_NANOSLEEP)

  dune_test_function(nanosleep
    "int"
    "struct timespec*;struct timespec*"
    "time.h"
    DUNE_SYS_HAS_NANOSLEEP)

  dune_test_function(clock_gettime
    "int"
    "clockid_t;struct timespec*"
    "time.h"
    DUNE_SYS_HAS_CLOCK_GETTIME)

  dune_test_function(GetSystemTimeAsFileTime
    "void"
    "FILETIME*"
    "windows.h"
    DUNE_SYS_HAS_GET_SYSTEM_TIME_AS_FILE_TIME)

  dune_test_function(QueryPerformanceCounter
    "bool"
    "LARGE_INTEGER*"
    "windows.h"
    DUNE_SYS_HAS_QUERY_PERFORMANCE_COUNTER)

  dune_test_function(GetLastError
    "DWORD"
    ""
    "windows.h"
    DUNE_SYS_HAS_GET_LAST_ERROR)

  dune_test_function(CreateWaitableTimer
    "HANDLE"
    "SECURITY_ATTRIBUTES*;BOOL;char*"
    "windows.h"
    DUNE_SYS_HAS_CREATE_WAITABLE_TIMER)

  dune_test_function(GetModuleFileName
    "DWORD"
    "HMODULE;LPSTR;DWORD"
    "windows.h"
    DUNE_SYS_HAS_GET_MODULE_FILE_NAME)

  dune_test_function(LoadLibrary
    "HMODULE"
    "char*"
    "windows.h"
    DUNE_SYS_HAS_LOAD_LIBRARY)

  dune_test_function(TlsAlloc
    "DWORD"
    ""
    "windows.h"
    DUNE_SYS_HAS_TLS_ALLOC)

  dune_test_function(dlerror
    "const char*"
    ""
    "dlfcn.h"
    DUNE_SYS_HAS_DLERROR)

  dune_test_function(dlopen
    "void*"
    "char*;int"
    "dlfcn.h"
    DUNE_SYS_HAS_DLOPEN)

  dune_test_function(gettimeofday
    "int"
    "struct timeval*;struct timezone*"
    "sys/time.h"
    DUNE_SYS_HAS_GETTIMEOFDAY)

  dune_test_function(htonl
    "unsigned int"
    "unsigned int"
    "arpa/inet.h;windows.h;netinet/in.h"
    DUNE_SYS_HAS_HTONL)

  dune_test_function(htons
    "unsigned int"
    "unsigned int"
    "arpa/inet.h;windows.h;netinet/in.h"
    DUNE_SYS_HAS_HTONS)

  dune_test_function(ntohl
    "unsigned int"
    "unsigned int"
    "arpa/inet.h;windows.h;netinet/in.h"
    DUNE_SYS_HAS_NTOHL)

  dune_test_function(ntohs
    "unsigned int"
    "unsigned int"
    "arpa/inet.h;windows.h;netinet/in.h"
    DUNE_SYS_HAS_NTOHS)

  dune_test_function(inet_addr
    "unsigned long"
    "char*"
    "sys/types.h;sys/socket.h;arpa/inet.h;winsock2.h"
    DUNE_SYS_HAS_INET_ADDR)

  dune_test_function(inet_ntoa
    "char*"
    "struct in_addr"
    "sys/types.h;sys/socket.h;arpa/inet.h;winsock2.h"
    DUNE_SYS_HAS_INET_NTOA)

  dune_test_function(inet_aton
    "int"
    "char*;struct in_addr*"
    "netinet/in.h;sys/types.h;sys/socket.h;arpa/inet.h;winsock2.h"
    DUNE_SYS_HAS_INET_ATON)

  dune_test_function(inet_ntop
    "const char*"
    "int;void*;char*;socklen_t"
    "sys/types.h;sys/socket.h;arpa/inet.h;winsock2.h"
    DUNE_SYS_HAS_INET_NTOP)

  dune_test_function(inet_pton
    "int"
    "int;char*;void*"
    "sys/types.h;sys/socket.h;arpa/inet.h;winsock2.h"
    DUNE_SYS_HAS_INET_PTON)

  dune_test_function(getaddrinfo
    "int"
    "char*;char*;struct addrinfo*;struct addrinfo**"
    "sys/types.h;sys/socket.h;netdb.h;winsock2.h;ws2tcpip.h"
    DUNE_SYS_HAS_GETADDRINFO)

  dune_test_function(lstat
    "int"
    "char*;struct stat*"
    "sys/types.h;sys/stat.h;unistd.h"
    DUNE_SYS_HAS_LSTAT)

  dune_test_function(statfs64
    "int"
    "char*;struct statfs64*"
    "sys/param.h;sys/mount.h;sys/vfs.h"
    DUNE_SYS_HAS_STATFS64_DARWIN_LINUX)

  dune_test_function(mkdir
    "int"
    "char*;mode_t"
    "sys/stat.h;sys/types.h"
    DUNE_SYS_HAS_POSIX_MKDIR)

  dune_test_function(CreateDirectory
    "BOOL"
    "LPCTSTR;LPSECURITY_ATTRIBUTES"
    "windows.h"
    DUNE_SYS_HAS_CREATE_DIRECTORY)

  dune_test_function(select
    "int"
    "int;fd_set*;fd_set*;fd_set*;struct timeval*"
    "sys/types.h;sys/select.h;winsock2.h"
    DUNE_SYS_HAS_SELECT)

  dune_test_function(sendfile
    "ssize_t"
    "int;int;off_t*;size_t"
    "sys/sendfile.h"
    DUNE_SYS_HAS_LINUX_SENDFILE)

  dune_test_function(settimeofday
    "int"
    "struct timeval*;struct timezone*"
    "sys/time.h"
    DUNE_SYS_HAS_SETTIMEOFDAY)

  dune_test_function(socket
    "int"
    "int;int;int"
    "sys/types.h;sys/socket.h;winsock2.h"
    DUNE_SYS_HAS_SOCKET)

  dune_test_function(WSAStartup
    "int"
    "WORD;WSADATA*"
    "winsock2.h"
    DUNE_SYS_HAS_WSA_STARTUP)

  dune_test_function(WSACleanup
    "int"
    ""
    "winsock2.h"
    DUNE_SYS_HAS_WSA_CLEANUP)

  dune_test_function(WSAStringToAddress
    "int"
    "char*;int;WSAPROTOCOL_INFO*;SOCKADDR*;int*"
    "winsock2.h"
    DUNE_SYS_HAS_WSA_STRING_TO_ADDRESS)

  dune_test_function(WSAIoctl
    "int"
    "SOCKET;DWORD;void*;DWORD;void*;DWORD;LPDWORD;LPWSAOVERLAPPED;LPWSAOVERLAPPED_COMPLETION_ROUTINE"
    "winsock2.h"
    DUNE_SYS_HAS_WSA_IOCTL)

  dune_test_function(stat
    "int"
    "char*;struct stat*"
    "sys/types.h;sys/stat.h;unistd.h"
    DUNE_SYS_HAS_STAT)

  dune_test_function(strerror
    "char*"
    "int"
    "cstring"
    DUNE_SYS_HAS_STRERROR)

  dune_test_function(strerror_r
    "char*"
    "int;char*;size_t"
    "cstring"
    DUNE_SYS_HAS_GNU_STRERROR_R)

  dune_test_function(strerror_r
    "int"
    "int;char*;size_t"
    "cstring;string.h"
    DUNE_SYS_HAS_POSIX_STRERROR_R)

  dune_test_function(CreateFile
    "HANDLE"
    "LPCSTR;DWORD;DWORD;SECURITY_ATTRIBUTES*;DWORD;DWORD;HANDLE"
    "windows.h"
    DUNE_SYS_HAS_CREATE_FILE)

  dune_test_function(ReadFile
    "BOOL"
    "HANDLE;LPVOID;DWORD;DWORD*;OVERLAPPED*"
    "windows.h"
    DUNE_SYS_HAS_READ_FILE)

  dune_test_function(WriteFile
    "BOOL"
    "HANDLE;LPCVOID;DWORD;DWORD*;OVERLAPPED*"
    "windows.h"
    DUNE_SYS_HAS_WRITE_FILE)

  dune_test_function(GetOverlappedResult
    "BOOL"
    "HANDLE;OVERLAPPED*;DWORD*;BOOL"
    "windows.h"
    DUNE_SYS_HAS_GET_OVERLAPPED_RESULT)

  dune_test_function(SetCommState
    "BOOL"
    "HANDLE;DCB*"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_STATE)

  dune_test_function(GetCommState
    "BOOL"
    "HANDLE;DCB*"
    "windows.h"
    DUNE_SYS_HAS_GET_COMM_STATE)

  dune_test_function(SetCommMask
    "BOOL"
    "HANDLE;DWORD"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_MASK)

  dune_test_function(PurgeComm
    "BOOL"
    "HANDLE;DWORD"
    "windows.h"
    DUNE_SYS_HAS_PURGE_COMM)

  dune_test_function(WaitCommEvent
    "BOOL"
    "HANDLE;DWORD*;OVERLAPPED*"
    "windows.h"
    DUNE_SYS_HAS_WAIT_COMM_EVENT)

  dune_test_function(SetCommBreak
    "BOOL"
    "HANDLE"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_BREAK)

  dune_test_function(ClearCommBreak
    "BOOL"
    "HANDLE"
    "windows.h"
    DUNE_SYS_HAS_CLEAR_COMM_BREAK)

  dune_test_function(ClearCommError
    "BOOL"
    "HANDLE;DWORD*;COMSTAT*"
    "windows.h"
    DUNE_SYS_HAS_CLEAR_COMM_ERROR)

  dune_test_function(WaitForSingleObject
    "DWORD"
    "HANDLE;DWORD"
    "windows.h"
    DUNE_SYS_HAS_WAIT_FOR_SINGLE_OBJECT)

  dune_test_function(CreateEvent
    "HANDLE"
    "SECURITY_ATTRIBUTES*;BOOL;BOOL;LPCSTR"
    "windows.h"
    DUNE_SYS_HAS_CREATE_EVENT)

  dune_test_function(SetCommState
    "BOOL"
    "HANDLE;DCB*"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_STATE)

  dune_test_function(GetCommState
    "BOOL"
    "HANDLE;DCB*"
    "windows.h"
    DUNE_SYS_HAS_GET_COMM_STATE)

  dune_test_function(SetCommMask
    "BOOL"
    "HANDLE;DWORD"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_MASK)

  dune_test_function(PurgeComm
    "BOOL"
    "HANDLE;DWORD"
    "windows.h"
    DUNE_SYS_HAS_PURGE_COMM)

  dune_test_function(SetCommBreak
    "BOOL"
    "HANDLE"
    "windows.h"
    DUNE_SYS_HAS_SET_COMM_BREAK)

  dune_test_function(ClearCommBreak
    "BOOL"
    "HANDLE"
    "windows.h"
    DUNE_SYS_HAS_CLEAR_COMM_BREAK)

  dune_test_function(random
    "long int"
    ""
    "cstdlib"
    DUNE_SYS_HAS_RANDOM)

  dune_test_function(srandom
    "void"
    "unsigned int"
    "cstdlib"
    DUNE_SYS_HAS_SRANDOM)

  dune_test_function(lrand48
    "long int"
    ""
    "cstdlib"
    DUNE_SYS_HAS_LRAND48)

  dune_test_function(srand48
    "void"
    "long int"
    "cstdlib"
    DUNE_SYS_HAS_SRAND48)

  dune_test_function(sched_yield
    "int"
    ""
    "sched.h"
    DUNE_SYS_HAS_SCHED_YIELD)

  dune_test_function(sched_get_priority_min
    "int"
    "int"
    "sched.h"
    DUNE_SYS_HAS_SCHED_GET_PRIORITY_MIN)

  dune_test_function(sched_get_priority_max
    "int"
    "int"
    "sched.h"
    DUNE_SYS_HAS_SCHED_GET_PRIORITY_MAX)

  dune_test_function(__sync_add_and_fetch
    "int"
    "int*;int"
    ""
    DUNE_SYS_HAS___SYNC_ADD_AND_FETCH)

  dune_test_function(__sync_sub_and_fetch
    "int"
    "int*;int"
    ""
    DUNE_SYS_HAS___SYNC_SUB_AND_FETCH)

  dune_test_function(fork
    "pid_t"
    ""
    "unistd.h"
    DUNE_SYS_HAS_FORK)

  dune_test_function(shm_unlink
    "int"
    "char*"
    "sys/mman.h;sys/stat.h;fcntl.h"
    DUNE_SYS_HAS_SHM_UNLINK)

  dune_test_function(shm_open
    "int"
    "char*;int;mode_t"
    "sys/mman.h;sys/stat.h;fcntl.h"
    DUNE_SYS_HAS_SHM_OPEN)

  dune_test_function(gettext
    "char*"
    "char*"
    "libintl.h"
    DUNE_SYS_HAS_GETTEXT)

  dune_test_function(syslog
    "void"
    "int;char*"
    "syslog.h"
    DUNE_SYS_HAS_SYSLOG)

  dune_test_function(isnan
    "int"
    "double"
    "math.h"
    DUNE_SYS_HAS_ISNAN_POSIX)

  dune_test_function(std::isnan
    "int"
    "double"
    "cmath"
    DUNE_SYS_HAS_ISNAN_CXX)

  dune_test_function(_isnan
    "int"
    "double"
    "float.h"
    DUNE_SYS_HAS__ISNAN)

endmacro(dune_probe_functions)
