//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Tasks.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
//***************************************************************************

#ifndef DUNE_TASKS_HPP_INCLUDED_
#define DUNE_TASKS_HPP_INCLUDED_

namespace DUNE
{
  //! %Task related routines and classes.
  namespace Tasks
  { }
}

#include <DUNE/Tasks/Factory.hpp>
#include <DUNE/Tasks/Exceptions.hpp>
#include <DUNE/Tasks/Consumer.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/Tasks/Profiles.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Manager.hpp>
#include <DUNE/Tasks/AbstractConsumer.hpp>
#include <DUNE/Tasks/Recipient.hpp>
#include <DUNE/Tasks/AbstractCreator.hpp>
#include <DUNE/Tasks/ParameterTable.hpp>
#include <DUNE/Tasks/SimpleTransport.hpp>
#include <DUNE/Tasks/RateLimiters.hpp>

#endif
