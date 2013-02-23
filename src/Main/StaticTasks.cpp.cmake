//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: StaticTasks.cpp.cmake 12667 2013-01-22 02:44:42Z rasm            $:*
//***************************************************************************
// Automatically generated                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <cstring>

// DUNE headers.
#include <DUNE/Tasks/Factory.hpp>

@STATIC_TASKS_SIGNATURES@

void
registerStaticTasks(void)
{
@STATIC_TASKS_CREATORS@
}
