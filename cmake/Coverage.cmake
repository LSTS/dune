############################################################################
# Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             #
############################################################################
# This file is subject to the terms and conditions defined in file         #
# 'LICENCE.md', which is part of this source code package.                 #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

if(COVERAGE)
  # Check for valid compiler.
  if(NOT CMAKE_COMPILER_IS_GNUCXX)
    message(FATAL_ERROR "Code coverage requires the GNU C++ Compiler")
  endif()

  # Find gcov.
  find_program(GCOV_PATH gcov)
  if(NOT GCOV_PATH)
    message(FATAL_ERROR "Failed to find gcov")
  endif()

  # Find lcov.
  find_program(LCOV_PATH lcov)
  if(NOT LCOV_PATH)
    message(FATAL_ERROR "Failed to find lcov")
  endif()

  # Find genhtml.
  find_program(GENHTML_PATH genhtml)
  if(NOT GENHTML_PATH)
    message(FATAL_ERROR "Failed to find genhtml")
  endif()

  # Compiler flags.
  set(_cxx_flags "--coverage -ftest-coverage -fprofile-arcs")
  set(DUNE_CXX_FLAGS "${DUNE_CXX_FLAGS} -O0 ${_cxx_flags}")
  set(DUNE_SYS_LIBS ${DUNE_SYS_LIBS} "${_cxx_flags}")

  # Only dune-core for now.
  set(_folder "CMakeFiles/dune-core.dir")

  # Setup target
  add_custom_target(coverage
    # Run baseline lcov.
    ${LCOV_PATH} --capture --initial --directory "${_folder}" --output-file lcov_base.info

    # Cleanup lcov.
    COMMAND ${LCOV_PATH} --directory . --zerocounters

    # Run tests.
    COMMAND ctest

    # Capture lcov counters.
    COMMAND ${LCOV_PATH}
    --capture
    --directory .
    --output-file lcov_test.info

    COMMAND ${LCOV_PATH}
    --add-tracefile lcov_base.info
    --add-tracefile lcov_test.info --output-file lcov_all.info

    COMMAND ${LCOV_PATH}
    --remove lcov_all.info '${DUNE_GENERATED}/*' '*/tests/*' '/usr/*'
    --output-file lcov.info

    # Generate report.
    COMMAND ${GENHTML_PATH} --demangle-cpp -o coverage lcov.info
    COMMAND ${CMAKE_COMMAND} -E remove lcov_base.info lcov_test.info lcov_all.info lcov.info

    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

  add_custom_command(TARGET coverage POST_BUILD
    COMMAND ;
    COMMENT "Coverage file://${CMAKE_BINARY_DIR}/coverage/index.html"
    )
endif()