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

include(CheckCXXSourceCompiles)

macro(dune_test_cpu cpu bits endianess macro header)
  string(TOUPPER ${macro} output)
  string(TOUPPER ${cpu} ucpu)
  string(TOLOWER ${cpu} lcpu)

  set(gbits ${bits})

  if(NOT DUNE_CPU)
    set(output "DUNE_SYS_HAS_${output}")

    check_cxx_source_compiles("#if !defined(${macro})\n#error undefined macro\n#endif\nint main(void){return 0;}" ${output})

    if(${output})
      check_cxx_source_compiles("#if defined(__arch64__)\n#else\n#error not defined\n#endif\nint main(void) {return 0; }\n" __ARCH64__)
      if(__ARCH64__)
        set(gbits 64)
      endif(__ARCH64__)

      set(DUNE_CPU 1)
      set(DUNE_CPU_${ucpu} 1)
      set(DUNE_CPU_${gbits}B 1)

      set(DUNE_CPU_NAME "${cpu}")
      set(DUNE_CPU_CANONICAL "${lcpu}")
      set(DUNE_CPU_UCASE "${ucpu}")
      set(DUNE_CPU_BITS "${gbits}")

      if(${endianess} STREQUAL "big")
        set(DUNE_CPU_BIG_ENDIAN 1)
        set(DUNE_CPU_ENDIANNESS "Big Endian")
      elseif(${endianess} STREQUAL "little")
        set(DUNE_CPU_LITTLE_ENDIAN 1)
        set(DUNE_CPU_ENDIANNESS "Little Endian")
      endif(${endianess} STREQUAL "big")
    endif(${output})
  endif(NOT DUNE_CPU)
endmacro(dune_test_cpu cpu bits macro header)

macro(dune_probe_cpu)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***        Probing Target CPU          ***")
  message(STATUS "******************************************")

  dune_test_cpu(x86      64     little   __amd64__        cstdio)
  dune_test_cpu(x86      64     little   __amd64          cstdio)
  dune_test_cpu(x86      64     little   _AMD64_          windows.h)
  dune_test_cpu(x86      64     little   __x86_64__       cstdio)
  dune_test_cpu(x86      64     little   __x86_64         cstdio)
  dune_test_cpu(x86      64     little   _M_X64           windows.h)
  dune_test_cpu(x86      32     little   __i386__         cstdio)
  dune_test_cpu(x86      32     little   __i386           cstdio)
  dune_test_cpu(x86      32     little   _M_IX86          windows.h)
  dune_test_cpu(x86      32     little   __x86_32__       cstdio)
  dune_test_cpu(PowerPC  64     big      __powerpc64__    cstdio)
  dune_test_cpu(PowerPC  32     big      __powerpc__      cstdio)
  dune_test_cpu(PowerPC  32     big      __ppc__          cstdio)
  dune_test_cpu(PowerPC  32     big      PPC              cstdio)
  dune_test_cpu(Alpha    32     big      __alpha__        cstdio)
  dune_test_cpu(ARMv4    32     unknown   __ARM_ARCH_4T__ cstdio)
  dune_test_cpu(ARMv5    32     unknown   __ARM_ARCH_5T__ cstdio)
  dune_test_cpu(ARMv7    32     unknown   __ARM_ARCH_7A__ cstdio)
  dune_test_cpu(ARM      32     unknown  __arm__          cstdio)
  dune_test_cpu(SPARC    32     big      __sparc__        cstdio)
  dune_test_cpu(SPARCv9  64     big      __sparcv9        cstdio)
  dune_test_cpu(SPARCv8  32     big      __sparcv8        cstdio)
  dune_test_cpu(MIPSEL   32     little   __MIPSEL__       cstdio)
  dune_test_cpu(MIPSEB   32     big      __MIPSEB__       cstdio)
  dune_test_cpu(AVR32    32     big      __avr32__        cstdio)

  # Unknown architecture
  if(NOT DUNE_CPU)
    set(DUNE_CPU_NAME "Unknown")
    set(DUNE_CPU_UNKNOWN 1)
  endif(NOT DUNE_CPU)

  # If we still don't know the architecture endianness we try macro tests.
  if(NOT DUNE_CPU_LITTLE_ENDIAN AND NOT DUNE_CPU_BIG_ENDIAN)
    check_cxx_source_compiles("
#include <sys/types.h>
#include <sys/param.h>

#ifdef __BYTE_ORDER
#  if (__BYTE_ORDER == __BIG_ENDIAN) || defined(_BIG_ENDIAN)
int main(void) { return 0; }
#  endif
#endif
" DUNE_CPU_BIG_ENDIAN)

    check_cxx_source_compiles("
#include <sys/types.h>
#include <sys/param.h>

#ifdef __BYTE_ORDER
#  if __BYTE_ORDER == __LITTLE_ENDIAN
int main(void) { return 0; }
#  endif
#endif
" DUNE_CPU_LITTLE_ENDIAN)

    check_cxx_source_compiles("#if !defined(__ARMEL__)\n#error no __ARMEL__\n#endif\nint main(void) {return 0;}\n" armel)
    if(armel)
      set(DUNE_CPU_LITTLE_ENDIAN 1)
    endif(armel)

    check_cxx_source_compiles("#if !defined(__ARMEB__)\n#error no __ARMEB__\n#endif\nint main(void) {return 0;}\n" armeb)
    if(armeb)
      set(DUNE_CPU_BIG_ENDIAN 1)
    endif(armeb)

  endif(NOT DUNE_CPU_LITTLE_ENDIAN AND NOT DUNE_CPU_BIG_ENDIAN)

  if(DUNE_CPU_LITTLE_ENDIAN)
    set(DUNE_CPU_ENDIANNESS "Little Endian")
  elseif(DUNE_CPU_BIG_ENDIAN)
    set(DUNE_CPU_ENDIANNESS "Big Endian")
  else(DUNE_CPU_BIG_ENDIAN)
    message(FATAL_ERROR "Unable to find CPU endianness.")
  endif(DUNE_CPU_LITTLE_ENDIAN)

  # ARM Floating Point Unit
  if(DUNE_CXX_GNU)
    check_cxx_source_compiles("
#if !defined(__arm__)
#  error not ARM architecture
#endif

#if defined(__VFP_FP__)
#  error normal doubles.
#endif

int main(void) { return 0; }
" DUNE_CPU_MIXED_ENDIAN_DOUBLES)
    if(DUNE_CPU_MIXED_ENDIAN_DOUBLES)
      set(DUNE_CPU_ENDIANESS "${DUNE_CPU_ENDIANNESS} / Mixed Endian Doubles")
    endif(DUNE_CPU_MIXED_ENDIAN_DOUBLES)
  endif(DUNE_CXX_GNU)
endmacro(dune_probe_cpu)

macro(dune_test_cpu_variant macro name)
  string(TOUPPER ${name} upper)

  if(NOT DUNE_CPU_VARIANT)
    set(output "DUNE_CPU_VARIANT_${upper}")

    check_cxx_source_compiles("#if !defined(${macro})\n#error undefined macro\n#endif\nint main(void){return 0;}" ${output})

    if(${output})
      set(DUNE_CPU_VARIANT "${name}")
      set(DUNE_CPU_VARIANT_UCASE "${upper}")
    endif(${output})
  endif(NOT DUNE_CPU_VARIANT)
endmacro(dune_test_cpu_variant macro name)

macro(dune_probe_cpu_variant)
  message(STATUS "")
  message(STATUS "******************************************")
  message(STATUS "***  Probing Target CPU Optimizations  ***")
  message(STATUS "******************************************")

  if(DUNE_CPU_X86)
    dune_test_cpu_variant("__atom__" "atom")
    dune_test_cpu_variant("__geode__" "geode")
  endif(DUNE_CPU_X86)

  if(NOT DUNE_CPU_VARIANT)
    set(DUNE_CPU_VARIANT "${DUNE_CPU_CANONICAL}")
    set(DUNE_CPU_VARIANT_UCASE "${DUNE_CPU_UCASE}")
  endif(NOT DUNE_CPU_VARIANT)
endmacro(dune_probe_cpu_variant)
