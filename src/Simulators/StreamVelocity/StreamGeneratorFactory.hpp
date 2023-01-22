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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#ifndef SIMULATORS_STREAM_VELOCITY_STREAM_GENERATOR_FACTORY_HPP_INCLUDED_
#define SIMULATORS_STREAM_VELOCITY_STREAM_GENERATOR_FACTORY_HPP_INCLUDED_

#include <memory>

#include "DUNE/I18N.hpp"

#include "ModelDataStreamGenerator.hpp"
#include "StreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      //! Factory method for the stream velocity source.
      //! @param[in] config structure with configuration fields
      //! @return handle to the stream velocity source.
      template<typename Configuration>
      std::unique_ptr<StreamGenerator>
      factory(Configuration const& config)
      {
        if (config.type == "Constant")
          return std::make_unique<StreamGenerator>(
              config.default_wx, config.default_wy, config.default_wz);
        if (config.type == "Gridded 2D Model Data")
        {
          GriddedModelDataConfig mdcfg;
          mdcfg.filename = config.filename;
          // Path to the dataset in the file containing the velocity values in
          // the East direction, given in m/s as u = u(Lat, Lon, Time).
          mdcfg.u_data_path = "u";
          // Path to the dataset in the file containing the velocity values in
          // the North direction, given in m/s as v = v(Lat, Lon, Time).
          mdcfg.v_data_path = "v";
          //! Path to the node in the file containing the grid data.
          //! This node should include the following child nodes:
          //!   min - array with the lower grid limits.
          //!   max - array with the upper grid limits.
          //!   npts - array with the number of points in each dimension.
          mdcfg.grid_path = "grid";

          return std::make_unique<Gridded2DModelDataStreamGenerator>(
              mdcfg, config.default_wx, config.default_wy, config.default_wz);
        }
        else
          throw std::runtime_error(DTR("Unknown stream velocity source type."));
      }
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators

#endif
