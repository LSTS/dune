//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Memory.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/InterfaceUART.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      //! Constant baud rate.
      static const unsigned c_baud_rate = 115200;

      InterfaceUART::InterfaceUART(const std::string& dev):
        m_dev(dev),
        m_handle(NULL)
      { }

      InterfaceUART::~InterfaceUART(void)
      {
        if (m_handle != NULL)
          delete m_handle;
      }

      void
      InterfaceUART::doOpen(void)
      {
        Memory::clear(m_handle);
        m_handle = new SerialPort(m_dev, c_baud_rate);
      }

      bool
      InterfaceUART::doPoll(double timeout)
      {
        return m_handle->hasNewData(timeout) == System::IOMultiplexing::PRES_OK;
      }

      void
      InterfaceUART::doWrite(const uint8_t* data, unsigned data_size)
      {
        m_handle->write((const char*)data, data_size);
      }

      unsigned
      InterfaceUART::doRead(uint8_t* data, unsigned data_size)
      {
        return (unsigned)m_handle->read((char*)data, data_size);
      }

      void
      InterfaceUART::doFlush(void)
      {
        m_handle->flushInput();
      }
    }
  }
}
