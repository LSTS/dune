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

#ifndef DUNE_UTILS_NMEA_PARSER_LEGACY_HPP_INCLUDED_
#define DUNE_UTILS_NMEA_PARSER_LEGACY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <string>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbols.
    struct DUNE_DLL_SYM NMEASentenceLegacy;
    class DUNE_DLL_SYM NMEAParserLegacy;

    enum NMEACommands
    {
      GGA = 1,
      RMC = 2,
      GSV = 3,
      GLL = 4,
      ZDA = 5,
      TXT = 6,
      VTG = 7,
      DBT = 8,
      MTW = 9,
      SSB = 10,
      SSA = 11,
      CTL = 12,
      VBW = 13,
      CFG = 14,
      NET = 15
    };

    enum CTLTypes
    {
      PROTOCOL = 1,
      HOPS = 2
    };

    //! Suported NMEA sentences.
    struct NMEASentenceLegacy
    {
      //! Make struct polymorphic for dynamic_cast.
      virtual
      ~NMEASentenceLegacy() {}

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

        //! Depth below transducer.
        struct DBT
        {
          //! Depth below transducer, [m].
          double depth;
        } dbt;

        //! Mean water temperature.
        struct MTW
        {
          //! Mean temperature of water, [C].
          double temp;
        } mtw;

        //! EvoLogics position.
        struct SSB
        {
          //! UTC time of position.
          double utc_time;
          //! Epoch time (TODO: remove this?).
          double epoch_time;
          //! Transponder ID.
          unsigned tid;
          //! Positioning device ID.
          unsigned did;
          //! Coordinate frame.
          enum
          {
            T, // Transceiver frame.
            B, // Body frame.
            H, // Horizontal frame.
            N, // NED frame.
            E, // ENU frame.
            G  // Geodetic (WGS84) frame.
          } cf;
          //! Origin point.
          enum
          {
            OP_T, // Transceiver.
            OP_V  // Vessel.
          } op;
          //! Transformation.
          enum
          {
            TR_T, // Raw.
            TR_R, // Ray traced.
            TR_P, // Pressure aided.
            TR_U  // Unprocessed.
          } tr;
          //! X.
          double x;
          //! Y.
          double y;
          //! Z.
          double z;
          //! Accuracy (degrees).
          double accuracy;
          //! RSSI (dB).
          double rssi;
          //! Integrity.
          double integrity;
        } ssb;

        //! EvoLogics bearing/elevation data.
        struct SSA
        {
          //! UTC time of position.
          double utc_time;
          //! Epoch time (TODO: remove this?).
          double epoch_time;
          //! Transponder ID.
          unsigned tid;
          //! Positioning device ID.
          unsigned did;
          //! Coordinate frame.
          enum
          {
            T, // Transceiver frame.
            B, // Body frame.
            H, // Horizontal frame.
            N, // NED frame.
            E, // ENU frame.
            G  // Geodetic (WGS84) frame.
          } cf;
          //! Transformation.
          enum
          {
            TR_T, // Raw.
            TR_R, // Ray traced.
            TR_P, // Pressure aided.
            TR_U  // Unprocessed.
          } tr;
          //! Bearing angle (degrees).
          double bearing;
          //! Elevation angle (degrees).
          double elevation;
          //! Accuracy (degrees).
          double accuracy;
          //! RSSI (dB).
          double rssi;
          //! Integrity.
          double integrity;
          //! Optional: Pressure (dBar).
          double pressure;
          //! Optional: Velocity (m/s).
          double velocity;
        } ssa;

        //! EvoLogics control message.
        struct CTL
        {
          int type;
          union Data
          {
            //! The protocol that is used.
            struct Protocol
            {
              //! Protocol.
              char protocol[128];
            } protocol;
            //! HoPS specific sentences.
            struct HoPS
            {
              //! Key.
              char key[128];
              //! Value.
              char value[128];
            } hops;
          } data;
        } ctl;

        //! Dual speed data.
        struct VBW
        {
          //! Longitudinal water speed, knots.
          double lon_water_speed;
          //! Transverse water speed, knots.
          double trans_water_speed;
        } vbw;

        //! Configuration data.
        struct CFG
        {
          //! Type
          enum
          {
            NONE,
            SET,
            GET,
            ERROR
          } type;
          //! Configuration parameter.
          char parameter[128];
          //! Configuration value.
          char value[128];
        } cfg;

        //! Configuration data.
        struct NET
        {
          //! Type.
          enum
          {
            TYPE_DELIVERY_SYSTEM_TOKEN,
            TYPE_TRANSMIT,
            TYPE_ACCEPTED,
            TYPE_DELIVERED,
            TYPE_RECEIVED,
            TYPE_CANCELED,
            TYPE_ERROR,
            TYPE_OTHER
          } type;
          union Data
          {
            struct Token
            {
              //! Delivery system token.
              unsigned token;
            } delivery_system_token;
            struct Msg
            {
              //! Source.
              unsigned src;
              //! Destination.
              unsigned dst;
              //! Priority.
              enum
              {
                PRIO_HIGH = 0,
                PRIO_NORMAL = 1,
                PRIO_ATTACHED = 255
              } prio;
              //! Token.
              unsigned token;
              //! Configuration value.
              char data[128];
            } msg;
          } data;
        } net;
      } data;
    };

    class NMEAParserLegacy
    {
    public:
      NMEAParserLegacy(int garbage = 0);

      ~NMEAParserLegacy(void)
      { }

      bool
      parse(char byte, NMEASentenceLegacy& sentence);

      bool
      parse(char *buffer, unsigned size, NMEASentenceLegacy& sentence);

      static void
      parseCoordinate(const char* str, double& var, double def);

      static void
      parseEpochTime(const char* str, double& var, double def);

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

      inline const char*
      getCmd(void) const
      {
        return m_cmd;
      }

      inline const char*
      getData(void) const
      {
        return m_data;
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

      virtual bool
      parseCommand(NMEASentenceLegacy& sentence);

      bool
      parseGGA(NMEASentenceLegacy& sentence);

      bool
      parseDBT(NMEASentenceLegacy& sentence);

      bool
      parseMTW(NMEASentenceLegacy& sentence);

      bool
      parseSSB(NMEASentenceLegacy& sentence);

      bool
      parseSSA(NMEASentenceLegacy& sentence);

      bool
      parseCTL(NMEASentenceLegacy& sentence);

      bool
      parseVBW(NMEASentenceLegacy& sentence);

      bool
      parseCFG(NMEASentenceLegacy& sentence);

      bool
      parseNET(NMEASentenceLegacy& sentence);
    protected:

      void
      rebuildSentence();

    };
  }
}

#endif
