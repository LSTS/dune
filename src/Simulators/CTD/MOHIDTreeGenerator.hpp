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

#ifndef SIMULATORS_MOHID_TREE_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_MOHID_TREE_GENERATOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <memory>
#include <algorithm>
#include "DUNE/Parsers/HDF5Reader.hpp"

using DUNE_NAMESPACES;

// OcTree specific namespace
using namespace Oc;

namespace Simulators
{
  namespace CTD
  {
    class MOHIDTreeGenerator
    {
      public:
        //! Constructor.
        //! @param[in] file_path Path to MOHID data file.
        MOHIDTreeGenerator(std::string file_path);

        //! Destructor.
        ~MOHIDTreeGenerator() = default;

        //! Get tree for specified time.
        //! @param[in] quatity Name of quantity to load from
        //! MOHID data file.
        //! @return unique pointer to data tree.
        std::unique_ptr<OcTree>
        getTree(std::string quantity, size_t time);

      private:
        //! Handler of HDF5 interface.
        HDF5Reader m_file;
        //! Latitude of cells in row-major order.
        std::vector<float> m_cell_lat;
        //! Longitude of cells in row-major order.
        std::vector<float> m_cell_lon;
        //! Constante value for invalid comparison.
        const float m_invalid;

        //! Fill data tree from file data.
        //! @param[in] data Pointer to cell data, 
        //! in row-major order.
        //! @param[in] vert Pointer to cell depth 
        //! values, in row-major order.
        //! @return Unique poitner to data tree.
        std::unique_ptr<OcTree>
        fillTree(std::vector<float>* data, 
                  std::vector<float>* vert);

        //! Average latitude and longitude grid
        //! values to cell values.
        //! @param[in] data Latitude or Longitude grid to,
        //! convert in row-major order.
        //! @param[in] dim Data dimensions.
        //! @return Converted cell values in row-major order.
        std::vector<float>
        grid2CellSurface(std::vector<float>* data, 
                          std::vector<size_t>* dim);

        //! Average depth grid values to cell values.
        //! @param[in] data Depth grid to convert,
        //! in row-major order.
        //! @param[in] dim Data dimensions.
        //! @return Converted cell values in row-major order.
        std::vector<float>
        grid2CellVertical(std::vector<float>* data, 
                          std::vector<size_t>* dim);
    };
  }
}

#endif