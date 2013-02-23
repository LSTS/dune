//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
