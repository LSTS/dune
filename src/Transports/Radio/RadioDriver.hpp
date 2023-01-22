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
// Author: João Teixeira                                                    *
//***************************************************************************

#ifndef DUNE_TRANSPORTS_RADIO_RADIODRIVER_HPP_INCLUDED_
#define DUNE_TRANSPORTS_RADIO_RADIODRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace Transports
{
  namespace Radio
  {
    using DUNE_NAMESPACES;
    static const int c_bfr_size = 256;
    //! % RadioDriver provide an API for different radio telemetry devices
    //!
    //! @author João Teixeira.
    enum ReportType
    {
      NONE_REPORT,
      RSSI_REPORT,
      TDM_TIMING_MAX_DATA_PACKET_REPORT,
      TDM_TIMING_SILENCE_PERIOD_REPORT,
      TDM_TIMING_TX_WINDOW_REPORT,
      TDM_REPORT,
      DATA_REPORT,
      SIZE_REPORT
    };

    struct RadioConfParam
    {
      //! Radio Model
      std::string radio_model;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Serial port device.
      std::string uart_dev;
      //! radio power level
      std::string power_level;
      //! radio air spead
      std::string  air_speed;
      //! radio duty cycle
      std::string duty_cycle;
      //! radio number of channels
       std::string mum_channels;
      //! Network ID
      std::string net_id;
      //!  mavlink framing
      bool mavlink_framing;
      //! Vehicle to bind if i am a server
      std::string vehicle_name;
       //! Radio max frequency
      std::string max_frequency;
       //! Radio min frequency
      std::string min_frequency;
      //! radio hardware error correction
      bool error_correction;
      //! RSSI report
      bool rssi_report;
      //! TDM report
      bool tdm_report;
    };

    struct DeviceReports
    {
      // reports
      std::string rssi;
      std::string tdm_timing_max_data_packet;
      std::string tdm_timing_silence_period;
      std::string tdm_timing_tx_window;
      std::string tdm_report;
      std::string data_report;
      bool report_status[SIZE_REPORT];
    };

    class RadioDriver
    {
      public:
      DeviceReports device_reports;

      RadioDriver( RadioConfParam args , Tasks::Task* taskp = NULL):
      task(taskp),
      m_handle(NULL),
      radioParams(args)
      {
      }

     //! Default destructor.
      virtual
     ~RadioDriver(void)
     {
       Memory::clear(m_handle);
     }

      virtual int configDevice (void) = 0;
      virtual void process(const std::string msg) = 0;

      bool
      processNewReport()
      {
        std::string rxData;
        if (device_reports.data_report.size() > 6 && device_reports.report_status[DATA_REPORT] == true)
        {
          if (processCrc())
          {
            rxData = String::fromHex(device_reports.data_report);
            device_reports.report_status[DATA_REPORT] = false;
            device_reports.data_report.clear();
            driverRxRata.push(rxData);
            //task->trace( "New Telemetry Report size %d rxData: %s", (int) rxData.size(),rxData.c_str());
            return true;
          }
          device_reports.report_status[DATA_REPORT] = false;
        }
        return false;

      }

      bool
      newRxData(std::string& rx_data)
      {
        if(!driverRxRata.empty())
        {
          rx_data = driverRxRata.front();
          driverRxRata.pop();
          return true;
        }
        return false;
      }

      void
      clearNewRxData()
      {
       while (!driverRxRata.empty())
       {
          driverRxRata.pop();
       }
      }

      virtual void sendString(std::string& data) = 0;

      bool
      processCrc(void)
      {
        bool msg_validity = false;
        uint16_t crc, crc2;

        std::string msg = String::fromHex(device_reports.data_report.substr((device_reports.data_report.size() - 4), 4));
        std::memcpy(&crc2, msg.data(), 2);
        std::string m_datahex = String::fromHex(device_reports.data_report.erase((device_reports.data_report.size() - 4), 4));
        crc = CRC16::compute((uint8_t*) m_datahex.data(), m_datahex.size(),0);
        if (crc == crc2)
        {
          msg_validity = true;
        }
        else
        {   task->trace("crc %d %d %s",crc,crc2, device_reports.data_report.c_str());
            task->war("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
        }
        return msg_validity;
      }

      bool
      sendData(std::string txData)
      {
        //add crc
        uint16_t temp_crc = CRC16::compute((uint8_t*) txData.data(), txData.size(),0);
        uint16_t crc = ((0x00ff & temp_crc) << 8) + ((0xff00 & temp_crc) >> 8);
        std::string message_build = String::toHex(txData)+ String::str("%04X",(uint16_t) crc);
        sendString(message_build);
        task->trace( "RadioDriver: size %d txData: %s CRC %d ", (int) message_build.size(), message_build.c_str(), crc);
        return 1;
      }
      int
      maxDataPacket()
      {
        //todo update
        int max_data_packet = atoi(device_reports.tdm_timing_max_data_packet.c_str());
        return max_data_packet;
      }

      //! Read sentence.
      bool
      readSentence(void)
      {
        bool active = false;
        if (Poll::poll(*m_handle, 0.05))
        {
          char bfr[c_bfr_size];
          size_t rv = m_handle->readString(bfr, sizeof(bfr));
          for (size_t i = 0; i < rv; ++i)
          {
            // Detected line termination.
            if (bfr[i] == '\n')
            {
              process(m_line);
              processNewReport();
              m_last_line= m_line;
              m_line.clear();
            }
            else
            {
              if( bfr[i] != '+')
                m_line.push_back(bfr[i]);
            }
            active = true;
          }
        }
       return active;
      }

      bool
      openSocket(void)
      {
        char socket_addr[128] = { 0 };
        unsigned port = 0;

        if (std::sscanf(radioParams.uart_dev.c_str(), "tcp://%[^:]:%u", socket_addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(socket_addr, port);
        m_handle = sock;
        return true;
      }

      int
      connectToDevice()
      {
        try
        {
          if (openSocket())
            return 1;

          SerialPort* port = new SerialPort(radioParams.uart_dev, radioParams.uart_baud);
          port->setCanonicalInput(true);
          port->flush();
          m_handle = port;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
        return 1;
      }

      void
      processInputInit(double timeout = 0.05)
      {
        double deadline = Clock::get() + timeout;
        do
        {
          readSentence();
        }
        while (Clock::get() <= deadline);
      }

      bool
      processInput(double timeout = 0.05)
      {
        bool active = false;
        double deadline = Clock::get() + timeout;
        do
        {
          active=readSentence();
        }
        while (Clock::get() <= deadline);
        return active;
      }

    protected:

      Tasks::Task* task;
      // Save modem commands.
      IMC::DevDataText m_dev_data;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Current line.
      std::string m_line;
      //! last line.
      std::string m_last_line;
      //! radio Params
      RadioConfParam radioParams;

      std::queue<std::string> driverRxRata;

    };
  }
}

#endif

