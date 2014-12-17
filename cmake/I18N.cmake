############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

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
    ${PROJECT_SOURCE_DIR}/programs/scripts/dune-extract-elabels.py
    ${PROJECT_SOURCE_DIR}/etc ${PROJECT_SOURCE_DIR}/i18n/entity_labels.txt)
else(DUNE_PROGRAM_PYTHON)
  add_custom_target(i18n_texts)
endif(DUNE_PROGRAM_PYTHON)

# Extract.
if(DUNE_PROGRAM_XGETTEXT)
  file(GLOB_RECURSE headers "${PROJECT_SOURCE_DIR}/src/*.hpp")
  file(GLOB_RECURSE sources "${PROJECT_SOURCE_DIR}/src/*.cpp")
  file(GLOB_RECURSE private_headers "${PROJECT_SOURCE_DIR}/private/src/*.hpp")
  file(GLOB_RECURSE private_sources "${PROJECT_SOURCE_DIR}/private/src/*.cpp")
  file(GLOB_RECURSE user_headers "${PROJECT_SOURCE_DIR}/user/src/*.hpp")
  file(GLOB_RECURSE user_sources "${PROJECT_SOURCE_DIR}/user/src/*.cpp")
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
    -o dune.pot ${headers} ${sources} ${private_headers} ${private_sources} ${user_headers} ${user_sources} ${texts}
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
  add_custom_target(i18n_compile ALL)

  foreach(locale ${locales})
    dune_i18n_get_name(${locale} locale_name)
    set(mo_folder "${DUNE_GENERATED}/i18n/${locale_name}/LC_MESSAGES")
    file(MAKE_DIRECTORY ${mo_folder})

    add_custom_target(i18n_compile_${locale_name}
      msgfmt
      --verbose
      --check
      --statistics
      ${locale}
      -o ${mo_folder}/dune.mo
      WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/i18n)
    add_dependencies(i18n_compile i18n_compile_${locale_name})
  endforeach(locale ${locales})

  # Install.
  install(DIRECTORY ${DUNE_GENERATED}/i18n DESTINATION .
    PATTERN .svn EXCLUDE
    PATTERN *.pot EXCLUDE
    PATTERN *.po EXCLUDE)
endif(DUNE_PROGRAM_MSGFMT)
