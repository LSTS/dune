#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

include(CheckCXXSourceCompiles)

macro(dune_test_TYPE type headers)
  set(program "")

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
  set(program "${program}\nint main(void) { ${type} x; return 0;}\n")

  string(REPLACE "." "_" output "DUNE_SYS_HAS_${type}")
  string(REPLACE "/" "_" output ${output})
  string(REPLACE "-" "_" output ${output})
  string(REPLACE " " "_" output ${output})
  string(REPLACE "::" "_" output ${output})
  string(REGEX REPLACE "<.*>" "" output ${output})
  string(TOUPPER ${output} output)

  # Compile.
  if(NOT ${output})
    check_cxx_source_compiles("${program}" ${output})
  endif(NOT ${output})

  if(${output})
    set(DUNE_SYS_TYPES "${DUNE_SYS_TYPES}#define ${output}\n")
  else(${output})
    set(DUNE_SYS_TYPES "${DUNE_SYS_TYPES}//#undef ${output}\n")
  endif(${output})
endmacro(dune_test_TYPE)

macro(dune_probe_types)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***            Probing Types           ***")
  message(STATUS "******************************************")

  dune_test_type("struct timespec" "time.h;pthread.h")
  dune_test_type("struct timeval" "sys/time.h;winsock2.h")
  dune_test_type("struct termios" "termios.h")
  dune_test_type("struct stat" "sys/stat.h;sys/types.h")
  dune_test_type("struct flock" "fcntl.h")
  dune_test_type("CRITICAL_SECTION" "windows.h")
  dune_test_type("std::tr1::shared_ptr<int>" "memory;tr1/memory")
endmacro(dune_probe_types)
