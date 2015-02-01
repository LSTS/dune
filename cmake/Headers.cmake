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

include(CheckIncludeFileCXX)

macro(dune_test_header header)
  string(REPLACE "." "_" output ${header})
  string(REPLACE "/" "_" output ${output})
  string(REPLACE "-" "_" output ${output})
  string(TOUPPER ${output} output)

  set(output "DUNE_SYS_HAS_${output}")

  check_include_file_cxx(${header} ${output})

  if(${output})
    set(DUNE_SYS_HEADERS "${DUNE_SYS_HEADERS}#define ${output}\n")
  else(${output})
    set(DUNE_SYS_HEADERS "${DUNE_SYS_HEADERS}//#undef ${output}\n")
  endif(${output})
endmacro(dune_test_header header)

macro(dune_test_header_deps header deps)
  set(program "")
  string(REPLACE "." "_" output ${header})
  string(REPLACE "/" "_" output ${output})
  string(REPLACE "-" "_" output ${output})
  string(TOUPPER ${output} output)

  set(output "DUNE_SYS_HAS_${output}")

  # Dependency headers.
  foreach(dep ${deps})
    string(REPLACE "." "_" dep_var ${dep})
    string(REPLACE "/" "_" dep_var ${dep_var})
    string(REPLACE "-" "_" dep_var ${dep_var})
    string(TOUPPER ${dep_var} dep_var)
    set(dep_var "DUNE_SYS_HAS_${dep_var}")

    if(${dep_var})
      set(program "${program}#include <${dep}>\n")
    endif(${dep_var})
  endforeach(dep)

  set(program "${program}\n#include <${header}>\nint main(void){ return 0; }\n")

  # Compile.
  if(NOT ${output})
    check_cxx_source_compiles("${program}" ${output})
  endif(NOT ${output})

  if(${output})
    set(DUNE_SYS_HEADERS "${DUNE_SYS_HEADERS}#define ${output}\n")
  else(${output})
    set(DUNE_SYS_HEADERS "${DUNE_SYS_HEADERS}//#undef ${output}\n")
  endif(${output})
endmacro(dune_test_header_deps header deps)

macro(dune_probe_headers)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***       Probing System Headers       ***")
  message(STATUS "******************************************")

  dune_test_header(cmath)
  dune_test_header(math.h)
  dune_test_header(cstdlib)
  dune_test_header(cstring)
  dune_test_header(string.h)
  dune_test_header(cstdio)
  dune_test_header(stdio.h)
  dune_test_header(cstdarg)
  dune_test_header(memory)
  dune_test_header(tr1/memory)
  dune_test_header(time.h)
  dune_test_header(alloca.h)
  dune_test_header(arpa/inet.h)
  dune_test_header(devctl.h)
  dune_test_header(dirent.h)
  dune_test_header(dlfcn.h)
  dune_test_header(fcntl.h)
  dune_test_header(inttypes.h)
  dune_test_header(linux/i2c-dev.h)
  dune_test_header(linux/i2c.h)
  dune_test_header(linux/rtc.h)
  dune_test_header(linux/input.h)
  dune_test_header(netdb.h)
  dune_test_header(pthread.h)
  dune_test_header(signal.h)
  dune_test_header(stdint.h)
  dune_test_header(sys/io.h)
  dune_test_header(sys/ioctl.h)
  dune_test_header(sys/procfs.h)
  dune_test_header(sys/signal.h)
  dune_test_header(sys/stat.h)
  dune_test_header(sys/statfs.h)
  dune_test_header(sys/sendfile.h)
  dune_test_header(sys/time.h)
  dune_test_header(sys/types.h)
  dune_test_header(sys/file.h)
  dune_test_header(sys/wait.h)
  dune_test_header(sys/vfs.h)
  dune_test_header(sys/statvfs.h)
  dune_test_header(sys/syscall.h)
  dune_test_header(termios.h)
  dune_test_header(unistd.h)
  dune_test_header(windows.h)
  dune_test_header(direct.h)
  dune_test_header(winsock2.h)
  dune_test_header(mach-o/dyld.h)
  dune_test_header(process.h)
  dune_test_header(bsp.h)
  dune_test_header(sys/param.h)
  dune_test_header(sys/mount.h)
  dune_test_header(linux/videodev2.h)
  dune_test_header(sched.h)
  dune_test_header(poll.h)
  dune_test_header(ifaddrs.h)
  dune_test_header(semaphore.h)
  dune_test_header(libintl.h)
  dune_test_header(syslog.h)
  dune_test_header(float.h)

  # A few systems/libraries have non self contained headers (notably
  # OpenBSD and RTEMS), to overcome this we perform the following
  # header tests listing headers that must be included first.
  dune_test_header_deps(sys/socket.h "sys/types.h")
  dune_test_header_deps(netinet/in.h "sys/types.h")
  dune_test_header_deps(netinet/tcp.h "sys/types.h")
  dune_test_header_deps(sys/select.h "sys/types.h")
  dune_test_header_deps(sys/sysctl.h "sys/types.h")
  dune_test_header_deps(sys/resource.h "sys/types.h")
  dune_test_header_deps(sys/mman.h "sys/types.h")
  dune_test_header_deps(net/if.h "sys/types.h;sys/socket.h")
  dune_test_header_deps(timepps.h "unistd.h")
  dune_test_header_deps(iphlpapi.h "windows.h")
  dune_test_header_deps(ws2tcpip.h "winsock2.h")
  dune_test_header_deps(ws2spi.h "winsock2.h")
endmacro(dune_probe_headers)
