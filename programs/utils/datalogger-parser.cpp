//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Joel Cardoso                                                     *
//***************************************************************************
// Utility to parse datalogger binary files                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
//using DUNE_NAMESPACES;

class Parser
{
public:
  Parser(void)
  {
    //Initial state SATE_SYNC
    m_state = STATE_SYNC;
    m_channel = -1;
    m_sample_count = 0;
    m_sample = -1;
    // Initial value PS_NONE
    m_mti_state = PS_NONE;
  }

  void
  parse(uint8_t bfr, std::ofstream& parsedFile)
  {
    switch(m_state)
    {
      case STATE_SYNC:
        if (bfr == 0x3a)
        {
          m_state = STATE_CHAN;
        }
        break;

      case STATE_CHAN:
        if (bfr <= 0x2)
        {
          m_channel = bfr;
          m_state = STATE_DATA;
        }
        else
        {
          m_state = STATE_SYNC;
        }
        break;

      case STATE_DATA:
        m_state = STATE_SYNC;
        if (m_channel == 0)
        {
          ++m_sample_count;
          m_sample = bfr;
          if (m_sample == 0)
          {
            if(m_sample_count == 100)
            {
              collectData(parsedFile);
            }
            clear();
            m_sample_count = 0;
          }
        }
        else if (m_sample != -1)
        {
          m_buffer[m_channel - 1][m_sample].push_back(bfr);
        }
        break;
    }
  }

  void
  parseGPS(std::ofstream& parsedFile)
  {
    /*if (parts[0] == "GPZDA")
    {
      interpretGPZDA(parts);
    }
    else if (parts[0] == "GPGGA")
    {
      interpretGPGGA(parts);
    }
    else if (parts[0] == "GPVTG")
    {
      interpretGPVTG(parts);
    }
    else if (parts[0] == "PSAT")
    {
      if (parts[1] == "HPR")
        interpretPSATHPR(parts);
    }
    else if (parts[0] == "PUBX")
    {
      if (parts[1] == "00")
        interpretPUBX00(parts);
    }
    else if (parts[0] == "GPHDM")
    {
      interpretGPHDM(parts);
    }
    else if (parts[0] == "GPHDT")
    {
      interpretGPHDT(parts);
    }
    else if (parts[0] == "GPROT")
    {
      interpretGPROT(parts);
      }*/
  }

  void
  processGPSSentence(char* line, int line_len)
  {
  }

  int
  parseMTi(uint8_t bfr)
  {
    switch(m_mti_state)
    {
      // Parse message preamble
      case PS_NONE:
        if (bfr == c_mti_preamble)
        {
          m_mti_state = PS_BID;
          m_mti_csum = 0;
          m_mti_data_len = 0;
          m_mti_data_idx = 0;
        }
        break;

      // Parse message bus identifier
      case PS_BID:
        if (bfr == 0xFF)
        {
          m_mti_csum += bfr;
          m_mti_state = PS_MID;
        }
        break;

      // Parse message identifier
      case PS_MID:
        m_mti_csum += bfr;
        m_mti_state = PS_LEN;
        m_mti_mid = bfr;
        break;

       // Parse data length.
       case PS_LEN:
         m_mti_csum += bfr;
         m_mti_state = bfr ? PS_DATA : PS_CS;
         m_mti_data_len = bfr;
         break;

       // Parse data.
       case PS_DATA:
         m_mti_csum += bfr;
         m_mti_data[m_mti_data_idx++] = bfr;
         if (m_mti_data_idx == m_mti_data_len)
           m_mti_state = PS_CS;
         break;

       // Parse checksum
       case PS_CS:
         m_mti_csum += bfr;
         m_mti_state = PS_NONE;
         if (m_mti_csum & 0xFF)
         {
           // Print invalid checksum, data corrupted!
           return -1;
         }
         else
         {
           return m_mti_mid;
         }
         break;

       default:
         m_mti_state = PS_NONE;
         break;
    }

    return -2;
  }

  void
  collectData(std::ofstream& dataFile)
  {
    dataFile << std::endl << "GPS:" << std::endl;

    for (unsigned i = 0; i < 100; ++i)
    {
      for (unsigned j = 0; j < m_buffer[1][i].size(); ++j)
      {
        dataFile << m_buffer[1][i][j];
      }
    }
    dataFile << std::endl;

    for (unsigned i = 0; i < 100; ++i)
    {
      dataFile << "MTi:" << i;
      for (unsigned j = 0; j < m_buffer[0][i].size(); ++j)
      {
        if(parseMTi(m_buffer[0][i][j]) == 0x32)
        {
          dataFile << m_buffer[0][i][j];
        }
      }
      dataFile << std::endl;
    }
  }

  void
  clear(void)
  {
    for (unsigned i = 0; i < 2; ++i)
    {
      for (unsigned j = 0; j < 100; ++j)
      {
        m_buffer[i][j].clear();
      }
    }
  }

private:
  enum State
  {
    STATE_SYNC,
    STATE_CHAN,
    STATE_DATA
  };

  enum MTiParserState
  {
    // No message is being parsed.
    PS_NONE,
    // Preamble.
    PS_PRE,
    // Bus identifier.
    PS_BID,
    // Message identifier.
    PS_MID,
    // Data size.
    PS_LEN,
    // Data bytes.
    PS_DATA,
    // Message checksum.
    PS_CS
  };

  std::vector<uint8_t> m_buffer[2][100];
  State m_state;
  int m_channel;
  int m_sample;
  unsigned m_sample_count;

  // MTi parser variables
  // Current state machine state.
  MTiParserState m_mti_state;
  // Message preamble
  static const uint8_t c_mti_preamble = 0xFA;
  // Message maximum data lenght
  static const int c_mti_max_data_len = 255;
  // Message identifier
  uint8_t m_mti_mid;
  // Message data lenght
  uint8_t m_mti_data_len;
  // Message data index
  uint8_t m_mti_data_idx;
  // Message checksum
  unsigned int m_mti_csum;
 // Message data.
 uint8_t m_mti_data[c_mti_max_data_len];

  // GPS parser variables

};

int
main(int argc, char *argv[])
{
  if(argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << " <binary input file> " << "<text output file>" << std::endl;
    return 0;
  }

  std::ofstream outFile;
  std::ifstream inFile;
  Parser parser;
  uint8_t bfr;

  inFile.open(argv[1], std::ios::in | std::ios::binary);

  if (inFile.fail())
  {
    std::cerr << "Unable to open binary input file" << std::endl;
    return 0;
  }

  outFile.open(argv[2], std::ios::out);

  if (outFile.fail())
  {
    std::cerr << "Unable to open text output file" << std::endl;
    return 0;
  }

  while(!inFile.eof())
  {
    bfr = inFile.get();
    parser.parse(bfr, outFile);
  }
}
