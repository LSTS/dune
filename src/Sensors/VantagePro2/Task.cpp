//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Joao Costa                                                       *
// Based on: vproweather 1.0 by Joe Jaworski                                *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! This task reads data from the Davis Instruments Vantage Pro2 Weather Station.
  //!
  //! Periodicaly is sent a LOOP command to the serial data logger. It returns the 
  //! temperature, humidity, wind and rain values measured by the weather station.
  //! @author Joao Costa
  namespace VantagePro2
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_buffer = 128;

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud; 
    };

    //! Definition of Davis LOOP data packet
    struct LOOPData
    {
        uint8_t   yACK;           // -1 ACK from stream                          
        char      cL;             // 0  character "L"                            
        char      cO;             // 1  character "O"                            
        char      cO1;            // 2  character "O"                            
        char      cP;             // 3  character "P" (RevA) or the current      
                                  //    3-hour Barometer trend as follows:       
                                  //    196 = Falling Rapidly                    
                                  //    236 = Falling Slowly                     
                                  //    0   = Steady                             
                                  //    20  = Rising Slowly                      
                                  //    60  = Rising Rapidly                     
                                  // any other value is 3-hour data not available
        uint8_t   yPacketType;    // 4 Always zero for current firmware release  
        uint16_t  wNextRec;       // 5 loc in archive memory for next data packet
        uint16_t  wBarometer;     // 7 Current barometer as (Hg / 1000)          
        int16_t   wInsideTemp;    // 9 Inside Temperature as (DegF / 10)         
        uint8_t   yInsideHum;     // 11 Inside Humidity as percentage            
        int16_t   wOutsideTemp;   // 12 Outside Temperature as (DegF / 10)       
        uint8_t   yWindSpeed;     // 14 Wind Speed                               
        uint8_t   yAvgWindSpeed;  // 15 10-Minute Average Wind Speed             
        uint16_t  wWindDir;       // 16 Wind Direction in degress                
        int8_t    yXtraTemps[7];  // 18 Extra Temperatures                       
        int8_t    ySoilTemps[4];  // 25 Soil Temperatures                        
        int8_t    yLeafTemps[4];  // 29 Leaf Temperatures                        
        uint8_t   yOutsideHum;    // 33 Outside Humidity                         
        uint8_t   yXtraHums[7];   // 34 Extra Humidities                         
        uint16_t  wRainRate;      // 41 Rain Rate                                
        uint8_t   yUVLevel;       // 43 UV Level                                 
        uint16_t  wSolarRad;      // 44 Solar Radiation                          
        uint16_t  wStormRain;     // 46 Total Storm Rain                         
        uint16_t  wStormStart;    // 48 Start date of current storm              
        uint16_t  wRainDay;       // 50 Rain Today                               
        uint16_t  wRainMonth;     // 52 Rain this Month                          
        uint16_t  wRainYear;      // 54 Rain this Year                           
        uint16_t  wETDay;         // 56 Day ET                                   
        uint16_t  wETMonth;       // 58 Month ET                                 
        uint16_t  wETYear;        // 60 Year ET                                  
        uint32_t  wSoilMoist;     // 62 Soil Moistures                           
        uint32_t  wLeafWet;       // 66 Leaf Wetness                             
        uint8_t   yAlarmInside;   // 70 Inside Alarm bits                        
        uint8_t   yAlarmRain;     // 71 Rain Alarm bits                          
        uint16_t  yAlarmOut;      // 72 Outside Temperature Alarm bits           
        uint8_t   yAlarmXtra[8];  // 74 Extra Temp/Hum Alarms                    
        uint32_t  yAlarmSL;       // 82 Soil and Leaf Alarms                     
        uint8_t   yXmitBatt;      // 86 Transmitter battery status               
        uint16_t  wBattLevel;     // 87 Console Battery Level:                   
                                  //    Voltage = ((wBattLevel * 300)/512)/100.0 
        uint8_t   yForeIcon;      // 89 Forecast Icon                            
        uint8_t   yRule;          // 90 Forecast rule number                     
        uint16_t  wSunrise;       // 91 Sunrise time (BCD encoded, 24hr)         
        uint16_t  wSunset;        // 93 Sunset time  (BCD encoded, 24hr)         
        uint8_t   yLF;            // 95 Line Feed (\n) 0x0a                      
        uint8_t   yCR;            // 96 Carraige Return (\r) 0x0d                
        uint16_t  WCRC;           // 97 CRC check bytes (CCITT-16 standard)      
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Serial port handle.
      SerialPort *m_uart;
      //! Command to be sent via usart.
      char m_cmd[c_max_buffer];
      //! Serial input buffer.
      char m_buffer_in[c_max_buffer];
      //! DAVIS' LOOP data packet data.
      LOOPData m_LOOPData;
      //! Task arguments.
      Arguments m_args;

      /*//! count for fail rx uartm_args.cpu_cmd
      uint8_t m_fail_uart;
      //! Serial buffer in
      uint8_t m_bfr[128];
      //! Parser
      Parser *m_parse;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //! CSUM value
      uint8_t m_csum[c_max_csum];
      //! Message used to construct the command to be sent
      char m_msg[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;
      //! VP2 console state
      ConsoleStates m_console_state;*/

      //! Constructor.
      //! @param [in] name task name.
      //! @param [in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        param("Serial Port - Device", m_args.uart_dev)
            .defaultValue("/dev/ttyUSB0")
            .description("Serial port used to communicate with the meteo station");

        param("Serial Port - Baud Rate", m_args.uart_baud)
            .defaultValue("115200")
            .description("Serial port baudrate");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(false);
        m_uart->flush();
        // Do the rest of the configurations!
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          //m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      /* Serial Related Functions */

      //! Reads the next character from the serial device.
      //! @param buf Data buffer.
      //! @return number of bytes read.
      int 
      readNextChar(char *ch)
      {
        int nResult = 0;

        if (!Poll::poll(*m_uart, 1.0))
          return 0;

        nResult = m_uart->readString(ch, 1);
        if(nResult == -1)
        {
          err("Problem reading serial device.");
          exit(2);
        }

        return nResult;
      }

      //! Reads data to a buffer until no more characters are available. 
      //! @param buf Data buffer.
      //! @param nBufSize Buffer size.
      //! @return number of bytes read, or -1 if the buffer overflows.
      int
      readToBuffer(char *buf, int bufSize)
      {
        int nPos = 0;                 // current character position
        char *pBuf = buf;

        while(nPos < bufSize) {
          if(!readNextChar(pBuf++))
          {
            return nPos;              // no more characters available
          }
          ++nPos;
        }
        return -1;                    // buffer overflow
      }

    
    /*//! CheckCRC - Verifies the crc against a passed buffer. 
    //! @param nCnt 
    //! @param pData Data buffer 
    //! @return Returns the non-zero CRC code if error, zero if the crc passed.
    int CheckCRC(int nCnt, char *pData)
    {
      int i;
      uint16_t wCRC = 0;                  // zero checksum to start
      uint8_t y;

      for( i = 0; i < nCnt; i++) {
          y = *(pData)++;
          wCRC = crc_table[(wCRC >> 8) ^ y] ^ (wCRC << 8); // CCITT std
      }

      return wCRC;                    // if zero, it passed
    }*/
      
      /* Serial Command Functions */

      //! Wakes up the weather station per the Davis specs.
      //! @param [out] Returns zero if console fails to wake up
      int 
      wakeUp(void)
      {
        // Try to wake up the console 3 times.
        for(int i = 0; i < 3; i++)
        {
            char ch = '\n';
            // Send wake up char
            if(m_uart->write(&ch, 1) != 1)
            {
              err("Writing Error");
              exit(2);
            }
            if(readNextChar(&ch)) // read a char
            {
              printf("Weather station woke up after %d retries\n", i+1); 
              return 1; // Is awake now!
            }
        }
        return 0; // Failed to wake up
      }

      //! Creates a Log Book Entry with the VP2's firmware version
      //! @return Returns 1 if got version successfully
      int
      getVersion(void)
      {
        char ch;
        while(readNextChar(&ch));                       // clear channel and delay
        strcpy(m_cmd, "VER\n");                         // make Davis cmd string
        if(m_uart->writeString(m_cmd) != strlen(m_cmd))
        {   
          err("Error writing 'VER': %s",m_cmd);
          exit(2);
        }

        Delay::wait(1);
        
        int nCnt;
        nCnt = readToBuffer(m_buffer_in, sizeof(m_buffer_in));
        if(nCnt == -1)
        {
          err("Problem reading serial device.");
          exit(2);
        }
        war("Got %d characters\n", nCnt);
        *(m_buffer_in+nCnt) = '\0';                     // add EOL at the end of the message

        // Logs the version of the Vantage Pro2 firmware
        IMC::LogBookEntry log_entry;
        log_entry.type = IMC::LogBookEntry::LBET_INFO;
        log_entry.htime = Time::Clock::getSinceEpoch();
        log_entry.context = "Vantage Pro2 Firmware Version";
        log_entry.text = m_buffer_in;
        Delay::wait(0.2);
        dispatch(log_entry, DF_LOOP_BACK);

        return 1;
      }

    
      /*int
      setTime(void)
      {
        // Set weather station time
        war("Setting weather station time...");
        char ch;
        while(readNextChar(&ch));               // clear channel
        strcpy(m_cmd, "SETTIME\n");             // make Davis cmd string
        if(m_uart->writeString(m_cmd) != strlen(m_cmd))
        {   
          err("Error writing 'SETTIME': %s", m_cmd);
          exit(2);
        }
        readNextChar(&ch);                      // get ACK
        if(ch != 0x06) {
            err("Failed to get ACK.\n");
            exit(2);
        }else
        {
          printf("Received ACK, sending system time...\n");
        }
        
        //get system time. WIP!!!!!!
        time(&tt);
        stm = *localtime(&tt); 
        stm.tm_mon  += 1;

        szSerBuffer[0] = (char)stm.tm_sec;
        szSerBuffer[1] = (char)stm.tm_min;
        szSerBuffer[2] = (char)stm.tm_hour;
        szSerBuffer[3] = (char)stm.tm_mday;
        szSerBuffer[4] = (char)stm.tm_mon;
        szSerBuffer[5] = (char)stm.tm_year;
        i = CheckCRC(6, szSerBuffer);       // generate CRC
        szSerBuffer[6] = HIBYTE(i);         // send MSB first
        szSerBuffer[7] = LOBYTE(i);

        if(write(fdser, &szSerBuffer, strlen(szSerBuffer)) != strlen(szSerBuffer))
        {
            perror(szSWriteErr);
            exit(2);
        }
        tcdrain(fdser);
        Delay(1, 0L);

        ReadNextChar(fdser, &ch);           / get ACK from console
        if(ch != 0x06) {
            fprintf(stderr, "vproweather: CRC Failed, didn't get ACK (%d)\n", ch);
            exit(2);
        }
        else
        {
          printf("Received ACK, CRC good, time is now set.\n");
        }
      }*/

      //! Get real time data set (Davis LOOP data)
      //! @return Returns 1 if got data successfully
      int
      getRTData(void)
      {
        printf("Getting real time data set...\n");

        char ch;
        while(readNextChar(&ch));                           // clear channel and delay
        strcpy(m_cmd, "LOOP 1\n");                         // make Davis cmd string
        if(m_uart->writeString(m_cmd) != strlen(m_cmd))
        {   
          err("Error writing 'VER': %s",m_cmd);
          exit(2);
        }

        Delay::wait(1);
        
        int nCnt;
        nCnt = readToBuffer(m_buffer_in, sizeof(m_buffer_in));
        if(nCnt == -1)
        {
          err("Problem reading serial device.");
          exit(2);
        }
        war("Got %d characters\n", nCnt);
        *(m_buffer_in+nCnt) = '\0';                     // add EOL at the end of the message

        if(nCnt != 100)
        {
          err("Didn't get all data. Try changing delay parameter.\n");
            exit(2);
        }
        /*if((nCnt = CheckCRC(99, szSerBuffer+1))) {
            fprintf(stderr, "vproweather: CRC failure %d.\n", nCnt);
            exit(2);
        }
        war("CRC verified good on LOOP packet.\n");*/

        memcpy((char*)&m_LOOPData, m_buffer_in, sizeof(m_LOOPData));

        IMC::Temperature m_temp;
        m_temp.value = (m_LOOPData.wOutsideTemp * 10 - 32) / 1.8; //convert Fahrenheit To Celsius
        IMC::WindSpeed m_windSpd;
        m_windSpd.speed = m_LOOPData.yWindSpeed;
        m_windSpd.direction = Angles::radians(m_LOOPData.wWindDir);
        IMC::RelativeHumidity m_humidity;
        m_humidity.value = m_LOOPData.yOutsideHum;
        
        Delay::wait(0.2);

        dispatch(m_temp, DF_LOOP_BACK);
        dispatch(m_windSpd, DF_LOOP_BACK);
        dispatch(m_humidity, DF_LOOP_BACK);

        return 1;
      }
      

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // wake up the station
          war("Waking up the weather station");
          if(!wakeUp()) {
            war("Can't wake up weather station - no response.");
            exit(2);
          }
          
          if(getVersion())
          {
            war("Do I need to do something?");
          }

          if(getRTData())
          {
            war("Something went wrong while getting LOOP data.");
            exit(2);
          }

          if (m_uart != NULL)
          {
            //m_poll.remove(*m_uart);
            Memory::clear(m_uart);
          }

          waitForMessages(5.0);
        }
      }
    };
  }
}

DUNE_TASK
