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
    // Author: AnaSantos                                                        *
    //***************************************************************************

    // DUNE headers.
    #include <DUNE/DUNE.hpp>

    namespace Transports {
        namespace FalkorData {
            using DUNE_NAMESPACES;

            enum Code
            {
                GPGGA,
                GPGLL,
                GPHDT,
                GPRMC,
                GPROT,
                GPVTG,
                GPZDA,
                INGGK,
                INGST,
                PASHR,
                WIMWV,
                ERROR
            };

            std::string GPGGA_NAMES[] = {"utc=", ",lat=", ",lat dir=",",lon=",
            ",lon dir=", ",quality=", ",#sats=", ",hdop=", ",alt=", ",a-units=",
            ",undulation=", ",u-units=", ",age=", ",stn ID="};

            std::string GPGLL_NAMES[] = {"lat=", ",lat dir=", ",lon=",
             ",lon dir=", ",utc=", ",data status=", ",mode ind="};

            std::string GPHDT_NAMES[] = {"heading=", ",true="};

            std::string GPRMC_NAMES[] = {"utc=",",pos status=",",lat=",",lat dir=",
            ",lon=",",lon dir=",",speed kn=",",track true=",",date=",
            ",mag var=",",var dir=", ",mode ind="};

            std::string GPROT_NAMES[] = {"rate turn=",",validity="};

            std::string GPVTG_NAMES[] = {"track true=",",T=", ",track mag=", ",M=",
             ",ground speed=", ",speed-units=", ",ground speed=",",speed-units=", ",mode ind="};

            std::string GPZDA_NAMES[] = {"utc=",",day=",",month=",",year=",",local zone h=",",local zone min="};

            std::string INGGK_NAMES[] = {"c1=",",c2=", ",c3=",",c4=",",c5=", ",c6=", ",c7=", ",c8=",",c9=",
            ",c10=", ",c11="};

            std::string INGST_NAMES[] = {"c1=",",c2=", ",c3=",",c4=",",c5=", ",c6=", ",c7=", ",c8="};

            std::string PASHR_NAMES[] = {"time=",",heading=", ",true heading=",",roll=",",pitch=", ",reserved=",
            ",roll accurancy=", ",pitch accuracy=", ",heading accuracy=",",GPS quality flag=", ",INS status flag="};

            std::string WIMWV_NAMES[] = {"wind dir=",",dir ref=", ",wind speed=",",speed-units=",",sensor status="};

            std::string ERROR_NAMES[] = {"ERROR"};

            //! %Task arguments.
            struct Arguments {
                //! TCP Port
                uint16_t TCP_port;
                //! TCP Address
                Address TCP_addr;
            };

            struct Task : public DUNE::Tasks::Task {
                char m_buf[512];
                //! Task arguments.
                Arguments m_args;
                //! TCP socket
                Network::TCPSocket* m_TCP_sock;

                //! Constructor.
                //! @param[in] name task name.
                //! @param[in] ctx context.
                Task(const std::string &name, Tasks::Context &ctx) :
                        DUNE::Tasks::Task(name, ctx) {
                    param("TCP - Port", m_args.TCP_port)
                            .defaultValue("6004")
                            .description("Port for connection");
                    param("TCP - Address", m_args.TCP_addr)
                            .defaultValue("127.0.0.1")
                            .description("Address for connection");
                }

                //! Update internal state with new parameter values.
                void
                onUpdateParameters(void) {
                }

                //! Reserve entity identifiers.
                void
                onEntityReservation(void) {
                }

                //! Resolve entity names.
                void
                onEntityResolution(void) {
                }

                //! Acquire resources.
                void
                onResourceAcquisition(void) {
                    openConnection();
                }

                  //! Initialize resources.
                  void
                  onResourceInitialization(void) {
                  }

                  //! Release resources.
                  void
                  onResourceRelease(void) {
                      Memory::clear(m_TCP_sock);
                  }

                  //! Main loop.
                  void
                  onMain(void) {
                    while (!stopping()) {
                      //waitForMessages(1.0);

                        // Handle IMC messages from bus
                        consumeMessages();

                        // Handle data
                        if (m_TCP_sock)
                        {
                            if (!Poll::poll(*m_TCP_sock, 1.0))
                                continue;
                            handleFalkorData();
                        }
                        else
                        {
                            Time::Delay::wait(0.5);
                            openConnection();
                        }


                    }
                  }

                void
                openConnection(void)
                {
                    try {
                        m_TCP_sock = new TCPSocket;
                        m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
                        m_TCP_sock->setNoDelay(true);
                        inf(DTR("Falkor data - Tcp connection initialized"));
                    }
                    catch (...) {
                        Memory::clear(m_TCP_sock);
                        war(DTR("Connection failed, retrying..."));
                        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
                    }
                }

                Code resolveCode(const char *code) {
                    if( strcmp(code, "GPGGA") == 0)
                        return GPGGA;
                    if( strcmp(code, "GPGLL") == 0)
                        return GPGLL;
                    if( strcmp(code, "GPHDT") == 0)
                        return GPHDT;
                    if( strcmp(code, "GPRMC") == 0)
                        return GPRMC;
                    if( strcmp(code, "GPROT") == 0)
                        return GPROT;
                    if( strcmp(code, "GPVTG") == 0)
                        return GPVTG;
                    if( strcmp(code, "GPZDA") == 0)
                        return GPZDA;
                    if( strcmp(code, "INGGK") == 0)
                        return INGGK;
                    if( strcmp(code, "INGST") == 0)
                        return INGST;
                    if( strcmp(code, "PASHR") == 0)
                        return PASHR;
                    if( strcmp(code, "WIMWV") == 0)
                        return WIMWV;
                    return ERROR;
                }

                std::vector<std::string>
                getValues(NMEAReader &reader) {

                    std::vector<std::string> values;
                    std::string tmp;

                    while(!reader.eos()){
                        reader >> tmp;
                        values.push_back(tmp);
                    }
                  return values;
                }

                std::string
                getMessage(const std::string* names, const std::vector<std::string> &values) {
                    std::string list = "";

                    for(size_t i = 0; i < values.size(); i++){
                        list += names[i];
                        list += values[i];
                    }

                    return list;
                }

                std::string*
                getNames(NMEAReader &reader) {

                    debug("reader.code(): %s", reader.code());

                    switch (resolveCode(reader.code())) {
                        case GPGGA:
                            return GPGGA_NAMES;
                        case GPGLL:
                            return GPGLL_NAMES;
                        case GPHDT:
                            return GPHDT_NAMES;
                        case GPRMC:
                            return GPRMC_NAMES;
                        case GPROT:
                            return GPROT_NAMES;
                        case GPVTG:
                            return GPVTG_NAMES;
                        case GPZDA:
                            return GPZDA_NAMES;
                        case INGGK:
                            return INGGK_NAMES;
                        case INGST:
                            return INGST_NAMES;
                        case PASHR:
                            return PASHR_NAMES;
                        case WIMWV:
                            return WIMWV_NAMES;
                        default:
                            return ERROR_NAMES;
                    }
                }

                void
                handleFalkorData(void)
                {
                    int n = receiveData(m_buf, sizeof(m_buf));
                    if (n < 0) {
                        debug("Receive error");
                        return;
                    }

                  /*
                   // Dados seabird
                   IMC::UnderwayData msg;
                   msg.type = "Seabird SBE-45";
                   msg.list = std::string(m_buf);
                   dispatch(msg);
                   */

                    debug("RECEIVED: %s",m_buf);
                    std::string nmea_sentence(m_buf);
                    debug("nmea_sentence: %s",nmea_sentence.c_str());


                 try {
                    Parsers::NMEAReader reader(nmea_sentence);
                    IMC::UnderwayData msg;
                    msg.type = reader.code();

                    std::vector<std::string> values = getValues(reader);
                    std::string* names = getNames(reader);

                    msg.list = getMessage(names, values);

                    debug("MESSAGE SENDED: %s", (msg.list).c_str());

                    dispatch(msg);

                } catch(Exception ChecksumMismatch) {
                     war(DTR("Error in Check Sum"));
                 }
                }

                int
                receiveData(char* buf, size_t blen)
                {
                    if (m_TCP_sock)
                    {
                        try
                        {
                            return m_TCP_sock->read(buf, blen);
                        }
                        catch (std::runtime_error& e)
                        {
                            err("%s", e.what());
                            war(DTR("Connection lost, retrying..."));
                            Memory::clear(m_TCP_sock);

                            m_TCP_sock = new Network::TCPSocket;
                            m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
                            return 0;
                        }
                    }
                    return 0;
                }


            };
        }
    }

    DUNE_TASK
