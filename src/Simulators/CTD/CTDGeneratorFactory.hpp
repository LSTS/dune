//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef SIMULATORS_CTD_CTD_GENERATOR_FACTORY_HPP_INCLUDED_
#define SIMULATORS_CTD_CTD_GENERATOR_FACTORY_HPP_INCLUDED_

#include <memory>

#include "DUNE/I18N.hpp"

#include "MOHIDCTDGenerator.hpp"
#include "CTDGenerator.hpp"

namespace Simulators
{
  namespace CTD
  {
    //! Factory method for the CTD model generator.
    //! @param[in] config structure with configuration fields.
    //! @return handle to CTD model generator.
    template<typename Configuration>
    std::unique_ptr<CTDGenerator>
    factory(Configuration const& config)
    {
      if (config.type == "Constant")
        return std::make_unique<CTDGenerator>(
                config.default_temp, config.default_sal);
      if (config.type == "MOHID Model Data")
      {
        MOHIDArguments mohid_args;
        mohid_args.file_path = config.file_path;

        mohid_args.surface_radius = config.surface_radius;
        mohid_args.depth_radius = config.depth_radius;

        return std::make_unique<MOHIDCTDGenerator>(
                mohid_args, config.default_temp, config.default_sal);
      }
      else
        throw std::runtime_error(DTR("Unknown stream velocity source type."));
    }
  }
}

#endif