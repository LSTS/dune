//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_DUNE_HPP_INCLUDED_
#define DUNE_DUNE_HPP_INCLUDED_

// DUNE module headers.
#include <DUNE/Config.hpp>
#include <DUNE/Version.hpp>
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
#include <DUNE/Entities.hpp>
#include <DUNE/Concurrency.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Media.hpp>
#include <DUNE/Parsers.hpp>
#include <DUNE/Plans.hpp>
#include <DUNE/Power.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Database.hpp>
#include <DUNE/Daemon.hpp>
#include <DUNE/Navigation.hpp>
#include <DUNE/Status.hpp>
#include <DUNE/I18N.hpp>
#include <DUNE/IO.hpp>

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
  using namespace DUNE::Plans;                  \
  using namespace DUNE::Power;                  \
  using namespace DUNE::Time;                   \
  using namespace DUNE::Utils;                  \
  using namespace DUNE::Navigation;             \
  using namespace DUNE::IO

#endif
