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
// Author: Ana Santos                                                       *
//***************************************************************************
#ifndef DUNE_FRAME872_HPP
#define DUNE_FRAME872_HPP

// ISO C++ 98 headers.
#include <cstring>
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
    namespace Imagenex872 {
        using DUNE_NAMESPACES;

        //! Size of 872 frame.
        const unsigned c_ping_size = 4096;
        //! Data points channel
        static const uint16_t c_data_points_channel = 1000;
        //! GPS string file offset
        static const uint16_t c_gps_string_file_offset = 3200;
        //! Number of bytes to previous ping
        static const uint16_t c_bytes_previous_ping = 8192;

        //! Data logger base frame for Imagenex files.
        class Frame872 {
        public:

            //! Constructor.
            Frame872(void) {
                
                m_data.resize(c_ping_size, 0);
                m_data[0] = '8';
                m_data[1] = '7';
                m_data[2] = '2';
                m_data[3] = '0';

                //Number of bytes that are written to the disk
                m_data[8] = c_ping_size >> 8;
                m_data[9] = c_ping_size & 0xff;

                //Data points per channel
                m_data[10] = c_data_points_channel >> 8;
                m_data[11] = c_data_points_channel & 0xff;

                //Bytes per data point - always 1
                m_data[12] = 1;

                //Data point bit depth - always 8
                m_data[13] = 8;

                //Gps type (GPRMC) and number of strings (1)  - 00100001
                m_data[14] = 0x21;

                //GPS string file offset - 3200
                m_data[15] = c_gps_string_file_offset >> 8;
                m_data[16] = c_gps_string_file_offset & 0xff;

                //Event/Annotation counter
                m_data[17] = 0;
                m_data[18] = 0;

                //Range index
                m_data[46] = 0x07;

                // Reserved always 0
                m_data[66] = 0;
                m_data[67] = 0;
                m_data[68] = 0;
                m_data[69] = 0;

                //Sonar type
                m_data[70] = 0;

                // 0's fill 1
                char zeroFill1[928];
                memset(zeroFill1, '\0', 928);
                std::memcpy(&m_data[72], &zeroFill1, 928);

                // 0's fill 2
                char zeroFill2[993];
                memset(zeroFill2, '\0' , 993);
                std::memcpy(&m_data[3100], &zeroFill2, 993);

                // previous ping
                m_data[4094] = c_bytes_previous_ping >> 8;
                m_data[4095] = c_bytes_previous_ping & 0xFF;

            }

            //! Destructor
            ~Frame872(void) {}

            //! Get frame start address.
            //! @return pointer to address.
            const uint8_t*
            getData(void)
            {
                return &m_data[0];
            }

            //todo m_ping_number
            void
            setPingNumber(uint32_t ping_number){
                m_data[4] = ping_number >> 24;
                m_data[5] = ping_number >> 16;
                m_data[6] = ping_number >>  8;
                m_data[7] = ping_number & 0xff;
            }

            void
            setTimeInfo(){

               uint64_t epoch_time = Time::Clock::getSinceEpochMsec();

                // date
                time_t time_stamp = epoch_time / 1000;
                struct tm *tm = localtime(&time_stamp);
                char date[12];
                strftime(date, sizeof(date), "%d-%b-%Y", tm);
                std::memcpy(&m_data[19], &date, 12);
                m_data[30] = '\0';

                // time
                char time[9];
                strftime(time, sizeof(time), "%H:%M:%S", tm);
                std::memcpy(&m_data[31], &time, 9);
                m_data[39] = '\0';

                // Thousandths of seconds
                char buffer[3];
                sprintf(buffer,"%03d",  (int) (epoch_time % 1000));

                m_data[40] = '.';
                m_data[41] = buffer[0];
                m_data[42] = buffer[1];
                m_data[43] = buffer[2];
                m_data[44] = '\0';
            }

            void
            setOperationFrequency(unsigned exec_freq){
                m_data[45] = exec_freq;
            }

            void
            setDataGain(unsigned data_gain){
                m_data[47] = data_gain;
            }

            // Channel balance (balance gain)
            void
            setBalanceGain(unsigned balance_gain){
                m_data[48] = balance_gain;
            }

            // Repetition rate (time between pings)
            void
            setRepetitionRate(unsigned frequency){
                m_data[49] = frequency >> 8;
                m_data[50] = frequency & 0xff;
            }

            // Sound velocity
            void
            setSoundSpeed(uint16_t sound_speed){
                m_data[51] = sound_speed >> 8;
                m_data[52] = sound_speed & 0xff ;
            }

            // 12 Byte file header
            void
            setFileHeader(const uint8_t* data_header) {
                std::memcpy(&m_data[53], &data_header[0], 12);
            }

            //Real range
            void
            setRealRange(uint8_t range) {
                m_data[71] =  range;
            }

            // PORT & STARBOARD channel echo data
            void
            setData(const std::vector<char> ping_data) {
                std::memcpy(&m_data[1000], &ping_data.at(0), c_data_points_channel * 2);
            }

            // GPS Strings
            void
            setGpsString(const IMC::EstimatedState state) {
                char gpsString[100];
                memset(gpsString, 0, 100);
                std::string sentence = createRMC(state);
                sprintf(gpsString, "%s", sentence.c_str());
                std::memcpy(&m_data[3000], &gpsString, 100);
            }

            std::string
            createRMC(const IMC::EstimatedState state)
            {
                double time_reference = Math::round(Clock::getSinceEpochMsec());
                time_t secs = (time_t)time_reference;
                double fraction = time_reference - secs;
                unsigned fsec = fraction * 100;
                Time::BrokenDown bdt(secs);
                std::string stn_str;

                double lat = state.lat;
                double lon = state.lon;

                Coordinates::toWGS84(state, lat, lon);

                std::string lat_nmea = latitudeToNMEA(lat);
                std::string lon_nmea = longitudeToNMEA(lon);

                double vel = Math::norm(state.vx, state.vy);

                NMEAWriter stn("GPRMC");
                stn << String::str("%02u%02u%02u.%02u", bdt.hour, bdt.minutes, bdt.seconds, fsec)
                    << "A"
                    << lat_nmea
                    << lon_nmea
                    << vel * DUNE::Units::c_ms_to_knot
                    << 0 // azimuth.
                    << String::str("%02u%02u%02u", bdt.day, bdt.month, bdt.year - 2000)
                    << ""
                    << ""
                    << "A";

                return stn.sentence();
            }

        private:
            //! Message data.
            std::vector<uint8_t> m_data;
        };
    }
}

#endif //DUNE_FRAME872_HPP
