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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef BRIDGES_PMC_RS485_HPP
#define BRIDGES_PMC_RS485_HPP

#include <DUNE/DUNE.hpp>

class RS485: public DUNE::Hardware::SerialPort
{
public:
  RS485(const std::string& dev, unsigned rts_gpio_nr, unsigned cts_gpio_nr, unsigned baud):
    DUNE::Hardware::SerialPort(dev, baud, SerialPort::SP_PARITY_NONE, SerialPort::SP_STOPBITS_1, SerialPort::SP_DATABITS_8, true)
  {
    m_rts = new DUNE::Hardware::GPIO(rts_gpio_nr);
    m_rts->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    m_rts->setValue(false);

    m_cts = new DUNE::Hardware::GPIO(cts_gpio_nr);
    m_cts->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    m_cts->setValue(false);
  }

  ~RS485(void)
  {
    delete m_rts;
    delete m_cts;
  }

  void
  doBeforeWrite(void)
  {
    m_rts->setValue(true);
    m_cts->setValue(true);
  }

  void
  doAfterWrite(void)
  {
    drain();
    m_rts->setValue(false);
    m_cts->setValue(false);
  }

  void
  doBeforeRead(void)
  {
    m_rts->setValue(false);
    m_cts->setValue(false);
  }

private:
  //! RTS GPIO.
  DUNE::Hardware::GPIO* m_rts;
  //! CTS GPIO.
  DUNE::Hardware::GPIO* m_cts;
};



#endif
