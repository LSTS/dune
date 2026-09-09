if(DUNE_SYS_HAS___ARM_ARCH_7A__ OR DUNE_SYS_HAS___AARCH64__)

  if(NOT DUNE_SYS_HAS_EXIV2)
    set(TASK_ENABLED FALSE)
  endif(NOT DUNE_SYS_HAS_EXIV2)

  if(NOT DUNE_SYS_HAS_FLYCAPTURE)
    set(TASK_ENABLED FALSE)
  endif(NOT DUNE_SYS_HAS_FLYCAPTURE)

endif(DUNE_SYS_HAS___ARM_ARCH_7A__ OR DUNE_SYS_HAS___AARCH64__)

set(TASK_LICENSE "Proprietary")

# The task is split into focused translation units. DUNE invokes this hook
# after TASK_DIR is known and adds every listed source to the task library.
macro(task_files_hook)
  set(TASK_SOURCES
    ${TASK_DIR}/Task.cpp
    ${TASK_DIR}/Camera.cpp
    ${TASK_DIR}/ImageMetadata.cpp)
endmacro(task_files_hook)
