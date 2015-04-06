//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef MAIN_MEMORY_HPP_INCLUDED_
#define MAIN_MEMORY_HPP_INCLUDED_

#if defined(DUNE_USING_TLSF) && defined(DUNE_CLIB_GNU)
#  include <malloc.h>
#  include <tlsf/tlsf.h>

#  if !defined(DUNE_MEMORY_SIZE)
#    define DUNE_MEMORY_SIZE (16 * 1024 * 1024)
#  endif

static const unsigned c_memory_size = DUNE_MEMORY_SIZE;
static char c_memory[c_memory_size];

static void*
tlsf_malloc_hook(size_t s, const void* c)
{
  return tlsf_malloc(s);
}

static void
tlsf_free_hook(void* p, const void* c)
{
  tlsf_free(p);
}

static void*
tlsf_realloc_hook(void* p, size_t s, const void* c)
{
  return tlsf_realloc(p, s);
}

static void
tlsf_init_hook(void)
{
  init_memory_pool(c_memory_size, c_memory);
  __malloc_hook = tlsf_malloc_hook;
  __free_hook = tlsf_free_hook;
  __realloc_hook = tlsf_realloc_hook;
}

// Override initializing hook from the C library.
#  if (__GLIBC__ == 2) && (__GLIBC_MINOR__ >= 15)
void(*volatile __malloc_initialize_hook) (void) = tlsf_init_hook;
#  else
void (* __malloc_initialize_hook)(void) = tlsf_init_hook;
#  endif

#endif

#endif
