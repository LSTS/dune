//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONTROL_HPP_INCLUDED_
#define DUNE_CONTROL_HPP_INCLUDED_

namespace DUNE
{
  //! %Control related routines and classes.
  namespace Control
  { }
}

#include <DUNE/Control/PathController.hpp>
#include <DUNE/Control/BasicRemoteOperation.hpp>
#include <DUNE/Control/BasicAutopilot.hpp>
#include <DUNE/Control/BottomTracker.hpp>
#include <DUNE/Control/DiscretePID.hpp>
#include <DUNE/Control/YoYoMotion.hpp>
#include <DUNE/Control/AUVModel.hpp>
#include <DUNE/Control/LinearSystem.hpp>

#endif
