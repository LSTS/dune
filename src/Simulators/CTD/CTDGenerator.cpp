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

#include "CTDGenerator.hpp"

namespace Simulators
{
  namespace CTD
  {
    CTDGenerator::CTDGenerator(float default_temp, float default_sal):
    m_default_temp(default_temp),
    m_default_sal(default_sal)
    {}

    float
    CTDGenerator::getTemperature(std::array<double, 4> pos)
    {
      return m_default_temp;
    }

    float
    CTDGenerator::getSalinity(std::array<double, 4> pos)
    {
      return m_default_sal;
    }

    void
    CTDGenerator::setDefaultTemperature(float temp)
    {
      m_default_temp = temp;
    }

    void
    CTDGenerator::setDefaultSalinity(float sal)
    {
      m_default_sal = sal;
    }

  }
}