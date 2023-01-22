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

#ifndef SIMULATORS_STREAM_VELOCITY_MODEL_DATA_STREAM_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_STREAM_VELOCITY_MODEL_DATA_STREAM_GENERATOR_HPP_INCLUDED_

#include <string>
#include <vector>

#include "DUNE/Parsers/HDF5Reader.hpp"
#include "DUNE/Math/Grid.hpp"

#include "StreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      // Configuration parameters for stream generators which use model data
      // stored on disk to generate the stream velocity values.
      struct ModelDataConfig
      {
        //! Path to the file containing the data.
        std::string filename;
        //! Path to the node in the file containing the velocity values in the
        //! East direction.
        std::string u_data_path;
        //! Path to the node in the file containing the velocity values in the
        //! North direction.
        std::string v_data_path;
        // TODO std::string units;
      };

      // Extra configuration parameters if the model is gridded.
      struct GriddedModelDataConfig : public ModelDataConfig
      {
        //! Path to the node in the file containing the grid parameters.
        std::string grid_path;
      };

      //! Get stream velocity values from 2D (horizontal velocities) model data
      //! on a cartesian grid.
      //! Uses the HDF5 format to load the stream values.
      class Gridded2DModelDataStreamGenerator : public StreamGenerator
      {
      public:
        //! Constructor.
        //! @param[in] config structure containing the configuration parameters
        //! for reading the data from the file.
        //! @param[in] wx default stream speed in the North direction (m/s).
        //! @param[in] wy default stream speed in the East direction (m/s).
        //! @param[in] wz default stream speed in the Down direction (m/s).
        Gridded2DModelDataStreamGenerator(GriddedModelDataConfig const& config,
                                          double wx = 0.0,
                                          double wy = 0.0,
                                          double wz = 0.0);

        ~Gridded2DModelDataStreamGenerator() = default;

        virtual std::array<double, 3>
        getVelocity(double lat,
                    double lon,
                    double depth,
                    double time = 0.0) const override;

      private:
        DUNE::Parsers::HDF5Reader m_file;
        //! Velocity in the East direction.
        std::vector<double> m_u;
        //! Velocity in the North direction.
        std::vector<double> m_v;
        //! Converts between grid indices and datapoint indices.
        DUNE::Math::Grid<3> m_grid;
      };
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators

#endif
