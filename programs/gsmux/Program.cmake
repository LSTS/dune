add_executable(dune-gsmux programs/gsmux/gsmux.cpp)
target_link_libraries(dune-gsmux dune-core ${DUNE_SYS_LIBS})
set(DUNE_EXTRA_EXE ${DUNE_EXTRA_EXE} dune-gsmux)
