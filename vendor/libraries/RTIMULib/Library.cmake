
include_directories(${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib)
include_directories(${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib/IMUDrivers)

file(GLOB DUNE_RTIMU_CPP_FILES ${PROJECT_SOURCE_DIR}/vendor/libraries/RTIMULib/RTIMULib/*.cpp)
file(GLOB DUNE_RTIMU_CPP_DRIVERS vendor/libraries/RTIMULib/RTIMULib/IMUDrivers/*.cpp)


list(APPEND DUNE_VENDOR_FILES ${DUNE_RTIMU_CPP_FILES} ${DUNE_RTIMU_CPP_DRIVERS})
