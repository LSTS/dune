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

#include <memory>
#include "MOHIDCTDGenerator.hpp"

using DUNE_NAMESPACES;
using namespace Oc;

namespace Simulators
{
  namespace CTD
  {
    MOHIDCTDGenerator::MOHIDCTDGenerator(MOHIDArguments args, 
                        double default_temp, double default_sal):
                        m_args(args),
                        CTDGenerator(default_temp, default_sal),
                        m_tree_generator(args.file_path)
    {
      m_model_time.first  = 0;
      m_model_time.second = 1;

      m_temp_model.first  = std::move(
                              m_tree_generator.getTree(
                                "temperature", m_model_time.first));
      m_temp_model.second = std::move(
                              m_tree_generator.getTree(
                                "temperature", m_model_time.second));
      m_sal_model.first   = std::move(
                              m_tree_generator.getTree(
                                "salinity", m_model_time.first));
      m_sal_model.second  = std::move(
                              m_tree_generator.getTree(
                                "salinity", m_model_time.second));
    }

    float
    MOHIDCTDGenerator::timeInterpolation(QuantityModel* model, 
                        std::array<double, 4> pos)
    {
      float lower_val = spaceInterpolation(model->first.get(), 
                          {pos[0], pos[1], pos[2]});
      float upper_val = spaceInterpolation(model->second.get(), 
                          {pos[0], pos[1], pos[2]});

      //Invalid
      if (lower_val <= c_invalid || upper_val <= c_invalid)
        return c_invalid;

      //Calculate linear parameters (value = m * time + b)
      double m = (upper_val - lower_val)/
                  (m_model_time.second - m_model_time.first);
      double b = lower_val - m * m_model_time.first;

      return m*pos[3]+b;
    }

    float
    MOHIDCTDGenerator::spaceInterpolation(OcTree* otree, 
                        std::array<double, 3> pos)
    {
      Point p(pos[0], pos[1], pos[2]);
      Bounds search_area(p, m_args.surface_radius, 
              m_args.surface_radius, m_args.depth_radius);

      std::vector<OcTree::Item> items;
      otree->search(search_area, items);
      
      if (items.size() == 0)
        return c_invalid;

      //Temperature calculated using:
      //Inverse distance weighting
      double denominator = 0;
      double numerator = 0;
      for (auto item : items)
      {
        double distance = p.distance(Point(item.x, item.y, item.z));
        if (distance == 0)
          return item.value;
        
        double inverse_d = 1/distance;
        denominator += inverse_d;
        numerator += inverse_d*item.value;
      }

      return numerator/denominator;
    }

    void
    MOHIDCTDGenerator::updateModel()
    {
      m_model_time.first  = m_model_time.second;
      m_model_time.second += 1;

      m_temp_model.first.swap(m_temp_model.second);
      m_temp_model.second = std::move(
                              m_tree_generator.getTree(
                                "temperature", m_model_time.second));

      m_sal_model.first.swap(m_sal_model.second);
      m_sal_model.second = std::move(
                              m_tree_generator.getTree(
                                "salinity", m_model_time.second));
    }

    float
    MOHIDCTDGenerator::getTemperature(std::array<double, 4> pos)
    {
      if (m_model_time.second <= pos[3])
        updateModel();

      float temp = timeInterpolation(&m_temp_model, pos);

      if (temp <= c_invalid)
        return m_default_temp;

      return temp;
    }

    float
    MOHIDCTDGenerator::getSalinity(std::array<double, 4> pos)
    {
      if (m_model_time.second <= pos[3])
        updateModel();

      float sal = timeInterpolation(&m_sal_model, pos);

      if (sal <= c_invalid)
        return m_default_sal;

      return sal;
    }
  }
}

