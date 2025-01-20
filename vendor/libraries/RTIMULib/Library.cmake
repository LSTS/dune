
# add_subdirectory(${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib)

include_directories(${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib)
include_directories(${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib/IMUDrivers)


file(GLOB DUNE_RTIMU_CPP_FILES ${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib/*.cpp)

# message(FATAL_ERROR "DUNE_RTIMU_CPP_FILES: ${DUNE_RTIMU_CPP_FILES}")

file(GLOB DUNE_RTIMU_CPP_FILES_2 vendor/libraries/RTIMULib/RTIMULib/IMUDrivers/*.cpp)


# set_source_files_properties(${DUNE_TLSF_FILES}
# PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_RTIMU_CPP_FILES} ${DUNE_RTIMU_CPP_FILES_2})

message(WARNING "DUNE_VENDOR_FILES: ${DUNE_VENDOR_FILES}")
