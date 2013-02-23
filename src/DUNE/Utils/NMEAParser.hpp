//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: NMEAParser.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_UTILS_NMEA_PARSER_HPP_INCLUDED_
#define DUNE_UTILS_NMEA_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <string>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbols.
    struct DUNE_DLL_SYM NMEASentence;
    class DUNE_DLL_SYM NMEAParser;

    enum NMEACommands
    {
      GGA = 1,
      RMC = 2,
      GSV = 3,
      GLL = 4,
      ZDA = 5,
      TXT = 6,
      VTG = 7
    };

    //! Suported NMEA sentences.
    struct NMEASentence
    {
      //! Sentence type.
      int type;

      //! Sentence data.
      union SentenceData
      {
        //! GPS fix data.
        struct GGA
        {
          //! UTC time of fix.
          double utc_time;
          //! Latitude.
          double latitude;
          //! Longitude.
          double longitude;
          //! Position fix indicator.
          int fix_quality;
          //! Number of satellites used.
          int satellites;
          //! Horizontal dilution of precision.
          double hdop;
          //! Altitude.
          double altitude;
          //! Height of geoid above WGS84 ellipsoid.
          double geoid_height;
          //! Age of differential corrections.
          int diff_age;
          //! Differential reference station ID.
          int diff_station;
        } gga;

        //! Latitude and longitude, with time of position fix and
        //! status.
        struct GLL
        {
          //! Latitude.
          double latitude;
          //! Longitude.
          double longitude;
          //! UTC time of fix.
          double utc_time;
          //! Data is valid.
          bool valid;
          //! Mode.
          int mode;
        } gll;

        //! Recommended Minimum data.
        struct RMC
        {
          //! UTC time of fix.
          double utc_time;
          //! Data is valid.
          bool valid;
          //! Latitude.
          double latitude;
          //! Longitude.
          double longitude;
          //! Speed over ground.
          double speed_og;
          //! Course over ground.
          double course_og;
          //! Date.
          double date;
          //! Mode.
          int mode;
        } rmc;
      } data;
    };

    class NMEAParser
    {
    public:
      NMEAParser(int garbage = 0);

      ~NMEAParser(void)
      { }

      bool
      parse(char byte, NMEASentence& sentence);

      static void
      parseCoordinate(const char* str, double& var, double def);

      static void
      parseUTCTime(const char* str, double& var, double def);

      static void
      parseInteger(const char* str, int& var);

      static void
      parseDouble(const char* str, double& var);

      inline std::string
      getSentence(void)
      {
        return m_sentence;
      }

      static bool
      validateChecksum(const char* bfr, int bfr_len);

    private:
      enum State
      {
        //! NMEA sentence start.
        STATE_START,
        //! Command portion of NMEA sentence.
        STATE_CMD,
        //! Data portion of NMEA sentence.
        STATE_DATA,
        //! First checksum character.
        STATE_CHECKSUM_1,
        //! Second checksum character.
        STATE_CHECKSUM_2
      };

      enum Constants
      {
        //! Maximum NMEA command length.
        MAX_CMD_LEN = 16,
        //! Maximum NMEA data length.
        MAX_DATA_LEN = 256
      };

      //! Current state of the parser.
      State m_state;
      //! Calculated NMEA sentence checksum.
      char m_csum;
      //! Received NMEA sentence checksum.
      char m_recv_csum;
      //! Index used for command and data.
      int m_idx;
      //! NMEA command.
      char m_cmd[MAX_CMD_LEN];
      //! Count of NMEA command leading garbage characters.
      int m_cmd_garbage;
      //! Current count of NMEA command leading garbage characters.
      int m_cmd_garbage_c;
      //! NMEA data.
      char m_data[MAX_DATA_LEN];
      //! Checksum as a string.
      char m_csum_str[3];
      //! Complete sentence.
      std::string m_sentence;
      //! Default transition after STATE_START.
      State m_dftrans;

      bool
      parseCommand(NMEASentence& sentence);

      bool
      parseGGA(NMEASentence& sentence);
    };
  }
}

#endif
