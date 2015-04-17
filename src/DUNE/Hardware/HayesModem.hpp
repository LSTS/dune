//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_HAYES_MODEM_HPP_INCLUDED_
#define DUNE_HARDWARE_HAYES_MODEM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/Hardware/BasicModem.hpp>

namespace DUNE
{
  namespace Hardware
  {
    class HayesModem: public BasicModem
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      HayesModem(Tasks::Task* task, IO::Handle* handle);

      //! Destructor.
      virtual
      ~HayesModem(void)
      { }

      void
      initialize(void);

      std::string
      getManufacturer(void);

      //! Query the ISU model.
      //! @return ISU model name.
      std::string
      getModel(void);

      //! Query the ISU revision.
      //! @return ISU revision.
      std::string
      getRevision(void);

      //! Query the ISU serial number (IMEI).
      //! @return ISU serial number (IMEI),
      std::string
      getIMEI(void);

      //! Retrieve received signal strength indication (RSSI).
      //! @return RSSI value.
      float
      getRSSI(void);

    protected:
      virtual void
      sendInitialization(void)
      { }

      virtual void
      sendReset(void)
      { }

      virtual void
      queryRSSI(void)
      { }

      virtual void
      expectOK(void);

      void
      sendAT(const std::string& str);

      void
      sendRaw(const uint8_t* data, unsigned data_size);

      void
      expect(const std::string& str);

      void
      expectREADY(void);

      void
      setRSSI(float value);

      //! Enable or disable RTS/CTS flow control.
      //! @param[in] value true to enable flow control, false otherwise.
      void
      setFlowControl(bool value);

      //! Enable or disable the ISU to echo characters to the DTE.
      //! @param[in] value true to enable, false to disable.
      void
      setEcho(bool value);

      std::string
      readValue(const std::string& cmd);

    private:
      //! Last RSSI value.
      IMC::RSSI m_rssi;
    };
  }
}

#endif
