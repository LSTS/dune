//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef BRIDGES_PMC_BME280_HPP
#define BRIDGES_PMC_BME280_HPP

#include "bme280-calibration.hpp"
#include "bme280-driver.hpp"

class BME280
{
public:
  BME280(const std::string& dev, unsigned addr):
    m_driver(NULL)
  {
    try
    {
      m_driver = new BME280Driver(dev, addr);
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "exception: " << e.what() << std::endl;
    }
  }

  ~BME280(void)
  {
    DUNE::Memory::clear(m_driver);
  }

  void
  read(float& temperature, double& pressure, float& humidity)
  {
    if (m_driver != NULL)
    {
      m_driver->configure();
      m_driver->readRaw(temperature, pressure, humidity);
    }
  }
private:
  BME280Driver* m_driver;
};

#endif
