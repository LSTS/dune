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

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DUNE/I18N.hpp"
#include "DUNE/Parsers/HDF5Reader.hpp"

#include <memory>
#include <numeric>
#include "MOHIDTreeGenerator.hpp"

using DUNE_NAMESPACES;
using namespace Oc;

namespace Simulators
{
  namespace CTD
  {
    MOHIDTreeGenerator::MOHIDTreeGenerator(std::string file_path):
                                            m_file(file_path),
                                            m_invalid(pow(-10,15))
    {
      auto lat = m_file.getDataset<float>("Grid/Latitude");
      auto lon = m_file.getDataset<float>("Grid/Longitude");

      if (lat.dimensions != lon.dimensions)
        throw std::runtime_error(DTR("MOHIDTreeGenerator::MOHIDTreeGenerator():" 
                                  "lat-lon dimension mismatch."));
      
      m_cell_lat = grid2CellSurface(&lat.data, &lat.dimensions);
      m_cell_lon = grid2CellSurface(&lon.data, &lon.dimensions);
    }

    std::unique_ptr<OcTree>
    MOHIDTreeGenerator::getTree(std::string quantity, size_t time)
    {
      //Process time into string
      std::stringstream sin; sin.clear();
      sin << time + 1;
      std::string time_str = std::string(5-sin.str().size(), '0');
      time_str += sin.str();
      std::cout << sin.str();

      std::string height_path = "Grid/VerticalZ/Vertical_" + time_str;
      std::string data_path   = "Results/" + quantity + "/" + quantity + "_" + time_str;

      //Get vertical height and quantity data
      auto vert = m_file.getDataset<float>(height_path);
      auto data = m_file.getDataset<float>(data_path);
      
      //Transform vertical grid values to cell values
      auto cell_height = grid2CellVertical(&vert.data, &vert.dimensions);

      return fillTree(&data.data, &cell_height);
    }

    std::unique_ptr<OcTree>
    MOHIDTreeGenerator::fillTree(std::vector<float>* quantity, 
                                  std::vector<float>* cell_height)
    {
      if (!quantity || !cell_height)
        throw std::runtime_error(DTR("MOHIDTreeGenerator::fillTree(): " 
                                  "Null pointer."));
      
      if (quantity->size() == 0 || cell_height->size() == 0)
        throw std::runtime_error(DTR("MOHIDTreeGenerator::fillTree(): " 
                                  "Empty data vector."));

      if (quantity->size() != cell_height->size())
        throw std::runtime_error(DTR("MOHIDTreeGenerator::fillTree(): " 
                                  "data-vertical grid dimension mismatch."));
      
      //Auxiliary objects to fill otree
      std::vector<OcTree::Item> data;
      OcTree::Item item;
      Bounds* bounds = 0;

      //Set data points
      for(unsigned offset = 0; offset < quantity->size(); ++offset)
      {
        if (quantity->at(offset) > m_invalid && 
            cell_height->at(offset) > m_invalid)
        {
          item.x      = m_cell_lat[offset % m_cell_lat.size()];
          item.y      = m_cell_lon[offset % m_cell_lon.size()];
          item.z      = cell_height->at(offset);
          item.value  = quantity->at(offset);
          data.push_back(item);

          //Expand bounds
          if (!bounds)
            bounds = new Bounds(Point(item.x, item.y, item.z));
          else
            bounds->cover(Point(item.x, item.y, item.z));
        }
      }

      //Pointer to tree
      std::unique_ptr<OcTree> otree = std::make_unique<OcTree>(*bounds);
      delete bounds;
      for (unsigned i = 0; i < data.size(); ++i)
        otree->insert(data[i]);

      return otree;
    }

    std::vector<float>
    MOHIDTreeGenerator::grid2CellSurface(std::vector<float>* data, 
                                          std::vector<size_t>* dim)
    { 
      size_t dimentions_total = std::accumulate((*dim).begin(), (*dim).end(),
                                                1.0,
                                                std::multiplies<>());
      if (data->size() != dimentions_total)
        throw std::runtime_error(DTR("MOHIDTreeGenerator::grid2CellSurface(): "
                                  "dimention mismatch."));
      
      std::vector<float> cells;
      for (unsigned offset = 0; offset < data->size(); ++offset)
      {
        if ((offset+1) % dim->at(1) == 0)
          continue;
        
        if (offset >= dim->at(1) * (dim->at(0)-1))
          break; 

        auto val = data->at(offset);
        val += data->at(offset+1);
        val += data->at(offset + dim->at(1));
        val += data->at(offset + dim->at(1)+1);
        
        cells.push_back(val/4);
      }

      return cells;
    }

    std::vector<float>
    MOHIDTreeGenerator::grid2CellVertical(std::vector<float>* data, 
                                          std::vector<size_t>* dim)
    {
      size_t dimentions_total = std::accumulate((*dim).begin(), (*dim).end(),
                                      1.0,
                                      std::multiplies<>());
      if (data->size() != dimentions_total)
        throw std::runtime_error(DTR("MOHIDTreeGenerator::grid2CellVertical(): "
                                  "dimention mismatch."));

      std::vector<float> cells;
      size_t size_2d = dim->at(2) * dim->at(1);
      for (unsigned offset = 0; offset < data->size(); ++offset)
      {
        //Cutoff last layer
        if (offset >= size_2d * (dim->at(0)-1))
          break;

        auto val = data->at(offset);
        val += data->at(offset+size_2d);

        cells.push_back(val/2);
      }
      
      return cells;
    }
  }
}

