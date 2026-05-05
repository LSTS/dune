//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#ifndef MANEUVER_SAMPLING_SAMPLER_FACTORY_HPP_INCLUDED_
#define MANEUVER_SAMPLING_SAMPLER_FACTORY_HPP_INCLUDED_

#include <memory>
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>
#include "DUNE/I18N.hpp"

#include "BasicSampler.hpp"
#include "RedX.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    namespace Sampler
    {
      //! Factory method for sampling type.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] maneuver sampling maneuver specification
      //! @return handle to the Sampler type.
      std::unique_ptr<BasicSampler>
      factory(DUNE::Maneuvers::Maneuver* task, const DUNE::IMC::Sampling* maneuver, float timeout = 10.0f)
      {
        if (maneuver->sampling_type == "RedX")
          return std::make_unique<RedX>(task, maneuver->sampling_args, timeout);
        else
          throw std::runtime_error(DTR("Unknown sampler type."));
      }
    }
  }
}

#endif
