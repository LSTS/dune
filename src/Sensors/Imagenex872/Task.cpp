//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
    //! Device driver for the Imagenex 872 "YellowFin" Sidescan Sonar.
    namespace Imagenex872
    {
        using DUNE_NAMESPACES;

        enum Side
        {
            SIDE_PORT,
            SIDE_STARBOARD
        };

        enum Index
        {
            // Range index.
                    SD_RANGE = 3,
            // Mode/Frequency index.
                    SD_MODE_FREQ = 7,
            // Data Gain index.
                    SD_DAT_GAIN = 8,
            // Balance Gain index.
                    SD_BAL_GAIN = 10,
            // TCP Packet index.
                    SD_TCP_PKT = 18
        };

        struct Arguments
        {
            // IPv4 address.
            Address addr;
            // TCP port.
            unsigned port;
            // Data gain.
            unsigned dat_gain;
            // Balance gain.
            unsigned bal_gain;
            // Default frequency.
            unsigned frequency;
            // Default range.
            unsigned range;
        };

        // List of available ranges.
        static const unsigned c_ranges[] = {10, 20, 30, 40, 50, 60, 80, 100, 125, 150, 200};
        // Count of available ranges.
        static const unsigned c_ranges_size = sizeof(c_ranges) / sizeof(c_ranges[0]);
        // List of range rates in ms.
        static const unsigned c_range_rates[] = {57, 57, 63, 76, 90, 102, 129, 156, 190, 223, 290};
        // List of available frequencies.
        static const unsigned c_freqs[] = {260, 330, 770};
        // Count of available frequencies.
        static const unsigned c_freqs_size = sizeof(c_freqs) / sizeof(c_freqs[0]);
        // List of beam width configurations.
        static const float c_beam_width[] = {75, 60, 30};
        // List of beam height configurations.
        static const float c_beam_height[] = {2.2, 1.8, 0.7};
        // Switch data size.
        static const uint32_t c_sdata_size = 27;
        // Return data header size.
        static const uint32_t c_rdata_hdr_size = 12;
        // Return data payload size.
        static const uint32_t c_rdata_dat_size = 1000;
        // Return data footer size.
        static const uint32_t c_rdata_ftr_size = 1;
        // Raw log file name
        static const std::string c_file_name = "data.872";
        // Total bytes to each ping
        static const uint16_t c_total_bytes_ping = 4096;
        // Data points channel
        static const uint16_t c_data_points_channel = 1000;
        // GPS string file offset
        static const uint16_t c_gps_string_file_offset = 3000;
        // Event/annotation counter
        static const uint16_t c_event_annotation_counter  = 0;
        // Number of bytes to previous ping
        static const uint16_t c_bytes_previous_ping = 8192;

        struct Task: public Tasks::Periodic
        {
            // TCP socket.
            TCPSocket* m_sock;
            // Output switch data.
            uint8_t m_sdata[c_sdata_size];
            // Return data.
            uint8_t m_rdata_hdr[c_rdata_hdr_size];
            // Return data.
            uint8_t m_rdata_ftr[c_rdata_ftr_size];
            // Single sidescan ping.
            IMC::SonarData m_ping;
            // Configuration parameters.
            Arguments m_args;
            // Dune context
            Context& m_ctx;
            // Raw log file
            std::ofstream m_data_file;
            // Raw log path
            std::string m_data_path;
            // Header to 872 file
            uint8_t m_header[c_total_bytes_ping];
            // Ping data
            uint8_t m_ping_data[2000];
            // Ping number counter
            uint32_t m_ping_number;
            // Estimated state
            IMC::EstimatedState m_estate;
            // Last valid sound speed value
            uint16_t m_sound_speed;
            // Time stamp of vehicle
            time_t m_time_stamp;
            // Receive estimated state message
            bool m_receive_estimated_state;
            // Receive dev data text message
            bool m_receive_dev_data_text;
            // Receive logging control message
            bool m_receive_log_control;

            Task(const std::string& name, Tasks::Context& ctx):
                    Tasks::Periodic(name, ctx),
                    m_sock(NULL),
                    m_ctx(ctx),
                    m_data_path(""),
                    m_ping_number(0),
                    m_sound_speed(1500),
                    m_receive_estimated_state(false),
                    m_receive_dev_data_text(false),
                    m_receive_log_control(false)
            {
                // Define configuration parameters.
                paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                            Tasks::Parameter::VISIBILITY_USER);

                param("IPv4 Address", m_args.addr)
                        .defaultValue("192.168.0.5")
                        .description("IP address of the sonar");

                param("TCP Port", m_args.port)
                        .defaultValue("4040")
                        .minimumValue("0")
                        .maximumValue("65535")
                        .description("TCP port");

                param("Data Gain", m_args.dat_gain)
                        .defaultValue("40")
                        .units(Units::Percentage)
                        .minimumValue("0")
                        .maximumValue("100")
                        .description("Data gain");

                param("Balance Gain", m_args.bal_gain)
                        .defaultValue("30")
                        .minimumValue("0")
                        .maximumValue("60")
                        .description("Balance gain");

                param(DTR_RT("Frequency"), m_args.frequency)
                        .visibility(Tasks::Parameter::VISIBILITY_USER)
                        .scope(Tasks::Parameter::SCOPE_MANEUVER)
                        .defaultValue("770")
                        .values("260, 330, 770")
                        .units(Units::Kilohertz)
                        .description(DTR("Operating frequency"));

                param(DTR_RT("Range"), m_args.range)
                        .visibility(Tasks::Parameter::VISIBILITY_USER)
                        .scope(Tasks::Parameter::SCOPE_MANEUVER)
                        .defaultValue("30")
                        .units(Units::Meter)
                        .valuesIf("Frequency", "260", "10, 20, 30, 40, 50, 60, 80, 100, 150, 200")
                        .valuesIf("Frequency", "330", "10, 20, 30, 40, 50, 60, 80, 100, 150, 200")
                        .valuesIf("Frequency", "770", "10, 20, 30, 40, 50")
                        .description(DTR("Operating range"));

                // Initialize switch data.
                std::memset(m_sdata, 0, sizeof(m_sdata));
                m_sdata[0] = 0xfe;
                m_sdata[1] = 0x44;
                m_sdata[26] = 0xfd;

                // Initialize return data.
                m_ping.data.resize(c_rdata_dat_size * 2);
                m_ping.type = IMC::SonarData::ST_SIDESCAN;
                m_ping.bits_per_point = 8;
                m_ping.scale_factor = 1.0f;

                bind<IMC::LoggingControl>(this);
                bind<IMC::EstimatedState>(this);
                bind<IMC::DevDataText>(this);
                bind<IMC::SoundSpeed>(this);
            }

            void
            onUpdateParameters(void)
            {
                setFrequency(m_args.frequency);
                setRange(m_args.range);
                setDataGain(m_args.dat_gain);
                setBalanceGain(m_args.bal_gain);

                if (paramChanged(m_args.addr) && m_sock != NULL)
                    throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

                if (paramChanged(m_args.port) && m_sock != NULL)
                    throw RestartNeeded(DTR("restarting to change TCP port"), 1);
            }

            void
            onResourceAcquisition(void)
            {
                m_sock = new TCPSocket();
                m_sock->setNoDelay(true);
            }

            void
            onResourceRelease(void)
            {
                Memory::clear(m_sock);

                if(m_data_file.is_open())
                    m_data_file.close();
            }

            void
            onResourceInitialization(void)
            {
                try
                {
                    m_sock->connect(m_args.addr, m_args.port);
                    pingBoth();
                    setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
                }
                catch (std::runtime_error& e)
                {
                    throw RestartNeeded(e.what(), 10.0, false);
                }
            }

            void
            onActivation(void)
            {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

            void
            onDeactivation(void)
            {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            }

            unsigned
            getIndex(unsigned value, const unsigned* table, unsigned table_size)
            {
                for (unsigned i = 0; i < table_size; ++i)
                {
                    if (value <= table[i])
                        return i;
                }

                return table_size - 1;
            }

            void
            setFrequency(unsigned value)
            {
                unsigned idx = getIndex(value, c_freqs, c_freqs_size);
                m_sdata[SD_MODE_FREQ] = (uint8_t)idx;
                m_ping.frequency = c_freqs[idx] * 1000;

                m_ping.beam_config.clear();
                IMC::BeamConfig bc;
                bc.beam_width = Math::Angles::radians(c_beam_width[idx]);
                bc.beam_height = Math::Angles::radians(c_beam_height[idx]);
                m_ping.beam_config.push_back(bc);
            }

            void
            setRange(unsigned value)
            {
                unsigned idx = getIndex(value, c_ranges, c_ranges_size);
                m_sdata[SD_RANGE] = (uint8_t)c_ranges[idx];
                m_ping.min_range = 0;
                m_ping.max_range = c_ranges[idx];
                Periodic::setFrequency(1.0 / (c_range_rates[idx] / 1000.0));
            }

            void
            setDataGain(unsigned value)
            {
                m_sdata[SD_DAT_GAIN] = (uint8_t) Math::trimValue(value, 0u, 100u);
            }

            void
            setBalanceGain(unsigned value)
            {
                m_sdata[SD_BAL_GAIN] = (uint8_t) Math::trimValue(value, 0u, 60u);
            }

            void
            ping(Side side)
            {
                m_sdata[SD_TCP_PKT] = (side == SIDE_STARBOARD) ? 0x02 : 0x00;
                m_sock->write((char*)m_sdata, c_sdata_size);

                int rv = m_sock->read((char*)m_rdata_hdr, c_rdata_hdr_size);
                if (rv != c_rdata_hdr_size)
                    throw std::runtime_error(DTR("failed to read header"));

                unsigned dat_idx = ((side == SIDE_STARBOARD) ? 1 : 0) * c_rdata_dat_size;
                rv = m_sock->read(&m_ping.data[dat_idx], c_rdata_dat_size);
                if (rv != c_rdata_dat_size)
                    throw std::runtime_error(DTR("failed to read data"));

                rv = m_sock->read((char*)m_rdata_ftr, c_rdata_ftr_size);
                if (rv != c_rdata_ftr_size)
                    throw std::runtime_error(DTR("failed to read footer"));

                // Correct port imagery.
                if (side == SIDE_PORT)
                {
                    for (unsigned i = 0; i < c_rdata_dat_size / 2; ++i)
                    {
                        char tmp = m_ping.data[i];
                        m_ping.data[i] = m_ping.data[c_rdata_dat_size - 1 - i];
                        m_ping.data[c_rdata_dat_size - 1 - i] = tmp;
                    }
                }
            }

            void
            pingBoth(void)
            {
                ping(SIDE_PORT);
                ping(SIDE_STARBOARD);
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                ++m_ping_number;
                std::memcpy(&m_ping_data[0], &m_ping.data.at(0), c_rdata_dat_size*2);
            }

            void
            consume(const IMC::LoggingControl* msg)
            {
                if (msg->getSource() != getSystemId())
                    return;

                switch (msg->op)
                {
                    case IMC::LoggingControl::COP_STARTED:
                    case IMC::LoggingControl::COP_CURRENT_NAME:

                        if(m_data_file.is_open())
                            m_data_file.close();

                        m_data_path = m_ctx.dir_log.c_str() + m_ctx.dir_log.extension() + "/" + msg->name +"/" + c_file_name;

                        if(isActive())
                            m_data_file.open(m_data_path.c_str(), std::ofstream::app | std::ios::binary);

                        spew("Openning raw log: %s", m_data_path.c_str());

                        m_receive_log_control = true;

                }
            }
            void
            consume(const IMC::EstimatedState* msg)
            {
                if (msg->getSource() != getSystemId())
                    return;

                m_receive_estimated_state = true;
                m_estate = *msg;
            }

            void
            consume(const IMC::SoundSpeed* msg)
            {
                if (msg->getSource() != getSystemId())
                    return;

                m_sound_speed = msg->value * 10;
            }

            void
            consume(const IMC::DevDataText* msg)
            {
                if (msg->getSource() != getSystemId())
                    return;

                m_receive_dev_data_text = true;
                m_time_stamp = msg->getTimeStamp();

            }

            std::string
            createRMC()
            {
                double time_reference = Math::round(m_time_stamp);
                time_t secs = (time_t)time_reference;
                double fraction = time_reference - secs;
                unsigned fsec = fraction * 100;
                Time::BrokenDown bdt(secs);
                std::string stn_str;

                double lat = m_estate.lat;
                double lon = m_estate.lon;

                Coordinates::toWGS84(m_estate, lat, lon);

                std::string lat_nmea = latitudeToNMEA(lat);
                std::string lon_nmea = longitudeToNMEA(lon);

                double vel = Math::norm(m_estate.vx, m_estate.vy);

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

            void
            getFileData() {

                memset(m_header, '\0', c_total_bytes_ping);

                m_header[0] = '8';
                m_header[1] = '7';
                m_header[2] = '2';

                //File version
                m_header[3] = '0';


                //Ping number
                m_header[4] = m_ping_number >> 24;
                m_header[5] = m_ping_number >> 16;
                m_header[6] = m_ping_number >>  8;
                m_header[7] = m_ping_number & 0xff;


                //Number of bytes that are written to the disk
                m_header[8] = c_total_bytes_ping >> 8;
                m_header[9] = c_total_bytes_ping & 0xff;


                //Data points per channel
                m_header[10] = c_data_points_channel >> 8;
                m_header[11] = c_data_points_channel & 0xff;


                //Bytes per data point - always 1
                m_header[12] = 1;

                //Data point bit depth - always 8
                m_header[13] = 8;

                //Gps type (GPRMC) and number of strings (1)  - 00100001
                m_header[14] = 0x21;

                //GPS string file offset - 3000
                m_header[15] = c_gps_string_file_offset >> 8;
                m_header[16] = c_gps_string_file_offset & 0xff;

                //Event/Annotation counter
                // TODO check if we need this
                m_header[17] = 0;
                m_header[18] = 0;

                // date
                struct tm *tm = localtime(&m_time_stamp);
                char date[12];
                strftime(date, sizeof(date), "%d-%b-%Y", tm);
                std::memcpy(&m_header[19], &date, 12);
                m_header[30] = '\0';
                inf("date %s", date);

                // time
                char time[9];
                strftime(time, sizeof(time), "%H:%M:%S", tm);
                std::memcpy(&m_header[31], &time, 9);
                m_header[39] = '\0';
                inf("time %s", time);

                // Thousandths of seconds
                float value = m_time_stamp/1000.0;
                uint8_t *bytes;
                bytes = reinterpret_cast<uint8_t*>(&value);
                m_header[40] = bytes[3];
                m_header[41] = bytes[2];
                m_header[42] = bytes[1];
                m_header[43] = bytes[0];
                m_header[44] = '\0';

                inf("seconds: %f",value);
                inf("seconds 0: %02x", bytes[0]);
                inf("seconds 1: %02x", bytes[1]);
                inf("seconds 2: %02x", bytes[2]);
                inf("seconds 3: %02x", bytes[3]);

                //Operating frequency
                m_header[45] = 0x02; //TODO don't hardcode

                //Range index
                m_header[46] = 0x07; //TODO don't hardcode

                //Data gain
                m_header[47] = 0x14; //TODO don't hardcode

                //Channel balance
                m_header[48] = 0x1e; //TODO don't hardcode

                //Repetition rate (time between pings)
                m_header[49] = m_args.frequency >> 8;
                m_header[50] = m_args.frequency & 0xff;

                //Sound velocity
                m_header[51] = m_sound_speed >> 8;
                m_header[52] = m_sound_speed & 0xff ;

                // 12 Byte file header
                std::memcpy(&m_header[53], &m_rdata_hdr, 12);

                // Reserved always 0
                m_header[66] = 0;
                m_header[67] = 0;
                m_header[68] = 0;
                m_header[69] = 0;

                //Sonar type
                m_header[70] = 1;

                //Real range
                m_header[71] = 0x07; //TODO don't hardcode

                // 0's fill 1
                char zeroFill1[928];
                memset(zeroFill1, '\0', 928);
                std::memcpy(&m_header[72], &zeroFill1, 928);

                // PORT & STARBOARD channel echo data fixme
                std::memcpy(&m_header[1000], &m_ping_data, c_rdata_dat_size * 2);


                // GPS Strings
                char gpsString[100];
                memset(gpsString, 0, 100);
                std::string sentence = createRMC();
                sprintf(gpsString, "%s", sentence.c_str());
                std::memcpy(&m_header[3000], &gpsString, 100);

                // 0's fill 2
                char zeroFill2[993];
                memset(zeroFill2, '\0' , 993);
                std::memcpy(&m_header[3100], &zeroFill2, 993);

                // previous ping
                //m_header[4094] = c_bytes_previous_ping;
                m_header[4094] = c_bytes_previous_ping >> 8;
                m_header[4095] = c_bytes_previous_ping & 0xFF;
            }

            void
            logRawData()
            {
                if(!m_receive_dev_data_text ||
                   !m_receive_log_control   ||
                   !m_receive_estimated_state) {
                    debug("Missing some message...");
                    return;
                }

                getFileData();
                m_data_file.write((const char*)m_header, c_total_bytes_ping);
            }


            void
            task(void)
            {
                consumeMessages();

                if (!isActive())
                    return;

                try
                {
                    pingBoth();
                    dispatch(m_ping);

                    if(!m_data_file.is_open())
                        m_data_file.open(m_data_path.c_str(), std::ofstream::app | std::ios::binary);

                    logRawData();
                }
                catch (std::exception& e)
                {
                    err("%s", e.what());
                    setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
                    throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
                }
            }
        };
    }
}

DUNE_TASK
