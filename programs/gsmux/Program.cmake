add_executable(dune-gsmux programs/gsmux/gsmux.cpp)
target_link_libraries(dune-gsmux dune-core ${DUNE_SYS_LIBS})
set(DUNE_EXTRA_EXE ${DUNE_EXTRA_EXE} dune-gsmux)

add_executable(dune-gsmux-tsv programs/gsmux/gsmux-tsv.cpp)
target_link_libraries(dune-gsmux-tsv dune-core ${DUNE_SYS_LIBS})
set(DUNE_EXTRA_EXE ${DUNE_EXTRA_EXE} dune-gsmux-tsv)
