#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

function(dune_i18n_get_name file name)
  get_filename_component(locale_name "${file}" PATH)
  get_filename_component(locale_name "${locale_name}/.." ABSOLUTE)
  get_filename_component(locale_name "${locale_name}" NAME)
  set(${name} ${locale_name} PARENT_SCOPE)
endfunction(dune_i18n_get_name file)

if(DUNE_PROGRAM_MSGMERGE OR DUNE_PROGRAM_MSGFMT)
  file(GLOB_RECURSE locales "${PROJECT_SOURCE_DIR}/i18n/*.po")
endif(DUNE_PROGRAM_MSGMERGE OR DUNE_PROGRAM_MSGFMT)

# Extract entity labels from configuration files.
if(DUNE_PROGRAM_PYTHON)
  add_custom_target(i18n_texts
    COMMAND
    ${DUNE_PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/scripts/extract_entity_labels.py
    ${PROJECT_SOURCE_DIR}/etc ${PROJECT_SOURCE_DIR}/i18n/entity_labels.txt)
else(DUNE_PROGRAM_PYTHON)
  add_custom_target(i18n_texts)
endif(DUNE_PROGRAM_PYTHON)

# Extract.
if(DUNE_PROGRAM_XGETTEXT)
  file(GLOB_RECURSE headers "${PROJECT_SOURCE_DIR}/src/*.hpp")
  file(GLOB_RECURSE sources "${PROJECT_SOURCE_DIR}/src/*.cpp")
  file(GLOB_RECURSE texts   "${PROJECT_SOURCE_DIR}/i18n/*.txt")

  add_custom_target(i18n_extract
    xgettext
    --package-name=${PROJECT_SHORT_NAME}
    --package-version=${PROJECT_VERSION}
    --copyright-holder=${PROJECT_VENDOR}
    --msgid-bugs-address=dune@lsts.pt
    --foreign-user
    --language=C++
    --from-code=UTF-8
    --keyword=DTR
    --keyword=DTR_RT
    --no-wrap
    --indent
    -o dune.pot ${headers} ${sources} ${texts}
    DEPENDS i18n_texts
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/i18n)
endif(DUNE_PROGRAM_XGETTEXT)

# Merge.
if(DUNE_PROGRAM_MSGMERGE)
  add_custom_target(i18n_update)

  foreach(locale ${locales})
    dune_i18n_get_name(${locale} locale_name)

    add_custom_target(i18n_update_${locale_name}
      msgmerge
      --quiet
      --indent
      --no-wrap
      --update
      --backup=off
      --lang=${locale_name}
      ${locale} dune.pot
      WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/i18n)
    add_dependencies(i18n_update i18n_update_${locale_name})
  endforeach(locale ${locales})
endif(DUNE_PROGRAM_MSGMERGE)

# Compile.
if(DUNE_PROGRAM_MSGFMT)
  add_custom_target(i18n_compile)

  foreach(locale ${locales})
    dune_i18n_get_name(${locale} locale_name)
    get_filename_component(locale_folder ${locale} PATH)

    add_custom_target(i18n_compile_${locale_name}
      msgfmt
      --verbose
      --check
      --statistics
      ${locale}
      -o ${locale_folder}/dune.mo
      WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/i18n)
    add_dependencies(i18n_compile i18n_compile_${locale_name})
  endforeach(locale ${locales})
endif(DUNE_PROGRAM_MSGFMT)

# Install.
install(DIRECTORY i18n DESTINATION .
  PATTERN .svn EXCLUDE
  PATTERN *.pot EXCLUDE
  PATTERN *.po EXCLUDE)
