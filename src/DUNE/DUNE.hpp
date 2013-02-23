//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: DUNE.hpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

#ifndef DUNE_DUNE_HPP_INCLUDED_
#define DUNE_DUNE_HPP_INCLUDED_

// DUNE module headers.
#include <DUNE/Config.hpp>
#include <DUNE/Casts.hpp>
#include <DUNE/Units.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Algorithms.hpp>
#include <DUNE/Compression.hpp>
#include <DUNE/Exceptions.hpp>
#include <DUNE/Control.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Monitors.hpp>
#include <DUNE/Network.hpp>
#include <DUNE/Streams.hpp>
#include <DUNE/System.hpp>
#include <DUNE/Utils.hpp>
#include <DUNE/Hardware.hpp>
#include <DUNE/FileSystem.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/Concurrency.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Media.hpp>
#include <DUNE/Parsers.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Database.hpp>
#include <DUNE/Daemon.hpp>
#include <DUNE/Navigation.hpp>
#include <DUNE/Status.hpp>
#include <DUNE/I18N.hpp>

//! DUNE: Uniform Navigational Environment.
namespace DUNE
{ }

//! Convenience macro to import DUNE's most commonly used namespaces
//! into global scope. Use it like this: 'using DUNE_NAMESPACES;'
#define DUNE_NAMESPACES                         \
  namespace DUNE;                               \
  using namespace DUNE::Algorithms;             \
  using namespace DUNE::Compression;            \
  using namespace DUNE::Control;                \
  using namespace DUNE::Coordinates;            \
  using namespace DUNE::Concurrency;            \
  using namespace DUNE::FileSystem;             \
  using namespace DUNE::Hardware;               \
  using namespace DUNE::Math;                   \
  using namespace DUNE::IMC;                    \
  using namespace DUNE::Monitors;               \
  using namespace DUNE::Network;                \
  using namespace DUNE::Status;                 \
  using namespace DUNE::Streams;                \
  using namespace DUNE::System;                 \
  using namespace DUNE::Tasks;                  \
  using namespace DUNE::Media;                  \
  using namespace DUNE::Parsers;                \
  using namespace DUNE::Time;                   \
  using namespace DUNE::Utils;                  \
  using namespace DUNE::Navigation

#endif
