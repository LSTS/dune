if(DUNE_SYS_HAS_DCCL AND DUNE_SYS_HAS_PROTOBUF)
  set(DCCL_VENDOR_DIR ${PROJECT_SOURCE_DIR}/vendor/libraries/dccl)
  file(GLOB DATAMODEL_PROTOS "${DCCL_VENDOR_DIR}/Proto/*.proto")
  set(DUNE_DCCL_GENERATED_SOURCES)
  set(DUNE_DCCL_GENERATED_HEADERS)
  foreach(proto ${DATAMODEL_PROTOS})
    get_filename_component(proto_name ${proto} NAME_WE)
    set(generated_src ${DCCL_VENDOR_DIR}/${proto_name}.pb.cc)
    set(generated_hdr ${DCCL_VENDOR_DIR}/${proto_name}.pb.h)

    add_custom_command(
      OUTPUT ${generated_src} ${generated_hdr}
      COMMAND ${Protobuf_PROTOC_EXECUTABLE}
      ARGS --proto_path=${DCCL_VENDOR_DIR}/Proto --proto_path=/usr/local/include --cpp_out=${DCCL_VENDOR_DIR} ${proto}
      DEPENDS ${proto}
      COMMENT "Generating DCCL protobuf bindings for ${proto_name}"
      VERBATIM)

    list(APPEND DUNE_DCCL_GENERATED_SOURCES ${generated_src})
    list(APPEND DUNE_DCCL_GENERATED_HEADERS ${generated_hdr})
  endforeach(proto)

  set(DUNE_DCCL_CODEC_FILES
    vendor/libraries/dccl/EnumCodec.cpp
    vendor/libraries/dccl/MsgCodec.cpp
    vendor/libraries/dccl/MsgOnlyProtoCodec.cpp)

  set_source_files_properties(${DUNE_DCCL_GENERATED_SOURCES} ${DUNE_DCCL_GENERATED_HEADERS}
    PROPERTIES GENERATED TRUE)

  set_source_files_properties(${DUNE_DCCL_CODEC_FILES}
    PROPERTIES OBJECT_DEPENDS "${DUNE_DCCL_GENERATED_HEADERS}")

  set(DUNE_DCCL_FILES
    ${DUNE_DCCL_CODEC_FILES}
    ${DUNE_DCCL_GENERATED_SOURCES})

  set_source_files_properties(${DUNE_DCCL_FILES}
    PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

  list(APPEND DUNE_VENDOR_FILES ${DUNE_DCCL_FILES})

  set(DUNE_VENDOR_INCS_DIR ${DUNE_VENDOR_INCS_DIR}
    ${PROJECT_SOURCE_DIR}/vendor/libraries)

  add_definitions(-DDUNE_USING_DCCL)
endif(DUNE_SYS_HAS_DCCL AND DUNE_SYS_HAS_PROTOBUF)
