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

#ifndef SIMULATORS_MOHID_CTD_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_MOHID_CTD_GENERATOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DUNE/Algorithms/Trees/OcTree.hpp"

#include <memory>
#include "MOHIDTreeGenerator.hpp"
#include "CTDGenerator.hpp"

using DUNE_NAMESPACES;
using namespace Trees;

namespace Simulators
{
  namespace CTD
  {
    //! Arguments for MOHID model generator
    struct MOHIDArguments
    {
      //! Path to data file.
      std::string file_path;
      //! Interpolation radius for latitude and longitude
      //! in degrees.
      double surface_radius;
      //! Interpolation radius for depth in meters.
      double depth_radius;
    };

    class MOHIDCTDGenerator : public CTDGenerator
    {
      public:
      //! Constructor.
      //! @param[in] args Arguments for MOHID generator.
      //! @param[in] default_temp Default temperature value.
      //! @param[in] default_sal Default salinity value.
      MOHIDCTDGenerator(MOHIDArguments args, 
        double default_temp, double default_sal);

      //! Destructor.
      ~MOHIDCTDGenerator() = default;

      virtual float
      getTemperature(std::array<double, 4> pos);

      virtual float
      getSalinity(std::array<double, 4> pos);

      private:
      //! Arguments for MIHID model generator.
      MOHIDArguments m_args;
      //! Constante value for invalid comparison.
      const float m_invalid;
      //! Tree generator for MOHID model data.
      MOHIDTreeGenerator m_tree_generator;
      //! Current loaded data times, in decimal hours.
      std::pair<size_t, size_t> m_model_time;

      typedef std::pair<std::unique_ptr<OcTree>, 
                        std::unique_ptr<OcTree>> QuantityModel;
      //! Current loaded temperature model.
      QuantityModel m_temp_model;
      //! Current loaded salinity model.
      QuantityModel m_sal_model;

      //! Interpolate values of temperature in time, between 2
      //! loaded datasets.
      //! @param[in] model Model to interpolate.
      //! @param[in] pos 4-dimensional array of vehicle position
      //! and time. 
      //! @return time interpolated value.
      float
      timeInterpolation(QuantityModel* model, std::array<double, 4> pos);

      //! Interpolate values of temperature in space.
      //! @param[in] otree Tree to interpolate.
      //! @param[in] pos 3-dimensional array of vehicle position.
      //! @return position interpolated value.
      float
      spaceInterpolation(OcTree* otree, std::array<double, 3> pos);

      //! Load dataset for next time frame.
      void
      updateModel();
    };
  }
}

#endif