//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Hardware/Exceptions.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Hardware/HayesModem.hpp>

namespace DUNE
{
  namespace Hardware
  {
    //! Maximum number of revision lines.
    static const unsigned c_max_rev_lines = 10;

    HayesModem::HayesModem(Tasks::Task* task, IO::Handle* handle):
      BasicModem(task, handle)
    {
      m_rssi.setDestination(getTask()->getSystemId());
      m_rssi.setDestinationEntity(getTask()->getEntityId());
    }

    //! Perform ISU initialization, this function must be called
    //! before any other.
    void
    HayesModem::initialize(void)
    {
      // Reset and flush pending input.
      sendReset();
      Time::Delay::wait(2.0);
      m_handle->flushInput();

      // Perform initialization.
      setReadMode(READ_MODE_LINE);
      start();
      sendInitialization();
    }

    //! Query the ISU manufacturer.
    //! @return ISU manufacturer name.
    std::string
    HayesModem::getManufacturer(void)
    {
      return readValue("+CGMI");
    }

    //! Query the ISU model.
    //! @return ISU model name.
    std::string
    HayesModem::getModel(void)
    {
      return readValue("+CGMM");
    }

    //! Query the ISU revision.
    //! @return ISU revision.
    std::string
    HayesModem::getRevision(void)
    {
      sendAT("+CGMR");
      std::vector<std::string> rev;

      for (unsigned i = 0; i < c_max_rev_lines; ++i)
      {
        std::string line = readLine();
        if (line == "OK")
          break;
        rev.push_back(line);
      }

      return Utils::String::join(rev.begin(), rev.end(), " / ");
    }

    //! Query the ISU serial number (IMEI).
    //! @return ISU serial number (IMEI),
    std::string
    HayesModem::getIMEI(void)
    {
      return readValue("+CGSN");
    }

    //! Retrieve received signal strength indication (RSSI).
    //! @return RSSI value.
    float
    HayesModem::getRSSI(void)
    {
      queryRSSI();

      Concurrency::ScopedMutex l(m_mutex);
      return (unsigned)m_rssi.value;
    }

    void
    HayesModem::setRSSI(float value)
    {
      Concurrency::ScopedMutex l(m_mutex);
      m_rssi.value = (int)value;
      getTask()->dispatch(m_rssi);
    }

    //! Enable or disable RTS/CTS flow control.
    //! @param[in] value true to enable flow control, false otherwise.
    void
    HayesModem::setFlowControl(bool value)
    {
      if (value)
        sendAT("&K3");
      else
        sendAT("&K0");

      expectOK();
    }

    //! Enable or disable the ISU to echo characters to the DTE.
    //! @param[in] value true to enable, false to disable.
    void
    HayesModem::setEcho(bool value)
    {
      sendAT(value ? "E1" : "E0");
      expectOK();
    }

    std::string
    HayesModem::readValue(const std::string& cmd)
    {
      sendAT(cmd);
      std::string str = readLine();
      expectOK();
      return str;
    }

    std::string
    HayesModem::readValue(const std::string& cmd, const std::string& rly, const double tmt)
    {
      sendAT(cmd);
      std::string str = waitForReply(rly, tmt);
      expectOK();
      return str;
    }

    std::string
    HayesModem::waitForReply(const std::string& rly, const double tmt)
    {
      Time::Counter<double> timer(tmt);
      std::string str;

      do
      {
        str = readLine(timer);

        if (Utils::String::startsWith(str, rly))
          return str;
      }
      while(!timer.overflow());

      if (str.empty())
        throw ReadTimeout();
      else
        throw UnexpectedReply(rly, str);
    }

    void
    HayesModem::sendAT(const std::string& str)
    {
      std::string cmd("AT");
      cmd.append(str);
      m_last_cmd = cmd;
      cmd.append(getLineTermOut());

      send(cmd);
    }

    void
    HayesModem::sendRaw(const uint8_t* data, unsigned data_size)
    {
      m_handle->write(data, data_size);
    }

    void
    HayesModem::expect(const std::string& str, const bool persistent)
    {
      Time::Counter<double> timer(getTimeout());

      do
      {
        std::string rv = readLine(timer);
        if (rv == str)
          return;
        else if (!persistent || isErrorReply(rv))
          throw UnexpectedReply(str, rv);
      }
      while (!timer.overflow());
      
      getTask()->war("[BasicModem]:timeout while reading line");
      throw ReadTimeout();
    }

    void
    HayesModem::expectOK(void)
    {
      expect("OK");
    }

    void
    HayesModem::expectREADY(void)
    {
      expect("READY");
    }

    bool
    HayesModem::isErrorReply(const std::string& str)
    {
      return m_error_replies.find(str) != m_error_replies.end();
    }

    void
    HayesModem::addErrorReply(const std::string& str)
    {
      m_error_replies.insert(str);
    }
  }
}
