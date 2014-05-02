set(LCB_BASE ${PROJECT_SOURCE_DIR}/programs/lcb)

add_executable(dune-lcb ${LCB_BASE}/lcb.cpp)
target_link_libraries(dune-lcb dune-core ${DUNE_SYS_LIBS})
set(DUNE_EXTRA_EXE ${DUNE_EXTRA_EXE} dune-lcb)
