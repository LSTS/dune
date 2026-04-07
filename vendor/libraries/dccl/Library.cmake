if(DUNE_SYS_HAS_DCCL AND DUNE_SYS_HAS_PROTOBUF)
  set(DCCL_VENDOR_DIR ${PROJECT_SOURCE_DIR}/vendor/libraries/dccl)
  file(TO_NATIVE_PATH ${DCCL_VENDOR_DIR}/Proto PROTOMODEL_PATH)
  file(TO_NATIVE_PATH ${DCCL_VENDOR_DIR} PROTOBINDING_PATH)
  file(GLOB DATAMODEL_PROTOS "${DCCL_VENDOR_DIR}/Proto/*.proto")
  foreach(proto ${DATAMODEL_PROTOS})
    file(TO_NATIVE_PATH ${proto} proto_native)
    execute_process(COMMAND ${Protobuf_PROTOC_EXECUTABLE} --proto_path=${PROTOMODEL_PATH} --proto_path=/usr/local/include --cpp_out=${PROTOBINDING_PATH} ${proto_native} RESULT_VARIABLE rv)
    if(${rv})
      message(SEND_ERROR "Generation of data model returned ${rv} for proto ${proto_native}")
    endif()
  endforeach(proto)

  set(DUNE_DCCL_FILES
    vendor/libraries/dccl/EnumCodec.cpp
    vendor/libraries/dccl/IMC_DCCL.pb.cc
    vendor/libraries/dccl/MsgCodec.cpp
    vendor/libraries/dccl/MsgOnlyProtoCodec.cpp)

  set_source_files_properties(${DUNE_DCCL_FILES}
    PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

  list(APPEND DUNE_VENDOR_FILES ${DUNE_DCCL_FILES})

  set(DUNE_VENDOR_INCS_DIR ${DUNE_VENDOR_INCS_DIR}
    ${PROJECT_SOURCE_DIR}/vendor/libraries)
endif(DUNE_SYS_HAS_DCCL AND DUNE_SYS_HAS_PROTOBUF)
